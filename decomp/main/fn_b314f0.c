/* main functions 00b314f0..00b4e660 (87 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00b314f0 size=16 callers=0 calls=0
*/
void sub_b314f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb314f0ULL || rel >= 0xb31500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b31500 size=112 callers=0 calls=0
*/
void sub_b31500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb31500ULL || rel >= 0xb31570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b31570 size=112 callers=0 calls=0
*/
void sub_b31570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb31570ULL || rel >= 0xb315e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b315e0 size=16 callers=0 calls=0
*/
void sub_b315e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb315e0ULL || rel >= 0xb315f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b315f0 size=112 callers=0 calls=0
*/
void sub_b315f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb315f0ULL || rel >= 0xb31660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b31660 size=112 callers=0 calls=0
*/
void sub_b31660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb31660ULL || rel >= 0xb316d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b316d0 size=16 callers=0 calls=0
*/
void sub_b316d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb316d0ULL || rel >= 0xb316e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b316e0 size=16 callers=0 calls=0
*/
void sub_b316e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb316e0ULL || rel >= 0xb316f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b316f0 size=112 callers=0 calls=0
*/
void sub_b316f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb316f0ULL || rel >= 0xb31760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b31760 size=112 callers=0 calls=0
*/
void sub_b31760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb31760ULL || rel >= 0xb317d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b317d0 size=304 callers=0 calls=0
*/
void sub_b317d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb317d0ULL || rel >= 0xb31900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b31900 size=336 callers=7 calls=2
   calls: sub_5cfaf0, sub_eb84a0
*/
void sub_b31900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb31900ULL || rel >= 0xb31a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b31a50 size=368 callers=0 calls=0
*/
void sub_b31a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb31a50ULL || rel >= 0xb31bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b31bc0 size=736 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb31bc0ULL || rel >= 0xb31ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b31ea0 size=608 callers=0 calls=6
   calls: sub_67d450, sub_b30410, sub_b31900, sub_c39c40, sub_d0c0, sub_eb8930
   ref: StateConnect
   ref: ViewSystemMessage
*/
void ViewSystemMessage_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb31ea0ULL || rel >= 0xb32100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32100 size=352 callers=0 calls=5
   calls: sub_104ffc0, sub_1050000, sub_b32260, sub_eb8a30, sub_eb8e80
*/
void sub_b32100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32100ULL || rel >= 0xb32260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32260 size=208 callers=1 calls=2
   calls: sub_1050060, sub_b32350
*/
void sub_b32260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32260ULL || rel >= 0xb32330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32330 size=32 callers=0 calls=0
*/
void sub_b32330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32330ULL || rel >= 0xb32350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32350 size=1104 callers=1 calls=4
   calls: StartJoinSession, sub_1078460, sub_1078470, sub_b30410
*/
void sub_b32350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32350ULL || rel >= 0xb327a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b327a0 size=16 callers=0 calls=0
*/
void sub_b327a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb327a0ULL || rel >= 0xb327b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b327b0 size=16 callers=0 calls=0
*/
void sub_b327b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb327b0ULL || rel >= 0xb327c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b327c0 size=32 callers=0 calls=0
*/
void sub_b327c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb327c0ULL || rel >= 0xb327e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b327e0 size=32 callers=0 calls=0
*/
void sub_b327e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb327e0ULL || rel >= 0xb32800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32800 size=16 callers=0 calls=0
*/
void sub_b32800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32800ULL || rel >= 0xb32810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32810 size=16 callers=0 calls=0
*/
void sub_b32810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32810ULL || rel >= 0xb32820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32820 size=16 callers=0 calls=0
*/
void sub_b32820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32820ULL || rel >= 0xb32830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32830 size=16 callers=0 calls=0
*/
void sub_b32830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32830ULL || rel >= 0xb32840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32840 size=16 callers=0 calls=0
*/
void sub_b32840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32840ULL || rel >= 0xb32850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32850 size=16 callers=0 calls=0
*/
void sub_b32850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32850ULL || rel >= 0xb32860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32860 size=464 callers=0 calls=8
   calls: sub_1064370, sub_1064a20, sub_10759a0, sub_10759c0, sub_1076180, sub_1076260, sub_1078410, sub_e51bf0
*/
void sub_b32860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32860ULL || rel >= 0xb32a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32a30 size=16 callers=0 calls=0
*/
void sub_b32a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32a30ULL || rel >= 0xb32a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32a40 size=16 callers=0 calls=0
*/
void sub_b32a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32a40ULL || rel >= 0xb32a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32a50 size=16 callers=0 calls=0
*/
void sub_b32a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32a50ULL || rel >= 0xb32a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32a60 size=16 callers=0 calls=0
*/
void sub_b32a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32a60ULL || rel >= 0xb32a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32a70 size=16 callers=0 calls=0
*/
void sub_b32a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32a70ULL || rel >= 0xb32a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32a80 size=16 callers=0 calls=0
*/
void sub_b32a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32a80ULL || rel >= 0xb32a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32a90 size=16 callers=0 calls=0
*/
void sub_b32a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32a90ULL || rel >= 0xb32aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32aa0 size=16 callers=0 calls=0
*/
void sub_b32aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32aa0ULL || rel >= 0xb32ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32ab0 size=16 callers=0 calls=0
*/
void sub_b32ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32ab0ULL || rel >= 0xb32ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32ac0 size=16 callers=0 calls=0
*/
void sub_b32ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32ac0ULL || rel >= 0xb32ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32ad0 size=16 callers=0 calls=0
*/
void sub_b32ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32ad0ULL || rel >= 0xb32ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32ae0 size=16 callers=0 calls=0
*/
void sub_b32ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32ae0ULL || rel >= 0xb32af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32af0 size=16 callers=0 calls=0
*/
void sub_b32af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32af0ULL || rel >= 0xb32b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32b00 size=16 callers=0 calls=0
*/
void sub_b32b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32b00ULL || rel >= 0xb32b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32b10 size=304 callers=0 calls=0
*/
void sub_b32b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32b10ULL || rel >= 0xb32c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32c40 size=608 callers=0 calls=6
   calls: sub_67d450, sub_b30410, sub_b31900, sub_c39c40, sub_d0c0, sub_eb8930
   ref: StateShowFailed
   ref: ViewSystemMessage
*/
void ViewSystemMessage_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32c40ULL || rel >= 0xb32ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32ea0 size=16 callers=0 calls=0
*/
void sub_b32ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32ea0ULL || rel >= 0xb32eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32eb0 size=16 callers=0 calls=0
*/
void sub_b32eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32eb0ULL || rel >= 0xb32ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32ec0 size=16 callers=0 calls=0
*/
void sub_b32ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32ec0ULL || rel >= 0xb32ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32ed0 size=16 callers=0 calls=0
*/
void sub_b32ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32ed0ULL || rel >= 0xb32ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32ee0 size=16 callers=0 calls=0
*/
void sub_b32ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32ee0ULL || rel >= 0xb32ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32ef0 size=16 callers=0 calls=0
*/
void sub_b32ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32ef0ULL || rel >= 0xb32f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32f00 size=16 callers=0 calls=0
*/
void sub_b32f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32f00ULL || rel >= 0xb32f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32f10 size=16 callers=0 calls=0
*/
void sub_b32f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32f10ULL || rel >= 0xb32f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32f20 size=16 callers=0 calls=0
*/
void sub_b32f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32f20ULL || rel >= 0xb32f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32f30 size=16 callers=0 calls=0
*/
void sub_b32f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32f30ULL || rel >= 0xb32f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b32f40 size=304 callers=0 calls=0
*/
void sub_b32f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb32f40ULL || rel >= 0xb33070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33070 size=448 callers=1 calls=2
   calls: sub_b33d80, sub_b34150
*/
void sub_b33070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33070ULL || rel >= 0xb33230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33230 size=160 callers=0 calls=1
   calls: sub_b34150
*/
void sub_b33230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33230ULL || rel >= 0xb332d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b332d0 size=160 callers=0 calls=1
   calls: sub_b34150
*/
void sub_b332d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb332d0ULL || rel >= 0xb33370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33370 size=160 callers=0 calls=1
   calls: sub_b34150
*/
void sub_b33370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33370ULL || rel >= 0xb33410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33410 size=160 callers=0 calls=1
   calls: sub_b34150
*/
void sub_b33410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33410ULL || rel >= 0xb334b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b334b0 size=16 callers=0 calls=0
*/
void sub_b334b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb334b0ULL || rel >= 0xb334c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b334c0 size=32 callers=51 calls=1
   calls: sub_b364c0
*/
void sub_b334c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb334c0ULL || rel >= 0xb334e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b334e0 size=16 callers=15 calls=0
*/
void sub_b334e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb334e0ULL || rel >= 0xb334f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b334f0 size=16 callers=9 calls=0
*/
void sub_b334f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb334f0ULL || rel >= 0xb33500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33500 size=16 callers=7 calls=0
*/
void sub_b33500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33500ULL || rel >= 0xb33510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33510 size=96 callers=11 calls=1
   calls: sub_b378c0
*/
void sub_b33510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33510ULL || rel >= 0xb33570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33570 size=112 callers=5 calls=1
   calls: sub_b379e0
*/
void sub_b33570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33570ULL || rel >= 0xb335e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b335e0 size=96 callers=11 calls=1
   calls: sub_b37b10
*/
void sub_b335e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb335e0ULL || rel >= 0xb33640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33640 size=96 callers=11 calls=1
   calls: sub_b37c30
*/
void sub_b33640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33640ULL || rel >= 0xb336a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b336a0 size=96 callers=13 calls=1
   calls: sub_b37d40
*/
void sub_b336a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb336a0ULL || rel >= 0xb33700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33700 size=96 callers=8 calls=1
   calls: sub_b37e50
*/
void sub_b33700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33700ULL || rel >= 0xb33760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33760 size=160 callers=22 calls=1
   calls: sub_b37f60
*/
void sub_b33760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33760ULL || rel >= 0xb33800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33800 size=112 callers=22 calls=1
   calls: sub_b381a0
*/
void sub_b33800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33800ULL || rel >= 0xb33870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33870 size=112 callers=10 calls=1
   calls: sub_b383c0
*/
void sub_b33870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33870ULL || rel >= 0xb338e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b338e0 size=112 callers=1 calls=1
   calls: sub_b385b0
*/
void sub_b338e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb338e0ULL || rel >= 0xb33950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33950 size=112 callers=2 calls=1
   calls: sub_b387a0
*/
void sub_b33950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33950ULL || rel >= 0xb339c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b339c0 size=112 callers=1 calls=1
   calls: sub_b38990
*/
void sub_b339c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb339c0ULL || rel >= 0xb33a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33a30 size=112 callers=46 calls=1
   calls: sub_b38b80
*/
void sub_b33a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33a30ULL || rel >= 0xb33aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33aa0 size=112 callers=9 calls=1
   calls: sub_b38da0
*/
void sub_b33aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33aa0ULL || rel >= 0xb33b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33b10 size=112 callers=1 calls=1
   calls: sub_b39060
*/
void sub_b33b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33b10ULL || rel >= 0xb33b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33b80 size=112 callers=1 calls=1
   calls: sub_b392d0
*/
void sub_b33b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33b80ULL || rel >= 0xb33bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33bf0 size=112 callers=4 calls=1
   calls: sub_b39540
*/
void sub_b33bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33bf0ULL || rel >= 0xb33c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33c60 size=112 callers=65 calls=1
   calls: sub_b397b0
*/
void sub_b33c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33c60ULL || rel >= 0xb33cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33cd0 size=176 callers=4 calls=1
   calls: sub_b35f80
*/
void sub_b33cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33cd0ULL || rel >= 0xb33d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b33d80 size=976 callers=1 calls=5
   calls: sub_5cf8c0, sub_b4a710, sub_b7d150, sub_b7de60, sub_b86c10
*/
void sub_b33d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb33d80ULL || rel >= 0xb34150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b34150 size=768 callers=10 calls=3
   calls: sub_5cf8d0, sub_b7d150, sub_b7de60
*/
void sub_b34150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb34150ULL || rel >= 0xb34450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b34450 size=48 callers=0 calls=1
   calls: sub_b34150
*/
void sub_b34450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb34450ULL || rel >= 0xb34480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b34480 size=1056 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_b39cf0
*/
void sub_b34480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb34480ULL || rel >= 0xb348a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b348a0 size=1808 callers=3 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_b34fb0, sub_b35170, sub_b35490, sub_b39cf0, sub_b40ec0
*/
void sub_b348a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb348a0ULL || rel >= 0xb34fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b34fb0 size=448 callers=1 calls=4
   calls: sub_b39de0, sub_b39f90, sub_b3a2d0, sub_b3a4a0
*/
void sub_b34fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb34fb0ULL || rel >= 0xb35170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b35170 size=800 callers=5 calls=2
   calls: sub_b3aa10, sub_b73f00
*/
void sub_b35170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb35170ULL || rel >= 0xb35490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b35490 size=544 callers=8 calls=0
*/
void sub_b35490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb35490ULL || rel >= 0xb356b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b356b0 size=112 callers=0 calls=0
*/
void sub_b356b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb356b0ULL || rel >= 0xb35720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b35720 size=368 callers=2 calls=1
   calls: sub_b39cf0
*/
void sub_b35720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb35720ULL || rel >= 0xb35890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b35890 size=368 callers=2 calls=1
   calls: sub_b39cf0
*/
void sub_b35890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb35890ULL || rel >= 0xb35a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b35a00 size=384 callers=2 calls=1
   calls: sub_b39cf0
*/
void sub_b35a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb35a00ULL || rel >= 0xb35b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b35b80 size=656 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_b39cf0
*/
void sub_b35b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb35b80ULL || rel >= 0xb35e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b35e10 size=368 callers=2 calls=1
   calls: sub_b39cf0
*/
void sub_b35e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb35e10ULL || rel >= 0xb35f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b35f80 size=656 callers=37 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_b39cf0
*/
void sub_b35f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb35f80ULL || rel >= 0xb36210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b36210 size=688 callers=1 calls=8
   calls: sub_b35170, sub_b36520, sub_b36760, sub_b36900, sub_b3aa10, sub_b6f8c0, sub_b6fa40, sub_b73f00
*/
void sub_b36210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb36210ULL || rel >= 0xb364c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b364c0 size=96 callers=57 calls=2
   calls: sub_b3aa10, sub_b73f00
*/
void sub_b364c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb364c0ULL || rel >= 0xb36520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b36520 size=576 callers=1 calls=1
   calls: sub_b6f8c0
*/
void sub_b36520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb36520ULL || rel >= 0xb36760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b36760 size=416 callers=1 calls=3
   calls: sub_136b780, sub_b3aa10, sub_b73f00
*/
void sub_b36760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb36760ULL || rel >= 0xb36900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b36900 size=512 callers=1 calls=0
*/
void sub_b36900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb36900ULL || rel >= 0xb36b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b36b00 size=784 callers=1 calls=0
*/
void sub_b36b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb36b00ULL || rel >= 0xb36e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b36e10 size=144 callers=0 calls=0
*/
void sub_b36e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb36e10ULL || rel >= 0xb36ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b36ea0 size=368 callers=3 calls=2
   calls: sub_b3a8e0, sub_b48600
*/
void sub_b36ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb36ea0ULL || rel >= 0xb37010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b37010 size=16 callers=2 calls=0
*/
void sub_b37010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb37010ULL || rel >= 0xb37020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b37020 size=528 callers=0 calls=3
   calls: sub_b348a0, sub_b36210, sub_b39cf0
*/
void sub_b37020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb37020ULL || rel >= 0xb37230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b37230 size=640 callers=0 calls=5
   calls: sub_12f85b0, sub_b348a0, sub_b36b00, sub_b39cf0, sub_b3abe0
*/
void sub_b37230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb37230ULL || rel >= 0xb374b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b374b0 size=1040 callers=0 calls=7
   calls: sub_136b780, sub_b348a0, sub_b35170, sub_b35490, sub_b3adb0, sub_b6f8c0, sub_b6fa40
*/
void sub_b374b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb374b0ULL || rel >= 0xb378c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b378c0 size=288 callers=1 calls=2
   calls: sub_b35720, sub_b35f80
*/
void sub_b378c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb378c0ULL || rel >= 0xb379e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b379e0 size=304 callers=1 calls=2
   calls: sub_b35e10, sub_b35f80
*/
void sub_b379e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb379e0ULL || rel >= 0xb37b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b37b10 size=288 callers=1 calls=2
   calls: sub_b35890, sub_b35f80
*/
void sub_b37b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb37b10ULL || rel >= 0xb37c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b37c30 size=272 callers=1 calls=2
   calls: sub_b35a00, sub_b35f80
*/
void sub_b37c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb37c30ULL || rel >= 0xb37d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b37d40 size=272 callers=1 calls=1
   calls: sub_b35f80
*/
void sub_b37d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb37d40ULL || rel >= 0xb37e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b37e50 size=272 callers=1 calls=2
   calls: sub_b35b80, sub_b35f80
*/
void sub_b37e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb37e50ULL || rel >= 0xb37f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b37f60 size=576 callers=1 calls=2
   calls: sub_b35f80, sub_b39cf0
*/
void sub_b37f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb37f60ULL || rel >= 0xb381a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b381a0 size=544 callers=3 calls=2
   calls: sub_b35f80, sub_b39cf0
*/
void sub_b381a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb381a0ULL || rel >= 0xb383c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b383c0 size=496 callers=1 calls=2
   calls: sub_b35f80, sub_b39cf0
*/
void sub_b383c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb383c0ULL || rel >= 0xb385b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b385b0 size=496 callers=1 calls=2
   calls: sub_b35f80, sub_b39cf0
*/
void sub_b385b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb385b0ULL || rel >= 0xb387a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b387a0 size=496 callers=1 calls=2
   calls: sub_b35f80, sub_b39cf0
*/
void sub_b387a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb387a0ULL || rel >= 0xb38990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b38990 size=496 callers=1 calls=2
   calls: sub_b35f80, sub_b39cf0
*/
void sub_b38990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb38990ULL || rel >= 0xb38b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b38b80 size=544 callers=1 calls=2
   calls: sub_b35f80, sub_b39cf0
*/
void sub_b38b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb38b80ULL || rel >= 0xb38da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b38da0 size=704 callers=1 calls=3
   calls: sub_b35f80, sub_b39cf0, sub_b3adb0
*/
void sub_b38da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb38da0ULL || rel >= 0xb39060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b39060 size=624 callers=1 calls=4
   calls: sub_b35f80, sub_b39cf0, sub_b3aee0, sub_b8ab50
*/
void sub_b39060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb39060ULL || rel >= 0xb392d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b392d0 size=624 callers=1 calls=4
   calls: sub_b35f80, sub_b39cf0, sub_b3aee0, sub_b8ab90
*/
void sub_b392d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb392d0ULL || rel >= 0xb39540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b39540 size=624 callers=1 calls=4
   calls: sub_b35f80, sub_b39cf0, sub_b3aee0, sub_b8ab10
*/
void sub_b39540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb39540ULL || rel >= 0xb397b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b397b0 size=544 callers=1 calls=2
   calls: sub_b35f80, sub_b39cf0
*/
void sub_b397b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb397b0ULL || rel >= 0xb399d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b399d0 size=112 callers=0 calls=0
*/
void sub_b399d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb399d0ULL || rel >= 0xb39a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b39a40 size=80 callers=0 calls=0
*/
void sub_b39a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb39a40ULL || rel >= 0xb39a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b39a90 size=80 callers=0 calls=0
*/
void sub_b39a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb39a90ULL || rel >= 0xb39ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b39ae0 size=48 callers=0 calls=1
   calls: sub_b35490
*/
void sub_b39ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb39ae0ULL || rel >= 0xb39b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b39b10 size=144 callers=0 calls=0
*/
void sub_b39b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb39b10ULL || rel >= 0xb39ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b39ba0 size=48 callers=0 calls=1
   calls: sub_b35490
*/
void sub_b39ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb39ba0ULL || rel >= 0xb39bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b39bd0 size=144 callers=0 calls=2
   calls: sub_b7d150, sub_b7de60
*/
void sub_b39bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb39bd0ULL || rel >= 0xb39c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b39c60 size=144 callers=0 calls=2
   calls: sub_b7d150, sub_b7de60
*/
void sub_b39c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb39c60ULL || rel >= 0xb39cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b39cf0 size=240 callers=104 calls=0
*/
void sub_b39cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb39cf0ULL || rel >= 0xb39de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b39de0 size=432 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_b39de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb39de0ULL || rel >= 0xb39f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b39f90 size=832 callers=1 calls=3
   calls: sub_5e2350, sub_b6f8c0, sub_b70d80
*/
void sub_b39f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb39f90ULL || rel >= 0xb3a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3a2d0 size=464 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_b3a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3a2d0ULL || rel >= 0xb3a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3a4a0 size=416 callers=1 calls=0
*/
void sub_b3a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3a4a0ULL || rel >= 0xb3a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3a640 size=128 callers=0 calls=0
*/
void sub_b3a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3a640ULL || rel >= 0xb3a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3a6c0 size=128 callers=0 calls=0
*/
void sub_b3a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3a6c0ULL || rel >= 0xb3a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3a740 size=128 callers=0 calls=0
*/
void sub_b3a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3a740ULL || rel >= 0xb3a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3a7c0 size=128 callers=0 calls=0
*/
void sub_b3a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3a7c0ULL || rel >= 0xb3a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3a840 size=80 callers=0 calls=0
*/
void sub_b3a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3a840ULL || rel >= 0xb3a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3a890 size=80 callers=0 calls=0
*/
void sub_b3a890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3a890ULL || rel >= 0xb3a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3a8e0 size=304 callers=15 calls=0
*/
void sub_b3a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3a8e0ULL || rel >= 0xb3aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3aa10 size=464 callers=27 calls=0
*/
void sub_b3aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3aa10ULL || rel >= 0xb3abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3abe0 size=464 callers=46 calls=0
*/
void sub_b3abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3abe0ULL || rel >= 0xb3adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3adb0 size=304 callers=2 calls=1
   calls: sub_b39cf0
*/
void sub_b3adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3adb0ULL || rel >= 0xb3aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3aee0 size=464 callers=3 calls=1
   calls: sub_b39cf0
*/
void sub_b3aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3aee0ULL || rel >= 0xb3b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3b0b0 size=816 callers=0 calls=0
*/
void sub_b3b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3b0b0ULL || rel >= 0xb3b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3b3e0 size=16 callers=0 calls=0
*/
void sub_b3b3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3b3e0ULL || rel >= 0xb3b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3b3f0 size=16 callers=0 calls=0
*/
void sub_b3b3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3b3f0ULL || rel >= 0xb3b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3b400 size=16 callers=0 calls=0
*/
void sub_b3b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3b400ULL || rel >= 0xb3b410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3b410 size=16 callers=0 calls=0
*/
void sub_b3b410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3b410ULL || rel >= 0xb3b420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3b420 size=16 callers=0 calls=0
*/
void sub_b3b420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3b420ULL || rel >= 0xb3b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3b430 size=1024 callers=1 calls=4
   calls: sub_b3abe0, sub_b3b830, sub_b424e0, sub_b659b0
*/
void sub_b3b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3b430ULL || rel >= 0xb3b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3b830 size=448 callers=3 calls=2
   calls: sub_b3abe0, sub_b60780
*/
void sub_b3b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3b830ULL || rel >= 0xb3b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3b9f0 size=2160 callers=2 calls=7
   calls: sub_b3abe0, sub_b3b830, sub_b3c260, sub_b426b0, sub_b427a0, sub_b63f70, sub_b64d00
*/
void sub_b3b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3b9f0ULL || rel >= 0xb3c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3c260 size=1056 callers=1 calls=6
   calls: sub_967240, sub_986200, sub_b3abe0, sub_b65b20, sub_ea9e40, sub_ea9e50
*/
void sub_b3c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3c260ULL || rel >= 0xb3c680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3c680 size=304 callers=1 calls=0
*/
void sub_b3c680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3c680ULL || rel >= 0xb3c7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3c7b0 size=80 callers=0 calls=0
*/
void sub_b3c7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3c7b0ULL || rel >= 0xb3c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3c800 size=96 callers=1 calls=1
   calls: sub_b3c860
*/
void sub_b3c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3c800ULL || rel >= 0xb3c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3c860 size=656 callers=2 calls=4
   calls: sub_b3abe0, sub_b3b830, sub_b60780, sub_b61090
*/
void sub_b3c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3c860ULL || rel >= 0xb3caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3caf0 size=48 callers=1 calls=1
   calls: sub_b3c860
*/
void sub_b3caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3caf0ULL || rel >= 0xb3cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3cb20 size=3488 callers=1 calls=19
   calls: eye01_03, loc_ob_band02, sub_598de0, sub_5d99d0, sub_967240, sub_989700, sub_989810, sub_b364c0, sub_b36ea0, sub_b3d8c0, sub_b3e100, sub_b42e80
   ... +7 more
*/
void sub_b3cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3cb20ULL || rel >= 0xb3d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3d8c0 size=240 callers=1 calls=2
   calls: sub_612ef0, sub_b364c0
*/
void sub_b3d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3d8c0ULL || rel >= 0xb3d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3d9b0 size=1872 callers=1 calls=5
   calls: sub_b364c0, sub_b37010, sub_b491e0, sub_b494a0, sub_b84370
   ref: Top/eye_default/eye_blink/eye01_02
   ref: Top/eye_default/eye_blink/eye01_01_end
   ref: Top/eye_default/eye_blink/eye01_01_start
   ref: Top/eye_default/eye_blink/eye01_03
*/
void eye01_03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3d9b0ULL || rel >= 0xb3e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3e100 size=256 callers=1 calls=2
   calls: sub_5d99d0, sub_ee1250
*/
void sub_b3e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3e100ULL || rel >= 0xb3e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3e200 size=1584 callers=6 calls=10
   calls: sub_5d99d0, sub_5dc5d0, sub_607750, sub_619060, sub_967240, sub_96ccf0, sub_97e1a0, sub_b447b0, sub_b45040, sub_ee1580
   ref: loc_ob_Lobj01
   ref: loc_ob_Robj01
   ref: loc_ob_band01
   ref: loc_attach
   ref: loc_ob_band02
   ref: loc_ob_ball
   ref: Origin
*/
void loc_ob_band02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3e200ULL || rel >= 0xb3e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3e830 size=1984 callers=1 calls=7
   calls: sub_967240, sub_b3eff0, sub_b43450, sub_b43770, sub_b43a90, sub_b43db0, sub_b44040
*/
void sub_b3e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3e830ULL || rel >= 0xb3eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3eff0 size=912 callers=6 calls=4
   calls: sub_607750, sub_967240, sub_b44430, sub_ee17c0
*/
void sub_b3eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3eff0ULL || rel >= 0xb3f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3f380 size=32 callers=0 calls=0
*/
void sub_b3f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3f380ULL || rel >= 0xb3f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3f3a0 size=80 callers=0 calls=0
*/
void sub_b3f3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3f3a0ULL || rel >= 0xb3f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3f3f0 size=64 callers=0 calls=0
*/
void sub_b3f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3f3f0ULL || rel >= 0xb3f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3f430 size=656 callers=1 calls=3
   calls: sub_967240, sub_b3f6c0, sub_b3f840
*/
void sub_b3f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3f430ULL || rel >= 0xb3f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3f6c0 size=384 callers=8 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_96ccf0
*/
void sub_b3f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3f6c0ULL || rel >= 0xb3f840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3f840 size=336 callers=2 calls=1
   calls: sub_967240
*/
void sub_b3f840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3f840ULL || rel >= 0xb3f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3f990 size=576 callers=1 calls=2
   calls: sub_967240, sub_b3f840
*/
void sub_b3f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3f990ULL || rel >= 0xb3fbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3fbd0 size=80 callers=0 calls=0
*/
void sub_b3fbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3fbd0ULL || rel >= 0xb3fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3fc20 size=64 callers=0 calls=0
*/
void sub_b3fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3fc20ULL || rel >= 0xb3fc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b3fc60 size=1040 callers=1 calls=2
   calls: sub_5f19d0, sub_618ec0
*/
void sub_b3fc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3fc60ULL || rel >= 0xb40070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b40070 size=1600 callers=1 calls=3
   calls: sub_619060, sub_96ccf0, sub_b381a0
*/
void sub_b40070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb40070ULL || rel >= 0xb406b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b406b0 size=48 callers=0 calls=0
*/
void sub_b406b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb406b0ULL || rel >= 0xb406e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b406e0 size=1648 callers=1 calls=3
   calls: sub_6191c0, sub_96ccf0, sub_b381a0
*/
void sub_b406e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb406e0ULL || rel >= 0xb40d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b40d50 size=96 callers=0 calls=1
   calls: sub_598de0
*/
void sub_b40d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb40d50ULL || rel >= 0xb40db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b40db0 size=48 callers=2 calls=1
   calls: sub_599a80
*/
void sub_b40db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb40db0ULL || rel >= 0xb40de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b40de0 size=192 callers=1 calls=2
   calls: sub_598de0, sub_b43130
*/
void sub_b40de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb40de0ULL || rel >= 0xb40ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b40ea0 size=16 callers=0 calls=0
*/
void sub_b40ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb40ea0ULL || rel >= 0xb40eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b40eb0 size=16 callers=0 calls=0
*/
void sub_b40eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb40eb0ULL || rel >= 0xb40ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b40ec0 size=320 callers=1 calls=3
   calls: sub_b35490, sub_b39de0, sub_b41000
*/
void sub_b40ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb40ec0ULL || rel >= 0xb41000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b41000 size=1184 callers=1 calls=0
*/
void sub_b41000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb41000ULL || rel >= 0xb414a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b414a0 size=176 callers=0 calls=2
   calls: sub_619060, sub_96ccf0
*/
void sub_b414a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb414a0ULL || rel >= 0xb41550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b41550 size=1856 callers=1 calls=10
   calls: sub_59bee0, sub_5d99d0, sub_607750, sub_967240, sub_97e1a0, sub_b44890, sub_b44ad0, sub_b44bb0, sub_ee1580, sub_ee42d0
*/
void sub_b41550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb41550ULL || rel >= 0xb41c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b41c90 size=768 callers=1 calls=4
   calls: sub_607750, sub_967240, sub_b44db0, sub_ee17c0
*/
void sub_b41c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb41c90ULL || rel >= 0xb41f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b41f90 size=112 callers=0 calls=1
   calls: sub_b42430
*/
void sub_b41f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb41f90ULL || rel >= 0xb42000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42000 size=16 callers=0 calls=0
*/
void sub_b42000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42000ULL || rel >= 0xb42010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42010 size=16 callers=0 calls=0
*/
void sub_b42010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42010ULL || rel >= 0xb42020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42020 size=32 callers=0 calls=0
*/
void sub_b42020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42020ULL || rel >= 0xb42040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42040 size=16 callers=0 calls=0
*/
void sub_b42040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42040ULL || rel >= 0xb42050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42050 size=16 callers=0 calls=0
*/
void sub_b42050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42050ULL || rel >= 0xb42060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42060 size=48 callers=0 calls=0
*/
void sub_b42060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42060ULL || rel >= 0xb42090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42090 size=48 callers=0 calls=0
*/
void sub_b42090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42090ULL || rel >= 0xb420c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b420c0 size=240 callers=0 calls=1
   calls: sub_b39cf0
*/
void sub_b420c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb420c0ULL || rel >= 0xb421b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b421b0 size=240 callers=0 calls=1
   calls: sub_b39cf0
*/
void sub_b421b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb421b0ULL || rel >= 0xb422a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b422a0 size=80 callers=0 calls=0
*/
void sub_b422a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb422a0ULL || rel >= 0xb422f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b422f0 size=80 callers=0 calls=0
*/
void sub_b422f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb422f0ULL || rel >= 0xb42340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42340 size=16 callers=0 calls=0
*/
void sub_b42340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42340ULL || rel >= 0xb42350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42350 size=16 callers=0 calls=0
*/
void sub_b42350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42350ULL || rel >= 0xb42360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42360 size=80 callers=0 calls=0
*/
void sub_b42360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42360ULL || rel >= 0xb423b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b423b0 size=48 callers=0 calls=1
   calls: sub_b3c680
*/
void sub_b423b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb423b0ULL || rel >= 0xb423e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b423e0 size=80 callers=0 calls=0
*/
void sub_b423e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb423e0ULL || rel >= 0xb42430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42430 size=176 callers=2 calls=1
   calls: sub_b39cf0
*/
void sub_b42430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42430ULL || rel >= 0xb424e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b424e0 size=464 callers=6 calls=1
   calls: sub_b39cf0
*/
void sub_b424e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb424e0ULL || rel >= 0xb426b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b426b0 size=240 callers=21 calls=0
*/
void sub_b426b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb426b0ULL || rel >= 0xb427a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b427a0 size=464 callers=2 calls=2
   calls: sub_5e2350, sub_7c2da0
*/
void sub_b427a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb427a0ULL || rel >= 0xb42970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42970 size=208 callers=0 calls=0
*/
void sub_b42970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42970ULL || rel >= 0xb42a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42a40 size=208 callers=0 calls=0
*/
void sub_b42a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42a40ULL || rel >= 0xb42b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42b10 size=16 callers=0 calls=0
*/
void sub_b42b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42b10ULL || rel >= 0xb42b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42b20 size=208 callers=0 calls=0
*/
void sub_b42b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42b20ULL || rel >= 0xb42bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42bf0 size=208 callers=0 calls=0
*/
void sub_b42bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42bf0ULL || rel >= 0xb42cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42cc0 size=16 callers=0 calls=0
*/
void sub_b42cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42cc0ULL || rel >= 0xb42cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42cd0 size=16 callers=0 calls=0
*/
void sub_b42cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42cd0ULL || rel >= 0xb42ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42ce0 size=208 callers=0 calls=0
*/
void sub_b42ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42ce0ULL || rel >= 0xb42db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42db0 size=208 callers=0 calls=0
*/
void sub_b42db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42db0ULL || rel >= 0xb42e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42e80 size=224 callers=1 calls=1
   calls: sub_b46560
*/
void sub_b42e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42e80ULL || rel >= 0xb42f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b42f60 size=464 callers=1 calls=1
   calls: sub_b39cf0
*/
void sub_b42f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb42f60ULL || rel >= 0xb43130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b43130 size=464 callers=9 calls=1
   calls: sub_b39cf0
*/
void sub_b43130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb43130ULL || rel >= 0xb43300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b43300 size=336 callers=2 calls=1
   calls: sub_b84ba0
*/
void sub_b43300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb43300ULL || rel >= 0xb43450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b43450 size=800 callers=3 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_b43450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb43450ULL || rel >= 0xb43770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b43770 size=800 callers=6 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_b43770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb43770ULL || rel >= 0xb43a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b43a90 size=800 callers=5 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_b43a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb43a90ULL || rel >= 0xb43db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b43db0 size=656 callers=5 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_96ccf0
*/
void sub_b43db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb43db0ULL || rel >= 0xb44040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b44040 size=800 callers=6 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_b44040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb44040ULL || rel >= 0xb44360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b44360 size=16 callers=0 calls=0
*/
void sub_b44360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb44360ULL || rel >= 0xb44370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b44370 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b44370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb44370ULL || rel >= 0xb443b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b443b0 size=32 callers=0 calls=0
*/
void sub_b443b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb443b0ULL || rel >= 0xb443d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b443d0 size=16 callers=0 calls=0
*/
void sub_b443d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb443d0ULL || rel >= 0xb443e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b443e0 size=16 callers=0 calls=0
*/
void sub_b443e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb443e0ULL || rel >= 0xb443f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b443f0 size=48 callers=0 calls=1
   calls: sub_b3f6c0
*/
void sub_b443f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb443f0ULL || rel >= 0xb44420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b44420 size=16 callers=0 calls=0
*/
void sub_b44420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb44420ULL || rel >= 0xb44430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b44430 size=656 callers=3 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_b446c0
*/
void sub_b44430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb44430ULL || rel >= 0xb446c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b446c0 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_b446c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb446c0ULL || rel >= 0xb447b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b447b0 size=224 callers=5 calls=1
   calls: sub_5dbcc0
*/
void sub_b447b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb447b0ULL || rel >= 0xb44890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b44890 size=336 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_b449e0
*/
void sub_b44890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb44890ULL || rel >= 0xb449e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b449e0 size=240 callers=8 calls=1
   calls: sub_607750
*/
void sub_b449e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb449e0ULL || rel >= 0xb44ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b44ad0 size=224 callers=1 calls=1
   calls: sub_ee4060
*/
void sub_b44ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb44ad0ULL || rel >= 0xb44bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b44bb0 size=512 callers=59 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_b44bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb44bb0ULL || rel >= 0xb44db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b44db0 size=656 callers=3 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_b449e0
*/
void sub_b44db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb44db0ULL || rel >= 0xb45040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45040 size=816 callers=2 calls=2
   calls: sub_607750, sub_96ccf0
*/
void sub_b45040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45040ULL || rel >= 0xb45370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45370 size=16 callers=0 calls=0
*/
void sub_b45370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45370ULL || rel >= 0xb45380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45380 size=16 callers=0 calls=0
*/
void sub_b45380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45380ULL || rel >= 0xb45390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45390 size=16 callers=0 calls=0
*/
void sub_b45390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45390ULL || rel >= 0xb453a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b453a0 size=16 callers=0 calls=0
*/
void sub_b453a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb453a0ULL || rel >= 0xb453b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b453b0 size=16 callers=0 calls=0
*/
void sub_b453b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb453b0ULL || rel >= 0xb453c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b453c0 size=16 callers=0 calls=0
*/
void sub_b453c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb453c0ULL || rel >= 0xb453d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b453d0 size=16 callers=0 calls=0
*/
void sub_b453d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb453d0ULL || rel >= 0xb453e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b453e0 size=16 callers=0 calls=0
*/
void sub_b453e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb453e0ULL || rel >= 0xb453f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b453f0 size=16 callers=0 calls=0
*/
void sub_b453f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb453f0ULL || rel >= 0xb45400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45400 size=16 callers=0 calls=0
*/
void sub_b45400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45400ULL || rel >= 0xb45410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45410 size=400 callers=0 calls=2
   calls: sub_967240, sub_b3f6c0
*/
void sub_b45410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45410ULL || rel >= 0xb455a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b455a0 size=320 callers=0 calls=1
   calls: sub_967240
*/
void sub_b455a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb455a0ULL || rel >= 0xb456e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b456e0 size=304 callers=0 calls=1
   calls: sub_967240
*/
void sub_b456e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb456e0ULL || rel >= 0xb45810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45810 size=112 callers=0 calls=0
*/
void sub_b45810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45810ULL || rel >= 0xb45880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45880 size=16 callers=0 calls=0
*/
void sub_b45880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45880ULL || rel >= 0xb45890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45890 size=16 callers=0 calls=0
*/
void sub_b45890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45890ULL || rel >= 0xb458a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b458a0 size=304 callers=0 calls=3
   calls: sub_5f19d0, sub_618ec0, sub_96ccf0
*/
void sub_b458a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb458a0ULL || rel >= 0xb459d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b459d0 size=144 callers=0 calls=2
   calls: sub_619060, sub_96ccf0
*/
void sub_b459d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb459d0ULL || rel >= 0xb45a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45a60 size=144 callers=0 calls=2
   calls: sub_6191c0, sub_96ccf0
*/
void sub_b45a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45a60ULL || rel >= 0xb45af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45af0 size=16 callers=0 calls=0
*/
void sub_b45af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45af0ULL || rel >= 0xb45b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45b00 size=16 callers=0 calls=0
*/
void sub_b45b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45b00ULL || rel >= 0xb45b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45b10 size=16 callers=0 calls=0
*/
void sub_b45b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45b10ULL || rel >= 0xb45b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45b20 size=16 callers=0 calls=0
*/
void sub_b45b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45b20ULL || rel >= 0xb45b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45b30 size=16 callers=0 calls=0
*/
void sub_b45b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45b30ULL || rel >= 0xb45b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45b40 size=16 callers=0 calls=0
*/
void sub_b45b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45b40ULL || rel >= 0xb45b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45b50 size=16 callers=0 calls=0
*/
void sub_b45b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45b50ULL || rel >= 0xb45b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45b60 size=16 callers=0 calls=0
*/
void sub_b45b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45b60ULL || rel >= 0xb45b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45b70 size=16 callers=0 calls=0
*/
void sub_b45b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45b70ULL || rel >= 0xb45b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45b80 size=16 callers=0 calls=0
*/
void sub_b45b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45b80ULL || rel >= 0xb45b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45b90 size=16 callers=0 calls=0
*/
void sub_b45b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45b90ULL || rel >= 0xb45ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45ba0 size=16 callers=0 calls=0
*/
void sub_b45ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45ba0ULL || rel >= 0xb45bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45bb0 size=16 callers=0 calls=0
*/
void sub_b45bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45bb0ULL || rel >= 0xb45bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45bc0 size=16 callers=0 calls=0
*/
void sub_b45bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45bc0ULL || rel >= 0xb45bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45bd0 size=16 callers=0 calls=0
*/
void sub_b45bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45bd0ULL || rel >= 0xb45be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45be0 size=416 callers=3 calls=2
   calls: sub_607750, sub_b486a0
*/
void sub_b45be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45be0ULL || rel >= 0xb45d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45d80 size=160 callers=0 calls=0
*/
void sub_b45d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45d80ULL || rel >= 0xb45e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45e20 size=160 callers=0 calls=0
*/
void sub_b45e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45e20ULL || rel >= 0xb45ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45ec0 size=16 callers=0 calls=0
*/
void sub_b45ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45ec0ULL || rel >= 0xb45ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45ed0 size=160 callers=0 calls=0
*/
void sub_b45ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45ed0ULL || rel >= 0xb45f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b45f70 size=160 callers=0 calls=0
*/
void sub_b45f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb45f70ULL || rel >= 0xb46010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46010 size=16 callers=0 calls=0
*/
void sub_b46010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46010ULL || rel >= 0xb46020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46020 size=16 callers=0 calls=0
*/
void sub_b46020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46020ULL || rel >= 0xb46030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46030 size=160 callers=0 calls=0
*/
void sub_b46030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46030ULL || rel >= 0xb460d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b460d0 size=160 callers=0 calls=0
*/
void sub_b460d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb460d0ULL || rel >= 0xb46170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46170 size=304 callers=6 calls=0
*/
void sub_b46170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46170ULL || rel >= 0xb462a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b462a0 size=16 callers=0 calls=0
*/
void sub_b462a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb462a0ULL || rel >= 0xb462b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b462b0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b462b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb462b0ULL || rel >= 0xb462f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b462f0 size=32 callers=0 calls=0
*/
void sub_b462f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb462f0ULL || rel >= 0xb46310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46310 size=16 callers=0 calls=0
*/
void sub_b46310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46310ULL || rel >= 0xb46320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46320 size=16 callers=0 calls=0
*/
void sub_b46320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46320ULL || rel >= 0xb46330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46330 size=560 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_b46330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46330ULL || rel >= 0xb46560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46560 size=80 callers=4 calls=1
   calls: sub_5db1b0
*/
void sub_b46560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46560ULL || rel >= 0xb465b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b465b0 size=288 callers=0 calls=0
*/
void sub_b465b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb465b0ULL || rel >= 0xb466d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b466d0 size=16 callers=0 calls=0
*/
void sub_b466d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb466d0ULL || rel >= 0xb466e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b466e0 size=16 callers=0 calls=0
*/
void sub_b466e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb466e0ULL || rel >= 0xb466f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b466f0 size=16 callers=0 calls=0
*/
void sub_b466f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb466f0ULL || rel >= 0xb46700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46700 size=16 callers=0 calls=0
*/
void sub_b46700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46700ULL || rel >= 0xb46710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46710 size=16 callers=0 calls=0
*/
void sub_b46710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46710ULL || rel >= 0xb46720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46720 size=112 callers=16 calls=0
*/
void sub_b46720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46720ULL || rel >= 0xb46790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46790 size=112 callers=15 calls=0
*/
void sub_b46790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46790ULL || rel >= 0xb46800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46800 size=176 callers=1 calls=0
*/
void sub_b46800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46800ULL || rel >= 0xb468b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b468b0 size=352 callers=0 calls=1
   calls: sub_c70
*/
void sub_b468b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb468b0ULL || rel >= 0xb46a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46a10 size=32 callers=14 calls=0
*/
void sub_b46a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46a10ULL || rel >= 0xb46a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46a30 size=256 callers=2 calls=0
*/
void sub_b46a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46a30ULL || rel >= 0xb46b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46b30 size=256 callers=11 calls=0
*/
void sub_b46b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46b30ULL || rel >= 0xb46c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46c30 size=256 callers=2 calls=0
*/
void sub_b46c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46c30ULL || rel >= 0xb46d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46d30 size=256 callers=2 calls=0
*/
void sub_b46d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46d30ULL || rel >= 0xb46e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46e30 size=240 callers=14 calls=0
*/
void sub_b46e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46e30ULL || rel >= 0xb46f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b46f20 size=672 callers=9 calls=4
   calls: sub_607750, sub_b33a30, sub_ed0960, sub_ee1910
*/
void sub_b46f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb46f20ULL || rel >= 0xb471c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b471c0 size=176 callers=1 calls=1
   calls: sub_b33a30
*/
void sub_b471c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb471c0ULL || rel >= 0xb47270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b47270 size=672 callers=1 calls=4
   calls: sub_607750, sub_b33a30, sub_ed09c0, sub_ee19e0
*/
void sub_b47270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb47270ULL || rel >= 0xb47510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b47510 size=672 callers=3 calls=4
   calls: sub_607750, sub_b33a30, sub_ed0a20, sub_ee1ac0
*/
void sub_b47510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb47510ULL || rel >= 0xb477b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b477b0 size=656 callers=6 calls=4
   calls: sub_607750, sub_b33a30, sub_ed0a80, sub_ee1b90
*/
void sub_b477b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb477b0ULL || rel >= 0xb47a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b47a40 size=16 callers=3 calls=0
*/
void sub_b47a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb47a40ULL || rel >= 0xb47a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b47a50 size=32 callers=3 calls=0
*/
void sub_b47a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb47a50ULL || rel >= 0xb47a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b47a70 size=16 callers=3 calls=0
*/
void sub_b47a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb47a70ULL || rel >= 0xb47a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b47a80 size=16 callers=2 calls=0
*/
void sub_b47a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb47a80ULL || rel >= 0xb47a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b47a90 size=16 callers=2 calls=0
*/
void sub_b47a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb47a90ULL || rel >= 0xb47aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b47aa0 size=16 callers=2 calls=0
*/
void sub_b47aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb47aa0ULL || rel >= 0xb47ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b47ab0 size=16 callers=2 calls=0
*/
void sub_b47ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb47ab0ULL || rel >= 0xb47ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b47ac0 size=640 callers=2 calls=4
   calls: sub_59a5a0, sub_607750, sub_b33a30, sub_ee1c50
*/
void sub_b47ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb47ac0ULL || rel >= 0xb47d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b47d40 size=656 callers=2 calls=4
   calls: sub_59a5c0, sub_607750, sub_b33a30, sub_ee1d00
*/
void sub_b47d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb47d40ULL || rel >= 0xb47fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b47fd0 size=656 callers=2 calls=4
   calls: sub_59a650, sub_607750, sub_b33a30, sub_ee1dc0
*/
void sub_b47fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb47fd0ULL || rel >= 0xb48260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48260 size=16 callers=2 calls=0
*/
void sub_b48260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48260ULL || rel >= 0xb48270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48270 size=64 callers=5 calls=0
*/
void sub_b48270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48270ULL || rel >= 0xb482b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b482b0 size=80 callers=2 calls=0
*/
void sub_b482b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb482b0ULL || rel >= 0xb48300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48300 size=80 callers=1 calls=1
   calls: sub_b490f0
*/
void sub_b48300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48300ULL || rel >= 0xb48350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48350 size=80 callers=3 calls=1
   calls: sub_b490f0
*/
void sub_b48350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48350ULL || rel >= 0xb483a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b483a0 size=80 callers=1 calls=1
   calls: sub_b490f0
*/
void sub_b483a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb483a0ULL || rel >= 0xb483f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b483f0 size=80 callers=3 calls=1
   calls: sub_b490f0
*/
void sub_b483f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb483f0ULL || rel >= 0xb48440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48440 size=144 callers=1 calls=2
   calls: sub_b41550, sub_b490f0
*/
void sub_b48440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48440ULL || rel >= 0xb484d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b484d0 size=128 callers=1 calls=2
   calls: sub_b41c90, sub_b490f0
*/
void sub_b484d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb484d0ULL || rel >= 0xb48550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48550 size=176 callers=8 calls=1
   calls: sub_b33800
*/
void sub_b48550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48550ULL || rel >= 0xb48600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48600 size=160 callers=1 calls=0
*/
void sub_b48600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48600ULL || rel >= 0xb486a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b486a0 size=96 callers=1 calls=0
*/
void sub_b486a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb486a0ULL || rel >= 0xb48700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48700 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_b48700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48700ULL || rel >= 0xb48770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48770 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_b48770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48770ULL || rel >= 0xb487e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b487e0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_b487e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb487e0ULL || rel >= 0xb48850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48850 size=16 callers=0 calls=0
*/
void sub_b48850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48850ULL || rel >= 0xb48860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48860 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b48860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48860ULL || rel >= 0xb488a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b488a0 size=32 callers=0 calls=0
*/
void sub_b488a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb488a0ULL || rel >= 0xb488c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b488c0 size=16 callers=0 calls=0
*/
void sub_b488c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb488c0ULL || rel >= 0xb488d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b488d0 size=16 callers=0 calls=0
*/
void sub_b488d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb488d0ULL || rel >= 0xb488e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b488e0 size=80 callers=0 calls=0
*/
void sub_b488e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb488e0ULL || rel >= 0xb48930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48930 size=16 callers=0 calls=0
*/
void sub_b48930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48930ULL || rel >= 0xb48940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48940 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b48940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48940ULL || rel >= 0xb48980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48980 size=32 callers=0 calls=0
*/
void sub_b48980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48980ULL || rel >= 0xb489a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b489a0 size=16 callers=0 calls=0
*/
void sub_b489a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb489a0ULL || rel >= 0xb489b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b489b0 size=16 callers=0 calls=0
*/
void sub_b489b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb489b0ULL || rel >= 0xb489c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b489c0 size=80 callers=0 calls=0
*/
void sub_b489c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb489c0ULL || rel >= 0xb48a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48a10 size=16 callers=0 calls=0
*/
void sub_b48a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48a10ULL || rel >= 0xb48a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48a20 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b48a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48a20ULL || rel >= 0xb48a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48a60 size=32 callers=0 calls=0
*/
void sub_b48a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48a60ULL || rel >= 0xb48a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48a80 size=16 callers=0 calls=0
*/
void sub_b48a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48a80ULL || rel >= 0xb48a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48a90 size=16 callers=0 calls=0
*/
void sub_b48a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48a90ULL || rel >= 0xb48aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48aa0 size=96 callers=0 calls=0
*/
void sub_b48aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48aa0ULL || rel >= 0xb48b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48b00 size=64 callers=0 calls=0
*/
void sub_b48b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48b00ULL || rel >= 0xb48b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48b40 size=64 callers=0 calls=0
*/
void sub_b48b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48b40ULL || rel >= 0xb48b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48b80 size=80 callers=0 calls=1
   calls: sub_c70
*/
void sub_b48b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48b80ULL || rel >= 0xb48bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48bd0 size=48 callers=0 calls=0
*/
void sub_b48bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48bd0ULL || rel >= 0xb48c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48c00 size=64 callers=0 calls=0
*/
void sub_b48c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48c00ULL || rel >= 0xb48c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48c40 size=64 callers=0 calls=0
*/
void sub_b48c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48c40ULL || rel >= 0xb48c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48c80 size=224 callers=0 calls=2
   calls: sub_5f19d0, sub_618ec0
*/
void sub_b48c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48c80ULL || rel >= 0xb48d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48d60 size=16 callers=0 calls=0
*/
void sub_b48d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48d60ULL || rel >= 0xb48d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48d70 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b48d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48d70ULL || rel >= 0xb48db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48db0 size=32 callers=0 calls=0
*/
void sub_b48db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48db0ULL || rel >= 0xb48dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48dd0 size=16 callers=0 calls=0
*/
void sub_b48dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48dd0ULL || rel >= 0xb48de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48de0 size=16 callers=0 calls=0
*/
void sub_b48de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48de0ULL || rel >= 0xb48df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48df0 size=16 callers=0 calls=0
*/
void sub_b48df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48df0ULL || rel >= 0xb48e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48e00 size=16 callers=0 calls=0
*/
void sub_b48e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48e00ULL || rel >= 0xb48e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48e10 size=16 callers=0 calls=0
*/
void sub_b48e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48e10ULL || rel >= 0xb48e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48e20 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b48e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48e20ULL || rel >= 0xb48e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48e60 size=32 callers=0 calls=0
*/
void sub_b48e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48e60ULL || rel >= 0xb48e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48e80 size=16 callers=0 calls=0
*/
void sub_b48e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48e80ULL || rel >= 0xb48e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48e90 size=16 callers=0 calls=0
*/
void sub_b48e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48e90ULL || rel >= 0xb48ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48ea0 size=16 callers=0 calls=0
*/
void sub_b48ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48ea0ULL || rel >= 0xb48eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48eb0 size=16 callers=0 calls=0
*/
void sub_b48eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48eb0ULL || rel >= 0xb48ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48ec0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b48ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48ec0ULL || rel >= 0xb48f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48f00 size=32 callers=0 calls=0
*/
void sub_b48f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48f00ULL || rel >= 0xb48f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48f20 size=16 callers=0 calls=0
*/
void sub_b48f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48f20ULL || rel >= 0xb48f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48f30 size=16 callers=0 calls=0
*/
void sub_b48f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48f30ULL || rel >= 0xb48f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48f40 size=32 callers=0 calls=0
*/
void sub_b48f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48f40ULL || rel >= 0xb48f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48f60 size=16 callers=0 calls=0
*/
void sub_b48f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48f60ULL || rel >= 0xb48f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48f70 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b48f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48f70ULL || rel >= 0xb48fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48fb0 size=32 callers=0 calls=0
*/
void sub_b48fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48fb0ULL || rel >= 0xb48fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48fd0 size=16 callers=0 calls=0
*/
void sub_b48fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48fd0ULL || rel >= 0xb48fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48fe0 size=16 callers=0 calls=0
*/
void sub_b48fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48fe0ULL || rel >= 0xb48ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b48ff0 size=16 callers=0 calls=0
*/
void sub_b48ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb48ff0ULL || rel >= 0xb49000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49000 size=16 callers=0 calls=0
*/
void sub_b49000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49000ULL || rel >= 0xb49010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49010 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_b49010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49010ULL || rel >= 0xb49050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49050 size=32 callers=0 calls=0
*/
void sub_b49050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49050ULL || rel >= 0xb49070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49070 size=16 callers=0 calls=0
*/
void sub_b49070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49070ULL || rel >= 0xb49080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49080 size=16 callers=0 calls=0
*/
void sub_b49080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49080ULL || rel >= 0xb49090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49090 size=96 callers=0 calls=1
   calls: sub_ee5c70
*/
void sub_b49090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49090ULL || rel >= 0xb490f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b490f0 size=240 callers=6 calls=1
   calls: sub_b46170
*/
void sub_b490f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb490f0ULL || rel >= 0xb491e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b491e0 size=80 callers=3 calls=1
   calls: sub_b49880
*/
void sub_b491e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb491e0ULL || rel >= 0xb49230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49230 size=208 callers=1 calls=0
*/
void sub_b49230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49230ULL || rel >= 0xb49300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49300 size=208 callers=0 calls=0
*/
void sub_b49300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49300ULL || rel >= 0xb493d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b493d0 size=80 callers=0 calls=1
   calls: sub_b49d80
*/
void sub_b493d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb493d0ULL || rel >= 0xb49420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49420 size=128 callers=0 calls=3
   calls: sub_b498b0, sub_b4a240, sub_b4a450
*/
void sub_b49420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49420ULL || rel >= 0xb494a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b494a0 size=384 callers=2 calls=2
   calls: sub_b498e0, sub_b49910
*/
void sub_b494a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb494a0ULL || rel >= 0xb49620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49620 size=96 callers=0 calls=1
   calls: sub_b4a380
*/
void sub_b49620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49620ULL || rel >= 0xb49680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49680 size=256 callers=2 calls=1
   calls: sub_b4a390
*/
void sub_b49680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49680ULL || rel >= 0xb49780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49780 size=256 callers=2 calls=1
   calls: sub_b4a3f0
*/
void sub_b49780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49780ULL || rel >= 0xb49880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49880 size=32 callers=1 calls=0
*/
void sub_b49880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49880ULL || rel >= 0xb498a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b498a0 size=16 callers=0 calls=0
*/
void sub_b498a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb498a0ULL || rel >= 0xb498b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b498b0 size=16 callers=1 calls=0
*/
void sub_b498b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb498b0ULL || rel >= 0xb498c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b498c0 size=16 callers=0 calls=0
*/
void sub_b498c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb498c0ULL || rel >= 0xb498d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b498d0 size=16 callers=0 calls=0
*/
void sub_b498d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb498d0ULL || rel >= 0xb498e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b498e0 size=48 callers=1 calls=1
   calls: sub_599d40
*/
void sub_b498e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb498e0ULL || rel >= 0xb49910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49910 size=128 callers=1 calls=2
   calls: sub_599d40, sub_b49990
*/
void sub_b49910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49910ULL || rel >= 0xb49990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49990 size=544 callers=1 calls=0
*/
void sub_b49990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49990ULL || rel >= 0xb49bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49bb0 size=96 callers=0 calls=0
*/
void sub_b49bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49bb0ULL || rel >= 0xb49c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49c10 size=256 callers=1 calls=0
*/
void sub_b49c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49c10ULL || rel >= 0xb49d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49d10 size=112 callers=0 calls=1
   calls: sub_b49c10
*/
void sub_b49d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49d10ULL || rel >= 0xb49d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49d80 size=448 callers=2 calls=7
   calls: sub_59a250, sub_59a930, sub_5b9220, sub_b49f40, sub_b4a070, sub_b4a260, sub_b4a460
*/
void sub_b49d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49d80ULL || rel >= 0xb49f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b49f40 size=304 callers=1 calls=0
*/
void sub_b49f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb49f40ULL || rel >= 0xb4a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4a070 size=464 callers=2 calls=3
   calls: sub_b4a5e0, sub_ed0960, sub_ed0a80
*/
void sub_b4a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4a070ULL || rel >= 0xb4a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4a240 size=32 callers=2 calls=0
*/
void sub_b4a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4a240ULL || rel >= 0xb4a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4a260 size=288 callers=2 calls=5
   calls: sub_59a250, sub_59a500, sub_59a930, sub_59b2e0, sub_5b9150
*/
void sub_b4a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4a260ULL || rel >= 0xb4a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4a380 size=16 callers=2 calls=0
*/
void sub_b4a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4a380ULL || rel >= 0xb4a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4a390 size=96 callers=3 calls=0
*/
void sub_b4a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4a390ULL || rel >= 0xb4a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4a3f0 size=96 callers=3 calls=0
*/
void sub_b4a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4a3f0ULL || rel >= 0xb4a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4a450 size=16 callers=3 calls=0
*/
void sub_b4a450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4a450ULL || rel >= 0xb4a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4a460 size=384 callers=2 calls=8
   calls: sub_59a250, sub_59b250, sub_5b9220, sub_b3abe0, sub_b4c080, sub_b571c0, sub_b58180, sub_b58260
*/
void sub_b4a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4a460ULL || rel >= 0xb4a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4a5e0 size=304 callers=85 calls=0
*/
void sub_b4a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4a5e0ULL || rel >= 0xb4a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4a710 size=112 callers=5 calls=0
*/
void sub_b4a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4a710ULL || rel >= 0xb4a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4a780 size=16 callers=2 calls=0
*/
void sub_b4a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4a780ULL || rel >= 0xb4a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4a790 size=16 callers=0 calls=0
*/
void sub_b4a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4a790ULL || rel >= 0xb4a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4a7a0 size=448 callers=1 calls=4
   calls: sub_b4a960, sub_b56000, sub_b56460, sub_b58900
*/
void sub_b4a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4a7a0ULL || rel >= 0xb4a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4a960 size=4032 callers=1 calls=14
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_7c2da0, sub_b4c130, sub_b4c250, sub_b4c370, sub_b4c490, sub_b4c5b0, sub_b4c690, sub_b4c770, sub_b4c830
   ... +2 more
*/
void sub_b4a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4a960ULL || rel >= 0xb4b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4b920 size=128 callers=0 calls=2
   calls: sub_b56460, sub_b59e20
*/
void sub_b4b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4b920ULL || rel >= 0xb4b9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4b9a0 size=1328 callers=1 calls=29
   calls: sub_7c2da0, sub_b4cae0, sub_b4cf40, sub_b4d330, sub_b4d680, sub_b4dd30, sub_b4e3c0, sub_b4e750, sub_b4ea40, sub_b4edd0, sub_b4f0e0, sub_b4f790
   ... +17 more
*/
void sub_b4b9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4b9a0ULL || rel >= 0xb4bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4bed0 size=128 callers=0 calls=2
   calls: sub_b56460, sub_b59e20
*/
void sub_b4bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4bed0ULL || rel >= 0xb4bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4bf50 size=128 callers=0 calls=2
   calls: sub_b56460, sub_b59e20
*/
void sub_b4bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4bf50ULL || rel >= 0xb4bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4bfd0 size=128 callers=0 calls=2
   calls: sub_b56460, sub_b59e20
*/
void sub_b4bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4bfd0ULL || rel >= 0xb4c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c050 size=16 callers=1 calls=0
*/
void sub_b4c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c050ULL || rel >= 0xb4c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c060 size=16 callers=142 calls=0
*/
void sub_b4c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c060ULL || rel >= 0xb4c070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c070 size=16 callers=22 calls=0
*/
void sub_b4c070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c070ULL || rel >= 0xb4c080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c080 size=16 callers=26 calls=0
*/
void sub_b4c080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c080ULL || rel >= 0xb4c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c090 size=160 callers=2 calls=4
   calls: sub_b3abe0, sub_b56650, sub_b58b50, sub_b5ec00
*/
void sub_b4c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c090ULL || rel >= 0xb4c130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c130 size=288 callers=1 calls=2
   calls: sub_7c2da0, sub_b4d580
*/
void sub_b4c130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c130ULL || rel >= 0xb4c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c250 size=288 callers=1 calls=2
   calls: sub_7c2da0, sub_b4dc30
*/
void sub_b4c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c250ULL || rel >= 0xb4c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c370 size=288 callers=1 calls=2
   calls: sub_7c2da0, sub_b4efe0
*/
void sub_b4c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c370ULL || rel >= 0xb4c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c490 size=288 callers=1 calls=2
   calls: sub_7c2da0, sub_b4f690
*/
void sub_b4c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c490ULL || rel >= 0xb4c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c5b0 size=224 callers=1 calls=2
   calls: sub_7c2da0, sub_b521a0
*/
void sub_b4c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c5b0ULL || rel >= 0xb4c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c690 size=224 callers=1 calls=2
   calls: sub_7c2da0, sub_b52bd0
*/
void sub_b4c690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c690ULL || rel >= 0xb4c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c770 size=192 callers=1 calls=2
   calls: sub_7c2da0, sub_b53600
*/
void sub_b4c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c770ULL || rel >= 0xb4c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c830 size=224 callers=1 calls=2
   calls: sub_7c2da0, sub_b53f10
*/
void sub_b4c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c830ULL || rel >= 0xb4c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c910 size=224 callers=1 calls=2
   calls: sub_7c2da0, sub_b54940
*/
void sub_b4c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c910ULL || rel >= 0xb4c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4c9f0 size=192 callers=1 calls=2
   calls: sub_7c2da0, sub_b55370
*/
void sub_b4c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c9f0ULL || rel >= 0xb4cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4cab0 size=48 callers=0 calls=1
   calls: sub_b4b9a0
*/
void sub_b4cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4cab0ULL || rel >= 0xb4cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4cae0 size=480 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_7c2da0
*/
void sub_b4cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4cae0ULL || rel >= 0xb4ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4ccc0 size=48 callers=0 calls=1
   calls: sub_b4cae0
*/
void sub_b4ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4ccc0ULL || rel >= 0xb4ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4ccf0 size=128 callers=0 calls=1
   calls: sub_7c2d90
*/
void sub_b4ccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4ccf0ULL || rel >= 0xb4cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4cd70 size=144 callers=0 calls=1
   calls: sub_7c2da0
*/
void sub_b4cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4cd70ULL || rel >= 0xb4ce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4ce00 size=16 callers=0 calls=0
*/
void sub_b4ce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4ce00ULL || rel >= 0xb4ce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4ce10 size=16 callers=0 calls=0
*/
void sub_b4ce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4ce10ULL || rel >= 0xb4ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4ce20 size=16 callers=0 calls=0
*/
void sub_b4ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4ce20ULL || rel >= 0xb4ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4ce30 size=16 callers=0 calls=0
*/
void sub_b4ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4ce30ULL || rel >= 0xb4ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4ce40 size=32 callers=0 calls=0
*/
void sub_b4ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4ce40ULL || rel >= 0xb4ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4ce60 size=64 callers=0 calls=1
   calls: sub_b4cf40
*/
void sub_b4ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4ce60ULL || rel >= 0xb4cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4cea0 size=64 callers=0 calls=2
   calls: sub_b4cf40, sub_b4d330
*/
void sub_b4cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4cea0ULL || rel >= 0xb4cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4cee0 size=96 callers=0 calls=1
   calls: sub_b4d450
*/
void sub_b4cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4cee0ULL || rel >= 0xb4cf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4cf40 size=752 callers=4 calls=1
   calls: sub_7c2da0
*/
void sub_b4cf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4cf40ULL || rel >= 0xb4d230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4d230 size=176 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b4d230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4d230ULL || rel >= 0xb4d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4d2e0 size=16 callers=0 calls=0
*/
void sub_b4d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4d2e0ULL || rel >= 0xb4d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4d2f0 size=16 callers=0 calls=0
*/
void sub_b4d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4d2f0ULL || rel >= 0xb4d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4d300 size=16 callers=0 calls=0
*/
void sub_b4d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4d300ULL || rel >= 0xb4d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4d310 size=32 callers=0 calls=0
*/
void sub_b4d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4d310ULL || rel >= 0xb4d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4d330 size=288 callers=2 calls=0
*/
void sub_b4d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4d330ULL || rel >= 0xb4d450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4d450 size=304 callers=2 calls=1
   calls: sub_7c2d90
*/
void sub_b4d450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4d450ULL || rel >= 0xb4d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4d580 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b4d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4d580ULL || rel >= 0xb4d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4d680 size=512 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_7c2da0
*/
void sub_b4d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4d680ULL || rel >= 0xb4d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4d880 size=48 callers=0 calls=1
   calls: sub_b4d680
*/
void sub_b4d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4d880ULL || rel >= 0xb4d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4d8b0 size=160 callers=0 calls=1
   calls: sub_7c2d90
*/
void sub_b4d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4d8b0ULL || rel >= 0xb4d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4d950 size=176 callers=0 calls=1
   calls: sub_7c2da0
*/
void sub_b4d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4d950ULL || rel >= 0xb4da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4da00 size=480 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b4da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4da00ULL || rel >= 0xb4dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4dbe0 size=16 callers=0 calls=0
*/
void sub_b4dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4dbe0ULL || rel >= 0xb4dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4dbf0 size=16 callers=0 calls=0
*/
void sub_b4dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4dbf0ULL || rel >= 0xb4dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4dc00 size=16 callers=0 calls=0
*/
void sub_b4dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4dc00ULL || rel >= 0xb4dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4dc10 size=32 callers=0 calls=0
*/
void sub_b4dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4dc10ULL || rel >= 0xb4dc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4dc30 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b4dc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4dc30ULL || rel >= 0xb4dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4dd30 size=512 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_7c2da0
*/
void sub_b4dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4dd30ULL || rel >= 0xb4df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4df30 size=48 callers=0 calls=1
   calls: sub_b4dd30
*/
void sub_b4df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4df30ULL || rel >= 0xb4df60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4df60 size=160 callers=0 calls=1
   calls: sub_7c2d90
*/
void sub_b4df60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4df60ULL || rel >= 0xb4e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e000 size=176 callers=0 calls=1
   calls: sub_7c2da0
*/
void sub_b4e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e000ULL || rel >= 0xb4e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e0b0 size=480 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b4e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e0b0ULL || rel >= 0xb4e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e290 size=16 callers=0 calls=0
*/
void sub_b4e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e290ULL || rel >= 0xb4e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e2a0 size=16 callers=0 calls=0
*/
void sub_b4e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e2a0ULL || rel >= 0xb4e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e2b0 size=16 callers=0 calls=0
*/
void sub_b4e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e2b0ULL || rel >= 0xb4e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e2c0 size=32 callers=0 calls=0
*/
void sub_b4e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e2c0ULL || rel >= 0xb4e2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e2e0 size=64 callers=0 calls=1
   calls: sub_b4e3c0
*/
void sub_b4e2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e2e0ULL || rel >= 0xb4e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e320 size=64 callers=0 calls=2
   calls: sub_b4e3c0, sub_b4e750
*/
void sub_b4e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e320ULL || rel >= 0xb4e360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e360 size=96 callers=0 calls=1
   calls: sub_b4e850
*/
void sub_b4e360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e360ULL || rel >= 0xb4e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e3c0 size=672 callers=4 calls=1
   calls: sub_7c2da0
*/
void sub_b4e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e3c0ULL || rel >= 0xb4e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e660 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b4e660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e660ULL || rel >= 0xb4e700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

