// Copyright (C) Microsoft. All rights reserved.

#pragma once


#include "SceneViewExtension.h"
#include "MyNeuralNetwork.h"


class FRealtimeStyleTransferViewExtension : public FSceneViewExtensionBase
{
public:
	FRealtimeStyleTransferViewExtension(const FAutoRegister& AutoRegister);

	static void SetStyle(UNeuralNetwork* Model);
	
	//~ ISceneViewExtension interface
	virtual void SetupViewFamily(FSceneViewFamily& InViewFamily) override {}
	virtual void SetupView(FSceneViewFamily& InViewFamily, FSceneView& InView) override {}
	virtual void BeginRenderViewFamily(FSceneViewFamily& InViewFamily) override {}
	virtual void PreRenderViewFamily_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneViewFamily& InViewFamily) override {}
	virtual void PreRenderView_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneView& InView) override {}
	virtual bool IsActiveThisFrame_Internal(const FSceneViewExtensionContext& Context) const override;
	virtual void SubscribeToPostProcessingPass(EPostProcessingPass PassId, FAfterPassCallbackDelegateArray& InOutPassCallbacks, bool bIsPassEnabled) override;
	
	FScreenPassTexture AfterTonemap_RenderThread(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessMaterialInputs& InOutInputs);

private:

	bool ViewExtensionIsActive;
	static UMyNeuralNetwork* myNetwork;
	TArray<FColor> RawImage;
	TArray<uint8> InputImageCPU;
	TArray<uint32> StylizedImageCPU;
	TArray<float> ModelInputImage;
	TArray<uint8> ModelOutputImage;
	int Width;
	int Height;
	void AddStylePass_RenderThread(FRDGBuilder& GraphBuilder, FRDGTextureRef SourceTexture);
	void CopyTextureFromGPUToCPU(FRHICommandListImmediate& RHICmdList, FRHITexture2D* Texture);
	void CopyTextureFromCPUToGPU(FRHICommandListImmediate& RHICmdList, FRHITexture2D* Texture);
	void ResizeScreenImageToMatchModel();
	void ResizeModelImageToMatchScreen();
	void ApplyStyle();


protected:
	FScreenPassTexture ApplyStyleTransfer(FRDGBuilder& GraphBuilder, const FSceneView& View, const FPostProcessMaterialInputs& InOutInputs, const FString& DDSFileName);
};

