
_display = findDisplay 170219;
#define CTRLF(ARG) ((_display) displayCtrl ARG)
_RSLIDE = CTRLF(1900);
_GSLIDE = CTRLF(1901);
_BSLIDE =CTRLF(1902);
_COLPREV = CTRLF(1200);
_color = [sliderPosition _RSLIDE,sliderPosition _GSLIDE,sliderPosition _BSLIDE,1];
_COLPREV ctrlSetText "#(argb,8,8,3)color(" + format ["%1,%2,%3,1",_color select 0,_color select 1,_color select 2] +")";