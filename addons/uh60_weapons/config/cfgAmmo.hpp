class CfgAmmo {
  class M_Scalpel_AT;
  class B_30mm_MP_Tracer_Green;
  class ACE_Hellfire_AGM114K: M_Scalpel_AT {class ace_missileguidance;};
  class ACE_Hellfire_AGM114L: M_Scalpel_AT {class ace_missileguidance;};
  class ACE_Hellfire_AGM114N: M_Scalpel_AT {class ace_missileguidance;};
  class VTX_Hellfire_AGM114K: ACE_Hellfire_AGM114K {
    displayName = "AGM-114K Hellfire";
    model = "z\vtx\addons\uh60_weapons\fza_agm114k.p3d";
    proxyShape = "z\vtx\addons\uh60_weapons\fza_agm114k.p3d";
    class ace_missileguidance: ace_missileguidance {
      enabled = 1; // Missile Guidance must be explicitly enabled
    };
  };
  class VTX_Hellfire_AGM114L: ACE_Hellfire_AGM114L {
    displayName = "AGM-114L Hellfire";
    model = "z\vtx\addons\uh60_weapons\fza_agm114k.p3d";
    proxyShape = "z\vtx\addons\uh60_weapons\fza_agm114k.p3d";
    class ace_missileguidance: ace_missileguidance {
      enabled = 1; // Missile Guidance must be explicitly enabled
    };
  };
  class VTX_Hellfire_AGM114N: ACE_Hellfire_AGM114N {
    displayName = "AGM-114N Hellfire";
    model = "z\vtx\addons\uh60_weapons\fza_agm114k.p3d";
    proxyShape = "z\vtx\addons\uh60_weapons\fza_agm114k.p3d";
    class ace_missileguidance: ace_missileguidance {
      enabled = 1; // Missile Guidance must be explicitly enabled
    };
  };
  class vtx_300Rnd_30mm_shells_ap : B_30mm_MP_Tracer_Green {
    caliber=4.4;
    explosive = 0.1;
    hit = 170;
    indirectHit = 60;
    indirectHitRange = 2;
    explosionEffects = "ExploAmmoExplosion";
    deflecting = 10;
    
  };
  class vtx_300Rnd_30mm_shells_hedp : vtx_300Rnd_30mm_shells_ap {
    explosive = 1;
    hit = 20;
    indirectHit = 40;
    indirectHitRange = 2;
    explosionEffects = "ExploAmmoExplosion";
    deflecting = -1;

    //TODO: add ace fragmentation to round 
    ace_frag_enabled = 1; 
    ace_frag_metal = 210;  
    ace_frag_charge = 185;  
    ace_frag_gurney_c = 2843;  
    ace_frag_gurney_k = 3/5;  
    ace_frag_classes[] = {"ACE_frag_large"};  
    ace_frag_skip = 0;  
    ace_frag_force = 1; 
    // https://ace3mod.com/wiki/framework/frag-framework.html
    
  };
  
};
