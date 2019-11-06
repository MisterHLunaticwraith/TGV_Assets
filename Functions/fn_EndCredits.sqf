params[["_speed",20]];

if ((str missionConfigFile)isEqualTo "") exitWith {diag_log "Mission has no description.ext"};
if !(isClass (missionConfigFile>>"cfgTGVmissions")) exitWIth {diag_log "mission doesn't use TGV FrameWork"};
private _cfg = (missionConfigFile>>"cfgTGVmissions");
private _missionPic = getText (_cfg>>"missionInfo">>"missionPicture");
private _frameWorkVersion = getText (_cfg>>"FrameWorkVersion">>"versionStr");
private _missionAuthors =getArray (_cfg>>"missionInfo">>"authors");
private _missionAuthorsLogo =getArray (_cfg>>"missionInfo">>"authorsLogos");
private _missionLastUpdate =getArray (_cfg>>"missionInfo">>"date");
private _missionVersion =getText (_cfg>>"missionInfo">>"versionStr");
_missionLastUpdate params ["_jj","_mm","_aa"];
private _authorsAndPics = "";
private _authors = _missionAuthors joinString "_";
{
	_authorsAndPics = _authorsAndPics + _x + "<br/>" + "<img size ='1' image='"+(_missionAuthorsLogo select _forEachIndex) +"'/><br/>";
}forEach _missionAuthors;

private _playingTeams = [];
private _playingTeamsData = call TGV_fnc_returnPlayingSquads;
	{
		_x params ["_squadName","_squadPicture","_squadNick"]; 
		_playingTeams append ["<br/>",_squadName,"<br/>",("<img size ='1' image='"+_squadPicture+ "'/><br/>")];
	
	}forEach _playingTeamsData;
_playingTeams = _playingTeams joinString "";
[
	_speed,
	briefingName,
	_authorsAndPics,
	("Avec la participation des teams: <br/>"+ _playingTeams),
	("Avec les mods: <br/>" + (true call MRH_fnc_MilsimTools_DebugTools_readAbleList)),
	(_authors+" 20"+ str _aa)
] call MRH_fnc_EndCredits;