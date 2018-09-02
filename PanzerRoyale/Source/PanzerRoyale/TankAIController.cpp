// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/World.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto AIControlledTank = GetAIControlledTank();
	auto PlayerControlledTank = GetPlayerControlledTank();

	if(AIControlledTank)
	{
		UE_LOG(LogTemp,Warning,TEXT("%s controlled by AI"),*(AIControlledTank->GetName()))
	}

	if(PlayerControlledTank)
	{
		UE_LOG(LogTemp,Warning,TEXT("%s detected"),*(PlayerControlledTank->GetName()))
	}
}





ATank* ATankAIController::GetAIControlledTank()const
{
	return Cast<ATank>(GetPawn());
}
ATank* ATankAIController::GetPlayerControlledTank()const
{
	auto PlayerTank = (GetWorld()->GetFirstPlayerController()->GetPawn());
	if (!PlayerTank)
	{
		return nullptr;
	}
	
	return Cast<ATank>(PlayerTank);
}

