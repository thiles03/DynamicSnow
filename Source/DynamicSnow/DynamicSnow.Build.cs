// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DynamicSnow : ModuleRules
{
	public DynamicSnow(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
