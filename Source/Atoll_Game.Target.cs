// DTD Studios

using UnrealBuildTool;
using System.Collections.Generic;

public class Atoll_GameTarget : TargetRules
{
	public Atoll_GameTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Atoll_Game" } );
	}
}
