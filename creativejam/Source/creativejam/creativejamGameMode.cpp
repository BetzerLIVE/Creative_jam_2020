// Copyright Epic Games, Inc. All Rights Reserved.

#include "creativejamGameMode.h"
#include "creativejamHUD.h"
#include "creativejamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AcreativejamGameMode::AcreativejamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AcreativejamHUD::StaticClass();
}
