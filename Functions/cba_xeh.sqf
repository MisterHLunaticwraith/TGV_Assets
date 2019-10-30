// cba event handlers

["acex_rationConsumed",{ 
params ["_player", "_consumeItem", "_replacementItem", "_thirstQuenched", "_hungerSatiated"];
_message = format ["Ration consommée, params : %1"];
if (_consumeItem in ["TGV_Beer_Item","TGV_Beer_Item_half"]) then 
	{
		objNull call TGV_fnc_DrinkEffects;
		_message = format ["Bière consommée, params : %1"];

	};
[_message] call MRH_fnc_MilsimTools_DebugTools_trace;
}] call CBA_fnc_addEventHandler;

["ace_arsenal_displayClosed", {
	call TGV_fnc_addInsignia;
}] call CBA_fnc_addEventHandler;

["MRH_admin_menu_playerloadoutchanged_eh",{
	params ["_adminPlayer","_remotePlayer","_loadout","_loadoutChanged"];
	[[],{call TGV_fnc_addInsignia;}] RemoteExec ["Call",_remotePlayer];
}] call CBA_fnc_addEventHandler;

["TGV_SaluteMRH_event",{
	params ["_MRH"];
	if !(hasInterface) exitWith {};
	if (player isEqualTo _MRH) exitWith {}; //I don't bow to noone bitches!
	if ((player distance _MRH)>20) exitWith {};
	player action ["salute",player];
	hint "Ici on salue son supérieur!";
	
}] call CBA_fnc_addEventHandler;

//TGV welcome menu init
[{(player == player) && (!isNull (findDisplay 46))}, {
    call TGV_fnc_welcomeMenuInit;
}] call CBA_fnc_waitUntilAndExecute;
["TGV XEH postinit executed"] call MRH_fnc_MilsimTools_DebugTools_trace;