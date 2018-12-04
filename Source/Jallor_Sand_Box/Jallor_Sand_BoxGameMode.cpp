// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Jallor_Sand_BoxGameMode.h"
#include "Jallor_Sand_BoxCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJallor_Sand_BoxGameMode::AJallor_Sand_BoxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
