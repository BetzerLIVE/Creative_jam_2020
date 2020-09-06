// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DestructibleComponent.h"
#include "DestructibleWidget.generated.h"

/**
 * 
 */
UCLASS()
class CREATIVEJAM_API UDestructibleWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Destructible")
	void UpdateDestructibleWidget(class UDestructibleComponent* p_DestructibleComponent);


	UFUNCTION(BlueprintImplementableEvent)
	void OnUpdateDestructibleWidget();

	UPROPERTY(BlueprintReadOnly, Category = "Destructible", meta = (ExposeOnSpawn))
	class UDestructibleComponent* OwningDestructibleComponent;


};
