
    class UnderWear_F;
	class Underwear_TGV : UnderWear_F
	{
			hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TGV_Assets\paa\Uniforms\basicbody_black_TGV_co.paa"
		};
	};
    class B_soldier_AR_F;
    class TGV_B_SoldierFatigues : B_soldier_AR_F
    {
		//scope = 0;
		hiddenSelections[]=
		{
			"camo","camo2"
		};
    hiddenSelectionsTextures[]=
		{
			"\TGV_Assets\paa\Uniforms\test.paa","\TGV_Assets\paa\Uniforms\basicbody_black_TGV_co.paa"
		};
    uniformClass="TGV_Black_Fatigues_Tee";
   //nakedUniform="TGV_BasicBody_Black";
   //uniformClass="TGV_BasicBody_Black";
    };

    class ODA_SoldierFatigues : B_soldier_AR_F
    {
		displayName = "ODA Soldier";
		//scope = 0;
		hiddenSelections[]=
		{
			"camo","camo2"
		};
    hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing1_co.paa","\TGV_Assets\paa\Uniforms\ODA_Shirt_co.paa"
		};
    uniformClass="ODA_BlackFatigues_Tee";
   //nakedUniform="TGV_BasicBody_Black";
   //uniformClass="TGV_BasicBody_Black";
    };