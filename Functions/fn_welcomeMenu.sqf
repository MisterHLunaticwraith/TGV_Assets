createDialog "TGV_WelcomeMenu";
_display = findDisplay 120219;

_textZone = _display displayCtrl 1101;

_text = ["TGV_WelcomeMenuText"] call cba_settings_fnc_get;
_textZone ctrlSetStructuredText parseText _text;

[120219,1101] call MRH_fnc_MilsimTools_Core_SetCtrlSize;