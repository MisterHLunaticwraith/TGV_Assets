_statement = 
{
	params ["_persData"];
	player setVariable ["TGV_informations_solde",_persData,true];
	player setVariable ["TGV_a_rejoint",time];


	_handle = [
		{
			_data = player getVariable ["TGV_informations_solde",[]];

			_startTime = player getVariable ["TGV_a_rejoint",time];
			_timePlayedThisMission = time - _startTime;
			_timePlayed = 60;
			
			_data params ["_uid",["_money",0],["_TimePrivate",0],["_TimeCorporal",0],["_TimeSergeant",0],["_TimeLieutenant",0],["_TimeCaptain",0],["_TimeMajor",0],["_TimeColonel",0],["_TimeCurator",0],["_TotalTime",0]];
			_TotalTime = _TotalTime + 60;
			_minuteSalaryBase = 0.38;
			_coef = 1;
			switch (true) do {
				
				case (rank player == "PRIVATE") : {_coef =1;_timePrivate= _timePrivate +_timePlayed};
				case (rank player == "CORPORAL") : {_coef =1.5;_timeCorporal = _timeCorporal +_timePlayed};
				case (rank player == "SERGEANT") : {_coef =2; _timeSergeant= _timeSergeant + _timePlayed};
				case (rank player == "LIEUTENANT") : {_coef =3;_timeLieutenant = _timeLieutenant +_timePlayed};
				case (rank player == "CAPTAIN") : {_coef =4; _timeCaptain= _timeCaptain + _timePlayed};
				case (rank player == "MAJOR") : {_coef =5; _timeMajor = _timeMajor + _timePlayed};
				case (rank player == "COLONEL") : {_coef =6;_timeColonel= _timeColonel +_timePlayed};
			};
			if (!isNull curatorCamera) then {_coef = 7; _timeCurator = _timeCurator + _timePlayed};

			_earned = (_minuteSalaryBase * _coef);
			_money =  (_money + _earned);
			_newData = [getPlayerUID player,_money,_timePrivate,_timeCorporal,_timeSergeant,_timeLieutenant,_timeCaptain,_timeMajor,_timeColonel,_timeCurator,_TotalTime];
			player setVariable ["TGV_informations_solde",_newData,true];

		}, 
	60, //change to 60 
	[]
	] call CBA_fnc_addPerFrameHandler;


};

[
    {player == player}, 
    _statement, 
    _this
] call CBA_fnc_waitUntilAndExecute;