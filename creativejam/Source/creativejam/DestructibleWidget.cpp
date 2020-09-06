// Fill out your copyright notice in the Description page of Project Settings.


#include "DestructibleWidget.h"

void UDestructibleWidget::UpdateDestructibleWidget(class UDestructibleComponent* p_DestructibleComponent)
{
	OwningDestrucctibleComponent = p_DestructibleComponent;
	OnUpdateDestructibleWidget();
}
