// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Jallor_Sand_BoxTarget : TargetRules
{
	public Jallor_Sand_BoxTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Jallor_Sand_Box");
	}
}
