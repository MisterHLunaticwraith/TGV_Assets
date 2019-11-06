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

["ace_firedPlayer",
{
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];
	if (missionNamespace getVariable ["TGV_SafeStartIsActive",false]) then
	{
	deleteVehicle _projectile;
	hint "Le safestart est actif,les armes sont désactivées."
	};
}] call CBA_fnc_addEventHandler;


["TGV_enable_safestart",
	{

		if!(hasInterface) exitWith {};
		011119 cutRsc ["TGV_message", "PLAIN"];
		private  _display = uiNamespace getVariable "TGV_message_board";
		private _textZone = _display displayCtrl 1100;
		_textZone ctrlSetStructuredText parseText "TGV Administration: <br/> Le safe start est actif et les armes sont ineffectives.";
		playSound "TGV_safeStartOn";
	}

] call CBA_fnc_addEventHandler;

["TGV_disable_safestart",
	{
		if!(hasInterface) exitWith {};
		private _display = uiNamespace getVariable "TGV_message_board";
		_display closedisplay 2;
		hintC "Le safe start est désactivé,ça tire à balles réelles maintenant...";
		playSound "TGV_safeStartOff";
	}

] call CBA_fnc_addEventHandler;
// ajouter les infos 
call TGV_fnc_briefingGuides;
call TGV_fnc_briefingFromMissionConfig;
call TGV_fnc_addAdminMenu;
//Dans le scope ci-dessous, tout ce qui doit s'executer quand le joueur est initialisé
[{(player == player) && (!isNull (findDisplay 46))}, {
    call TGV_fnc_welcomeMenuInit;
	
	
	(findDisplay 46) displayAddEventHandler ["KeyDown", 
	{
		if (inputAction "showMap" >0) then {call TGV_fnc_addAdminMenu;};
	}];
	
	if (["TGV_playTGV_vidAtstartUp"] call cba_settings_fnc_get)then 
	{
		if (["TGV_playTGV_vidAtstartUpUnSkip"] call cba_settings_fnc_get) then
		{
			call TGV_fnc_splashVideoUnSkippable;
		}
		else
		{
			call TGV_fnc_splashVideoSkippable;
		};
		
	};

	if (["TGV_startUp_safetyOn"] call cba_settings_fnc_get)then 
	{
		if (currentWeapon player != "") then {
		
			[player, currentWeapon player, currentMuzzle player] call ace_safemode_fnc_lockSafety;
		
		};
	};

	if (["TGV_startUp_addEarPlugs"] call cba_settings_fnc_get)then 
	{
		if !(player canAdd "ACE_EarPlugs") exitWith {hint "Il n'y avait pas de place dans votre inventaire pour ajouter des bouchons d'oreille,demandez-en à l'admin!"};
		player addItem "ACE_EarPlugs";
		if (["TGV_startUp_equipEarPlugs"] call cba_settings_fnc_get) then
		{[player] call ace_hearing_fnc_putInEarPlugs;};
	};

	//if ([] call cba_settings_fnc_get)then {};
	player setVariable ["TGV_startUpPos_ATL",(getPosATL player)];
	player setVariable ["TGV_startUpLoadOut",(getUnitLoadout player)];
	player addEventHandler ["Killed",{_this call TGV_fnc_onPlayerKilled}];
	player addEventHandler ["Respawn",{_this call TGV_fnc_onPlayerRespawn}];

}] call CBA_fnc_waitUntilAndExecute;

//adds the menu if admin

["TGV XEH postinit client executed"] call MRH_fnc_MilsimTools_DebugTools_trace;