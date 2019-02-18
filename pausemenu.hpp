	class TGV_PausePic: RscPicture
		{
			idc = 1200;
			text = "\TGV_Assets\paa\Logopaa\TGV(1).paa";
			x = 0.814531 * safezoneW + safezoneX;
			y = 0.016 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.264 * safezoneH;
			//onLoad = "_this spawn TGV_fnc_TGV_animatedLogo;"; // causait bugs et ralentissements du menu, remplacé par un truc moins fancy ^^;
		};
		/*
		class TGVWEBLINKBack: RscPicture
		{
			idc = 1102;
			text = "\TGV_Assets\paa\linkback.paa"; //--- ToDo: Localize;
			x = 0.814531 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.055 * safezoneH;
		};
		*/
				class TGVWEBLINK: RscStructuredText
		{
			idc = 1100;
			font = "PuristaLight";
			color = "#333333";
			colorLink = "#000000";
			align = "center";
			text = "<t align='center'><t font = 'PuristaLight'><t colorLink='#99ffffff'><a href='http://www.teamtgv.com/site/'>Visiter le site des [TGV]</a></t>"; //--- ToDo: Localize;
			x = 0.814531 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.055 * safezoneH;
		};
