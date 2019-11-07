
["ace_firedNonPlayer",
	{
 		params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];
		 if (missionNamespace getVariable ["TGV_SafeStartIsActive",false]) then
			{
				deleteVehicle _projectile;
				
			};
	}
] call CBA_fnc_addEventHandler;


["TGV_start_genericCutScene",{_this call TGV_fnc_genericEndCutscene}]call CBA_fnc_addEventHandler;



[
    {time>1}, 
    {
		enableSaving [false, false];
		//mute les voix automatiques des unitésjouables
		{
			_x setSpeaker "NoVoice";
			_x disableAI "RADIOPROTOCOL";
		
		} forEach playableUnits;
	}, 
    []
] call CBA_fnc_waitUntilAndExecute;