#define TAGPATH(ARG) QUOTES(TGV_Assets\paa\TGV_tags\ARG)
class ACE_Tags {
    class TGV_Kilroy {
        displayName = "Kilroy was here";  // Name of your tag being displayed in the interaction menu
        requiredItem = "ACE_SpraypaintBlack";  // Required item to have in the inventory to be able to spray your tag (eg. `"ACE_SpraypaintBlack"`, `"ACE_SpraypaintRed"`, `"ACE_SpraypaintGreen"`, `"ACE_SpraypaintBlue"` or any custom item from `CfgWeapons`)
        textures[] = {TAGPATH(kilroy1.paa),TAGPATH(kilroy2.paa),TAGPATH(kilroy3.paa),TAGPATH(kilroy4.paa)};  // List of texture variations (one is randomly selected when tagging)
        icon = TAGPATH(kilroy1.paa);  // Icon being displayed in the interaction menu
    };
    class TGV_mrh {
        displayName = "Mr H. was here";  // Name of your tag being displayed in the interaction menu
        requiredItem = "ACE_SpraypaintBlack";  // Required item to have in the inventory to be able to spray your tag (eg. `"ACE_SpraypaintBlack"`, `"ACE_SpraypaintRed"`, `"ACE_SpraypaintGreen"`, `"ACE_SpraypaintBlue"` or any custom item from `CfgWeapons`)
        textures[] = {TAGPATH(mrhtag.paa)};  // List of texture variations (one is randomly selected when tagging)
        icon = TAGPATH(mrhtag.paa);  // Icon being displayed in the interaction menu
    };
    class TGV_TGV {
        displayName = "The TGV were here";  // Name of your tag being displayed in the interaction menu
        requiredItem = "ACE_SpraypaintBlack";  // Required item to have in the inventory to be able to spray your tag (eg. `"ACE_SpraypaintBlack"`, `"ACE_SpraypaintRed"`, `"ACE_SpraypaintGreen"`, `"ACE_SpraypaintBlue"` or any custom item from `CfgWeapons`)
        textures[] = {TAGPATH(tgvtag.paa)};  // List of texture variations (one is randomly selected when tagging)
        icon = TAGPATH(tgvtag.paa);  // Icon being displayed in the interaction menu
    };
};
