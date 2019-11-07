_this spawn	{	params [["_customEnd","TGV_fin_victoire"],["_music","TGV_FF7_victory"]];
		private _allTargets = allPlayers;
		if (isServer)then {
			[true,false] call TGV_fnc_toggleTags;
			{
				[_x,_x]call ACE_medical_fnc_treatmentAdvanced_fullHeal;
			}forEach _allTargets;
			};
		playSound _music;
		[(1*(count _allTargets))]call TGV_fnc_EndCredits;
		_allMoves=["Acts_AidlPercMstpSloWWrflDnon_warmup_6_loop","Acts_AidlPercMstpSlowWrflDnon_warmup03","Acts_AidlPercMstpSlowWrflDnon_warmup04","Acts_AidlPercMstpSnonWnonDnon_warmup_8_loop","Acts_Briefing_SB_In","Acts_ComingInSpeakingWalkingOut_11","Acts_ComingInSpeakingWalkingOut_9","Acts_Executioner_StandingLoop","Acts_GetAttention_End","Acts_JetsFlyoverCheering_1"];
		{
			if (local _x) then {[_x, (selectRandom _allMoves), 1] call ace_common_fnc_doAnimation};
		_prise = [_x,_x,_x,5, 2, 2 ,true, [0, 2, 1.5],"none","blur",1,true,false] spawn TGV_fnc_aliasCutScene;
		waitUntil {scriptDone _prise};

		} forEach _allTargets;
		if (isServer)then {false call TGV_fnc_toggleTags;};
		[_customEnd, true, true,false,true] call BIS_fnc_endMission;
	};