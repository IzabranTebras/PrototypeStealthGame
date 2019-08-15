// Fill out your copyright notice in the Description page of Project Settings.

#include "AIGuard.h"
#include "Perception/PawnSensingComponent.h"
#include "DrawDebugHelpers.h"
#include "../Public/AIGuard.h"
#include "FPSStealthGameMode.h"

// Sets default values
AAIGuard::AAIGuard()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	guardState = EAIState::PATROLLING;
	sensorComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensorComponent"));
	nextPointInPatrol = -1;
}

// Called when the game starts or when spawned
void AAIGuard::BeginPlay()
{
	Super::BeginPlay();
	aiController = Cast<AAIController>(GetController());
	sensorComponent->OnSeePawn.AddDynamic(this, &AAIGuard::OnPawnSeen);
	sensorComponent->OnHearNoise.AddDynamic(this, &AAIGuard::OnNoiseHeard);
	originalRotation = GetActorRotation();
	GoToNextPoint();
}

void AAIGuard::OnPawnSeen(APawn* seenPawn)
{
	if (seenPawn != nullptr) 
	{
		DrawDebugSphere(GetWorld(), seenPawn->GetActorLocation(), 32.0f, 12, FColor::Yellow, false, 10.0f);
		targetTrans = seenPawn->GetActorTransform();

		AFPSStealthGameMode* gameMode = Cast<AFPSStealthGameMode>(GetWorld()->GetAuthGameMode());
		if (gameMode)
		{
			gameMode->CompleteMission(seenPawn, false);
		}
		SetGuardState(EAIState::ALERTED);
	}
}

void AAIGuard::OnNoiseHeard(APawn * noisy, const FVector & location, float volume)
{
	if (guardState != EAIState::ALERTED) 
	{
		DrawDebugSphere(GetWorld(), location, 32.0f, 12, FColor::Green, false, 10.0f);

		FVector direction = location - GetActorLocation();
		direction.Normalize();

		FRotator newRotation = FRotationMatrix::MakeFromX(direction).Rotator();
		newRotation.Pitch = 0.0f;
		newRotation.Roll = 0.0f;
		SetActorRotation(newRotation);

		GetWorldTimerManager().ClearTimer(timeHandleResetRot);
		GetWorldTimerManager().SetTimer(timeHandleResetRot, this, &AAIGuard::ResumePatrol, timeToBackToGuard);
		SetGuardState(EAIState::SUSPICIOUS);
	}
}

void AAIGuard::ResumePatrol()
{
	if (guardState != EAIState::ALERTED)
	{
		SetActorRotation(originalRotation);
		SetGuardState(EAIState::PATROLLING);
	}
}

void AAIGuard::SetGuardState(EAIState newState)
{
	if (newState != guardState && guardState != EAIState::ALERTED) 
	{
		guardState = newState;
		OnStateChanged(guardState);
	}

	switch (newState)
	{
	case EAIState::ALERTED:
		aiController->MoveToLocation(targetTrans.GetLocation());
		break;
	case EAIState::PATROLLING:
		targetTrans.SetIdentity();
		ResumeMovementToPatrolPoint();
		break;
	case EAIState::SUSPICIOUS:
		aiController->StopMovement();
		break;
	default:
		break;
	}
}

void AAIGuard::GoToNextPoint()
{
	++nextPointInPatrol;
	if (nextPointInPatrol >= patrolPoints.Num()) 
	{
		nextPointInPatrol = 0;
	}
	aiController->MoveToLocation(patrolPoints[nextPointInPatrol]->GetActorLocation());
}

void AAIGuard::ResumeMovementToPatrolPoint()
{
	aiController->MoveToLocation(patrolPoints[nextPointInPatrol]->GetActorLocation());
}

// Called every frame
void AAIGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float currentDistance = 0.0f;
	FVector vectoricedDistance;
	if (guardState != EAIState::ALERTED) 
	{
		vectoricedDistance = patrolPoints[nextPointInPatrol]->GetActorLocation() - GetActorLocation();
		currentDistance = vectoricedDistance.Size();
		if(currentDistance < distanceToChangeTarget)
		{
			GoToNextPoint();
		}
	}
	else
	{
		vectoricedDistance = targetTrans.GetLocation() - GetActorLocation();
		currentDistance = vectoricedDistance.Size();
		if (currentDistance < distanceToChangeTarget)
		{
			aiController->StopMovement();
		}
	}
}