/*
class Land_Poster_05_F;
class FollowMe_Poster : Land_Poster_05_F
{
displayName = "Poster de propagande US";
editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Poster_05_F.jpg";
author = "Mr H.";
hiddenSelectionsTextures[] = {"\TGV_Assets\paa\followme.paa"};
icon = "iconObject_1x1";
editorCategory = "EdCat_TGV_Assets";
editorSubcategory = "EdSubcat_TGV_Posters";
};
*/
class Items_base_F;
class TGV_BeletteBeer: Items_base_F {
	author = "Mr H et LeDjean";
	mapSize = 0.07;
	class SimpleObject {
		eden = 1;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.131;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\TGV_Assets\UI\BeerPreview.jpg";
	_generalMacro = "Land_BottlePlastic_V2_F";
	scope = 2;
	scopeCurator = 2;
	displayName = "RedBeer";
	model = "\TGV_Assets\Models\redbeer.p3d";
	icon = "iconObject_circle";
	editorCategory = "EdCat_TGV_Assets";
	editorSubcategory = "EdSubcat_TGV_Drinks";
	vehicleClass = "Small_items";
	destrType = "DestructNo";
	cost = 100;
	// ThingX
	simulation = "thingX";
	class ACE_Actions {
		//class ACE_MainActions {
				class drink {
					displayName = "Boire";
					//condition = "";
					exceptions[] = {};
					statement = "_target call TGV_fnc_DrinkEffects";
					icon = "\TGV_Assets\paa\drink.paa";
					selection = "mem01";
					distance = 2;
				};
		//};
	};
};
#include "\TGV_Assets\mrh.hpp"
