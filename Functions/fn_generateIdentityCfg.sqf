params ["_unit"];

_name = name _unit;

_nameUnpunc =[_name, ".", ""] call CBA_fnc_replace;
{
	_x params ["_toSearch","_replacement"];
	_nameUnpunc =[_nameUnpunc, _toSearch,_replacement] call CBA_fnc_replace;
	_nameUnpunc =[_nameUnpunc,toUpper _toSearch,toUpper _replacement] call CBA_fnc_replace;


}forEach [[",",""],["'",""],["&",""],["é","e"],["è","e"],["ç","c"],["à","a"],["ù","u"],["$",""],["£",""],["%",""],["*",""],["µ",""],["â","a"],["ê","e"],["î","i"],["ô","o"],["û","u"],["ä","a"],["ë","e"],["ï","i"],["ö","o"],["ü","u"],[";",""],["?",""],[":",""],["/",""],["!",""],["§",""],["«",""],["»",""]];

_Capitalized= [_nameUnpunc] call CBA_fnc_capitalize;
_WhiteSpacedRmv = _Capitalized call CBA_fnc_removeWhitespace;
_identityClassName = "TGV_V_" + _WhiteSpacedRmv;
_nameSound = "Givens";
_face = face _unit;
_glasses = goggles _unit;
if (_glasses == "") then {_glasses = "None"};
_speaker = speaker _unit;
_pitch = pitch _unit;

_stringfinal = [
"// CfgIdentities",
endl,
"class ",
_identityClassName,
endl,
"{",
endl,
"name =", 
str _name,
";",
endl,
"nameSound = ""Givens""",
";",
endl,
"face =",
str _face,
";",
endl,
"glasses =",
str _glasses,
";",
endl,
"speaker =",
str _speaker,
";",
endl,
"pitch =",
_pitch,
endl,
"};"];
//_stringfinal = str _stringfinal;
_stringfinal = _stringfinal joinString "";

[_identityClassName,_stringfinal];