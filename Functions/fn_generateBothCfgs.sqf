params ["_unit"];

_identityValues = [_unit] call TGV_fnc_generateIdentityCfg;
_identityValues params ["_classname","_cfgIdentityCfg"];

_name = name _unit;
_loadOut = getUnitLoadout _unit;
_loadOutCfg = [_loadOut] call TGV_fnc_arrayToCfg;
_stringfinal = [
_cfgIdentityCfg,
endl,
endl,
"// CfgVehicles",
endl,
"class ",
_className,
": TGV_Villain_Base",
endl,
"{",
endl,
"displayName =", 
str _name,
";",
endl,
"tgvLoadOut[] =",
_loadOutCfg,
";",
endl,
"identityTypes[] ={",
str _className,
"};",
endl,
"scope =2;",
endl,
"author =",
str profileName,
";",
endl,
"editorPreview=",
str "\TGV_Assets\paa\VillainsMugshots\default.jpg",
";",
endl,
"};"];
//_stringfinal = str _stringfinal;
_stringfinal = _stringfinal joinString "";
_stringfinal;

