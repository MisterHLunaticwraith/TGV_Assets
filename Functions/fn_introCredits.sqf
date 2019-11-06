params [["_onScreenTime",4],["_font","PuristaLight"],["_shadow",0],["_sizeHeader",0.8],["_colorHeader","#f6772a"],["_sizeCore",1.3],["_colorCore","#ffffff"]];

[_onScreenTime,_font,_shadow,_sizeHeader,_colorHeader,_sizeCore,_colorCore] spawn 
{
	params [["_onScreenTime",4],["_font","PuristaLight"],["_shadow",0],["_sizeHeader",0.8],["_colorHeader","#f6772a"],["_sizeCore",1.3],["_colorCore","#ffffff"]];
	
	private _playingTeams = [];
	private _playingTeamsData = call TGV_fnc_returnPlayingSquads;
	{_x params ["_squadName","_squadPicture","_squadNick"]; _playingTeams pushBackUnique _squadName}forEach _playingTeamsData;
	private _cfg = (missionConfigFile>>"cfgTGVmissions");
	private _missionAuthors =getArray (_cfg>>"missionInfo">>"authors");
	_role0 = ["La Team TGV","et"];
	_role0 append _missionAuthors;
	_role0 pushBack "Présentent:";
	_role0 = _role0 joinString "<br/>";
	_role0Names = [(toUpper briefingName)];
	_role1 = "Une mission proposée par"; //In yellow
	_role1names = _missionAuthors;
	_role2 = "Entierement realisée";
	_role2names = ["Pour Arma III"]; 
	_role3 = "Avec les mods";
	_role3names = [true call MRH_fnc_MilsimTools_DebugTools_readAbleList];
	_role4 = "Powered by TGV Mission Frame Work";
	_role4names = [format ["<img size = '%1' image ='\TGV_Assets\paa\poweredByTgvFR_ca.paa'/>",_sizeCore*1.5]];
	_role5 = "Avec la participation de";
	_role5names = _playingTeams;
	_texte= "Et dans le role de ";
	_role = (player getVariable "MRH_MilsimTools_Core_PlayerIntel") select 1;
	_role6 = _texte + _role; //In yellow
	_role6names = [profileName]; //In white

	
	
	{
		sleep 2;
		_memberFunction = _x select 0;
		_memberNames = _x select 1;
		_finalText = format ["<t size='%2' color='%3' align='right' font = '%4' shadow= '%5'>%1<br /></t>", _memberFunction,_sizeHeader,_colorHeader,_font,_shadow]; //Changes colours
		_finalText = _finalText + (format ["<t size='%2' color='%3' align='right' font = '%1' shadow= '%4'>",_font,_sizeCore,_colorCore,_shadow]);
		{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
		_finalText = _finalText + "</t>";
		copyToClipboard _finalText;
		_onScreenTime + (((count _memberNames) - 1) * 0.5);
		[
		_finalText,
		[safezoneX + safezoneW - 0.8,0.50], //DEFAULT: 0.5,0.35
		[safezoneY + safezoneH - 1,0.7], //DEFAULT: 0.8,0.7
		_onScreenTime,
		0.5
		] spawn BIS_fnc_dynamicText;
		sleep (_onScreenTime);
	} forEach [
	//The list below should have exactly the same amount of roles as the list above
	[_role0, _role0Names],
	[_role1, _role1names],
	[_role2, _role2names],
	[_role3, _role3names],
	[_role4, _role4names],
	[_role5, _role5names],
	[_role6, _role6names]
	];
};
	