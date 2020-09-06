// Fill out your copyright notice in the Description page of Project Settings.


#include "DestructibleWidget.h"

void UDestructibleWidget::UpdateDestructibleWidget(class UDestructibleComponent* p_DestructibleComponent)
{
	OwningDestructibleComponent = p_DestructibleComponent;
	OnUpdateDestructibleWidget();
}
