// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectIA : ModuleRules
{
	public ProjectIA(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivatePCHHeaderFile = "Public/ProjectIA.h";

		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		///PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
		PublicDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"Engine"
				//"Paper2D", "UMG"				
			}
		);

		///PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"ProjectIALoadingScreen",
				"Slate",
				"SlateCore",
				"InputCore",
				"MoviePlayer",
				"GameplayAbilities",
				"GameplayTags",
				"GameplayTasks"
			}
		);

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true

		if (Target.Platform == UnrealTargetPlatform.IOS)
		{
			PrivateDependencyModuleNames.AddRange(new string[] { "OnlineSubsystem", "OnlineSubsystemUtils" });
			DynamicallyLoadedModuleNames.Add("OnlineSubsystemFacebook");
			DynamicallyLoadedModuleNames.Add("OnlineSubsystemIOS");
			DynamicallyLoadedModuleNames.Add("IOSAdvertising");
		}
		else if (Target.Platform == UnrealTargetPlatform.Android)
		{
			PrivateDependencyModuleNames.AddRange(new string[] { "OnlineSubsystem", "OnlineSubsystemUtils" });
			DynamicallyLoadedModuleNames.Add("AndroidAdvertising");
			DynamicallyLoadedModuleNames.Add("OnlineSubsystemGooglePlay");
            // Add UPL to add configrules.txt to our APK
            string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", System.IO.Path.Combine(PluginPath, "AddRoundIcon_UPL.xml"));
    }

	}
}
