params ["_ctrl"];
while {ctrlShown _ctrl} do {
for "_i" from 1 to 144 do {
	_string = "\TGV_Assets\paa\Logopaa\TGV(" +str _i + ").paa";
	_ctrl ctrlSetText _string;
	uisleep 0.05;
};
};