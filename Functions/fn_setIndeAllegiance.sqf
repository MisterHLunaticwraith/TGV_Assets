params ["_side",["_friend",0]];
if 
!(isServer) 
exitWith {["TGV_indeAllegianceChange_Event",_this] call CBA_fnc_serverEvent};
//0 = ennemis 1= amis
_side setFriend [independent, _friend]; independent setFriend [_side, _friend];