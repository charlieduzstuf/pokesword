/* main functions 00da7dd0..00ddb530 (108 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00da7dd0 size=96 callers=0 calls=1
   calls: sub_144a090
*/
void sub_da7dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7dd0ULL || rel >= 0xda7e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7e30 size=176 callers=0 calls=1
   calls: sub_135a3c0
*/
void sub_da7e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7e30ULL || rel >= 0xda7ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7ee0 size=16 callers=0 calls=0
*/
void sub_da7ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7ee0ULL || rel >= 0xda7ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7ef0 size=16 callers=0 calls=0
*/
void sub_da7ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7ef0ULL || rel >= 0xda7f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7f00 size=16 callers=0 calls=0
*/
void sub_da7f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7f00ULL || rel >= 0xda7f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7f10 size=304 callers=0 calls=0
*/
void sub_da7f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7f10ULL || rel >= 0xda8040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8040 size=224 callers=1 calls=2
   calls: sub_c60e50, sub_e9d130
*/
void sub_da8040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8040ULL || rel >= 0xda8120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8120 size=368 callers=0 calls=0
*/
void sub_da8120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8120ULL || rel >= 0xda8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8290 size=752 callers=0 calls=1
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
void skybox_01_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8290ULL || rel >= 0xda8580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8580 size=16 callers=0 calls=0
*/
void sub_da8580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8580ULL || rel >= 0xda8590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8590 size=16 callers=0 calls=0
*/
void sub_da8590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8590ULL || rel >= 0xda85a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da85a0 size=384 callers=0 calls=2
   calls: sub_13ed240, sub_d42e80
*/
void sub_da85a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda85a0ULL || rel >= 0xda8720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8720 size=16 callers=0 calls=0
*/
void sub_da8720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8720ULL || rel >= 0xda8730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8730 size=16 callers=0 calls=0
*/
void sub_da8730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8730ULL || rel >= 0xda8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8740 size=16 callers=0 calls=0
*/
void sub_da8740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8740ULL || rel >= 0xda8750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8750 size=16 callers=0 calls=0
*/
void sub_da8750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8750ULL || rel >= 0xda8760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8760 size=16 callers=0 calls=0
*/
void sub_da8760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8760ULL || rel >= 0xda8770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8770 size=16 callers=0 calls=0
*/
void sub_da8770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8770ULL || rel >= 0xda8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8780 size=16 callers=0 calls=0
*/
void sub_da8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8780ULL || rel >= 0xda8790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8790 size=16 callers=0 calls=0
*/
void sub_da8790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8790ULL || rel >= 0xda87a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da87a0 size=16 callers=0 calls=0
*/
void sub_da87a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda87a0ULL || rel >= 0xda87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da87b0 size=304 callers=0 calls=0
*/
void sub_da87b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda87b0ULL || rel >= 0xda88e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da88e0 size=320 callers=1 calls=2
   calls: sub_da8a20, sub_da9070
*/
void sub_da88e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda88e0ULL || rel >= 0xda8a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8a20 size=288 callers=1 calls=3
   calls: sub_c38350, sub_da91a0, sub_e9db40
*/
void sub_da8a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8a20ULL || rel >= 0xda8b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8b40 size=16 callers=0 calls=0
*/
void sub_da8b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8b40ULL || rel >= 0xda8b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8b50 size=16 callers=0 calls=0
*/
void sub_da8b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8b50ULL || rel >= 0xda8b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8b60 size=656 callers=0 calls=3
   calls: sub_134f3e0, sub_134f490, sub_15066f0
*/
void sub_da8b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8b60ULL || rel >= 0xda8df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8df0 size=16 callers=0 calls=0
*/
void sub_da8df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8df0ULL || rel >= 0xda8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8e00 size=96 callers=0 calls=0
*/
void sub_da8e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8e00ULL || rel >= 0xda8e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8e60 size=96 callers=0 calls=0
*/
void sub_da8e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8e60ULL || rel >= 0xda8ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8ec0 size=16 callers=0 calls=0
*/
void sub_da8ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8ec0ULL || rel >= 0xda8ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8ed0 size=96 callers=0 calls=0
*/
void sub_da8ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8ed0ULL || rel >= 0xda8f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8f30 size=96 callers=0 calls=0
*/
void sub_da8f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8f30ULL || rel >= 0xda8f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8f90 size=16 callers=0 calls=0
*/
void sub_da8f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8f90ULL || rel >= 0xda8fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8fa0 size=16 callers=0 calls=0
*/
void sub_da8fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8fa0ULL || rel >= 0xda8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da8fb0 size=96 callers=0 calls=0
*/
void sub_da8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda8fb0ULL || rel >= 0xda9010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da9010 size=96 callers=0 calls=0
*/
void sub_da9010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda9010ULL || rel >= 0xda9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da9070 size=304 callers=1 calls=0
*/
void sub_da9070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda9070ULL || rel >= 0xda91a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da91a0 size=512 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_da91a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda91a0ULL || rel >= 0xda93a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da93a0 size=2128 callers=2 calls=4
   calls: sub_14072d0, sub_5e2350, sub_ea0fd0, sub_ea9e40
*/
void sub_da93a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda93a0ULL || rel >= 0xda9bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da9bf0 size=848 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_da9bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda9bf0ULL || rel >= 0xda9f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da9f40 size=16 callers=0 calls=0
*/
void sub_da9f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda9f40ULL || rel >= 0xda9f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da9f50 size=16 callers=0 calls=0
*/
void sub_da9f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda9f50ULL || rel >= 0xda9f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da9f60 size=16 callers=0 calls=0
*/
void sub_da9f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda9f60ULL || rel >= 0xda9f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da9f70 size=16 callers=0 calls=0
*/
void sub_da9f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda9f70ULL || rel >= 0xda9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da9f80 size=16 callers=0 calls=0
*/
void sub_da9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda9f80ULL || rel >= 0xda9f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da9f90 size=4368 callers=0 calls=10
   calls: sub_13f6520, sub_13f67a0, sub_5cfaf0, sub_5e2bc0, sub_5e7a30, sub_b334c0, sub_b4c060, sub_c61360, sub_c6e010, sub_ea7620
*/
void sub_da9f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda9f90ULL || rel >= 0xdab0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dab0a0 size=160 callers=0 calls=1
   calls: sub_c61b00
*/
void sub_dab0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdab0a0ULL || rel >= 0xdab140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dab140 size=256 callers=0 calls=1
   calls: sub_c61640
*/
void sub_dab140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdab140ULL || rel >= 0xdab240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dab240 size=160 callers=0 calls=3
   calls: sub_c61580, sub_ea77b0, sub_ea8c70
*/
void sub_dab240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdab240ULL || rel >= 0xdab2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dab2e0 size=4592 callers=0 calls=16
   calls: sub_135a1a0, sub_13ca950, sub_13f66b0, sub_5cbcf0, sub_5d99d0, sub_607550, sub_68d630, sub_68d710, sub_68d910, sub_969be0, sub_98eec0, sub_c61bc0
   ... +4 more
   ref: loc_ob_Lobj01
   ref: loc_ob_Robj01
   ref: %s%02d
   ref: FE_G_IWA_KORI_HOLE_
   ref: _ClearPoint_
   ref: _Hole_
   ref: loc_attach
   ref: %s%s%02d
*/
void FE_G_IWA_KORI_HOLE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdab2e0ULL || rel >= 0xdac4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dac4d0 size=16 callers=0 calls=0
*/
void sub_dac4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdac4d0ULL || rel >= 0xdac4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dac4e0 size=3904 callers=0 calls=17
   calls: sub_135a2d0, sub_135a4b0, sub_135a760, sub_17c19f0, sub_17c1a00, sub_607550, sub_68d950, sub_68d9b0, sub_68da30, sub_969be0, sub_c9f940, sub_e9ddb0
   ... +5 more
*/
void sub_dac4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdac4e0ULL || rel >= 0xdad420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dad420 size=464 callers=0 calls=2
   calls: sub_135a760, sub_c9f940
*/
void sub_dad420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdad420ULL || rel >= 0xdad5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dad5f0 size=1072 callers=0 calls=7
   calls: sub_135a1a0, sub_135a2d0, sub_135a4b0, sub_135a760, sub_1401b20, sub_c9f940, sub_dae480
*/
void sub_dad5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdad5f0ULL || rel >= 0xdada20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dada20 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dada20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdada20ULL || rel >= 0xdada90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dada90 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dada90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdada90ULL || rel >= 0xdadb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dadb00 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dadb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdadb00ULL || rel >= 0xdadb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dadb70 size=240 callers=19 calls=0
*/
void sub_dadb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdadb70ULL || rel >= 0xdadc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dadc60 size=224 callers=1 calls=1
   calls: sub_daef70
*/
void sub_dadc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdadc60ULL || rel >= 0xdadd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dadd40 size=416 callers=2 calls=2
   calls: sub_dadee0, sub_dae310
*/
void sub_dadd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdadd40ULL || rel >= 0xdadee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dadee0 size=1072 callers=3 calls=1
   calls: sub_13caf80
*/
void sub_dadee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdadee0ULL || rel >= 0xdae310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dae310 size=240 callers=2 calls=1
   calls: sub_13d28e0
*/
void sub_dae310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdae310ULL || rel >= 0xdae400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dae400 size=128 callers=0 calls=0
*/
void sub_dae400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdae400ULL || rel >= 0xdae480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dae480 size=144 callers=1 calls=1
   calls: sub_dae510
*/
void sub_dae480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdae480ULL || rel >= 0xdae510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dae510 size=480 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_dae510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdae510ULL || rel >= 0xdae6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dae6f0 size=16 callers=0 calls=0
*/
void sub_dae6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdae6f0ULL || rel >= 0xdae700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dae700 size=16 callers=0 calls=0
*/
void sub_dae700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdae700ULL || rel >= 0xdae710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dae710 size=32 callers=0 calls=0
*/
void sub_dae710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdae710ULL || rel >= 0xdae730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dae730 size=1536 callers=0 calls=12
   calls: sub_13ed240, sub_13f68d0, sub_5cbcf0, sub_68d950, sub_68d9f0, sub_794330, sub_972c70, sub_c43ed0, sub_c44310, sub_c44410, sub_c6c5c0, sub_d281c0
   ref: fi1001_dowsingwait01_loop
   ref: Play_Prop_Gimmick_a_t0701_g0202_Landbreak
   ref: Play_UI_Emotional_Exclamation
   ref: crack_trigger
   ref: loc_eff_head
   ref: Play_Prop_Gimmick_a_t0701_g0102_Landbreak
*/
void Play_UI_Emotional_Exclamation_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdae730ULL || rel >= 0xdaed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daed30 size=16 callers=0 calls=0
*/
void sub_daed30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaed30ULL || rel >= 0xdaed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daed40 size=16 callers=0 calls=0
*/
void sub_daed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaed40ULL || rel >= 0xdaed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daed50 size=16 callers=0 calls=0
*/
void sub_daed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaed50ULL || rel >= 0xdaed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daed60 size=16 callers=0 calls=0
*/
void sub_daed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaed60ULL || rel >= 0xdaed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daed70 size=16 callers=0 calls=0
*/
void sub_daed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaed70ULL || rel >= 0xdaed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daed80 size=16 callers=0 calls=0
*/
void sub_daed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaed80ULL || rel >= 0xdaed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daed90 size=16 callers=0 calls=0
*/
void sub_daed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaed90ULL || rel >= 0xdaeda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daeda0 size=16 callers=0 calls=0
*/
void sub_daeda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaeda0ULL || rel >= 0xdaedb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daedb0 size=16 callers=0 calls=0
*/
void sub_daedb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaedb0ULL || rel >= 0xdaedc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daedc0 size=304 callers=0 calls=0
*/
void sub_daedc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaedc0ULL || rel >= 0xdaeef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daeef0 size=128 callers=0 calls=0
*/
void sub_daeef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaeef0ULL || rel >= 0xdaef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daef70 size=176 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_daef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaef70ULL || rel >= 0xdaf020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daf020 size=80 callers=0 calls=0
*/
void sub_daf020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaf020ULL || rel >= 0xdaf070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daf070 size=32 callers=0 calls=0
*/
void sub_daf070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaf070ULL || rel >= 0xdaf090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daf090 size=16 callers=0 calls=0
*/
void sub_daf090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaf090ULL || rel >= 0xdaf0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daf0a0 size=32 callers=0 calls=0
*/
void sub_daf0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaf0a0ULL || rel >= 0xdaf0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daf0c0 size=96 callers=0 calls=0
*/
void sub_daf0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaf0c0ULL || rel >= 0xdaf120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daf120 size=400 callers=0 calls=6
   calls: sub_13575e0, sub_daf2b0, sub_dafef0, sub_ea3d10, sub_ea47d0, sub_ea47e0
*/
void sub_daf120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaf120ULL || rel >= 0xdaf2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daf2b0 size=832 callers=1 calls=1
   calls: sub_5cc540
*/
void sub_daf2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaf2b0ULL || rel >= 0xdaf5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daf5f0 size=960 callers=0 calls=1
   calls: sub_5cc540
*/
void sub_daf5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaf5f0ULL || rel >= 0xdaf9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00daf9b0 size=256 callers=0 calls=1
   calls: sub_dafab0
*/
void sub_daf9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaf9b0ULL || rel >= 0xdafab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dafab0 size=480 callers=1 calls=4
   calls: sub_13c9e50, sub_971950, sub_972c70, sub_9733f0
*/
void sub_dafab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdafab0ULL || rel >= 0xdafc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dafc90 size=288 callers=0 calls=2
   calls: sub_5cc540, sub_65d220
*/
void sub_dafc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdafc90ULL || rel >= 0xdafdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dafdb0 size=320 callers=0 calls=4
   calls: sub_59b250, sub_5b93c0, sub_5b9400, sub_b4a5e0
*/
void sub_dafdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdafdb0ULL || rel >= 0xdafef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dafef0 size=896 callers=1 calls=0
*/
void sub_dafef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdafef0ULL || rel >= 0xdb0270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db0270 size=80 callers=0 calls=0
*/
void sub_db0270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb0270ULL || rel >= 0xdb02c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db02c0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_db02c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb02c0ULL || rel >= 0xdb0370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db0370 size=80 callers=0 calls=0
*/
void sub_db0370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb0370ULL || rel >= 0xdb03c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db03c0 size=80 callers=0 calls=0
*/
void sub_db03c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb03c0ULL || rel >= 0xdb0410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db0410 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_db0410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb0410ULL || rel >= 0xdb04c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db04c0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_db04c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb04c0ULL || rel >= 0xdb0570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db0570 size=80 callers=0 calls=0
*/
void sub_db0570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb0570ULL || rel >= 0xdb05c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db05c0 size=80 callers=0 calls=0
*/
void sub_db05c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb05c0ULL || rel >= 0xdb0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db0610 size=1360 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_db0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb0610ULL || rel >= 0xdb0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db0b60 size=992 callers=0 calls=7
   calls: sub_13f6520, sub_13f67a0, sub_5cfaf0, sub_5e2bc0, sub_5e7a30, sub_c6e010, sub_ea7620
*/
void sub_db0b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb0b60ULL || rel >= 0xdb0f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db0f40 size=64 callers=0 calls=0
*/
void sub_db0f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb0f40ULL || rel >= 0xdb0f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db0f80 size=16 callers=0 calls=0
*/
void sub_db0f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb0f80ULL || rel >= 0xdb0f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db0f90 size=224 callers=0 calls=3
   calls: sub_793de0, sub_ea77b0, sub_ea8c70
*/
void sub_db0f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb0f90ULL || rel >= 0xdb1070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db1070 size=8288 callers=0 calls=11
   calls: sub_13a6920, sub_13f66b0, sub_5cbcf0, sub_5d99d0, sub_68d630, sub_68d710, sub_793d10, sub_793ea0, sub_98eec0, sub_c9f940, sub_d05ee0
   ref: _Goal_3_2_3
   ref: _PushBackArea_
   ref: _GetOffArea_
   ref: goal_trigger
   ref: _Goal_2_2
   ref: top_k_glove_joint
   ref: _PushBack_
   ref: _Goal_3_2_1
*/
void top_k_glove_joint(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb1070ULL || rel >= 0xdb30d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db30d0 size=16 callers=0 calls=0
*/
void sub_db30d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb30d0ULL || rel >= 0xdb30e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db30e0 size=2000 callers=0 calls=10
   calls: sub_68d950, sub_794040, sub_794330, sub_c6c5c0, sub_c83540, sub_c9f940, sub_ce00e0, sub_db70f0, sub_ea7c40, sub_ea8c70
   ref: Play_Prop_Gimmick_a_t0501_g0102_hit_2
   ref: Play_Prop_Gimmick_a_t0501_g0202_Punch_Machine_startmove
   ref: Play_Prop_Gimmick_a_t0501_g0202_Punch_Machine_whoosh
   ref: Play_Prop_Gimmick_a_t0501_g0102_hit_1
   ref: Play_Prop_Gimmick_a_t0501_g0102_hit_5
   ref: Play_Prop_Gimmick_a_t0501_g0102_Punch_Machine_startmove
   ref: punch_trigger
   ref: Play_Prop_Gimmick_a_t0501_g0102_hit_4
*/
void Play_Prop_Gimmick_a_t0501_g0202_hit_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb30e0ULL || rel >= 0xdb38b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db38b0 size=432 callers=0 calls=2
   calls: sub_c9f940, sub_ce00e0
*/
void sub_db38b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb38b0ULL || rel >= 0xdb3a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db3a60 size=576 callers=0 calls=3
   calls: sub_c9f940, sub_ce00e0, sub_db3fe0
*/
void sub_db3a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb3a60ULL || rel >= 0xdb3ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db3ca0 size=416 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_db3ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb3ca0ULL || rel >= 0xdb3e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db3e40 size=16 callers=0 calls=0
*/
void sub_db3e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb3e40ULL || rel >= 0xdb3e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db3e50 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_db3e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb3e50ULL || rel >= 0xdb3ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db3ec0 size=16 callers=0 calls=0
*/
void sub_db3ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb3ec0ULL || rel >= 0xdb3ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db3ed0 size=16 callers=0 calls=0
*/
void sub_db3ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb3ed0ULL || rel >= 0xdb3ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db3ee0 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_db3ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb3ee0ULL || rel >= 0xdb3f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db3f50 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_db3f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb3f50ULL || rel >= 0xdb3fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db3fc0 size=16 callers=0 calls=0
*/
void sub_db3fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb3fc0ULL || rel >= 0xdb3fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db3fd0 size=16 callers=0 calls=0
*/
void sub_db3fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb3fd0ULL || rel >= 0xdb3fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db3fe0 size=144 callers=1 calls=1
   calls: sub_db4070
*/
void sub_db3fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb3fe0ULL || rel >= 0xdb4070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db4070 size=416 callers=1 calls=3
   calls: sub_c38350, sub_db4210, sub_e9db40
*/
void sub_db4070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb4070ULL || rel >= 0xdb4210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db4210 size=336 callers=1 calls=2
   calls: sub_dca990, sub_e9d130
*/
void sub_db4210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb4210ULL || rel >= 0xdb4360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db4360 size=16 callers=0 calls=0
*/
void sub_db4360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb4360ULL || rel >= 0xdb4370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db4370 size=16 callers=0 calls=0
*/
void sub_db4370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb4370ULL || rel >= 0xdb4380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db4380 size=384 callers=0 calls=4
   calls: sub_13ed240, sub_db4500, sub_db5730, sub_db7110
*/
void sub_db4380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb4380ULL || rel >= 0xdb4500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db4500 size=1168 callers=1 calls=13
   calls: sub_13ca950, sub_13ed240, sub_794330, sub_c43ed0, sub_c44310, sub_c44410, sub_c83540, sub_cab130, sub_cabb80, sub_d10c30, sub_dadd40, sub_db54b0
   ... +1 more
*/
void sub_db4500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb4500ULL || rel >= 0xdb4990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db4990 size=1776 callers=0 calls=10
   calls: sub_13ed240, sub_794330, sub_c43ed0, sub_c44310, sub_c44410, sub_c83540, sub_cab130, sub_cabb80, sub_d11290, sub_db5730
*/
void sub_db4990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb4990ULL || rel >= 0xdb5080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5080 size=16 callers=0 calls=0
*/
void sub_db5080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5080ULL || rel >= 0xdb5090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5090 size=112 callers=0 calls=0
*/
void sub_db5090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5090ULL || rel >= 0xdb5100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5100 size=112 callers=0 calls=0
*/
void sub_db5100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5100ULL || rel >= 0xdb5170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5170 size=16 callers=0 calls=0
*/
void sub_db5170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5170ULL || rel >= 0xdb5180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5180 size=128 callers=0 calls=0
*/
void sub_db5180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5180ULL || rel >= 0xdb5200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5200 size=128 callers=0 calls=0
*/
void sub_db5200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5200ULL || rel >= 0xdb5280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5280 size=16 callers=0 calls=0
*/
void sub_db5280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5280ULL || rel >= 0xdb5290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5290 size=16 callers=0 calls=0
*/
void sub_db5290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5290ULL || rel >= 0xdb52a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db52a0 size=112 callers=0 calls=0
*/
void sub_db52a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb52a0ULL || rel >= 0xdb5310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5310 size=112 callers=0 calls=0
*/
void sub_db5310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5310ULL || rel >= 0xdb5380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5380 size=304 callers=0 calls=0
*/
void sub_db5380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5380ULL || rel >= 0xdb54b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db54b0 size=224 callers=1 calls=1
   calls: sub_db5a10
*/
void sub_db54b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb54b0ULL || rel >= 0xdb5590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5590 size=416 callers=1 calls=2
   calls: sub_dadee0, sub_db5730
*/
void sub_db5590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5590ULL || rel >= 0xdb5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5730 size=240 callers=4 calls=1
   calls: sub_c657d0
*/
void sub_db5730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5730ULL || rel >= 0xdb5820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5820 size=496 callers=0 calls=1
   calls: sub_1c0
   ref: Play_Prop_Gimmick_a_t0501_g0102_cup_roll
   ref: goal_trigger
   ref: Play_UI_Gym_a_t0501_g0102_Start
   ref: Play_UI_Gym_a_t0501_g0102_Goal
   ref: Play_Prop_Gimmick_a_t0501_g0102_cup_move_lp
   ref: Stop_Prop_Gimmick_a_t0501_g0102_cup_move_lp
*/
void Play_UI_Gym_a_t0501_g0102_Start(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5820ULL || rel >= 0xdb5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5a10 size=912 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_db5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5a10ULL || rel >= 0xdb5da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5da0 size=80 callers=0 calls=0
*/
void sub_db5da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5da0ULL || rel >= 0xdb5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5df0 size=32 callers=0 calls=0
*/
void sub_db5df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5df0ULL || rel >= 0xdb5e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5e10 size=48 callers=0 calls=0
*/
void sub_db5e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5e10ULL || rel >= 0xdb5e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5e40 size=32 callers=0 calls=0
*/
void sub_db5e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5e40ULL || rel >= 0xdb5e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5e60 size=96 callers=0 calls=0
*/
void sub_db5e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5e60ULL || rel >= 0xdb5ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db5ec0 size=368 callers=0 calls=2
   calls: sub_ea3d10, sub_ea47e0
*/
void sub_db5ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5ec0ULL || rel >= 0xdb6030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db6030 size=16 callers=0 calls=0
*/
void sub_db6030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb6030ULL || rel >= 0xdb6040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db6040 size=448 callers=0 calls=5
   calls: Play_Prop_Gimmick_a_t0501_g0102_Disk_Wall_hit, Play_Prop_Gimmick_a_t0501_g0102_Disk_Wall_hit_2, sub_793fb0, sub_986bc0, sub_db6200
   ref: CupRotationSpeed
   ref: CupMovementSpeed
*/
void CupRotationSpeed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb6040ULL || rel >= 0xdb6200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db6200 size=1632 callers=1 calls=0
*/
void sub_db6200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb6200ULL || rel >= 0xdb6860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db6860 size=1184 callers=1 calls=6
   calls: sub_5cc540, sub_c6ccb0, sub_c6d380, sub_c83540, sub_ea7c40, sub_ea8c70
   ref: Play_Prop_Gimmick_a_t0501_g0102_Disk_Wall_hit
*/
void Play_Prop_Gimmick_a_t0501_g0102_Disk_Wall_hit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb6860ULL || rel >= 0xdb6d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db6d00 size=1008 callers=1 calls=5
   calls: sub_c6ccb0, sub_c6d380, sub_c83540, sub_ea7c40, sub_ea8c70
   ref: Play_Prop_Gimmick_a_t0501_g0102_Disk_Wall_hit
*/
void Play_Prop_Gimmick_a_t0501_g0102_Disk_Wall_hit_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb6d00ULL || rel >= 0xdb70f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db70f0 size=32 callers=1 calls=0
*/
void sub_db70f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb70f0ULL || rel >= 0xdb7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db7110 size=48 callers=1 calls=0
*/
void sub_db7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb7110ULL || rel >= 0xdb7140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db7140 size=80 callers=0 calls=0
*/
void sub_db7140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb7140ULL || rel >= 0xdb7190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db7190 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_db7190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb7190ULL || rel >= 0xdb7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db7240 size=80 callers=0 calls=0
*/
void sub_db7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb7240ULL || rel >= 0xdb7290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db7290 size=80 callers=0 calls=0
*/
void sub_db7290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb7290ULL || rel >= 0xdb72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db72e0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_db72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb72e0ULL || rel >= 0xdb7390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db7390 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_db7390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb7390ULL || rel >= 0xdb7440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db7440 size=80 callers=0 calls=0
*/
void sub_db7440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb7440ULL || rel >= 0xdb7490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db7490 size=80 callers=0 calls=0
*/
void sub_db7490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb7490ULL || rel >= 0xdb74e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db74e0 size=928 callers=1 calls=3
   calls: sub_5e2350, sub_d28bc0, sub_dbdde0
   ref: number_count_int
   ref: number_count02_trigger
*/
void number_count02_trigger(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb74e0ULL || rel >= 0xdb7880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db7880 size=1376 callers=0 calls=5
   calls: sub_5e2bc0, sub_c6e010, sub_dbdfe0, sub_ddd730, sub_de0a40
*/
void sub_db7880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb7880ULL || rel >= 0xdb7de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db7de0 size=48 callers=0 calls=0
*/
void sub_db7de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb7de0ULL || rel >= 0xdb7e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db7e10 size=16 callers=0 calls=0
*/
void sub_db7e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb7e10ULL || rel >= 0xdb7e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db7e20 size=96 callers=0 calls=0
*/
void sub_db7e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb7e20ULL || rel >= 0xdb7e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db7e80 size=6640 callers=1 calls=21
   calls: gate_open_close, sub_13ca4c0, sub_13ca860, sub_13f66b0, sub_59f220, sub_5a0820, sub_5a0830, sub_5d99d0, sub_68d630, sub_68d910, sub_96ccf0, sub_98eec0
   ... +9 more
   ref: _Fence_
   ref: _COUNTER_
   ref: %s%s%d
   ref: _WOOLGATE_0
   ref: %s%s%d_%d
   ref: _WOOLGATE
   ref: _NUMBER_
   ref: _DogPokemon_
*/
void _PokeSpaceBox(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb7e80ULL || rel >= 0xdb9870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db9870 size=304 callers=3 calls=1
   calls: sub_967240
*/
void sub_db9870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb9870ULL || rel >= 0xdb99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00db99a0 size=6832 callers=1 calls=21
   calls: sub_135a1a0, sub_135a760, sub_13ca4c0, sub_13ca860, sub_13ed330, sub_5cf8e0, sub_5cf8f0, sub_607750, sub_96ccf0, sub_972c70, sub_c83150, sub_c8f410
   ... +9 more
   ref: gate_open_close
*/
void gate_open_close(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb99a0ULL || rel >= 0xdbb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbb450 size=480 callers=0 calls=7
   calls: _PokeSpaceBox, sub_13ca860, sub_d152d0, sub_ddee10, sub_de1090, sub_de1490, sub_de14f0
*/
void sub_dbb450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbb450ULL || rel >= 0xdbb630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbb630 size=1648 callers=0 calls=11
   calls: Play_PV_835_00_00, sub_13ca860, sub_c9f940, sub_d29860, sub_dbc7b0, sub_dbcc40, sub_dbcef0, sub_dddae0, sub_dddd70, sub_dddde0, sub_dde0b0
*/
void sub_dbb630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbb630ULL || rel >= 0xdbbca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbbca0 size=2832 callers=1 calls=13
   calls: sub_13ca860, sub_59b250, sub_5b9220, sub_5c6830, sub_5c6850, sub_5c8dd0, sub_b44bb0, sub_c6c5c0, sub_c83540, sub_c9f940, sub_d4fb90, sub_d4fba0
   ... +1 more
   ref: Play_PV_835_00_00
*/
void Play_PV_835_00_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbbca0ULL || rel >= 0xdbc7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbc7b0 size=1168 callers=1 calls=2
   calls: sub_13ca860, sub_d281c0
*/
void sub_dbc7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbc7b0ULL || rel >= 0xdbcc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbcc40 size=688 callers=1 calls=3
   calls: sub_13ca860, sub_96ccf0, sub_e9ddb0
*/
void sub_dbcc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbcc40ULL || rel >= 0xdbcef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbcef0 size=864 callers=1 calls=2
   calls: sub_13ca860, sub_96ccf0
*/
void sub_dbcef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbcef0ULL || rel >= 0xdbd250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbd250 size=560 callers=0 calls=2
   calls: sub_13ca860, sub_96ccf0
*/
void sub_dbd250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbd250ULL || rel >= 0xdbd480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbd480 size=912 callers=0 calls=1
   calls: sub_dbf590
*/
void sub_dbd480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbd480ULL || rel >= 0xdbd810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbd810 size=1072 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_dbd810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbd810ULL || rel >= 0xdbdc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbdc40 size=16 callers=0 calls=0
*/
void sub_dbdc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbdc40ULL || rel >= 0xdbdc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbdc50 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dbdc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbdc50ULL || rel >= 0xdbdcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbdcc0 size=16 callers=0 calls=0
*/
void sub_dbdcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbdcc0ULL || rel >= 0xdbdcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbdcd0 size=16 callers=0 calls=0
*/
void sub_dbdcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbdcd0ULL || rel >= 0xdbdce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbdce0 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dbdce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbdce0ULL || rel >= 0xdbdd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbdd50 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dbdd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbdd50ULL || rel >= 0xdbddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbddc0 size=16 callers=0 calls=0
*/
void sub_dbddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbddc0ULL || rel >= 0xdbddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbddd0 size=16 callers=0 calls=0
*/
void sub_dbddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbddd0ULL || rel >= 0xdbdde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbdde0 size=512 callers=1 calls=0
*/
void sub_dbdde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbdde0ULL || rel >= 0xdbdfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbdfe0 size=320 callers=1 calls=0
*/
void sub_dbdfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbdfe0ULL || rel >= 0xdbe120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbe120 size=464 callers=0 calls=0
*/
void sub_dbe120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbe120ULL || rel >= 0xdbe2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbe2f0 size=336 callers=1 calls=2
   calls: sub_13ca950, sub_dc3da0
*/
void sub_dbe2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbe2f0ULL || rel >= 0xdbe440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbe440 size=640 callers=1 calls=2
   calls: sub_c657d0, sub_dadee0
*/
void sub_dbe440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbe440ULL || rel >= 0xdbe6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbe6c0 size=1648 callers=3 calls=3
   calls: sub_dbe6c0, sub_dbed30, sub_dbef30
*/
void sub_dbe6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbe6c0ULL || rel >= 0xdbed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbed30 size=512 callers=2 calls=0
*/
void sub_dbed30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbed30ULL || rel >= 0xdbef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbef30 size=944 callers=2 calls=1
   calls: sub_dbed30
*/
void sub_dbef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbef30ULL || rel >= 0xdbf2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbf2e0 size=320 callers=6 calls=1
   calls: sub_c657d0
*/
void sub_dbf2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbf2e0ULL || rel >= 0xdbf420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbf420 size=240 callers=1 calls=1
   calls: sub_c657d0
*/
void sub_dbf420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbf420ULL || rel >= 0xdbf510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbf510 size=128 callers=0 calls=0
*/
void sub_dbf510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbf510ULL || rel >= 0xdbf590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbf590 size=320 callers=1 calls=3
   calls: sub_dbf6d0, sub_dbf7f0, sub_dc2200
*/
void sub_dbf590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbf590ULL || rel >= 0xdbf6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbf6d0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_dc2330, sub_e9db40
*/
void sub_dbf6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbf6d0ULL || rel >= 0xdbf7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbf7f0 size=544 callers=2 calls=0
*/
void sub_dbf7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbf7f0ULL || rel >= 0xdbfa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbfa10 size=16 callers=0 calls=0
*/
void sub_dbfa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbfa10ULL || rel >= 0xdbfa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbfa20 size=528 callers=0 calls=3
   calls: sub_c687b0, sub_d139c0, sub_dbfc30
*/
void sub_dbfa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbfa20ULL || rel >= 0xdbfc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbfc30 size=304 callers=25 calls=1
   calls: sub_13b1c90
*/
void sub_dbfc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbfc30ULL || rel >= 0xdbfd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dbfd60 size=5632 callers=0 calls=18
   calls: Play_Prop_Gimmick_a_t0301_g0102_Fence_break_single, sub_5cf8e0, sub_5cf8f0, sub_607750, sub_794330, sub_972c70, sub_c83150, sub_ca90d0, sub_cab130, sub_caba10, sub_cabb80, sub_d13290
   ... +6 more
   ref: Play_Prop_Gimmick_a_t0301_g0102_Woodgate_close
   ref: Play_Prop_Gimmick_a_t0301_g0102_countfix
   ref: gate_open_close
*/
void Play_Prop_Gimmick_a_t0301_g0102_countfix(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbfd60ULL || rel >= 0xdc1360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc1360 size=528 callers=3 calls=3
   calls: sub_ca90d0, sub_caba10, sub_ead150
*/
void sub_dc1360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc1360ULL || rel >= 0xdc1570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc1570 size=400 callers=2 calls=3
   calls: sub_d139c0, sub_dbfc30, sub_dc24c0
*/
void sub_dc1570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc1570ULL || rel >= 0xdc1700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc1700 size=1600 callers=1 calls=16
   calls: sub_135a4b0, sub_59f220, sub_5a0820, sub_5cf8e0, sub_5cf8f0, sub_607750, sub_68d950, sub_68d9f0, sub_794330, sub_96ccf0, sub_d139c0, sub_d14ec0
   ... +4 more
   ref: Play_Prop_Gimmick_a_t0301_g0102_Fence_break_single
   ref: Play_Prop_Gimmick_a_t0301_g0102_Fence_break_last
*/
void Play_Prop_Gimmick_a_t0301_g0102_Fence_break_single(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc1700ULL || rel >= 0xdc1d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc1d40 size=240 callers=0 calls=0
*/
void sub_dc1d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc1d40ULL || rel >= 0xdc1e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc1e30 size=112 callers=0 calls=1
   calls: sub_dc2100
*/
void sub_dc1e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc1e30ULL || rel >= 0xdc1ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc1ea0 size=112 callers=0 calls=1
   calls: sub_dc2100
*/
void sub_dc1ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc1ea0ULL || rel >= 0xdc1f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc1f10 size=16 callers=0 calls=0
*/
void sub_dc1f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc1f10ULL || rel >= 0xdc1f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc1f20 size=112 callers=0 calls=1
   calls: sub_dc2100
*/
void sub_dc1f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc1f20ULL || rel >= 0xdc1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc1f90 size=112 callers=0 calls=1
   calls: sub_dc2100
*/
void sub_dc1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc1f90ULL || rel >= 0xdc2000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc2000 size=16 callers=0 calls=0
*/
void sub_dc2000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc2000ULL || rel >= 0xdc2010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc2010 size=16 callers=0 calls=0
*/
void sub_dc2010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc2010ULL || rel >= 0xdc2020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc2020 size=112 callers=0 calls=1
   calls: sub_dc2100
*/
void sub_dc2020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc2020ULL || rel >= 0xdc2090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc2090 size=112 callers=0 calls=1
   calls: sub_dc2100
*/
void sub_dc2090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc2090ULL || rel >= 0xdc2100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc2100 size=256 callers=6 calls=0
*/
void sub_dc2100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc2100ULL || rel >= 0xdc2200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc2200 size=304 callers=1 calls=0
*/
void sub_dc2200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc2200ULL || rel >= 0xdc2330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc2330 size=400 callers=1 calls=2
   calls: sub_d28bc0, sub_e9d130
*/
void sub_dc2330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc2330ULL || rel >= 0xdc24c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc24c0 size=1648 callers=3 calls=3
   calls: sub_dc24c0, sub_dc2b30, sub_dc2d40
*/
void sub_dc24c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc24c0ULL || rel >= 0xdc2b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc2b30 size=528 callers=2 calls=0
*/
void sub_dc2b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc2b30ULL || rel >= 0xdc2d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc2d40 size=960 callers=2 calls=1
   calls: sub_dc2b30
*/
void sub_dc2d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc2d40ULL || rel >= 0xdc3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc3100 size=1648 callers=2 calls=3
   calls: sub_dc3100, sub_dc3770, sub_dc3970
*/
void sub_dc3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc3100ULL || rel >= 0xdc3770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc3770 size=512 callers=2 calls=0
*/
void sub_dc3770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc3770ULL || rel >= 0xdc3970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc3970 size=944 callers=2 calls=1
   calls: sub_dc3770
*/
void sub_dc3970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc3970ULL || rel >= 0xdc3d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc3d20 size=128 callers=0 calls=0
*/
void sub_dc3d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc3d20ULL || rel >= 0xdc3da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc3da0 size=320 callers=1 calls=1
   calls: sub_d1b2b0
*/
void sub_dc3da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc3da0ULL || rel >= 0xdc3ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc3ee0 size=1168 callers=0 calls=1
   calls: sub_d1b460
*/
void sub_dc3ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc3ee0ULL || rel >= 0xdc4370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc4370 size=64 callers=0 calls=0
*/
void sub_dc4370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc4370ULL || rel >= 0xdc43b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc43b0 size=64 callers=0 calls=0
*/
void sub_dc43b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc43b0ULL || rel >= 0xdc43f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc43f0 size=304 callers=1 calls=2
   calls: sub_13c9e50, sub_972c70
*/
void sub_dc43f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc43f0ULL || rel >= 0xdc4520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc4520 size=96 callers=0 calls=1
   calls: sub_d1b6a0
*/
void sub_dc4520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc4520ULL || rel >= 0xdc4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc4580 size=880 callers=0 calls=6
   calls: sub_65d220, sub_972c70, sub_d1b060, sub_d1b7a0, sub_d1ba50, sub_dc48f0
*/
void sub_dc4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc4580ULL || rel >= 0xdc48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc48f0 size=624 callers=1 calls=4
   calls: sub_c8f450, sub_d1b060, sub_d1c190, sub_d3c360
*/
void sub_dc48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc48f0ULL || rel >= 0xdc4b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc4b60 size=128 callers=0 calls=2
   calls: sub_d1b060, sub_d3c370
*/
void sub_dc4b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc4b60ULL || rel >= 0xdc4be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc4be0 size=48 callers=0 calls=1
   calls: sub_d1b5e0
*/
void sub_dc4be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc4be0ULL || rel >= 0xdc4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc4c10 size=48 callers=0 calls=1
   calls: sub_d1b5f0
*/
void sub_dc4c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc4c10ULL || rel >= 0xdc4c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc4c40 size=144 callers=0 calls=0
*/
void sub_dc4c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc4c40ULL || rel >= 0xdc4cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc4cd0 size=176 callers=0 calls=1
   calls: sub_13cc840
*/
void sub_dc4cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc4cd0ULL || rel >= 0xdc4d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc4d80 size=144 callers=0 calls=0
*/
void sub_dc4d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc4d80ULL || rel >= 0xdc4e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc4e10 size=144 callers=0 calls=0
*/
void sub_dc4e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc4e10ULL || rel >= 0xdc4ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc4ea0 size=176 callers=0 calls=1
   calls: sub_13cc840
*/
void sub_dc4ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc4ea0ULL || rel >= 0xdc4f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc4f50 size=176 callers=0 calls=1
   calls: sub_13cc840
*/
void sub_dc4f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc4f50ULL || rel >= 0xdc5000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc5000 size=144 callers=0 calls=0
*/
void sub_dc5000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc5000ULL || rel >= 0xdc5090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc5090 size=144 callers=0 calls=0
*/
void sub_dc5090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc5090ULL || rel >= 0xdc5120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc5120 size=128 callers=0 calls=0
*/
void sub_dc5120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc5120ULL || rel >= 0xdc51a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc51a0 size=1888 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_dc51a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc51a0ULL || rel >= 0xdc5900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc5900 size=16 callers=0 calls=0
*/
void sub_dc5900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc5900ULL || rel >= 0xdc5910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc5910 size=16 callers=0 calls=0
*/
void sub_dc5910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc5910ULL || rel >= 0xdc5920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc5920 size=16 callers=0 calls=0
*/
void sub_dc5920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc5920ULL || rel >= 0xdc5930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc5930 size=16 callers=0 calls=0
*/
void sub_dc5930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc5930ULL || rel >= 0xdc5940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc5940 size=1264 callers=20 calls=8
   calls: sub_13f66b0, sub_13f68d0, sub_5cbcf0, sub_5cf8e0, sub_5cf8f0, sub_607750, sub_68d9f0, sub_dc7ca0
*/
void sub_dc5940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc5940ULL || rel >= 0xdc5e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc5e30 size=6240 callers=0 calls=4
   calls: sub_135a1a0, sub_13f66b0, sub_794330, sub_dc5940
   ref: bott_trigger_red
   ref: bott_trigger_yel
   ref: Set_State_t0401_Switch_Yellow_b
   ref: Set_State_t0401_Switch_Yellow_a
   ref: Set_State_t0401_Switch_Red_a
   ref: Set_State_t0401_Switch_Red_b
   ref: Set_State_t0401_Switch_Green_a
   ref: Set_State_t0401_Switch_Green_b
*/
void Set_State_t0401_Switch_Yellow_b(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc5e30ULL || rel >= 0xdc7690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc7690 size=16 callers=0 calls=0
*/
void sub_dc7690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc7690ULL || rel >= 0xdc76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc76a0 size=16 callers=0 calls=0
*/
void sub_dc76a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc76a0ULL || rel >= 0xdc76b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc76b0 size=16 callers=0 calls=0
*/
void sub_dc76b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc76b0ULL || rel >= 0xdc76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc76c0 size=768 callers=0 calls=5
   calls: sub_135a1a0, sub_135a2d0, sub_135a3c0, sub_c9f940, sub_dc7d90
*/
void sub_dc76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc76c0ULL || rel >= 0xdc79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc79c0 size=80 callers=0 calls=0
*/
void sub_dc79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc79c0ULL || rel >= 0xdc7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc7a10 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dc7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc7a10ULL || rel >= 0xdc7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc7a80 size=80 callers=0 calls=0
*/
void sub_dc7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc7a80ULL || rel >= 0xdc7ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc7ad0 size=80 callers=0 calls=0
*/
void sub_dc7ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc7ad0ULL || rel >= 0xdc7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc7b20 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dc7b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc7b20ULL || rel >= 0xdc7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc7b90 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dc7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc7b90ULL || rel >= 0xdc7c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc7c00 size=80 callers=0 calls=0
*/
void sub_dc7c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc7c00ULL || rel >= 0xdc7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc7c50 size=80 callers=0 calls=0
*/
void sub_dc7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc7c50ULL || rel >= 0xdc7ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc7ca0 size=240 callers=2 calls=1
   calls: sub_13a6920
*/
void sub_dc7ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc7ca0ULL || rel >= 0xdc7d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc7d90 size=144 callers=1 calls=1
   calls: sub_dc7e20
*/
void sub_dc7d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc7d90ULL || rel >= 0xdc7e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc7e20 size=464 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_dc7e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc7e20ULL || rel >= 0xdc7ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc7ff0 size=16 callers=0 calls=0
*/
void sub_dc7ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc7ff0ULL || rel >= 0xdc8000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8000 size=16 callers=0 calls=0
*/
void sub_dc8000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8000ULL || rel >= 0xdc8010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8010 size=2656 callers=0 calls=10
   calls: sub_135a1a0, sub_13f68d0, sub_5cbcf0, sub_5cf8e0, sub_5cf8f0, sub_607750, sub_68d950, sub_68d9b0, sub_68d9f0, sub_794330
   ref: bott_trigger_red
   ref: bott_trigger_yel
   ref: Play_Prop_Gimmick_a_t0401_g0102_GimicMove_far
   ref: Set_State_t0401_Switch_Yellow_b
   ref: Set_State_t0401_Switch_Yellow_a
   ref: Set_State_t0401_Switch_Red_a
   ref: Set_State_t0401_Switch_Red_b
   ref: Set_State_t0401_Switch_Green_a
*/
void Set_State_t0401_Switch_Yellow_b_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8010ULL || rel >= 0xdc8a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8a70 size=16 callers=0 calls=0
*/
void sub_dc8a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8a70ULL || rel >= 0xdc8a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8a80 size=16 callers=0 calls=0
*/
void sub_dc8a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8a80ULL || rel >= 0xdc8a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8a90 size=16 callers=0 calls=0
*/
void sub_dc8a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8a90ULL || rel >= 0xdc8aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8aa0 size=16 callers=0 calls=0
*/
void sub_dc8aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8aa0ULL || rel >= 0xdc8ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8ab0 size=16 callers=0 calls=0
*/
void sub_dc8ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8ab0ULL || rel >= 0xdc8ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8ac0 size=16 callers=0 calls=0
*/
void sub_dc8ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8ac0ULL || rel >= 0xdc8ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8ad0 size=16 callers=0 calls=0
*/
void sub_dc8ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8ad0ULL || rel >= 0xdc8ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8ae0 size=16 callers=0 calls=0
*/
void sub_dc8ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8ae0ULL || rel >= 0xdc8af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8af0 size=16 callers=0 calls=0
*/
void sub_dc8af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8af0ULL || rel >= 0xdc8b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8b00 size=304 callers=0 calls=0
*/
void sub_dc8b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8b00ULL || rel >= 0xdc8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8c30 size=288 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_dc8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8c30ULL || rel >= 0xdc8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8d50 size=16 callers=0 calls=0
*/
void sub_dc8d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8d50ULL || rel >= 0xdc8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8d60 size=16 callers=0 calls=0
*/
void sub_dc8d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8d60ULL || rel >= 0xdc8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8d70 size=16 callers=0 calls=0
*/
void sub_dc8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8d70ULL || rel >= 0xdc8d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8d80 size=16 callers=0 calls=0
*/
void sub_dc8d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8d80ULL || rel >= 0xdc8d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc8d90 size=3360 callers=0 calls=14
   calls: sub_13f6520, sub_13f67a0, sub_5cfaf0, sub_5e7a30, sub_96c590, sub_dc9ab0, sub_dc9bd0, sub_dc9cf0, sub_dc9e10, sub_dc9f30, sub_dca050, sub_dca170
   ... +2 more
   ref: _kinoko_light_
   ref: %s%s%02d
   ref: _kinoko_
*/
void kinoko_light(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8d90ULL || rel >= 0xdc9ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc9ab0 size=288 callers=1 calls=1
   calls: sub_59bee0
*/
void sub_dc9ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc9ab0ULL || rel >= 0xdc9bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc9bd0 size=288 callers=1 calls=1
   calls: sub_59bee0
*/
void sub_dc9bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc9bd0ULL || rel >= 0xdc9cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc9cf0 size=288 callers=1 calls=1
   calls: sub_59bee0
*/
void sub_dc9cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc9cf0ULL || rel >= 0xdc9e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc9e10 size=288 callers=1 calls=1
   calls: sub_59bee0
*/
void sub_dc9e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc9e10ULL || rel >= 0xdc9f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dc9f30 size=288 callers=1 calls=1
   calls: sub_59bee0
*/
void sub_dc9f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc9f30ULL || rel >= 0xdca050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca050 size=288 callers=1 calls=1
   calls: sub_59bee0
*/
void sub_dca050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca050ULL || rel >= 0xdca170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca170 size=288 callers=1 calls=1
   calls: sub_59bee0
*/
void sub_dca170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca170ULL || rel >= 0xdca290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca290 size=288 callers=1 calls=1
   calls: sub_59bee0
*/
void sub_dca290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca290ULL || rel >= 0xdca3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca3b0 size=16 callers=0 calls=0
*/
void sub_dca3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca3b0ULL || rel >= 0xdca3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca3c0 size=16 callers=0 calls=0
*/
void sub_dca3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca3c0ULL || rel >= 0xdca3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca3d0 size=16 callers=0 calls=0
*/
void sub_dca3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca3d0ULL || rel >= 0xdca3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca3e0 size=16 callers=0 calls=0
*/
void sub_dca3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca3e0ULL || rel >= 0xdca3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca3f0 size=144 callers=0 calls=0
*/
void sub_dca3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca3f0ULL || rel >= 0xdca480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca480 size=144 callers=0 calls=0
*/
void sub_dca480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca480ULL || rel >= 0xdca510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca510 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dca510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca510ULL || rel >= 0xdca580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca580 size=144 callers=0 calls=0
*/
void sub_dca580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca580ULL || rel >= 0xdca610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca610 size=144 callers=0 calls=0
*/
void sub_dca610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca610ULL || rel >= 0xdca6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca6a0 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dca6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca6a0ULL || rel >= 0xdca710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca710 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dca710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca710ULL || rel >= 0xdca780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca780 size=144 callers=0 calls=0
*/
void sub_dca780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca780ULL || rel >= 0xdca810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca810 size=144 callers=0 calls=0
*/
void sub_dca810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca810ULL || rel >= 0xdca8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca8a0 size=240 callers=1 calls=1
   calls: sub_96c590
*/
void sub_dca8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca8a0ULL || rel >= 0xdca990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dca990 size=240 callers=1 calls=2
   calls: sub_6835f0, sub_e81d70
*/
void sub_dca990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca990ULL || rel >= 0xdcaa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcaa80 size=416 callers=32 calls=2
   calls: sub_13f67a0, sub_dadb70
*/
void sub_dcaa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcaa80ULL || rel >= 0xdcac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcac20 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_dcac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcac20ULL || rel >= 0xdcac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcac70 size=160 callers=0 calls=1
   calls: sub_dd7620
*/
void sub_dcac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcac70ULL || rel >= 0xdcad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcad10 size=160 callers=0 calls=1
   calls: sub_dd7620
*/
void sub_dcad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcad10ULL || rel >= 0xdcadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcadb0 size=160 callers=0 calls=1
   calls: sub_dd7620
*/
void sub_dcadb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcadb0ULL || rel >= 0xdcae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcae50 size=160 callers=0 calls=1
   calls: sub_dd7620
*/
void sub_dcae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcae50ULL || rel >= 0xdcaef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcaef0 size=160 callers=0 calls=1
   calls: sub_dd7620
*/
void sub_dcaef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcaef0ULL || rel >= 0xdcaf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcaf90 size=160 callers=0 calls=1
   calls: sub_dd7620
*/
void sub_dcaf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcaf90ULL || rel >= 0xdcb030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcb030 size=288 callers=0 calls=2
   calls: sub_dd7620, sub_dd7c40
*/
void sub_dcb030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb030ULL || rel >= 0xdcb150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcb150 size=624 callers=0 calls=5
   calls: sub_1306f20, sub_5dd790, sub_5e2930, sub_dcd930, sub_ea7620
*/
void sub_dcb150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb150ULL || rel >= 0xdcb3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcb3c0 size=240 callers=0 calls=2
   calls: sub_dcf560, sub_dcfb10
*/
void sub_dcb3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb3c0ULL || rel >= 0xdcb4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcb4b0 size=96 callers=0 calls=2
   calls: CHECKPOINT_MODEL_SCALE, balloonGroups
*/
void sub_dcb4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb4b0ULL || rel >= 0xdcb510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcb510 size=16 callers=0 calls=0
*/
void sub_dcb510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb510ULL || rel >= 0xdcb520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcb520 size=336 callers=0 calls=6
   calls: sub_13e50b0, sub_dd2a30, sub_dd2b20, sub_dd2c30, sub_ea77b0, sub_ea8c70
*/
void sub_dcb520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb520ULL || rel >= 0xdcb670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcb670 size=16 callers=0 calls=0
*/
void sub_dcb670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb670ULL || rel >= 0xdcb680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcb680 size=2032 callers=0 calls=21
   calls: sub_13a6920, sub_14ab0c0, sub_14ab200, sub_14ab440, sub_794330, sub_c6ceb0, sub_c95cf0, sub_c99bb0, sub_c99be0, sub_c99c60, sub_c9f940, sub_ca0110
   ... +9 more
   ref: Play_UI_Lcircuit_Count Down
*/
void Play_UI_Lcircuit_Count_Down(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb680ULL || rel >= 0xdcbe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcbe70 size=16 callers=0 calls=0
*/
void sub_dcbe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcbe70ULL || rel >= 0xdcbe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcbe80 size=1552 callers=1 calls=3
   calls: sub_13a5bb0, sub_dcaa80, sub_dcc490
*/
void sub_dcbe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcbe80ULL || rel >= 0xdcc490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcc490 size=288 callers=1 calls=3
   calls: sub_c38350, sub_dd7f90, sub_e9db40
*/
void sub_dcc490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcc490ULL || rel >= 0xdcc5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcc5b0 size=256 callers=1 calls=5
   calls: sub_c99c60, sub_c9f940, sub_ca0110, sub_dcaa80, sub_dd4e40
*/
void sub_dcc5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcc5b0ULL || rel >= 0xdcc6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcc6b0 size=144 callers=1 calls=1
   calls: sub_dcc740
*/
void sub_dcc6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcc6b0ULL || rel >= 0xdcc740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcc740 size=464 callers=4 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_dcc740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcc740ULL || rel >= 0xdcc910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcc910 size=144 callers=1 calls=1
   calls: sub_dcc740
*/
void sub_dcc910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcc910ULL || rel >= 0xdcc9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcc9a0 size=96 callers=2 calls=1
   calls: sub_dcaa80
*/
void sub_dcc9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcc9a0ULL || rel >= 0xdcca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcca00 size=1232 callers=1 calls=8
   calls: Play_Prop_Gimmick_Get_Baloon_2, Play_UI_Lcircuit_CheckPoint, sub_13ca860, sub_5cbcf0, sub_dcaa80, sub_dcced0, sub_dce9d0, sub_dcf2b0
*/
void sub_dcca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcca00ULL || rel >= 0xdcced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcced0 size=512 callers=1 calls=7
   calls: sub_13a6920, sub_c6ceb0, sub_c99c60, sub_c9f940, sub_ca0110, sub_d44d60, sub_dd2f50
*/
void sub_dcced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcced0ULL || rel >= 0xdcd0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcd0d0 size=160 callers=1 calls=2
   calls: sub_dcaa80, sub_dcd170
*/
void sub_dcd0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd0d0ULL || rel >= 0xdcd170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcd170 size=512 callers=1 calls=2
   calls: sub_dd4f30, sub_dd6190
*/
void sub_dcd170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd170ULL || rel >= 0xdcd370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcd370 size=128 callers=2 calls=1
   calls: sub_dcaa80
*/
void sub_dcd370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd370ULL || rel >= 0xdcd3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcd3f0 size=256 callers=3 calls=1
   calls: sub_dcaa80
*/
void sub_dcd3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd3f0ULL || rel >= 0xdcd4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcd4f0 size=224 callers=1 calls=2
   calls: sub_dcaa80, sub_dd6f50
*/
void sub_dcd4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd4f0ULL || rel >= 0xdcd5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcd5d0 size=144 callers=1 calls=2
   calls: sub_dcaa80, sub_dd7130
*/
void sub_dcd5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd5d0ULL || rel >= 0xdcd660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcd660 size=112 callers=1 calls=2
   calls: circuit, sub_dcaa80
*/
void sub_dcd660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd660ULL || rel >= 0xdcd6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcd6d0 size=240 callers=1 calls=2
   calls: sub_13e50b0, sub_dcaa80
*/
void sub_dcd6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd6d0ULL || rel >= 0xdcd7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcd7c0 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dcd7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd7c0ULL || rel >= 0xdcd830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcd830 size=16 callers=0 calls=0
*/
void sub_dcd830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd830ULL || rel >= 0xdcd840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcd840 size=16 callers=0 calls=0
*/
void sub_dcd840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd840ULL || rel >= 0xdcd850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcd850 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dcd850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd850ULL || rel >= 0xdcd8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcd8c0 size=112 callers=0 calls=1
   calls: sub_dadb70
*/
void sub_dcd8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd8c0ULL || rel >= 0xdcd930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcd930 size=992 callers=1 calls=5
   calls: sub_5cbcf0, sub_d2dcc0, sub_dcdd10, sub_dcde50, sub_dcdf60
*/
void sub_dcd930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd930ULL || rel >= 0xdcdd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcdd10 size=320 callers=2 calls=3
   calls: sub_d2b260, sub_d2bdf0, sub_d2bfc0
*/
void sub_dcdd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcdd10ULL || rel >= 0xdcde50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcde50 size=272 callers=1 calls=2
   calls: PartsA3, sub_cca0a0
*/
void sub_dcde50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcde50ULL || rel >= 0xdcdf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcdf60 size=400 callers=1 calls=2
   calls: PartsA3_2, sub_cca0a0
*/
void sub_dcdf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcdf60ULL || rel >= 0xdce0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce0f0 size=400 callers=1 calls=2
   calls: sub_c6cfa0, sub_c82090
   ref: PartsA3
*/
void PartsA3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce0f0ULL || rel >= 0xdce280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce280 size=16 callers=0 calls=0
*/
void sub_dce280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce280ULL || rel >= 0xdce290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce290 size=16 callers=0 calls=0
*/
void sub_dce290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce290ULL || rel >= 0xdce2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce2a0 size=496 callers=0 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2010, sub_dce750, sub_dceac0
*/
void sub_dce2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce2a0ULL || rel >= 0xdce490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce490 size=576 callers=0 calls=3
   calls: sub_972c70, sub_c6a2d0, sub_dcec80
*/
void sub_dce490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce490ULL || rel >= 0xdce6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce6d0 size=16 callers=0 calls=0
*/
void sub_dce6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce6d0ULL || rel >= 0xdce6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce6e0 size=16 callers=0 calls=0
*/
void sub_dce6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce6e0ULL || rel >= 0xdce6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce6f0 size=16 callers=0 calls=0
*/
void sub_dce6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce6f0ULL || rel >= 0xdce700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce700 size=16 callers=0 calls=0
*/
void sub_dce700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce700ULL || rel >= 0xdce710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce710 size=16 callers=0 calls=0
*/
void sub_dce710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce710ULL || rel >= 0xdce720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce720 size=16 callers=0 calls=0
*/
void sub_dce720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce720ULL || rel >= 0xdce730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce730 size=16 callers=0 calls=0
*/
void sub_dce730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce730ULL || rel >= 0xdce740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce740 size=16 callers=0 calls=0
*/
void sub_dce740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce740ULL || rel >= 0xdce750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce750 size=336 callers=2 calls=3
   calls: sub_c63670, sub_c829d0, sub_dce8a0
*/
void sub_dce750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce750ULL || rel >= 0xdce8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce8a0 size=304 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_68d930, sub_96c6c0
*/
void sub_dce8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce8a0ULL || rel >= 0xdce9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dce9d0 size=240 callers=2 calls=1
   calls: sub_13a6920
*/
void sub_dce9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce9d0ULL || rel >= 0xdceac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dceac0 size=384 callers=1 calls=2
   calls: sub_5d1b50, sub_5d7670
*/
void sub_dceac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdceac0ULL || rel >= 0xdcec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcec40 size=16 callers=0 calls=0
*/
void sub_dcec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcec40ULL || rel >= 0xdcec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcec50 size=16 callers=0 calls=0
*/
void sub_dcec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcec50ULL || rel >= 0xdcec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcec60 size=16 callers=0 calls=0
*/
void sub_dcec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcec60ULL || rel >= 0xdcec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcec70 size=16 callers=0 calls=0
*/
void sub_dcec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcec70ULL || rel >= 0xdcec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcec80 size=592 callers=1 calls=5
   calls: sub_59b250, sub_5b9220, sub_607750, sub_b33a30, sub_b4c060
*/
void sub_dcec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcec80ULL || rel >= 0xdceed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dceed0 size=272 callers=1 calls=2
   calls: sub_c6cfa0, sub_c82090
   ref: PartsA3
*/
void PartsA3_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdceed0ULL || rel >= 0xdcefe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcefe0 size=16 callers=0 calls=0
*/
void sub_dcefe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcefe0ULL || rel >= 0xdceff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dceff0 size=16 callers=0 calls=0
*/
void sub_dceff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdceff0ULL || rel >= 0xdcf000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf000 size=496 callers=0 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2010, sub_dce750, sub_dcf3a0
*/
void sub_dcf000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf000ULL || rel >= 0xdcf1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf1f0 size=80 callers=0 calls=1
   calls: sub_c6a2d0
*/
void sub_dcf1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf1f0ULL || rel >= 0xdcf240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf240 size=16 callers=0 calls=0
*/
void sub_dcf240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf240ULL || rel >= 0xdcf250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf250 size=16 callers=0 calls=0
*/
void sub_dcf250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf250ULL || rel >= 0xdcf260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf260 size=16 callers=0 calls=0
*/
void sub_dcf260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf260ULL || rel >= 0xdcf270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf270 size=16 callers=0 calls=0
*/
void sub_dcf270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf270ULL || rel >= 0xdcf280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf280 size=16 callers=0 calls=0
*/
void sub_dcf280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf280ULL || rel >= 0xdcf290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf290 size=16 callers=0 calls=0
*/
void sub_dcf290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf290ULL || rel >= 0xdcf2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf2a0 size=16 callers=0 calls=0
*/
void sub_dcf2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf2a0ULL || rel >= 0xdcf2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf2b0 size=240 callers=2 calls=1
   calls: sub_13a6920
*/
void sub_dcf2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf2b0ULL || rel >= 0xdcf3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf3a0 size=384 callers=1 calls=2
   calls: sub_5d1b50, sub_5d7670
*/
void sub_dcf3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf3a0ULL || rel >= 0xdcf520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf520 size=16 callers=0 calls=0
*/
void sub_dcf520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf520ULL || rel >= 0xdcf530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf530 size=16 callers=0 calls=0
*/
void sub_dcf530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf530ULL || rel >= 0xdcf540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf540 size=16 callers=0 calls=0
*/
void sub_dcf540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf540ULL || rel >= 0xdcf550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf550 size=16 callers=0 calls=0
*/
void sub_dcf550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf550ULL || rel >= 0xdcf560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcf560 size=1456 callers=1 calls=12
   calls: sub_1306f20, sub_14ab180, sub_14ab440, sub_14abc90, sub_14ac3c0, sub_14ad840, sub_5e2930, sub_685230, sub_685850, sub_c48c70, sub_c4a100, sub_ee49b0
*/
void sub_dcf560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf560ULL || rel >= 0xdcfb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcfb10 size=288 callers=1 calls=4
   calls: circuit, sub_1308200, sub_13e4fc0, sub_13e52f0
*/
void sub_dcfb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcfb10ULL || rel >= 0xdcfc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcfc30 size=448 callers=2 calls=3
   calls: sub_13e4d60, sub_13e4fc0, sub_13e50b0
   ref: script/circuit.dat
*/
void circuit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcfc30ULL || rel >= 0xdcfdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dcfdf0 size=3088 callers=1 calls=4
   calls: sub_11063e0, sub_11065b0, sub_11067c0, sub_1106f30
   ref: BALLOON_EFFECT_SCALE
   ref: SPIN_RECOVERY_FRAMES
   ref: RANK_TH_NORMAL
   ref: SPIN_TURN_STEP
   ref: START_DASH_ACCEPT_FRAMES
   ref: WATT_CHECKPOINT_FACT
   ref: GOAL_WAIT_FRAMES
   ref: RANK_TH_EASY
*/
void CHECKPOINT_MODEL_SCALE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcfdf0ULL || rel >= 0xdd0a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd0a00 size=3392 callers=1 calls=15
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_11067c0, sub_11069b0, sub_1106cd0, sub_1106f30, sub_dd1740, sub_dd1940, sub_dd1a70, sub_dd1ba0
   ... +3 more
   ref: mileStones
   ref: weight
   ref: uniqueID
   ref: balloons
   ref: checkPoints
   ref: nameHash
   ref: dispName
   ref: initRot
*/
void balloonGroups(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd0a00ULL || rel >= 0xdd1740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd1740 size=512 callers=1 calls=2
   calls: sub_d0c0, sub_dd1d70
*/
void sub_dd1740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd1740ULL || rel >= 0xdd1940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd1940 size=304 callers=1 calls=1
   calls: sub_dd1f00
*/
void sub_dd1940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd1940ULL || rel >= 0xdd1a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd1a70 size=304 callers=1 calls=1
   calls: sub_dd2090
*/
void sub_dd1a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd1a70ULL || rel >= 0xdd1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd1ba0 size=464 callers=1 calls=2
   calls: sub_dd2220, sub_dd2330
*/
void sub_dd1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd1ba0ULL || rel >= 0xdd1d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd1d70 size=400 callers=1 calls=1
   calls: sub_6a54a0
*/
void sub_dd1d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd1d70ULL || rel >= 0xdd1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd1f00 size=400 callers=1 calls=1
   calls: sub_6a54a0
*/
void sub_dd1f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd1f00ULL || rel >= 0xdd2090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd2090 size=400 callers=1 calls=1
   calls: sub_6a54a0
*/
void sub_dd2090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd2090ULL || rel >= 0xdd2220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd2220 size=272 callers=4 calls=1
   calls: sub_5cfaf0
*/
void sub_dd2220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd2220ULL || rel >= 0xdd2330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd2330 size=400 callers=1 calls=1
   calls: sub_6a54a0
*/
void sub_dd2330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd2330ULL || rel >= 0xdd24c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd24c0 size=544 callers=1 calls=0
*/
void sub_dd24c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd24c0ULL || rel >= 0xdd26e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd26e0 size=544 callers=1 calls=0
*/
void sub_dd26e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd26e0ULL || rel >= 0xdd2900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd2900 size=304 callers=1 calls=0
*/
void sub_dd2900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd2900ULL || rel >= 0xdd2a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd2a30 size=240 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_dd2a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd2a30ULL || rel >= 0xdd2b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd2b20 size=272 callers=1 calls=2
   calls: sub_dce9d0, sub_dcf2b0
*/
void sub_dd2b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd2b20ULL || rel >= 0xdd2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd2c30 size=320 callers=4 calls=2
   calls: sub_e3e380, sub_e40260
*/
void sub_dd2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd2c30ULL || rel >= 0xdd2d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd2d70 size=480 callers=1 calls=2
   calls: sub_ea3d10, sub_ea47d0
*/
void sub_dd2d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd2d70ULL || rel >= 0xdd2f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd2f50 size=320 callers=2 calls=3
   calls: sub_13ca950, sub_c9f940, sub_dd3530
*/
void sub_dd2f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd2f50ULL || rel >= 0xdd3090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd3090 size=912 callers=1 calls=4
   calls: sub_5cbcf0, sub_5cfad0, sub_dd4a00, sub_dd4b50
*/
void sub_dd3090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3090ULL || rel >= 0xdd3420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd3420 size=272 callers=2 calls=2
   calls: sub_13ca860, sub_5cbcf0
*/
void sub_dd3420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3420ULL || rel >= 0xdd3530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd3530 size=384 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_dd3530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3530ULL || rel >= 0xdd36b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd36b0 size=80 callers=0 calls=0
*/
void sub_dd36b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd36b0ULL || rel >= 0xdd3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd3700 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_dd3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3700ULL || rel >= 0xdd37b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd37b0 size=944 callers=0 calls=6
   calls: sub_13a6920, sub_59a4f0, sub_971950, sub_b44bb0, sub_c6ceb0, sub_dcaa80
*/
void sub_dd37b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd37b0ULL || rel >= 0xdd3b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd3b60 size=352 callers=0 calls=3
   calls: sub_13a6920, sub_59a4f0, sub_b44bb0
*/
void sub_dd3b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3b60ULL || rel >= 0xdd3cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd3cc0 size=32 callers=0 calls=0
*/
void sub_dd3cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3cc0ULL || rel >= 0xdd3ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd3ce0 size=32 callers=0 calls=0
*/
void sub_dd3ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3ce0ULL || rel >= 0xdd3d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd3d00 size=80 callers=0 calls=0
*/
void sub_dd3d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3d00ULL || rel >= 0xdd3d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd3d50 size=32 callers=0 calls=0
*/
void sub_dd3d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3d50ULL || rel >= 0xdd3d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd3d70 size=192 callers=0 calls=3
   calls: Play_PL_Foley_Bicycle_Recover, sub_972c70, sub_d45ab0
*/
void sub_dd3d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3d70ULL || rel >= 0xdd3e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd3e30 size=80 callers=0 calls=0
*/
void sub_dd3e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3e30ULL || rel >= 0xdd3e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd3e80 size=80 callers=0 calls=0
*/
void sub_dd3e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3e80ULL || rel >= 0xdd3ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd3ed0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_dd3ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3ed0ULL || rel >= 0xdd3f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd3f80 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_dd3f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3f80ULL || rel >= 0xdd4030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd4030 size=80 callers=0 calls=0
*/
void sub_dd4030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd4030ULL || rel >= 0xdd4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd4080 size=80 callers=0 calls=0
*/
void sub_dd4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd4080ULL || rel >= 0xdd40d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd40d0 size=592 callers=0 calls=6
   calls: sub_13a6920, sub_794330, sub_c6ccb0, sub_c99b80, sub_ca0110, sub_dcaa80
   ref: Play_Prop_Gimmick_Get_Baloon
*/
void Play_Prop_Gimmick_Get_Baloon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd40d0ULL || rel >= 0xdd4320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd4320 size=496 callers=0 calls=6
   calls: sub_13a6920, sub_c6ccb0, sub_c83540, sub_c9f940, sub_ea7c40, sub_ea8c70
   ref: Play_PL_Foley_Bicycle_Spin
*/
void Play_PL_Foley_Bicycle_Spin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd4320ULL || rel >= 0xdd4510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd4510 size=416 callers=0 calls=4
   calls: sub_13a6920, sub_59a4f0, sub_972c70, sub_b44bb0
*/
void sub_dd4510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd4510ULL || rel >= 0xdd46b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd46b0 size=576 callers=1 calls=5
   calls: sub_971950, sub_c6ceb0, sub_c83540, sub_ea3d10, sub_ea4810
   ref: Play_PL_Foley_Bicycle_Recover
*/
void Play_PL_Foley_Bicycle_Recover(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd46b0ULL || rel >= 0xdd48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd48f0 size=272 callers=1 calls=2
   calls: sub_14ab0c0, sub_14ab2b0
*/
void sub_dd48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd48f0ULL || rel >= 0xdd4a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd4a00 size=336 callers=1 calls=0
*/
void sub_dd4a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd4a00ULL || rel >= 0xdd4b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd4b50 size=752 callers=1 calls=3
   calls: sub_5cbcf0, sub_5cfad0, sub_972c70
*/
void sub_dd4b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd4b50ULL || rel >= 0xdd4e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd4e40 size=240 callers=7 calls=1
   calls: sub_c657d0
*/
void sub_dd4e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd4e40ULL || rel >= 0xdd4f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd4f30 size=848 callers=1 calls=1
   calls: sub_dd5280
*/
void sub_dd4f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd4f30ULL || rel >= 0xdd5280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd5280 size=1984 callers=4 calls=2
   calls: sub_dd2220, sub_dd5a40
*/
void sub_dd5280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd5280ULL || rel >= 0xdd5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd5a40 size=1872 callers=1 calls=0
*/
void sub_dd5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd5a40ULL || rel >= 0xdd6190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd6190 size=2160 callers=3 calls=3
   calls: sub_dd6190, sub_dd6a00, sub_dd6bb0
*/
void sub_dd6190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd6190ULL || rel >= 0xdd6a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd6a00 size=432 callers=4 calls=0
*/
void sub_dd6a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd6a00ULL || rel >= 0xdd6bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd6bb0 size=928 callers=2 calls=1
   calls: sub_dd6a00
*/
void sub_dd6bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd6bb0ULL || rel >= 0xdd6f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd6f50 size=480 callers=1 calls=1
   calls: sub_dd5280
*/
void sub_dd6f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd6f50ULL || rel >= 0xdd7130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7130 size=496 callers=1 calls=1
   calls: sub_dd5280
*/
void sub_dd7130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7130ULL || rel >= 0xdd7320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7320 size=272 callers=2 calls=1
   calls: sub_5e2bc0
*/
void sub_dd7320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7320ULL || rel >= 0xdd7430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7430 size=48 callers=0 calls=1
   calls: sub_dd7320
*/
void sub_dd7430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7430ULL || rel >= 0xdd7460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7460 size=16 callers=0 calls=0
*/
void sub_dd7460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7460ULL || rel >= 0xdd7470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7470 size=16 callers=0 calls=0
*/
void sub_dd7470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7470ULL || rel >= 0xdd7480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7480 size=16 callers=0 calls=0
*/
void sub_dd7480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7480ULL || rel >= 0xdd7490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7490 size=16 callers=0 calls=0
*/
void sub_dd7490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7490ULL || rel >= 0xdd74a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd74a0 size=16 callers=0 calls=0
*/
void sub_dd74a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd74a0ULL || rel >= 0xdd74b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd74b0 size=64 callers=0 calls=1
   calls: sub_14ab440
*/
void sub_dd74b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd74b0ULL || rel >= 0xdd74f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd74f0 size=80 callers=0 calls=1
   calls: sub_14ab510
*/
void sub_dd74f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd74f0ULL || rel >= 0xdd7540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7540 size=32 callers=0 calls=0
*/
void sub_dd7540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7540ULL || rel >= 0xdd7560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7560 size=16 callers=0 calls=0
*/
void sub_dd7560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7560ULL || rel >= 0xdd7570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7570 size=80 callers=0 calls=1
   calls: sub_14ab0c0
*/
void sub_dd7570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7570ULL || rel >= 0xdd75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd75c0 size=96 callers=0 calls=1
   calls: sub_14ab2b0
*/
void sub_dd75c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd75c0ULL || rel >= 0xdd7620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7620 size=416 callers=7 calls=4
   calls: sub_5e2bc0, sub_dd2c30, sub_dd7320, sub_dd78e0
*/
void sub_dd7620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7620ULL || rel >= 0xdd77c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd77c0 size=288 callers=0 calls=3
   calls: sub_dd79d0, sub_dd7aa0, sub_dd7b20
*/
void sub_dd77c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd77c0ULL || rel >= 0xdd78e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd78e0 size=240 callers=4 calls=0
*/
void sub_dd78e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd78e0ULL || rel >= 0xdd79d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd79d0 size=208 callers=3 calls=1
   calls: sub_dd79d0
*/
void sub_dd79d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd79d0ULL || rel >= 0xdd7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7aa0 size=128 callers=3 calls=1
   calls: sub_dd7aa0
*/
void sub_dd7aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7aa0ULL || rel >= 0xdd7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7b20 size=160 callers=3 calls=1
   calls: sub_dd7b20
*/
void sub_dd7b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7b20ULL || rel >= 0xdd7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7bc0 size=128 callers=2 calls=1
   calls: sub_dd7bc0
*/
void sub_dd7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7bc0ULL || rel >= 0xdd7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7c40 size=848 callers=1 calls=2
   calls: sub_6835f0, sub_e81d70
*/
void sub_dd7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7c40ULL || rel >= 0xdd7f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd7f90 size=256 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_dd7f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7f90ULL || rel >= 0xdd8090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd8090 size=16 callers=0 calls=0
*/
void sub_dd8090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd8090ULL || rel >= 0xdd80a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd80a0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_dd80a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd80a0ULL || rel >= 0xdd8110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd8110 size=16 callers=0 calls=0
*/
void sub_dd8110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd8110ULL || rel >= 0xdd8120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd8120 size=592 callers=0 calls=8
   calls: sub_14ac3c0, sub_971950, sub_972c70, sub_c44530, sub_c9f940, sub_cea130, sub_dcaa80, sub_dd88b0
*/
void sub_dd8120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd8120ULL || rel >= 0xdd8370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd8370 size=1040 callers=0 calls=14
   calls: sub_13a6920, sub_14ab0c0, sub_14ab2b0, sub_14ac3c0, sub_794330, sub_c43ed0, sub_c44310, sub_c6ccb0, sub_c99b80, sub_c9f940, sub_ca0110, sub_d45ab0
   ... +2 more
   ref: Play_UI_Lcircuit_Start
   ref: Play_bgm_or_st_sys03
*/
void Play_UI_Lcircuit_Start(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd8370ULL || rel >= 0xdd8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd8780 size=16 callers=0 calls=0
*/
void sub_dd8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd8780ULL || rel >= 0xdd8790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd8790 size=16 callers=0 calls=0
*/
void sub_dd8790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd8790ULL || rel >= 0xdd87a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd87a0 size=16 callers=0 calls=0
*/
void sub_dd87a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd87a0ULL || rel >= 0xdd87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd87b0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_dd87b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd87b0ULL || rel >= 0xdd8820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd8820 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_dd8820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd8820ULL || rel >= 0xdd8890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd8890 size=16 callers=0 calls=0
*/
void sub_dd8890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd8890ULL || rel >= 0xdd88a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd88a0 size=16 callers=0 calls=0
*/
void sub_dd88a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd88a0ULL || rel >= 0xdd88b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd88b0 size=816 callers=1 calls=12
   calls: sub_13a6920, sub_14ab0c0, sub_14ab200, sub_14ac3c0, sub_14e08d0, sub_c6ceb0, sub_c9f940, sub_d3e090, sub_d44d60, sub_dd78e0, sub_dd8be0, sub_ffa7a0
*/
void sub_dd88b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd88b0ULL || rel >= 0xdd8be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd8be0 size=1200 callers=1 calls=3
   calls: sub_dd5280, sub_dd9090, sub_dd91d0
*/
void sub_dd8be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd8be0ULL || rel >= 0xdd9090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd9090 size=320 callers=2 calls=0
*/
void sub_dd9090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd9090ULL || rel >= 0xdd91d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd91d0 size=352 callers=2 calls=2
   calls: sub_dd9330, sub_ddaaa0
*/
void sub_dd91d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd91d0ULL || rel >= 0xdd9330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd9330 size=2912 callers=3 calls=3
   calls: sub_dd9330, sub_dd9e90, sub_dda430
*/
void sub_dd9330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd9330ULL || rel >= 0xdd9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dd9e90 size=784 callers=4 calls=0
*/
void sub_dd9e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd9e90ULL || rel >= 0xdda1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dda1a0 size=656 callers=0 calls=0
*/
void sub_dda1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdda1a0ULL || rel >= 0xdda430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dda430 size=1648 callers=2 calls=1
   calls: sub_dd9e90
*/
void sub_dda430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdda430ULL || rel >= 0xddaaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddaaa0 size=544 callers=1 calls=0
*/
void sub_ddaaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddaaa0ULL || rel >= 0xddacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddacc0 size=256 callers=2 calls=1
   calls: sub_ddadc0
*/
void sub_ddacc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddacc0ULL || rel >= 0xddadc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddadc0 size=416 callers=10 calls=2
   calls: sub_5cbcf0, sub_5cfad0
*/
void sub_ddadc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddadc0ULL || rel >= 0xddaf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddaf60 size=112 callers=0 calls=0
*/
void sub_ddaf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddaf60ULL || rel >= 0xddafd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddafd0 size=112 callers=0 calls=0
*/
void sub_ddafd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddafd0ULL || rel >= 0xddb040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddb040 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_ddb040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb040ULL || rel >= 0xddb0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddb0b0 size=16 callers=0 calls=0
*/
void sub_ddb0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb0b0ULL || rel >= 0xddb0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddb0c0 size=480 callers=0 calls=5
   calls: sub_13a6920, sub_c6ceb0, sub_c9f940, sub_dcaa80, sub_dd4e40
*/
void sub_ddb0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb0c0ULL || rel >= 0xddb2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddb2a0 size=64 callers=0 calls=0
*/
void sub_ddb2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb2a0ULL || rel >= 0xddb2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddb2e0 size=256 callers=0 calls=1
   calls: sub_dcaa80
*/
void sub_ddb2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb2e0ULL || rel >= 0xddb3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddb3e0 size=112 callers=0 calls=0
*/
void sub_ddb3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb3e0ULL || rel >= 0xddb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddb450 size=112 callers=0 calls=0
*/
void sub_ddb450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb450ULL || rel >= 0xddb4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddb4c0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_ddb4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb4c0ULL || rel >= 0xddb530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ddb530 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_ddb530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb530ULL || rel >= 0xddb5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

