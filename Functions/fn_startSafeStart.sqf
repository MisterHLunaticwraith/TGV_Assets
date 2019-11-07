["TGV_enable_safestart",[]] call CBA_fnc_globalEventJIP;

private _showTags = ["TGV_ShowTagsDuringSafeStart"] call cba_settings_fnc_get;
if (_showTags) then {call TGV_fnc_toggleTags};