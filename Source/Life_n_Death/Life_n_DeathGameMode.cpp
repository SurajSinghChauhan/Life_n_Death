// Copyright Epic Games, Inc. All Rights Reserved.

#include "Life_n_DeathGameMode.h"
#include "UObject/ConstructorHelpers.h"

ALife_n_DeathGameMode::ALife_n_DeathGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
