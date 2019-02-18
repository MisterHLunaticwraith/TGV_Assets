/*
class CfgHeads
{
	
	class DefaultHead_A3;

	class TGV_mrhHead : DefaultHead_A3
	{
		model = "\TGV_Assets\Models\mrhFace.p3d";
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
		selectionPersonalityHL = "hl";	
	};
	
};
*/
class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man_A3: Default
	{
		class Default;
        /*
		{
			displayname="$STR_CFG_FACES_Default";
			texture="\TGV_Assets\Models\myface1.paa";
			head="DefaultHead_A3";
			identityTypes[]={};
			material="A3\Characters_F\Heads\Data\m_White_01.rvmat";
			textureHL="\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL="\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2="\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2="\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};
		class mrh_H_Face: Default
		{
			name = "Mr H."; // every class, different string name
			displayName = "test";
			texture="\TGV_Assets\Models\faceh.paa";
			head= "DefaultHead_A3"; //classname in cfgHeads
			// material= A3\characters_f\Heads\Data\m_white_04.rvmat;
			disabled = 0; // always TRUE for inherited camo faces
		};
        */
        		class MRH_Head: Default
		{
			author="Mr H. based On BI faces";
			displayname="Mr H.";
			texture="\TGV_Assets\paa\MRH_character\mrh_face_wh_05_co.paa";
			head="NATOHead_A3";
			identityTypes[]=
			{
				"Head_NATO",
				"Head_Euro"
			};
			material="\TGV_Assets\paa\MRH_character\mrh_face_wh_05.rvmat";
			materialWounded1="\TGV_Assets\paa\MRH_character\mrh_face_wh_05_injury.rvmat";
			materialWounded2="\TGV_Assets\paa\MRH_character\mrh_face_wh_05_injury.rvmat";
			textureHL="\TGV_Assets\paa\MRH_character\mrh_arms_wh_05_co.paa";
			materialHL="\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			textureHL2="\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL2="\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
		};
 	};
};