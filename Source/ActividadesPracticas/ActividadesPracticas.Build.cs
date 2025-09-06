// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ActividadesPracticas : ModuleRules
{
	public ActividadesPracticas(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ActividadesPracticas",
			"ActividadesPracticas/Variant_Platforming",
			"ActividadesPracticas/Variant_Platforming/Animation",
			"ActividadesPracticas/Variant_Combat",
			"ActividadesPracticas/Variant_Combat/AI",
			"ActividadesPracticas/Variant_Combat/Animation",
			"ActividadesPracticas/Variant_Combat/Gameplay",
			"ActividadesPracticas/Variant_Combat/Interfaces",
			"ActividadesPracticas/Variant_Combat/UI",
			"ActividadesPracticas/Variant_SideScrolling",
			"ActividadesPracticas/Variant_SideScrolling/AI",
			"ActividadesPracticas/Variant_SideScrolling/Gameplay",
			"ActividadesPracticas/Variant_SideScrolling/Interfaces",
			"ActividadesPracticas/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
