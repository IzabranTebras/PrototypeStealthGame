// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "AIGuard.generated.h"

class UPawnSensingComponent;

UENUM(BlueprintType)
enum class EAIState : uint8
{
	PATROLLING,
	SUSPICIOUS,
	ALERTED
};

UCLASS()
class FPSSTEALTH_API AAIGuard : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAIGuard();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		UPawnSensingComponent* sensorComponent;

	UPROPERTY(EditAnywhere, Category = "Components")
		float timeToBackToGuard = 3.0f;

	UPROPERTY(EditInstanceOnly, Category = "Components")
		TArray<AActor*> patrolPoints;

	UFUNCTION()
		void OnPawnSeen(APawn* seenPawn);

	UFUNCTION()
		void OnNoiseHeard(APawn* noisy, const FVector& location, float volume);

	UFUNCTION()
		void ResumePatrol();

	void SetGuardState(EAIState newState);

	UFUNCTION(BlueprintImplementableEvent, Category = "UI")
	void OnStateChanged(EAIState newState);

	EAIState guardState;

private:
	void GoToNextPoint();
	void ResumeMovementToPatrolPoint();

	AAIController* aiController;
	FRotator originalRotation = FRotator::ZeroRotator;
	FTransform targetTrans;
	FTimerHandle timeHandleResetRot;
	int nextPointInPatrol;
	float distanceToChangeTarget = 80.0f;
};
