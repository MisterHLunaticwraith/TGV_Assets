deleteVehicle _this;
[] spawn {
	playsound "TGV_Sounds_Drinking";
	sleep 5;
	enableCamShake true;
	addCamShake [1, 10, 10];

	0 = ["ChromAberration", 200, [1, 1, true]] spawn {
		params ["_name", "_priority", "_effect", "_handle"];
		while {
			_handle = ppEffectCreate [_name, _priority];
			_handle < 0
		} do {
			_priority = _priority + 1;
		};
		_handle ppEffectEnable true;
		_handle ppEffectAdjust _effect;
		_handle ppEffectCommit 5;
		waitUntil {ppEffectCommitted _handle};
		Sleep 3; 
		comment "admire effect for a sec";
		_handle ppEffectEnable false;
		ppEffectDestroy _handle;
	};
};