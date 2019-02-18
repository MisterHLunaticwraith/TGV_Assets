
disableSerialization;

params[ "_pauseMenu" ];
createDialog "TGV_pauseMenu";
_ctrl = ((findDisplay 251118)  displayCtrl 1200);
[_ctrl] spawn TGV_fnc_TGV_animatedLogo;
_pauseMenu displayAddEventHandler [ "Unload", {
	//When pause menu exits, close dialog
	closeDialog 1;
}];

