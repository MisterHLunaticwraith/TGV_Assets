//["acex_rationConsumed", [_player, _consumeItem, _replacementItem, _thirstQuenched, _hungerSatiated]] call CBA_fnc_localEvent;

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
["TGV XEH postinit executed"] call MRH_fnc_MilsimTools_DebugTools_trace;

[{(player == player) && (!isNull (findDisplay 46))}, {
    call TGV_fnc_welcomeMenuInit;
}] call CBA_fnc_waitUntilAndExecute;