/*
 * vtx_uh60_anvishud_fnc_setup
 *
 * initial setup of ANVIS/HUD-24T
 *
 * params (array)[(object) vehicle]
 */

params ["_vehicle"];

if (!(typeOf _vehicle in ["vtx_MH60S_Pylons_GAU21L","vtx_MH60S_GAU21L","vtx_MH60S_Pylons","vtx_MH60S","vtx_MH60M_DAP","vtx_MH60M"])) exitWith { false };

_vehicle setUserMFDValue [15, vtx_uh60_anvishud_defaultMode];

//vehicle player setAmmoOnPylon [8, 600];	//Configure the default HUD brightness (Left seat)
//vehicle player setAmmoOnPylon [9, 600];	//Configure the default HUD brightness (Right seat)
if (local _vehicle) then {
  _vehicle setPylonLoadout [8, "vtx_1000rnd_dummy", true];	//Configure the default HUD brightness (Left seat)
  _vehicle setAmmoOnPylon [8, 600];	//Configure the default HUD brightness (Left seat)
  _vehicle setPylonLoadout [9, "vtx_1000rnd_dummy", true];
  _vehicle setAmmoOnPylon [9, 600];	//Configure the default HUD brightness (Right seat)
};

true
