params ["_unit", "_corpse"];
private _respawnOnStartPos = ["TGV_RSP_respOnStartPos"]call cba_settings_fnc_get;
private _forceSpectate =  ["TGV_RSP_respOnOpenSpectator"]call cba_settings_fnc_get;
private _respawnOnObjectPos = ["TGV_RSP_respOnRspPos"]call cba_settings_fnc_get;
private _useStartUpLoadout = ["TGV_RSP_respWithStartUpLd"]call cba_settings_fnc_get;
private _sideSpecific = ["TGV_RSP_sideSpecificResp"]call cba_settings_fnc_get;

if (_respawnOnStartPos) exitWith {
	private _startPos = _unit getVariable "TGV_startUpPos_ATL";
	_unit SetPosATL _startPos;
};

if (_useStartUpLoadOut) then 
{
	player setUnitLoadOut (player getVariable ["TGV_startUpLoadOut",[]]);
}
else
{
	player setUnitLoadOut (player getVariable ["TGV_Killed_loadOut",[]]);
};
if (_forceSpectate) then {call TGV_fnc_spectate};
private _respawnObject = missionNamespace getVariable ["TGV_respawnobject_allSides",objNull];
if (_sideSpecific) then 
{
	_respawnObject = missionNamespace getVariable [("TGV_respawnobject_" + (str (side player))),objNull];
};
if (isNull _respawnObject)
then
{
	systemChat "Pas de respawn! respawn sur position de départ";
	private _startPos = _unit getVariable "TGV_startUpPos_ATL";
	_unit SetPosATL _startPos;
}
else
{
	player setPos (_respawnObject modelToWorld [-2,0,0]);
	player setDir ((getDir _respawnObject)+90);
};