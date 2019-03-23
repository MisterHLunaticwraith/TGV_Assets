class TGV_Villain_Base : TGV_B_SoldierFatigues
{
	author = "Mr H.";
	editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_CTRG_Miller_F.jpg";
	_generalMacro = "TGV_Villain_Base";
	scope = 0;
	scopeCurator = 2;
	faction = "TGV_Vilains";
	editorSubcategory = "EdSubcat_TGV_Villains";
    editorCategory = "EdCat_TGV_Villains";
	displayName = "Mr H.";
	identityTypes[] = {"TGV_MisterH"};


	weapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F", "hgun_P07_khk_F", "Throw", "Put","Binocular"};
	respawnWeapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F", "hgun_P07_khk_F", "Throw", "Put","Binocular"};
	magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
	respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
	linkedItems[] = {"TGV_Black_Fatigues_Tee","V_PlateCarrier2_rgr_noflag_F", "G_Tactical_Black", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"V_PlateCarrier2_rgr_noflag_F", "G_Tactical_Black", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	items[] = {"FirstAidKit"};
	respawnItems[] = {"FirstAidKit"};
    tgvLoadOut[]={{"arifle_CTAR_blk_aco_flash_F","","acc_flashlight","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""},{},{},{"U_O_officer_noInsignia_hex_F",{{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"MRH_Map",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShellYellow",1,1}}},{"V_Chestrig_khk",{{"30Rnd_580x42_Mag_F",4,30},{"HandGrenade",2,1},{"SmokeShellYellow",1,1},{"Chemlight_yellow",2,1}}},{},"H_MilCap_ocamo","",{},{"","","ItemRadio","ItemCompass","ItemWatch",""}};

    
    

	uniformClass = "TGV_Black_Fatigues_Tee";
    headgearList[] = {"G_Tactical_Black",1};
	rds_randomCloths[] = {"TGV_Black_Fatigues_Tee",1}; 
	
    class EventHandlers {
		init = "[(_this select 0)] call TGV_fnc_VillainInit";
	};

	faceType = "Man_A3";
	side = 0;

	icon = "iconMan";
};

class TGV_test_Villain : TGV_Villain_Base
{
    displayName = "test villain";
    tgvLoadOut[]={{"arifle_CTAR_blk_aco_flash_F","","acc_flashlight","optic_ACO_grn",{"30Rnd_580x42_Mag_F",30},{},""},{},{},{"U_O_officer_noInsignia_hex_F",{{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"MRH_Map",1},{"30Rnd_580x42_Mag_F",3,30},{"SmokeShellYellow",1,1}}},{"V_Chestrig_khk",{{"30Rnd_580x42_Mag_F",4,30},{"HandGrenade",2,1},{"SmokeShellYellow",1,1},{"Chemlight_yellow",2,1}}},{},"H_MilCap_ocamo","",{},{"","","ItemRadio","ItemCompass","ItemWatch",""}};
    identityTypes[] = {"TGV_MisterH"};
    scope = 2;
    author = "Mr H.";
    editorPreview = "";
};

class TGV_V_Mauriceabdultamer: TGV_Villain_Base
{
displayName ="Maurice Abdul Tamer";
tgvLoadOut[] ={{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AM_Fatigue_04_4",{{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"MRH_Map",1},{"rhs_30Rnd_762x39mm",4,30},{"rhs_mag_rdg2_white",1,1},{"rhs_mag_rgd5",1,1}}},{},{},"LOP_H_Beret_Pesh","",{},{"","","ItemRadio","ItemCompass","",""}};
identityTypes[] ={"TGV_V_Mauriceabdultamer"};
scope =2;
author = "Mr H.";
editorPreview="\TGV_Assets\paa\VillainsMugshots\abdultamer.jpg";
};

// CfgVehicles
class TGV_V_Generalalidbaba: TGV_Villain_Base
{
displayName ="Général Ali D'Baba";
tgvLoadOut[] ={{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AM_Fatigue_03_5",{{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"MRH_Map",1},{"rhs_30Rnd_762x39mm",4,30},{"rhs_mag_rdg2_white",1,1},{"rhs_mag_rgd5",1,1}}},{},{},"LOP_H_Fieldcap_CDF","",{},{"","","","ItemCompass","",""}};
identityTypes[] ={"TGV_V_Generalalidbaba"};
scope =2;
author ="Mr H.";
editorPreview="\TGV_Assets\paa\VillainsMugshots\alidbaba.jpg";
};

// CfgVehicles
class TGV_V_Lemmymotorheadovitch: TGV_Villain_Base
{
displayName ="Lemmy Motorheadovitch";
tgvLoadOut[] ={{},{},{"rhs_weap_makarov_pm","","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"rhs_uniform_vdv_emr",{{"rhs_1PN138",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"MRH_Map",1},{"rhs_mag_9x18_8_57N181S",3,8}}},{"rhs_vest_commander",{{"rhs_mag_rdg2_white",2,1}}},{},"rhs_beret_vdv2","G_Aviator",{"Binocular","","","",{},{},""},{"","","ItemRadio","ItemCompass","ItemWatch",""}};
identityTypes[] ={"TGV_V_Lemmymotorheadovitch"};
scope =2;
author ="Mr H.";
editorPreview="\TGV_Assets\paa\VillainsMugshots\lemmy.jpg";
};

class TGV_V_JeanClaudeDiBongo: TGV_Villain_Base
{
displayName ="Jean Claude Di Bongo";
tgvLoadOut[] ={{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AFR_Fatigue_04",{{"MRH_Map",1},{"rhs_30Rnd_762x39mm",2,30},{"rhs_mag_rgd5",1,1}}},{"LOP_V_6Sh92_Radio_OLV",{}},{},"H_Beret_blk","rhsusf_shemagh_grn",{},{"","","","ItemCompass","",""}};
identityTypes[] ={"TGV_V_JeanClaudeDiBongo"};
scope =2;
author ="Mr H.";
editorPreview="\TGV_Assets\paa\VillainsMugshots\dibongo.jpg";
};