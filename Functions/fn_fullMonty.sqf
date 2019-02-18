[] spawn {
	_display = findDisplay 170219;
	_unit = _display getVariable ["TGV_WIP_villain",objNull];
	_text = ctrlText 1400;
	hint format ["Unité: %1,texte: %2",_unit,_text];
	_unit setVariable ["TGV_tabletText_villain",_text];
	sleep 1;
	hint "";
	closeDialog 0;
	titleText ["Préparez vous à prendre des screens", "BLACK", 2];
	sleep 2;
	titleText ["", "BLACK IN", 2];
	sleep 2;
	[_unit] call TGV_fnc_mugshot;
	sleep 11;
	[_unit] call TGV_fnc_generateFinalCfg; 
};