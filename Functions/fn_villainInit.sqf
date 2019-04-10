params ["_unit"];

_loadOut = getArray (configFile>>"cfgVehicles">>typeOf _unit>>"tgvLoadOut");
_identity = (getArray (configFile>>"cfgVehicles">>typeOf _unit>>"identityTypes")) select 0;
_unit setUnitLoadout _loadOut;

[[_unit,_identity],{
	params ["_unit","_identity"];
 _unit setIdentity _identity;	
}] RemoteExec ["Call",0,true];

/*
// attempt to allow gear changes/ doesn't work because init is rerun after each preview/ upon mission opening

params ["_unit"];
_loadOut = getArray (configFile>>"cfgVehicles">>typeOf _unit>>"tgvLoadOut");
if (is3DEN) then {

[_unit,_loadout] spawn {
	params ["_unit","_loadout"];

	systemchat "created";
	waitUntil {(get3DENEntityID _unit) != -1};
	_id = get3DENEntityID _unit;


	systemChat "registered";
	_unit setUnitLoadout _loadOut;



systemChat format ["Unit %1 ID %2, selected %3",_unit,_id,(get3DENSelected "object")];
save3DENInventory [_id];
};
};

if (!is3DEN && (time>1)) then {
	_unit setUnitLoadout _loadOut;
};

_identity = (getArray (configFile>>"cfgVehicles">>typeOf _unit>>"identityTypes")) select 0;
[[_unit,_identity],{
	params ["_unit","_identity"];
 _unit setIdentity _identity;	
}] RemoteExec ["Call",0,true];
*/