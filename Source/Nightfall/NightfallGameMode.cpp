// Copyright Epic Games, Inc. All Rights Reserved.

#include "NightfallGameMode.h"
#include "NightfallHUD.h"
#include "NightfallCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANightfallGameMode::ANightfallGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANightfallHUD::StaticClass();
}
