// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IWeapon.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIWeapon : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class JALLOR_SAND_BOX_API IIWeapon
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	void PrimaryWeapon();
	void SecondaryWeapon();
};
