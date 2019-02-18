_this spawn
{
	waitUntil {player == player};
	params ["_unit"];
	createDialog "TGV_villainCreator";
	_display = findDisplay 170219;
	_display setVariable ["TGV_WIP_villain",_unit];
};