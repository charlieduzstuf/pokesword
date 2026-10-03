/* main functions 00c94650..00ccacc0 (100 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00c94650 size=112 callers=0 calls=0
*/
void sub_c94650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc94650ULL || rel >= 0xc946c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c946c0 size=16 callers=0 calls=0
*/
void sub_c946c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc946c0ULL || rel >= 0xc946d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c946d0 size=16 callers=0 calls=0
*/
void sub_c946d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc946d0ULL || rel >= 0xc946e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c946e0 size=112 callers=0 calls=0
*/
void sub_c946e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc946e0ULL || rel >= 0xc94750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c94750 size=112 callers=0 calls=0
*/
void sub_c94750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc94750ULL || rel >= 0xc947c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c947c0 size=336 callers=1 calls=1
   calls: sub_c94910
*/
void sub_c947c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc947c0ULL || rel >= 0xc94910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c94910 size=464 callers=1 calls=1
   calls: sub_65f1c0
*/
void sub_c94910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc94910ULL || rel >= 0xc94ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c94ae0 size=512 callers=0 calls=2
   calls: sub_5e2bc0, sub_65b6a0
*/
void sub_c94ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc94ae0ULL || rel >= 0xc94ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c94ce0 size=16 callers=0 calls=0
*/
void sub_c94ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc94ce0ULL || rel >= 0xc94cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c94cf0 size=16 callers=0 calls=0
*/
void sub_c94cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc94cf0ULL || rel >= 0xc94d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c94d00 size=16 callers=0 calls=0
*/
void sub_c94d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc94d00ULL || rel >= 0xc94d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c94d10 size=784 callers=1 calls=4
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_8c2c10
*/
void sub_c94d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc94d10ULL || rel >= 0xc95020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95020 size=32 callers=1 calls=0
*/
void sub_c95020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95020ULL || rel >= 0xc95040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95040 size=128 callers=1 calls=1
   calls: sub_c950c0
*/
void sub_c95040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95040ULL || rel >= 0xc950c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c950c0 size=320 callers=1 calls=5
   calls: sub_65b490, sub_65b6a0, sub_65b820, sub_65da00, sub_65daf0
*/
void sub_c950c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc950c0ULL || rel >= 0xc95200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95200 size=80 callers=2 calls=1
   calls: sub_65b6a0
*/
void sub_c95200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95200ULL || rel >= 0xc95250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95250 size=96 callers=4 calls=2
   calls: sub_65da00, sub_65daf0
*/
void sub_c95250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95250ULL || rel >= 0xc952b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c952b0 size=144 callers=2 calls=0
*/
void sub_c952b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc952b0ULL || rel >= 0xc95340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95340 size=16 callers=0 calls=0
*/
void sub_c95340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95340ULL || rel >= 0xc95350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95350 size=16 callers=0 calls=0
*/
void sub_c95350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95350ULL || rel >= 0xc95360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95360 size=16 callers=0 calls=0
*/
void sub_c95360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95360ULL || rel >= 0xc95370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95370 size=16 callers=0 calls=0
*/
void sub_c95370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95370ULL || rel >= 0xc95380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95380 size=368 callers=0 calls=0
*/
void sub_c95380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95380ULL || rel >= 0xc954f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c954f0 size=752 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc954f0ULL || rel >= 0xc957e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c957e0 size=384 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_c957e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc957e0ULL || rel >= 0xc95960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95960 size=320 callers=0 calls=0
   ref: fi_bushrun_blend_start
   ref: fi_bushrun_blend_frame
*/
void fi_bushrun_blend_start(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95960ULL || rel >= 0xc95aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95aa0 size=32 callers=0 calls=0
*/
void sub_c95aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95aa0ULL || rel >= 0xc95ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95ac0 size=16 callers=0 calls=0
*/
void sub_c95ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95ac0ULL || rel >= 0xc95ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95ad0 size=128 callers=0 calls=1
   calls: sub_d42e80
*/
void sub_c95ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95ad0ULL || rel >= 0xc95b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95b50 size=416 callers=0 calls=5
   calls: sub_c6ccb0, sub_c6ceb0, sub_c9a010, sub_d44bc0, sub_d44d60
*/
void sub_c95b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95b50ULL || rel >= 0xc95cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95cf0 size=64 callers=2 calls=0
*/
void sub_c95cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95cf0ULL || rel >= 0xc95d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95d30 size=48 callers=0 calls=0
*/
void sub_c95d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95d30ULL || rel >= 0xc95d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95d60 size=16 callers=1 calls=0
*/
void sub_c95d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95d60ULL || rel >= 0xc95d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c95d70 size=1328 callers=0 calls=11
   calls: sub_c6c980, sub_c962a0, sub_c96480, sub_c96870, sub_c96b20, sub_c993f0, sub_c999f0, sub_cf15b0, sub_d42e80, sub_d44bc0, sub_d46dc0
   ref: fi_spin
*/
void fi_spin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc95d70ULL || rel >= 0xc962a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c962a0 size=480 callers=1 calls=8
   calls: sub_13575e0, sub_13c9e50, sub_d45ab0, sub_ea3d10, sub_ea4760, sub_ea47d0, sub_ea47e0, sub_ea4820
*/
void sub_c962a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc962a0ULL || rel >= 0xc96480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c96480 size=1008 callers=1 calls=4
   calls: sub_971950, sub_972c70, sub_9733f0, sub_d42e80
*/
void sub_c96480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc96480ULL || rel >= 0xc96870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c96870 size=688 callers=4 calls=5
   calls: sub_59b250, sub_5b9220, sub_b4a5e0, sub_d42e80, sub_d46dc0
*/
void sub_c96870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc96870ULL || rel >= 0xc96b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c96b20 size=832 callers=1 calls=1
   calls: sub_5cc540
*/
void sub_c96b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc96b20ULL || rel >= 0xc96e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c96e60 size=4112 callers=0 calls=16
   calls: sub_59b250, sub_5b9220, sub_5cc540, sub_971950, sub_b4a5e0, sub_b4c060, sub_c6ccb0, sub_c6ceb0, sub_c83540, sub_c97e70, sub_c9a010, sub_d27210
   ... +4 more
   ref: Play_PL_Cycling_Stop_Water
   ref: Play_PL_Foley_Don
   ref: Play_PL_Cycling_Stop
   ref: Play_PL_Cycling_Trubo_Land
   ref: fi_runstop_speed
   ref: Play_PL_Cycling_Trubo_Water
   ref: fi_runstop
*/
void Play_PL_Cycling_Trubo_Water(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc96e60ULL || rel >= 0xc97e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c97e70 size=272 callers=2 calls=3
   calls: sub_d42e80, sub_d46b80, sub_d46dc0
*/
void sub_c97e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc97e70ULL || rel >= 0xc97f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c97f80 size=704 callers=0 calls=2
   calls: sub_c986d0, sub_c989a0
*/
void sub_c97f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc97f80ULL || rel >= 0xc98240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c98240 size=1168 callers=0 calls=10
   calls: sub_59b250, sub_5b9400, sub_65d220, sub_b4a5e0, sub_b4c060, sub_c6c980, sub_c99770, sub_cf15b0, sub_d27210, sub_d42e80
   ref: fi0047_idling06_loop
   ref: fi_idling
*/
void fi0047_idling06_loop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc98240ULL || rel >= 0xc986d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c986d0 size=384 callers=1 calls=1
   calls: sub_d42e80
*/
void sub_c986d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc986d0ULL || rel >= 0xc98850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c98850 size=336 callers=0 calls=2
   calls: sub_5cc540, sub_65d220
*/
void sub_c98850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc98850ULL || rel >= 0xc989a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c989a0 size=800 callers=1 calls=4
   calls: sub_136e8b0, sub_c6ccb0, sub_c6ceb0, sub_c9a010
*/
void sub_c989a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc989a0ULL || rel >= 0xc98cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c98cc0 size=432 callers=0 calls=5
   calls: sub_59b250, sub_5b93c0, sub_5b9400, sub_b4a5e0, sub_cf15b0
*/
void sub_c98cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc98cc0ULL || rel >= 0xc98e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c98e70 size=528 callers=0 calls=7
   calls: sub_59b250, sub_5b9220, sub_5b93c0, sub_5b9400, sub_972c70, sub_b4a5e0, sub_cf15b0
   ref: fi_runturn01
*/
void fi_runturn01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc98e70ULL || rel >= 0xc99080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99080 size=880 callers=0 calls=4
   calls: sub_59b250, sub_5b9220, sub_b4a5e0, sub_cf15b0
*/
void sub_c99080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99080ULL || rel >= 0xc993f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c993f0 size=896 callers=2 calls=0
*/
void sub_c993f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc993f0ULL || rel >= 0xc99770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99770 size=288 callers=2 calls=3
   calls: sub_c73800, sub_d46c00, sub_d63270
*/
void sub_c99770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99770ULL || rel >= 0xc99890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99890 size=352 callers=0 calls=0
*/
void sub_c99890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99890ULL || rel >= 0xc999f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c999f0 size=400 callers=1 calls=6
   calls: sub_59b250, sub_5b9220, sub_5b9400, sub_b4a5e0, sub_cf15b0, sub_d46d40
*/
void sub_c999f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc999f0ULL || rel >= 0xc99b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99b80 size=48 callers=3 calls=0
*/
void sub_c99b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99b80ULL || rel >= 0xc99bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99bb0 size=48 callers=3 calls=0
*/
void sub_c99bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99bb0ULL || rel >= 0xc99be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99be0 size=16 callers=1 calls=0
*/
void sub_c99be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99be0ULL || rel >= 0xc99bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99bf0 size=96 callers=1 calls=0
*/
void sub_c99bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99bf0ULL || rel >= 0xc99c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99c50 size=16 callers=1 calls=0
*/
void sub_c99c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99c50ULL || rel >= 0xc99c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99c60 size=16 callers=6 calls=0
*/
void sub_c99c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99c60ULL || rel >= 0xc99c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99c70 size=80 callers=0 calls=0
*/
void sub_c99c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99c70ULL || rel >= 0xc99cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99cc0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_c99cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99cc0ULL || rel >= 0xc99d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99d70 size=80 callers=0 calls=0
*/
void sub_c99d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99d70ULL || rel >= 0xc99dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99dc0 size=80 callers=0 calls=0
*/
void sub_c99dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99dc0ULL || rel >= 0xc99e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99e10 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_c99e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99e10ULL || rel >= 0xc99ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99ec0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_c99ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99ec0ULL || rel >= 0xc99f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99f70 size=80 callers=0 calls=0
*/
void sub_c99f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99f70ULL || rel >= 0xc99fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c99fc0 size=80 callers=0 calls=0
*/
void sub_c99fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99fc0ULL || rel >= 0xc9a010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9a010 size=464 callers=8 calls=1
   calls: sub_967240
*/
void sub_c9a010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9a010ULL || rel >= 0xc9a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9a1e0 size=368 callers=0 calls=0
*/
void sub_c9a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9a1e0ULL || rel >= 0xc9a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9a350 size=464 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9a350ULL || rel >= 0xc9a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9a520 size=208 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_c9a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9a520ULL || rel >= 0xc9a5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9a5f0 size=688 callers=0 calls=0
*/
void sub_c9a5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9a5f0ULL || rel >= 0xc9a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9a8a0 size=5568 callers=0 calls=25
   calls: fi_common_event, fi_unique_event, sub_13a6920, sub_13ca060, sub_5cfad0, sub_972c70, sub_990590, sub_b4c060, sub_c9bee0, sub_c9c3c0, sub_c9c520, sub_c9c640
   ... +13 more
   ref: fi_common_event
   ref: kw20_drowse01_Enabled
*/
void kw20_drowse01_Enabled(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9a8a0ULL || rel >= 0xc9be60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9be60 size=16 callers=0 calls=0
*/
void sub_c9be60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9be60ULL || rel >= 0xc9be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9be70 size=16 callers=0 calls=0
*/
void sub_c9be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9be70ULL || rel >= 0xc9be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9be80 size=48 callers=2 calls=0
*/
void sub_c9be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9be80ULL || rel >= 0xc9beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9beb0 size=48 callers=1 calls=0
*/
void sub_c9beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9beb0ULL || rel >= 0xc9bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9bee0 size=1248 callers=6 calls=1
   calls: sub_13ca4c0
*/
void sub_c9bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9bee0ULL || rel >= 0xc9c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9c3c0 size=352 callers=3 calls=4
   calls: sub_59b250, sub_5b9220, sub_5b9400, sub_b44bb0
*/
void sub_c9c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9c3c0ULL || rel >= 0xc9c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9c520 size=288 callers=4 calls=3
   calls: sub_13ca950, sub_c9faa0, sub_ca2440
*/
void sub_c9c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9c520ULL || rel >= 0xc9c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9c640 size=288 callers=1 calls=4
   calls: sub_5cfad0, sub_c9c9b0, sub_c9ed40, sub_d4fbb0
*/
void sub_c9c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9c640ULL || rel >= 0xc9c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9c760 size=592 callers=5 calls=0
*/
void sub_c9c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9c760ULL || rel >= 0xc9c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9c9b0 size=224 callers=7 calls=3
   calls: sub_5cfad0, sub_c9ed40, sub_d4fbb0
*/
void sub_c9c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9c9b0ULL || rel >= 0xc9ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9ca90 size=832 callers=1 calls=3
   calls: sub_5cfad0, sub_c9ed40, sub_c9ee70
*/
void sub_c9ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9ca90ULL || rel >= 0xc9cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9cdd0 size=256 callers=1 calls=3
   calls: sub_13ca950, sub_c9faa0, sub_ca2940
*/
void sub_c9cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9cdd0ULL || rel >= 0xc9ced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9ced0 size=1008 callers=3 calls=1
   calls: sub_5cfad0
   ref: fi_common_event
   ref: fi_wait_type
*/
void fi_common_event(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9ced0ULL || rel >= 0xc9d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9d2c0 size=2576 callers=1 calls=3
   calls: sub_65d700, sub_c9f140, sub_ca0200
   ref: kw33_moveA01
   ref: kw33_moveC01
   ref: to_kw32_happyB01
   ref: kw32_happyB01
   ref: ba10_waitB01
   ref: to_kw32_happyA01
   ref: to_kw33_moveB01
   ref: to_kw33_moveD01
*/
void to_kw32_happyB01_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9d2c0ULL || rel >= 0xc9dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9dcd0 size=416 callers=32 calls=1
   calls: sub_967240
*/
void sub_c9dcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9dcd0ULL || rel >= 0xc9de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9de70 size=608 callers=2 calls=4
   calls: sub_13cce40, sub_b4c060, sub_d27000, sub_d27650
*/
void sub_c9de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9de70ULL || rel >= 0xc9e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9e0d0 size=464 callers=2 calls=4
   calls: eye_move_v_2, sub_13cce40, sub_b4c060, sub_d27210
*/
void sub_c9e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9e0d0ULL || rel >= 0xc9e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9e2a0 size=848 callers=4 calls=1
   calls: sub_13ca4c0
   ref: fi_common_event
   ref: app_state
   ref: fi_npc_type
   ref: fi_unique_event
   ref: fi_wait_type
*/
void fi_unique_event(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9e2a0ULL || rel >= 0xc9e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9e5f0 size=32 callers=9 calls=0
*/
void sub_c9e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9e5f0ULL || rel >= 0xc9e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9e610 size=32 callers=2 calls=0
*/
void sub_c9e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9e610ULL || rel >= 0xc9e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9e630 size=496 callers=2 calls=1
   calls: sub_5cfad0
   ref: fi_common_event
   ref: fi_unique_event
*/
void fi_unique_event_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9e630ULL || rel >= 0xc9e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9e820 size=512 callers=5 calls=5
   calls: fi_common_event, fi_unique_event_2, sub_135a760, sub_c9c760, sub_c9c9b0
   ref: kw50_eat01_Enabled
   ref: kw20_drowse01_Enabled
   ref: to_kw21_sleepA01
*/
void kw20_drowse01_Enabled_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9e820ULL || rel >= 0xc9ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9ea20 size=416 callers=0 calls=3
   calls: sub_5cfad0, sub_c9c9b0, sub_c9e0d0
   ref: fi_common_event
*/
void fi_common_event_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9ea20ULL || rel >= 0xc9ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9ebc0 size=272 callers=1 calls=4
   calls: fi_common_event, sub_135a760, sub_c9c760, sub_c9c9b0
*/
void sub_c9ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9ebc0ULL || rel >= 0xc9ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9ecd0 size=16 callers=1 calls=0
*/
void sub_c9ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9ecd0ULL || rel >= 0xc9ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9ece0 size=96 callers=1 calls=1
   calls: fi_unique_event
*/
void sub_c9ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9ece0ULL || rel >= 0xc9ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9ed40 size=304 callers=3 calls=1
   calls: sub_13a6920
*/
void sub_c9ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9ed40ULL || rel >= 0xc9ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9ee70 size=720 callers=1 calls=1
   calls: sub_5cfad0
*/
void sub_c9ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9ee70ULL || rel >= 0xc9f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9f140 size=592 callers=7 calls=4
   calls: sub_59a180, sub_5bee70, sub_5e2bc0, sub_b4a5e0
*/
void sub_c9f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f140ULL || rel >= 0xc9f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9f390 size=144 callers=0 calls=0
*/
void sub_c9f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f390ULL || rel >= 0xc9f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9f420 size=144 callers=0 calls=0
*/
void sub_c9f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f420ULL || rel >= 0xc9f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9f4b0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_c9f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f4b0ULL || rel >= 0xc9f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9f560 size=48 callers=0 calls=0
*/
void sub_c9f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f560ULL || rel >= 0xc9f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9f590 size=16 callers=0 calls=0
*/
void sub_c9f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f590ULL || rel >= 0xc9f5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9f5a0 size=144 callers=0 calls=0
*/
void sub_c9f5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f5a0ULL || rel >= 0xc9f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9f630 size=144 callers=0 calls=0
*/
void sub_c9f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f630ULL || rel >= 0xc9f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9f6c0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_c9f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f6c0ULL || rel >= 0xc9f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9f770 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_c9f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f770ULL || rel >= 0xc9f820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9f820 size=144 callers=0 calls=0
*/
void sub_c9f820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f820ULL || rel >= 0xc9f8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9f8b0 size=144 callers=0 calls=0
*/
void sub_c9f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f8b0ULL || rel >= 0xc9f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9f940 size=352 callers=50 calls=1
   calls: sub_13a6920
*/
void sub_c9f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f940ULL || rel >= 0xc9faa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9faa0 size=224 callers=2 calls=1
   calls: sub_ca3020
*/
void sub_c9faa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9faa0ULL || rel >= 0xc9fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9fb80 size=1104 callers=0 calls=4
   calls: sub_13cce40, sub_972c70, sub_990590, sub_c9bee0
*/
void sub_c9fb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9fb80ULL || rel >= 0xc9ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9ffd0 size=16 callers=0 calls=0
*/
void sub_c9ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9ffd0ULL || rel >= 0xc9ffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c9ffe0 size=32 callers=0 calls=0
*/
void sub_c9ffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9ffe0ULL || rel >= 0xca0000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0000 size=32 callers=0 calls=0
*/
void sub_ca0000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0000ULL || rel >= 0xca0020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0020 size=240 callers=3 calls=1
   calls: sub_c657d0
*/
void sub_ca0020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0020ULL || rel >= 0xca0110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0110 size=240 callers=23 calls=1
   calls: sub_c657d0
*/
void sub_ca0110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0110ULL || rel >= 0xca0200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0200 size=592 callers=6 calls=0
*/
void sub_ca0200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0200ULL || rel >= 0xca0450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0450 size=112 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_ca0450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0450ULL || rel >= 0xca04c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca04c0 size=752 callers=0 calls=7
   calls: sub_13b1ba0, sub_13b1c90, sub_13c9e50, sub_65d220, sub_972c70, sub_c9e5f0, sub_ca0b90
*/
void sub_ca04c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca04c0ULL || rel >= 0xca07b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca07b0 size=16 callers=0 calls=0
*/
void sub_ca07b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca07b0ULL || rel >= 0xca07c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca07c0 size=16 callers=0 calls=0
*/
void sub_ca07c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca07c0ULL || rel >= 0xca07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca07d0 size=32 callers=3 calls=0
*/
void sub_ca07d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca07d0ULL || rel >= 0xca07f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca07f0 size=80 callers=0 calls=0
*/
void sub_ca07f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca07f0ULL || rel >= 0xca0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0840 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_ca0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0840ULL || rel >= 0xca08f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca08f0 size=80 callers=0 calls=0
*/
void sub_ca08f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca08f0ULL || rel >= 0xca0940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0940 size=80 callers=0 calls=0
*/
void sub_ca0940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0940ULL || rel >= 0xca0990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0990 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_ca0990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0990ULL || rel >= 0xca0a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0a40 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_ca0a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0a40ULL || rel >= 0xca0af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0af0 size=80 callers=0 calls=0
*/
void sub_ca0af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0af0ULL || rel >= 0xca0b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0b40 size=80 callers=0 calls=0
*/
void sub_ca0b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0b40ULL || rel >= 0xca0b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0b90 size=240 callers=12 calls=1
   calls: sub_c657d0
*/
void sub_ca0b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0b90ULL || rel >= 0xca0c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0c80 size=160 callers=3 calls=1
   calls: sub_5e2350
*/
void sub_ca0c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0c80ULL || rel >= 0xca0d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0d20 size=208 callers=0 calls=1
   calls: sub_13b1c90
*/
void sub_ca0d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0d20ULL || rel >= 0xca0df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca0df0 size=1536 callers=1 calls=13
   calls: sub_116bb10, sub_116bb80, sub_5cfad0, sub_65d220, sub_b4c060, sub_b95d30, sub_ca13f0, sub_ca1620, sub_ca1b20, sub_ca1d80, sub_ca1f00, sub_ca2240
   ... +1 more
*/
void sub_ca0df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0df0ULL || rel >= 0xca13f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca13f0 size=560 callers=1 calls=5
   calls: fi1001_dowsingwait01_loop, sub_59b2e0, sub_b4a5e0, sub_d23150, sub_d231e0
*/
void sub_ca13f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca13f0ULL || rel >= 0xca1620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca1620 size=1280 callers=1 calls=10
   calls: sub_116bb10, sub_116bb80, sub_59a520, sub_9733f0, sub_b33a30, sub_b4a5e0, sub_b4c060, sub_b95d30, sub_b963f0, sub_d24480
*/
void sub_ca1620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca1620ULL || rel >= 0xca1b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca1b20 size=608 callers=2 calls=5
   calls: sub_13b1ba0, sub_59b2e0, sub_b4a5e0, sub_d231e0, sub_d23d00
*/
void sub_ca1b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca1b20ULL || rel >= 0xca1d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca1d80 size=384 callers=1 calls=5
   calls: sub_116b660, sub_116b910, sub_13b1ba0, sub_d4fb90, sub_d4fba0
*/
void sub_ca1d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca1d80ULL || rel >= 0xca1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca1f00 size=832 callers=1 calls=8
   calls: sub_59b250, sub_5b92f0, sub_5cfad0, sub_b4a5e0, sub_d231e0, sub_d237f0, sub_d23a70, sub_d24480
*/
void sub_ca1f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca1f00ULL || rel >= 0xca2240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2240 size=480 callers=1 calls=6
   calls: sub_59a520, sub_b33a30, sub_b4a5e0, sub_b4c060, sub_c9e5f0, sub_ca0b90
*/
void sub_ca2240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2240ULL || rel >= 0xca2420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2420 size=16 callers=0 calls=0
*/
void sub_ca2420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2420ULL || rel >= 0xca2430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2430 size=16 callers=1 calls=0
*/
void sub_ca2430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2430ULL || rel >= 0xca2440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2440 size=192 callers=2 calls=3
   calls: sub_972c70, sub_990590, sub_ca2500
*/
void sub_ca2440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2440ULL || rel >= 0xca2500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2500 size=944 callers=3 calls=1
   calls: sub_972c70
*/
void sub_ca2500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2500ULL || rel >= 0xca28b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca28b0 size=144 callers=2 calls=2
   calls: sub_972c70, sub_ca2500
*/
void sub_ca28b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca28b0ULL || rel >= 0xca2940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2940 size=80 callers=2 calls=1
   calls: sub_ca2500
*/
void sub_ca2940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2940ULL || rel >= 0xca2990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2990 size=192 callers=0 calls=0
*/
void sub_ca2990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2990ULL || rel >= 0xca2a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2a50 size=192 callers=0 calls=0
*/
void sub_ca2a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2a50ULL || rel >= 0xca2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2b10 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_ca2b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2b10ULL || rel >= 0xca2bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2bc0 size=192 callers=0 calls=0
*/
void sub_ca2bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2bc0ULL || rel >= 0xca2c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2c80 size=192 callers=0 calls=0
*/
void sub_ca2c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2c80ULL || rel >= 0xca2d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2d40 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_ca2d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2d40ULL || rel >= 0xca2df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2df0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_ca2df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2df0ULL || rel >= 0xca2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2ea0 size=192 callers=0 calls=0
*/
void sub_ca2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2ea0ULL || rel >= 0xca2f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca2f60 size=192 callers=0 calls=0
*/
void sub_ca2f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca2f60ULL || rel >= 0xca3020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca3020 size=80 callers=2 calls=1
   calls: sub_ca0c80
*/
void sub_ca3020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca3020ULL || rel >= 0xca3070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca3070 size=624 callers=0 calls=6
   calls: sub_13b1c90, sub_13c9150, sub_b4c060, sub_ca0df0, sub_d27000, sub_d27650
*/
void sub_ca3070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca3070ULL || rel >= 0xca32e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca32e0 size=16 callers=0 calls=0
*/
void sub_ca32e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca32e0ULL || rel >= 0xca32f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca32f0 size=992 callers=0 calls=7
   calls: sub_59a520, sub_59a540, sub_b33a30, sub_b4a5e0, sub_b4c060, sub_ca2430, sub_d24480
*/
void sub_ca32f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca32f0ULL || rel >= 0xca36d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca36d0 size=192 callers=0 calls=0
*/
void sub_ca36d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca36d0ULL || rel >= 0xca3790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca3790 size=176 callers=0 calls=1
   calls: sub_ca3ca0
*/
void sub_ca3790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca3790ULL || rel >= 0xca3840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca3840 size=192 callers=0 calls=0
*/
void sub_ca3840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca3840ULL || rel >= 0xca3900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca3900 size=192 callers=0 calls=0
*/
void sub_ca3900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca3900ULL || rel >= 0xca39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca39c0 size=176 callers=0 calls=1
   calls: sub_ca3ca0
*/
void sub_ca39c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca39c0ULL || rel >= 0xca3a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca3a70 size=176 callers=0 calls=1
   calls: sub_ca3ca0
*/
void sub_ca3a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca3a70ULL || rel >= 0xca3b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca3b20 size=192 callers=0 calls=0
*/
void sub_ca3b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca3b20ULL || rel >= 0xca3be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca3be0 size=192 callers=0 calls=0
*/
void sub_ca3be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca3be0ULL || rel >= 0xca3ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca3ca0 size=304 callers=3 calls=0
*/
void sub_ca3ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca3ca0ULL || rel >= 0xca3dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca3dd0 size=704 callers=1 calls=5
   calls: sub_783bd0, sub_ca4090, sub_ca4f00, sub_ca4fe0, tower_trainer
*/
void sub_ca3dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca3dd0ULL || rel >= 0xca4090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca4090 size=304 callers=1 calls=1
   calls: sub_783bd0
*/
void sub_ca4090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca4090ULL || rel >= 0xca41c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca41c0 size=272 callers=0 calls=0
*/
void sub_ca41c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca41c0ULL || rel >= 0xca42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca42d0 size=112 callers=1 calls=0
*/
void sub_ca42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca42d0ULL || rel >= 0xca4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca4340 size=16 callers=0 calls=0
*/
void sub_ca4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca4340ULL || rel >= 0xca4350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca4350 size=16 callers=0 calls=0
*/
void sub_ca4350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca4350ULL || rel >= 0xca4360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca4360 size=16 callers=0 calls=0
*/
void sub_ca4360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca4360ULL || rel >= 0xca4370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca4370 size=64 callers=2 calls=1
   calls: sub_de52e0
*/
void sub_ca4370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca4370ULL || rel >= 0xca43b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca43b0 size=512 callers=2 calls=6
   calls: sub_134c510, sub_134c530, sub_134c550, sub_134cad0, sub_ca45b0, tower_tr__03d
*/
void sub_ca43b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca43b0ULL || rel >= 0xca45b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca45b0 size=224 callers=3 calls=5
   calls: sub_134c550, sub_134c610, sub_134c630, sub_134cad0, sub_134cb00
*/
void sub_ca45b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca45b0ULL || rel >= 0xca4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca4690 size=528 callers=1 calls=5
   calls: mes_tower_tr__03d_03, sub_134c510, sub_762d70, sub_762d90, sub_de5a50
   ref: tower_tr_%03d
*/
void tower_tr__03d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca4690ULL || rel >= 0xca48a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca48a0 size=288 callers=1 calls=1
   calls: sub_d2aa70
   ref: TOWER_TRAINER_%d
*/
void TOWER_TRAINER__d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca48a0ULL || rel >= 0xca49c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca49c0 size=176 callers=2 calls=3
   calls: sub_134c550, sub_134c610, sub_134c630
*/
void sub_ca49c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca49c0ULL || rel >= 0xca4a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca4a70 size=208 callers=1 calls=1
   calls: sub_134c510
   ref: mes_tower_tr_%03d_00
*/
void mes_tower_tr__03d_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca4a70ULL || rel >= 0xca4b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca4b40 size=720 callers=2 calls=4
   calls: sub_12fa580, sub_134f3e0, sub_134f490, sub_769050
   ref: KNOCKOUT_BATTLEHOUSEBOSS
*/
void KNOCKOUT_BATTLEHOUSEBOSS(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca4b40ULL || rel >= 0xca4e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca4e10 size=16 callers=2 calls=0
*/
void sub_ca4e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca4e10ULL || rel >= 0xca4e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca4e20 size=16 callers=2 calls=0
*/
void sub_ca4e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca4e20ULL || rel >= 0xca4e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca4e30 size=208 callers=1 calls=3
   calls: sub_134c550, sub_ec9070, sub_ec9270
   ref: Play_bgm_or_vs_vs22
*/
void Play_bgm_or_vs_vs22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca4e30ULL || rel >= 0xca4f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca4f00 size=224 callers=1 calls=1
   calls: sub_de4f80
*/
void sub_ca4f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca4f00ULL || rel >= 0xca4fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca4fe0 size=224 callers=3 calls=1
   calls: sub_ec8200
*/
void sub_ca4fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca4fe0ULL || rel >= 0xca50c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca50c0 size=128 callers=0 calls=0
*/
void sub_ca50c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca50c0ULL || rel >= 0xca5140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca5140 size=368 callers=0 calls=0
*/
void sub_ca5140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca5140ULL || rel >= 0xca52b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca52b0 size=832 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca52b0ULL || rel >= 0xca55f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca55f0 size=1536 callers=1 calls=4
   calls: sub_ca5bf0, sub_cacce0, sub_cae750, sub_caf550
*/
void sub_ca55f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca55f0ULL || rel >= 0xca5bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca5bf0 size=592 callers=1 calls=0
*/
void sub_ca5bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca5bf0ULL || rel >= 0xca5e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca5e40 size=384 callers=0 calls=1
   calls: sub_ca6610
*/
void sub_ca5e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca5e40ULL || rel >= 0xca5fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca5fc0 size=80 callers=0 calls=0
*/
void sub_ca5fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca5fc0ULL || rel >= 0xca6010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca6010 size=16 callers=0 calls=0
*/
void sub_ca6010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca6010ULL || rel >= 0xca6020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca6020 size=1312 callers=1 calls=13
   calls: sub_5cfaf0, sub_5e3980, sub_c50a60, sub_ca6540, sub_ca6610, sub_ca6910, sub_ca69c0, sub_cacf50, sub_cad140, sub_caeb80, sub_caed70, sub_caf7c0
   ... +1 more
   ref: _camarea
   ref: _scrollstop
   ref: bin/field/model/
   ref: .gfbcol
*/
void scrollstop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca6020ULL || rel >= 0xca6540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca6540 size=208 callers=2 calls=1
   calls: sub_d0c0
*/
void sub_ca6540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca6540ULL || rel >= 0xca6610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca6610 size=768 callers=4 calls=3
   calls: sub_cacec0, sub_caeaa0, sub_caf730
*/
void sub_ca6610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca6610ULL || rel >= 0xca6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca6910 size=176 callers=3 calls=1
   calls: sub_d0c0
*/
void sub_ca6910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca6910ULL || rel >= 0xca69c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca69c0 size=176 callers=3 calls=1
   calls: sub_d0c0
*/
void sub_ca69c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca69c0ULL || rel >= 0xca6a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca6a70 size=192 callers=1 calls=0
*/
void sub_ca6a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca6a70ULL || rel >= 0xca6b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca6b30 size=528 callers=1 calls=6
   calls: sub_5cfad0, sub_794330, sub_969d40, sub_ca6d40, sub_ca7030, sub_ca7130
   ref: Set_State_Off
*/
void Set_State_Off(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca6b30ULL || rel >= 0xca6d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca6d40 size=752 callers=1 calls=2
   calls: sub_969d40, sub_cacbf0
*/
void sub_ca6d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca6d40ULL || rel >= 0xca7030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca7030 size=256 callers=1 calls=2
   calls: GfMapCamArea_Polygon, sub_caed80
*/
void sub_ca7030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca7030ULL || rel >= 0xca7130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca7130 size=608 callers=1 calls=6
   calls: sub_946e90, sub_c9dcd0, sub_ca86e0, sub_ca92c0, sub_caefc0, sub_d36930
*/
void sub_ca7130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca7130ULL || rel >= 0xca7390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca7390 size=192 callers=2 calls=2
   calls: sub_5cfad0, sub_794330
   ref: Set_State_On
   ref: Set_State_Off
*/
void Set_State_Off_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca7390ULL || rel >= 0xca7450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca7450 size=2288 callers=2 calls=1
   calls: sub_ca8060
   ref: GfMapCamArea_Polygon
*/
void GfMapCamArea_Polygon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca7450ULL || rel >= 0xca7d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca7d40 size=16 callers=1 calls=0
*/
void sub_ca7d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca7d40ULL || rel >= 0xca7d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca7d50 size=272 callers=0 calls=4
   calls: sub_5cfad0, sub_794330, sub_946e90, sub_caadc0
   ref: Set_State_Off
*/
void Set_State_Off_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca7d50ULL || rel >= 0xca7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca7e60 size=112 callers=1 calls=2
   calls: sub_ca7ed0, sub_cac600
*/
void sub_ca7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca7e60ULL || rel >= 0xca7ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca7ed0 size=400 callers=1 calls=1
   calls: sub_969d40
*/
void sub_ca7ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca7ed0ULL || rel >= 0xca8060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca8060 size=1296 callers=1 calls=3
   calls: sub_135a1a0, sub_caf040, sub_caf180
*/
void sub_ca8060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca8060ULL || rel >= 0xca8570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca8570 size=48 callers=7 calls=1
   calls: sub_ca85a0
*/
void sub_ca8570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca8570ULL || rel >= 0xca85a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca85a0 size=320 callers=1 calls=1
   calls: sub_946e90
*/
void sub_ca85a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca85a0ULL || rel >= 0xca86e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca86e0 size=1856 callers=2 calls=8
   calls: sub_946e90, sub_c9dcd0, sub_cad150, sub_caef10, sub_caf250, sub_d35b20, sub_d36820, sub_d369a0
*/
void sub_ca86e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca86e0ULL || rel >= 0xca8e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca8e20 size=80 callers=12 calls=0
*/
void sub_ca8e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca8e20ULL || rel >= 0xca8e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca8e70 size=608 callers=1 calls=2
   calls: sub_946e90, sub_969d40
*/
void sub_ca8e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca8e70ULL || rel >= 0xca90d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca90d0 size=480 callers=23 calls=1
   calls: sub_969d40
*/
void sub_ca90d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca90d0ULL || rel >= 0xca92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca92b0 size=16 callers=1 calls=0
*/
void sub_ca92b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca92b0ULL || rel >= 0xca92c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca92c0 size=800 callers=3 calls=6
   calls: sub_946e90, sub_ca95f0, sub_ca9e40, sub_caef10, sub_caf250, sub_d369b0
*/
void sub_ca92c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca92c0ULL || rel >= 0xca95e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca95e0 size=16 callers=0 calls=0
*/
void sub_ca95e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca95e0ULL || rel >= 0xca95f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca95f0 size=2128 callers=1 calls=4
   calls: sub_946e90, sub_c816a0, sub_c81770, sub_caf9c0
*/
void sub_ca95f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca95f0ULL || rel >= 0xca9e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ca9e40 size=1616 callers=1 calls=9
   calls: sub_946e90, sub_c816a0, sub_c81770, sub_c81850, sub_caa490, sub_d368d0, sub_d369c0, sub_d36a30, sub_d36a60
*/
void sub_ca9e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca9e40ULL || rel >= 0xcaa490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caa490 size=784 callers=1 calls=2
   calls: sub_c81620, sub_c816a0
*/
void sub_caa490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaa490ULL || rel >= 0xcaa7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caa7a0 size=16 callers=1 calls=0
*/
void sub_caa7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaa7a0ULL || rel >= 0xcaa7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caa7b0 size=208 callers=2 calls=2
   calls: Set_State_On, sub_caaa80
*/
void sub_caa7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaa7b0ULL || rel >= 0xcaa880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caa880 size=512 callers=1 calls=8
   calls: sub_13ed150, sub_14dff50, sub_5cfad0, sub_794330, sub_946e90, sub_c9dcd0, sub_d36a70, sub_d36bf0
   ref: Set_State_On
*/
void Set_State_On(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaa880ULL || rel >= 0xcaaa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caaa80 size=832 callers=1 calls=4
   calls: sub_13c9e50, sub_946e90, sub_c9dcd0, sub_d36a70
*/
void sub_caaa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaaa80ULL || rel >= 0xcaadc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caadc0 size=336 callers=4 calls=5
   calls: sub_13ed150, sub_14e0050, sub_946e90, sub_c9dcd0, sub_d36aa0
*/
void sub_caadc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaadc0ULL || rel >= 0xcaaf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caaf10 size=432 callers=1 calls=2
   calls: sub_14e0150, sub_ca8e70
*/
void sub_caaf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaaf10ULL || rel >= 0xcab0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cab0c0 size=112 callers=1 calls=1
   calls: sub_14e0250
*/
void sub_cab0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcab0c0ULL || rel >= 0xcab130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cab130 size=1408 callers=22 calls=3
   calls: sub_946e90, sub_969d40, sub_cab6b0
*/
void sub_cab130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcab130ULL || rel >= 0xcab6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cab6b0 size=864 callers=1 calls=5
   calls: sub_946e90, sub_969d40, sub_972c70, sub_d0dfd0, sub_d369b0
*/
void sub_cab6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcab6b0ULL || rel >= 0xcaba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caba10 size=368 callers=17 calls=2
   calls: sub_969d40, sub_d0e600
*/
void sub_caba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaba10ULL || rel >= 0xcabb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cabb80 size=2320 callers=8 calls=14
   calls: sub_13c9e50, sub_946e90, sub_969d40, sub_971950, sub_c9dcd0, sub_ca86e0, sub_ca92c0, sub_ce9b20, sub_d0e090, sub_d0e750, sub_d36900, sub_d36930
   ... +2 more
*/
void sub_cabb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcabb80ULL || rel >= 0xcac490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cac490 size=368 callers=1 calls=1
   calls: sub_969d40
*/
void sub_cac490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcac490ULL || rel >= 0xcac600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cac600 size=432 callers=1 calls=2
   calls: sub_946e90, sub_969d40
*/
void sub_cac600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcac600ULL || rel >= 0xcac7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cac7b0 size=240 callers=0 calls=0
*/
void sub_cac7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcac7b0ULL || rel >= 0xcac8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cac8a0 size=80 callers=0 calls=0
*/
void sub_cac8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcac8a0ULL || rel >= 0xcac8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cac8f0 size=240 callers=0 calls=0
*/
void sub_cac8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcac8f0ULL || rel >= 0xcac9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cac9e0 size=16 callers=0 calls=0
*/
void sub_cac9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcac9e0ULL || rel >= 0xcac9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cac9f0 size=240 callers=0 calls=0
*/
void sub_cac9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcac9f0ULL || rel >= 0xcacae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cacae0 size=16 callers=0 calls=0
*/
void sub_cacae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcacae0ULL || rel >= 0xcacaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cacaf0 size=240 callers=0 calls=0
*/
void sub_cacaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcacaf0ULL || rel >= 0xcacbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cacbe0 size=16 callers=0 calls=0
*/
void sub_cacbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcacbe0ULL || rel >= 0xcacbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cacbf0 size=240 callers=4 calls=1
   calls: sub_969d40
*/
void sub_cacbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcacbf0ULL || rel >= 0xcacce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cacce0 size=176 callers=1 calls=0
*/
void sub_cacce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcacce0ULL || rel >= 0xcacd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cacd90 size=304 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cacd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcacd90ULL || rel >= 0xcacec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cacec0 size=96 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_cacec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcacec0ULL || rel >= 0xcacf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cacf20 size=16 callers=0 calls=0
*/
void sub_cacf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcacf20ULL || rel >= 0xcacf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cacf30 size=16 callers=0 calls=0
*/
void sub_cacf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcacf30ULL || rel >= 0xcacf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cacf40 size=16 callers=0 calls=0
*/
void sub_cacf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcacf40ULL || rel >= 0xcacf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cacf50 size=16 callers=1 calls=0
*/
void sub_cacf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcacf50ULL || rel >= 0xcacf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cacf60 size=480 callers=0 calls=4
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_8c2c10
*/
void sub_cacf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcacf60ULL || rel >= 0xcad140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cad140 size=16 callers=1 calls=0
*/
void sub_cad140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcad140ULL || rel >= 0xcad150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cad150 size=5408 callers=1 calls=1
   calls: sub_cae670
*/
void sub_cad150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcad150ULL || rel >= 0xcae670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cae670 size=224 callers=7 calls=0
*/
void sub_cae670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcae670ULL || rel >= 0xcae750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cae750 size=368 callers=2 calls=2
   calls: sub_5c6990, sub_65d700
*/
void sub_cae750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcae750ULL || rel >= 0xcae8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cae8c0 size=64 callers=0 calls=0
*/
void sub_cae8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcae8c0ULL || rel >= 0xcae900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cae900 size=416 callers=0 calls=3
   calls: sub_5c6a10, sub_5c7ab0, sub_5e2bc0
*/
void sub_cae900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcae900ULL || rel >= 0xcaeaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caeaa0 size=176 callers=2 calls=2
   calls: sub_5c7ab0, sub_5e2bc0
*/
void sub_caeaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaeaa0ULL || rel >= 0xcaeb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caeb50 size=16 callers=0 calls=0
*/
void sub_caeb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaeb50ULL || rel >= 0xcaeb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caeb60 size=16 callers=0 calls=0
*/
void sub_caeb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaeb60ULL || rel >= 0xcaeb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caeb70 size=16 callers=0 calls=0
*/
void sub_caeb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaeb70ULL || rel >= 0xcaeb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caeb80 size=16 callers=2 calls=0
*/
void sub_caeb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaeb80ULL || rel >= 0xcaeb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caeb90 size=480 callers=0 calls=4
   calls: sub_5e26a0, sub_5e2930, sub_8c2c10, sub_c745f0
*/
void sub_caeb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaeb90ULL || rel >= 0xcaed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caed70 size=16 callers=2 calls=0
*/
void sub_caed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaed70ULL || rel >= 0xcaed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caed80 size=400 callers=2 calls=5
   calls: sub_5c6e60, sub_5c8220, sub_5c83e0, sub_5cbcf0, sub_5cbf10
*/
void sub_caed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaed80ULL || rel >= 0xcaef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caef10 size=176 callers=2 calls=3
   calls: sub_5c8dd0, sub_caf400, sub_caf460
*/
void sub_caef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaef10ULL || rel >= 0xcaefc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caefc0 size=128 callers=8 calls=0
*/
void sub_caefc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaefc0ULL || rel >= 0xcaf040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf040 size=320 callers=7 calls=1
   calls: sub_13facc0
*/
void sub_caf040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf040ULL || rel >= 0xcaf180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf180 size=208 callers=14 calls=0
*/
void sub_caf180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf180ULL || rel >= 0xcaf250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf250 size=432 callers=2 calls=0
*/
void sub_caf250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf250ULL || rel >= 0xcaf400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf400 size=96 callers=1 calls=1
   calls: sub_5c6830
*/
void sub_caf400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf400ULL || rel >= 0xcaf460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf460 size=16 callers=1 calls=0
*/
void sub_caf460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf460ULL || rel >= 0xcaf470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf470 size=48 callers=0 calls=1
   calls: sub_5c6850
*/
void sub_caf470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf470ULL || rel >= 0xcaf4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf4a0 size=112 callers=0 calls=1
   calls: sub_5c6870
*/
void sub_caf4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf4a0ULL || rel >= 0xcaf510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf510 size=64 callers=0 calls=0
*/
void sub_caf510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf510ULL || rel >= 0xcaf550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf550 size=176 callers=1 calls=0
*/
void sub_caf550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf550ULL || rel >= 0xcaf600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf600 size=304 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_caf600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf600ULL || rel >= 0xcaf730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf730 size=96 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_caf730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf730ULL || rel >= 0xcaf790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf790 size=16 callers=0 calls=0
*/
void sub_caf790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf790ULL || rel >= 0xcaf7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf7a0 size=16 callers=0 calls=0
*/
void sub_caf7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf7a0ULL || rel >= 0xcaf7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf7b0 size=16 callers=0 calls=0
*/
void sub_caf7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf7b0ULL || rel >= 0xcaf7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf7c0 size=16 callers=1 calls=0
*/
void sub_caf7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf7c0ULL || rel >= 0xcaf7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf7d0 size=480 callers=0 calls=4
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_8c2c10
*/
void sub_caf7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf7d0ULL || rel >= 0xcaf9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf9b0 size=16 callers=1 calls=0
*/
void sub_caf9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf9b0ULL || rel >= 0xcaf9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00caf9c0 size=800 callers=2 calls=0
*/
void sub_caf9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf9c0ULL || rel >= 0xcafce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cafce0 size=1584 callers=4 calls=6
   calls: sub_5db1b0, sub_5e2bc0, sub_64e510, sub_967240, sub_969be0, sub_cb10a0
*/
void sub_cafce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcafce0ULL || rel >= 0xcb0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb0310 size=752 callers=1 calls=3
   calls: sub_5e2bc0, sub_64e510, sub_64e980
*/
void sub_cb0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb0310ULL || rel >= 0xcb0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb0600 size=1008 callers=0 calls=8
   calls: sub_64ebb0, sub_64ece0, sub_967240, sub_cb0310, sub_ed30d0, sub_ed30f0, sub_ed3100, sub_ed3140
*/
void sub_cb0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb0600ULL || rel >= 0xcb09f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb09f0 size=16 callers=0 calls=0
*/
void sub_cb09f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb09f0ULL || rel >= 0xcb0a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb0a00 size=16 callers=0 calls=0
*/
void sub_cb0a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb0a00ULL || rel >= 0xcb0a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb0a10 size=208 callers=0 calls=0
*/
void sub_cb0a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb0a10ULL || rel >= 0xcb0ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb0ae0 size=208 callers=0 calls=0
*/
void sub_cb0ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb0ae0ULL || rel >= 0xcb0bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb0bb0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cb0bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb0bb0ULL || rel >= 0xcb0c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb0c20 size=208 callers=0 calls=0
*/
void sub_cb0c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb0c20ULL || rel >= 0xcb0cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb0cf0 size=208 callers=0 calls=0
*/
void sub_cb0cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb0cf0ULL || rel >= 0xcb0dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb0dc0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cb0dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb0dc0ULL || rel >= 0xcb0e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb0e30 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_cb0e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb0e30ULL || rel >= 0xcb0ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb0ea0 size=208 callers=0 calls=0
*/
void sub_cb0ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb0ea0ULL || rel >= 0xcb0f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb0f70 size=208 callers=0 calls=0
*/
void sub_cb0f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb0f70ULL || rel >= 0xcb1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb1040 size=48 callers=0 calls=0
*/
void sub_cb1040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb1040ULL || rel >= 0xcb1070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb1070 size=16 callers=0 calls=0
*/
void sub_cb1070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb1070ULL || rel >= 0xcb1080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb1080 size=16 callers=0 calls=0
*/
void sub_cb1080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb1080ULL || rel >= 0xcb1090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb1090 size=16 callers=0 calls=0
*/
void sub_cb1090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb1090ULL || rel >= 0xcb10a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb10a0 size=512 callers=3 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_cb10a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb10a0ULL || rel >= 0xcb12a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb12a0 size=16 callers=0 calls=0
*/
void sub_cb12a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb12a0ULL || rel >= 0xcb12b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb12b0 size=16 callers=0 calls=0
*/
void sub_cb12b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb12b0ULL || rel >= 0xcb12c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb12c0 size=16 callers=0 calls=0
*/
void sub_cb12c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb12c0ULL || rel >= 0xcb12d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb12d0 size=16 callers=0 calls=0
*/
void sub_cb12d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb12d0ULL || rel >= 0xcb12e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb12e0 size=304 callers=1 calls=1
   calls: sub_cb5040
*/
void sub_cb12e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb12e0ULL || rel >= 0xcb1410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb1410 size=128 callers=0 calls=0
*/
void sub_cb1410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb1410ULL || rel >= 0xcb1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb1490 size=128 callers=0 calls=0
*/
void sub_cb1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb1490ULL || rel >= 0xcb1510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb1510 size=128 callers=0 calls=0
*/
void sub_cb1510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb1510ULL || rel >= 0xcb1590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb1590 size=128 callers=0 calls=0
*/
void sub_cb1590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb1590ULL || rel >= 0xcb1610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb1610 size=32 callers=3 calls=0
*/
void sub_cb1610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb1610ULL || rel >= 0xcb1630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb1630 size=528 callers=2 calls=2
   calls: sub_ce0300, sub_ce0400
*/
void sub_cb1630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb1630ULL || rel >= 0xcb1840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb1840 size=2000 callers=1 calls=12
   calls: sub_972c70, sub_cb27f0, sub_cdd740, sub_cddd10, sub_cdef40, sub_ce0300, sub_ce0400, sub_d25c50, sub_d553f0, sub_d555e0, sub_d55870, sub_d63270
*/
void sub_cb1840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb1840ULL || rel >= 0xcb2010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb2010 size=208 callers=1 calls=4
   calls: sub_13ed240, sub_5c68f0, sub_cdd740, sub_cde010
*/
void sub_cb2010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb2010ULL || rel >= 0xcb20e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb20e0 size=1808 callers=2 calls=7
   calls: sub_13ed240, sub_5c68f0, sub_cb27f0, sub_cdd740, sub_cdef40, sub_d25c50, sub_d63270
*/
void sub_cb20e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb20e0ULL || rel >= 0xcb27f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb27f0 size=544 callers=2 calls=1
   calls: sub_cb2f10
*/
void sub_cb27f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb27f0ULL || rel >= 0xcb2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb2a10 size=832 callers=1 calls=5
   calls: sub_13ed240, sub_5c68f0, sub_cdd740, sub_cdef40, sub_d63270
*/
void sub_cb2a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb2a10ULL || rel >= 0xcb2d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb2d50 size=272 callers=2 calls=6
   calls: sub_13ed240, sub_5c68f0, sub_cdd740, sub_cdde60, sub_cde2f0, sub_cdfeb0
*/
void sub_cb2d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb2d50ULL || rel >= 0xcb2e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb2e60 size=176 callers=2 calls=1
   calls: sub_135a1a0
*/
void sub_cb2e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb2e60ULL || rel >= 0xcb2f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb2f10 size=416 callers=17 calls=0
*/
void sub_cb2f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb2f10ULL || rel >= 0xcb30b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb30b0 size=336 callers=1 calls=1
   calls: sub_cb3200
*/
void sub_cb30b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb30b0ULL || rel >= 0xcb3200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb3200 size=400 callers=3 calls=1
   calls: sub_cb2f10
*/
void sub_cb3200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb3200ULL || rel >= 0xcb3390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb3390 size=64 callers=1 calls=1
   calls: sub_d63270
*/
void sub_cb3390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb3390ULL || rel >= 0xcb33d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb33d0 size=32 callers=8 calls=0
*/
void sub_cb33d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb33d0ULL || rel >= 0xcb33f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb33f0 size=80 callers=1 calls=0
*/
void sub_cb33f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb33f0ULL || rel >= 0xcb3440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb3440 size=32 callers=1 calls=0
*/
void sub_cb3440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb3440ULL || rel >= 0xcb3460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb3460 size=16 callers=5 calls=0
*/
void sub_cb3460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb3460ULL || rel >= 0xcb3470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb3470 size=32 callers=1 calls=0
*/
void sub_cb3470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb3470ULL || rel >= 0xcb3490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb3490 size=736 callers=1 calls=5
   calls: sub_13f6520, sub_5cfaf0, sub_5e7a30, sub_cb2f10, sub_cb3770
*/
void sub_cb3490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb3490ULL || rel >= 0xcb3770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb3770 size=1136 callers=2 calls=4
   calls: sub_13f6520, sub_5cfaf0, sub_5e7a30, sub_e90870
*/
void sub_cb3770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb3770ULL || rel >= 0xcb3be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb3be0 size=1024 callers=1 calls=2
   calls: sub_cb3200, sub_cb3770
*/
void sub_cb3be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb3be0ULL || rel >= 0xcb3fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb3fe0 size=592 callers=1 calls=2
   calls: sub_cb2f10, sub_cb4230
*/
void sub_cb3fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb3fe0ULL || rel >= 0xcb4230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb4230 size=2448 callers=2 calls=0
*/
void sub_cb4230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb4230ULL || rel >= 0xcb4bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb4bc0 size=1152 callers=1 calls=2
   calls: sub_cb3200, sub_cb4230
*/
void sub_cb4bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb4bc0ULL || rel >= 0xcb5040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb5040 size=224 callers=3 calls=1
   calls: sub_cdd1d0
*/
void sub_cb5040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb5040ULL || rel >= 0xcb5120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb5120 size=368 callers=0 calls=0
*/
void sub_cb5120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb5120ULL || rel >= 0xcb5290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb5290 size=464 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb5290ULL || rel >= 0xcb5460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb5460 size=608 callers=1 calls=2
   calls: sub_cb61b0, sub_cb69c0
*/
void sub_cb5460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb5460ULL || rel >= 0xcb56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb56c0 size=224 callers=0 calls=2
   calls: sub_cb6390, sub_cb6bc0
*/
void sub_cb56c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb56c0ULL || rel >= 0xcb57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb57a0 size=16 callers=0 calls=0
*/
void sub_cb57a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb57a0ULL || rel >= 0xcb57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb57b0 size=784 callers=1 calls=12
   calls: sub_5cfaf0, sub_5e3980, sub_c50a60, sub_ca6540, sub_ca6910, sub_ca69c0, sub_cb6390, sub_cb6420, sub_cb6610, sub_cb6bc0, sub_cb6c60, sub_cb6e50
   ref: bin/field/model/
   ref: .gfbcol
   ref: _sndarea
*/
void sndarea(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb57b0ULL || rel >= 0xcb5ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb5ac0 size=80 callers=2 calls=2
   calls: sub_cb6390, sub_cb6bc0
*/
void sub_cb5ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb5ac0ULL || rel >= 0xcb5b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb5b10 size=96 callers=1 calls=0
*/
void sub_cb5b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb5b10ULL || rel >= 0xcb5b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb5b70 size=80 callers=1 calls=1
   calls: sub_cb6e60
*/
void sub_cb5b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb5b70ULL || rel >= 0xcb5bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb5bc0 size=16 callers=1 calls=0
*/
void sub_cb5bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb5bc0ULL || rel >= 0xcb5bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb5bd0 size=16 callers=1 calls=0
*/
void sub_cb5bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb5bd0ULL || rel >= 0xcb5be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb5be0 size=1488 callers=1 calls=5
   calls: sub_794330, sub_7943f0, sub_cb6620, sub_cb6ff0, sub_d25bd0
   ref: Corridor
*/
void Corridor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb5be0ULL || rel >= 0xcb61b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb61b0 size=176 callers=1 calls=0
*/
void sub_cb61b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb61b0ULL || rel >= 0xcb6260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6260 size=304 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cb6260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6260ULL || rel >= 0xcb6390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6390 size=96 callers=3 calls=1
   calls: sub_5e2bc0
*/
void sub_cb6390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6390ULL || rel >= 0xcb63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb63f0 size=16 callers=0 calls=0
*/
void sub_cb63f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb63f0ULL || rel >= 0xcb6400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6400 size=16 callers=0 calls=0
*/
void sub_cb6400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6400ULL || rel >= 0xcb6410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6410 size=16 callers=0 calls=0
*/
void sub_cb6410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6410ULL || rel >= 0xcb6420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6420 size=16 callers=1 calls=0
*/
void sub_cb6420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6420ULL || rel >= 0xcb6430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6430 size=480 callers=0 calls=4
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_8c2c10
*/
void sub_cb6430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6430ULL || rel >= 0xcb6610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6610 size=16 callers=1 calls=0
*/
void sub_cb6610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6610ULL || rel >= 0xcb6620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6620 size=928 callers=1 calls=0
*/
void sub_cb6620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6620ULL || rel >= 0xcb69c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb69c0 size=192 callers=1 calls=1
   calls: sub_5c6990
*/
void sub_cb69c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb69c0ULL || rel >= 0xcb6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6a80 size=320 callers=0 calls=3
   calls: sub_5c6a10, sub_5c7ab0, sub_5e2bc0
*/
void sub_cb6a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6a80ULL || rel >= 0xcb6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6bc0 size=112 callers=3 calls=2
   calls: sub_5c7ab0, sub_5e2bc0
*/
void sub_cb6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6bc0ULL || rel >= 0xcb6c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6c30 size=16 callers=0 calls=0
*/
void sub_cb6c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6c30ULL || rel >= 0xcb6c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6c40 size=16 callers=0 calls=0
*/
void sub_cb6c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6c40ULL || rel >= 0xcb6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6c50 size=16 callers=0 calls=0
*/
void sub_cb6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6c50ULL || rel >= 0xcb6c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6c60 size=16 callers=1 calls=0
*/
void sub_cb6c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6c60ULL || rel >= 0xcb6c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6c70 size=480 callers=0 calls=4
   calls: sub_5e26a0, sub_5e2930, sub_8c2c10, sub_c745f0
*/
void sub_cb6c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6c70ULL || rel >= 0xcb6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6e50 size=16 callers=1 calls=0
*/
void sub_cb6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6e50ULL || rel >= 0xcb6e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6e60 size=400 callers=1 calls=5
   calls: sub_5c6e60, sub_5c8220, sub_5c83e0, sub_5cbcf0, sub_5cbf10
*/
void sub_cb6e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6e60ULL || rel >= 0xcb6ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb6ff0 size=176 callers=1 calls=3
   calls: sub_5c8dd0, sub_cb70a0, sub_cb7100
*/
void sub_cb6ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb6ff0ULL || rel >= 0xcb70a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb70a0 size=96 callers=1 calls=1
   calls: sub_5c6830
*/
void sub_cb70a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb70a0ULL || rel >= 0xcb7100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb7100 size=16 callers=1 calls=0
*/
void sub_cb7100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb7100ULL || rel >= 0xcb7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb7110 size=48 callers=0 calls=1
   calls: sub_5c6850
*/
void sub_cb7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb7110ULL || rel >= 0xcb7140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb7140 size=112 callers=0 calls=1
   calls: sub_5c6870
*/
void sub_cb7140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb7140ULL || rel >= 0xcb71b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb71b0 size=64 callers=0 calls=0
*/
void sub_cb71b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb71b0ULL || rel >= 0xcb71f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb71f0 size=368 callers=0 calls=0
*/
void sub_cb71f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb71f0ULL || rel >= 0xcb7360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb7360 size=784 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb7360ULL || rel >= 0xcb7670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb7670 size=672 callers=1 calls=6
   calls: sub_65d700, sub_c60e50, sub_c66cc0, sub_cb7910, sub_cb7ae0, sub_cb7cc0
*/
void sub_cb7670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb7670ULL || rel >= 0xcb7910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb7910 size=464 callers=1 calls=0
*/
void sub_cb7910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb7910ULL || rel >= 0xcb7ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb7ae0 size=480 callers=1 calls=0
*/
void sub_cb7ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb7ae0ULL || rel >= 0xcb7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb7cc0 size=352 callers=1 calls=0
*/
void sub_cb7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb7cc0ULL || rel >= 0xcb7e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb7e20 size=288 callers=0 calls=1
   calls: sub_cc9900
*/
void sub_cb7e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb7e20ULL || rel >= 0xcb7f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb7f40 size=2592 callers=1 calls=6
   calls: PcRecovery, sub_5cfaf0, sub_5cff50, sub_5e6770, sub_c7aaf0, sub_e88f20
*/
void sub_cb7f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb7f40ULL || rel >= 0xcb8960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cb8960 size=22848 callers=1 calls=45
   calls: sub_1c0, sub_5cfaf0, sub_5e6770, sub_5e7a30, sub_cc2460, sub_cc25f0, sub_cc2780, sub_cc2910, sub_cc2aa0, sub_cc2c30, sub_cc2dc0, sub_cc2f50
   ... +33 more
   ref: _BirthDay
   ref: _PcRecovery
   ref: %s%s%02d
   ref: _kinoko_
*/
void PcRecovery(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb8960ULL || rel >= 0xcbe2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cbe2a0 size=1696 callers=1 calls=10
   calls: sub_5cfaf0, sub_5e2bc0, sub_c4f500, sub_c4fc80, sub_c50a60, sub_cbe940, sub_cbea30, sub_cbeb20, sub_cbec10, sub_e8f5d0
   ref: bin/archive/field/area/other/
   ref: bin/archive/field/area/shader/
   ref: bin/archive/field/area/texture/
   ref: .gfpak
*/
void unnamed_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcbe2a0ULL || rel >= 0xcbe940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cbe940 size=240 callers=1 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_cbe940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcbe940ULL || rel >= 0xcbea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cbea30 size=240 callers=1 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_cbea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcbea30ULL || rel >= 0xcbeb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cbeb20 size=240 callers=2 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_cbeb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcbeb20ULL || rel >= 0xcbec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cbec10 size=1328 callers=1 calls=1
   calls: sub_e9ab60
*/
void sub_cbec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcbec10ULL || rel >= 0xcbf140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cbf140 size=32 callers=1 calls=0
*/
void sub_cbf140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcbf140ULL || rel >= 0xcbf160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cbf160 size=768 callers=1 calls=7
   calls: sub_5e2930, sub_5e2bc0, sub_5e3a50, sub_5e3a70, sub_62c2a0, sub_c50b30, sub_cbf460
*/
void sub_cbf160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcbf160ULL || rel >= 0xcbf460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cbf460 size=1328 callers=1 calls=1
   calls: sub_e9ab60
*/
void sub_cbf460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcbf460ULL || rel >= 0xcbf990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cbf990 size=32 callers=1 calls=0
*/
void sub_cbf990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcbf990ULL || rel >= 0xcbf9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cbf9b0 size=704 callers=1 calls=7
   calls: sub_5e2930, sub_5e2bc0, sub_5e3a50, sub_5e3a70, sub_c50b30, sub_cbfc70, sub_ec20
*/
void sub_cbf9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcbf9b0ULL || rel >= 0xcbfc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cbfc70 size=1328 callers=1 calls=1
   calls: sub_e9ab60
*/
void sub_cbfc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcbfc70ULL || rel >= 0xcc01a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc01a0 size=112 callers=1 calls=0
*/
void sub_cc01a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc01a0ULL || rel >= 0xcc0210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc0210 size=752 callers=1 calls=8
   calls: sub_13fcf70, sub_5dd790, sub_5e2930, sub_5e3980, sub_5e6180, sub_c49fc0, sub_c50a60, sub_cc9fd0
   ref: bin/field/param/terrain_draw_setting/%s.bin
*/
void unnamed_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc0210ULL || rel >= 0xcc0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc0500 size=192 callers=1 calls=1
   calls: sub_13fd6b0
*/
void sub_cc0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc0500ULL || rel >= 0xcc05c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc05c0 size=944 callers=1 calls=6
   calls: sub_c73830, sub_c73a20, sub_cc0970, sub_cc9810, sub_cca2b0, sub_cca440
*/
void sub_cc05c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc05c0ULL || rel >= 0xcc0970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc0970 size=400 callers=1 calls=2
   calls: sub_cca0a0, sub_ce3e80
*/
void sub_cc0970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc0970ULL || rel >= 0xcc0b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc0b00 size=880 callers=1 calls=5
   calls: sub_5cfaf0, sub_5e3870, sub_c801c0, sub_cbeb20, sub_cc0e70
   ref: bin/archive/field/area/other/
   ref: ShadowFadePow
   ref: ShadowFadeLength
   ref: .gfpak
*/
void ShadowFadeLength(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc0b00ULL || rel >= 0xcc0e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc0e70 size=448 callers=1 calls=3
   calls: sub_c792a0, sub_cca680, sub_e3c8b0
*/
void sub_cc0e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc0e70ULL || rel >= 0xcc1030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc1030 size=128 callers=1 calls=1
   calls: sub_c77bb0
*/
void sub_cc1030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc1030ULL || rel >= 0xcc10b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc10b0 size=432 callers=2 calls=1
   calls: sub_5e2bc0
*/
void sub_cc10b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc10b0ULL || rel >= 0xcc1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc1260 size=16 callers=1 calls=0
*/
void sub_cc1260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc1260ULL || rel >= 0xcc1270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc1270 size=544 callers=1 calls=3
   calls: sub_cc1490, sub_cc1740, sub_cc64a0
*/
void sub_cc1270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc1270ULL || rel >= 0xcc1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc1490 size=688 callers=1 calls=3
   calls: sub_cc64a0, sub_cc9810, sub_cdcb10
*/
void sub_cc1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc1490ULL || rel >= 0xcc1740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc1740 size=1776 callers=1 calls=3
   calls: sub_c68610, sub_c68970, sub_cdaec0
*/
void sub_cc1740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc1740ULL || rel >= 0xcc1e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc1e30 size=592 callers=2 calls=4
   calls: sub_139e050, sub_c60e90, sub_c9f940, sub_d25c50
*/
void sub_cc1e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc1e30ULL || rel >= 0xcc2080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc2080 size=208 callers=1 calls=1
   calls: sub_c60e90
*/
void sub_cc2080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc2080ULL || rel >= 0xcc2150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc2150 size=672 callers=1 calls=2
   calls: sub_cc9430, sub_cca990
*/
void sub_cc2150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc2150ULL || rel >= 0xcc23f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc23f0 size=112 callers=1 calls=0
*/
void sub_cc23f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc23f0ULL || rel >= 0xcc2460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc2460 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc2460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc2460ULL || rel >= 0xcc25f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc25f0 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc25f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc25f0ULL || rel >= 0xcc2780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc2780 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc2780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc2780ULL || rel >= 0xcc2910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc2910 size=400 callers=2 calls=1
   calls: sub_65d700
*/
void sub_cc2910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc2910ULL || rel >= 0xcc2aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc2aa0 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc2aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc2aa0ULL || rel >= 0xcc2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc2c30 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc2c30ULL || rel >= 0xcc2dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc2dc0 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc2dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc2dc0ULL || rel >= 0xcc2f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc2f50 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc2f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc2f50ULL || rel >= 0xcc30e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc30e0 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc30e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc30e0ULL || rel >= 0xcc3270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc3270 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc3270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc3270ULL || rel >= 0xcc3400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc3400 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc3400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc3400ULL || rel >= 0xcc3590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc3590 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc3590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc3590ULL || rel >= 0xcc3720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc3720 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc3720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc3720ULL || rel >= 0xcc38b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc38b0 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc38b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc38b0ULL || rel >= 0xcc3a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc3a40 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc3a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc3a40ULL || rel >= 0xcc3bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc3bd0 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc3bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc3bd0ULL || rel >= 0xcc3d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc3d60 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc3d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc3d60ULL || rel >= 0xcc3ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc3ef0 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc3ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc3ef0ULL || rel >= 0xcc4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc4080 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc4080ULL || rel >= 0xcc4210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc4210 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc4210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc4210ULL || rel >= 0xcc43a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc43a0 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc43a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc43a0ULL || rel >= 0xcc4530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc4530 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc4530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc4530ULL || rel >= 0xcc46c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc46c0 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc46c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc46c0ULL || rel >= 0xcc4850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc4850 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc4850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc4850ULL || rel >= 0xcc49e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc49e0 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc49e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc49e0ULL || rel >= 0xcc4b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc4b70 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc4b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc4b70ULL || rel >= 0xcc4d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc4d00 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc4d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc4d00ULL || rel >= 0xcc4e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc4e90 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc4e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc4e90ULL || rel >= 0xcc5020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc5020 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc5020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc5020ULL || rel >= 0xcc51b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc51b0 size=400 callers=3 calls=1
   calls: sub_65d700
*/
void sub_cc51b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc51b0ULL || rel >= 0xcc5340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc5340 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc5340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc5340ULL || rel >= 0xcc54d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc54d0 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc54d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc54d0ULL || rel >= 0xcc5660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc5660 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc5660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc5660ULL || rel >= 0xcc57f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc57f0 size=400 callers=1 calls=1
   calls: sub_65d700
*/
void sub_cc57f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc57f0ULL || rel >= 0xcc5980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc5980 size=288 callers=1 calls=1
   calls: sub_cc9900
*/
void sub_cc5980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc5980ULL || rel >= 0xcc5aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc5aa0 size=352 callers=1 calls=0
*/
void sub_cc5aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc5aa0ULL || rel >= 0xcc5c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc5c00 size=448 callers=1 calls=0
*/
void sub_cc5c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc5c00ULL || rel >= 0xcc5dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc5dc0 size=352 callers=1 calls=1
   calls: sub_cca990
*/
void sub_cc5dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc5dc0ULL || rel >= 0xcc5f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc5f20 size=720 callers=1 calls=2
   calls: sub_13fd790, sub_13fdae0
*/
void sub_cc5f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc5f20ULL || rel >= 0xcc61f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc61f0 size=368 callers=2 calls=1
   calls: sub_c68580
*/
void sub_cc61f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc61f0ULL || rel >= 0xcc6360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc6360 size=320 callers=2 calls=1
   calls: sub_13fd860
*/
void sub_cc6360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc6360ULL || rel >= 0xcc64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc64a0 size=288 callers=3 calls=1
   calls: sub_cc9810
*/
void sub_cc64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc64a0ULL || rel >= 0xcc65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc65c0 size=32 callers=2 calls=0
*/
void sub_cc65c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc65c0ULL || rel >= 0xcc65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc65e0 size=272 callers=1 calls=2
   calls: sub_13fd720, sub_c68570
*/
void sub_cc65e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc65e0ULL || rel >= 0xcc66f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc66f0 size=1536 callers=1 calls=10
   calls: a_wr0101_nest_hole_emitter, sub_969d40, sub_cacbf0, sub_cc6cf0, sub_cc6e80, sub_cc7010, sub_cc71a0, sub_cc7330, sub_cdbea0, sub_d52750
*/
void sub_cc66f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc66f0ULL || rel >= 0xcc6cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc6cf0 size=400 callers=1 calls=2
   calls: sub_cca0a0, sub_d526a0
*/
void sub_cc6cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc6cf0ULL || rel >= 0xcc6e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc6e80 size=400 callers=2 calls=2
   calls: sub_cca0a0, sub_ceadc0
*/
void sub_cc6e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc6e80ULL || rel >= 0xcc7010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc7010 size=400 callers=1 calls=2
   calls: sub_cca0a0, sub_ce7610
*/
void sub_cc7010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc7010ULL || rel >= 0xcc71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc71a0 size=400 callers=1 calls=2
   calls: sub_cca0a0, sub_d0db70
*/
void sub_cc71a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc71a0ULL || rel >= 0xcc7330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc7330 size=848 callers=2 calls=7
   calls: sub_13a6920, sub_969d40, sub_c68420, sub_cc7680, sub_cc9810, sub_cf0ed0, sub_e91ec0
*/
void sub_cc7330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc7330ULL || rel >= 0xcc7680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc7680 size=400 callers=1 calls=2
   calls: sub_cca0a0, sub_d3d600
*/
void sub_cc7680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc7680ULL || rel >= 0xcc7810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc7810 size=96 callers=3 calls=0
*/
void sub_cc7810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc7810ULL || rel >= 0xcc7870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc7870 size=272 callers=1 calls=2
   calls: sub_c737e0, sub_cc9810
*/
void sub_cc7870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc7870ULL || rel >= 0xcc7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc7980 size=128 callers=1 calls=3
   calls: s__02d_gfbprb, sub_969be0, sub_c50a60
*/
void sub_cc7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc7980ULL || rel >= 0xcc7a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc7a00 size=80 callers=1 calls=2
   calls: sub_969be0, sub_ce58c0
*/
void sub_cc7a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc7a00ULL || rel >= 0xcc7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc7a50 size=512 callers=1 calls=4
   calls: sub_13a6920, sub_969be0, sub_c79200, sub_ce5900
*/
void sub_cc7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc7a50ULL || rel >= 0xcc7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc7c50 size=192 callers=2 calls=1
   calls: sub_13fdb80
*/
void sub_cc7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc7c50ULL || rel >= 0xcc7d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc7d10 size=2160 callers=1 calls=7
   calls: sub_c60e90, sub_cdc0d0, sub_cdc200, sub_d06f80, sub_d07d60, sub_d546b0, sub_d55700
*/
void sub_cc7d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc7d10ULL || rel >= 0xcc8580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc8580 size=144 callers=1 calls=2
   calls: sub_c4fc80, sub_c7b0c0
*/
void sub_cc8580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc8580ULL || rel >= 0xcc8610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc8610 size=1568 callers=1 calls=7
   calls: sub_116b660, sub_116b910, sub_135ad00, sub_5e2930, sub_5e2bc0, sub_cc8c30, trainer_data__03d_2
*/
void sub_cc8610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc8610ULL || rel >= 0xcc8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc8c30 size=1328 callers=8 calls=1
   calls: sub_e9ab60
*/
void sub_cc8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc8c30ULL || rel >= 0xcc9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9160 size=96 callers=1 calls=0
*/
void sub_cc9160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9160ULL || rel >= 0xcc91c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc91c0 size=624 callers=1 calls=5
   calls: sub_b3abe0, sub_b4c080, sub_b617d0, sub_b6c3d0, sub_cdc7f0
*/
void sub_cc91c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc91c0ULL || rel >= 0xcc9430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9430 size=288 callers=1 calls=1
   calls: sub_cc9810
*/
void sub_cc9430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9430ULL || rel >= 0xcc9550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9550 size=688 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cc9550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9550ULL || rel >= 0xcc9800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9800 size=16 callers=0 calls=0
*/
void sub_cc9800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9800ULL || rel >= 0xcc9810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9810 size=240 callers=6 calls=1
   calls: sub_967240
*/
void sub_cc9810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9810ULL || rel >= 0xcc9900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9900 size=352 callers=3 calls=0
*/
void sub_cc9900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9900ULL || rel >= 0xcc9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9a60 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cc9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9a60ULL || rel >= 0xcc9b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9b20 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cc9b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9b20ULL || rel >= 0xcc9be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9be0 size=32 callers=0 calls=0
*/
void sub_cc9be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9be0ULL || rel >= 0xcc9c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9c00 size=48 callers=0 calls=0
*/
void sub_cc9c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9c00ULL || rel >= 0xcc9c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9c30 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cc9c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9c30ULL || rel >= 0xcc9cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9cf0 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cc9cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9cf0ULL || rel >= 0xcc9db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9db0 size=32 callers=0 calls=0
*/
void sub_cc9db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9db0ULL || rel >= 0xcc9dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9dd0 size=48 callers=0 calls=0
*/
void sub_cc9dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9dd0ULL || rel >= 0xcc9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9e00 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cc9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9e00ULL || rel >= 0xcc9ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9ec0 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_cc9ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9ec0ULL || rel >= 0xcc9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9f80 size=32 callers=0 calls=0
*/
void sub_cc9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9f80ULL || rel >= 0xcc9fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9fa0 size=48 callers=0 calls=0
*/
void sub_cc9fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9fa0ULL || rel >= 0xcc9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cc9fd0 size=208 callers=1 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_cc9fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9fd0ULL || rel >= 0xcca0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cca0a0 size=528 callers=50 calls=0
*/
void sub_cca0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcca0a0ULL || rel >= 0xcca2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cca2b0 size=400 callers=1 calls=2
   calls: sub_cca0a0, sub_d5f470
*/
void sub_cca2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcca2b0ULL || rel >= 0xcca440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cca440 size=576 callers=1 calls=0
*/
void sub_cca440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcca440ULL || rel >= 0xcca680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cca680 size=320 callers=1 calls=0
*/
void sub_cca680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcca680ULL || rel >= 0xcca7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cca7c0 size=464 callers=0 calls=0
*/
void sub_cca7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcca7c0ULL || rel >= 0xcca990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00cca990 size=448 callers=2 calls=0
*/
void sub_cca990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcca990ULL || rel >= 0xccab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ccab50 size=176 callers=0 calls=0
*/
void sub_ccab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xccab50ULL || rel >= 0xccac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ccac00 size=176 callers=0 calls=0
*/
void sub_ccac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xccac00ULL || rel >= 0xccacb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ccacb0 size=16 callers=0 calls=0
*/
void sub_ccacb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xccacb0ULL || rel >= 0xccacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ccacc0 size=16 callers=0 calls=0
*/
void sub_ccacc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xccacc0ULL || rel >= 0xccacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

