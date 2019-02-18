params ["_unit"];
_identityValues = [_unit] call TGV_fnc_generateIdentityCfg;
_identityValues params ["_classname","_cfgIdentityCfg"];
_text = _unit getVariable ["TGV_tabletText_villain",""];
_text = _text + "<br/><img size = '15' image ='\TGV_Assets\paa\VillainsMugshots\default.jpg'/><br/><img size = '15' image ='\TGV_Assets\paa\VillainsMugshots\default.jpg'/>";
_stringfinal = [
"//MRH_SoldierTabData",
endl,
"class ",
_className,
endl,
"{",
endl,
"title =", 
str name _unit,
";",
endl,
"text=",
str _text,
";",
endl,
"};",
endl,
endl,
"//MRHMRH_SoldierTabIntelPictures",
endl,
"class ",
_className,
endl,
"{",
endl,
"captionText =", 
str name _unit,
";",
endl,
"picture = ""\TGV_Assets\paa\VillainsMugshots\default.jpg"";",
endl,
"};",
endl

];
_stringfinal = _stringfinal joinString "";
_stringfinal
