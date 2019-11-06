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
{
	_authorsAndPics = _authorsAndPics + _x + "<br/>" + "<img image='"+(_missionAuthorsLogo select _forEachIndex) +"' width='64' height='64'/><br/>";
}forEach _missionAuthors;

private _record = "<img image='\TGV_Assets\paa\SMEPPTitles\infos_ca.paa' width='256' height='64'/><br/><br/>" + (toUpper briefingName) +" Version: " +_missionVersion +" Date de dernière modification : "+(str _jj)+"/"+(str _mm)+"/"+ (str _aa)+ "<br/><img image='"+_missionPic +"' width='300' height='200'/><br/>"+"<br/>Une mission par:"+_authorsAndPics + "<br/>Réalisée avec le framework de mission TGV version: "+_frameWorkVersion +"<br/><img image='\TGV_Assets\paa\poweredByTgvFR_ca.paa' width='256' height='64'/>";
player createDiaryRecord ["diary", [briefingName,_record]];
