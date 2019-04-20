[] spawn {
	waitUntil {player == player};
	_disabled = ["TGV_DisablePatch"] call cba_settings_fnc_get;
	if (_disabled) exitWith {};
	_disabledForMedic =  ["TGV_DisablePatchOnlyMedic"] call cba_settings_fnc_get;
	_isMedic = [player] call ace_common_fnc_isMedic;
	if (_disabledForMedic && _isMedic) exitWith {};


	[player, "TGV_reset"] call BIS_fnc_setUnitInsignia;
	sleep 2;

_uid = getPlayerUID player;
if (_uid == "76561197973693960") then {[player, "MRH"] call BIS_fnc_setUnitInsignia;};
if (_uid == "76561198215999423") then {[player, "LDJ"] call BIS_fnc_setUnitInsignia;};
if (_uid == "76561197970957415") then {[player, "ANT"] call BIS_fnc_setUnitInsignia;};
if (_uid == "76561197986744135") then {[player, "SAJ"] call BIS_fnc_setUnitInsignia;};
if (_uid == "76561197960306009") then {[player, "RED1"] call BIS_fnc_setUnitInsignia;};
if (_uid == "76561197983381771") then {[player, "TILK"] call BIS_fnc_setUnitInsignia;};
if (_uid == "76561198054689653") then {[player, "KWOIN"] call BIS_fnc_setUnitInsignia;};
if (_uid == "76561197972648460") then {[player, "FRED"] call BIS_fnc_setUnitInsignia;};
if (_uid == "76561198088025574") then {[player, "BLKH"] call BIS_fnc_setUnitInsignia;};
if (_uid == "76561197995090073") then {[player, "RAVEN"] call BIS_fnc_setUnitInsignia;};
if (_uid == "76561197976637279") then {[player, "KMI"] call BIS_fnc_setUnitInsignia;};
if (_uid == "76561198088180843") then {[player, "MANU"] call BIS_fnc_setUnitInsignia;};
if (_uid == "76561198151956584") then {[player, "NIAK"] call BIS_fnc_setUnitInsignia;};
player addEventHandler ["Respawn", {
	call TGV_fnc_addInsignia;
}];

};