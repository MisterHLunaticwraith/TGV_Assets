	class Uniform_Base;   
	class UniformItem;
	class U_BasicBody: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		displayName="$STR_A3_Underwear1";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Underwear_TGV";
			containerClass="Supply0";
			mass=5;
		};
	};
	
   // class Uniform_Base;
 
    
    class TGV_BasicBody_Black: U_BasicBody
	{
		author="Mr H.";
		scope=1;
		displayName="Black TGV Underwear";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TGV_Assets\paa\Uniforms\basicbody_black_TGV_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Underwear_TGV";
			containerClass="Supply0";
			mass=5;
		};
	};

            class U_B_CombatUniform_mcam_tshirt;
        
    	class TGV_Black_Fatigues_Tee: U_B_CombatUniform_mcam_tshirt
	{
		author="Mr H.";
		scope=2;
        //nakedUniform="TGV_BasicBody_Black";
		displayName="TGV Uniform";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= TGV_B_SoldierFatigues;
            //uniformClass="TGV_BasicBody_Black";
			containerClass="Supply40";
			mass=40;
		};
	};
	//class V_Press_F;
	class ItemCore;
    class Vest_Camo_Base: ItemCore
    {
        class ItemInfo;
    };
	class V_TGV_ZeusVest : Vest_Camo_Base
	{
		author="BI modified by Mr H.";
		_generalMacro="V_Press_F";
		scope=2;
		picture="\A3\Characters_F_EPC\Data\UI\icon_V_PressVest_CA.paa";
		displayName="Veste Zeus";
		model="\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
		hiddenSelectionsTextures[]=
		{
			"\TGV_Assets\paa\Uniforms\equip_press_vest_01_ZEUSTGV_co.paa"
		};
		descriptionShort="Veste spéciale Zeus, resitance et contenance accrues";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
			containerClass="Supply500";
			mass=0;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=120;
					passThrough=0;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=120;
					passThrough=0;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=120;
					passThrough=0;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=120;
					passThrough=0;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0;
				};
			};
		};
	};