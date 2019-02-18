_version = getText (configFile>>"CfgPatches">>"TGV_Assets">>"versionStr");
copyToClipboard format ["TGV_Assets version: %1",_version];

_display = findDisplay 0;
[_display,_version] spawn {
disableSerialization;

params ["_display","_version"];
	
	_ctrl = _display ctrlCreate ["RscPicture", -1];
	_position = [0.4175 * safezoneW + safezoneX,0.236 * safezoneH + safezoneY,0.0309375 * safezoneW,0.055 * safezoneH];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlCommit 0;
	_ctrl ctrlSetText "\TGV_Assets\paa\Logopaa\TGV(1).paa";

	_ctrl2 = _display ctrlCreate ["RscText", -1];
	_position2 = [0.448438 * safezoneW + safezoneX,0.236 * safezoneH + safezoneY,0.118594 * safezoneW,0.055 * safezoneH];
	_ctrl2 ctrlSetPosition _position2;
	_ctrl2 ctrlCommit 0;
	_ctrl2 ctrlSetText format ["TGV_Assets version: %1",_version];
	
	uiSleep 3;
	_ctrl2 ctrlSetText "Version copiée dans le presse papier";
	uiSleep 3;
	ctrlDelete _ctrl;
	ctrlDelete _ctrl2;

};