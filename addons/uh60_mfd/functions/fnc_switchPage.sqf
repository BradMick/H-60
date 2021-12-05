/*
 * vtx_uh60_mfd_fnc_switchPage
 *
 * handles the setup of the mfd system
 *
 * params (array)[(object) vehicle]
 */

params ["_vehicle", "_mfdIndex", "_pageIndex", "_propagate"];
#include "..\config\mfdDefines.hpp"

if (_propagate) exitWith {
    systemChat "MFD MP Sync";
    [_vehicle, _mfdIndex, _pageIndex, false] remoteExecCall ["vtx_uh60_mfd_fnc_switchPage", crew _vehicle];diag_log "switchPage mfd";
};

_vehicle setUserMFDValue [_mfdIndex, _pageIndex];

_vehicle setObjectTexture [MAP_SELECTION(_mfdIndex), ""];
_vehicle setObjectTexture [MFD_OVERLAY(_mfdIndex), ""];
switch (_pageIndex) do {
    case MFD_PAGE_TAC: {
        _map = getText (configFile >> "CfgWorlds" >> worldName >> "pictureMap");
        _vehicle setObjectTexture [MAP_SELECTION(_mfdIndex), _map];
        _vehicle setObjectTexture [MFD_OVERLAY(_mfdIndex), "z\vtx\addons\uh60_mfd\data\Overlay_ca.paa"];
    };
    case MFD_PAGE_FLIR: {
        [_vehicle] call vtx_uh60_flir_fnc_startCamera;
        _vehicle setObjectTexture [MFD_OVERLAY(_mfdIndex), "#(argb,512,512,1)r2t(vtx_uh60_flir_feed,1.0)"];
    };
    case MFD_PAGE_IVHMS: {
        [_vehicle] call vtx_uh60_mfd_fnc_ivhms;
    };
};

if (_pageIndex != MFD_PAGE_IVHMS) then {
    vtx_uh60_mfd_allowText = true;
    {
        if ((getUserMFDValue _vehicle) # _x == MFD_PAGE_IVHMS) then {
            _vehicle setUserMFDvalue [_x,[1,0,0,1] # _forEachIndex];
        };
    } forEach [MFD_1_PAGE_INDEX, MFD_2_PAGE_INDEX, MFD_3_PAGE_INDEX, MFD_4_PAGE_INDEX];
    for "_i" from 0 to 19 step 1 do { _vehicle setUserMFDText [_i, ""]; };
};

private _anyFLIROpened = false;
{
 if ((getUserMFDValue _vehicle) # _x == MFD_PAGE_FLIR) exitWith {_anyFLIROpened = true };
} forEach [MFD_1_PAGE_INDEX, MFD_2_PAGE_INDEX, MFD_3_PAGE_INDEX, MFD_4_PAGE_INDEX];

if (!_anyFLIROpened) then {[_vehicle] call vtx_uh60_flir_fnc_stopCamera;};
