params ["_object","_side"];
if (typeName _side isEqualTo "STRING") exitWith
{
	missionNamespace setVariable ["TGV_respawnobject_allSides",_object,true];
};
missionNamespace setVariable [("TGV_respawnobject_"+ str _side),_object,true];