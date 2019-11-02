class Land_Grave_dirt_F;
class TGV_respawn_base : Land_Grave_dirt_F
{
	displayName = "Respawn TGV (tous les camps)";
    //editorPreview = "";
    author = "Mr H.";
    class EventHandlers {
	init = "[(_this select 0),'ALL'] call TGV_fnc_isRespawnObject";	
	};
    
    icon = "iconObject_1x1";
    editorCategory = "EdCat_TGV_Assets";
    editorSubcategory = "EdSubCat_TGV_respawns";
	dlc = "TGV_Assets";
};

class TGV_respawn_west : Land_Grave_dirt_F
{
	displayName = "Respawn TGV (BLUFOR)";
    //editorPreview = "";
    author = "Mr H.";
    class EventHandlers {
	init = "[(_this select 0),west] call TGV_fnc_isRespawnObject";	
	};
    
    icon = "iconObject_1x1";
    editorCategory = "EdCat_TGV_Assets";
    editorSubcategory = "EdSubCat_TGV_respawns";
	dlc = "TGV_Assets";
};

class TGV_respawn_east : Land_Grave_dirt_F
{
	displayName = "Respawn TGV (OPFOR)";
    //editorPreview = "";
    author = "Mr H.";
    class EventHandlers {
	init = "[(_this select 0),east] call TGV_fnc_isRespawnObject";	
	};
    
    icon = "iconObject_1x1";
    editorCategory = "EdCat_TGV_Assets";
    editorSubcategory = "EdSubCat_TGV_respawns";
	dlc = "TGV_Assets";
};

class TGV_respawn_independent : Land_Grave_dirt_F
{
	displayName = "Respawn TGV (INDE)";
    //editorPreview = "";
    author = "Mr H.";
    class EventHandlers {
	init = "[(_this select 0),independent] call TGV_fnc_isRespawnObject";	
	};
    
    icon = "iconObject_1x1";
    editorCategory = "EdCat_TGV_Assets";
    editorSubcategory = "EdSubCat_TGV_respawns";
	dlc = "TGV_Assets";
};

class TGV_respawn_civ : Land_Grave_dirt_F
{
	displayName = "Respawn TGV (Civils)";
    //editorPreview = "";
    author = "Mr H.";
    class EventHandlers {
	init = "[(_this select 0),civilian] call TGV_fnc_isRespawnObject";	
	};
    
    icon = "iconObject_1x1";
    editorCategory = "EdCat_TGV_Assets";
    editorSubcategory = "EdSubCat_TGV_respawns";
	dlc = "TGV_Assets";
};