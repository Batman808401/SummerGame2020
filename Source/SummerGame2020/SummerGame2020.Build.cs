// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SummerGame2020 : ModuleRules
{
	public SummerGame2020(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
