addMissionEventHandler ["PlayerConnected", 
{
	params ["_id", "_uid", "_name", "_jip", "_ownerID"];
	_wagesDataBase = profileNameSpace getVariable ["TGV_soldes_des_joueurs",[]];
	
	_personalData = [
		_uid,
		0, // money earned total
		0, //time as private
		0, // time as corporal
		0, // sergeant
		0, // lieutenant
		0, // captain
		0, //major
		0, // colonel
		0,//zeus
		0 //totaltime 
		];
	
	
	
	_connectedPlayerIndex = -1;
	{
		if (_uid == _x select 0) then {_connectedPlayerIndex = (_wagesDataBase find  _x);};
	} forEach _wagesDataBase;
	
	if (_connectedPlayerIndex != -1) then {_personalData = _wagesDataBase select _connectedPlayerIndex};
	
	[_personalData,TGV_fnc_playerWagesTracker] RemoteExec ["Call",_ownerId];

}];
	
//delete bodies of disconnected players
addMissionEventHandler ["HandleDisconnect", 
{
	params ["_unit", "_id", "_uid", "_name"];

	_wagesDataBase = profileNameSpace getVariable ["TGV_soldes_des_joueurs",[]];
	_currentWages = _unit getVariable ["TGV_informations_solde",[]];
	_index = -1;
	{
	if (_uid == _x select 0) then {_index =  (_wagesDataBase find  _x);};
	} forEach _wagesDataBase;
	if (_index != -1) then {_wagesDataBase deleteAT _index};

	_wagesDataBase pushBackUnique _currentWages;

	profileNameSpace setVariable ["TGV_soldes_des_joueurs",_wagesDataBase];
	saveProfileNameSpace;

}];