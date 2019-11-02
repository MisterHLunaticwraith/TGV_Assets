call TGV_fnc_serverHandleWages;

		
["TGV_enable_safestart",
	{

		missionNamespace setVariable ["TGV_SafeStartIsActive",true,true];
	}

] call CBA_fnc_addEventHandler;

["TGV_disable_safestart",
	{
		missionNamespace setVariable ["TGV_SafeStartIsActive",false,true];
	}

] call CBA_fnc_addEventHandler;

["TGV_indeAllegianceChange_Event",
	{
		
		_this call TGV_fnc_setIndeAllegiance
	}
]call CBA_fnc_addEventHandler;

private _runSafeStart = ["TGV_StartWithafeStartEnabled"] call cba_settings_fnc_get;
if (_runSafeStart) then {call TGV_fnc_startSafeStart};