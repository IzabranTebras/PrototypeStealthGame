// Fill out your copyright notice in the Description page of Project Settings.

#include "Objective.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AObjective::AObjective()
{
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh component"));
	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = meshComp;
	sphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere component"));
	sphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	sphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	sphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	sphereComp->SetupAttachment(meshComp);
}

// Called when the game starts or when spawned
void AObjective::BeginPlay()
{
	Super::BeginPlay();
	
}

void AObjective::PlayEffects()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, PickupFX, GetActorLocation());
}

void AObjective::NotifyActorBeginOverlap(AActor * OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	AFPSStealthCharacter* myCharacter = Cast<AFPSStealthCharacter>(OtherActor);
	if (myCharacter)
	{
		PlayEffects();
		myCharacter->isCarryingObjective = true;
		Destroy();
	}
}

