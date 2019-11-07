
private _briefing ="
<br/>
<font size='18'>ADMINISTRATEUR</font><br/>
Cette section n'est visible que par l'administrateur.
<br/><br/>

<font size='18'>CONTROLE DU SAFE START</font><br/>
|- <execute expression=""call TGV_fnc_startSafeStart; hint 'Safe start lancé'"">
Lancer le Safe Start</execute><br/>
|- <execute expression=""call TGV_fnc_stopSafeStart; hint 'Safe start arrêté'"">
Arrêter le Safe Start</execute><br/>
<br/><br/>

<font size='18'>RECUPERER  UN ZEUS</font><br/>
|- <execute expression=""[player]call MRH_fnc_MilsimTools_Core_isCurator;hint 'Zeus attribué'"">
S'attribuer un Zeus</execute><br/>
<br/><br/>

<font size='18'>CHANGER L'ALLEGEANCE DES INDEPENDANTS</font><br/>
|- <execute expression=""[west,1]call TGV_fnc_setIndeAllegiance;hint 'Inde maintenant amis avec BLUFOR'"">
Rendre amis avec BLUFOR</execute><br/>
|- <execute expression=""[west,0]call TGV_fnc_setIndeAllegiance;hint 'Inde maintenant ennemis avec BLUFOR'"">
Rendre ennemis avec BLUFOR</execute><br/>
|- <execute expression=""[east,1]call TGV_fnc_setIndeAllegiance;hint 'Inde maintenant amis avec OPFOR'"">
Rendre amis avec OPFOR</execute><br/>
|- <execute expression=""[east,0]call TGV_fnc_setIndeAllegiance;hint 'Inde maintenant ennemis avec OPFOR'"">
Rendre ennemis avec OPFOR</execute><br/>
<br/><br/>

<font size='18'>TAGS DES JOUEURS</font><br/>
|- <execute expression=""call TGV_fnc_toggleTags; hint 'tags affichés'"">
Montrer les tags des joueurs </execute><br/>
|- <execute expression=""false call TGV_fnc_toggleTags; hint 'tags cachés'"">
Cacher les tags des joueurs</execute><br/>
<br/><br/>

<font size='18'>METTRE FIN A LA MISSION</font><br/>
|- <execute expression=""call TGV_fnc_startGenericEndCutscene"">
Joue la cutscene de fin générique et termine la mission</execute><br/>
<br/><br/>
";



