

params [["_useDrawRatio",true]];
_handle = [
	{
		params [["_useDrawRatio",true]];
		{
			private _squadInfo = squadParams _x;
			private _texture = "\TGV_Assets\paa\loser_ca.paa";
			private _name = name _x;
			
			if !(_squadInfo isEqualTo [])then
			{
				_squadInfo params ["_squadIntel","_playerIntel"];
				_squadIntel params ["_squadNick","_squadName","_squadEmail","_squadWeb","_squadPicture","_squadTitle"];
				_texture = _squadPicture;
			};
			
			
			if (_useDrawRatio) then 
			{
				private _distance = _x distance player;
				if (_x isEqualTo player)then {_distance =1};
				if (_distance <30) then {
					drawIcon3D [_texture, [1,1,1,1],(_x modelToWorld [0,0,2.5]),(4/_distance),(4/_distance), 0, _name,2, (0.2/_distance), "PuristaMedium","center"];
				};
			}
			else
			{
				drawIcon3D [_texture, [1,1,1,1],(_x modelToWorld [0,0,2.5]),4,4, 0, _name,2, 0.2, "PuristaMedium","center"];
			};
			
		}forEach allPlayers;//allPlayers
	},
	_useDrawRatio,
	{},
	{missionNamespace getVariable ["TGV_DrawTags",true]}
] call MRH_fnc_MilsimTools_Core_conditionalPFEH;