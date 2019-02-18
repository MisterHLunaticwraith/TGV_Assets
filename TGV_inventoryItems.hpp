#define INVITPATH(ARG) QUOTES(\TGV_Assets\paa\TGV_itemsInvIcons\ARG)
class CBA_MiscItem;
class CBA_MiscItem_ItemInfo;

    
class TGV_KeyCard: CBA_MiscItem
{
	author = "Mr H.";
	displayName = "Pass RFID";
	model = "\a3\Props_F_Orange\Items\Documents\Wallet_01_F.p3d";
	scope = 2;      
	scopeArsenal = 2;
	scopeCurator = 2;
	editorCategory = "EdCat_TGV_Assets";
	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
	editorSubcategory = "EdSubcat_TGV_InventoryItems";
	picture = INVITPATH(rfidpass.paa);
	descriptionShort = "Un pass RFID";
	//type = 0;
	ace_arsenal_hide = 0;
	class ItemInfo: CBA_MiscItem_ItemInfo
			{
				mass=0.6;//en lb*10
			};

};

class TGV_Beer_Item: CBA_MiscItem
{
	author = "Mr H.";
	displayName = "Red Binouze";
	model = "\TGV_Assets\Models\redbeer.p3d";
	scope = 2;      
	scopeArsenal = 2;
	scopeCurator = 2;
	editorCategory = "EdCat_TGV_Assets";
	editorPreview = "\TGV_Assets\UI\BeerPreview.jpg";
	editorSubcategory = "EdSubcat_TGV_InventoryItems";
	picture = INVITPATH(redbeer_full_ca.paa);
	descriptionShort = "Rien de tel pour se rafraîchir! L'abus d'alcool etc...";
	//type = 0;
	ace_arsenal_hide = 0;
	class ItemInfo: CBA_MiscItem_ItemInfo
			{
				mass=1.5;//en lb*10
			};
	acex_field_rations_consumeAnims[] = {"acex_field_rations_drinkStand","acex_field_rations_drinkCrouch","acex_field_rations_drinkProne"};
	acex_field_rations_consumeSounds[] = {"acex_field_rations_drink1","acex_field_rations_drink1","acex_field_rations_drink2"};
	acex_field_rations_consumeText = "Drinking from %1...";
	acex_field_rations_consumeTime = 7;
	acex_field_rations_replacementItem = "TGV_Beer_Item_half";
	acex_field_rations_thirstQuenched = 5;

};

class TGV_Beer_Item_half :TGV_Beer_Item
{
	displayName = "Red Binouze (à moitié vide)";
	descriptionShort = "j'en connais un qui a fait la fête!";
	acex_field_rations_replacementItem = "TGV_Beer_Item_empty";
	class ItemInfo: CBA_MiscItem_ItemInfo
			{
				mass=0.8;//en lb*10
			};

};

class TGV_Beer_Item_empty :TGV_Beer_Item
{
	displayName = "Red Binouze (vide)";
	descriptionShort = "Ya plus rien à boire grois soiffard!";
	picture = INVITPATH(redbeer_empty_ca.paa);
	acex_field_rations_replacementItem = "";
	acex_field_rations_thirstQuenched = 0;
	class ItemInfo: CBA_MiscItem_ItemInfo
			{
				mass=0.2;//en lb*10
			};

};