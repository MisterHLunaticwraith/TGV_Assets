class TGV_quickNotePad
{
	idd= 041119;
   
	movingenable = true;
	
    onUnLoad = "uiNamespace setVariable ['TGV_notes',(ctrlText ((findDisplay 041119)displayCtrl 1400))];";
	onLoad = "[]spawn {sleep 0.1;private _txt = uiNamespace getVariable ['TGV_notes',''];((findDisplay 041119)displayCtrl 1400) ctrlSetText _txt;}";
	class controls 
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Mr H., v1.063, #Suguxe)
////////////////////////////////////////////////////////

class TGV_padBack: RscPictureTGVMenus
{
	idc = 1200;
	moving = true;
	text = "\TGV_Assets\paa\notepad_co.paa";
	x = 0.7475 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.232031 * safezoneW;
	h = 0.473 * safezoneH;
};
class TGV_Close: RscButtonTGVMenus
{
	idc = 1600;
	moving = true;
	text = "X"; //--- ToDo: Localize;
	action = "(findDisplay 041119) closeDisplay 1;";
	x = 0.969219 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.022 * safezoneH;
};
class RscControlsGroupTGV: RscControlsGroupTGVMenus
{
	idc = 2300;
	moving = true;
	x = 0.752656 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.221719 * safezoneW;
	h = 0.363 * safezoneH;
	class controls
	{
		class RscEditTGV : RscEditTGVMenus
		{
			idc = 1400;
			
			moving = true;
			text = "";
			colorText[] = {0,0,0,1};
			shadow = 0; 
			font = "BethEllen2";
			//style = ST_MULTI;
			style = "16 + 512";
			x = 0;
			y = 0;
			w = 0.221719 * safezoneW;
			h = 0.363 * safezoneH;
		};
	};
};

////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
	};
};
