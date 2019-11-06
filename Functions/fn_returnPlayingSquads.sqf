private _squadNamesAndPictures = [];
{
	private _squadInfo = squadParams _x;
	if (_squadInfo isEqualTo [])exitWith{};
	_squadInfo params ["_squadIntel","_playerIntel"];
	_squadIntel params ["_squadNick","_squadName","_squadEmail","_squadWeb","_squadPicture","_squadTitle"];
	_squadNamesAndPictures pushBackUnique [_squadName,_squadPicture,_squadNick];

}forEach allPlayers;

_squadNamesAndPictures