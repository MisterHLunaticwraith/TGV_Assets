params ["_unit"];

_loadOut = getArray (configFile>>"cfgVehicles">>typeOf _unit>>"tgvLoadOut");
_identity = (getArray (configFile>>"cfgVehicles">>typeOf _unit>>"identityTypes")) select 0;
_unit setUnitLoadout _loadOut;
_unit setIdentity _identity;