#include "defines.hpp"
      class TGV_message
   {
      idd=011119;
      movingenable=true;
      onLoad = "uiNamespace setVariable ['TGV_message_board', _this select 0]";
      duration = "9999";
      class controls 
		{
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT START (by Mr H., v1.063, #Qolici)
			////////////////////////////////////////////////////////

			class TGVIcon: RscPictureTGVMenus
			{
				idc = 1200;
				text = "\TGV_Assets\paa\TGV_logo_white_ca.paa";
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.225 * safezoneH + safezoneY;
				w = 0.0515625 * safezoneW;
				h = 0.088 * safezoneH;
			};
			class TGVMessage: RscStructuredTextTGVMenus
			{
				idc = 1100;
				text = "";
				x = 0.345312 * safezoneW + safezoneX;
				y = 0.225 * safezoneH + safezoneY;
				w = 0.360937 * safezoneW;
				h = 0.088 * safezoneH;
			};
			class TGV_SafeStart: RscPictureTGVMenus
			{
				idc = 1201;
				text = "\TGV_Assets\paa\safe_start_ca.paa";
				x = 0.00499997 * safezoneW + safezoneX;
				y = 0.863 * safezoneH + safezoneY;
				w = 0.0515625 * safezoneW;
				h = 0.088 * safezoneH;
			};
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT END
			////////////////////////////////////////////////////////

      };
   };
