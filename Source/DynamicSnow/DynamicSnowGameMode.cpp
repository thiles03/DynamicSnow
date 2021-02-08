// Copyright Epic Games, Inc. All Rights Reserved.

#include "DynamicSnowGameMode.h"
#include "DynamicSnowCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADynamicSnowGameMode::ADynamicSnowGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
