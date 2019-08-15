// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSStealthGameMode.generated.h"

UCLASS(minimalapi)
class AFPSStealthGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFPSStealthGameMode();
	void CompleteMission(APawn* pawnInside, bool success);
	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
		void OnCompleteMission(APawn* pawnInside, bool success);

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Spectator")
		TSubclassOf<AActor> spectatingViewportClass;
};
