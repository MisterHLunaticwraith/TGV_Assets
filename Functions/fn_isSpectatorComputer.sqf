params ["_computer"];

private _statement = { call TGV_fnc_spectate };

private _action =
["TGV_Spectate_Action", 
"Accéder au mode spectateur",
 "\TGV_Assets\paa\spectate_ca.paa",
_statement , 
 {true},
 {},
 [],
 [0,0,0], 
 5] call ace_interact_menu_fnc_createAction;
 ////
 [_computer, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject; 