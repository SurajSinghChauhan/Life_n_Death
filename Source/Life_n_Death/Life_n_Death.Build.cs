// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Life_n_Death : ModuleRules
{
	public Life_n_Death(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
		{ "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" });
	}
}
