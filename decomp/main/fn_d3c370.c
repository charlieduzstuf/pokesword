/* main functions 00d3c370..00d60290 (105 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00d3c370 size=16 callers=3 calls=0
*/
void sub_d3c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c370ULL || rel >= 0xd3c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3c380 size=224 callers=1 calls=2
   calls: sub_c8f160, sub_c8f450
*/
void sub_d3c380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c380ULL || rel >= 0xd3c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3c460 size=112 callers=0 calls=1
   calls: sub_c8e9e0
*/
void sub_d3c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c460ULL || rel >= 0xd3c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3c4d0 size=112 callers=0 calls=1
   calls: sub_c8e9e0
*/
void sub_d3c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c4d0ULL || rel >= 0xd3c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3c540 size=112 callers=0 calls=1
   calls: sub_c6eac0
*/
void sub_d3c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c540ULL || rel >= 0xd3c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3c5b0 size=112 callers=0 calls=1
   calls: sub_c8e9e0
*/
void sub_d3c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c5b0ULL || rel >= 0xd3c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3c620 size=112 callers=0 calls=1
   calls: sub_c8e9e0
*/
void sub_d3c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c620ULL || rel >= 0xd3c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3c690 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_d3c690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c690ULL || rel >= 0xd3c780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3c780 size=240 callers=0 calls=1
   calls: sub_967240
*/
void sub_d3c780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c780ULL || rel >= 0xd3c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3c870 size=112 callers=0 calls=1
   calls: sub_c8e9e0
*/
void sub_d3c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c870ULL || rel >= 0xd3c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3c8e0 size=112 callers=0 calls=1
   calls: sub_c8e9e0
*/
void sub_d3c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c8e0ULL || rel >= 0xd3c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3c950 size=368 callers=0 calls=0
*/
void sub_d3c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3c950ULL || rel >= 0xd3cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3cac0 size=2880 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: fi_ladder_down_start
   ref: fi_ladder_down_end
   ref: fi_spin
   ref: rl_wait
   ref: bin/archive/field/resident/skybox.gfpak
   ref: rl_walk_run_turbo
   ref: unit_obj_door_pc_01
*/
void skybox_01_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3cac0ULL || rel >= 0xd3d600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3d600 size=1904 callers=1 calls=8
   calls: sub_135a760, sub_5b9120, sub_65d700, sub_986200, sub_c6cf50, sub_c6cfa0, sub_ceeb40, sub_ea9e40
*/
void sub_d3d600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3d600ULL || rel >= 0xd3dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3dd70 size=384 callers=0 calls=4
   calls: sub_c83540, sub_cf1750, sub_d3def0, sub_e51bf0
   ref: Play_PL_Foley_Bicycle_Trans_LtoW
   ref: Play_PL_Foley_Bicycle_Trans_WtoL
*/
void Play_PL_Foley_Bicycle_Trans_WtoL(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3dd70ULL || rel >= 0xd3def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3def0 size=416 callers=2 calls=3
   calls: sub_13a6920, sub_c6ccb0, sub_e51bf0
*/
void sub_d3def0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3def0ULL || rel >= 0xd3e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3e090 size=16 callers=6 calls=0
*/
void sub_d3e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3e090ULL || rel >= 0xd3e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3e0a0 size=240 callers=0 calls=2
   calls: sub_b4c060, sub_b97e40
*/
void sub_d3e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3e0a0ULL || rel >= 0xd3e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3e190 size=320 callers=0 calls=2
   calls: sub_135a1a0, sub_136b730
*/
void sub_d3e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3e190ULL || rel >= 0xd3e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3e2d0 size=1072 callers=0 calls=5
   calls: sub_b334c0, sub_b334e0, sub_b334f0, sub_b4c060, sub_c826b0
*/
void sub_d3e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3e2d0ULL || rel >= 0xd3e700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3e700 size=320 callers=0 calls=3
   calls: sub_b33510, sub_b4c060, sub_cef260
*/
void sub_d3e700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3e700ULL || rel >= 0xd3e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d3e840 size=7984 callers=0 calls=52
   calls: sub_13ca4c0, sub_13ca950, sub_13facc0, sub_59a260, sub_59b070, sub_59b0a0, sub_59b0d0, sub_59b0e0, sub_59b110, sub_59b140, sub_59b150, sub_59b180
   ... +40 more
   ref: LThigh
   ref: Field/PlayFootVfx
   ref: RThigh
*/
void RThigh_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3e840ULL || rel >= 0xd40770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d40770 size=592 callers=5 calls=4
   calls: sub_135a1a0, sub_13ca4c0, sub_13facc0, sub_d10e30
*/
void sub_d40770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd40770ULL || rel >= 0xd409c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d409c0 size=272 callers=3 calls=4
   calls: sub_5d99d0, sub_c73370, sub_c74370, sub_d0c5d0
*/
void sub_d409c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd409c0ULL || rel >= 0xd40ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d40ad0 size=64 callers=2 calls=2
   calls: sub_59bee0, sub_619060
*/
void sub_d40ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd40ad0ULL || rel >= 0xd40b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d40b10 size=256 callers=1 calls=2
   calls: sub_5d99d0, sub_cf5210
*/
void sub_d40b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd40b10ULL || rel >= 0xd40c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d40c10 size=256 callers=1 calls=2
   calls: sub_5d99d0, sub_cf4530
*/
void sub_d40c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd40c10ULL || rel >= 0xd40d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d40d10 size=272 callers=2 calls=2
   calls: sub_5d99d0, sub_c66280
*/
void sub_d40d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd40d10ULL || rel >= 0xd40e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d40e20 size=368 callers=2 calls=4
   calls: sub_135a1a0, sub_1367a30, sub_969be0, sub_cf2010
*/
void sub_d40e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd40e20ULL || rel >= 0xd40f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d40f90 size=848 callers=0 calls=6
   calls: Play_PL_Foley_Bicycle_Ride, sub_135a1a0, sub_13ca4c0, sub_13facc0, sub_cef430, sub_cf2010
*/
void sub_d40f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd40f90ULL || rel >= 0xd412e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d412e0 size=416 callers=1 calls=3
   calls: sub_12fac60, sub_c6ccb0, sub_c83540
   ref: Play_PL_Foley_Bicycle_Down
   ref: Play_PL_Foley_Bicycle_Ride
   ref: USE_BICYCLE
*/
void Play_PL_Foley_Bicycle_Ride(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd412e0ULL || rel >= 0xd41480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d41480 size=2320 callers=0 calls=17
   calls: Play_PL_Foley_Bicycle_Charged, eye_move_v, sub_136e8b0, sub_13c9e50, sub_13ca4c0, sub_59bee0, sub_967240, sub_96ccf0, sub_c656e0, sub_cf2010, sub_cf7230, sub_cf7240
   ... +5 more
*/
void sub_d41480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd41480ULL || rel >= 0xd41d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d41d90 size=320 callers=1 calls=4
   calls: sub_13ca4c0, sub_c95d60, sub_ca0110, sub_d44e10
*/
void sub_d41d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd41d90ULL || rel >= 0xd41ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d41ed0 size=608 callers=12 calls=1
   calls: sub_13c9e50
*/
void sub_d41ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd41ed0ULL || rel >= 0xd42130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d42130 size=1152 callers=1 calls=5
   calls: sub_135a4b0, sub_13a6920, sub_c6ccb0, sub_c83540, sub_cf2010
   ref: Play_PL_Foley_Bicycle_Charged
*/
void Play_PL_Foley_Bicycle_Charged(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd42130ULL || rel >= 0xd425b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d425b0 size=336 callers=1 calls=4
   calls: sub_b33cd0, sub_b46170, sub_b4c060, sub_b918e0
*/
void sub_d425b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd425b0ULL || rel >= 0xd42700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d42700 size=272 callers=1 calls=2
   calls: sub_b339c0, sub_b4c060
*/
void sub_d42700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd42700ULL || rel >= 0xd42810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d42810 size=304 callers=1 calls=7
   calls: sub_13f67a0, sub_c6ccb0, sub_c6ceb0, sub_d25c50, sub_d480f0, sub_d5fcc0, sub_d63270
*/
void sub_d42810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd42810ULL || rel >= 0xd42940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d42940 size=48 callers=0 calls=1
   calls: sub_c63390
*/
void sub_d42940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd42940ULL || rel >= 0xd42970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d42970 size=432 callers=0 calls=3
   calls: sub_13ca4c0, sub_5cbe50, sub_c62e30
*/
void sub_d42970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd42970ULL || rel >= 0xd42b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d42b20 size=224 callers=0 calls=3
   calls: sub_13ca4c0, sub_5cbe50, sub_c63170
*/
void sub_d42b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd42b20ULL || rel >= 0xd42c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d42c00 size=544 callers=0 calls=3
   calls: sub_13ca4c0, sub_c63060, sub_d29860
*/
void sub_d42c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd42c00ULL || rel >= 0xd42e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d42e20 size=96 callers=0 calls=1
   calls: sub_cf2010
*/
void sub_d42e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd42e20ULL || rel >= 0xd42e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d42e80 size=16 callers=42 calls=0
*/
void sub_d42e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd42e80ULL || rel >= 0xd42e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d42e90 size=304 callers=0 calls=3
   calls: sub_c61f70, sub_c636b0, sub_d4a030
*/
void sub_d42e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd42e90ULL || rel >= 0xd42fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d42fc0 size=1712 callers=0 calls=9
   calls: sub_13a5bb0, sub_13ca950, sub_5cf8e0, sub_5cf8f0, sub_607750, sub_d43670, sub_d4a120, sub_d4a260, sub_e9ddb0
*/
void sub_d42fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd42fc0ULL || rel >= 0xd43670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d43670 size=800 callers=2 calls=6
   calls: sub_59b250, sub_5b9220, sub_5b92f0, sub_607750, sub_cf2010, sub_d46dc0
*/
void sub_d43670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd43670ULL || rel >= 0xd43990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d43990 size=1936 callers=0 calls=9
   calls: sub_13ca4c0, sub_5c8200, sub_5cf8e0, sub_5cf8f0, sub_607750, sub_cf0360, sub_cf2010, sub_d4a120, sub_e51bf0
*/
void sub_d43990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd43990ULL || rel >= 0xd44120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d44120 size=448 callers=0 calls=2
   calls: sub_13ca4c0, sub_cf01b0
*/
void sub_d44120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd44120ULL || rel >= 0xd442e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d442e0 size=848 callers=0 calls=6
   calls: sub_13a6920, sub_b4c060, sub_b95d30, sub_b96090, sub_ced010, sub_cf0950
*/
void sub_d442e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd442e0ULL || rel >= 0xd44630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d44630 size=240 callers=1 calls=3
   calls: sub_13ca950, sub_d2e740, sub_d4a380
*/
void sub_d44630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd44630ULL || rel >= 0xd44720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d44720 size=240 callers=1 calls=3
   calls: sub_13ca950, sub_d4a460, sub_d4a550
*/
void sub_d44720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd44720ULL || rel >= 0xd44810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d44810 size=240 callers=0 calls=3
   calls: sub_13ca950, sub_ca0020, sub_d4a640
*/
void sub_d44810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd44810ULL || rel >= 0xd44900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d44900 size=704 callers=1 calls=10
   calls: sub_5c6850, sub_5c68f0, sub_c62830, sub_c6ccb0, sub_c6d380, sub_ce0300, sub_ce0570, sub_cf2010, sub_d25c50, sub_d63270
   ref: bin/field/effect/particle/ef_chara_jumping/%s.ptcl
*/
void unnamed_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd44900ULL || rel >= 0xd44bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d44bc0 size=416 callers=7 calls=1
   calls: sub_13a6920
*/
void sub_d44bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd44bc0ULL || rel >= 0xd44d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d44d60 size=176 callers=5 calls=1
   calls: sub_135a4b0
*/
void sub_d44d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd44d60ULL || rel >= 0xd44e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d44e10 size=1072 callers=1 calls=7
   calls: sub_13ca4c0, sub_5c6830, sub_5c6850, sub_5c68f0, sub_5c8200, sub_5c8dd0, sub_d29860
*/
void sub_d44e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd44e10ULL || rel >= 0xd45240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d45240 size=464 callers=1 calls=6
   calls: sub_59b250, sub_5b9220, sub_607750, sub_cf2010, sub_d45410, sub_dcc9a0
*/
void sub_d45240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd45240ULL || rel >= 0xd45410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d45410 size=816 callers=1 calls=4
   calls: sub_13ca4c0, sub_5c8c30, sub_971950, sub_972c70
*/
void sub_d45410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd45410ULL || rel >= 0xd45740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d45740 size=880 callers=1 calls=4
   calls: sub_13a6920, sub_13ca4c0, sub_5c81e0, sub_d40770
*/
void sub_d45740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd45740ULL || rel >= 0xd45ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d45ab0 size=176 callers=3 calls=3
   calls: sub_13575e0, sub_ea3d10, sub_ea4760
*/
void sub_d45ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd45ab0ULL || rel >= 0xd45b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d45b60 size=16 callers=3 calls=0
*/
void sub_d45b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd45b60ULL || rel >= 0xd45b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d45b70 size=128 callers=1 calls=1
   calls: sub_ca0110
*/
void sub_d45b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd45b70ULL || rel >= 0xd45bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d45bf0 size=224 callers=1 calls=0
   ref: rl_wait
   ref: ra_wait01_loop
*/
void ra_wait01_loop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd45bf0ULL || rel >= 0xd45cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d45cd0 size=80 callers=2 calls=2
   calls: sub_971950, sub_972c70
*/
void sub_d45cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd45cd0ULL || rel >= 0xd45d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d45d20 size=192 callers=0 calls=3
   calls: sub_b33700, sub_b4c060, sub_c83380
*/
void sub_d45d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd45d20ULL || rel >= 0xd45de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d45de0 size=1392 callers=0 calls=11
   calls: sub_13a6920, sub_13ca4c0, sub_c6ccb0, sub_c73370, sub_c73490, sub_cf18c0, sub_d3def0, sub_d40770, sub_d409c0, sub_d44bc0, sub_e51bf0
*/
void sub_d45de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd45de0ULL || rel >= 0xd46350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d46350 size=640 callers=0 calls=7
   calls: sub_13a6920, sub_c73370, sub_c73490, sub_cf1ca0, sub_d40770, sub_d409c0, sub_e51bf0
*/
void sub_d46350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd46350ULL || rel >= 0xd465d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d465d0 size=80 callers=3 calls=0
*/
void sub_d465d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd465d0ULL || rel >= 0xd46620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d46620 size=112 callers=1 calls=1
   calls: sub_ed0a20
   ref: fi_pc_number
*/
void fi_pc_number(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd46620ULL || rel >= 0xd46690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d46690 size=16 callers=4 calls=0
*/
void sub_d46690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd46690ULL || rel >= 0xd466a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d466a0 size=16 callers=2 calls=0
*/
void sub_d466a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd466a0ULL || rel >= 0xd466b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d466b0 size=592 callers=1 calls=8
   calls: sub_1367a30, sub_59b250, sub_5b9220, sub_607750, sub_c99c60, sub_ca0110, sub_cf2010, sub_dcc9a0
*/
void sub_d466b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd466b0ULL || rel >= 0xd46900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d46900 size=160 callers=1 calls=2
   calls: sub_c99c50, sub_ca0110
*/
void sub_d46900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd46900ULL || rel >= 0xd469a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d469a0 size=128 callers=0 calls=1
   calls: sub_ca0020
*/
void sub_d469a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd469a0ULL || rel >= 0xd46a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d46a20 size=112 callers=3 calls=1
   calls: sub_d4a460
*/
void sub_d46a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd46a20ULL || rel >= 0xd46a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d46a90 size=128 callers=1 calls=1
   calls: sub_d4a460
*/
void sub_d46a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd46a90ULL || rel >= 0xd46b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d46b10 size=112 callers=4 calls=0
*/
void sub_d46b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd46b10ULL || rel >= 0xd46b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d46b80 size=128 callers=2 calls=0
*/
void sub_d46b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd46b80ULL || rel >= 0xd46c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d46c00 size=64 callers=2 calls=3
   calls: sub_b72950, sub_b953a0, sub_d4a720
*/
void sub_d46c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd46c00ULL || rel >= 0xd46c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d46c40 size=256 callers=0 calls=1
   calls: sub_13ca4c0
*/
void sub_d46c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd46c40ULL || rel >= 0xd46d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d46d40 size=128 callers=3 calls=0
*/
void sub_d46d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd46d40ULL || rel >= 0xd46dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d46dc0 size=528 callers=4 calls=3
   calls: sub_59b250, sub_5b9220, sub_607750
*/
void sub_d46dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd46dc0ULL || rel >= 0xd46fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d46fd0 size=2624 callers=1 calls=7
   calls: sub_972c70, sub_b4c060, sub_b96930, sub_b96c70, sub_b96fd0, sub_d1fb50, sub_d28390
*/
void sub_d46fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd46fd0ULL || rel >= 0xd47a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d47a10 size=416 callers=0 calls=3
   calls: sub_793fb0, sub_986bc0, sub_cf2010
   ref: fi_bushrun_blend_start
   ref: Player_RunWalkRate
*/
void fi_bushrun_blend_start_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd47a10ULL || rel >= 0xd47bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d47bb0 size=1184 callers=0 calls=10
   calls: sub_13a5bb0, sub_5b90f0, sub_5b9120, sub_5b9130, sub_5b9150, sub_5b9220, sub_5b92f0, sub_5b95e0, sub_cf2010, sub_e9ddb0
   ref: eye_switch
*/
void eye_switch(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd47bb0ULL || rel >= 0xd48050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d48050 size=160 callers=1 calls=4
   calls: sub_5c6830, sub_5c6850, sub_5c68f0, sub_5c8dd0
*/
void sub_d48050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd48050ULL || rel >= 0xd480f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d480f0 size=832 callers=1 calls=3
   calls: sub_c6d440, sub_c6d4b0, sub_cf2010
*/
void sub_d480f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd480f0ULL || rel >= 0xd48430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d48430 size=656 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_d48430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd48430ULL || rel >= 0xd486c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d486c0 size=16 callers=0 calls=0
*/
void sub_d486c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd486c0ULL || rel >= 0xd486d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d486d0 size=112 callers=0 calls=1
   calls: sub_d48970
*/
void sub_d486d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd486d0ULL || rel >= 0xd48740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d48740 size=16 callers=0 calls=0
*/
void sub_d48740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd48740ULL || rel >= 0xd48750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d48750 size=16 callers=0 calls=0
*/
void sub_d48750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd48750ULL || rel >= 0xd48760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d48760 size=16 callers=0 calls=0
*/
void sub_d48760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd48760ULL || rel >= 0xd48770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d48770 size=240 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_d48770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd48770ULL || rel >= 0xd48860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d48860 size=240 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_d48860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd48860ULL || rel >= 0xd48950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d48950 size=16 callers=0 calls=0
*/
void sub_d48950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd48950ULL || rel >= 0xd48960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d48960 size=16 callers=0 calls=0
*/
void sub_d48960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd48960ULL || rel >= 0xd48970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d48970 size=176 callers=2 calls=1
   calls: sub_13a6920
*/
void sub_d48970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd48970ULL || rel >= 0xd48a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d48a20 size=304 callers=1 calls=1
   calls: sub_cafce0
*/
void sub_d48a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd48a20ULL || rel >= 0xd48b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d48b50 size=272 callers=1 calls=0
*/
void sub_d48b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd48b50ULL || rel >= 0xd48c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d48c60 size=704 callers=0 calls=0
*/
void sub_d48c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd48c60ULL || rel >= 0xd48f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d48f20 size=1936 callers=0 calls=17
   calls: sub_5a03d0, sub_5c6850, sub_5c68f0, sub_5cf8e0, sub_5cf8f0, sub_607750, sub_612ef0, sub_612f70, sub_96ccf0, sub_c6ccb0, sub_c6d380, sub_ce0300
   ... +5 more
*/
void sub_d48f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd48f20ULL || rel >= 0xd496b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d496b0 size=16 callers=0 calls=0
*/
void sub_d496b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd496b0ULL || rel >= 0xd496c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d496c0 size=352 callers=2 calls=2
   calls: sub_ce0440, sub_ce0570
   ref: bin/field/effect/particle/ef_chara_running/%s.ptcl
*/
void unnamed_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd496c0ULL || rel >= 0xd49820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49820 size=16 callers=0 calls=0
*/
void sub_d49820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49820ULL || rel >= 0xd49830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49830 size=16 callers=0 calls=0
*/
void sub_d49830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49830ULL || rel >= 0xd49840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49840 size=176 callers=0 calls=6
   calls: sub_5b90c0, sub_5b90f0, sub_5b9130, sub_5b9220, sub_5b9660, sub_5b9670
*/
void sub_d49840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49840ULL || rel >= 0xd498f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d498f0 size=16 callers=0 calls=0
*/
void sub_d498f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd498f0ULL || rel >= 0xd49900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49900 size=16 callers=0 calls=0
*/
void sub_d49900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49900ULL || rel >= 0xd49910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49910 size=16 callers=0 calls=0
*/
void sub_d49910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49910ULL || rel >= 0xd49920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49920 size=80 callers=0 calls=1
   calls: sub_5b95f0
*/
void sub_d49920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49920ULL || rel >= 0xd49970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49970 size=16 callers=0 calls=0
*/
void sub_d49970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49970ULL || rel >= 0xd49980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49980 size=16 callers=0 calls=0
*/
void sub_d49980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49980ULL || rel >= 0xd49990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49990 size=16 callers=0 calls=0
*/
void sub_d49990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49990ULL || rel >= 0xd499a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d499a0 size=464 callers=1 calls=1
   calls: sub_b46170
*/
void sub_d499a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd499a0ULL || rel >= 0xd49b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49b70 size=16 callers=0 calls=0
*/
void sub_d49b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49b70ULL || rel >= 0xd49b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49b80 size=16 callers=0 calls=0
*/
void sub_d49b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49b80ULL || rel >= 0xd49b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49b90 size=16 callers=0 calls=0
*/
void sub_d49b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49b90ULL || rel >= 0xd49ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49ba0 size=16 callers=0 calls=0
*/
void sub_d49ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49ba0ULL || rel >= 0xd49bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49bb0 size=224 callers=1 calls=1
   calls: sub_c957e0
*/
void sub_d49bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49bb0ULL || rel >= 0xd49c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49c90 size=160 callers=0 calls=1
   calls: sub_612f70
*/
void sub_d49c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49c90ULL || rel >= 0xd49d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49d30 size=16 callers=0 calls=0
*/
void sub_d49d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49d30ULL || rel >= 0xd49d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49d40 size=16 callers=0 calls=0
*/
void sub_d49d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49d40ULL || rel >= 0xd49d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49d50 size=16 callers=0 calls=0
*/
void sub_d49d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49d50ULL || rel >= 0xd49d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49d60 size=160 callers=0 calls=1
   calls: sub_612f70
*/
void sub_d49d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49d60ULL || rel >= 0xd49e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49e00 size=16 callers=0 calls=0
*/
void sub_d49e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49e00ULL || rel >= 0xd49e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49e10 size=16 callers=0 calls=0
*/
void sub_d49e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49e10ULL || rel >= 0xd49e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49e20 size=16 callers=0 calls=0
*/
void sub_d49e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49e20ULL || rel >= 0xd49e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d49e30 size=512 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_d49e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49e30ULL || rel >= 0xd4a030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a030 size=240 callers=4 calls=1
   calls: sub_967240
*/
void sub_d4a030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a030ULL || rel >= 0xd4a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a120 size=320 callers=2 calls=1
   calls: sub_c657d0
*/
void sub_d4a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a120ULL || rel >= 0xd4a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a260 size=224 callers=1 calls=1
   calls: sub_d4d590
*/
void sub_d4a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a260ULL || rel >= 0xd4a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a340 size=16 callers=0 calls=0
*/
void sub_d4a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a340ULL || rel >= 0xd4a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a350 size=16 callers=0 calls=0
*/
void sub_d4a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a350ULL || rel >= 0xd4a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a360 size=16 callers=0 calls=0
*/
void sub_d4a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a360ULL || rel >= 0xd4a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a370 size=16 callers=0 calls=0
*/
void sub_d4a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a370ULL || rel >= 0xd4a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a380 size=224 callers=1 calls=1
   calls: sub_d4cac0
*/
void sub_d4a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a380ULL || rel >= 0xd4a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a460 size=240 callers=3 calls=1
   calls: sub_c657d0
*/
void sub_d4a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a460ULL || rel >= 0xd4a550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a550 size=240 callers=1 calls=1
   calls: sub_d4a9f0
*/
void sub_d4a550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a550ULL || rel >= 0xd4a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a640 size=224 callers=1 calls=1
   calls: sub_d4db40
*/
void sub_d4a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a640ULL || rel >= 0xd4a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a720 size=336 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_b945f0
*/
void sub_d4a720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a720ULL || rel >= 0xd4a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a870 size=16 callers=0 calls=0
*/
void sub_d4a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a870ULL || rel >= 0xd4a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a880 size=16 callers=0 calls=0
*/
void sub_d4a880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a880ULL || rel >= 0xd4a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a890 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_d4a890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a890ULL || rel >= 0xd4a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a8d0 size=32 callers=0 calls=0
*/
void sub_d4a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a8d0ULL || rel >= 0xd4a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a8f0 size=16 callers=0 calls=0
*/
void sub_d4a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a8f0ULL || rel >= 0xd4a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a900 size=16 callers=0 calls=0
*/
void sub_d4a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a900ULL || rel >= 0xd4a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a910 size=160 callers=0 calls=0
*/
void sub_d4a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a910ULL || rel >= 0xd4a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a9b0 size=16 callers=0 calls=0
*/
void sub_d4a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a9b0ULL || rel >= 0xd4a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a9c0 size=16 callers=0 calls=0
*/
void sub_d4a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a9c0ULL || rel >= 0xd4a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a9d0 size=16 callers=0 calls=0
*/
void sub_d4a9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a9d0ULL || rel >= 0xd4a9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a9e0 size=16 callers=0 calls=0
*/
void sub_d4a9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a9e0ULL || rel >= 0xd4a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4a9f0 size=256 callers=1 calls=2
   calls: sub_5e2350, sub_ea7620
*/
void sub_d4a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4a9f0ULL || rel >= 0xd4aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4aaf0 size=3632 callers=0 calls=40
   calls: Set_State_Off_2, fi_pc_number, fishing, sub_12fa580, sub_12faeb0, sub_136b580, sub_13ca950, sub_13cac30, sub_59b250, sub_5b9220, sub_5b93c0, sub_5b9400
   ... +28 more
   ref: Play_PL_Foley_fishing_win
   ref: Play_PL_Foley_fishing_ex
   ref: loc_eff_head
   ref: FISHING_OK
   ref: FISHING_NG
   ref: Stop_PL_Foley_fishing_fish_fight_lp
*/
void Stop_PL_Foley_fishing_fish_fight_lp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4aaf0ULL || rel >= 0xd4b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4b920 size=1264 callers=1 calls=18
   calls: L_cursor_00_3, sub_1308200, sub_13083a0, sub_13e4b50, sub_13e50b0, sub_14a91a0, sub_14a91c0, sub_14a92b0, sub_e3dfc0, sub_e3e110, sub_e3e380, sub_e3e3c0
   ... +6 more
   ref: script/fishing.dat
*/
void fishing(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4b920ULL || rel >= 0xd4be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4be10 size=976 callers=1 calls=3
   calls: sub_13ed330, sub_d25bd0, sub_d36a70
*/
void sub_d4be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4be10ULL || rel >= 0xd4c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4c1e0 size=384 callers=1 calls=2
   calls: sub_13ed330, sub_d36aa0
*/
void sub_d4c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4c1e0ULL || rel >= 0xd4c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4c360 size=16 callers=0 calls=0
*/
void sub_d4c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4c360ULL || rel >= 0xd4c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4c370 size=16 callers=0 calls=0
*/
void sub_d4c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4c370ULL || rel >= 0xd4c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4c380 size=192 callers=0 calls=0
*/
void sub_d4c380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4c380ULL || rel >= 0xd4c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4c440 size=192 callers=0 calls=0
*/
void sub_d4c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4c440ULL || rel >= 0xd4c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4c500 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d4c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4c500ULL || rel >= 0xd4c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4c5b0 size=48 callers=0 calls=0
*/
void sub_d4c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4c5b0ULL || rel >= 0xd4c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4c5e0 size=192 callers=0 calls=0
*/
void sub_d4c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4c5e0ULL || rel >= 0xd4c6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4c6a0 size=192 callers=0 calls=0
*/
void sub_d4c6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4c6a0ULL || rel >= 0xd4c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4c760 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d4c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4c760ULL || rel >= 0xd4c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4c810 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d4c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4c810ULL || rel >= 0xd4c8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4c8c0 size=192 callers=0 calls=0
*/
void sub_d4c8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4c8c0ULL || rel >= 0xd4c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4c980 size=192 callers=0 calls=0
*/
void sub_d4c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4c980ULL || rel >= 0xd4ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4ca40 size=128 callers=0 calls=0
*/
void sub_d4ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4ca40ULL || rel >= 0xd4cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4cac0 size=320 callers=2 calls=2
   calls: sub_5e2350, sub_d25bd0
*/
void sub_d4cac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4cac0ULL || rel >= 0xd4cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4cc00 size=1360 callers=0 calls=8
   calls: sub_5cc540, sub_c63670, sub_c6c5c0, sub_ca90d0, sub_cab130, sub_caba10, sub_cabb80, unnamed_33
*/
void sub_d4cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4cc00ULL || rel >= 0xd4d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d150 size=16 callers=0 calls=0
*/
void sub_d4d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d150ULL || rel >= 0xd4d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d160 size=16 callers=0 calls=0
*/
void sub_d4d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d160ULL || rel >= 0xd4d170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d170 size=80 callers=0 calls=0
*/
void sub_d4d170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d170ULL || rel >= 0xd4d1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d1c0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d4d1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d1c0ULL || rel >= 0xd4d270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d270 size=80 callers=0 calls=0
*/
void sub_d4d270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d270ULL || rel >= 0xd4d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d2c0 size=80 callers=0 calls=0
*/
void sub_d4d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d2c0ULL || rel >= 0xd4d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d310 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d4d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d310ULL || rel >= 0xd4d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d3c0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d4d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d3c0ULL || rel >= 0xd4d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d470 size=80 callers=0 calls=0
*/
void sub_d4d470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d470ULL || rel >= 0xd4d4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d4c0 size=80 callers=0 calls=0
*/
void sub_d4d4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d4c0ULL || rel >= 0xd4d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d510 size=128 callers=0 calls=0
*/
void sub_d4d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d510ULL || rel >= 0xd4d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d590 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_d4d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d590ULL || rel >= 0xd4d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d5e0 size=80 callers=0 calls=1
   calls: sub_13ed240
*/
void sub_d4d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d5e0ULL || rel >= 0xd4d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d630 size=80 callers=0 calls=1
   calls: sub_13ed240
*/
void sub_d4d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d630ULL || rel >= 0xd4d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d680 size=80 callers=0 calls=1
   calls: sub_13ed240
*/
void sub_d4d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d680ULL || rel >= 0xd4d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d6d0 size=144 callers=0 calls=1
   calls: sub_13ed240
*/
void sub_d4d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d6d0ULL || rel >= 0xd4d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d760 size=80 callers=0 calls=0
*/
void sub_d4d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d760ULL || rel >= 0xd4d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d7b0 size=112 callers=0 calls=1
   calls: sub_cfedc0
*/
void sub_d4d7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d7b0ULL || rel >= 0xd4d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d820 size=80 callers=0 calls=0
*/
void sub_d4d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d820ULL || rel >= 0xd4d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d870 size=80 callers=0 calls=0
*/
void sub_d4d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d870ULL || rel >= 0xd4d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d8c0 size=240 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d4d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d8c0ULL || rel >= 0xd4d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4d9b0 size=240 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d4d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4d9b0ULL || rel >= 0xd4daa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4daa0 size=80 callers=0 calls=0
*/
void sub_d4daa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4daa0ULL || rel >= 0xd4daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4daf0 size=80 callers=0 calls=0
*/
void sub_d4daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4daf0ULL || rel >= 0xd4db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4db40 size=96 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_d4db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4db40ULL || rel >= 0xd4dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4dba0 size=1088 callers=0 calls=11
   calls: sub_136e8b0, sub_59b250, sub_5b9220, sub_5b93c0, sub_5b9400, sub_b44bb0, sub_b4c060, sub_c83540, sub_d27210, sub_d42e80, sub_d43670
   ref: Play_PL_Foley_Bicycle_Bellring
*/
void Play_PL_Foley_Bicycle_Bellring(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4dba0ULL || rel >= 0xd4dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4dfe0 size=16 callers=0 calls=0
*/
void sub_d4dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4dfe0ULL || rel >= 0xd4dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4dff0 size=80 callers=0 calls=0
*/
void sub_d4dff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4dff0ULL || rel >= 0xd4e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4e040 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d4e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4e040ULL || rel >= 0xd4e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4e0f0 size=80 callers=0 calls=0
*/
void sub_d4e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4e0f0ULL || rel >= 0xd4e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4e140 size=80 callers=0 calls=0
*/
void sub_d4e140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4e140ULL || rel >= 0xd4e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4e190 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d4e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4e190ULL || rel >= 0xd4e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4e240 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d4e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4e240ULL || rel >= 0xd4e2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4e2f0 size=80 callers=0 calls=0
*/
void sub_d4e2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4e2f0ULL || rel >= 0xd4e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4e340 size=80 callers=0 calls=0
*/
void sub_d4e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4e340ULL || rel >= 0xd4e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4e390 size=1552 callers=3 calls=3
   calls: sub_116ef10, sub_ceeb40, sub_d16b90
*/
void sub_d4e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4e390ULL || rel >= 0xd4e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4e9a0 size=768 callers=1 calls=6
   calls: sub_116b660, sub_116b910, sub_b334c0, sub_b33500, sub_b4c060, sub_c826b0
*/
void sub_d4e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4e9a0ULL || rel >= 0xd4eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4eca0 size=96 callers=1 calls=3
   calls: sub_116bb10, sub_116bb80, sub_cef260
*/
void sub_d4eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4eca0ULL || rel >= 0xd4ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4ed00 size=2240 callers=2 calls=18
   calls: kw20_drowse01_Enabled_2, mouth01, sub_116bb10, sub_116f0e0, sub_13a1320, sub_13a16c0, sub_13a1800, sub_13a2880, sub_5cbcf0, sub_607750, sub_671d00, sub_672070
   ... +6 more
*/
void sub_d4ed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4ed00ULL || rel >= 0xd4f5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4f5c0 size=112 callers=4 calls=1
   calls: eye_move_v
*/
void sub_d4f5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4f5c0ULL || rel >= 0xd4f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4f630 size=336 callers=1 calls=1
   calls: sub_e69490
*/
void sub_d4f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4f630ULL || rel >= 0xd4f780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4f780 size=208 callers=0 calls=3
   calls: sub_672070, sub_b8b370, sub_c636b0
*/
void sub_d4f780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4f780ULL || rel >= 0xd4f850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4f850 size=224 callers=1 calls=2
   calls: sub_13cc840, sub_cf0280
*/
void sub_d4f850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4f850ULL || rel >= 0xd4f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4f930 size=224 callers=1 calls=2
   calls: sub_13cc840, sub_cf0360
*/
void sub_d4f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4f930ULL || rel >= 0xd4fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fa10 size=176 callers=0 calls=1
   calls: sub_5cbcf0
*/
void sub_d4fa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fa10ULL || rel >= 0xd4fac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fac0 size=32 callers=0 calls=0
*/
void sub_d4fac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fac0ULL || rel >= 0xd4fae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fae0 size=176 callers=1 calls=1
   calls: sub_c6c1b0
*/
void sub_d4fae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fae0ULL || rel >= 0xd4fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fb90 size=16 callers=7 calls=0
*/
void sub_d4fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fb90ULL || rel >= 0xd4fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fba0 size=16 callers=8 calls=0
*/
void sub_d4fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fba0ULL || rel >= 0xd4fbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fbb0 size=16 callers=4 calls=0
*/
void sub_d4fbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fbb0ULL || rel >= 0xd4fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fbc0 size=32 callers=1 calls=0
*/
void sub_d4fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fbc0ULL || rel >= 0xd4fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fbe0 size=64 callers=0 calls=0
*/
void sub_d4fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fbe0ULL || rel >= 0xd4fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fc20 size=272 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_d4fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fc20ULL || rel >= 0xd4fd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fd30 size=16 callers=0 calls=0
*/
void sub_d4fd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fd30ULL || rel >= 0xd4fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fd40 size=176 callers=0 calls=1
   calls: sub_13b1c90
*/
void sub_d4fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fd40ULL || rel >= 0xd4fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fdf0 size=16 callers=0 calls=0
*/
void sub_d4fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fdf0ULL || rel >= 0xd4fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fe00 size=16 callers=0 calls=0
*/
void sub_d4fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fe00ULL || rel >= 0xd4fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fe10 size=176 callers=0 calls=1
   calls: sub_13b1c90
*/
void sub_d4fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fe10ULL || rel >= 0xd4fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4fec0 size=176 callers=0 calls=1
   calls: sub_13b1c90
*/
void sub_d4fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fec0ULL || rel >= 0xd4ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4ff70 size=16 callers=0 calls=0
*/
void sub_d4ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4ff70ULL || rel >= 0xd4ff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4ff80 size=16 callers=0 calls=0
*/
void sub_d4ff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4ff80ULL || rel >= 0xd4ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d4ff90 size=704 callers=0 calls=1
   calls: sub_1c0
   ref: fi_seach01_01_loop_01
   ref: to_ba21_tokusyu01
   ref: to_ba20_buturi01
   ref: fi_seach01_01_loop_02
   ref: kw01_wait01
   ref: ba21_tokusyu01
   ref: app_state
   ref: ba10_waitA01
*/
void fi_seach01_01_loop_02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4ff90ULL || rel >= 0xd50250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50250 size=128 callers=1 calls=1
   calls: sub_c8b810
*/
void sub_d50250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50250ULL || rel >= 0xd502d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d502d0 size=16 callers=0 calls=0
*/
void sub_d502d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd502d0ULL || rel >= 0xd502e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d502e0 size=16 callers=0 calls=0
*/
void sub_d502e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd502e0ULL || rel >= 0xd502f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d502f0 size=256 callers=0 calls=1
   calls: sub_c8bba0
*/
void sub_d502f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd502f0ULL || rel >= 0xd503f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d503f0 size=16 callers=0 calls=0
*/
void sub_d503f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd503f0ULL || rel >= 0xd50400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50400 size=16 callers=0 calls=0
*/
void sub_d50400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50400ULL || rel >= 0xd50410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50410 size=16 callers=0 calls=0
*/
void sub_d50410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50410ULL || rel >= 0xd50420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50420 size=16 callers=0 calls=0
*/
void sub_d50420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50420ULL || rel >= 0xd50430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50430 size=16 callers=0 calls=0
*/
void sub_d50430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50430ULL || rel >= 0xd50440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50440 size=16 callers=0 calls=0
*/
void sub_d50440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50440ULL || rel >= 0xd50450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50450 size=16 callers=0 calls=0
*/
void sub_d50450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50450ULL || rel >= 0xd50460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50460 size=16 callers=0 calls=0
*/
void sub_d50460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50460ULL || rel >= 0xd50470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50470 size=16 callers=0 calls=0
*/
void sub_d50470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50470ULL || rel >= 0xd50480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50480 size=16 callers=0 calls=0
*/
void sub_d50480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50480ULL || rel >= 0xd50490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50490 size=16 callers=0 calls=0
*/
void sub_d50490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50490ULL || rel >= 0xd504a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d504a0 size=304 callers=0 calls=1
   calls: sub_967240
*/
void sub_d504a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd504a0ULL || rel >= 0xd505d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d505d0 size=672 callers=1 calls=2
   calls: sub_793d10, sub_c91790
*/
void sub_d505d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd505d0ULL || rel >= 0xd50870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50870 size=640 callers=0 calls=7
   calls: sub_13ed240, sub_13ed330, sub_793ea0, sub_c62c30, sub_c91c50, sub_d61e70, sub_d61e80
*/
void sub_d50870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50870ULL || rel >= 0xd50af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50af0 size=144 callers=1 calls=1
   calls: sub_794040
*/
void sub_d50af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50af0ULL || rel >= 0xd50b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50b80 size=160 callers=1 calls=1
   calls: sub_794040
*/
void sub_d50b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50b80ULL || rel >= 0xd50c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50c20 size=368 callers=0 calls=3
   calls: sub_793de0, sub_794040, sub_d62500
*/
void sub_d50c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50c20ULL || rel >= 0xd50d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50d90 size=256 callers=0 calls=0
*/
void sub_d50d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50d90ULL || rel >= 0xd50e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50e90 size=16 callers=0 calls=0
*/
void sub_d50e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50e90ULL || rel >= 0xd50ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50ea0 size=112 callers=0 calls=1
   calls: sub_d514e0
*/
void sub_d50ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50ea0ULL || rel >= 0xd50f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50f10 size=32 callers=0 calls=0
*/
void sub_d50f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50f10ULL || rel >= 0xd50f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50f30 size=32 callers=0 calls=0
*/
void sub_d50f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50f30ULL || rel >= 0xd50f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50f50 size=16 callers=0 calls=0
*/
void sub_d50f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50f50ULL || rel >= 0xd50f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50f60 size=32 callers=0 calls=0
*/
void sub_d50f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50f60ULL || rel >= 0xd50f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50f80 size=32 callers=0 calls=0
*/
void sub_d50f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50f80ULL || rel >= 0xd50fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50fa0 size=16 callers=0 calls=0
*/
void sub_d50fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50fa0ULL || rel >= 0xd50fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50fb0 size=32 callers=0 calls=0
*/
void sub_d50fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50fb0ULL || rel >= 0xd50fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50fd0 size=16 callers=0 calls=0
*/
void sub_d50fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50fd0ULL || rel >= 0xd50fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50fe0 size=16 callers=0 calls=0
*/
void sub_d50fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50fe0ULL || rel >= 0xd50ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d50ff0 size=112 callers=0 calls=1
   calls: sub_d514e0
*/
void sub_d50ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd50ff0ULL || rel >= 0xd51060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51060 size=112 callers=0 calls=1
   calls: sub_d514e0
*/
void sub_d51060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51060ULL || rel >= 0xd510d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d510d0 size=16 callers=0 calls=0
*/
void sub_d510d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd510d0ULL || rel >= 0xd510e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d510e0 size=16 callers=0 calls=0
*/
void sub_d510e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd510e0ULL || rel >= 0xd510f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d510f0 size=160 callers=0 calls=0
*/
void sub_d510f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd510f0ULL || rel >= 0xd51190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51190 size=160 callers=0 calls=0
*/
void sub_d51190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51190ULL || rel >= 0xd51230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51230 size=16 callers=0 calls=0
*/
void sub_d51230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51230ULL || rel >= 0xd51240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51240 size=160 callers=0 calls=0
*/
void sub_d51240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51240ULL || rel >= 0xd512e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d512e0 size=160 callers=0 calls=0
*/
void sub_d512e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd512e0ULL || rel >= 0xd51380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51380 size=16 callers=0 calls=0
*/
void sub_d51380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51380ULL || rel >= 0xd51390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51390 size=16 callers=0 calls=0
*/
void sub_d51390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51390ULL || rel >= 0xd513a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d513a0 size=160 callers=0 calls=0
*/
void sub_d513a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd513a0ULL || rel >= 0xd51440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51440 size=160 callers=0 calls=0
*/
void sub_d51440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51440ULL || rel >= 0xd514e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d514e0 size=240 callers=3 calls=1
   calls: sub_967240
*/
void sub_d514e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd514e0ULL || rel >= 0xd515d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d515d0 size=144 callers=1 calls=1
   calls: sub_c91f50
*/
void sub_d515d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd515d0ULL || rel >= 0xd51660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51660 size=960 callers=0 calls=2
   calls: sub_13a6cd0, sub_13ca4c0
*/
void sub_d51660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51660ULL || rel >= 0xd51a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51a20 size=16 callers=0 calls=0
*/
void sub_d51a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51a20ULL || rel >= 0xd51a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51a30 size=16 callers=0 calls=0
*/
void sub_d51a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51a30ULL || rel >= 0xd51a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51a40 size=16 callers=0 calls=0
*/
void sub_d51a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51a40ULL || rel >= 0xd51a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51a50 size=16 callers=0 calls=0
*/
void sub_d51a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51a50ULL || rel >= 0xd51a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51a60 size=16 callers=0 calls=0
*/
void sub_d51a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51a60ULL || rel >= 0xd51a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51a70 size=16 callers=0 calls=0
*/
void sub_d51a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51a70ULL || rel >= 0xd51a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51a80 size=16 callers=0 calls=0
*/
void sub_d51a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51a80ULL || rel >= 0xd51a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51a90 size=16 callers=0 calls=0
*/
void sub_d51a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51a90ULL || rel >= 0xd51aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51aa0 size=304 callers=1 calls=1
   calls: sub_967240
*/
void sub_d51aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51aa0ULL || rel >= 0xd51bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51bd0 size=112 callers=1 calls=1
   calls: sub_c927f0
*/
void sub_d51bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51bd0ULL || rel >= 0xd51c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51c40 size=16 callers=0 calls=0
*/
void sub_d51c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51c40ULL || rel >= 0xd51c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51c50 size=112 callers=0 calls=1
   calls: sub_d51de0
*/
void sub_d51c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51c50ULL || rel >= 0xd51cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51cc0 size=16 callers=0 calls=0
*/
void sub_d51cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51cc0ULL || rel >= 0xd51cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51cd0 size=16 callers=0 calls=0
*/
void sub_d51cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51cd0ULL || rel >= 0xd51ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51ce0 size=112 callers=0 calls=1
   calls: sub_d51de0
*/
void sub_d51ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51ce0ULL || rel >= 0xd51d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51d50 size=112 callers=0 calls=1
   calls: sub_d51de0
*/
void sub_d51d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51d50ULL || rel >= 0xd51dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51dc0 size=16 callers=0 calls=0
*/
void sub_d51dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51dc0ULL || rel >= 0xd51dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51dd0 size=16 callers=0 calls=0
*/
void sub_d51dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51dd0ULL || rel >= 0xd51de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51de0 size=304 callers=3 calls=1
   calls: sub_967240
*/
void sub_d51de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51de0ULL || rel >= 0xd51f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51f10 size=176 callers=1 calls=1
   calls: sub_ce3a10
*/
void sub_d51f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51f10ULL || rel >= 0xd51fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d51fc0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d51fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd51fc0ULL || rel >= 0xd52010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d52010 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d52010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd52010ULL || rel >= 0xd520c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d520c0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d520c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd520c0ULL || rel >= 0xd52110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d52110 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d52110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd52110ULL || rel >= 0xd52160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d52160 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d52160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd52160ULL || rel >= 0xd52210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d52210 size=176 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d52210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd52210ULL || rel >= 0xd522c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d522c0 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d522c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd522c0ULL || rel >= 0xd52310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d52310 size=80 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d52310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd52310ULL || rel >= 0xd52360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d52360 size=368 callers=0 calls=0
*/
void sub_d52360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd52360ULL || rel >= 0xd524d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d524d0 size=464 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd524d0ULL || rel >= 0xd526a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d526a0 size=176 callers=1 calls=1
   calls: gfbanm
*/
void sub_d526a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd526a0ULL || rel >= 0xd52750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d52750 size=64 callers=1 calls=0
*/
void sub_d52750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd52750ULL || rel >= 0xd52790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d52790 size=1632 callers=0 calls=14
   calls: sub_59f220, sub_59f230, sub_5a0820, sub_5a08e0, sub_5cfad0, sub_614680, sub_6194a0, sub_96ccf0, sub_986030, sub_c291d0, sub_c51540, sub_c85770
   ... +2 more
   ref: OpacityScale
*/
void OpacityScale(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd52790ULL || rel >= 0xd52df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d52df0 size=112 callers=1 calls=3
   calls: sub_59f220, sub_59f230, sub_5a08e0
*/
void sub_d52df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd52df0ULL || rel >= 0xd52e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d52e60 size=144 callers=0 calls=2
   calls: sub_619060, sub_96ccf0
*/
void sub_d52e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd52e60ULL || rel >= 0xd52ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d52ef0 size=48 callers=1 calls=0
*/
void sub_d52ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd52ef0ULL || rel >= 0xd52f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d52f20 size=256 callers=3 calls=1
   calls: sub_d53020
*/
void sub_d52f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd52f20ULL || rel >= 0xd53020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d53020 size=320 callers=4 calls=2
   calls: sub_5cfad0, sub_614680
*/
void sub_d53020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd53020ULL || rel >= 0xd53160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d53160 size=192 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d53160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd53160ULL || rel >= 0xd53220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d53220 size=192 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d53220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd53220ULL || rel >= 0xd532e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d532e0 size=112 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d532e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd532e0ULL || rel >= 0xd53350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d53350 size=208 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d53350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd53350ULL || rel >= 0xd53420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d53420 size=208 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d53420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd53420ULL || rel >= 0xd534f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d534f0 size=112 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d534f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd534f0ULL || rel >= 0xd53560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d53560 size=112 callers=0 calls=1
   calls: sub_96c590
*/
void sub_d53560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd53560ULL || rel >= 0xd535d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d535d0 size=192 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d535d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd535d0ULL || rel >= 0xd53690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d53690 size=192 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d53690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd53690ULL || rel >= 0xd53750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d53750 size=352 callers=0 calls=0
*/
void sub_d53750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd53750ULL || rel >= 0xd538b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d538b0 size=16 callers=0 calls=0
*/
void sub_d538b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd538b0ULL || rel >= 0xd538c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d538c0 size=16 callers=0 calls=0
*/
void sub_d538c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd538c0ULL || rel >= 0xd538d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d538d0 size=16 callers=0 calls=0
*/
void sub_d538d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd538d0ULL || rel >= 0xd538e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d538e0 size=352 callers=1 calls=1
   calls: sub_c928e0
*/
void sub_d538e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd538e0ULL || rel >= 0xd53a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d53a40 size=592 callers=0 calls=4
   calls: sub_13ed240, sub_c93350, sub_cb30b0, sub_e38ce0
*/
void sub_d53a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd53a40ULL || rel >= 0xd53c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d53c90 size=368 callers=0 calls=4
   calls: sub_13ed240, sub_c8e490, sub_c93450, sub_e38ce0
*/
void sub_d53c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd53c90ULL || rel >= 0xd53e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d53e00 size=80 callers=0 calls=3
   calls: sub_c64330, sub_d53e50, sub_d54260
*/
void sub_d53e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd53e00ULL || rel >= 0xd53e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d53e50 size=1040 callers=1 calls=7
   calls: sub_13ed240, sub_972c70, sub_c8dd50, sub_c8e1a0, sub_d54aa0, sub_d54b80, sub_d54d00
*/
void sub_d53e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd53e50ULL || rel >= 0xd54260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d54260 size=880 callers=1 calls=3
   calls: sub_c8dd80, sub_d087b0, sub_e37b80
*/
void sub_d54260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd54260ULL || rel >= 0xd545d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d545d0 size=80 callers=0 calls=1
   calls: sub_c634b0
*/
void sub_d545d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd545d0ULL || rel >= 0xd54620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d54620 size=144 callers=0 calls=1
   calls: sub_c63630
*/
void sub_d54620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd54620ULL || rel >= 0xd546b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d546b0 size=1008 callers=1 calls=3
   calls: sub_972c70, sub_e371c0, sub_e37ec0
*/
void sub_d546b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd546b0ULL || rel >= 0xd54aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d54aa0 size=224 callers=2 calls=7
   calls: sub_5c6850, sub_5c68f0, sub_5c6930, sub_c62830, sub_d29860, sub_d55730, sub_e38770
*/
void sub_d54aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd54aa0ULL || rel >= 0xd54b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d54b80 size=384 callers=1 calls=2
   calls: sub_cb2a10, sub_e37ec0
*/
void sub_d54b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd54b80ULL || rel >= 0xd54d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d54d00 size=384 callers=1 calls=3
   calls: lu__u, sub_972c70, sub_e371c0
*/
void sub_d54d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd54d00ULL || rel >= 0xd54e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d54e80 size=16 callers=0 calls=0
*/
void sub_d54e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd54e80ULL || rel >= 0xd54e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d54e90 size=1168 callers=1 calls=2
   calls: sub_d087b0, sub_e37b80
*/
void sub_d54e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd54e90ULL || rel >= 0xd55320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55320 size=208 callers=1 calls=2
   calls: sub_d087b0, sub_e37b80
*/
void sub_d55320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55320ULL || rel >= 0xd553f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d553f0 size=496 callers=10 calls=3
   calls: sub_c8dd50, sub_c8e1a0, sub_d54aa0
*/
void sub_d553f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd553f0ULL || rel >= 0xd555e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d555e0 size=288 callers=1 calls=3
   calls: lu__u, sub_972c70, sub_e371e0
*/
void sub_d555e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd555e0ULL || rel >= 0xd55700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55700 size=48 callers=1 calls=0
*/
void sub_d55700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55700ULL || rel >= 0xd55730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55730 size=320 callers=1 calls=4
   calls: sub_ce0300, sub_ce0400, sub_ce0440, sub_d25f30
*/
void sub_d55730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55730ULL || rel >= 0xd55870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55870 size=432 callers=1 calls=3
   calls: sub_13ed240, sub_cdc0d0, sub_d55fb0
*/
void sub_d55870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55870ULL || rel >= 0xd55a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55a20 size=192 callers=0 calls=0
*/
void sub_d55a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55a20ULL || rel >= 0xd55ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55ae0 size=192 callers=0 calls=0
*/
void sub_d55ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55ae0ULL || rel >= 0xd55ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55ba0 size=16 callers=0 calls=0
*/
void sub_d55ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55ba0ULL || rel >= 0xd55bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55bb0 size=32 callers=0 calls=0
*/
void sub_d55bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55bb0ULL || rel >= 0xd55bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55bd0 size=32 callers=0 calls=0
*/
void sub_d55bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55bd0ULL || rel >= 0xd55bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55bf0 size=32 callers=0 calls=0
*/
void sub_d55bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55bf0ULL || rel >= 0xd55c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55c10 size=16 callers=0 calls=0
*/
void sub_d55c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55c10ULL || rel >= 0xd55c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55c20 size=32 callers=0 calls=0
*/
void sub_d55c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55c20ULL || rel >= 0xd55c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55c40 size=32 callers=0 calls=0
*/
void sub_d55c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55c40ULL || rel >= 0xd55c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55c60 size=16 callers=0 calls=0
*/
void sub_d55c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55c60ULL || rel >= 0xd55c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55c70 size=32 callers=0 calls=0
*/
void sub_d55c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55c70ULL || rel >= 0xd55c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55c90 size=192 callers=0 calls=0
*/
void sub_d55c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55c90ULL || rel >= 0xd55d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55d50 size=192 callers=0 calls=0
*/
void sub_d55d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55d50ULL || rel >= 0xd55e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55e10 size=16 callers=0 calls=0
*/
void sub_d55e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55e10ULL || rel >= 0xd55e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55e20 size=16 callers=0 calls=0
*/
void sub_d55e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55e20ULL || rel >= 0xd55e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55e30 size=192 callers=0 calls=0
*/
void sub_d55e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55e30ULL || rel >= 0xd55ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55ef0 size=192 callers=0 calls=0
*/
void sub_d55ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55ef0ULL || rel >= 0xd55fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d55fb0 size=2128 callers=3 calls=3
   calls: sub_d55fb0, sub_d56800, sub_d569b0
*/
void sub_d55fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd55fb0ULL || rel >= 0xd56800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d56800 size=432 callers=4 calls=0
*/
void sub_d56800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd56800ULL || rel >= 0xd569b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d569b0 size=928 callers=2 calls=1
   calls: sub_d56800
*/
void sub_d569b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd569b0ULL || rel >= 0xd56d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d56d50 size=128 callers=0 calls=0
*/
void sub_d56d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd56d50ULL || rel >= 0xd56dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d56dd0 size=144 callers=1 calls=1
   calls: sub_ce3a10
*/
void sub_d56dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd56dd0ULL || rel >= 0xd56e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d56e60 size=720 callers=0 calls=2
   calls: sub_5cbcf0, sub_c85770
*/
void sub_d56e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd56e60ULL || rel >= 0xd57130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d57130 size=272 callers=1 calls=1
   calls: sub_5cbcf0
*/
void sub_d57130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd57130ULL || rel >= 0xd57240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d57240 size=112 callers=0 calls=1
   calls: sub_13a6cd0
*/
void sub_d57240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd57240ULL || rel >= 0xd572b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d572b0 size=192 callers=3 calls=2
   calls: sub_c9dcd0, sub_d57370
*/
void sub_d572b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd572b0ULL || rel >= 0xd57370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d57370 size=304 callers=5 calls=1
   calls: sub_13a6920
*/
void sub_d57370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd57370ULL || rel >= 0xd574a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d574a0 size=112 callers=2 calls=2
   calls: sub_c9dcd0, sub_d57370
*/
void sub_d574a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd574a0ULL || rel >= 0xd57510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d57510 size=112 callers=1 calls=2
   calls: sub_c9dcd0, sub_d57370
*/
void sub_d57510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd57510ULL || rel >= 0xd57580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d57580 size=512 callers=1 calls=3
   calls: sub_614680, sub_619640, sub_d63430
   ref: unit_obj_tent01_cloth01_01_01_bld
*/
void unit_obj_tent01_cloth01_01_01_bld(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd57580ULL || rel >= 0xd57780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d57780 size=128 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d57780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd57780ULL || rel >= 0xd57800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d57800 size=128 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d57800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd57800ULL || rel >= 0xd57880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d57880 size=112 callers=0 calls=1
   calls: sub_d11910
*/
void sub_d57880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd57880ULL || rel >= 0xd578f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d578f0 size=128 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d578f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd578f0ULL || rel >= 0xd57970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d57970 size=128 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d57970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd57970ULL || rel >= 0xd579f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d579f0 size=240 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_d579f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd579f0ULL || rel >= 0xd57ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d57ae0 size=240 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_d57ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd57ae0ULL || rel >= 0xd57bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d57bd0 size=128 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d57bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd57bd0ULL || rel >= 0xd57c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d57c50 size=128 callers=0 calls=1
   calls: sub_c75b40
*/
void sub_d57c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd57c50ULL || rel >= 0xd57cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d57cd0 size=2272 callers=1 calls=6
   calls: sub_14072d0, sub_ceeb40, sub_d16b90, sub_d585b0, sub_d5c500, sub_ea9e40
*/
void sub_d57cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd57cd0ULL || rel >= 0xd585b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d585b0 size=240 callers=2 calls=0
*/
void sub_d585b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd585b0ULL || rel >= 0xd586a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d586a0 size=1024 callers=0 calls=8
   calls: sub_135ad00, sub_5e2930, sub_5e2bc0, sub_b334c0, sub_b4c060, sub_c61360, sub_c826b0, trainer_data__03d_2
*/
void sub_d586a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd586a0ULL || rel >= 0xd58aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d58aa0 size=128 callers=0 calls=2
   calls: sub_c61b00, sub_cef260
*/
void sub_d58aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd58aa0ULL || rel >= 0xd58b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d58b20 size=1456 callers=0 calls=12
   calls: sub_135a1a0, sub_59bee0, sub_612ef0, sub_615bd0, sub_615c50, sub_96ccf0, sub_c61640, sub_c61bc0, sub_ceec20, sub_d590d0, sub_d59300, sub_d5c790
   ref: ob0023_00_ball0Skin
   ref: ob0023_00_ball5Skin
   ref: ob0023_00_ball1Skin
   ref: ob0023_00_ball3Skin
   ref: ob0023_00_ball2Skin
   ref: ob0023_00_ball6Skin
   ref: ob0023_00_ball4Skin
   ref: ob0023_00_ball7Skin
*/
void ob0023_00_ball7Skin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd58b20ULL || rel >= 0xd590d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d590d0 size=560 callers=2 calls=2
   calls: sub_612f70, sub_96ccf0
*/
void sub_d590d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd590d0ULL || rel >= 0xd59300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d59300 size=752 callers=3 calls=3
   calls: kw20_drowse01_Enabled_2, sub_13cc840, sub_d18370
*/
void sub_d59300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd59300ULL || rel >= 0xd595f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d595f0 size=416 callers=0 calls=5
   calls: sub_13cc840, sub_c9beb0, sub_cf00e0, sub_d5c8e0, sub_d5d350
*/
void sub_d595f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd595f0ULL || rel >= 0xd59790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d59790 size=448 callers=0 calls=6
   calls: sub_13cc840, sub_c9be80, sub_cf01b0, sub_d5c8e0, sub_d5d3c0, sub_d5e430
*/
void sub_d59790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd59790ULL || rel >= 0xd59950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d59950 size=80 callers=0 calls=1
   calls: sub_c62dd0
*/
void sub_d59950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd59950ULL || rel >= 0xd599a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d599a0 size=384 callers=0 calls=5
   calls: sub_65d220, sub_cef430, sub_d5c8e0, sub_d5e400, sub_d5e420
*/
void sub_d599a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd599a0ULL || rel >= 0xd59b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d59b20 size=448 callers=0 calls=4
   calls: sub_59b1f0, sub_59b200, sub_607750, sub_d585b0
*/
void sub_d59b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd59b20ULL || rel >= 0xd59ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d59ce0 size=64 callers=0 calls=1
   calls: eye_move_v
*/
void sub_d59ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd59ce0ULL || rel >= 0xd59d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d59d20 size=560 callers=0 calls=2
   calls: sub_d590d0, sub_d5b1d0
*/
void sub_d59d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd59d20ULL || rel >= 0xd59f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d59f50 size=336 callers=0 calls=2
   calls: sub_c61f70, sub_c636b0
*/
void sub_d59f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd59f50ULL || rel >= 0xd5a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5a0a0 size=272 callers=0 calls=2
   calls: sub_13cc840, sub_cf0280
*/
void sub_d5a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5a0a0ULL || rel >= 0xd5a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5a1b0 size=256 callers=0 calls=3
   calls: sub_13cc840, sub_c9ebc0, sub_cf0360
*/
void sub_d5a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5a1b0ULL || rel >= 0xd5a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5a2b0 size=272 callers=0 calls=2
   calls: sub_793fb0, sub_986bc0
   ref: NPC_RunWalkRate
*/
void NPC_RunWalkRate_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5a2b0ULL || rel >= 0xd5a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5a3c0 size=768 callers=1 calls=3
   calls: sub_c81890, sub_d5a6c0, sub_d5c8e0
*/
void sub_d5a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5a3c0ULL || rel >= 0xd5a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5a6c0 size=672 callers=2 calls=1
   calls: sub_c816a0
*/
void sub_d5a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5a6c0ULL || rel >= 0xd5a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5a960 size=1056 callers=1 calls=3
   calls: sub_c81cf0, sub_d5a6c0, sub_d5ad80
*/
void sub_d5a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5a960ULL || rel >= 0xd5ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5ad80 size=784 callers=1 calls=0
*/
void sub_d5ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5ad80ULL || rel >= 0xd5b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5b090 size=80 callers=0 calls=2
   calls: sub_c61580, sub_c83380
*/
void sub_d5b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5b090ULL || rel >= 0xd5b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5b0e0 size=240 callers=1 calls=3
   calls: sub_b4c060, sub_b96730, sub_d59300
*/
void sub_d5b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5b0e0ULL || rel >= 0xd5b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5b1d0 size=1104 callers=1 calls=4
   calls: sub_971950, sub_972c70, sub_d5b620, sub_d5b9b0
*/
void sub_d5b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5b1d0ULL || rel >= 0xd5b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5b620 size=912 callers=3 calls=1
   calls: sub_972c70
*/
void sub_d5b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5b620ULL || rel >= 0xd5b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5b9b0 size=368 callers=3 calls=0
*/
void sub_d5b9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5b9b0ULL || rel >= 0xd5bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5bb20 size=320 callers=1 calls=2
   calls: sub_13c9e50, sub_972c70
*/
void sub_d5bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5bb20ULL || rel >= 0xd5bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5bc60 size=80 callers=1 calls=0
*/
void sub_d5bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5bc60ULL || rel >= 0xd5bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5bcb0 size=176 callers=1 calls=1
   calls: sub_794330
*/
void sub_d5bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5bcb0ULL || rel >= 0xd5bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5bd60 size=176 callers=2 calls=1
   calls: sub_13ed150
*/
void sub_d5bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5bd60ULL || rel >= 0xd5be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5be10 size=752 callers=1 calls=2
   calls: sub_13c9e50, sub_13ed240
*/
void sub_d5be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5be10ULL || rel >= 0xd5c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c100 size=400 callers=0 calls=2
   calls: sub_5cf8d0, sub_5e2bc0
*/
void sub_d5c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c100ULL || rel >= 0xd5c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c290 size=16 callers=0 calls=0
*/
void sub_d5c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c290ULL || rel >= 0xd5c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c2a0 size=176 callers=0 calls=1
   calls: sub_13b1c90
*/
void sub_d5c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c2a0ULL || rel >= 0xd5c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c350 size=16 callers=0 calls=0
*/
void sub_d5c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c350ULL || rel >= 0xd5c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c360 size=16 callers=0 calls=0
*/
void sub_d5c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c360ULL || rel >= 0xd5c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c370 size=16 callers=0 calls=0
*/
void sub_d5c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c370ULL || rel >= 0xd5c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c380 size=176 callers=0 calls=1
   calls: sub_13b1c90
*/
void sub_d5c380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c380ULL || rel >= 0xd5c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c430 size=176 callers=0 calls=1
   calls: sub_13b1c90
*/
void sub_d5c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c430ULL || rel >= 0xd5c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c4e0 size=16 callers=0 calls=0
*/
void sub_d5c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c4e0ULL || rel >= 0xd5c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c4f0 size=16 callers=0 calls=0
*/
void sub_d5c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c4f0ULL || rel >= 0xd5c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c500 size=448 callers=1 calls=0
*/
void sub_d5c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c500ULL || rel >= 0xd5c6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c6c0 size=160 callers=0 calls=4
   calls: sub_1453a90, sub_1453ce0, sub_1453d00, trainer_type__03d_2
*/
void sub_d5c6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c6c0ULL || rel >= 0xd5c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c760 size=16 callers=0 calls=0
*/
void sub_d5c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c760ULL || rel >= 0xd5c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c770 size=16 callers=0 calls=0
*/
void sub_d5c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c770ULL || rel >= 0xd5c780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c780 size=16 callers=0 calls=0
*/
void sub_d5c780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c780ULL || rel >= 0xd5c790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c790 size=336 callers=1 calls=2
   calls: sub_13ca950, sub_d5cd20
*/
void sub_d5c790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c790ULL || rel >= 0xd5c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c8e0 size=240 callers=4 calls=1
   calls: sub_13cc840
*/
void sub_d5c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c8e0ULL || rel >= 0xd5c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5c9d0 size=304 callers=0 calls=0
*/
void sub_d5c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5c9d0ULL || rel >= 0xd5cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5cb00 size=16 callers=0 calls=0
*/
void sub_d5cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5cb00ULL || rel >= 0xd5cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5cb10 size=16 callers=0 calls=0
*/
void sub_d5cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5cb10ULL || rel >= 0xd5cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5cb20 size=16 callers=0 calls=0
*/
void sub_d5cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5cb20ULL || rel >= 0xd5cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5cb30 size=496 callers=0 calls=1
   calls: sub_1c0
   ref: loc_attach
   ref: loc_ob_ball
   ref: loc_eff_eye
   ref: fi_ball_shine
   ref: fi_trainer_ballfight
*/
void fi_trainer_ballfight(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5cb30ULL || rel >= 0xd5cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5cd20 size=336 callers=1 calls=1
   calls: sub_d1b2b0
*/
void sub_d5cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5cd20ULL || rel >= 0xd5ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5ce70 size=1184 callers=0 calls=1
   calls: sub_d1b460
*/
void sub_d5ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5ce70ULL || rel >= 0xd5d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5d310 size=64 callers=0 calls=1
   calls: sub_d1b3c0
*/
void sub_d5d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5d310ULL || rel >= 0xd5d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5d350 size=112 callers=1 calls=1
   calls: sub_d1b580
*/
void sub_d5d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5d350ULL || rel >= 0xd5d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5d3c0 size=176 callers=1 calls=1
   calls: sub_d1b5a0
*/
void sub_d5d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5d3c0ULL || rel >= 0xd5d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5d470 size=352 callers=0 calls=4
   calls: sub_13ed240, sub_d1b6a0, sub_d1b6f0, sub_d1ba70
*/
void sub_d5d470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5d470ULL || rel >= 0xd5d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5d5d0 size=1040 callers=0 calls=11
   calls: sub_65d220, sub_9733f0, sub_d1b060, sub_d1b7a0, sub_d1ba50, sub_d1c190, sub_d1d280, sub_d5d9e0, sub_d5dc80, sub_d5dec0, sub_d5e020
*/
void sub_d5d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5d5d0ULL || rel >= 0xd5d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5d9e0 size=672 callers=1 calls=4
   calls: sub_c8f450, sub_d1b060, sub_d1c190, sub_d3c360
*/
void sub_d5d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5d9e0ULL || rel >= 0xd5dc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5dc80 size=576 callers=1 calls=3
   calls: sub_971950, sub_972c70, sub_9733f0
*/
void sub_d5dc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5dc80ULL || rel >= 0xd5dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5dec0 size=256 callers=1 calls=2
   calls: sub_972c70, sub_9733f0
*/
void sub_d5dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5dec0ULL || rel >= 0xd5dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5dfc0 size=32 callers=0 calls=0
*/
void sub_d5dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5dfc0ULL || rel >= 0xd5dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5dfe0 size=64 callers=0 calls=0
*/
void sub_d5dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5dfe0ULL || rel >= 0xd5e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5e020 size=992 callers=2 calls=1
   calls: sub_13b1c90
*/
void sub_d5e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5e020ULL || rel >= 0xd5e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5e400 size=32 callers=1 calls=0
*/
void sub_d5e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5e400ULL || rel >= 0xd5e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5e420 size=16 callers=1 calls=0
*/
void sub_d5e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5e420ULL || rel >= 0xd5e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5e430 size=32 callers=1 calls=0
*/
void sub_d5e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5e430ULL || rel >= 0xd5e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5e450 size=192 callers=0 calls=0
*/
void sub_d5e450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5e450ULL || rel >= 0xd5e510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5e510 size=192 callers=0 calls=0
*/
void sub_d5e510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5e510ULL || rel >= 0xd5e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5e5d0 size=176 callers=0 calls=1
   calls: sub_13cc840
*/
void sub_d5e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5e5d0ULL || rel >= 0xd5e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5e680 size=192 callers=0 calls=0
*/
void sub_d5e680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5e680ULL || rel >= 0xd5e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5e740 size=192 callers=0 calls=0
*/
void sub_d5e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5e740ULL || rel >= 0xd5e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5e800 size=176 callers=0 calls=1
   calls: sub_13cc840
*/
void sub_d5e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5e800ULL || rel >= 0xd5e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5e8b0 size=176 callers=0 calls=1
   calls: sub_13cc840
*/
void sub_d5e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5e8b0ULL || rel >= 0xd5e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5e960 size=192 callers=0 calls=0
*/
void sub_d5e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5e960ULL || rel >= 0xd5ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5ea20 size=192 callers=0 calls=0
*/
void sub_d5ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5ea20ULL || rel >= 0xd5eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5eae0 size=128 callers=0 calls=0
*/
void sub_d5eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5eae0ULL || rel >= 0xd5eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5eb60 size=144 callers=1 calls=1
   calls: gfbanm_2
*/
void sub_d5eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5eb60ULL || rel >= 0xd5ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5ebf0 size=688 callers=0 calls=2
   calls: sub_5cbcf0, sub_c94300
*/
void sub_d5ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5ebf0ULL || rel >= 0xd5eea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5eea0 size=112 callers=0 calls=0
*/
void sub_d5eea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5eea0ULL || rel >= 0xd5ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5ef10 size=112 callers=0 calls=0
*/
void sub_d5ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5ef10ULL || rel >= 0xd5ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5ef80 size=112 callers=0 calls=1
   calls: sub_d5f290
*/
void sub_d5ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5ef80ULL || rel >= 0xd5eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5eff0 size=112 callers=0 calls=0
*/
void sub_d5eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5eff0ULL || rel >= 0xd5f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f060 size=112 callers=0 calls=0
*/
void sub_d5f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f060ULL || rel >= 0xd5f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f0d0 size=112 callers=0 calls=1
   calls: sub_d5f290
*/
void sub_d5f0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f0d0ULL || rel >= 0xd5f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f140 size=112 callers=0 calls=1
   calls: sub_d5f290
*/
void sub_d5f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f140ULL || rel >= 0xd5f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f1b0 size=112 callers=0 calls=0
*/
void sub_d5f1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f1b0ULL || rel >= 0xd5f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f220 size=112 callers=0 calls=0
*/
void sub_d5f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f220ULL || rel >= 0xd5f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f290 size=304 callers=3 calls=1
   calls: sub_967240
*/
void sub_d5f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f290ULL || rel >= 0xd5f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f3c0 size=176 callers=0 calls=0
*/
void sub_d5f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f3c0ULL || rel >= 0xd5f470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f470 size=192 callers=1 calls=1
   calls: sub_c72460
*/
void sub_d5f470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f470ULL || rel >= 0xd5f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f530 size=16 callers=0 calls=0
*/
void sub_d5f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f530ULL || rel >= 0xd5f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f540 size=16 callers=0 calls=0
*/
void sub_d5f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f540ULL || rel >= 0xd5f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f550 size=256 callers=0 calls=1
   calls: sub_c72ef0
*/
void sub_d5f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f550ULL || rel >= 0xd5f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f650 size=80 callers=0 calls=1
   calls: sub_c735f0
*/
void sub_d5f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f650ULL || rel >= 0xd5f6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f6a0 size=400 callers=1 calls=5
   calls: sub_1c0, sub_5cfaf0, sub_5e6770, sub_5e7a30, sub_d5fac0
   ref: script/
*/
void unnamed_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f6a0ULL || rel >= 0xd5f830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f830 size=16 callers=0 calls=0
*/
void sub_d5f830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f830ULL || rel >= 0xd5f840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5f840 size=640 callers=0 calls=6
   calls: number_count02_trigger, sub_d5fe30, sub_d5ff10, sub_d5fff0, sub_d600d0, sub_d601b0
*/
void sub_d5f840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5f840ULL || rel >= 0xd5fac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5fac0 size=240 callers=1 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_d5fac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5fac0ULL || rel >= 0xd5fbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5fbb0 size=272 callers=0 calls=2
   calls: sub_1308340, sub_13e4fc0
*/
void sub_d5fbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5fbb0ULL || rel >= 0xd5fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5fcc0 size=240 callers=1 calls=1
   calls: sub_c73800
*/
void sub_d5fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5fcc0ULL || rel >= 0xd5fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5fdb0 size=16 callers=0 calls=0
*/
void sub_d5fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5fdb0ULL || rel >= 0xd5fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5fdc0 size=16 callers=0 calls=0
*/
void sub_d5fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5fdc0ULL || rel >= 0xd5fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5fdd0 size=16 callers=0 calls=0
*/
void sub_d5fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5fdd0ULL || rel >= 0xd5fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5fde0 size=16 callers=0 calls=0
*/
void sub_d5fde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5fde0ULL || rel >= 0xd5fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5fdf0 size=16 callers=0 calls=0
*/
void sub_d5fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5fdf0ULL || rel >= 0xd5fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5fe00 size=16 callers=0 calls=0
*/
void sub_d5fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5fe00ULL || rel >= 0xd5fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5fe10 size=16 callers=0 calls=0
*/
void sub_d5fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5fe10ULL || rel >= 0xd5fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5fe20 size=16 callers=0 calls=0
*/
void sub_d5fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5fe20ULL || rel >= 0xd5fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5fe30 size=224 callers=1 calls=1
   calls: sub_dc51a0
*/
void sub_d5fe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5fe30ULL || rel >= 0xd5ff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5ff10 size=224 callers=1 calls=1
   calls: sub_db0610
*/
void sub_d5ff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5ff10ULL || rel >= 0xd5fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d5fff0 size=224 callers=1 calls=1
   calls: sub_da93a0
*/
void sub_d5fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5fff0ULL || rel >= 0xd600d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d600d0 size=224 callers=1 calls=1
   calls: sub_dc8c30
*/
void sub_d600d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd600d0ULL || rel >= 0xd601b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d601b0 size=224 callers=1 calls=1
   calls: sub_dcac20
*/
void sub_d601b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd601b0ULL || rel >= 0xd60290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d60290 size=352 callers=1 calls=1
   calls: sub_7910a0
*/
void sub_d60290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd60290ULL || rel >= 0xd603f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

