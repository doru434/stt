// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Tanks/Public/Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TANKS_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
private:
	ATank* Tank = nullptr;
public:
	ATank* GetPlayerController() const;

	void BeginPlay() override;
};
