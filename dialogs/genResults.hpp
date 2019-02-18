class TGV_villainGeneratorText
{
	idd= 180219;
   
	movingenable = true;
    onUnLoad = "";
	class controls 
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Mr H., v1.063, #Humefo)
////////////////////////////////////////////////////////

class TGVBack: IGUIBackTGVMenus
{
	idc = 2200;
	x = 0.262812 * safezoneW + safezoneX;
	y = 0.00500001 * safezoneH + safezoneY;
	w = 0.469219 * safezoneW;
	h = 0.99 * safezoneH;
};
class TGVInstructions: RscTextTGVMenus
{
	idc = 1000;
	text = "Sélectionnez le texte suivant et copiez le dans le presse papier (ctrl + C)"; //--- ToDo: Localize;
	x = 0.278281 * safezoneW + safezoneX;
	y = 0.027 * safezoneH + safezoneY;
	w = 0.438281 * safezoneW;
	h = 0.033 * safezoneH;
};
class RscControlsGroup_2300: RscControlsGroupTGVMenus
{
	idc = 2300;
	x = 0.282813 * safezoneW + safezoneX;
            y = 0.062963 * safezoneH + safezoneY;
            w = 0.433125 * safezoneW;
            h = 0.869 * safezoneH;

	class Controls
    {
        class TGVMain: RscEditTGVMenus
        {
            idc = 1001;
            x = 0;
            y = 0;
            w = 0.433125 * safezoneW;
            h = 0.869 * safezoneH;
            colorText[] = {0.678,0.6,0.533,1}; 
            size = 0.1;
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
            canModify = 0;
            style = ST_MULTI;
        };
    };
};
class TGVButton: RscButtonTGVMenus
{
	idc = 1600;
	text = "C'est terminé!"; //--- ToDo: Localize;
	action = "closeDialog 0";
	x = 0.386562 * safezoneW + safezoneX;
	y = 0.94 * safezoneH + safezoneY;
	w = 0.216563 * safezoneW;
	h = 0.044 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
};
};