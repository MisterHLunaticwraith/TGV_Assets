class MRH_Logo: Items_base_F {
	author = "Mr H";
	mapSize = 0.07;
	class SimpleObject {
		eden = 1;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.131;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\TGV_Assets\UI\MRHPreview.jpg";
	_generalMacro = "Land_BottlePlastic_V2_F";
	scope = 2;
	scopeCurator = 2;
	displayName = "Logo Mr H.";
	model = "\TGV_Assets\Models\MRH\hlogoSmall.p3d";
	icon = "iconObject_circle";
	editorCategory = "EdCat_TGV_Assets";
	editorSubcategory = "EdSubcat_TGV_Gods";
	vehicleClass = "Small_items";
	destrType = "DestructNo";
	cost = 100;
	// ThingX
	simulation = "thingX";
	class ACE_Actions {
		//class ACE_MainActions {
				class drink {
					displayName = "En savoir plus sur Mr H.";
					//condition = "";
					exceptions[] = {};
					statement = "call TGV_fnc_MRHInfo";
					icon = "\TGV_Assets\paa\mrhlogowhite.paa";
					selection = "mem01";
					distance = 2;
				};
		//};
	};
};