private _defaultText = "<img size = '15' image ='\TGV_Assets\paa\armaOpBack.paa'/>Bienvenue sur le serveur de la Team TGV <br />______________________________________<br />Merci de rester courtois et fairplay.<br /><br />Pour un meilleur fonctionnement du serveur, ne laissez pas trainer vos objets au sol, laissez les dans l'arsenal ou dans un inventaire.<br /><br />L'utilisation de teamspeak est obligatoire pour ACRE2<br /><br /><t colorLink='#ff0000'><a href='tgv.ovh'>TeamSpeak</a></t>: tgv.ovh<br /><br />Il est interdit de parler dans le chat, sauf pour rapporter un problème technique ou reporter un mauvais comportement.<br />______________________________________<br /><t colorLink='#ff0000'><a href='http://tgv.ovh/'>TeamTGV</a></t><br />______________________________________<br /><t colorLink='#ff0000'><a href='https://www.twitch.tv/lunaticwraith'>Twitch Mr.H</a></t><br /><br /><t colorLink='#ff0000'><a href='https://www.twitch.tv/wtf_redbelette'>Twitch RedBelette</a></t>";


["TGV_WelcomeMenuText", "EDITBOX",   ["Texte du menu d'acceuil","Le menu d'acceuil est automatiquement appelé par le serveur quand un client se connecte, vous pouvez éditer le message que montrera ce menu d'acceuil en changeant ce réglage. Accepte le texte structuré"], ["Réglages TGV", "Réglages du mod TGV"],_defaultText,1] call cba_settings_fnc_init;

["TGV_WelcomeMenuDelay", "EDITBOX",   ["Délais pour afficher le menu d'acceuil","Temps avant que le menu d'accueil de s'ouvre"], ["Réglages TGV", "Réglages du mod TGV"],"15",1] call cba_settings_fnc_init;

["TGV_DisablePatch", "CHECKBOX",   ["Desactiver les patchs perso pour tous","Ce réglage empêche les joueurs de porter leur patch perso (pas celui TGV)"], ["Réglages TGV", "Réglages du mod TGV"],false,1] call cba_settings_fnc_init;

["TGV_DisablePatchOnlyMedic", "CHECKBOX",   ["Desactiver les patchs perso pour les medics seulement","Ce réglage empêche les joueurs de porter leur patch perso (pas celui TGV) seulement s'ils son médics, auquel cas le patch medic de MilsimTools s'appliquera"], ["Réglages TGV", "Réglages du mod TGV"],true,1] call cba_settings_fnc_init;

["TGV_StartWithafeStartEnabled", "CHECKBOX",   ["Activer le safe start au début de la mission","Le safe start désactive toutes les armes joueurs et IA,aussi utile pour débugguer! Si ce réglage est activé le safe start est automatiquement lancé en début de mission. Pour y mettre fin, passer par le menu admin du briefing."], ["Réglages TGV", "Réglages du framework de mission TGV"],true,1] call cba_settings_fnc_init;

["TGV_playTGV_vidAtstartUp", "CHECKBOX",   ["Jouer la vidéo TGV au départ de la mission","Joue la vidéo TGV au départ de la mission"], ["Réglages TGV", "Réglages du framework de mission TGV"],true,1] call cba_settings_fnc_init;

["TGV_playTGV_vidAtstartUpUnSkip", "CHECKBOX",   ["Utiliser la version non skippable de la vidéo","Si vous cochez cette case la vidéo ne pourra pas être skippée."], ["Réglages TGV", "Réglages du framework de mission TGV"],false,1] call cba_settings_fnc_init;

["TGV_startUp_safetyOn", "CHECKBOX",   ["Enclencher la sécurité des armes au départ de la mission","Duh!"], ["Réglages TGV", "Réglages du framework de mission TGV"],true,1] call cba_settings_fnc_init;

["TGV_startUp_addEarPlugs", "CHECKBOX",   ["Ajouter les bouchons d'oreille à l'inventaire du joueur","Duh!"], ["Réglages TGV", "Réglages du framework de mission TGV"],true,1] call cba_settings_fnc_init;

["TGV_startUp_equipEarPlugs", "CHECKBOX",   ["Auto equiper les bouchons d'oreille","Duh!"], ["Réglages TGV", "Réglages du framework de mission TGV"],true,1] call cba_settings_fnc_init;

["TGV_useFactionSpecificBrief", "CHECKBOX",   ["Utiliser un briefing par faction","Voir framework,initplayerlocal"], ["Réglages TGV", "Réglages du framework de mission TGV"],false,1] call cba_settings_fnc_init;

["TGV_RSP_respOnStartPos", "CHECKBOX",   ["Respawn sur position de départ","Le joueur respawnera sur sa position de départ"], ["Réglages TGV", "Réglages du framework de mission TGV - Respawn (ces réglages ne sont pris en compte que si vous utilisez le mode de respawn>>Custom>>Respawn TGV)"],false,1] call cba_settings_fnc_init;

["TGV_RSP_respOnRspPos", "CHECKBOX",   ["Respawn sur point respawn TGV","Placer un objet 'TGV Respawn par side', le joueur respawnera sur cet objet"], ["Réglages TGV", "Réglages du framework de mission TGV - Respawn (ces réglages ne sont pris en compte que si vous utilisez le mode de respawn>>Custom>>Respawn TGV)"],true,1] call cba_settings_fnc_init;

["TGV_RSP_respWithStartUpLd", "CHECKBOX",   ["Respawn avec le paquetage de départ","Au respawn Le joueur récupérera son équipement du départ de la mission, sinon il récupère celui qu'il avait à sa mort"], ["Réglages TGV", "Réglages du framework de mission TGV - Respawn (ces réglages ne sont pris en compte que si vous utilisez le mode de respawn>>Custom>>Respawn TGV)"],false,1] call cba_settings_fnc_init;

["TGV_RSP_sideSpecificResp", "CHECKBOX",   ["Respawns différents par camps","Le respawn se fera sur l'objet specifique au camps du joueur (si placé)"], ["Réglages TGV", "Réglages du framework de mission TGV - Respawn (ces réglages ne sont pris en compte que si vous utilisez le mode de respawn>>Custom>>Respawn TGV)"],false,1] call cba_settings_fnc_init;

["TGV_RSP_respOnOpenSpectator", "CHECKBOX",   ["Ouvrir le mode spectateur au respawn","Au respawn, le menu spectateur sera ouvert"], ["Réglages TGV", "Réglages du framework de mission TGV - Respawn (ces réglages ne sont pris en compte que si vous utilisez le mode de respawn>>Custom>>Respawn TGV)"],true,1] call cba_settings_fnc_init;