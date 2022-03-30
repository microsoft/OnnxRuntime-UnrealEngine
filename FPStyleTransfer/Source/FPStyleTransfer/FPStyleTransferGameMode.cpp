// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPStyleTransferGameMode.h"
#include "FPStyleTransferCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPStyleTransferGameMode::AFPStyleTransferGameMode(): Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
