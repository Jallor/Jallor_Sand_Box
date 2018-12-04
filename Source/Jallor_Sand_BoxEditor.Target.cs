// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Jallor_Sand_BoxEditorTarget : TargetRules
{
	public Jallor_Sand_BoxEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Jallor_Sand_Box");
	}
}
