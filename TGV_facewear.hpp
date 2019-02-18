class cfgGlasses
{
    class None;
    class g_combat;
    class TGV_HaloMask: g_combat
    {
        author = "Mr H.";
        displayname = "Halo Mask";
       model = "\TGV_Assets\Models\halomaskBasicTest.p3d";
      // model = "\A3\characters_f_beta\heads\glasses\g_combat";
        picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
        identityTypes[] =
        {
            "NoGlasses",0,"G_NATO_default",300,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",300,"G_NATO_sniper",0,
            "G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0
        };
        ACE_Color[] = {0, 0, 0};
        ACE_TintAmount = 16;
        ACE_Overlay = "\TGV_Assets\paa\HaloMaskFilters\Halomask.paa";
        ACE_OverlayDirt = "\TGV_Assets\paa\HaloMaskFilters\Halomaskdirty.paa";
        ACE_OverlayCracked = "\TGV_Assets\paa\HaloMaskFilters\Halomaskdamaged.paa";
        ACE_Resistance = 1;
        ACE_Protection = 0;
        ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
        // G_Combat
        _generalMacro = "G_Combat";
        //hiddenSelections[] = {"camo"};
        //hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\g_combat_ca.paa"};

	    // None
	    name = "None";
	    scope = 2;
        mass = 4;
    };
};

