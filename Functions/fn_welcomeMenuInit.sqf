_setting = ["TGV_WelcomeMenuDelay"] call cba_settings_fnc_get;
_delay = parseNumber _setting;
if (_delay <0) exitWith {["TGV Custom_Assets: menu d'acceuil désactivé"] call MRH_fnc_MilsimTools_DebugTools_trace;};
[{call TGV_fnc_welcomeMenu}, [], _delay] call CBA_fnc_waitAndExecute;