private _raw = [];
private _toClipboard =[];
{
	private _fact = (getText (configFile>>"cfgVehicles">>(typeOf _x)>>"faction"));
	_raw pushBackUnique _fact;
	_toClipboard pushBackUnique ("BR_"+_fact+".sqf");
}forEach playableUnits;
_toClipboard = _toClipboard joinString " ";
copyToClipboard _toClipboard;
hint "noms de briefings copiés dans le presse papier";
_raw