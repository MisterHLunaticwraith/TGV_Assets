params ["_input"];
_array = str _input;
_step1 = [_array, "[","{"] call CBA_fnc_replace;
_step2 = [_step1, "]","}"] call CBA_fnc_replace;
_step2