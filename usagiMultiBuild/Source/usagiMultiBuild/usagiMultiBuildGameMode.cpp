// Copyright Epic Games, Inc. All Rights Reserved.

#include "usagiMultiBuildGameMode.h"
#include "usagiMultiBuildCharacter.h"
#include "UObject/ConstructorHelpers.h"

AusagiMultiBuildGameMode::AusagiMultiBuildGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
