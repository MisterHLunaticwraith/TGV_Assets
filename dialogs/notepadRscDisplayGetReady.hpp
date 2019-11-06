#define TGV_CAN_MOVE moving = false
#define TGV_TOGGLE_IDC 1982
#define TGV_NPGRP_IDC  1983
#define TGV_BACKPIC_IDC 1984
#define TGV_EDIT_IDC 1985
class TGV_toggleButton: RscButtonTGVMenus
{
	idc = TGV_TOGGLE_IDC;
	text = "Bloc note";
	action = "private _display = findDisplay 52;private _ctrls= [(_display displayCtrl 1985),(_display displayCtrl 1984)];private _toggle = !(ctrlShown (_display displayCtrl 1985));{_x ctrlShow _toggle}forEach _ctrls;ctrlSetFocus (_display displayCtrl 1985)";
	x = 0.891406 * safezoneW + safezoneX;
	y = 0.0352222 * safezoneH + safezoneY;
	w = 0.108281 * safezoneW;
	h = 0.022 * safezoneH;
};

class TGV_BackPic: RscPictureTGVMenus
{
	idc = TGV_BACKPIC_IDC;
	TGV_CAN_MOVE;
	show = false;
	text = "\TGV_assets\paa\notepad_co.paa";
	x = 0.850625 * safezoneW + safezoneX;
	y = 0.06 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.363 * safezoneH;
};

class TGV_EditZoneTGVMenus : RscEditTGVMenus
{
	idc = TGV_EDIT_IDC;
	show = false;
	onLoad = "params ['_ctrl','_parentCfg'];private _txt = uiNamespace getVariable ['TGV_notes',(['TGV_NotePadDefaultNotes']call cba_settings_fnc_get)];_ctrl ctrlSetText _txt";
	onChar= "uiNamespace setVariable ['TGV_notes',(ctrlText (_this select 0))];";
	TGV_CAN_MOVE;
	text = "";
	colorText[] = {0,0,0,1};
	shadow = 0;
	font = "BethEllen2";
	//style = ST_MULTI;
	style = "16 + 512";
	x = 0.850625 * safezoneW + safezoneX;
	y = 0.06 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.363 * safezoneH;
};


