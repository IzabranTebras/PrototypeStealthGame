// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FPSStealthGameMode.h"
#include "FPSStealthHUD.h"
#include "FPSStealthCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSStealthGameMode::AFPSStealthGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSStealthHUD::StaticClass();
}
