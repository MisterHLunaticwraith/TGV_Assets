params ["_unit", "_killer", "_instigator", "_useEffects"];
private _loadOut = getUnitLoadout player;
player setVariable ["TGV_Killed_loadOut",_loadOut];