if !(isMultiplayer) exitWith {};
createDialog "TGV_wagesScreen";



_dataToUse = player getVariable ["TGV_informations_solde",[]];
_dataToUse params ["_uid",["_money",0],["_TimePrivate",0],["_TimeCorporal",0],["_TimeSergeant",0],["_TimeLieutenant",0],["_TimeCaptain",0],["_TimeMajor",0],["_TimeColonel",0],["_TimeCurator",0],["_TotalTime",0]];

#define TIMEFORM(ARG) (##[ARG##,"HH:MM"] call BIS_fnc_secondsToString)
_line = "<br/>";
_space = " ";
_title = "La paie TGV!";
_VotreSolde = "Votre solde :" + _space + (str (round _money)) + "$ TGViens";
_totalTimeTex = "Temps total en mission TGV :" + _space + TIMEFORM(_totalTime);
_totalTimePrivate = "Temps passé en tant que simple soldat :" + _space + TIMEFORM(_timePrivate);
_totalTimeCorp = "Temps passé en tant que caporal :" + _space + TIMEFORM(_timeCorporal);
_totalTimeSergeant = "Temps passé en tant que sergent :"+ _space + TIMEFORM(_timeSergeant);
_totalTimeLieutenant = "Temps passé en tant que lieutenant :" + _space + TIMEFORM(_timeLieutenant);
_totalTimeCaptain = "Temps passé en tant que capitaine :" + _space + TIMEFORM(_timeCaptain);
_totalTimeMajor = "Temps passé en tant que major :" + _space  + TIMEFORM(_timeMajor);
_totalTimeColonel = "Temps passé en tant que colonel :"+ _space + TIMEFORM(_timeColonel);
_totalTimeZeus = "Temps passé en tant que Zeus :" + _space + TIMEFORM(_timeCurator);






_finalText = _title + _line + _votreSolde + _line + _totalTimeTex + _line + _totalTimePrivate + _line + _totalTimeCorp + _line + _totalTimeSergeant + _line + _totalTimeLieutenant + _line + _totalTimeCaptain + _line + _totalTimeMajor + _line + _totalTimeColonel + _line + _totalTimeZeus;

disableSerialization;
_display = findDisplay 28419;
_ctrl = _display displayCtrl 1100;
/*
_ctrlPic = _display displayCtrl 1200;
_ctrlPic ctrlShow false;
*/
_ctrl ctrlSetStructuredText (parseText _finalText);
[28419,1100] call MRH_fnc_MilsimTools_Core_SetCtrlSize;