	
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
			class TGV_NotepadActions {
                displayName = "Notes";
				condition = "true";
				exceptions[] = {"isNotInside","isNotSitting","notOnMap"};
				statement = "";
				icon = "";


				class TGV_ShowNotes
				{
					displayName = "Voir le carnet de notes";
					condition = "true";
					exceptions[] = {"IsNotInside","isNotSitting","notOnMap"};
					statement = "createDialog 'TGV_quickNotePad'";
					icon = "";
					
				};
            };

            class MRH_AdminActions {
                displayName = "MRH special's";
				condition = "private _uid = getPlayerUid player;(_uid isEqualTo '76561197973693960')";
				exceptions[] = {"isNotSitting"};
				statement = "";
				icon = "";

				class MRH_SaluteMe
				{
					displayName = "Se faire saluer!";
					condition = "private _uid = getPlayerUid player;(_uid isEqualTo '76561197973693960')";
					exceptions[] = {"isNotSitting"};
					statement = "call TGV_fnc_saluteH";
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