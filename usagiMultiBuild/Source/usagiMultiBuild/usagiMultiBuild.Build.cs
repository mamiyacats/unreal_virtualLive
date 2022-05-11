// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class usagiMultiBuild : ModuleRules
{
	public usagiMultiBuild(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
