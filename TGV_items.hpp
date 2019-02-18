#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class Box_NATO_Ammo_F;

class TGV_emptyBox : Box_NATO_Ammo_F
{
    displayName = "Boîte de munitions vide";
    editorCategory = "EdCat_TGV_Assets";
    editorSubcategory = "EdSubcat_TGV_MiscItems";
    class TransportWeapons{};
	class TransportMagazines{};
	class TransportItems{};
};
class B_supplyCrate_F;

class TGV_emptySupplyBox : B_supplyCrate_F
{
    displayName = "Caisse vide";
    editorCategory = "EdCat_TGV_Assets";
    editorSubcategory = "EdSubcat_TGV_MiscItems";
    class TransportWeapons{};
	class TransportMagazines{};
	class TransportItems{};
    class TransportBackpacks{};
};

class CargoNet_01_box_F;
class TGV_FoodSuppliesCrate : CargoNet_01_box_F
{
    displayName = "Caisse de provisions";
    editorCategory = "EdCat_TGV_Assets";
    editorSubcategory = "EdSubcat_TGV_MiscItems";
    class TransportWeapons{};
	class TransportMagazines{};
	class TransportItems
    {
        item_xx(ACE_Banana,15);
        item_xx(ACE_WaterBottle,10);
        item_xx(ACE_Canteen,10);
        item_xx(ACE_Can_Spirit,5);
        item_xx(ACE_Can_Franta,5);
        item_xx(ACE_Can_RedGull,5);
        item_xx(ACE_MRE_LambCurry,5);
        item_xx(ACE_MRE_BeefStew,5);
        item_xx(ACE_MRE_CreamTomatoSoup,5);
        item_xx(ACE_MRE_CreamChickenSoup,5);
        item_xx(ACE_MRE_ChickenTikkaMasala,5);
        item_xx(ACE_MRE_SteakVegetables,5);
        item_xx(ACE_MRE_MeatballsPasta,5);
        item_xx(ACE_MRE_ChickenHerbDumplings,5);
        item_xx(ACE_Humanitarian_Ration,5);
        item_xx(TGV_Beer_Item,25);        
    };
    class TransportBackpacks{};
};