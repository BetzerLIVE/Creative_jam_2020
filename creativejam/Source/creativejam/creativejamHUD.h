// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "creativejamHUD.generated.h"

UCLASS()
class AcreativejamHUD : public AHUD
{
	GENERATED_BODY()

public:
	AcreativejamHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

