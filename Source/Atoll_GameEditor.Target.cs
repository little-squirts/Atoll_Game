// DTD Studios

using UnrealBuildTool;
using System.Collections.Generic;

public class Atoll_GameEditorTarget : TargetRules
{
	public Atoll_GameEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Atoll_Game" } );
	}
}
