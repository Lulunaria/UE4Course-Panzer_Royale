// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"




void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();

	UE_LOG(LogTemp, Warning, TEXT("Begin Play Player Controller"));
	if (ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Controlled by %s"), *(ControlledTank->GetName()));
	}
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Controlled by computer"));
	}
}

ATank* ATankPlayerController::GetControlledTank() const
{
	
	return Cast<ATank>(GetPawn());
}