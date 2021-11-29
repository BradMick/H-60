// pilotCamera
// zoomIn, zoomOut
// cameraVisionMode
// AimDown, AimLeft, AimRight, AimUp
// vtx_uh60_flir_fnc_perFrame

params ["_vehicle", "_frameTime"];

if (vtx_uh60_flir_setting_animateTurret && {local _vehicle}) then {
  [_vehicle] call vtx_uh60_flir_fnc_syncAnimation;
};

if (!vtx_uh60_flir_isPipHidden || {vtx_uh60_flir_playerIsPilot && cameraView == "GUNNER"}) then {
  [_vehicle] call vtx_uh60_flir_fnc_handleKeyInputs;
  [_vehicle] call vtx_uh60_flir_fnc_handleSlew;
};

if (vtx_uh60_flir_isPipHidden) exitWith {};

[_vehicle] call vtx_uh60_flir_fnc_updateCamera;
_this call vtx_uh60_flir_fnc_updateUIValues;
