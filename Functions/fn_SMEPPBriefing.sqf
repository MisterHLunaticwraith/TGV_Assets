#include "macros_path.hpp"
params [["_sit",""],["_miss",""],["_exe",""],["_perso",""],["_pointsP",""]];

private _situationD = "<img image='" + SMEPP(situation) + "' width='256' height='64'/><br/><br/>" + _sit;

private _missionD = "<img image='" + SMEPP(mission) + "' width='256' height='64'/><br/><br/>" + _miss;

private _executionD = "<img image='" + SMEPP(execution) + "' width='256' height='64'/><br/><br/>" + _exe;

private _persoD = "<img image='" + SMEPP(persos) + "' width='256' height='64'/><br/><br/>" + _perso;

private _pointsD = "<img image='" + SMEPP(pointsp) + "' width='256' height='64'/><br/><br/>" + _pointsP;

player createDiaryRecord ["diary", ["Points particuliers",_pointsD]];
player createDiaryRecord ["diary", ["Personnels",_persoD]];
player createDiaryRecord ["diary", ["Execution",_executionD]];
player createDiaryRecord ["diary", ["Mission",_missionD]];
player createDiaryRecord ["diary", ["Situation",_situationD]];
