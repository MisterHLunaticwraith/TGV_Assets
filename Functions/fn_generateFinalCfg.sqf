params ["_unit"];
_idAndVehCfg = [_unit] call TGV_fnc_generateBothCfgs;
_tabCfgs = [_unit] call TGV_fnc_generateSoldierTabDataAndPic;

_stringFinal = [_idAndVehCfg,endl,endl,_tabCfgs] joinString "";
hint "Votre config de méchant a été copiée dans le presse papier";
createDialog "TGV_villainGeneratorText";
_textZone = ((findDisplay 180219) displayCtrl 1001);
_textZone ctrlSetText _stringFinal;
ctrlSetFocus _textZone;
[180219,1001] call MRH_fnc_MilsimTools_Core_SetCtrlSize;
//copyToClipboard _stringFinal;