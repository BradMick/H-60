#include "\z\ace\addons\main\script_macros.hpp"

// testing, update fncs on the fly
//#undef PREP
//#define PREP(var1) TRIPLES(ADDON,fnc,var1) = { call compile preProcessFileLineNumbers '\MAINPREFIX\PREFIX\SUBPREFIX\COMPONENT_F\functions\DOUBLES(fnc,var1).sqf' }

#define ANIMSRC(name,src,per,init) \
class name { \
  source=QUOTE(src); \
  animPeriod=per; \
  initPhase=init; \
}

#define ANIM_INIT(name,init) class name : name {initPhase = init;}

#define ZEUS_EXIT if !(isNull curatorCamera) exitWith {};

#define HIDDEN_SELECTION_MAIN 16
#define HIDDEN_SELECTION_MISC 17
#define HIDDEN_SELECTION_TAIL 18
