#include "script_component.hpp"

ADDON = false;

[
    "vtx_uh60m_enabled_waypts",
    "CHECKBOX",
    "(DEBUG) Enable FMS Waypoint System",
    "UH-60M",
    [true],
    nil,
    {}
] call CBA_Settings_fnc_init;

#include "XEH_PREP.hpp"

ADDON = true;
