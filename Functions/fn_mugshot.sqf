_this spawn {
params ["_unit"];
_unit switchMove "ACE_AmovPercMstpScapWnonDnon";
sleep 1;
_unit enableSimulation false;
_text = "<t color='#ff0000' size = '1.4' font = 'EtelkaMonospaceProBold'>Suspect:<br/>"+ name _unit + "</t>"; 
 
[_text,0.8,1,10,-1,0,0] spawn BIS_fnc_dynamicText;
_backGround = "UserTexture1m_F" createVehicle (_unit modelToWorld [1,1,1]);
_backGround setObjectTexture [0,"\TGV_Assets\paa\VillainsMugshots\default.jpg"];
_backGround setPos (_unit modelToWorld [0,-0.3,1.5]);
_backGround setDir ((getDir _unit)+180);
 _camera = "camera" camCreate (_unit modelToWorld [0,0.8,1.8]);  
 _camera cameraEffect ["internal", "BACK"]; 
 _camera camCommand "inertia on"; 
 _camera camPrepareTarget _unit; 
 _camera camPrepareFOV 0.32; 
 _camera camCommitPrepared 0;
 sleep 5;
 _unit setDir ((getDir _unit)+90);
 sleep 5;
 

_unit switchMove "";
_unit enableSimulation true;
deleteVehicle _backGround; 
_camera cameraeffect ["terminate", "back"];
camDestroy _camera;
};