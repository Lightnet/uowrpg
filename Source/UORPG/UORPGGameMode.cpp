// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "UORPG.h"
#include "UORPGGameMode.h"
#include "UORPGCharacter.h"

AUORPGGameMode::AUORPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
