// Fill out your copyright notice in the Description page of Project Settings.


#include "StyleTransferBlueprintLibrary.h"

#include "RealtimeStyleTransferViewExtension.h"

UStyleTransferBlueprintLibrary::UStyleTransferBlueprintLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}
void UStyleTransferBlueprintLibrary::SetStyle(UNeuralNetwork* Model)
{
	Model->AddToRoot();
	FRealtimeStyleTransferViewExtension::SetStyle(Model);
}
