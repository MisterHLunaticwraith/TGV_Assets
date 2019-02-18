params ["_type"];
_toInsert = "";

_display = findDisplay 170219;
#define CTRLF(ARG) ((_display) displayCtrl ARG)
_RSLIDE = CTRLF(1900);
_GSLIDE = CTRLF(1901);
_BSLIDE =CTRLF(1902);
_COLPREV = CTRLF(1200);
_color = [sliderPosition _RSLIDE,sliderPosition _GSLIDE,sliderPosition _BSLIDE,1];

_htmlCol = _color call BIS_fnc_colorRGBtoHTML;
//"<t color='"+ str _htmlCol+ "'>color text</t>";
switch (true) do {
	case (_type == "COL") : {_toInsert = "<t color="+ str _htmlCol+ ">color text</t>";};
	
	case (_type == "LINED") : {_toInsert = "<t underline='1'>Underlined&#160;Underlined Text</t>"};
	case (_type == "URL") : {_toInsert = "<t colorLink='#0000ff'><a href='http://www.arma3.com/'>Blue hyperlink</a></t>"};
	case (_type == "BR") : {_toInsert = "<br/>";};
	case (_type == "SZ"): {_toInsert = "<t size='2.0'>Large text</t>"};
};

_text = ctrlText 1400; 
_text = _text + _toInsert; 
ctrlSetText [1400, _text];
call TGV_fnc_onCharRefresh