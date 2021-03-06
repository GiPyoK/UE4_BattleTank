// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent)) //, hidecategories = ("Collision"))
class BATTLETANK_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max CCW speed, and +1 is max CW speed
	void Rotate(float RelativeSpeed);

private:
	UPROPERTY(EditDefaultsOnly, category = "Setup")
	float MaxDegreesPerSecond = 45;	
	
};
