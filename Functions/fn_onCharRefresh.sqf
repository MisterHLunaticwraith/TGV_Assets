[] spawn {

_display = findDisplay 170219;
sleep 0.2;
#define CTRLF(ARG) ((_display) displayCtrl ARG)


_TEXT = CTRLF(1400);
_PRV = CTRLF(1100);
_PRV ctrlSetStructuredText parseText(ctrlText _TEXT);

};
