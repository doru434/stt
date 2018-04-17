// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"


ATank* ATankPlayerController::GetPlayerController() const
{
	return Cast<ATank>(GetPawn());
}
void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControledTank = GetPlayerController();
	if (!ControledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cant get TankController"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("TankController reporting for duty :) %s"), *ControledTank->GetName());
	}

}
