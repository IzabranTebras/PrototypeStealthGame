// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FPSStealthGameMode.h"
#include "FPSStealthHUD.h"
#include "FPSStealthCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

AFPSStealthGameMode::AFPSStealthGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSStealthHUD::StaticClass();
}

void AFPSStealthGameMode::CompleteMission(APawn* pawnInside, bool success)
{
	if (pawnInside)
	{
		pawnInside->DisableInput(nullptr);

		if (spectatingViewportClass)
		{
			TArray<AActor*> returnedActors;
			UGameplayStatics::GetAllActorsOfClass(this, spectatingViewportClass, returnedActors);

			// Change view target if any valid actor found
			if (returnedActors.Num() > 0)
			{
				AActor* newViewTarget = returnedActors[0];
				APlayerController* pc = Cast<APlayerController>(pawnInside->GetController());
				if (pc)
				{
					pc->SetViewTargetWithBlend(newViewTarget, 0.5f, EViewTargetBlendFunction::VTBlend_Cubic);
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("SpectatingViewportClass is nullptr. Please update game mode class with valid subclass. Cannot change spectating view target."))
		}
		OnCompleteMission(pawnInside, success);
	}
}