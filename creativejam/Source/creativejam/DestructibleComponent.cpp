// Fill out your copyright notice in the Description page of Project Settings.

#include "DestructibleWidget.h"
#include "DestructibleComponent.h"

UDestructibleComponent::UDestructibleComponent()
{
	SetComponentTickEnabled(false);

	InteractionDistance = 1000.f;
	DestructibleNameText = FText::FromString("Building");

	Space = EWidgetSpace::Screen;
	DrawSize = FIntPoint(400, 100);
	bDrawAtDesiredSize = true;

	SetActive(true);
	SetHiddenInGame(true);

	MaxHealth = 100.f;

	CurrentHealth = MaxHealth;
}

FText UDestructibleComponent::GetDestructibleNameText()
{
	return DestructibleNameText;
}

int UDestructibleComponent::GetDestructibleLevel()
{
	return CurrentHealth;
}

float UDestructibleComponent::GetRemainingHealth()
{
	return CurrentHealth;
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

void UDestructibleComponent::OnGettingAttacked(class AcreativejamCharacter* Character)
{

}
