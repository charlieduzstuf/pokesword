/* main functions 00d830e0..00da7d20 (107 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00d830e0 size=448 callers=1 calls=6
   calls: sub_13575e0, sub_59a520, sub_b4a5e0, sub_ea3d10, sub_ea47d0, sub_ea47e0
*/
void sub_d830e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd830e0ULL || rel >= 0xd832a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d832a0 size=448 callers=1 calls=5
   calls: sub_59a520, sub_5cc540, sub_971950, sub_b4a5e0, sub_d45cd0
*/
void sub_d832a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd832a0ULL || rel >= 0xd83460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83460 size=144 callers=0 calls=0
*/
void sub_d83460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83460ULL || rel >= 0xd834f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d834f0 size=144 callers=0 calls=0
*/
void sub_d834f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd834f0ULL || rel >= 0xd83580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83580 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d83580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83580ULL || rel >= 0xd83630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83630 size=144 callers=0 calls=0
*/
void sub_d83630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83630ULL || rel >= 0xd836c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d836c0 size=144 callers=0 calls=0
*/
void sub_d836c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd836c0ULL || rel >= 0xd83750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83750 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d83750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83750ULL || rel >= 0xd83800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83800 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d83800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83800ULL || rel >= 0xd838b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d838b0 size=144 callers=0 calls=0
*/
void sub_d838b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd838b0ULL || rel >= 0xd83940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83940 size=144 callers=0 calls=0
*/
void sub_d83940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83940ULL || rel >= 0xd839d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d839d0 size=240 callers=1 calls=2
   calls: sub_d83ac0, sub_d842c0
*/
void sub_d839d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd839d0ULL || rel >= 0xd83ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83ac0 size=480 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_d83ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83ac0ULL || rel >= 0xd83ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83ca0 size=112 callers=0 calls=0
*/
void sub_d83ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83ca0ULL || rel >= 0xd83d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83d10 size=112 callers=0 calls=0
*/
void sub_d83d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83d10ULL || rel >= 0xd83d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83d80 size=112 callers=0 calls=0
*/
void sub_d83d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83d80ULL || rel >= 0xd83df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83df0 size=112 callers=0 calls=0
*/
void sub_d83df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83df0ULL || rel >= 0xd83e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83e60 size=112 callers=0 calls=0
*/
void sub_d83e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83e60ULL || rel >= 0xd83ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83ed0 size=112 callers=0 calls=0
*/
void sub_d83ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83ed0ULL || rel >= 0xd83f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83f40 size=16 callers=0 calls=0
*/
void sub_d83f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83f40ULL || rel >= 0xd83f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d83f50 size=304 callers=0 calls=5
   calls: sub_67b990, sub_67bdb0, sub_762930, sub_7670a0, sub_767550
*/
void sub_d83f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd83f50ULL || rel >= 0xd84080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84080 size=304 callers=0 calls=2
   calls: sub_67b990, sub_67be60
*/
void sub_d84080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84080ULL || rel >= 0xd841b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d841b0 size=96 callers=0 calls=1
   calls: sub_d7e1e0
*/
void sub_d841b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd841b0ULL || rel >= 0xd84210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84210 size=128 callers=0 calls=1
   calls: sub_67bdc0
*/
void sub_d84210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84210ULL || rel >= 0xd84290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84290 size=16 callers=0 calls=0
*/
void sub_d84290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84290ULL || rel >= 0xd842a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d842a0 size=16 callers=0 calls=0
*/
void sub_d842a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd842a0ULL || rel >= 0xd842b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d842b0 size=16 callers=0 calls=0
*/
void sub_d842b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd842b0ULL || rel >= 0xd842c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d842c0 size=304 callers=1 calls=0
*/
void sub_d842c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd842c0ULL || rel >= 0xd843f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d843f0 size=80 callers=2 calls=1
   calls: sub_e9d130
*/
void sub_d843f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd843f0ULL || rel >= 0xd84440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84440 size=16 callers=0 calls=0
*/
void sub_d84440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84440ULL || rel >= 0xd84450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84450 size=16 callers=0 calls=0
*/
void sub_d84450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84450ULL || rel >= 0xd84460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84460 size=1152 callers=0 calls=5
   calls: sub_c39c40, sub_c43ed0, sub_c44310, sub_d6ef80, sub_d84aa0
*/
void sub_d84460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84460ULL || rel >= 0xd848e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d848e0 size=16 callers=0 calls=0
*/
void sub_d848e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd848e0ULL || rel >= 0xd848f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d848f0 size=16 callers=0 calls=0
*/
void sub_d848f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd848f0ULL || rel >= 0xd84900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84900 size=16 callers=0 calls=0
*/
void sub_d84900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84900ULL || rel >= 0xd84910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84910 size=16 callers=0 calls=0
*/
void sub_d84910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84910ULL || rel >= 0xd84920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84920 size=16 callers=0 calls=0
*/
void sub_d84920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84920ULL || rel >= 0xd84930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84930 size=16 callers=0 calls=0
*/
void sub_d84930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84930ULL || rel >= 0xd84940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84940 size=16 callers=0 calls=0
*/
void sub_d84940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84940ULL || rel >= 0xd84950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84950 size=16 callers=0 calls=0
*/
void sub_d84950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84950ULL || rel >= 0xd84960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84960 size=16 callers=0 calls=0
*/
void sub_d84960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84960ULL || rel >= 0xd84970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84970 size=304 callers=0 calls=0
*/
void sub_d84970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84970ULL || rel >= 0xd84aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84aa0 size=272 callers=2 calls=3
   calls: sub_672c10, sub_c386f0, sub_d84bb0
*/
void sub_d84aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84aa0ULL || rel >= 0xd84bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84bb0 size=288 callers=1 calls=1
   calls: sub_d84cd0
*/
void sub_d84bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84bb0ULL || rel >= 0xd84cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84cd0 size=384 callers=1 calls=4
   calls: sub_5c6990, sub_68ac20, sub_7c2da0, sub_ea04c0
*/
void sub_d84cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84cd0ULL || rel >= 0xd84e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84e50 size=128 callers=0 calls=0
*/
void sub_d84e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84e50ULL || rel >= 0xd84ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d84ed0 size=368 callers=0 calls=0
*/
void sub_d84ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84ed0ULL || rel >= 0xd85040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d85040 size=736 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd85040ULL || rel >= 0xd85320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d85320 size=1184 callers=0 calls=14
   calls: sub_65f1c0, sub_794490, sub_d68750, sub_d6edc0, sub_d6eef0, sub_d6ef00, sub_d6ef40, sub_d857c0, sub_d85df0, sub_d85f40, sub_d89dd0, sub_d8bb60
   ... +2 more
   ref: TestBGM
*/
void TestBGM(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd85320ULL || rel >= 0xd857c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d857c0 size=1584 callers=1 calls=14
   calls: Group9, sub_14dbec0, sub_5c6e60, sub_602c10, sub_b58470, sub_d89890, sub_d89970, sub_d89cf0, sub_e3f750, sub_e42f20, sub_ea0fd0, sub_ed30a0
   ... +2 more
*/
void sub_d857c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd857c0ULL || rel >= 0xd85df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d85df0 size=336 callers=1 calls=5
   calls: sub_14dbff0, sub_14df040, sub_b3abe0, sub_b4c080, sub_e3d0b0
*/
void sub_d85df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd85df0ULL || rel >= 0xd85f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d85f40 size=352 callers=2 calls=1
   calls: sub_5eca40
*/
void sub_d85f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd85f40ULL || rel >= 0xd860a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d860a0 size=464 callers=1 calls=4
   calls: sub_13a6cd0, sub_e9ddb0, sub_e9ddc0, sub_ffa690
*/
void sub_d860a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd860a0ULL || rel >= 0xd86270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d86270 size=2384 callers=0 calls=32
   calls: sub_13a5bb0, sub_1402340, sub_14dbff0, sub_14df040, sub_14df320, sub_5c7ab0, sub_c4fc80, sub_c68570, sub_ca6610, sub_cb5ac0, sub_cc10b0, sub_cc1e30
   ... +20 more
*/
void sub_d86270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd86270ULL || rel >= 0xd86bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d86bc0 size=336 callers=2 calls=1
   calls: sub_5eca40
*/
void sub_d86bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd86bc0ULL || rel >= 0xd86d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d86d10 size=224 callers=1 calls=1
   calls: sub_7c2db0
*/
void sub_d86d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd86d10ULL || rel >= 0xd86df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d86df0 size=1072 callers=1 calls=1
   calls: sub_7c2da0
*/
void sub_d86df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd86df0ULL || rel >= 0xd87220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d87220 size=1168 callers=0 calls=22
   calls: sub_13a6920, sub_14dbf60, sub_14dbff0, sub_14dc050, sub_14df3f0, sub_c67b40, sub_c79200, sub_ca7d40, sub_cb5bc0, sub_cc7c50, sub_d28d20, sub_d616d0
   ... +10 more
*/
void sub_d87220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd87220ULL || rel >= 0xd876b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d876b0 size=80 callers=0 calls=4
   calls: sub_d87700, sub_d98960, sub_e4cc50, sub_e58260
*/
void sub_d876b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd876b0ULL || rel >= 0xd87700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d87700 size=1840 callers=1 calls=6
   calls: sub_5c7eb0, sub_5c8060, sub_5c8200, sub_5cbcf0, sub_967240, sub_d28d20
*/
void sub_d87700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd87700ULL || rel >= 0xd87e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d87e30 size=144 callers=0 calls=1
   calls: sub_d86bc0
*/
void sub_d87e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd87e30ULL || rel >= 0xd87ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d87ec0 size=144 callers=0 calls=1
   calls: sub_d85f40
*/
void sub_d87ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd87ec0ULL || rel >= 0xd87f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d87f50 size=1536 callers=0 calls=10
   calls: Offline, sub_13a6920, sub_969d40, sub_c81100, sub_c89100, sub_ca8e20, sub_ce0900, sub_cec7f0, sub_cf1270, sub_e51c10
*/
void sub_d87f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd87f50ULL || rel >= 0xd88550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d88550 size=48 callers=0 calls=1
   calls: sub_d8bca0
*/
void sub_d88550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd88550ULL || rel >= 0xd88580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d88580 size=3024 callers=1 calls=33
   calls: Set_State_Stadium_Intro, sub_12fa580, sub_12fca10, sub_135a2d0, sub_135a3c0, sub_13a6cd0, sub_14df4b0, sub_14dfb80, sub_14e08d0, sub_969be0, sub_969d40, sub_c44210
   ... +21 more
   ref: _ZN2nn3ldn22SetStationAcceptPolicyENS0_12AcceptPolicyE
*/
void nn_ldn_SetStationAcceptPolicy_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd88580ULL || rel >= 0xd89150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89150 size=656 callers=1 calls=3
   calls: sub_13cce40, sub_c687b0, sub_d89f90
*/
void sub_d89150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89150ULL || rel >= 0xd893e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d893e0 size=368 callers=1 calls=4
   calls: sub_969d40, sub_c81100, sub_c89100, sub_ca8e20
*/
void sub_d893e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd893e0ULL || rel >= 0xd89550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89550 size=400 callers=0 calls=1
   calls: sub_5c6a10
*/
void sub_d89550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89550ULL || rel >= 0xd896e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d896e0 size=16 callers=0 calls=0
*/
void sub_d896e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd896e0ULL || rel >= 0xd896f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d896f0 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_d896f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd896f0ULL || rel >= 0xd89760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89760 size=16 callers=0 calls=0
*/
void sub_d89760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89760ULL || rel >= 0xd89770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89770 size=16 callers=0 calls=0
*/
void sub_d89770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89770ULL || rel >= 0xd89780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89780 size=16 callers=0 calls=0
*/
void sub_d89780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89780ULL || rel >= 0xd89790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89790 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_d89790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89790ULL || rel >= 0xd89800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89800 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_d89800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89800ULL || rel >= 0xd89870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89870 size=16 callers=0 calls=0
*/
void sub_d89870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89870ULL || rel >= 0xd89880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89880 size=16 callers=0 calls=0
*/
void sub_d89880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89880ULL || rel >= 0xd89890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89890 size=224 callers=1 calls=1
   calls: sub_e3f4d0
*/
void sub_d89890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89890ULL || rel >= 0xd89970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89970 size=304 callers=1 calls=3
   calls: sub_d89aa0, sub_e937c0, sub_e93d00
*/
void sub_d89970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89970ULL || rel >= 0xd89aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89aa0 size=336 callers=1 calls=0
*/
void sub_d89aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89aa0ULL || rel >= 0xd89bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89bf0 size=128 callers=0 calls=0
*/
void sub_d89bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89bf0ULL || rel >= 0xd89c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89c70 size=128 callers=0 calls=0
*/
void sub_d89c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89c70ULL || rel >= 0xd89cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89cf0 size=224 callers=1 calls=1
   calls: sub_d985a0
*/
void sub_d89cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89cf0ULL || rel >= 0xd89dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89dd0 size=224 callers=1 calls=1
   calls: sub_d8b8f0
*/
void sub_d89dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89dd0ULL || rel >= 0xd89eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89eb0 size=32 callers=0 calls=0
*/
void sub_d89eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89eb0ULL || rel >= 0xd89ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89ed0 size=16 callers=0 calls=0
*/
void sub_d89ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89ed0ULL || rel >= 0xd89ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89ee0 size=16 callers=0 calls=0
*/
void sub_d89ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89ee0ULL || rel >= 0xd89ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89ef0 size=16 callers=0 calls=0
*/
void sub_d89ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89ef0ULL || rel >= 0xd89f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89f00 size=32 callers=0 calls=0
*/
void sub_d89f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89f00ULL || rel >= 0xd89f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89f20 size=16 callers=0 calls=0
*/
void sub_d89f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89f20ULL || rel >= 0xd89f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89f30 size=16 callers=0 calls=0
*/
void sub_d89f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89f30ULL || rel >= 0xd89f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89f40 size=16 callers=0 calls=0
*/
void sub_d89f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89f40ULL || rel >= 0xd89f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89f50 size=16 callers=0 calls=0
*/
void sub_d89f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89f50ULL || rel >= 0xd89f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89f60 size=16 callers=0 calls=0
*/
void sub_d89f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89f60ULL || rel >= 0xd89f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89f70 size=16 callers=0 calls=0
*/
void sub_d89f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89f70ULL || rel >= 0xd89f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89f80 size=16 callers=0 calls=0
*/
void sub_d89f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89f80ULL || rel >= 0xd89f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d89f90 size=3008 callers=3 calls=3
   calls: sub_d89f90, sub_d8ab50, sub_d8ade0
*/
void sub_d89f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd89f90ULL || rel >= 0xd8ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8ab50 size=656 callers=4 calls=0
*/
void sub_d8ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8ab50ULL || rel >= 0xd8ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8ade0 size=1408 callers=2 calls=1
   calls: sub_d8ab50
*/
void sub_d8ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8ade0ULL || rel >= 0xd8b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8b360 size=208 callers=0 calls=6
   calls: Corridor, nn_ldn_SetStationAcceptPolicy_3, sub_ca7e60, sub_cb5bd0, sub_d6edc0, sub_e43530
*/
void sub_d8b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8b360ULL || rel >= 0xd8b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8b430 size=16 callers=0 calls=0
*/
void sub_d8b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8b430ULL || rel >= 0xd8b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8b440 size=16 callers=0 calls=0
*/
void sub_d8b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8b440ULL || rel >= 0xd8b450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8b450 size=16 callers=0 calls=0
*/
void sub_d8b450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8b450ULL || rel >= 0xd8b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8b460 size=16 callers=0 calls=0
*/
void sub_d8b460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8b460ULL || rel >= 0xd8b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8b470 size=16 callers=0 calls=0
*/
void sub_d8b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8b470ULL || rel >= 0xd8b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8b480 size=16 callers=0 calls=0
*/
void sub_d8b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8b480ULL || rel >= 0xd8b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8b490 size=16 callers=0 calls=0
*/
void sub_d8b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8b490ULL || rel >= 0xd8b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8b4a0 size=368 callers=0 calls=0
*/
void sub_d8b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8b4a0ULL || rel >= 0xd8b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8b610 size=736 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8b610ULL || rel >= 0xd8b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8b8f0 size=176 callers=2 calls=1
   calls: sub_c60e50
*/
void sub_d8b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8b8f0ULL || rel >= 0xd8b9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8b9a0 size=112 callers=0 calls=0
*/
void sub_d8b9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8b9a0ULL || rel >= 0xd8ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8ba10 size=112 callers=0 calls=0
*/
void sub_d8ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8ba10ULL || rel >= 0xd8ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8ba80 size=112 callers=0 calls=0
*/
void sub_d8ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8ba80ULL || rel >= 0xd8baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8baf0 size=112 callers=0 calls=0
*/
void sub_d8baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8baf0ULL || rel >= 0xd8bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8bb60 size=224 callers=1 calls=1
   calls: sub_d91ce0
*/
void sub_d8bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8bb60ULL || rel >= 0xd8bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8bc40 size=96 callers=1 calls=0
*/
void sub_d8bc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8bc40ULL || rel >= 0xd8bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8bca0 size=416 callers=1 calls=6
   calls: Play_UI_common_decide, sub_1400540, sub_1400560, sub_caadc0, sub_d8be40, sub_d8c690
*/
void sub_d8bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8bca0ULL || rel >= 0xd8be40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8be40 size=736 callers=1 calls=8
   calls: sub_135a1a0, sub_14e0920, sub_ce00e0, sub_d28d20, sub_d634d0, sub_ea3d10, sub_ea4760, sub_f9cab0
*/
void sub_d8be40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8be40ULL || rel >= 0xd8c120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8c120 size=1392 callers=1 calls=30
   calls: APPEAR_POKEMON_2, Play_SceneTransition_Footsteps, Play_UI_common_decide_2, sub_13f67a0, sub_1400350, sub_14004b0, sub_1402490, sub_794330, sub_d25bd0, sub_d28d20, sub_d45b60, sub_d466b0
   ... +18 more
   ref: Play_UI_common_decide
*/
void Play_UI_common_decide(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8c120ULL || rel >= 0xd8c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8c690 size=1152 callers=1 calls=15
   calls: sub_134aa70, sub_13f67a0, sub_d05ee0, sub_d28d20, sub_d8cb10, sub_d915e0, sub_d918b0, sub_d91bf0, sub_d98330, sub_d983d0, sub_dcc5b0, sub_dcc6b0
   ... +3 more
*/
void sub_d8c690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8c690ULL || rel >= 0xd8cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8cb10 size=896 callers=2 calls=8
   calls: sub_135a760, sub_13a1320, sub_13a16c0, sub_13a1800, sub_13a2880, sub_13e35e0, sub_d0c0, sub_d920c0
*/
void sub_d8cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8cb10ULL || rel >= 0xd8ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8ce90 size=752 callers=1 calls=5
   calls: sub_13a5bb0, sub_1401490, sub_1402550, sub_d25bd0, sub_d920c0
*/
void sub_d8ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8ce90ULL || rel >= 0xd8d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8d180 size=832 callers=1 calls=6
   calls: sub_135a760, sub_13a5bb0, sub_1401490, sub_1402550, sub_d25bd0, sub_d920c0
*/
void sub_d8d180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8d180ULL || rel >= 0xd8d4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8d4c0 size=672 callers=1 calls=5
   calls: sub_13a5bb0, sub_1401490, sub_1402550, sub_d25bd0, sub_d920c0
*/
void sub_d8d4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8d4c0ULL || rel >= 0xd8d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8d760 size=4480 callers=1 calls=27
   calls: sub_134aa70, sub_1401b20, sub_1c0, sub_5c68f0, sub_5cfaf0, sub_767810, sub_767950, sub_7847d0, sub_972c70, sub_b4c060, sub_c60e50, sub_c60f40
   ... +15 more
   ref: Play_SceneTransition_Footsteps
*/
void Play_SceneTransition_Footsteps(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8d760ULL || rel >= 0xd8e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8e8e0 size=1456 callers=1 calls=11
   calls: sub_135a1a0, sub_1401490, sub_7847f0, sub_caa7b0, sub_cb1610, sub_d28d20, sub_d42e80, sub_d5a3c0, sub_d5a960, sub_d5bd60, sub_d92530
*/
void sub_d8e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8e8e0ULL || rel >= 0xd8ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d8ee90 size=4864 callers=1 calls=22
   calls: sub_1367a30, sub_13a6920, sub_13a6cd0, sub_13ca860, sub_13cce40, sub_13f66b0, sub_1401490, sub_7c19a0, sub_c915b0, sub_d03a70, sub_d28d20, sub_d2eb00
   ... +10 more
*/
void sub_d8ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8ee90ULL || rel >= 0xd90190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d90190 size=2448 callers=1 calls=13
   calls: sub_12faeb0, sub_13a5bb0, sub_13ca860, sub_5cbcf0, sub_cb1610, sub_cdc0d0, sub_cdc200, sub_d075c0, sub_d07d90, sub_d55320, sub_d741b0, sub_d754d0
   ... +1 more
   ref: APPEAR_POKEMON
*/
void APPEAR_POKEMON_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd90190ULL || rel >= 0xd90b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d90b20 size=288 callers=1 calls=5
   calls: sub_5c68f0, sub_cb1610, sub_cb1840, sub_cb2e60, sub_d28d20
*/
void sub_d90b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd90b20ULL || rel >= 0xd90c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d90c40 size=288 callers=4 calls=3
   calls: sub_c38350, sub_d91dc0, sub_e9db40
*/
void sub_d90c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd90c40ULL || rel >= 0xd90d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d90d60 size=256 callers=1 calls=4
   calls: sub_1401b20, sub_ffa4c0, sub_ffa4e0, sub_ffa640
*/
void sub_d90d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd90d60ULL || rel >= 0xd90e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d90e60 size=832 callers=1 calls=9
   calls: sub_1377ab0, sub_1377be0, sub_1377ce0, sub_1377d60, sub_144f170, sub_144f2d0, sub_794330, sub_c3b970, sub_f9cab0
   ref: Play_UI_common_decide
*/
void Play_UI_common_decide_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd90e60ULL || rel >= 0xd911a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d911a0 size=800 callers=1 calls=7
   calls: sub_13a5bb0, sub_762930, sub_762d70, sub_7847d0, sub_ce00e0, sub_d25bd0, sub_d91ad0
*/
void sub_d911a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd911a0ULL || rel >= 0xd914c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d914c0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d91f40, sub_e9db40
*/
void sub_d914c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd914c0ULL || rel >= 0xd915e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d915e0 size=432 callers=3 calls=3
   calls: sub_12f6a50, sub_137bbf0, sub_137bc10
*/
void sub_d915e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd915e0ULL || rel >= 0xd91790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d91790 size=288 callers=1 calls=6
   calls: sub_1367a30, sub_137bb60, sub_137bba0, sub_137bbc0, sub_137bbe0, sub_1401b20
*/
void sub_d91790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd91790ULL || rel >= 0xd918b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d918b0 size=240 callers=4 calls=3
   calls: sub_137bc20, sub_137bc30, sub_d919a0
*/
void sub_d918b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd918b0ULL || rel >= 0xd919a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d919a0 size=304 callers=2 calls=5
   calls: sub_767160, sub_767810, sub_767830, sub_767950, sub_7847d0
*/
void sub_d919a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd919a0ULL || rel >= 0xd91ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d91ad0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d92660, sub_e9db40
*/
void sub_d91ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd91ad0ULL || rel >= 0xd91bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d91bf0 size=240 callers=2 calls=1
   calls: sub_13a6920
*/
void sub_d91bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd91bf0ULL || rel >= 0xd91ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d91ce0 size=224 callers=1 calls=1
   calls: sub_d98260
*/
void sub_d91ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd91ce0ULL || rel >= 0xd91dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d91dc0 size=384 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_d91dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd91dc0ULL || rel >= 0xd91f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d91f40 size=384 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_d91f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd91f40ULL || rel >= 0xd920c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d920c0 size=240 callers=4 calls=1
   calls: sub_967240
*/
void sub_d920c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd920c0ULL || rel >= 0xd921b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d921b0 size=240 callers=2 calls=1
   calls: sub_13a6920
*/
void sub_d921b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd921b0ULL || rel >= 0xd922a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d922a0 size=416 callers=1 calls=3
   calls: sub_c38350, sub_d94e00, sub_e9db40
*/
void sub_d922a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd922a0ULL || rel >= 0xd92440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d92440 size=240 callers=1 calls=1
   calls: sub_13a6920
*/
void sub_d92440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd92440ULL || rel >= 0xd92530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d92530 size=304 callers=4 calls=1
   calls: sub_13a6920
*/
void sub_d92530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd92530ULL || rel >= 0xd92660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d92660 size=224 callers=1 calls=1
   calls: sub_da6500
*/
void sub_d92660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd92660ULL || rel >= 0xd92740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d92740 size=176 callers=1 calls=1
   calls: sub_d92870
*/
void sub_d92740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd92740ULL || rel >= 0xd927f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d927f0 size=128 callers=0 calls=0
*/
void sub_d927f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd927f0ULL || rel >= 0xd92870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d92870 size=784 callers=1 calls=2
   calls: sub_13a5bb0, sub_d92b80
*/
void sub_d92870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd92870ULL || rel >= 0xd92b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d92b80 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d93fb0, sub_e9db40
*/
void sub_d92b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd92b80ULL || rel >= 0xd92ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d92ca0 size=368 callers=2 calls=3
   calls: sub_c384b0, sub_c60e50, sub_e9d130
*/
void sub_d92ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd92ca0ULL || rel >= 0xd92e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d92e10 size=192 callers=0 calls=0
*/
void sub_d92e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd92e10ULL || rel >= 0xd92ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d92ed0 size=192 callers=0 calls=0
*/
void sub_d92ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd92ed0ULL || rel >= 0xd92f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d92f90 size=192 callers=0 calls=0
*/
void sub_d92f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd92f90ULL || rel >= 0xd93050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d93050 size=192 callers=0 calls=0
*/
void sub_d93050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd93050ULL || rel >= 0xd93110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d93110 size=192 callers=0 calls=0
*/
void sub_d93110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd93110ULL || rel >= 0xd931d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d931d0 size=192 callers=0 calls=0
*/
void sub_d931d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd931d0ULL || rel >= 0xd93290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d93290 size=16 callers=0 calls=0
*/
void sub_d93290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd93290ULL || rel >= 0xd932a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d932a0 size=16 callers=0 calls=0
*/
void sub_d932a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd932a0ULL || rel >= 0xd932b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d932b0 size=1360 callers=0 calls=11
   calls: sub_14e0350, sub_c39c40, sub_c43ed0, sub_c44310, sub_c445f0, sub_d6ef00, sub_d6ef30, sub_d7edd0, sub_d93800, sub_d93a30, sub_d93cd0
*/
void sub_d932b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd932b0ULL || rel >= 0xd93800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d93800 size=560 callers=2 calls=13
   calls: sub_12c90f0, sub_13441d0, sub_140c790, sub_144a090, sub_1460c50, sub_1502120, sub_151a7d0, sub_5cfad0, sub_7bc650, sub_b2b110, sub_c60e50, sub_d7c910
   ... +1 more
*/
void sub_d93800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd93800ULL || rel >= 0xd93a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d93a30 size=544 callers=1 calls=2
   calls: sub_13a5bb0, sub_d6cfb0
*/
void sub_d93a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd93a30ULL || rel >= 0xd93c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d93c50 size=128 callers=0 calls=1
   calls: sub_14e0550
*/
void sub_d93c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd93c50ULL || rel >= 0xd93cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d93cd0 size=400 callers=2 calls=3
   calls: sub_672c10, sub_c386f0, sub_e5df80
*/
void sub_d93cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd93cd0ULL || rel >= 0xd93e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d93e60 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d93e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd93e60ULL || rel >= 0xd93ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d93ed0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d93ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd93ed0ULL || rel >= 0xd93f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d93f40 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d93f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd93f40ULL || rel >= 0xd93fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d93fb0 size=224 callers=1 calls=1
   calls: sub_d92ca0
*/
void sub_d93fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd93fb0ULL || rel >= 0xd94090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94090 size=128 callers=0 calls=0
*/
void sub_d94090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94090ULL || rel >= 0xd94110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94110 size=400 callers=1 calls=2
   calls: sub_d942a0, sub_d94ab0
*/
void sub_d94110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94110ULL || rel >= 0xd942a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d942a0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d94be0, sub_e9db40
*/
void sub_d942a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd942a0ULL || rel >= 0xd943c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d943c0 size=16 callers=0 calls=0
*/
void sub_d943c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd943c0ULL || rel >= 0xd943d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d943d0 size=16 callers=0 calls=0
*/
void sub_d943d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd943d0ULL || rel >= 0xd943e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d943e0 size=352 callers=0 calls=2
   calls: sub_1401b20, sub_d94540
*/
void sub_d943e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd943e0ULL || rel >= 0xd94540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94540 size=752 callers=1 calls=5
   calls: map_door_trigger, sub_972c70, sub_990590, sub_d20d30, sub_d25bd0
*/
void sub_d94540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94540ULL || rel >= 0xd94830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94830 size=16 callers=0 calls=0
*/
void sub_d94830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94830ULL || rel >= 0xd94840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94840 size=96 callers=0 calls=0
*/
void sub_d94840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94840ULL || rel >= 0xd948a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d948a0 size=96 callers=0 calls=0
*/
void sub_d948a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd948a0ULL || rel >= 0xd94900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94900 size=16 callers=0 calls=0
*/
void sub_d94900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94900ULL || rel >= 0xd94910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94910 size=96 callers=0 calls=0
*/
void sub_d94910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94910ULL || rel >= 0xd94970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94970 size=96 callers=0 calls=0
*/
void sub_d94970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94970ULL || rel >= 0xd949d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d949d0 size=16 callers=0 calls=0
*/
void sub_d949d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd949d0ULL || rel >= 0xd949e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d949e0 size=16 callers=0 calls=0
*/
void sub_d949e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd949e0ULL || rel >= 0xd949f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d949f0 size=96 callers=0 calls=0
*/
void sub_d949f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd949f0ULL || rel >= 0xd94a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94a50 size=96 callers=0 calls=0
*/
void sub_d94a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94a50ULL || rel >= 0xd94ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94ab0 size=304 callers=1 calls=0
*/
void sub_d94ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94ab0ULL || rel >= 0xd94be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94be0 size=416 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_d94be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94be0ULL || rel >= 0xd94d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94d80 size=128 callers=0 calls=0
*/
void sub_d94d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94d80ULL || rel >= 0xd94e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94e00 size=80 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_d94e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94e00ULL || rel >= 0xd94e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94e50 size=16 callers=0 calls=0
*/
void sub_d94e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94e50ULL || rel >= 0xd94e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94e60 size=16 callers=0 calls=0
*/
void sub_d94e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94e60ULL || rel >= 0xd94e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d94e70 size=656 callers=0 calls=8
   calls: sub_135a1a0, sub_135a2d0, sub_13ed240, sub_14214e0, sub_cb33d0, sub_d44720, sub_d46a20, sub_d46a90
*/
void sub_d94e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94e70ULL || rel >= 0xd95100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95100 size=16 callers=0 calls=0
*/
void sub_d95100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95100ULL || rel >= 0xd95110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95110 size=16 callers=0 calls=0
*/
void sub_d95110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95110ULL || rel >= 0xd95120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95120 size=16 callers=0 calls=0
*/
void sub_d95120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95120ULL || rel >= 0xd95130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95130 size=16 callers=0 calls=0
*/
void sub_d95130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95130ULL || rel >= 0xd95140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95140 size=16 callers=0 calls=0
*/
void sub_d95140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95140ULL || rel >= 0xd95150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95150 size=16 callers=0 calls=0
*/
void sub_d95150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95150ULL || rel >= 0xd95160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95160 size=16 callers=0 calls=0
*/
void sub_d95160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95160ULL || rel >= 0xd95170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95170 size=16 callers=0 calls=0
*/
void sub_d95170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95170ULL || rel >= 0xd95180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95180 size=16 callers=0 calls=0
*/
void sub_d95180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95180ULL || rel >= 0xd95190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95190 size=304 callers=0 calls=0
*/
void sub_d95190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95190ULL || rel >= 0xd952c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d952c0 size=144 callers=1 calls=1
   calls: sub_d95350
*/
void sub_d952c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd952c0ULL || rel >= 0xd95350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95350 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d964f0, sub_e9db40
*/
void sub_d95350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95350ULL || rel >= 0xd95470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95470 size=16 callers=0 calls=0
*/
void sub_d95470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95470ULL || rel >= 0xd95480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95480 size=16 callers=0 calls=0
*/
void sub_d95480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95480ULL || rel >= 0xd95490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95490 size=1280 callers=0 calls=17
   calls: fi0156_ladderdown01_strat, sub_13ca950, sub_b4c060, sub_c63670, sub_c6c5c0, sub_c6c6f0, sub_cf4c90, sub_cf4cb0, sub_cffd30, sub_d25bd0, sub_d27210, sub_d2e830
   ... +5 more
*/
void sub_d95490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95490ULL || rel >= 0xd95990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95990 size=1184 callers=1 calls=8
   calls: sub_13ca950, sub_972c70, sub_9733f0, sub_ca90d0, sub_cab130, sub_caba10, sub_d25bd0, sub_d2db00
*/
void sub_d95990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95990ULL || rel >= 0xd95e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d95e30 size=784 callers=1 calls=4
   calls: sub_972c70, sub_c6c5c0, sub_d25bd0, sub_d2e830
   ref: fi0151_ladder01_r_loop
   ref: fi0150_ladder01_l_loop
   ref: fi0152_ladderup01_start
   ref: fi0156_ladderdown01_strat
*/
void fi0156_ladderdown01_strat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd95e30ULL || rel >= 0xd96140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d96140 size=16 callers=0 calls=0
*/
void sub_d96140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd96140ULL || rel >= 0xd96150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d96150 size=96 callers=0 calls=0
*/
void sub_d96150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd96150ULL || rel >= 0xd961b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d961b0 size=96 callers=0 calls=0
*/
void sub_d961b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd961b0ULL || rel >= 0xd96210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d96210 size=16 callers=0 calls=0
*/
void sub_d96210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd96210ULL || rel >= 0xd96220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d96220 size=96 callers=0 calls=0
*/
void sub_d96220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd96220ULL || rel >= 0xd96280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d96280 size=96 callers=0 calls=0
*/
void sub_d96280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd96280ULL || rel >= 0xd962e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d962e0 size=16 callers=0 calls=0
*/
void sub_d962e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd962e0ULL || rel >= 0xd962f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d962f0 size=16 callers=0 calls=0
*/
void sub_d962f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd962f0ULL || rel >= 0xd96300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d96300 size=96 callers=0 calls=0
*/
void sub_d96300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd96300ULL || rel >= 0xd96360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d96360 size=96 callers=0 calls=0
*/
void sub_d96360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd96360ULL || rel >= 0xd963c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d963c0 size=304 callers=0 calls=0
*/
void sub_d963c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd963c0ULL || rel >= 0xd964f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d964f0 size=336 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_d964f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd964f0ULL || rel >= 0xd96640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d96640 size=240 callers=1 calls=1
   calls: sub_d968a0
*/
void sub_d96640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd96640ULL || rel >= 0xd96730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d96730 size=240 callers=1 calls=1
   calls: sub_c657d0
*/
void sub_d96730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd96730ULL || rel >= 0xd96820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d96820 size=128 callers=0 calls=0
*/
void sub_d96820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd96820ULL || rel >= 0xd968a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d968a0 size=144 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_d968a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd968a0ULL || rel >= 0xd96930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d96930 size=2512 callers=0 calls=13
   calls: sub_13575e0, sub_5cc540, sub_972c70, sub_9733f0, sub_c6c5c0, sub_cab130, sub_cabb80, sub_d20d30, sub_d25bd0, sub_d97300, sub_ea3d10, sub_ea47d0
   ... +1 more
*/
void sub_d96930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd96930ULL || rel >= 0xd97300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d97300 size=1904 callers=1 calls=4
   calls: sub_13c9e50, sub_972c70, sub_9733f0, sub_c6c5c0
*/
void sub_d97300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd97300ULL || rel >= 0xd97a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d97a70 size=16 callers=0 calls=0
*/
void sub_d97a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd97a70ULL || rel >= 0xd97a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d97a80 size=16 callers=0 calls=0
*/
void sub_d97a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd97a80ULL || rel >= 0xd97a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d97a90 size=144 callers=0 calls=0
*/
void sub_d97a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd97a90ULL || rel >= 0xd97b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d97b20 size=144 callers=0 calls=0
*/
void sub_d97b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd97b20ULL || rel >= 0xd97bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d97bb0 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d97bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd97bb0ULL || rel >= 0xd97c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d97c60 size=144 callers=0 calls=0
*/
void sub_d97c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd97c60ULL || rel >= 0xd97cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d97cf0 size=144 callers=0 calls=0
*/
void sub_d97cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd97cf0ULL || rel >= 0xd97d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d97d80 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d97d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd97d80ULL || rel >= 0xd97e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d97e30 size=176 callers=0 calls=1
   calls: sub_c657d0
*/
void sub_d97e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd97e30ULL || rel >= 0xd97ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d97ee0 size=144 callers=0 calls=0
*/
void sub_d97ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd97ee0ULL || rel >= 0xd97f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d97f70 size=144 callers=0 calls=0
*/
void sub_d97f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd97f70ULL || rel >= 0xd98000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98000 size=608 callers=0 calls=1
   calls: sub_1c0
   ref: fi0159_ladderdown01_r_end
   ref: fi_ladder_loop_01
   ref: fi0151_ladder01_r_loop
   ref: fi0150_ladder01_l_loop
   ref: fi_ladder_loop_02
   ref: fi0154_ladderup01_l_end
   ref: fi0155_ladderup01_r_end
   ref: fi0158_ladderdown01_l_end
*/
void fi0159_ladderdown01_r_end(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98000ULL || rel >= 0xd98260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98260 size=144 callers=2 calls=0
*/
void sub_d98260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98260ULL || rel >= 0xd982f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d982f0 size=16 callers=0 calls=0
*/
void sub_d982f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd982f0ULL || rel >= 0xd98300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98300 size=16 callers=0 calls=0
*/
void sub_d98300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98300ULL || rel >= 0xd98310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98310 size=16 callers=0 calls=0
*/
void sub_d98310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98310ULL || rel >= 0xd98320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98320 size=16 callers=0 calls=0
*/
void sub_d98320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98320ULL || rel >= 0xd98330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98330 size=160 callers=2 calls=2
   calls: sub_c70730, sub_d05120
*/
void sub_d98330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98330ULL || rel >= 0xd983d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d983d0 size=336 callers=2 calls=3
   calls: sub_13ed330, sub_14df660, sub_c71600
*/
void sub_d983d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd983d0ULL || rel >= 0xd98520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98520 size=128 callers=0 calls=0
*/
void sub_d98520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98520ULL || rel >= 0xd985a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d985a0 size=80 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_d985a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd985a0ULL || rel >= 0xd985f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d985f0 size=144 callers=0 calls=0
*/
void sub_d985f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd985f0ULL || rel >= 0xd98680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98680 size=144 callers=0 calls=0
*/
void sub_d98680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98680ULL || rel >= 0xd98710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98710 size=144 callers=0 calls=0
*/
void sub_d98710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98710ULL || rel >= 0xd987a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d987a0 size=144 callers=0 calls=0
*/
void sub_d987a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd987a0ULL || rel >= 0xd98830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98830 size=144 callers=0 calls=0
*/
void sub_d98830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98830ULL || rel >= 0xd988c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d988c0 size=144 callers=0 calls=0
*/
void sub_d988c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd988c0ULL || rel >= 0xd98950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98950 size=16 callers=1 calls=0
*/
void sub_d98950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98950ULL || rel >= 0xd98960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98960 size=768 callers=1 calls=3
   calls: sub_13a6cd0, sub_13ed240, sub_d98d70
*/
void sub_d98960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98960ULL || rel >= 0xd98c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98c60 size=240 callers=0 calls=0
*/
void sub_d98c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98c60ULL || rel >= 0xd98d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98d50 size=16 callers=0 calls=0
*/
void sub_d98d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98d50ULL || rel >= 0xd98d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98d60 size=16 callers=0 calls=0
*/
void sub_d98d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98d60ULL || rel >= 0xd98d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98d70 size=304 callers=2 calls=1
   calls: sub_13b1c90
*/
void sub_d98d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98d70ULL || rel >= 0xd98ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d98ea0 size=496 callers=1 calls=2
   calls: sub_13a5bb0, sub_d99090
*/
void sub_d98ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd98ea0ULL || rel >= 0xd99090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d99090 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d99cb0, sub_e9db40
*/
void sub_d99090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99090ULL || rel >= 0xd991b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d991b0 size=16 callers=0 calls=0
*/
void sub_d991b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd991b0ULL || rel >= 0xd991c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d991c0 size=16 callers=0 calls=0
*/
void sub_d991c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd991c0ULL || rel >= 0xd991d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d991d0 size=400 callers=0 calls=4
   calls: sub_5cfaf0, sub_d7edd0, sub_d99360, sub_d994f0
*/
void sub_d991d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd991d0ULL || rel >= 0xd99360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d99360 size=400 callers=1 calls=2
   calls: sub_13a5bb0, sub_d6cfb0
*/
void sub_d99360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99360ULL || rel >= 0xd994f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d994f0 size=960 callers=1 calls=2
   calls: sub_13a4f20, sub_d99e70
*/
void sub_d994f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd994f0ULL || rel >= 0xd998b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d998b0 size=16 callers=0 calls=0
*/
void sub_d998b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd998b0ULL || rel >= 0xd998c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d998c0 size=112 callers=0 calls=0
*/
void sub_d998c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd998c0ULL || rel >= 0xd99930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d99930 size=112 callers=0 calls=0
*/
void sub_d99930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99930ULL || rel >= 0xd999a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d999a0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d999a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd999a0ULL || rel >= 0xd99a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d99a10 size=112 callers=0 calls=0
*/
void sub_d99a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99a10ULL || rel >= 0xd99a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d99a80 size=112 callers=0 calls=0
*/
void sub_d99a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99a80ULL || rel >= 0xd99af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d99af0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d99af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99af0ULL || rel >= 0xd99b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d99b60 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d99b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99b60ULL || rel >= 0xd99bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d99bd0 size=112 callers=0 calls=0
*/
void sub_d99bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99bd0ULL || rel >= 0xd99c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d99c40 size=112 callers=0 calls=0
*/
void sub_d99c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99c40ULL || rel >= 0xd99cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d99cb0 size=448 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_d99cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99cb0ULL || rel >= 0xd99e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d99e70 size=400 callers=4 calls=3
   calls: sub_672c10, sub_c1c1c0, sub_c386f0
*/
void sub_d99e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99e70ULL || rel >= 0xd9a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a000 size=128 callers=0 calls=0
*/
void sub_d9a000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a000ULL || rel >= 0xd9a080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a080 size=608 callers=1 calls=2
   calls: sub_13a5bb0, sub_d9a2e0
*/
void sub_d9a080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a080ULL || rel >= 0xd9a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a2e0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d9a950, sub_e9db40
*/
void sub_d9a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a2e0ULL || rel >= 0xd9a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a400 size=16 callers=0 calls=0
*/
void sub_d9a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a400ULL || rel >= 0xd9a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a410 size=16 callers=0 calls=0
*/
void sub_d9a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a410ULL || rel >= 0xd9a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a420 size=112 callers=0 calls=1
   calls: sub_144f2d0
*/
void sub_d9a420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a420ULL || rel >= 0xd9a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a490 size=16 callers=0 calls=0
*/
void sub_d9a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a490ULL || rel >= 0xd9a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a4a0 size=144 callers=0 calls=0
*/
void sub_d9a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a4a0ULL || rel >= 0xd9a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a530 size=144 callers=0 calls=0
*/
void sub_d9a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a530ULL || rel >= 0xd9a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a5c0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d9a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a5c0ULL || rel >= 0xd9a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a630 size=144 callers=0 calls=0
*/
void sub_d9a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a630ULL || rel >= 0xd9a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a6c0 size=144 callers=0 calls=0
*/
void sub_d9a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a6c0ULL || rel >= 0xd9a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a750 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d9a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a750ULL || rel >= 0xd9a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a7c0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d9a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a7c0ULL || rel >= 0xd9a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a830 size=144 callers=0 calls=0
*/
void sub_d9a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a830ULL || rel >= 0xd9a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a8c0 size=144 callers=0 calls=0
*/
void sub_d9a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a8c0ULL || rel >= 0xd9a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9a950 size=512 callers=1 calls=2
   calls: sub_144f170, sub_e9d130
*/
void sub_d9a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9a950ULL || rel >= 0xd9ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9ab50 size=128 callers=0 calls=0
*/
void sub_d9ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9ab50ULL || rel >= 0xd9abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9abd0 size=128 callers=1 calls=1
   calls: sub_d9ac50
*/
void sub_d9abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9abd0ULL || rel >= 0xd9ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9ac50 size=288 callers=1 calls=3
   calls: sub_c38350, sub_d9bb60, sub_e9db40
*/
void sub_d9ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9ac50ULL || rel >= 0xd9ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9ad70 size=16 callers=0 calls=0
*/
void sub_d9ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9ad70ULL || rel >= 0xd9ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9ad80 size=848 callers=0 calls=3
   calls: sub_1310f00, sub_67b990, sub_c4ac70
*/
void sub_d9ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9ad80ULL || rel >= 0xd9b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9b0d0 size=352 callers=0 calls=6
   calls: sub_1307dd0, sub_1308340, sub_5cfad0, sub_d7edd0, sub_d9b230, sub_d9b370
   ref: common/syoujou.dat
*/
void syoujou(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9b0d0ULL || rel >= 0xd9b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9b230 size=320 callers=1 calls=2
   calls: sub_13a5bb0, sub_d6cfb0
*/
void sub_d9b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9b230ULL || rel >= 0xd9b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9b370 size=1392 callers=1 calls=5
   calls: sub_1311c60, sub_13149a0, sub_13a4f20, sub_67d450, sub_d99e70
*/
void sub_d9b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9b370ULL || rel >= 0xd9b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9b8e0 size=16 callers=0 calls=0
*/
void sub_d9b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9b8e0ULL || rel >= 0xd9b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9b8f0 size=208 callers=0 calls=0
*/
void sub_d9b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9b8f0ULL || rel >= 0xd9b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9b9c0 size=16 callers=0 calls=0
*/
void sub_d9b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9b9c0ULL || rel >= 0xd9b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9b9d0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d9b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9b9d0ULL || rel >= 0xd9ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9ba40 size=16 callers=0 calls=0
*/
void sub_d9ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9ba40ULL || rel >= 0xd9ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9ba50 size=16 callers=0 calls=0
*/
void sub_d9ba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9ba50ULL || rel >= 0xd9ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9ba60 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d9ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9ba60ULL || rel >= 0xd9bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9bad0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_d9bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9bad0ULL || rel >= 0xd9bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9bb40 size=16 callers=0 calls=0
*/
void sub_d9bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9bb40ULL || rel >= 0xd9bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9bb50 size=16 callers=0 calls=0
*/
void sub_d9bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9bb50ULL || rel >= 0xd9bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9bb60 size=464 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_d9bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9bb60ULL || rel >= 0xd9bd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9bd30 size=128 callers=0 calls=0
*/
void sub_d9bd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9bd30ULL || rel >= 0xd9bdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9bdb0 size=128 callers=2 calls=1
   calls: sub_e9d130
*/
void sub_d9bdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9bdb0ULL || rel >= 0xd9be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9be30 size=16 callers=0 calls=0
*/
void sub_d9be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9be30ULL || rel >= 0xd9be40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9be40 size=80 callers=0 calls=2
   calls: sub_10f67c0, sub_1179f90
*/
void sub_d9be40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9be40ULL || rel >= 0xd9be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9be90 size=1408 callers=0 calls=21
   calls: sub_104fb70, sub_1119320, sub_1119490, sub_1119f30, sub_1179f00, sub_1179f40, sub_1179f50, sub_12ffe00, sub_762930, sub_762940, sub_764b40, sub_767950
   ... +9 more
*/
void sub_d9be90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9be90ULL || rel >= 0xd9c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9c410 size=64 callers=0 calls=1
   calls: sub_10f79f0
*/
void sub_d9c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9c410ULL || rel >= 0xd9c450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9c450 size=160 callers=0 calls=0
*/
void sub_d9c450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9c450ULL || rel >= 0xd9c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9c4f0 size=160 callers=0 calls=0
*/
void sub_d9c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9c4f0ULL || rel >= 0xd9c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9c590 size=16 callers=0 calls=0
*/
void sub_d9c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9c590ULL || rel >= 0xd9c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9c5a0 size=160 callers=0 calls=0
*/
void sub_d9c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9c5a0ULL || rel >= 0xd9c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9c640 size=160 callers=0 calls=0
*/
void sub_d9c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9c640ULL || rel >= 0xd9c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9c6e0 size=16 callers=0 calls=0
*/
void sub_d9c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9c6e0ULL || rel >= 0xd9c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9c6f0 size=16 callers=0 calls=0
*/
void sub_d9c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9c6f0ULL || rel >= 0xd9c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9c700 size=160 callers=0 calls=0
*/
void sub_d9c700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9c700ULL || rel >= 0xd9c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9c7a0 size=160 callers=0 calls=0
*/
void sub_d9c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9c7a0ULL || rel >= 0xd9c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9c840 size=304 callers=0 calls=0
*/
void sub_d9c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9c840ULL || rel >= 0xd9c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9c970 size=272 callers=1 calls=3
   calls: sub_672c10, sub_c386f0, sub_d9ca80
*/
void sub_d9c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9c970ULL || rel >= 0xd9ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9ca80 size=432 callers=1 calls=1
   calls: sub_ea03d0
*/
void sub_d9ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9ca80ULL || rel >= 0xd9cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9cc30 size=208 callers=0 calls=0
*/
void sub_d9cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9cc30ULL || rel >= 0xd9cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9cd00 size=128 callers=1 calls=1
   calls: sub_d9cd80
*/
void sub_d9cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9cd00ULL || rel >= 0xd9cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9cd80 size=288 callers=1 calls=3
   calls: sub_c38350, sub_e9db40, unit_obj_monsterball01_ball
*/
void sub_d9cd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9cd80ULL || rel >= 0xd9cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9cea0 size=880 callers=1 calls=8
   calls: sub_12f9ef0, sub_762d50, sub_767950, sub_7847d0, sub_794330, sub_ccd470, sub_d2dcc0, sub_d9d210
   ref: MutePM_at_Recovering
   ref: %s%02d
   ref: HealPoke_
*/
void MutePM_at_Recovering(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9cea0ULL || rel >= 0xd9d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9d210 size=848 callers=1 calls=9
   calls: sub_c5da80, sub_c5dd90, sub_d2b260, sub_d2bdf0, sub_d2bfc0, sub_d2c180, sub_da0390, sub_da0960, sub_da1260
*/
void sub_d9d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9d210ULL || rel >= 0xd9d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9d560 size=16 callers=0 calls=0
*/
void sub_d9d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9d560ULL || rel >= 0xd9d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9d570 size=16 callers=0 calls=0
*/
void sub_d9d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9d570ULL || rel >= 0xd9d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9d580 size=1648 callers=0 calls=13
   calls: PcRecoveryText, s_02d, s_02d_2, sub_794330, sub_c43ed0, sub_c44310, sub_c44410, sub_d9dbf0, sub_d9f490, sub_d9fc20, sub_da1800, sub_e3c4a0
   ... +1 more
   ref: Play_SYS_common_putball
   ref: Play_me_or_st_kaifuku
   ref: UnMutePM_at_Recovering
*/
void UnMutePM_at_Recovering(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9d580ULL || rel >= 0xd9dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9dbf0 size=272 callers=2 calls=2
   calls: sub_969d40, sub_ca8e20
*/
void sub_d9dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9dbf0ULL || rel >= 0xd9dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9dd00 size=6032 callers=1 calls=13
   calls: sub_13a6920, sub_13f6520, sub_13f66b0, sub_13f67a0, sub_5cfaf0, sub_5e7a30, sub_615bd0, sub_615c50, sub_762d50, sub_763000, sub_767950, sub_7847d0
   ... +1 more
   ref: %s%02d
   ref: _Monbo_
   ref: _BallFlash_
   ref: _BirthDay
   ref: _Ring_
   ref: _PcRecovery
   ref: HealPoke_
   ref: _PcRecoveryText
*/
void PcRecoveryText(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9dd00ULL || rel >= 0xd9f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9f490 size=512 callers=1 calls=1
   calls: sub_c52780
*/
void sub_d9f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9f490ULL || rel >= 0xd9f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9f690 size=896 callers=1 calls=12
   calls: sub_615bd0, sub_615c50, sub_969d40, sub_96ccf0, sub_972c70, sub_ca90d0, sub_cab130, sub_caba10, sub_d0dfd0, sub_d9dbf0, sub_d9fc20, sub_d9fd30
   ref: %s%02d
*/
void s_02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9f690ULL || rel >= 0xd9fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9fa10 size=512 callers=1 calls=4
   calls: sub_615bd0, sub_615c50, sub_96ccf0, sub_cabb80
   ref: %s%02d
*/
void s_02d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9fa10ULL || rel >= 0xd9fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9fc10 size=16 callers=0 calls=0
*/
void sub_d9fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9fc10ULL || rel >= 0xd9fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9fc20 size=272 callers=2 calls=0
*/
void sub_d9fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9fc20ULL || rel >= 0xd9fd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00d9fd30 size=1248 callers=1 calls=8
   calls: sub_59a7c0, sub_607750, sub_612ef0, sub_96ccf0, sub_972c70, sub_d4fb90, sub_d4fba0, sub_e3c600
*/
void sub_d9fd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9fd30ULL || rel >= 0xda0210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da0210 size=256 callers=0 calls=0
*/
void sub_da0210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda0210ULL || rel >= 0xda0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da0310 size=16 callers=0 calls=0
*/
void sub_da0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda0310ULL || rel >= 0xda0320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da0320 size=16 callers=0 calls=0
*/
void sub_da0320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda0320ULL || rel >= 0xda0330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da0330 size=16 callers=0 calls=0
*/
void sub_da0330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda0330ULL || rel >= 0xda0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da0340 size=16 callers=0 calls=0
*/
void sub_da0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda0340ULL || rel >= 0xda0350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da0350 size=16 callers=0 calls=0
*/
void sub_da0350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda0350ULL || rel >= 0xda0360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da0360 size=16 callers=0 calls=0
*/
void sub_da0360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda0360ULL || rel >= 0xda0370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da0370 size=16 callers=0 calls=0
*/
void sub_da0370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda0370ULL || rel >= 0xda0380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da0380 size=16 callers=0 calls=0
*/
void sub_da0380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda0380ULL || rel >= 0xda0390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da0390 size=1488 callers=2 calls=5
   calls: sub_c5d8a0, sub_c5da80, sub_c5dd90, sub_d2b3f0, sub_da1260
*/
void sub_da0390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda0390ULL || rel >= 0xda0960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da0960 size=2304 callers=2 calls=6
   calls: sub_c5d8a0, sub_c5da80, sub_c5dd90, sub_c5df80, sub_d2b3f0, sub_da1260
*/
void sub_da0960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda0960ULL || rel >= 0xda1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da1260 size=464 callers=13 calls=1
   calls: sub_c5da80
*/
void sub_da1260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda1260ULL || rel >= 0xda1430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da1430 size=304 callers=0 calls=0
*/
void sub_da1430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda1430ULL || rel >= 0xda1560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da1560 size=672 callers=1 calls=1
   calls: sub_e9d130
   ref: unit_obj_monsterball01_ball
   ref: pc_ballwait_trigger
   ref: pc_recovery_ballflash_trigger
   ref: pc_recovery_text_bool
   ref: pc_recovery_trigger
   ref: pc_ballput_trigger
   ref: pc_recovery_ring_bool
   ref: pc_recovery_text_uv_int
*/
void unit_obj_monsterball01_ball(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda1560ULL || rel >= 0xda1800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da1800 size=224 callers=1 calls=1
   calls: sub_e3c0b0
*/
void sub_da1800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda1800ULL || rel >= 0xda18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da18e0 size=3984 callers=0 calls=0
*/
void sub_da18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda18e0ULL || rel >= 0xda2870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2870 size=16 callers=0 calls=0
*/
void sub_da2870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2870ULL || rel >= 0xda2880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2880 size=16 callers=0 calls=0
*/
void sub_da2880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2880ULL || rel >= 0xda2890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2890 size=16 callers=0 calls=0
*/
void sub_da2890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2890ULL || rel >= 0xda28a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da28a0 size=224 callers=0 calls=0
*/
void sub_da28a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda28a0ULL || rel >= 0xda2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2980 size=368 callers=0 calls=0
*/
void sub_da2980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2980ULL || rel >= 0xda2af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2af0 size=752 callers=0 calls=1
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
void skybox_01_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2af0ULL || rel >= 0xda2de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2de0 size=64 callers=2 calls=1
   calls: sub_e9d130
*/
void sub_da2de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2de0ULL || rel >= 0xda2e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2e20 size=16 callers=0 calls=0
*/
void sub_da2e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2e20ULL || rel >= 0xda2e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2e30 size=16 callers=0 calls=0
*/
void sub_da2e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2e30ULL || rel >= 0xda2e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2e40 size=16 callers=0 calls=0
*/
void sub_da2e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2e40ULL || rel >= 0xda2e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2e50 size=16 callers=0 calls=0
*/
void sub_da2e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2e50ULL || rel >= 0xda2e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2e60 size=16 callers=0 calls=0
*/
void sub_da2e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2e60ULL || rel >= 0xda2e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2e70 size=16 callers=0 calls=0
*/
void sub_da2e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2e70ULL || rel >= 0xda2e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2e80 size=16 callers=0 calls=0
*/
void sub_da2e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2e80ULL || rel >= 0xda2e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2e90 size=16 callers=0 calls=0
*/
void sub_da2e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2e90ULL || rel >= 0xda2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da2ea0 size=560 callers=0 calls=3
   calls: sub_13c7340, sub_13ed240, sub_cc7330
*/
void sub_da2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda2ea0ULL || rel >= 0xda30d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da30d0 size=16 callers=0 calls=0
*/
void sub_da30d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda30d0ULL || rel >= 0xda30e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da30e0 size=16 callers=0 calls=0
*/
void sub_da30e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda30e0ULL || rel >= 0xda30f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da30f0 size=16 callers=0 calls=0
*/
void sub_da30f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda30f0ULL || rel >= 0xda3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3100 size=16 callers=0 calls=0
*/
void sub_da3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3100ULL || rel >= 0xda3110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3110 size=304 callers=0 calls=0
*/
void sub_da3110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3110ULL || rel >= 0xda3240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3240 size=16 callers=0 calls=0
*/
void sub_da3240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3240ULL || rel >= 0xda3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3250 size=16 callers=0 calls=0
*/
void sub_da3250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3250ULL || rel >= 0xda3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3260 size=576 callers=0 calls=3
   calls: sub_13a5bb0, sub_d6cfb0, sub_d7edd0
*/
void sub_da3260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3260ULL || rel >= 0xda34a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da34a0 size=16 callers=0 calls=0
*/
void sub_da34a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda34a0ULL || rel >= 0xda34b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da34b0 size=16 callers=0 calls=0
*/
void sub_da34b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda34b0ULL || rel >= 0xda34c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da34c0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_da34c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda34c0ULL || rel >= 0xda3530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3530 size=16 callers=0 calls=0
*/
void sub_da3530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3530ULL || rel >= 0xda3540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3540 size=16 callers=0 calls=0
*/
void sub_da3540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3540ULL || rel >= 0xda3550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3550 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_da3550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3550ULL || rel >= 0xda35c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da35c0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_da35c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda35c0ULL || rel >= 0xda3630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3630 size=16 callers=0 calls=0
*/
void sub_da3630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3630ULL || rel >= 0xda3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3640 size=16 callers=0 calls=0
*/
void sub_da3640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3640ULL || rel >= 0xda3650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3650 size=128 callers=0 calls=0
*/
void sub_da3650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3650ULL || rel >= 0xda36d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da36d0 size=160 callers=1 calls=1
   calls: sub_da3770
*/
void sub_da36d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda36d0ULL || rel >= 0xda3770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3770 size=288 callers=2 calls=3
   calls: sub_c38350, sub_da3890, sub_e9db40
*/
void sub_da3770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3770ULL || rel >= 0xda3890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3890 size=464 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_da3890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3890ULL || rel >= 0xda3a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3a60 size=96 callers=0 calls=0
*/
void sub_da3a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3a60ULL || rel >= 0xda3ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3ac0 size=96 callers=0 calls=0
*/
void sub_da3ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3ac0ULL || rel >= 0xda3b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3b20 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_da3b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3b20ULL || rel >= 0xda3b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3b90 size=16 callers=0 calls=0
*/
void sub_da3b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3b90ULL || rel >= 0xda3ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3ba0 size=272 callers=0 calls=1
   calls: sub_13ed240
*/
void sub_da3ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3ba0ULL || rel >= 0xda3cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da3cb0 size=1696 callers=0 calls=12
   calls: sub_59b250, sub_5b9220, sub_5b9400, sub_5cc540, sub_b4a5e0, sub_cf15b0, sub_d3e090, sub_d40e20, sub_d45240, sub_d45740, sub_d90c40, sub_e421e0
   ref: script/field_event.dat
*/
void field_event(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda3cb0ULL || rel >= 0xda4350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da4350 size=32 callers=0 calls=0
*/
void sub_da4350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda4350ULL || rel >= 0xda4370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da4370 size=96 callers=0 calls=0
*/
void sub_da4370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda4370ULL || rel >= 0xda43d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da43d0 size=96 callers=0 calls=0
*/
void sub_da43d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda43d0ULL || rel >= 0xda4430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da4430 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_da4430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda4430ULL || rel >= 0xda44a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da44a0 size=112 callers=0 calls=1
   calls: sub_13a5bb0
*/
void sub_da44a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda44a0ULL || rel >= 0xda4510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da4510 size=96 callers=0 calls=0
*/
void sub_da4510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda4510ULL || rel >= 0xda4570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da4570 size=96 callers=0 calls=0
*/
void sub_da4570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda4570ULL || rel >= 0xda45d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da45d0 size=128 callers=0 calls=0
*/
void sub_da45d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda45d0ULL || rel >= 0xda4650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da4650 size=176 callers=1 calls=1
   calls: sub_da4700
*/
void sub_da4650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda4650ULL || rel >= 0xda4700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da4700 size=448 callers=2 calls=3
   calls: sub_c38350, sub_da48c0, sub_e9db40
*/
void sub_da4700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda4700ULL || rel >= 0xda48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da48c0 size=528 callers=1 calls=5
   calls: sub_65d700, sub_76f550, sub_a74910, sub_da4ad0, sub_e9d130
*/
void sub_da48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda48c0ULL || rel >= 0xda4ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da4ad0 size=928 callers=1 calls=1
   calls: sub_da5900
*/
void sub_da4ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda4ad0ULL || rel >= 0xda4e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da4e70 size=320 callers=0 calls=0
*/
void sub_da4e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda4e70ULL || rel >= 0xda4fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da4fb0 size=16 callers=0 calls=0
*/
void sub_da4fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda4fb0ULL || rel >= 0xda4fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da4fc0 size=16 callers=0 calls=0
*/
void sub_da4fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda4fc0ULL || rel >= 0xda4fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da4fd0 size=16 callers=0 calls=0
*/
void sub_da4fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda4fd0ULL || rel >= 0xda4fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da4fe0 size=16 callers=0 calls=0
*/
void sub_da4fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda4fe0ULL || rel >= 0xda4ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da4ff0 size=16 callers=0 calls=0
*/
void sub_da4ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda4ff0ULL || rel >= 0xda5000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5000 size=16 callers=0 calls=0
*/
void sub_da5000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5000ULL || rel >= 0xda5010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5010 size=288 callers=0 calls=2
   calls: sub_1351670, sub_14e0350
*/
void sub_da5010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5010ULL || rel >= 0xda5130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5130 size=1440 callers=0 calls=4
   calls: sub_a75c00, sub_a75e20, sub_a777c0, sub_c39c40
*/
void sub_da5130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5130ULL || rel >= 0xda56d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da56d0 size=208 callers=0 calls=0
*/
void sub_da56d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda56d0ULL || rel >= 0xda57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da57a0 size=16 callers=0 calls=0
*/
void sub_da57a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda57a0ULL || rel >= 0xda57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da57b0 size=16 callers=0 calls=0
*/
void sub_da57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda57b0ULL || rel >= 0xda57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da57c0 size=16 callers=0 calls=0
*/
void sub_da57c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda57c0ULL || rel >= 0xda57d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da57d0 size=304 callers=0 calls=0
*/
void sub_da57d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda57d0ULL || rel >= 0xda5900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5900 size=448 callers=11 calls=0
*/
void sub_da5900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5900ULL || rel >= 0xda5ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5ac0 size=128 callers=0 calls=0
*/
void sub_da5ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5ac0ULL || rel >= 0xda5b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5b40 size=112 callers=1 calls=1
   calls: sub_da5bb0
*/
void sub_da5b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5b40ULL || rel >= 0xda5bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5bb0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_da6160, sub_e9db40
*/
void sub_da5bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5bb0ULL || rel >= 0xda5cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5cd0 size=112 callers=0 calls=0
*/
void sub_da5cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5cd0ULL || rel >= 0xda5d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5d40 size=112 callers=0 calls=0
*/
void sub_da5d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5d40ULL || rel >= 0xda5db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5db0 size=112 callers=0 calls=0
*/
void sub_da5db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5db0ULL || rel >= 0xda5e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5e20 size=112 callers=0 calls=0
*/
void sub_da5e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5e20ULL || rel >= 0xda5e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5e90 size=112 callers=0 calls=0
*/
void sub_da5e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5e90ULL || rel >= 0xda5f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5f00 size=112 callers=0 calls=0
*/
void sub_da5f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5f00ULL || rel >= 0xda5f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5f70 size=16 callers=0 calls=0
*/
void sub_da5f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5f70ULL || rel >= 0xda5f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5f80 size=16 callers=0 calls=0
*/
void sub_da5f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5f80ULL || rel >= 0xda5f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5f90 size=96 callers=0 calls=1
   calls: sub_7bc650
*/
void sub_da5f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5f90ULL || rel >= 0xda5ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da5ff0 size=16 callers=0 calls=0
*/
void sub_da5ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5ff0ULL || rel >= 0xda6000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6000 size=16 callers=0 calls=0
*/
void sub_da6000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6000ULL || rel >= 0xda6010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6010 size=16 callers=0 calls=0
*/
void sub_da6010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6010ULL || rel >= 0xda6020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6020 size=16 callers=0 calls=0
*/
void sub_da6020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6020ULL || rel >= 0xda6030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6030 size=304 callers=0 calls=0
*/
void sub_da6030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6030ULL || rel >= 0xda6160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6160 size=336 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_da6160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6160ULL || rel >= 0xda62b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da62b0 size=112 callers=0 calls=2
   calls: sub_e42280, sub_e42290
*/
void sub_da62b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda62b0ULL || rel >= 0xda6320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6320 size=16 callers=0 calls=0
*/
void sub_da6320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6320ULL || rel >= 0xda6330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6330 size=16 callers=0 calls=0
*/
void sub_da6330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6330ULL || rel >= 0xda6340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6340 size=16 callers=0 calls=0
*/
void sub_da6340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6340ULL || rel >= 0xda6350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6350 size=16 callers=0 calls=0
*/
void sub_da6350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6350ULL || rel >= 0xda6360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6360 size=16 callers=0 calls=0
*/
void sub_da6360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6360ULL || rel >= 0xda6370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6370 size=16 callers=0 calls=0
*/
void sub_da6370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6370ULL || rel >= 0xda6380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6380 size=16 callers=0 calls=0
*/
void sub_da6380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6380ULL || rel >= 0xda6390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6390 size=16 callers=0 calls=0
*/
void sub_da6390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6390ULL || rel >= 0xda63a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da63a0 size=16 callers=0 calls=0
*/
void sub_da63a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda63a0ULL || rel >= 0xda63b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da63b0 size=16 callers=0 calls=0
*/
void sub_da63b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda63b0ULL || rel >= 0xda63c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da63c0 size=16 callers=0 calls=0
*/
void sub_da63c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda63c0ULL || rel >= 0xda63d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da63d0 size=304 callers=0 calls=0
*/
void sub_da63d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda63d0ULL || rel >= 0xda6500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6500 size=128 callers=2 calls=1
   calls: sub_e9d130
*/
void sub_da6500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6500ULL || rel >= 0xda6580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6580 size=16 callers=0 calls=0
*/
void sub_da6580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6580ULL || rel >= 0xda6590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6590 size=16 callers=0 calls=0
*/
void sub_da6590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6590ULL || rel >= 0xda65a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da65a0 size=1360 callers=0 calls=11
   calls: sub_13ed240, sub_762930, sub_762d70, sub_7847d0, sub_794330, sub_c3d6e0, sub_c43ed0, sub_c44310, sub_c44410, sub_d281c0, sub_eaf660
   ref: Play_UI_Emotional_Exclamation
   ref: loc_eff_head
*/
void Play_UI_Emotional_Exclamation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda65a0ULL || rel >= 0xda6af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6af0 size=16 callers=0 calls=0
*/
void sub_da6af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6af0ULL || rel >= 0xda6b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6b00 size=96 callers=0 calls=0
*/
void sub_da6b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6b00ULL || rel >= 0xda6b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6b60 size=96 callers=0 calls=0
*/
void sub_da6b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6b60ULL || rel >= 0xda6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6bc0 size=16 callers=0 calls=0
*/
void sub_da6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6bc0ULL || rel >= 0xda6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6bd0 size=96 callers=0 calls=0
*/
void sub_da6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6bd0ULL || rel >= 0xda6c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6c30 size=96 callers=0 calls=0
*/
void sub_da6c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6c30ULL || rel >= 0xda6c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6c90 size=16 callers=0 calls=0
*/
void sub_da6c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6c90ULL || rel >= 0xda6ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6ca0 size=16 callers=0 calls=0
*/
void sub_da6ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6ca0ULL || rel >= 0xda6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6cb0 size=96 callers=0 calls=0
*/
void sub_da6cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6cb0ULL || rel >= 0xda6d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6d10 size=96 callers=0 calls=0
*/
void sub_da6d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6d10ULL || rel >= 0xda6d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6d70 size=304 callers=0 calls=0
*/
void sub_da6d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6d70ULL || rel >= 0xda6ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6ea0 size=128 callers=0 calls=0
*/
void sub_da6ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6ea0ULL || rel >= 0xda6f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6f20 size=128 callers=1 calls=1
   calls: sub_da6fa0
*/
void sub_da6f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6f20ULL || rel >= 0xda6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da6fa0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_da7900, sub_e9db40
*/
void sub_da6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6fa0ULL || rel >= 0xda70c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da70c0 size=16 callers=0 calls=0
*/
void sub_da70c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda70c0ULL || rel >= 0xda70d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da70d0 size=16 callers=0 calls=0
*/
void sub_da70d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda70d0ULL || rel >= 0xda70e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da70e0 size=1632 callers=0 calls=10
   calls: sub_13a6920, sub_b4c060, sub_ce00e0, sub_cf4c90, sub_cf4cb0, sub_cffd30, sub_d25bd0, sub_d27210, sub_d42e80, sub_d44630
*/
void sub_da70e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda70e0ULL || rel >= 0xda7740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7740 size=16 callers=0 calls=0
*/
void sub_da7740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7740ULL || rel >= 0xda7750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7750 size=16 callers=0 calls=0
*/
void sub_da7750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7750ULL || rel >= 0xda7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7760 size=16 callers=0 calls=0
*/
void sub_da7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7760ULL || rel >= 0xda7770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7770 size=16 callers=0 calls=0
*/
void sub_da7770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7770ULL || rel >= 0xda7780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7780 size=16 callers=0 calls=0
*/
void sub_da7780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7780ULL || rel >= 0xda7790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7790 size=16 callers=0 calls=0
*/
void sub_da7790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7790ULL || rel >= 0xda77a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da77a0 size=16 callers=0 calls=0
*/
void sub_da77a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda77a0ULL || rel >= 0xda77b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da77b0 size=16 callers=0 calls=0
*/
void sub_da77b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda77b0ULL || rel >= 0xda77c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da77c0 size=16 callers=0 calls=0
*/
void sub_da77c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda77c0ULL || rel >= 0xda77d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da77d0 size=304 callers=0 calls=0
*/
void sub_da77d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda77d0ULL || rel >= 0xda7900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7900 size=416 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_da7900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7900ULL || rel >= 0xda7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7aa0 size=128 callers=0 calls=0
*/
void sub_da7aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7aa0ULL || rel >= 0xda7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7b20 size=112 callers=1 calls=1
   calls: sub_da7b90
*/
void sub_da7b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7b20ULL || rel >= 0xda7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7b90 size=288 callers=1 calls=3
   calls: sub_c38350, sub_da8040, sub_e9db40
*/
void sub_da7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7b90ULL || rel >= 0xda7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7cb0 size=16 callers=0 calls=0
*/
void sub_da7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7cb0ULL || rel >= 0xda7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7cc0 size=16 callers=0 calls=0
*/
void sub_da7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7cc0ULL || rel >= 0xda7cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7cd0 size=16 callers=0 calls=0
*/
void sub_da7cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7cd0ULL || rel >= 0xda7ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7ce0 size=16 callers=0 calls=0
*/
void sub_da7ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7ce0ULL || rel >= 0xda7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7cf0 size=16 callers=0 calls=0
*/
void sub_da7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7cf0ULL || rel >= 0xda7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7d00 size=16 callers=0 calls=0
*/
void sub_da7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7d00ULL || rel >= 0xda7d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7d10 size=16 callers=0 calls=0
*/
void sub_da7d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7d10ULL || rel >= 0xda7d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00da7d20 size=176 callers=0 calls=1
   calls: sub_135a2d0
*/
void sub_da7d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7d20ULL || rel >= 0xda7dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

