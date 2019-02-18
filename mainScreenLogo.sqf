//_display = findDisplay 0;
_ctrl = _this select 0;
[_ctrl] spawn {
	disableSerialization;
params ["_ctrl"];
	/*
	params ["_display"];
_ctrl = _display ctrlCreate ["RscPicture", -1];
	_position = [0.4175 * safezoneW + safezoneX,0.236 * safezoneH + safezoneY,0.0309375 * safezoneW,0.055 * safezoneH];
	_ctrl ctrlSetPosition _position;
	_ctrl ctrlCommit 0;
	_ctrl ctrlSetText "\TGV_Assets\paa\splashscreen.paa";
	*/
while {ctrlShown _ctrl} do {
for "_i" from 1 to 144 do {
	_string = "\TGV_Assets\paa\Logopaa\TGV(" +str _i + ").paa";
	_ctrl ctrlSetText _string;
	uisleep 0.05;
};
};

};