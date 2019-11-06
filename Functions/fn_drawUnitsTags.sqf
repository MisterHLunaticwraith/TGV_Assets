

_handle = [
	{
		{
			private _squadInfo = squadParams _x;
			private _texture = "";
			private _name = name _x;
			
			if !(_squadInfo isEqualTo [])then
			{
				_squadInfo params ["_squadIntel","_playerIntel"];
				_squadIntel params ["_squadNick","_squadName","_squadEmail","_squadWeb","_squadPicture","_squadTitle"];
				_texture = _squadPicture;
			};
			
			

			//drawIcon3D [_texture,[1,1,1,1],(ASLToAGL(_x modelToWorld [0,0,1.8])), 1, 1,90,_name,true,1,"PuristaLight","center",false];
			drawIcon3D [_texture, [1,1,1,1],(_x modelToWorld [0,0,2.5]), 4, 4, 0, _name,2, 0.2, "PuristaMedium","center"];
		}forEach allPlayers;
	},
	[],
	{},
	{missionNamespace getVariable ["TGV_DrawTags",true]}
] call MRH_fnc_MilsimTools_Core_conditionalPFEH;