disableSerialization;
params ["_invisibleCtrl"];

_pauseMenu =  ctrlParent _invisibleCtrl;
		
//_pauseMenu = (findDisplay 49);
createDialog "TGV_pauseMenu";
_ctrl = ((findDisplay 251118)  displayCtrl 1200);
[_ctrl] spawn TGV_fnc_TGV_animatedLogo;
_pauseMenu displayAddEventHandler [ "Unload", {
	//When pause menu exits, close dialog
	closeDialog 1;
}];
/*
[] spawn {
waituntil {!(IsNull (findDisplay 46))};  
(findDisplay 46) displayAddEventHandler ["KeyDown", 
	{
		_this spawn {
			uisleep 0.5;
		if ((_this select 1) != 1) exitWith {};
		if (!(isNull (findDisplay 49)) && !(ctrlShown ((findDisplay 251118)  displayCtrl 1200))) then 
		{
			disableSerialization;

			//params[ "_pauseMenu" ];
			_pauseMenu = (findDisplay 49);
			createDialog "TGV_pauseMenu";
			_ctrl = ((findDisplay 251118)  displayCtrl 1200);
			[_ctrl] spawn TGV_fnc_TGV_animatedLogo;
			_pauseMenu displayAddEventHandler [ "Unload", {
				//When pause menu exits, close dialog
				closeDialog 1;
			}];
		};
		};
	}];
};
*/