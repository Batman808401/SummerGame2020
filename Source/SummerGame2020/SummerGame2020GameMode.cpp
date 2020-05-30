// Copyright Epic Games, Inc. All Rights Reserved.

#include "SummerGame2020GameMode.h"
#include "SummerGame2020PlayerController.h"
#include "SummerGame2020Character.h"
#include "UObject/ConstructorHelpers.h"

ASummerGame2020GameMode::ASummerGame2020GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASummerGame2020PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}