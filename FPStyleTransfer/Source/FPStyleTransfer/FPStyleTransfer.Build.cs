// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class FPStyleTransfer : ModuleRules
{
	public FPStyleTransfer(ReadOnlyTargetRules Target) : base(Target)
	{

		PrivateIncludePaths.AddRange(
		   new string[] {
				//"../../../../../Source/Runtime/Renderer/Private",
				Path.Combine(EngineDirectory, "Source/Runtime/Renderer/Private"),
			   // ... add other private include paths required here ...
		   }
	   );
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
                // ... add other public dependencies that you statically link with here ...
            }
		);


		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		//added to supress warnings from opencv plugin
		bEnableUndefinedIdentifierWarnings = false;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", "Engine", "OpenCV", "OpenCVHelper", "InputCore", "HeadMountedDisplay" });

		PrivateDependencyModuleNames.AddRange(
							new string[]
							{
										"Core",
										"CoreUObject",
										"Engine",
										"Renderer",
										"RenderCore",
										"RHI",
										"RHICore",
										"D3D12RHI",
										"OpenCV",
										"OpenCVHelper" 
								// ... add private dependencies that you statically link with here ...  
							}
						);

	}
}
