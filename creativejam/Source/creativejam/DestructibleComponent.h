// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "creativejamCharacter.h"
#include "DestructibleComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeginFocus, class AcreativejamCharacter*, Character);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndFocus, class AcreativejamCharacter*, Character);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPunch, class AcreativejamCharacter*, Character);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKick, class AcreativejamCharacter*, Character);
/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CREATIVEJAM_API UDestructibleComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:

	UDestructibleComponent();

	//The max distance the player can be away from this actor before you can interact
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Destructible")
	float InteractionDistance;

	//The name that will come up when the player looks at the interactable
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Destructible")
	FText DestructibleNameText;

	//[local + server] Called when the player presses the interact key whilst focusing on this interactable actor
	UPROPERTY(EditDefaultsOnly, BlueprintAssignable)
	FOnBeginFocus OnBeginFocus;

	//[local + server] Called when the player releases the interact key, stops looking at the interactable actor, or gets too far away after starting an interact
	UPROPERTY(EditDefaultsOnly, BlueprintAssignable)
	FOnEndFocus OnEndFocus;

	//[local + server] Called when the player has interacted with the item for the required amount of time
	UPROPERTY(EditDefaultsOnly, BlueprintAssignable)
	FOnPunch OnPunch;

	UPROPERTY(EditDefaultsOnly, BlueprintAssignable)
	FOnKick OnKick;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Health")
	float MaxHealth;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health")
	float CurrentHealth;

	UFUNCTION(BlueprintCallable)
	float GetRemainingHealth();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Destructible")
	int DestructibleLevel;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Destructible")
	int DestructibleExp;

	UFUNCTION(BlueprintCallable)
	void SetHealth(float p_health);

	void RefreshWidget();

	void BeginFocus(class AcreativejamCharacter* Character);
	void EndFocus(class AcreativejamCharacter* Character);

	void Punch(class AcreativejamCharacter* Character);

	void Kick(class AcreativejamCharacter* Character);
};
