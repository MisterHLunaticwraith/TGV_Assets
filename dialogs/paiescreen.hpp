
class TGV_wagesScreen
{
	idd= 28419;
   
	movingenable = false;
    onUnLoad = "";
	class controls 
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Mr H., v1.063, #Hivigi)
////////////////////////////////////////////////////////

class PayeBack: IGUIBackTGVMenus
{
	idc = 2200;
	moving = false;
	x = 0 * safezoneW + safezoneX;
	y = 0 * safezoneH + safezoneY;
	w = 1 * safezoneW;
	h = 1 * safezoneH;
};
class PaoePic: RscPictureTGVMenus
{
	idc = 1200;
	moving = false;
	text = "\TGV_Assets\paa\lapaie.paa";
	x = 0 * safezoneW + safezoneX;
	y = 0 * safezoneH + safezoneY;
	w = 1 * safezoneW;
	h = 1 * safezoneH;
};

class WagesCtrl : RscControlsGroupTGVMenus
{
	idc = 1500;
	moving = false;
	x = 0.659844 * safezoneW + safezoneX;
	y = 0.027 * safezoneH + safezoneY;
	w = 0.319688 * safezoneW;
	h = 0.858 * safezoneH;
	class controls
	{
		class WagesText: RscStructuredTextTGVMenus
		{
			idc = 1100;
			moving = false;
			x = 0;
			y = 0;
			w = 0.319688 * safezoneW;
			h = 0.858 * safezoneH;
		};
	};
};

class ButtonOk: RscButtonTGVMenus
{
	idc = 1600;
	moving = false;
	text = "OK"; //--- ToDo: Localize;
	action = "closedialog 0";
	x = 0.721719 * safezoneW + safezoneX;
	y = 0.896 * safezoneH + safezoneY;
	w = 0.185625 * safezoneW;
	h = 0.055 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
	};
};
