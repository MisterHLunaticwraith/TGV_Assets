class CfgPatches {
	class TGV_Assets {
		units[] = {
		"RedBel_Billboard",
		"FollowMe_Poster",
		"Parachutes_Poster",
		"ToArms_Poster",
		"YourCountry_Poster",
		"FlowerHead_Poster",
		"Banner_TGV",
		"Banner_MRH",
		"Banner_SEALS",
		"LEDJ_Billboard",
		"SAJK_Billboard",
		"ANTO_Billboard",
		"MRH_Restaurant_Billboard",
		"TILK_HotClub_Billboard",
		"TGV_BeletteBeer",
		"MRH_Logo",
		"TGV_B_SoldierFatigues",
		"TGV_Villain_Base",
		"TGV_test_Villain",
		"TGV_V_Mauriceabdultamer",
		"TGV_V_Generalalidbaba",
		"TGV_V_Lemmymotorheadovitch",
		"TGV_V_JeanClaudeDiBongo",
		"TGV_SDV_01_F",
		"TGV_Boat_Transport_01_F",
		"TGV_V_Frankbanimarama"

		
		
		}; //
		weapons[] = {"U_BasicBody"}; //
		requiredVersion = 0.1; //
		requiredAddons[] = {"A3_Weapons_F_Ammoboxes","A3_Characters_F","cba_main","cTab"}; // achequer
		version = 1.0.6;
		versionStr = "1.0.6";
		versionAr[] = {1,0,6};
		versionDesc = "TGV Assets";
		versionAct = "call compile preProcessFileLineNumbers '\TGV_Assets\about.sqf'";
		author = "Mr H. & TGV members";
		url = "http://www.teamtgv.com/site/";
	
	};
};
class CfgMods {
    class TGV_Assets {
        dir = "@TGVCustomAssets";
        name = "TGV Custom Assets";
        picture = "\TGV_Assets\paa\logoA3Tgv.paa";
		logo = "\TGV_Assets\paa\Logopaa\TGV(1).paa";
        hidePicture = "false";
        hideName = "false";
        actionName = "Website";
        action = "http://www.teamtgv.com/site/";
        description = "Issue Tracker: https://github.com/MisterHLunaticwraith/TGV_Assets";
    };
};
// ctab fix
class cTab_RscMapControl {
    widthRailWay = 1;
};

#include "\TGV_Assets\cfgSettings.hpp"
#define QUOTE "
#define QUOTES(ARG) QUOTE##ARG##QUOTE
class cfgSounds
{
#include "\TGV_Assets\Sounds\cfgsounds.hpp"
};

class cfgMusic
{
#include "\TGV_Assets\Sounds\cfgsounds.hpp"
};

class cfgMusicClasses
{
	class TGV_SoundTrack
	{
		displayName= "Musiques TGV"
	};
};
class cfgFunctions
{
#include "\TGV_Assets\Functions\cfgfunctions.hpp"
};
/*
class CfgFactionClasses
{
	class NO_CATEGORY;
	class TGV_Assets: NO_CATEGORY
	{
		displayName = "Objets TGV";
	};
};
*/
class CfgEditorCategories
{
	class EdCat_TGV_Assets // Category class, you point to it in editorCategory property
	{
		displayName = "Objets TGV"; // Name visible in the list
	};
	class EdCat_TGV_Villains // Category class, you point to it in editorCategory property
	{
		displayName = "Méchants TGV"; // Name visible in the list
	};
};

class CfgEditorSubcategories
{
	class EdSubcat_TGV_Grafs // Category class, you point to it in editorSubcategory property
	{
		displayName = "Graffitis"; // Name visible in the list
	};
	class EdSubcat_TGV_BillBoards // Category class, you point to it in editorSubcategory property
	{
		displayName = "Panneaux publicitaires"; // Name visible in the list
	};
	
	class EdSubcat_TGV_Banners // Category class, you point to it in editorSubcategory property
	{
		displayName = "Bannières"; // Name visible in the list
	};
	
	class EdSubcat_TGV_Posters // Category class, you point to it in editorSubcategory property
	{
		displayName = "Posters"; // Name visible in the list
	};
	
	class EdSubcat_TGV_Drinks // Category class, you point to it in editorSubcategory property
	{
		displayName = "Boissons"; // Name visible in the list
	};
	
	class EdSubcat_TGV_Gods // Category class, you point to it in editorSubcategory property
	{
		displayName = "Divinités"; // Name visible in the list
	};
	class EdSubcat_TGV_Flags // Category class, you point to it in editorSubcategory property
	{
		displayName = "Drapeaux"; // Name visible in the list
	};
	class EdSubcat_TGV_MiscItems // Category class, you point to it in editorSubcategory property
	{
		displayName = "Objets divers"; // Name visible in the list
	};
	class EdSubcat_TGV_InventoryItems // Category class, you point to it in editorSubcategory property
	{
		displayName = "Objets d'inventaire"; // Name visible in the list
	};
	class EdSubcat_TGV_Villains // Category class, you point to it in editorSubcategory property
	{
		displayName = "Les méchants"; // Name visible in the list
	};
};
	class CfgMarkerClasses
	{
		class TGVMarkers
		{
		displayName = "Marqueurs TGV";
		};
	};
class cfgMarkers
{
#include"\TGV_Assets\TGV_markers.hpp"
};
class cfgVehicles
{
#include "\TGV_Assets\TGV_CAMan.hpp"
#include"\TGV_Assets\TGV_banners.hpp"
#include"\TGV_Assets\TGV_billboards.hpp"
#include"\TGV_Assets\TGV_grafs.hpp"
#include"\TGV_Assets\TGV_posters.hpp"
#include"\TGV_Assets\TGV_props.hpp"
#include "\TGV_Assets\TGV_flags.hpp"
#include "\TGV_Assets\TGV_items.hpp"
#include "\TGV_Assets\TGV_clothesV.hpp"
#include "\TGV_Assets\TGV_Villains.hpp"
#include "\TGV_Assets\TGV_Vehicles.hpp"
};
class cfgMRHFactionSounds 
{
	class TGVRadio 
	{
	allSounds[] = {"TGV_Radio_HeyHey","TGV_Radio_RegJohn","TGV_Radio_Thong","TGV_Radio_HesThere","TGV_Radio_MindTrick","TGV_Radio_LikeAStone","TGV_Radio_BlietzkriegBop","TGV_Radio_DownRodeo","TGV_Radio_LemonToAKnife","TGV_Radio_FortunateSon","TGV_Radio_DeadFlagBlues","TGV_Radio_DiesIrae","TGV_Radio_PaintItBlack"}; 
	};
};
class CfgUnitInsignia
{
#include "TGV_insignias.hpp"
};
class CfgWeapons
{
	#include "\TGV_Assets\TGV_inventoryItems.hpp"
	#include "\TGV_Assets\TGV_clothesW.hpp"
};
#include "\TGV_Assets\TGV_tags.hpp"

class ctrlStatic;
class RscPicture;
class RscStructuredText;
class RscDisplayInterrupt { //OR RscDisplayMPInterrupt for MP pause
	class controls {
		#include "\TGV_Assets\pausemenu.hpp"
	};
};

class RscDisplayMPInterrupt { //OR RscDisplayMPInterrupt for MP pause
	class controls {
		#include "\TGV_Assets\pausemenu.hpp"
	
	};
};

class RscStandardDisplay;
class RscControlsGroup;

class RscPictureKeepAspect;
class Logo;
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingStart: RscControlsGroup
		{
			class controls {
				
				class Logo: RscPictureKeepAspect
				{
					//text = "\TGV_Assets\paa\Logopaa\TGV(1).paa";
					text = "\TGV_Assets\paa\logoA3Tgv.paa";
					onLoad = "";
					//onLoad = "[_this] spawn {params ['_ctrl'];while {ctrlShown _ctrl} do {for '_i' from 1 to 144 do {_string = '\TGV_Assets\paa\Logopaa\TGV(' +str _i + ').paa';_ctrl ctrlSetText _string;uisleep 0.05;};};}";
				};
				
				class Noise: RscPicture  //KeepAspect
				{
					//text = "\TGV_Assets\paa\Logopaa\TGV(1).paa";
					text = "\TGV_Assets\paa\armaOpBack.paa";
					onLoad = "";
				};
			};
		};
	};
};

class RscDisPlayMain : RscStandardDisplay
{
	
	class controls
	{
		class RscTGV_LOGO : RscPicture
		{
			idc = 1277;
			//text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.143 * safezoneH;
			text = "\TGV_Assets\paa\Logopaa\TGV(1).paa";
			//onLoad = "copytoclipboard str";((findDisplay 0) displayCtrl 1277)
			//onLoad = "_this call compile preProcessFileLineNumbers '\TGV_Assets\mainScreenLogo.sqf'"; //creuser du côté de chez cba
			
		};
		class LogoApex: Logo
		{
			text= "\TGV_Assets\paa\logoA3Tgv.paa";
			onLoad = "";
			tooltip="Visiter le site des TGV";
			url="http://www.teamtgv.com/site/";
			onButtonClick="";
		};
	};
};
//class Logo;
/*
#include "\TGV_Assets\TGV_facewear.hpp"
#include "\TGV_Assets\Models\model.cfg"
*/
#include "\TGV_Assets\TGV_FacesAndHeads.hpp"
#include "\TGV_Assets\dialogs\welcomeDial.hpp"
#include "\TGV_Assets\dialogs\villainCreator.hpp"
#include "\TGV_Assets\dialogs\genResults.hpp"
class Extended_PreInit_EventHandlers
{
   class TGV_CBA_Settings
   {
      init = "call compile preProcessFileLineNumbers '\TGV_Assets\Functions\cba_settings.sqf'";
   }; 
   /*
   class TGV_CBA_Settings_keybinds
   {
      init = "call compile preProcessFileLineNumbers ''";
   };    
 */
};
class Extended_PostInit_EventHandlers
{
   class TGV_CBA_XEH
   {
      clientInit = "call compile preProcessFileLineNumbers '\TGV_Assets\Functions\cba_xeh.sqf'";
   }; 

};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class TGV_Vilains: NO_CATEGORY
	{
		displayName = "Méchants des TGV";
	};
	class TGV_SeaVehicles: NO_CATEGORY
	{
		displayName = "Bateaux et sous marins";
	};
};

class CfgIdentities
{
#include "\TGV_Assets\TGV_Identities.hpp"
};

class MRH_SoldierTabData
{
#include "\TGV_Assets\TGV_TabData.hpp"
};

class MRH_SoldierTabIntelPictures
{
#include "\TGV_Assets\TGV_TabPics.hpp"	
};