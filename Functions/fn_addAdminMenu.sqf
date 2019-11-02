#include "TGV_AdminMenu.sqf"
if ((serverCommandAvailable "#kick")|| !isMultiplayer) then 
{
	if !(player diarySubjectExists "TGV_AdminSubject") then {
	private _index =player createDiarySubject ["TGV_AdminSubject","Administration"];
	
	private _handle = player createDiaryRecord ["TGV_AdminSubject", ["Menu administrateur",_briefing]];
	
	};

	
}
else
{
	if (player diarySubjectExists "TGV_AdminSubject") then {player removeDiarySubject "TGV_AdminSubject";};
};