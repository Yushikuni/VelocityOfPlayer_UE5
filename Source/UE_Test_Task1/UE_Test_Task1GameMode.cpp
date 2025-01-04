// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_Test_Task1GameMode.h"
#include "UE_Test_Task1Character.h"
#include "UObject/ConstructorHelpers.h"

AUE_Test_Task1GameMode::AUE_Test_Task1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
