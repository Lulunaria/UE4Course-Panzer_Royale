// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"




void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();

	UE_LOG(LogTemp, Warning, TEXT("Begin Play Player Controller"));
	if (ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s is Controlled by player"), *(ControlledTank->GetName()));
	}

}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimAtCrossbar()
{
	if (!GetControlledTank()) { return; }
}
