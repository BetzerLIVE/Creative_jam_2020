// Fill out your copyright notice in the Description page of Project Settings.

#include "DestructibleWidget.h"
#include "DestructibleComponent.h"

UDestructibleComponent::UDestructibleComponent()
{
	SetComponentTickEnabled(false);

	InteractionDistance = 1000.f;
	DestructibleNameText = FText::FromString("Building");
	DestructibleLevel = 0;

	Space = EWidgetSpace::Screen;
	DrawSize = FIntPoint(400, 100);
	bDrawAtDesiredSize = true;

	SetActive(true);
	SetHiddenInGame(true);

	MaxHealth = 100.f;

	CurrentHealth = MaxHealth;
}

float UDestructibleComponent::GetRemainingHealth()
{
	return CurrentHealth;
}

void UDestructibleComponent::SetHealth(float p_health)
{
	CurrentHealth = p_health;
}

void UDestructibleComponent::RefreshWidget()
{
	if (!bHiddenInGame)
	{
		if (UDestructibleWidget* destrucctiblewidget = Cast<UDestructibleWidget>(GetUserWidgetObject()))
		{
			destrucctiblewidget->UpdateDestructibleWidget(this);
		}
	}
}

void UDestructibleComponent::BeginFocus(class AcreativejamCharacter* Character)
{
	OnBeginFocus.Broadcast(Character);

	SetHiddenInGame(false);

	for (auto& VisualComp : GetOwner()->GetComponentsByClass(UPrimitiveComponent::StaticClass()))
	{
		if (UPrimitiveComponent* Prim = Cast<UPrimitiveComponent>(VisualComp))
		{
			Prim->SetRenderCustomDepth(true);
		}
	}
	RefreshWidget();
}

void UDestructibleComponent::EndFocus(class AcreativejamCharacter* Character)
{
	OnEndFocus.Broadcast(Character);

	SetHiddenInGame(true);

	for (auto& VisualComp : GetOwner()->GetComponentsByClass(UPrimitiveComponent::StaticClass()))
	{
		if (UPrimitiveComponent* Prim = Cast<UPrimitiveComponent>(VisualComp))
		{
			Prim->SetRenderCustomDepth(false);
		}
	}
	
}

void UDestructibleComponent::Punch(class AcreativejamCharacter* Character)
{
	if (Character->Currentlevel >= DestructibleLevel)
	{
		OnPunch.Broadcast(Character);
	}
}

void UDestructibleComponent::Kick(class AcreativejamCharacter* Character)
{
	if (Character->Currentlevel >= DestructibleLevel)
	{
		OnKick.Broadcast(Character);
	}
}
