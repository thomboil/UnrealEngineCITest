// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BasicShooterGameGameMode.h"
#include "BasicShooterGameHUD.h"
#include "BasicShooterGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABasicShooterGameGameMode::ABasicShooterGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABasicShooterGameHUD::StaticClass();
}
