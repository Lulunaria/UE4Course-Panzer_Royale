// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PANZERROYALE_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	
	ATank* GetControlledTank() const;

	//Turn the barrel so that the bullet aim at where the crossbar point to 
	void AimAtCrossbar();
	
};
