
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Mr H., v1.063, #Rutoxi)
////////////////////////////////////////////////////////
class TGV_villainCreator
{
	idd= 170219;
   
	movingenable = true;
    onUnLoad = "";
	class controls 
	{
class TGVBack: IGUIBackTGVMenus
{
	idc = 2200;
	x = 0.0565625 * safezoneW + safezoneX;
	y = 0.027 * safezoneH + safezoneY;
	w = 0.892031 * safezoneW;
	h = 0.869 * safezoneH;
};
class TGVEdit: RscEditTGVMenus
{
	idc = 1400;
	 onChar = "call TGV_fnc_onCharRefresh";
	x = 0.0704166 * safezoneW + safezoneX;
	y = 0.112407 * safezoneH + safezoneY;
	w = 0.340312 * safezoneW;
	h = 0.748 * safezoneH;
	colorText[] = {0.678,0.6,0.533,1}; 
    style = ST_MULTI;
};
class Title: RscTextTGVMenus
{
	idc = 1000;
	text = "Tapez ci dessous la biographie de votre méchant"; //--- ToDo: Localize;
	x = 0.0720312 * safezoneW + safezoneX;
	y = 0.071 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.033 * safezoneH;
};
class TGVLineB: RscButtonTGVMenus
{
	idc = 1600;
	text = "Ajouter un saut de ligne"; //--- ToDo: Localize;
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.126 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.055 * safezoneH;
	action = "['BR']call TGV_fnc_markup";
};
class TGVHtml: RscButtonTGVMenus
{
	idc = 1601;
	text = "Ajouter un lien html"; //--- ToDo: Localize;
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.192 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.055 * safezoneH;
	action = "['URL']call TGV_fnc_markup";
};
class TGVColPrev: RscPictureTGVMenus
{
	idc = 1200;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.077 * safezoneH;
};
class TGVRslide: RscSliderTGVMenus
{
	idc = 1900;
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.011 * safezoneH;
	onload = "(_this select 0) sliderSetRange [0,1]";
	onSliderPosChanged = "call TGV_fnc_colorPickerChange";
};
class TGVGSlide: RscSliderTGVMenus
{
	idc = 1901;
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.011 * safezoneH;
	onload = "(_this select 0) sliderSetRange [0,1]";
	onSliderPosChanged = "call TGV_fnc_colorPickerChange";
};
class TGVBSlide: RscSliderTGVMenus
{
	idc = 1902;
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.302 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.011 * safezoneH;
	onload = "(_this select 0) sliderSetRange [0,1]";
	onSliderPosChanged = "call TGV_fnc_colorPickerChange";
};
class TGVR: RscTextTGVMenus
{
	idc = 1001;
	text = "R"; //--- ToDo: Localize;
	x = 0.484531 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.011 * safezoneH;
};
class TGVG: RscTextTGVMenus
{
	idc = 1002;
	text = "G"; //--- ToDo: Localize;
	x = 0.484531 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.011 * safezoneH;
};
class TGVB: RscTextTGVMenus
{
	idc = 1003;
	text = "B"; //--- ToDo: Localize;
	x = 0.484531 * safezoneW + safezoneX;
	y = 0.302 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.011 * safezoneH;
};
class TGVColorButt: RscButtonTGVMenus
{
	idc = 1602;
	text = "Ajouter les balises couleur "; //--- ToDo: Localize;
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.335 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.055 * safezoneH;
	action = "['COL']call TGV_fnc_markup";
};
class TGVItalButt: RscButtonTGVMenus
{
	idc = 1603;
	text = "Ajouter les balises taille"; //--- ToDo: Localize;
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.055 * safezoneH;
	action = "['SZ']call TGV_fnc_markup";
};
class TGVUnderlButt: RscButtonTGVMenus
{
	idc = 1604;
	text = "Ajouter les balises souligner"; //--- ToDo: Localize;
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.478 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.055 * safezoneH;
	action = "['LINED']call TGV_fnc_markup";
};
class TGVPreviewText: RscStructuredTextTGVMenus
{
	idc = 1100;
	x = 0.587656 * safezoneW + safezoneX;
	y = 0.115 * safezoneH + safezoneY;
	w = 0.350625 * safezoneW;
	h = 0.748 * safezoneH;
};
class TGVPreviewTitle: RscTextTGVMenus
{
	idc = 1004;
	text = "Aperçu"; //--- ToDo: Localize;
	x = 0.603125 * safezoneW + safezoneX;
	y = 0.06 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.033 * safezoneH;
};
class TGVREadyButt: RscButtonTGVMenus
{
	idc = 1605;
	text = "C'est prêt!"; //--- ToDo: Localize;
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.753 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.066 * safezoneH;
	action = "call TGV_fnc_fullMonty;";
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
};
};