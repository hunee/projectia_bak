// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

// This module must be loaded "PreLoadingScreen" in the .uproject file, otherwise it will not hook in time!

public class ProjectIALoadingScreen : ModuleRules
{
    public ProjectIALoadingScreen(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivatePCHHeaderFile = "Public/ProjectIALoadingScreen.h";

		PCHUsage = PCHUsageMode.UseSharedPCHs;

    PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"MoviePlayer",
				"Slate",
				"SlateCore",
				"InputCore"
			}
		);
	}
}
