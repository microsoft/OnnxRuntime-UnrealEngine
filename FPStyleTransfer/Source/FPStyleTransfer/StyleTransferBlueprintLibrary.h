// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StyleTransferBlueprintLibrary.generated.h"

class UNeuralNetwork;

UCLASS()
class FPSTYLETRANSFER_API UStyleTransferBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	
	UFUNCTION(Exec, BlueprintCallable, Category = "Style Transfer")
	static void SetStyle(UNeuralNetwork* Model);
};