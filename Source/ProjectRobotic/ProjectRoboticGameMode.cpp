// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectRoboticGameMode.h"
#include "ProjectRoboticPlayerController.h"
#include "ProjectRoboticPawn.h"

AProjectRoboticGameMode::AProjectRoboticGameMode()
{
	// no pawn by default
	DefaultPawnClass = AProjectRoboticPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AProjectRoboticPlayerController::StaticClass();
}
