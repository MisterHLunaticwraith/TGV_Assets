#include "defines.hpp"
class TGV_WelcomeMenu
{
	idd= 120219;
   
	movingenable = true;
    onUnLoad = "";
	class controls 
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Mr H., v1.063, #Gynizu)
////////////////////////////////////////////////////////

class TGVBack: IGUIBackTGVMenus
{
	idc = 2200;
	x = 0.313756 * safezoneW + safezoneX;
	y = 0.08508 * safezoneH + safezoneY;
	w = 0.37125 * safezoneW;
	h = 0.803 * safezoneH;
};
class TGV_ROTLOGO: RscPictureTGVMenus
{
	idc = 1200;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.597969 * safezoneW + safezoneX;
	y = 0.093 * safezoneH + safezoneY;
	w = 0.0773437 * safezoneW;
	h = 0.121 * safezoneH;
    onLoad = "_this spawn TGV_fnc_TGV_animatedLogo;"; // causait bugs et ralentissements du menu, remplacé par un truc moins fancy ^^;
};
class TGV_textCtrlGrp: RscControlsGroupTGVMenus
{
	idc = 2300;
	x = 0.319531 * safezoneW + safezoneX;
    y = 0.225 * safezoneH + safezoneY;
    w = 0.355781 * safezoneW;
    h = 0.594 * safezoneH;
	class Controls
	{
            class TGV_TextZone: RscStructuredTextTGVMenus
        {
            idc = 1101;
            x = 0;
            y = 0;
            w = 0.355781 * safezoneW;
            h = 0.594 * safezoneH;
        };
	};
};
class TGV_TitleText: RscStructuredTextTGVMenus
{
	idc = 1100;
	text = "Bienvenue sur le serveur milsim de la team TGV."; //--- ToDo: Localize;
	x = 0.319531 * safezoneW + safezoneX;
	y = 0.093 * safezoneH + safezoneY;
	w = 0.268125 * safezoneW;
	h = 0.121 * safezoneH;
};


class TGV_continuer: RscButtonTGVMenus
{
	idc = 1600;
	text = "Continuer"; //--- ToDo: Localize;
    action = "closedialog 0";
	x = 0.453594 * safezoneW + safezoneX;
	y = 0.83 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.044 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
};
};