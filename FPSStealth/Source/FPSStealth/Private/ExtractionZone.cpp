// Fill out your copyright notice in the Description page of Project Settings.

#include "ExtractionZone.h"
#include "Components/BoxComponent.h"
#include "Components/DecalComponent.h"
#include "FPSStealthCharacter.h"
#include "FPSStealthGameMode.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AExtractionZone::AExtractionZone()
{
	// Create extraction zone box
	overlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapBoxComponent"));
	overlapBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	overlapBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	overlapBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	overlapBox->SetBoxExtent(FVector(200.0f));
	RootComponent = overlapBox;
	overlapBox->OnComponentBeginOverlap.AddDynamic(this, &AExtractionZone::HandleOverlap);

	decalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp"));
	decalComp->DecalSize = FVector(200.0f, 200.0f, 200.0f);
	decalComp->SetupAttachment(RootComponent);
}

void AExtractionZone::HandleOverlap(UPrimitiveComponent * overlappedComponent, AActor * otherActor, UPrimitiveComponent * otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult & sweepResult)
{
	AFPSStealthCharacter* myPawn = Cast<AFPSStealthCharacter>(otherActor);
	if (myPawn)
	{
		if (myPawn->isCarryingObjective)
		{
			AFPSStealthGameMode* gameMode = Cast<AFPSStealthGameMode>(GetWorld()->GetAuthGameMode());
			if (gameMode)
			{
				gameMode->CompleteMission(myPawn, true);
				UGameplayStatics::PlaySound2D(this, missionCompleteSound);
			}
		}
		else
		{
			UGameplayStatics::PlaySound2D(this, objectiveMissingSound);
		}

		UE_LOG(LogTemp, Log, TEXT("Overlapped zone"));
	}
}

