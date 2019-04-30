	
    class Man;
    class CAManBase: Man 
	{
        class ACE_SelfActions 
		{
			class TGV_WagesAction {
                displayName = "Solde";
				condition = "isMultiplayer && !((player getVariable ['TGV_informations_solde',[]]) isEqualTo [])";
				exceptions[] = {"isNotInside","isNotSitting"};
				statement = "";
				icon = "";

				class TGV_ShowWages
				{
					displayName = "Consulter votre solde";
					condition = "isMultiplayer && !((player getVariable ['TGV_informations_solde',[]]) isEqualTo [])";
					exceptions[] = {"IsNotInside","isNotSitting"};
					statement = "call TGV_fnc_fillWages";
					icon = "";
					
				};
            };
        };
    };
    /*
    class SoldierEB: CAManBase
    {
        nakedUniform="TGV_BasicBody_Black";
    };
    class SoldierWB;
    class B_Soldier_base_F : SoldierWB
      {
        nakedUniform="TGV_BasicBody_Black";
    };
    */