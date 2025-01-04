// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_Test_Task1 : ModuleRules
{
	public UE_Test_Task1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
