params ["_unit","_loadOut"];

[
    {time >1}, 
    {
		params ["_unit","_loadOut"];
		_unit setUnitLoadout _loadOut;
	}, 
    [_unit,_loadOut]
] call CBA_fnc_waitUntilAndExecute;