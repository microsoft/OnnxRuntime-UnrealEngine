// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
// NNI Plugin
#include "NeuralNetwork.h"
// OpenCV Plugin
#include "PreOpenCVHeaders.h"
#include "OpenCVHelper.h"
#include <ThirdParty/OpenCV/include/opencv2/imgproc.hpp>
#include <ThirdParty/OpenCV/include/opencv2/highgui/highgui.hpp>
#include <ThirdParty/OpenCV/include/opencv2/core.hpp>
#include "PostOpenCVHeaders.h"


#include "MyNeuralNetwork.generated.h"

UCLASS()
class FPSTYLETRANSFER_API UMyNeuralNetwork : public UNeuralNetwork
{
	GENERATED_BODY()

	public:
		UPROPERTY(Transient)
		UNeuralNetwork* Network = nullptr;
		UMyNeuralNetwork();
		void URunModel(TArray<float>& image, TArray<uint8>& results);
	
};



