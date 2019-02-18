[] spawn {
sleep 2;
_clickableLink = parseText "<t font = 'PuristaLight'><t colorLink='#ff0000'><a href='https://www.facebook.com/MisterHGaming/'>Facebook</a></t>";
_clickableLink2 = parseText "<t font = 'PuristaLight'><t colorLink='#ff0000'><a href='https://www.youtube.com/channel/UCRAc5T6CsfXodKi9kKTET8Q?view_as=subscriber'>Youtube</a></t>";
_clickableLink3 = parseText "<t font = 'PuristaLight'><t colorLink='#ff0000'><a href='https://www.twitch.tv/lunaticwraith'>Twitch</a></t>";
_clickableLink4 = parseText "<t font = 'PuristaLight'><t colorLink='#ff0000'><a href='https://steamcommunity.com/sharedfiles/filedetails/?id=1376154097'>Voir mes mods sur le workshop</a></t>";
_separator1 = parseText "<br />______________________________________<br />";
_separator2 = parseText "<br /><br />"; 
_fulltext = parsetext "<t font = 'PuristaLight'> Cette mission a été réalisée par Mr H. pour la team [TGV]. N'hésitez pas à vous abonner à mes différents services et mods pour suivre mon actualité.</t>";
_Linkstext = parsetext "<t font = 'PuristaLight'>Mes liens:</t>";
_txt = composeText 
[
_fulltext,
_separator2,  
_Linkstext,
_separator1,
_clickableLink2,
_separator1,
_clickableLink,
_separator1,
_clickableLink3,
_separator1,
_clickableLink4
 ]; 

"Mr H." hintC _txt;
};