/* main functions 00a815a0..00a9fc60 (80 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00a815a0 size=16 callers=0 calls=0
*/
void sub_a815a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa815a0ULL || rel >= 0xa815b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a815b0 size=16 callers=0 calls=0
*/
void sub_a815b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa815b0ULL || rel >= 0xa815c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a815c0 size=304 callers=0 calls=0
*/
void sub_a815c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa815c0ULL || rel >= 0xa816f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a816f0 size=128 callers=0 calls=0
*/
void sub_a816f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa816f0ULL || rel >= 0xa81770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81770 size=576 callers=0 calls=8
   calls: strinput, sub_1353b30, sub_67be60, sub_a7bb80, sub_a94040, sub_aa5350, sub_c39c40, sub_d0c0
   ref: input_teamname
   ref: View_Top
*/
void input_teamname(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81770ULL || rel >= 0xa819b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a819b0 size=592 callers=0 calls=10
   calls: sub_13530f0, sub_67bdb0, sub_67bdc0, sub_a77150, sub_a7a700, sub_a94040, sub_a9b370, sub_aa5350, sub_e76980, sub_e77d00
*/
void sub_a819b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa819b0ULL || rel >= 0xa81c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81c00 size=48 callers=0 calls=2
   calls: sub_e769b0, sub_e76a20
*/
void sub_a81c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81c00ULL || rel >= 0xa81c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81c30 size=16 callers=0 calls=0
*/
void sub_a81c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81c30ULL || rel >= 0xa81c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81c40 size=16 callers=0 calls=0
*/
void sub_a81c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81c40ULL || rel >= 0xa81c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81c50 size=16 callers=0 calls=0
*/
void sub_a81c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81c50ULL || rel >= 0xa81c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81c60 size=16 callers=0 calls=0
*/
void sub_a81c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81c60ULL || rel >= 0xa81c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81c70 size=16 callers=0 calls=0
*/
void sub_a81c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81c70ULL || rel >= 0xa81c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81c80 size=16 callers=0 calls=0
*/
void sub_a81c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81c80ULL || rel >= 0xa81c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81c90 size=16 callers=0 calls=0
*/
void sub_a81c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81c90ULL || rel >= 0xa81ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81ca0 size=16 callers=0 calls=0
*/
void sub_a81ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81ca0ULL || rel >= 0xa81cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81cb0 size=304 callers=0 calls=0
*/
void sub_a81cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81cb0ULL || rel >= 0xa81de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81de0 size=128 callers=0 calls=0
*/
void sub_a81de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81de0ULL || rel >= 0xa81e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a81e60 size=576 callers=0 calls=8
   calls: strinput, sub_1353600, sub_1354890, sub_67be60, sub_a7bb80, sub_aa5350, sub_c39c40, sub_d0c0
   ref: input_trayname
   ref: View_Top
*/
void input_trayname(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81e60ULL || rel >= 0xa820a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a820a0 size=592 callers=0 calls=10
   calls: sub_13530b0, sub_1354890, sub_67bdb0, sub_67bdc0, sub_a77150, sub_a7a700, sub_a9aba0, sub_aa5350, sub_e76980, sub_e77960
*/
void sub_a820a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa820a0ULL || rel >= 0xa822f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a822f0 size=48 callers=0 calls=2
   calls: sub_e769b0, sub_e76a20
*/
void sub_a822f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa822f0ULL || rel >= 0xa82320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82320 size=16 callers=0 calls=0
*/
void sub_a82320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82320ULL || rel >= 0xa82330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82330 size=16 callers=0 calls=0
*/
void sub_a82330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82330ULL || rel >= 0xa82340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82340 size=16 callers=0 calls=0
*/
void sub_a82340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82340ULL || rel >= 0xa82350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82350 size=16 callers=0 calls=0
*/
void sub_a82350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82350ULL || rel >= 0xa82360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82360 size=16 callers=0 calls=0
*/
void sub_a82360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82360ULL || rel >= 0xa82370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82370 size=16 callers=0 calls=0
*/
void sub_a82370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82370ULL || rel >= 0xa82380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82380 size=16 callers=0 calls=0
*/
void sub_a82380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82380ULL || rel >= 0xa82390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82390 size=16 callers=0 calls=0
*/
void sub_a82390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82390ULL || rel >= 0xa823a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a823a0 size=304 callers=0 calls=0
*/
void sub_a823a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa823a0ULL || rel >= 0xa824d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a824d0 size=128 callers=0 calls=0
*/
void sub_a824d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa824d0ULL || rel >= 0xa82550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82550 size=352 callers=0 calls=3
   calls: sub_a7bb80, sub_c39c40, sub_d0c0
   ref: View_Top
   ref: pokeicon_get
*/
void pokeicon_get(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82550ULL || rel >= 0xa826b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a826b0 size=144 callers=0 calls=3
   calls: poke_panel_57, sub_a77150, sub_a7a700
*/
void sub_a826b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa826b0ULL || rel >= 0xa82740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82740 size=16 callers=0 calls=0
*/
void sub_a82740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82740ULL || rel >= 0xa82750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82750 size=16 callers=0 calls=0
*/
void sub_a82750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82750ULL || rel >= 0xa82760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82760 size=16 callers=0 calls=0
*/
void sub_a82760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82760ULL || rel >= 0xa82770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82770 size=16 callers=0 calls=0
*/
void sub_a82770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82770ULL || rel >= 0xa82780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82780 size=16 callers=0 calls=0
*/
void sub_a82780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82780ULL || rel >= 0xa82790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82790 size=16 callers=0 calls=0
*/
void sub_a82790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82790ULL || rel >= 0xa827a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a827a0 size=16 callers=0 calls=0
*/
void sub_a827a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa827a0ULL || rel >= 0xa827b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a827b0 size=16 callers=0 calls=0
*/
void sub_a827b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa827b0ULL || rel >= 0xa827c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a827c0 size=16 callers=0 calls=0
*/
void sub_a827c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa827c0ULL || rel >= 0xa827d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a827d0 size=304 callers=0 calls=0
*/
void sub_a827d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa827d0ULL || rel >= 0xa82900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82900 size=128 callers=0 calls=0
*/
void sub_a82900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82900ULL || rel >= 0xa82980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82980 size=352 callers=0 calls=3
   calls: sub_a7bb80, sub_c39c40, sub_d0c0
   ref: View_Top
   ref: pokeicon_release
*/
void pokeicon_release(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82980ULL || rel >= 0xa82ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82ae0 size=304 callers=0 calls=8
   calls: poke_panel_38, poke_panel_59, poke_panel_65, sub_a77150, sub_a77610, sub_a7a700, sub_aa3130, sub_aa3140
*/
void sub_a82ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82ae0ULL || rel >= 0xa82c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82c10 size=16 callers=0 calls=0
*/
void sub_a82c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82c10ULL || rel >= 0xa82c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82c20 size=16 callers=0 calls=0
*/
void sub_a82c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82c20ULL || rel >= 0xa82c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82c30 size=16 callers=0 calls=0
*/
void sub_a82c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82c30ULL || rel >= 0xa82c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82c40 size=16 callers=0 calls=0
*/
void sub_a82c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82c40ULL || rel >= 0xa82c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82c50 size=16 callers=0 calls=0
*/
void sub_a82c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82c50ULL || rel >= 0xa82c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82c60 size=16 callers=0 calls=0
*/
void sub_a82c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82c60ULL || rel >= 0xa82c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82c70 size=16 callers=0 calls=0
*/
void sub_a82c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82c70ULL || rel >= 0xa82c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82c80 size=16 callers=0 calls=0
*/
void sub_a82c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82c80ULL || rel >= 0xa82c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82c90 size=16 callers=0 calls=0
*/
void sub_a82c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82c90ULL || rel >= 0xa82ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82ca0 size=304 callers=0 calls=0
*/
void sub_a82ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82ca0ULL || rel >= 0xa82dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82dd0 size=128 callers=0 calls=0
*/
void sub_a82dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82dd0ULL || rel >= 0xa82e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82e50 size=368 callers=0 calls=4
   calls: sub_a7bb80, sub_c39c40, sub_d0c0, sub_e807f0
   ref: View_Top
   ref: marking
*/
void View_Top_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82e50ULL || rel >= 0xa82fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a82fc0 size=304 callers=0 calls=6
   calls: marking_panel_3, marking_panel_4, poke_panel_52, sub_a77150, sub_a7a700, sub_aa6650
*/
void sub_a82fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82fc0ULL || rel >= 0xa830f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a830f0 size=16 callers=0 calls=0
*/
void sub_a830f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa830f0ULL || rel >= 0xa83100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a83100 size=16 callers=0 calls=0
*/
void sub_a83100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa83100ULL || rel >= 0xa83110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a83110 size=16 callers=0 calls=0
*/
void sub_a83110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa83110ULL || rel >= 0xa83120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a83120 size=16 callers=0 calls=0
*/
void sub_a83120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa83120ULL || rel >= 0xa83130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a83130 size=16 callers=0 calls=0
*/
void sub_a83130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa83130ULL || rel >= 0xa83140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a83140 size=16 callers=0 calls=0
*/
void sub_a83140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa83140ULL || rel >= 0xa83150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a83150 size=16 callers=0 calls=0
*/
void sub_a83150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa83150ULL || rel >= 0xa83160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a83160 size=16 callers=0 calls=0
*/
void sub_a83160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa83160ULL || rel >= 0xa83170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a83170 size=16 callers=0 calls=0
*/
void sub_a83170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa83170ULL || rel >= 0xa83180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a83180 size=304 callers=0 calls=0
*/
void sub_a83180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa83180ULL || rel >= 0xa832b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a832b0 size=128 callers=0 calls=0
*/
void sub_a832b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa832b0ULL || rel >= 0xa83330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a83330 size=1184 callers=0 calls=15
   calls: poke_panel_42, sub_5cfaf0, sub_79b990, sub_a7bb80, sub_aa43f0, sub_aa4420, sub_aa4660, sub_aa4670, sub_aa5350, sub_aab1a0, sub_c39c40, sub_d0c0
   ... +3 more
   ref: View_Top
*/
void View_Top_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa83330ULL || rel >= 0xa837d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a837d0 size=4400 callers=0 calls=50
   calls: button_box__02d__02d, poke_panel_17, poke_panel_20, poke_panel_22, poke_panel_23, poke_panel_33, poke_panel_38, poke_panel_39, poke_panel_40, poke_panel_41, poke_panel_43, poke_panel_44
   ... +38 more
*/
void sub_a837d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa837d0ULL || rel >= 0xa84900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a84900 size=224 callers=4 calls=6
   calls: poke_panel_63, sub_a77150, sub_a77160, sub_a7a700, sub_a94040, sub_a96be0
*/
void sub_a84900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa84900ULL || rel >= 0xa849e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a849e0 size=16 callers=0 calls=0
*/
void sub_a849e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa849e0ULL || rel >= 0xa849f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a849f0 size=16 callers=0 calls=0
*/
void sub_a849f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa849f0ULL || rel >= 0xa84a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a84a00 size=16 callers=0 calls=0
*/
void sub_a84a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa84a00ULL || rel >= 0xa84a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a84a10 size=16 callers=0 calls=0
*/
void sub_a84a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa84a10ULL || rel >= 0xa84a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a84a20 size=16 callers=0 calls=0
*/
void sub_a84a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa84a20ULL || rel >= 0xa84a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a84a30 size=16 callers=0 calls=0
*/
void sub_a84a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa84a30ULL || rel >= 0xa84a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a84a40 size=16 callers=0 calls=0
*/
void sub_a84a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa84a40ULL || rel >= 0xa84a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a84a50 size=16 callers=0 calls=0
*/
void sub_a84a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa84a50ULL || rel >= 0xa84a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a84a60 size=16 callers=0 calls=0
*/
void sub_a84a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa84a60ULL || rel >= 0xa84a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a84a70 size=304 callers=0 calls=0
*/
void sub_a84a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa84a70ULL || rel >= 0xa84ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a84ba0 size=128 callers=0 calls=0
*/
void sub_a84ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa84ba0ULL || rel >= 0xa84c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a84c20 size=736 callers=0 calls=11
   calls: boxtray_cursor__02d, sub_5cfaf0, sub_79b990, sub_a7bb80, sub_a94960, sub_aa5350, sub_c39c40, sub_d0c0, sub_e806b0, sub_e807f0, sub_eb8930
   ref: message
   ref: View_Top
*/
void View_Top_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa84c20ULL || rel >= 0xa84f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a84f00 size=416 callers=0 calls=5
   calls: sub_a77150, sub_a77160, sub_a7a700, sub_aa5440, sub_eb8e80
*/
void sub_a84f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa84f00ULL || rel >= 0xa850a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a850a0 size=16 callers=0 calls=0
*/
void sub_a850a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa850a0ULL || rel >= 0xa850b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a850b0 size=16 callers=0 calls=0
*/
void sub_a850b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa850b0ULL || rel >= 0xa850c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a850c0 size=16 callers=0 calls=0
*/
void sub_a850c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa850c0ULL || rel >= 0xa850d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a850d0 size=16 callers=0 calls=0
*/
void sub_a850d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa850d0ULL || rel >= 0xa850e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a850e0 size=16 callers=0 calls=0
*/
void sub_a850e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa850e0ULL || rel >= 0xa850f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a850f0 size=16 callers=0 calls=0
*/
void sub_a850f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa850f0ULL || rel >= 0xa85100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a85100 size=16 callers=0 calls=0
*/
void sub_a85100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa85100ULL || rel >= 0xa85110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a85110 size=16 callers=0 calls=0
*/
void sub_a85110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa85110ULL || rel >= 0xa85120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a85120 size=16 callers=0 calls=0
*/
void sub_a85120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa85120ULL || rel >= 0xa85130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a85130 size=304 callers=0 calls=0
*/
void sub_a85130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa85130ULL || rel >= 0xa85260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a85260 size=128 callers=0 calls=0
*/
void sub_a85260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa85260ULL || rel >= 0xa852e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a852e0 size=1168 callers=0 calls=14
   calls: sub_5cfaf0, sub_790f90, sub_79b990, sub_a77610, sub_a77790, sub_a7a700, sub_a7bb80, sub_a86610, sub_a8b7c0, sub_a8b810, sub_a8b820, sub_c39c40
   ... +2 more
   ref: View_Model
   ref: npc_trade
   ref: View_Top
   ref: AttentionView
*/
void View_Model_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa852e0ULL || rel >= 0xa85770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a85770 size=1840 callers=0 calls=33
   calls: poke_panel_65, sub_1048a80, sub_1048de0, sub_a77150, sub_a77160, sub_a77460, sub_a77470, sub_a774a0, sub_a774c0, sub_a775e0, sub_a77610, sub_a77780
   ... +21 more
*/
void sub_a85770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa85770ULL || rel >= 0xa85ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a85ea0 size=192 callers=4 calls=6
   calls: poke_panel_38, sub_aa4660, sub_aa5350, sub_e806b0, sub_e807f0, sub_eb8930
*/
void sub_a85ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa85ea0ULL || rel >= 0xa85f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a85f60 size=688 callers=1 calls=11
   calls: poke_panel_65, sub_a77160, sub_a7a700, sub_aa43f0, sub_aa4420, sub_aa4660, sub_aa5350, sub_aaadf0, sub_e806b0, sub_e807f0, sub_eb7e40
*/
void sub_a85f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa85f60ULL || rel >= 0xa86210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a86210 size=256 callers=2 calls=7
   calls: poke_panel_63, sub_a77150, sub_a77160, sub_a7a700, sub_a86310, sub_a94040, sub_a96be0
*/
void sub_a86210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa86210ULL || rel >= 0xa86310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a86310 size=160 callers=2 calls=5
   calls: sub_a775f0, sub_a77790, sub_a7a700, sub_a8b790, sub_aab420
*/
void sub_a86310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa86310ULL || rel >= 0xa863b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a863b0 size=160 callers=1 calls=6
   calls: poke_panel_38, sub_aa5350, sub_e80580, sub_e806b0, sub_e807f0, sub_eb5fb0
*/
void sub_a863b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa863b0ULL || rel >= 0xa86450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a86450 size=16 callers=0 calls=0
*/
void sub_a86450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa86450ULL || rel >= 0xa86460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a86460 size=16 callers=0 calls=0
*/
void sub_a86460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa86460ULL || rel >= 0xa86470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a86470 size=16 callers=0 calls=0
*/
void sub_a86470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa86470ULL || rel >= 0xa86480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a86480 size=16 callers=0 calls=0
*/
void sub_a86480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa86480ULL || rel >= 0xa86490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a86490 size=16 callers=0 calls=0
*/
void sub_a86490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa86490ULL || rel >= 0xa864a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a864a0 size=16 callers=0 calls=0
*/
void sub_a864a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa864a0ULL || rel >= 0xa864b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a864b0 size=16 callers=0 calls=0
*/
void sub_a864b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa864b0ULL || rel >= 0xa864c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a864c0 size=16 callers=0 calls=0
*/
void sub_a864c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa864c0ULL || rel >= 0xa864d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a864d0 size=16 callers=0 calls=0
*/
void sub_a864d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa864d0ULL || rel >= 0xa864e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a864e0 size=304 callers=0 calls=0
*/
void sub_a864e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa864e0ULL || rel >= 0xa86610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a86610 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_a86610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa86610ULL || rel >= 0xa86760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a86760 size=128 callers=0 calls=0
*/
void sub_a86760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa86760ULL || rel >= 0xa867e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a867e0 size=752 callers=0 calls=8
   calls: sub_1052c20, sub_1345e70, sub_1345eb0, sub_5cfaf0, sub_79b990, sub_a7bb80, sub_c39c40, sub_d0c0
   ref: npc_trade
   ref: View_Top
*/
void npc_trade(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa867e0ULL || rel >= 0xa86ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a86ad0 size=800 callers=0 calls=17
   calls: sub_1052c20, sub_105c390, sub_1061a40, sub_1345d20, sub_13a10f0, sub_13a1100, sub_13a1150, sub_13a11f0, sub_a77150, sub_a7a700, sub_a86df0, sub_a87030
   ... +5 more
*/
void sub_a86ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa86ad0ULL || rel >= 0xa86df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a86df0 size=576 callers=1 calls=8
   calls: sub_aa43f0, sub_aa4420, sub_aa4660, sub_aa5350, sub_aaaee0, sub_e806b0, sub_e807f0, sub_eb7e40
*/
void sub_a86df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa86df0ULL || rel >= 0xa87030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87030 size=176 callers=1 calls=5
   calls: poke_panel_38, sub_aa5350, sub_e806b0, sub_e807f0, sub_eb8930
*/
void sub_a87030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87030ULL || rel >= 0xa870e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a870e0 size=16 callers=0 calls=0
*/
void sub_a870e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa870e0ULL || rel >= 0xa870f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a870f0 size=112 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_a870f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa870f0ULL || rel >= 0xa87160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87160 size=112 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_a87160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87160ULL || rel >= 0xa871d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a871d0 size=16 callers=0 calls=0
*/
void sub_a871d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa871d0ULL || rel >= 0xa871e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a871e0 size=112 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_a871e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa871e0ULL || rel >= 0xa87250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87250 size=112 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_a87250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87250ULL || rel >= 0xa872c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a872c0 size=16 callers=0 calls=0
*/
void sub_a872c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa872c0ULL || rel >= 0xa872d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a872d0 size=16 callers=0 calls=0
*/
void sub_a872d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa872d0ULL || rel >= 0xa872e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a872e0 size=112 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_a872e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa872e0ULL || rel >= 0xa87350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87350 size=112 callers=0 calls=1
   calls: sub_13a1100
*/
void sub_a87350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87350ULL || rel >= 0xa873c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a873c0 size=304 callers=0 calls=0
*/
void sub_a873c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa873c0ULL || rel >= 0xa874f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a874f0 size=128 callers=0 calls=0
*/
void sub_a874f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa874f0ULL || rel >= 0xa87570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87570 size=352 callers=0 calls=3
   calls: sub_a7bb80, sub_c39c40, sub_d0c0
   ref: View_Top
   ref: pokeicon_get
*/
void pokeicon_get_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87570ULL || rel >= 0xa876d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a876d0 size=144 callers=0 calls=3
   calls: poke_panel_5, sub_a77150, sub_a7a700
*/
void sub_a876d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa876d0ULL || rel >= 0xa87760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87760 size=16 callers=0 calls=0
*/
void sub_a87760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87760ULL || rel >= 0xa87770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87770 size=16 callers=0 calls=0
*/
void sub_a87770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87770ULL || rel >= 0xa87780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87780 size=16 callers=0 calls=0
*/
void sub_a87780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87780ULL || rel >= 0xa87790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87790 size=16 callers=0 calls=0
*/
void sub_a87790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87790ULL || rel >= 0xa877a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a877a0 size=16 callers=0 calls=0
*/
void sub_a877a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa877a0ULL || rel >= 0xa877b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a877b0 size=16 callers=0 calls=0
*/
void sub_a877b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa877b0ULL || rel >= 0xa877c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a877c0 size=16 callers=0 calls=0
*/
void sub_a877c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa877c0ULL || rel >= 0xa877d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a877d0 size=16 callers=0 calls=0
*/
void sub_a877d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa877d0ULL || rel >= 0xa877e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a877e0 size=16 callers=0 calls=0
*/
void sub_a877e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa877e0ULL || rel >= 0xa877f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a877f0 size=304 callers=0 calls=0
*/
void sub_a877f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa877f0ULL || rel >= 0xa87920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87920 size=128 callers=0 calls=0
*/
void sub_a87920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87920ULL || rel >= 0xa879a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a879a0 size=352 callers=0 calls=3
   calls: sub_a7bb80, sub_c39c40, sub_d0c0
   ref: View_Top
   ref: pokeicon_release
*/
void pokeicon_release_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa879a0ULL || rel >= 0xa87b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87b00 size=352 callers=0 calls=8
   calls: poke_panel_38, poke_panel_65, poke_panel_7, sub_a77150, sub_a77610, sub_a7a700, sub_aa3130, sub_aa3140
*/
void sub_a87b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87b00ULL || rel >= 0xa87c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87c60 size=16 callers=0 calls=0
*/
void sub_a87c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87c60ULL || rel >= 0xa87c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87c70 size=16 callers=0 calls=0
*/
void sub_a87c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87c70ULL || rel >= 0xa87c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87c80 size=16 callers=0 calls=0
*/
void sub_a87c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87c80ULL || rel >= 0xa87c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87c90 size=16 callers=0 calls=0
*/
void sub_a87c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87c90ULL || rel >= 0xa87ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87ca0 size=16 callers=0 calls=0
*/
void sub_a87ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87ca0ULL || rel >= 0xa87cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87cb0 size=16 callers=0 calls=0
*/
void sub_a87cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87cb0ULL || rel >= 0xa87cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87cc0 size=16 callers=0 calls=0
*/
void sub_a87cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87cc0ULL || rel >= 0xa87cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87cd0 size=16 callers=0 calls=0
*/
void sub_a87cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87cd0ULL || rel >= 0xa87ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87ce0 size=16 callers=0 calls=0
*/
void sub_a87ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87ce0ULL || rel >= 0xa87cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87cf0 size=304 callers=0 calls=0
*/
void sub_a87cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87cf0ULL || rel >= 0xa87e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87e20 size=128 callers=0 calls=0
*/
void sub_a87e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87e20ULL || rel >= 0xa87ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a87ea0 size=352 callers=0 calls=3
   calls: sub_a7bb80, sub_c39c40, sub_d0c0
   ref: scroll_box
   ref: View_Top
*/
void scroll_box(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa87ea0ULL || rel >= 0xa88000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88000 size=368 callers=0 calls=7
   calls: anime_box_shift_reset, poke_panel_65, sub_a77150, sub_a77610, sub_a7a700, sub_a9adf0, sub_a9b100
*/
void sub_a88000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88000ULL || rel >= 0xa88170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88170 size=16 callers=0 calls=0
*/
void sub_a88170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88170ULL || rel >= 0xa88180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88180 size=16 callers=0 calls=0
*/
void sub_a88180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88180ULL || rel >= 0xa88190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88190 size=16 callers=0 calls=0
*/
void sub_a88190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88190ULL || rel >= 0xa881a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a881a0 size=16 callers=0 calls=0
*/
void sub_a881a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa881a0ULL || rel >= 0xa881b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a881b0 size=16 callers=0 calls=0
*/
void sub_a881b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa881b0ULL || rel >= 0xa881c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a881c0 size=16 callers=0 calls=0
*/
void sub_a881c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa881c0ULL || rel >= 0xa881d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a881d0 size=16 callers=0 calls=0
*/
void sub_a881d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa881d0ULL || rel >= 0xa881e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a881e0 size=16 callers=0 calls=0
*/
void sub_a881e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa881e0ULL || rel >= 0xa881f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a881f0 size=16 callers=0 calls=0
*/
void sub_a881f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa881f0ULL || rel >= 0xa88200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88200 size=304 callers=0 calls=0
*/
void sub_a88200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88200ULL || rel >= 0xa88330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88330 size=128 callers=0 calls=0
*/
void sub_a88330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88330ULL || rel >= 0xa883b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a883b0 size=352 callers=0 calls=3
   calls: sub_a7bb80, sub_c39c40, sub_d0c0
   ref: View_Top
   ref: scroll_party
*/
void scroll_party(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa883b0ULL || rel >= 0xa88510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88510 size=368 callers=0 calls=7
   calls: anime_team_shift_reset, poke_panel_65, sub_a77150, sub_a77610, sub_a7a700, sub_a9b5f0, sub_a9b9c0
*/
void sub_a88510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88510ULL || rel >= 0xa88680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88680 size=16 callers=0 calls=0
*/
void sub_a88680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88680ULL || rel >= 0xa88690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88690 size=16 callers=0 calls=0
*/
void sub_a88690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88690ULL || rel >= 0xa886a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a886a0 size=16 callers=0 calls=0
*/
void sub_a886a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa886a0ULL || rel >= 0xa886b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a886b0 size=16 callers=0 calls=0
*/
void sub_a886b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa886b0ULL || rel >= 0xa886c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a886c0 size=16 callers=0 calls=0
*/
void sub_a886c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa886c0ULL || rel >= 0xa886d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a886d0 size=16 callers=0 calls=0
*/
void sub_a886d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa886d0ULL || rel >= 0xa886e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a886e0 size=16 callers=0 calls=0
*/
void sub_a886e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa886e0ULL || rel >= 0xa886f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a886f0 size=16 callers=0 calls=0
*/
void sub_a886f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa886f0ULL || rel >= 0xa88700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88700 size=16 callers=0 calls=0
*/
void sub_a88700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88700ULL || rel >= 0xa88710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88710 size=304 callers=0 calls=0
*/
void sub_a88710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88710ULL || rel >= 0xa88840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88840 size=128 callers=0 calls=0
*/
void sub_a88840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88840ULL || rel >= 0xa888c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a888c0 size=576 callers=0 calls=6
   calls: sub_a7bb80, sub_a7bcd0, sub_a8c870, sub_a8c8d0, sub_c39c40, sub_d0c0
   ref: View_Search
   ref: View_Top
   ref: search
*/
void View_Search(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa888c0ULL || rel >= 0xa88b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88b00 size=704 callers=0 calls=11
   calls: anime_search_list_main_2, anime_search_list_sub_3, poke_panel_38, sub_a77150, sub_a77160, sub_a77470, sub_a7a700, sub_a8c590, sub_a8c940, sub_a8c970, sub_a8c980
*/
void sub_a88b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88b00ULL || rel >= 0xa88dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88dc0 size=16 callers=0 calls=0
*/
void sub_a88dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88dc0ULL || rel >= 0xa88dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88dd0 size=16 callers=0 calls=0
*/
void sub_a88dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88dd0ULL || rel >= 0xa88de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88de0 size=16 callers=0 calls=0
*/
void sub_a88de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88de0ULL || rel >= 0xa88df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88df0 size=16 callers=0 calls=0
*/
void sub_a88df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88df0ULL || rel >= 0xa88e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88e00 size=16 callers=0 calls=0
*/
void sub_a88e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88e00ULL || rel >= 0xa88e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88e10 size=16 callers=0 calls=0
*/
void sub_a88e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88e10ULL || rel >= 0xa88e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88e20 size=16 callers=0 calls=0
*/
void sub_a88e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88e20ULL || rel >= 0xa88e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88e30 size=16 callers=0 calls=0
*/
void sub_a88e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88e30ULL || rel >= 0xa88e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88e40 size=16 callers=0 calls=0
*/
void sub_a88e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88e40ULL || rel >= 0xa88e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88e50 size=304 callers=0 calls=0
*/
void sub_a88e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88e50ULL || rel >= 0xa88f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a88f80 size=128 callers=0 calls=0
*/
void sub_a88f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa88f80ULL || rel >= 0xa89000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89000 size=576 callers=0 calls=6
   calls: sub_a7bb80, sub_a7bcd0, sub_a8c940, sub_a96ad0, sub_c39c40, sub_d0c0
   ref: View_Search
   ref: search_end
   ref: View_Top
*/
void View_Search_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89000ULL || rel >= 0xa89240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89240 size=176 callers=0 calls=5
   calls: sub_a77150, sub_a7a700, sub_a8c950, sub_a96af0, sub_aa90a0
*/
void sub_a89240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89240ULL || rel >= 0xa892f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a892f0 size=16 callers=0 calls=0
*/
void sub_a892f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa892f0ULL || rel >= 0xa89300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89300 size=16 callers=0 calls=0
*/
void sub_a89300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89300ULL || rel >= 0xa89310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89310 size=16 callers=0 calls=0
*/
void sub_a89310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89310ULL || rel >= 0xa89320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89320 size=16 callers=0 calls=0
*/
void sub_a89320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89320ULL || rel >= 0xa89330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89330 size=16 callers=0 calls=0
*/
void sub_a89330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89330ULL || rel >= 0xa89340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89340 size=16 callers=0 calls=0
*/
void sub_a89340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89340ULL || rel >= 0xa89350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89350 size=16 callers=0 calls=0
*/
void sub_a89350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89350ULL || rel >= 0xa89360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89360 size=16 callers=0 calls=0
*/
void sub_a89360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89360ULL || rel >= 0xa89370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89370 size=16 callers=0 calls=0
*/
void sub_a89370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89370ULL || rel >= 0xa89380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89380 size=304 callers=0 calls=0
*/
void sub_a89380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89380ULL || rel >= 0xa894b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a894b0 size=128 callers=0 calls=0
*/
void sub_a894b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa894b0ULL || rel >= 0xa89530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89530 size=592 callers=0 calls=8
   calls: sub_a7bb80, sub_a7bcd0, sub_a8c930, sub_a8ca80, sub_a96ae0, sub_c39c40, sub_d0c0, sub_e806b0
   ref: View_Search
   ref: search_start
   ref: View_Top
*/
void search_start(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89530ULL || rel >= 0xa89780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89780 size=176 callers=0 calls=4
   calls: sub_a77150, sub_a7a700, sub_a8c950, sub_a96af0
*/
void sub_a89780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89780ULL || rel >= 0xa89830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89830 size=16 callers=0 calls=0
*/
void sub_a89830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89830ULL || rel >= 0xa89840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89840 size=16 callers=0 calls=0
*/
void sub_a89840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89840ULL || rel >= 0xa89850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89850 size=16 callers=0 calls=0
*/
void sub_a89850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89850ULL || rel >= 0xa89860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89860 size=16 callers=0 calls=0
*/
void sub_a89860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89860ULL || rel >= 0xa89870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89870 size=16 callers=0 calls=0
*/
void sub_a89870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89870ULL || rel >= 0xa89880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89880 size=16 callers=0 calls=0
*/
void sub_a89880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89880ULL || rel >= 0xa89890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89890 size=16 callers=0 calls=0
*/
void sub_a89890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89890ULL || rel >= 0xa898a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a898a0 size=16 callers=0 calls=0
*/
void sub_a898a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa898a0ULL || rel >= 0xa898b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a898b0 size=16 callers=0 calls=0
*/
void sub_a898b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa898b0ULL || rel >= 0xa898c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a898c0 size=304 callers=0 calls=0
*/
void sub_a898c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa898c0ULL || rel >= 0xa899f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a899f0 size=128 callers=0 calls=0
*/
void sub_a899f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa899f0ULL || rel >= 0xa89a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89a70 size=368 callers=0 calls=4
   calls: sub_a7bb80, sub_aa7fd0, sub_c39c40, sub_d0c0
   ref: swap_boxtray
   ref: View_Top
*/
void swap_boxtray(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89a70ULL || rel >= 0xa89be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89be0 size=144 callers=0 calls=3
   calls: sub_a77150, sub_a7a700, sub_aa81f0
*/
void sub_a89be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89be0ULL || rel >= 0xa89c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89c70 size=16 callers=0 calls=0
*/
void sub_a89c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89c70ULL || rel >= 0xa89c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89c80 size=16 callers=0 calls=0
*/
void sub_a89c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89c80ULL || rel >= 0xa89c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89c90 size=16 callers=0 calls=0
*/
void sub_a89c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89c90ULL || rel >= 0xa89ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89ca0 size=16 callers=0 calls=0
*/
void sub_a89ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89ca0ULL || rel >= 0xa89cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89cb0 size=16 callers=0 calls=0
*/
void sub_a89cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89cb0ULL || rel >= 0xa89cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89cc0 size=16 callers=0 calls=0
*/
void sub_a89cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89cc0ULL || rel >= 0xa89cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89cd0 size=16 callers=0 calls=0
*/
void sub_a89cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89cd0ULL || rel >= 0xa89ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89ce0 size=16 callers=0 calls=0
*/
void sub_a89ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89ce0ULL || rel >= 0xa89cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89cf0 size=16 callers=0 calls=0
*/
void sub_a89cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89cf0ULL || rel >= 0xa89d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89d00 size=304 callers=0 calls=0
*/
void sub_a89d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89d00ULL || rel >= 0xa89e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89e30 size=128 callers=0 calls=0
*/
void sub_a89e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89e30ULL || rel >= 0xa89eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a89eb0 size=640 callers=0 calls=7
   calls: sub_5cfaf0, sub_a7bb80, sub_a800f0, sub_c39c40, sub_d0c0, sub_e807f0, sub_ebb290
   ref: View_Top
*/
void View_Top_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa89eb0ULL || rel >= 0xa8a130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a130 size=272 callers=0 calls=5
   calls: poke_panel_38, sub_a77150, sub_a77160, sub_a7a700, sub_aaa5d0
*/
void sub_a8a130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a130ULL || rel >= 0xa8a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a240 size=16 callers=0 calls=0
*/
void sub_a8a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a240ULL || rel >= 0xa8a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a250 size=16 callers=0 calls=0
*/
void sub_a8a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a250ULL || rel >= 0xa8a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a260 size=16 callers=0 calls=0
*/
void sub_a8a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a260ULL || rel >= 0xa8a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a270 size=16 callers=0 calls=0
*/
void sub_a8a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a270ULL || rel >= 0xa8a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a280 size=16 callers=0 calls=0
*/
void sub_a8a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a280ULL || rel >= 0xa8a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a290 size=16 callers=0 calls=0
*/
void sub_a8a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a290ULL || rel >= 0xa8a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a2a0 size=16 callers=0 calls=0
*/
void sub_a8a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a2a0ULL || rel >= 0xa8a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a2b0 size=16 callers=0 calls=0
*/
void sub_a8a2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a2b0ULL || rel >= 0xa8a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a2c0 size=16 callers=0 calls=0
*/
void sub_a8a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a2c0ULL || rel >= 0xa8a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a2d0 size=304 callers=0 calls=0
*/
void sub_a8a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a2d0ULL || rel >= 0xa8a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a400 size=128 callers=0 calls=0
*/
void sub_a8a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a400ULL || rel >= 0xa8a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a480 size=560 callers=0 calls=5
   calls: sub_a7bb80, sub_a7be20, sub_ab3760, sub_c39c40, sub_d0c0
   ref: View_Top
   ref: wallpaper
   ref: View_Wallpaper
*/
void View_Wallpaper_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a480ULL || rel >= 0xa8a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a6b0 size=704 callers=0 calls=9
   calls: anime_L_bg_box_list_02_bg_default, sub_13530d0, sub_13546c0, sub_1354890, sub_a77150, sub_a7a700, sub_ab3af0, sub_ab3b00, sub_ab4260
*/
void sub_a8a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a6b0ULL || rel >= 0xa8a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a970 size=16 callers=0 calls=0
*/
void sub_a8a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a970ULL || rel >= 0xa8a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a980 size=16 callers=0 calls=0
*/
void sub_a8a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a980ULL || rel >= 0xa8a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a990 size=16 callers=0 calls=0
*/
void sub_a8a990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a990ULL || rel >= 0xa8a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a9a0 size=16 callers=0 calls=0
*/
void sub_a8a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a9a0ULL || rel >= 0xa8a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a9b0 size=16 callers=0 calls=0
*/
void sub_a8a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a9b0ULL || rel >= 0xa8a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a9c0 size=16 callers=0 calls=0
*/
void sub_a8a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a9c0ULL || rel >= 0xa8a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a9d0 size=16 callers=0 calls=0
*/
void sub_a8a9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a9d0ULL || rel >= 0xa8a9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a9e0 size=16 callers=0 calls=0
*/
void sub_a8a9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a9e0ULL || rel >= 0xa8a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8a9f0 size=16 callers=0 calls=0
*/
void sub_a8a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a9f0ULL || rel >= 0xa8aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8aa00 size=304 callers=0 calls=0
*/
void sub_a8aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8aa00ULL || rel >= 0xa8ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ab30 size=128 callers=0 calls=0
*/
void sub_a8ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ab30ULL || rel >= 0xa8abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8abb0 size=368 callers=0 calls=4
   calls: sub_a7be20, sub_ab3ac0, sub_c39c40, sub_d0c0
   ref: wallpaper_end
   ref: View_Wallpaper
*/
void View_Wallpaper_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8abb0ULL || rel >= 0xa8ad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ad20 size=144 callers=0 calls=3
   calls: sub_a77150, sub_a7a700, sub_ab3ad0
*/
void sub_a8ad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ad20ULL || rel >= 0xa8adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8adb0 size=16 callers=0 calls=0
*/
void sub_a8adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8adb0ULL || rel >= 0xa8adc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8adc0 size=16 callers=0 calls=0
*/
void sub_a8adc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8adc0ULL || rel >= 0xa8add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8add0 size=16 callers=0 calls=0
*/
void sub_a8add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8add0ULL || rel >= 0xa8ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ade0 size=16 callers=0 calls=0
*/
void sub_a8ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ade0ULL || rel >= 0xa8adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8adf0 size=16 callers=0 calls=0
*/
void sub_a8adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8adf0ULL || rel >= 0xa8ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ae00 size=16 callers=0 calls=0
*/
void sub_a8ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ae00ULL || rel >= 0xa8ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ae10 size=16 callers=0 calls=0
*/
void sub_a8ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ae10ULL || rel >= 0xa8ae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ae20 size=16 callers=0 calls=0
*/
void sub_a8ae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ae20ULL || rel >= 0xa8ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ae30 size=16 callers=0 calls=0
*/
void sub_a8ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ae30ULL || rel >= 0xa8ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ae40 size=304 callers=0 calls=0
*/
void sub_a8ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ae40ULL || rel >= 0xa8af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8af70 size=304 callers=0 calls=0
*/
void sub_a8af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8af70ULL || rel >= 0xa8b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b0a0 size=128 callers=0 calls=0
*/
void sub_a8b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b0a0ULL || rel >= 0xa8b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b120 size=384 callers=0 calls=6
   calls: sub_a7be20, sub_ab3ab0, sub_ab3b10, sub_c39c40, sub_d0c0, sub_e806b0
   ref: wallpaper_start
   ref: View_Wallpaper
*/
void wallpaper_start(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b120ULL || rel >= 0xa8b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b2a0 size=144 callers=0 calls=3
   calls: sub_a77150, sub_a7a700, sub_ab3ad0
*/
void sub_a8b2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b2a0ULL || rel >= 0xa8b330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b330 size=16 callers=0 calls=0
*/
void sub_a8b330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b330ULL || rel >= 0xa8b340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b340 size=16 callers=0 calls=0
*/
void sub_a8b340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b340ULL || rel >= 0xa8b350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b350 size=16 callers=0 calls=0
*/
void sub_a8b350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b350ULL || rel >= 0xa8b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b360 size=16 callers=0 calls=0
*/
void sub_a8b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b360ULL || rel >= 0xa8b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b370 size=16 callers=0 calls=0
*/
void sub_a8b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b370ULL || rel >= 0xa8b380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b380 size=16 callers=0 calls=0
*/
void sub_a8b380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b380ULL || rel >= 0xa8b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b390 size=16 callers=0 calls=0
*/
void sub_a8b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b390ULL || rel >= 0xa8b3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b3a0 size=16 callers=0 calls=0
*/
void sub_a8b3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b3a0ULL || rel >= 0xa8b3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b3b0 size=16 callers=0 calls=0
*/
void sub_a8b3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b3b0ULL || rel >= 0xa8b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b3c0 size=304 callers=0 calls=0
*/
void sub_a8b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b3c0ULL || rel >= 0xa8b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b4f0 size=128 callers=0 calls=0
*/
void sub_a8b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b4f0ULL || rel >= 0xa8b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b570 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokebox/bin/pokebox_model_lyt.bin
*/
void pokebox_model_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b570ULL || rel >= 0xa8b680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b680 size=16 callers=0 calls=0
*/
void sub_a8b680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b680ULL || rel >= 0xa8b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b690 size=16 callers=0 calls=0
*/
void sub_a8b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b690ULL || rel >= 0xa8b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b6a0 size=128 callers=0 calls=2
   calls: sub_e80580, sub_ea4760
*/
void sub_a8b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b6a0ULL || rel >= 0xa8b720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b720 size=48 callers=4 calls=1
   calls: sub_e80580
*/
void sub_a8b720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b720ULL || rel >= 0xa8b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b750 size=64 callers=1 calls=2
   calls: sub_e80580, sub_e807f0
*/
void sub_a8b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b750ULL || rel >= 0xa8b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b790 size=48 callers=1 calls=1
   calls: sub_e80580
*/
void sub_a8b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b790ULL || rel >= 0xa8b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b7c0 size=16 callers=1 calls=0
*/
void sub_a8b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b7c0ULL || rel >= 0xa8b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b7d0 size=16 callers=0 calls=0
*/
void sub_a8b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b7d0ULL || rel >= 0xa8b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b7e0 size=32 callers=2 calls=1
   calls: sub_eb6530
*/
void sub_a8b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b7e0ULL || rel >= 0xa8b800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b800 size=16 callers=2 calls=0
*/
void sub_a8b800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b800ULL || rel >= 0xa8b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b810 size=16 callers=2 calls=0
*/
void sub_a8b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b810ULL || rel >= 0xa8b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b820 size=240 callers=1 calls=1
   calls: sub_14aad40
*/
void sub_a8b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b820ULL || rel >= 0xa8b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b910 size=16 callers=0 calls=0
*/
void sub_a8b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b910ULL || rel >= 0xa8b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b920 size=16 callers=0 calls=0
*/
void sub_a8b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b920ULL || rel >= 0xa8b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b930 size=16 callers=0 calls=0
*/
void sub_a8b930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b930ULL || rel >= 0xa8b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b940 size=16 callers=0 calls=0
*/
void sub_a8b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b940ULL || rel >= 0xa8b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b950 size=16 callers=0 calls=0
*/
void sub_a8b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b950ULL || rel >= 0xa8b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b960 size=16 callers=0 calls=0
*/
void sub_a8b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b960ULL || rel >= 0xa8b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b970 size=16 callers=0 calls=0
*/
void sub_a8b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b970ULL || rel >= 0xa8b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b980 size=16 callers=0 calls=0
*/
void sub_a8b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b980ULL || rel >= 0xa8b990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8b990 size=304 callers=0 calls=0
*/
void sub_a8b990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8b990ULL || rel >= 0xa8bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8bac0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokebox/bin/uikit_pokebox_search.bin
   ref: bin/appli/pokebox/bin/pokebox_search_lyt.bin
*/
void uikit_pokebox_search(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8bac0ULL || rel >= 0xa8bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8bca0 size=48 callers=0 calls=1
   calls: sub_a8bcd0
*/
void sub_a8bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8bca0ULL || rel >= 0xa8bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8bcd0 size=416 callers=1 calls=3
   calls: sub_a913e0, sub_a91e20, sub_a92000
*/
void sub_a8bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8bcd0ULL || rel >= 0xa8be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8be70 size=304 callers=0 calls=2
   calls: sub_14ba7b0, sub_8f3180
   ref: pane_L_btn_search_sub_%02d_P_icon_poke_00
*/
void pane_L_btn_search_sub__02d_P_icon_poke_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8be70ULL || rel >= 0xa8bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8bfa0 size=16 callers=0 calls=0
*/
void sub_a8bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8bfa0ULL || rel >= 0xa8bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8bfb0 size=560 callers=0 calls=12
   calls: anime_search_list_sub, sub_14e1a00, sub_14e1a30, sub_1502120, sub_5cfad0, sub_a8c620, sub_a91250, sub_e80580, sub_e807d0, sub_e84250, sub_e84310, sub_ea4760
*/
void sub_a8bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8bfb0ULL || rel >= 0xa8c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8c1e0 size=944 callers=1 calls=14
   calls: sub_14e1a00, sub_14e1a30, sub_14e1b40, sub_1500c40, sub_7c2b60, sub_a8c620, sub_a8ce60, sub_a8d9b0, sub_a8e6d0, sub_e80580, sub_e833a0, sub_e837c0
   ... +2 more
   ref: anime_sub_to_main
   ref: anime_search_list_sub
*/
void anime_search_list_sub(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8c1e0ULL || rel >= 0xa8c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8c590 size=144 callers=1 calls=3
   calls: sub_14e1a30, sub_e80580, sub_e84310
*/
void sub_a8c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8c590ULL || rel >= 0xa8c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8c620 size=592 callers=4 calls=8
   calls: sub_14edac0, sub_14eebd0, sub_14eebe0, sub_14f1840, sub_14f1850, sub_14f1870, sub_a8e6d0, sub_e84250
*/
void sub_a8c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8c620ULL || rel >= 0xa8c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8c870 size=96 callers=1 calls=2
   calls: sub_14e1a00, sub_e84250
*/
void sub_a8c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8c870ULL || rel >= 0xa8c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8c8d0 size=96 callers=1 calls=4
   calls: sub_14e1a30, sub_e80580, sub_e807f0, sub_e84310
*/
void sub_a8c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8c8d0ULL || rel >= 0xa8c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8c930 size=16 callers=1 calls=0
*/
void sub_a8c930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8c930ULL || rel >= 0xa8c940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8c940 size=16 callers=2 calls=0
*/
void sub_a8c940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8c940ULL || rel >= 0xa8c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8c950 size=32 callers=2 calls=1
   calls: sub_eb6530
*/
void sub_a8c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8c950ULL || rel >= 0xa8c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8c970 size=16 callers=1 calls=0
*/
void sub_a8c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8c970ULL || rel >= 0xa8c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8c980 size=16 callers=3 calls=0
*/
void sub_a8c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8c980ULL || rel >= 0xa8c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8c990 size=16 callers=1 calls=0
*/
void sub_a8c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8c990ULL || rel >= 0xa8c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8c9a0 size=224 callers=1 calls=0
*/
void sub_a8c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8c9a0ULL || rel >= 0xa8ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ca80 size=144 callers=1 calls=4
   calls: sub_14e1a30, sub_a8c620, sub_a8cb10, sub_e84310
*/
void sub_a8ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ca80ULL || rel >= 0xa8cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8cb10 size=848 callers=2 calls=6
   calls: sub_14e1a00, sub_14ea4f0, sub_67d450, sub_a8dd80, sub_e7eb10, sub_eb7b00
*/
void sub_a8cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8cb10ULL || rel >= 0xa8ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ce60 size=2896 callers=3 calls=8
   calls: sub_1379a10, sub_14b9600, sub_14b9fd0, sub_14ba350, sub_786cc0, sub_7c2b60, sub_a8f0f0, sub_a92ab0
*/
void sub_a8ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ce60ULL || rel >= 0xa8d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8d9b0 size=976 callers=3 calls=6
   calls: sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870, sub_a8e6d0, sub_e84250
*/
void sub_a8d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8d9b0ULL || rel >= 0xa8dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8dd80 size=256 callers=2 calls=2
   calls: sub_14ea9a0, sub_eb7b00
*/
void sub_a8dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8dd80ULL || rel >= 0xa8de80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8de80 size=640 callers=1 calls=6
   calls: sub_14e1a00, sub_14ea4f0, sub_67d450, sub_a8dd80, sub_e7eb10, sub_eb7b00
*/
void sub_a8de80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8de80ULL || rel >= 0xa8e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8e100 size=240 callers=0 calls=10
   calls: sub_14e1a00, sub_14e1a30, sub_14e1b40, sub_a8ce60, sub_a8d9b0, sub_e80580, sub_e833a0, sub_e837c0, sub_e84250, sub_e84310
   ref: anime_main_to_sub
   ref: anime_search_list_main
*/
void anime_search_list_main(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8e100ULL || rel >= 0xa8e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8e1f0 size=1248 callers=0 calls=11
   calls: anime_L_btn_search_main__02d_L_marking_set_L__02d_red, sub_786cd0, sub_a8e6d0, sub_a8e7f0, sub_a8e920, sub_a8ea50, sub_a8eb80, sub_a8ecb0, sub_a8ef50, sub_e833a0, sub_e837c0
   ref: pane_L_btn_search_main_%02d_T_btn_header_00
   ref: anime_L_btn_search_main_%02d_text_only
   ref: pane_L_btn_search_main_%02d_T_btn_contents_00
   ref: anime_L_btn_search_main_%02d_marking_on
*/
void anime_L_btn_search_main__02d_text_only(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8e1f0ULL || rel >= 0xa8e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8e6d0 size=288 callers=17 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_a8e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8e6d0ULL || rel >= 0xa8e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8e7f0 size=304 callers=2 calls=2
   calls: sub_1313c10, sub_a8e6d0
*/
void sub_a8e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8e7f0ULL || rel >= 0xa8e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8e920 size=304 callers=2 calls=2
   calls: sub_a8e6d0, typename_fn
*/
void sub_a8e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8e920ULL || rel >= 0xa8ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ea50 size=304 callers=2 calls=2
   calls: sub_a8e6d0, wazaname
*/
void sub_a8ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ea50ULL || rel >= 0xa8eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8eb80 size=304 callers=2 calls=2
   calls: sub_a8e6d0, tokusei
*/
void sub_a8eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8eb80ULL || rel >= 0xa8ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ecb0 size=304 callers=2 calls=2
   calls: seikaku, sub_a8e6d0
*/
void sub_a8ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ecb0ULL || rel >= 0xa8ede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ede0 size=368 callers=1 calls=2
   calls: sub_e833a0, sub_e837c0
   ref: anime_L_btn_search_main_%02d_L_marking_set_L_%02d_red
   ref: anime_L_btn_search_main_%02d_L_marking_set_L_%02d_default
   ref: anime_L_btn_search_main_%02d_L_marking_set_L_%02d_blue
*/
void anime_L_btn_search_main__02d_L_marking_set_L__02d_red(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ede0ULL || rel >= 0xa8ef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ef50 size=416 callers=2 calls=2
   calls: sub_13140d0, sub_a8e6d0
*/
void sub_a8ef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ef50ULL || rel >= 0xa8f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8f0f0 size=400 callers=6 calls=4
   calls: sub_14b9600, sub_14b9640, sub_14b9fd0, sub_14ba350
*/
void sub_a8f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8f0f0ULL || rel >= 0xa8f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8f280 size=992 callers=0 calls=14
   calls: anime_L_btn_search_sub__02d_marking_ptn, sub_14e1a00, sub_14e1a30, sub_14e1b40, sub_1500c40, sub_7c2b60, sub_a8c620, sub_a8ce60, sub_a8d9b0, sub_e80580, sub_e833a0, sub_e837c0
   ... +2 more
   ref: anime_sub_to_main
   ref: anime_search_list_sub
*/
void anime_search_list_sub_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8f280ULL || rel >= 0xa8f660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8f660 size=448 callers=0 calls=13
   calls: anime_L_btn_search_sub__02d_marking_ptn, anime_L_btn_search_sub__02d_pokemon, anime_L_btn_search_sub__02d_pokemon_2, anime_L_btn_search_sub__02d_pokemon_3, anime_L_btn_search_sub__02d_pokemon_4, anime_L_btn_search_sub__02d_pokemon_5, anime_L_btn_search_sub__02d_pokemon_6, anime_L_btn_search_sub__02d_pokemon_7, anime_L_btn_search_sub__02d_pokemon_8, initial__02d, sub_14e1a00, sub_786cd0
   ... +1 more
*/
void sub_a8f660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8f660ULL || rel >= 0xa8f820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8f820 size=32 callers=0 calls=0
*/
void sub_a8f820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8f820ULL || rel >= 0xa8f840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8f840 size=832 callers=0 calls=3
   calls: sub_14ab040, sub_a8e6d0, typename_fn
   ref: TOKUSEIINFO_%03d
   ref: msg_box_seikaku_%02d
*/
void TOKUSEIINFO__03d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8f840ULL || rel >= 0xa8fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8fb80 size=272 callers=2 calls=3
   calls: anime_L_btn_search_sub__02d_pokemon_9, sub_e83430, sub_e83930
   ref: anime_L_btn_search_sub_%02d_marking_ptn
*/
void anime_L_btn_search_sub__02d_marking_ptn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8fb80ULL || rel >= 0xa8fc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8fc90 size=544 callers=1 calls=5
   calls: sub_13794f0, sub_14bc060, sub_a8e7f0, sub_e833a0, sub_e837c0
   ref: pane_L_btn_search_sub_%02d_T_btn_sub_pokename_00
   ref: anime_L_btn_search_sub_%02d_pokemon
   ref: anime_L_btn_search_sub_%02d_marking
   ref: anime_L_btn_search_sub_%02d_text_only
*/
void anime_L_btn_search_sub__02d_pokemon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8fc90ULL || rel >= 0xa8feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8feb0 size=272 callers=1 calls=3
   calls: sub_a8e920, sub_e833a0, sub_e837c0
   ref: pane_L_btn_search_sub_%02d_T_btn_sub_contents_00
   ref: anime_L_btn_search_sub_%02d_pokemon
   ref: anime_L_btn_search_sub_%02d_marking
   ref: anime_L_btn_search_sub_%02d_text_only
*/
void anime_L_btn_search_sub__02d_pokemon_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8feb0ULL || rel >= 0xa8ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a8ffc0 size=272 callers=1 calls=3
   calls: sub_a8ea50, sub_e833a0, sub_e837c0
   ref: pane_L_btn_search_sub_%02d_T_btn_sub_contents_00
   ref: anime_L_btn_search_sub_%02d_pokemon
   ref: anime_L_btn_search_sub_%02d_marking
   ref: anime_L_btn_search_sub_%02d_text_only
*/
void anime_L_btn_search_sub__02d_pokemon_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8ffc0ULL || rel >= 0xa900d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a900d0 size=272 callers=1 calls=3
   calls: sub_a8ecb0, sub_e833a0, sub_e837c0
   ref: pane_L_btn_search_sub_%02d_T_btn_sub_contents_00
   ref: anime_L_btn_search_sub_%02d_pokemon
   ref: anime_L_btn_search_sub_%02d_marking
   ref: anime_L_btn_search_sub_%02d_text_only
*/
void anime_L_btn_search_sub__02d_pokemon_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa900d0ULL || rel >= 0xa901e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a901e0 size=272 callers=1 calls=3
   calls: sub_a8eb80, sub_e833a0, sub_e837c0
   ref: pane_L_btn_search_sub_%02d_T_btn_sub_contents_00
   ref: anime_L_btn_search_sub_%02d_pokemon
   ref: anime_L_btn_search_sub_%02d_marking
   ref: anime_L_btn_search_sub_%02d_text_only
*/
void anime_L_btn_search_sub__02d_pokemon_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa901e0ULL || rel >= 0xa902f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a902f0 size=368 callers=1 calls=3
   calls: sub_a8e6d0, sub_e833a0, sub_e837c0
   ref: pane_L_btn_search_sub_%02d_T_btn_sub_contents_00
   ref: anime_L_btn_search_sub_%02d_pokemon
   ref: anime_L_btn_search_sub_%02d_marking
   ref: anime_L_btn_search_sub_%02d_text_only
*/
void anime_L_btn_search_sub__02d_pokemon_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa902f0ULL || rel >= 0xa90460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a90460 size=352 callers=1 calls=3
   calls: sub_a8e6d0, sub_e833a0, sub_e837c0
   ref: pane_L_btn_search_sub_%02d_T_btn_sub_contents_00
   ref: anime_L_btn_search_sub_%02d_pokemon
   ref: anime_L_btn_search_sub_%02d_marking
   ref: anime_L_btn_search_sub_%02d_text_only
*/
void anime_L_btn_search_sub__02d_pokemon_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa90460ULL || rel >= 0xa905c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a905c0 size=272 callers=1 calls=3
   calls: sub_a8ef50, sub_e833a0, sub_e837c0
   ref: pane_L_btn_search_sub_%02d_T_btn_sub_contents_00
   ref: anime_L_btn_search_sub_%02d_pokemon
   ref: anime_L_btn_search_sub_%02d_marking
   ref: anime_L_btn_search_sub_%02d_text_only
*/
void anime_L_btn_search_sub__02d_pokemon_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa905c0ULL || rel >= 0xa906d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a906d0 size=432 callers=1 calls=3
   calls: sub_a8e6d0, sub_e833a0, sub_e837c0
   ref: pane_L_btn_search_sub_%02d_T_btn_sub_contents_00
   ref: anime_L_btn_search_sub_%02d_pokemon
   ref: anime_L_btn_search_sub_%02d_marking
   ref: initial_%02d
   ref: anime_L_btn_search_sub_%02d_text_only
*/
void initial__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa906d0ULL || rel >= 0xa90880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a90880 size=464 callers=1 calls=2
   calls: sub_e833a0, sub_e837c0
   ref: anime_L_btn_search_sub_%02d_marking_blue
   ref: anime_L_btn_search_sub_%02d_pokemon
   ref: anime_L_btn_search_sub_%02d_marking_default
   ref: anime_L_btn_search_sub_%02d_marking
   ref: anime_L_btn_search_sub_%02d_text_only
   ref: anime_L_btn_search_sub_%02d_marking_red
*/
void anime_L_btn_search_sub__02d_pokemon_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa90880ULL || rel >= 0xa90a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a90a50 size=256 callers=1 calls=9
   calls: sub_14ab2b0, sub_14e1a00, sub_14e1a30, sub_1500c40, sub_a8cb10, sub_e80580, sub_e833a0, sub_e84250, sub_e84310
   ref: anime_search_list_main
*/
void anime_search_list_main_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa90a50ULL || rel >= 0xa90b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a90b50 size=288 callers=1 calls=9
   calls: sub_14ab2b0, sub_14e1a00, sub_14e1a30, sub_1500c40, sub_a8de80, sub_e80580, sub_e833a0, sub_e84250, sub_e84310
   ref: anime_search_list_sub
*/
void anime_search_list_sub_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa90b50ULL || rel >= 0xa90c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a90c70 size=192 callers=0 calls=0
*/
void sub_a90c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa90c70ULL || rel >= 0xa90d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a90d30 size=192 callers=0 calls=0
*/
void sub_a90d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa90d30ULL || rel >= 0xa90df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a90df0 size=16 callers=0 calls=0
*/
void sub_a90df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa90df0ULL || rel >= 0xa90e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a90e00 size=192 callers=0 calls=0
*/
void sub_a90e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa90e00ULL || rel >= 0xa90ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a90ec0 size=192 callers=0 calls=0
*/
void sub_a90ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa90ec0ULL || rel >= 0xa90f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a90f80 size=16 callers=0 calls=0
*/
void sub_a90f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa90f80ULL || rel >= 0xa90f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a90f90 size=16 callers=0 calls=0
*/
void sub_a90f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa90f90ULL || rel >= 0xa90fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a90fa0 size=192 callers=0 calls=0
*/
void sub_a90fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa90fa0ULL || rel >= 0xa91060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91060 size=192 callers=0 calls=0
*/
void sub_a91060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91060ULL || rel >= 0xa91120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91120 size=304 callers=0 calls=0
*/
void sub_a91120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91120ULL || rel >= 0xa91250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91250 size=400 callers=4 calls=2
   calls: sub_a91250, sub_e86260
*/
void sub_a91250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91250ULL || rel >= 0xa913e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a913e0 size=464 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_a913e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa913e0ULL || rel >= 0xa915b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a915b0 size=240 callers=0 calls=0
*/
void sub_a915b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa915b0ULL || rel >= 0xa916a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a916a0 size=240 callers=0 calls=0
*/
void sub_a916a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa916a0ULL || rel >= 0xa91790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91790 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_a91790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91790ULL || rel >= 0xa91800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91800 size=16 callers=0 calls=0
*/
void sub_a91800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91800ULL || rel >= 0xa91810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91810 size=48 callers=0 calls=0
*/
void sub_a91810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91810ULL || rel >= 0xa91840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91840 size=304 callers=0 calls=0
*/
void sub_a91840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91840ULL || rel >= 0xa91970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91970 size=16 callers=0 calls=0
*/
void sub_a91970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91970ULL || rel >= 0xa91980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91980 size=240 callers=0 calls=0
*/
void sub_a91980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91980ULL || rel >= 0xa91a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91a70 size=240 callers=0 calls=0
*/
void sub_a91a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91a70ULL || rel >= 0xa91b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91b60 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_a91b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91b60ULL || rel >= 0xa91bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91bd0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_a91bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91bd0ULL || rel >= 0xa91c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91c40 size=240 callers=0 calls=0
*/
void sub_a91c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91c40ULL || rel >= 0xa91d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91d30 size=240 callers=0 calls=0
*/
void sub_a91d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91d30ULL || rel >= 0xa91e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a91e20 size=480 callers=7 calls=0
*/
void sub_a91e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91e20ULL || rel >= 0xa92000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92000 size=496 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_a92000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92000ULL || rel >= 0xa921f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a921f0 size=240 callers=0 calls=0
*/
void sub_a921f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa921f0ULL || rel >= 0xa922e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a922e0 size=240 callers=0 calls=0
*/
void sub_a922e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa922e0ULL || rel >= 0xa923d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a923d0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_a923d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa923d0ULL || rel >= 0xa92440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92440 size=32 callers=0 calls=0
*/
void sub_a92440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92440ULL || rel >= 0xa92460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92460 size=80 callers=0 calls=0
*/
void sub_a92460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92460ULL || rel >= 0xa924b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a924b0 size=208 callers=0 calls=0
*/
void sub_a924b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa924b0ULL || rel >= 0xa92580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92580 size=16 callers=0 calls=0
*/
void sub_a92580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92580ULL || rel >= 0xa92590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92590 size=240 callers=0 calls=0
*/
void sub_a92590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92590ULL || rel >= 0xa92680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92680 size=240 callers=0 calls=0
*/
void sub_a92680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92680ULL || rel >= 0xa92770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92770 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_a92770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92770ULL || rel >= 0xa927e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a927e0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_a927e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa927e0ULL || rel >= 0xa92850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92850 size=240 callers=0 calls=0
*/
void sub_a92850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92850ULL || rel >= 0xa92940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92940 size=240 callers=0 calls=0
*/
void sub_a92940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92940ULL || rel >= 0xa92a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92a30 size=48 callers=0 calls=0
*/
void sub_a92a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92a30ULL || rel >= 0xa92a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92a60 size=16 callers=0 calls=0
*/
void sub_a92a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92a60ULL || rel >= 0xa92a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92a70 size=32 callers=0 calls=0
*/
void sub_a92a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92a70ULL || rel >= 0xa92a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92a90 size=32 callers=0 calls=0
*/
void sub_a92a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92a90ULL || rel >= 0xa92ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92ab0 size=544 callers=38 calls=0
*/
void sub_a92ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92ab0ULL || rel >= 0xa92cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92cd0 size=512 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pokebox/bin/pokebox_top_lyt.bin
   ref: bin/appli/pokebox/bin/uikit_pokebox_top.bin
*/
void uikit_pokebox_top(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92cd0ULL || rel >= 0xa92ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a92ed0 size=3488 callers=1 calls=41
   calls: anime_L_bg_box_list_01_bg_default, anime_info_out_2, boxtray_cursor__02d, boxtray_panel_32, boxtray_panel__02d, pane_L_icon_poke_box__02d_P_icon_item_00, pane_N_icon_poke_pos__02d, poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_9, sub_1354890
   ... +29 more
   ref: anime_info_out
   ref: anime_info_in
   ref: poke_panel
*/
void anime_info_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92ed0ULL || rel >= 0xa93c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a93c70 size=976 callers=7 calls=11
   calls: sub_13546c0, sub_a98a80, sub_a9aba0, sub_aa8470, sub_aac6b0, sub_aafbb0, sub_ab0d70, sub_ab16d0, sub_ab2d40, sub_ab2e90, sub_e83430
   ref: anime_L_bg_box_list_01_bg_default
   ref: anime_L_bg_box_list_01_bg_%02d
*/
void anime_L_bg_box_list_01_bg_default(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa93c70ULL || rel >= 0xa94040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a94040 size=16 callers=6 calls=0
*/
void sub_a94040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa94040ULL || rel >= 0xa94050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a94050 size=544 callers=5 calls=8
   calls: pane_L_icon_poke_team__02d_T_poke_lv_00, sub_1354400, sub_aa8470, sub_aac6b0, sub_ab0d70, sub_ab16d0, sub_ab2d40, sub_ab2e90
*/
void sub_a94050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa94050ULL || rel >= 0xa94270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a94270 size=288 callers=1 calls=1
   calls: sub_67b990
*/
void sub_a94270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa94270ULL || rel >= 0xa94390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a94390 size=480 callers=1 calls=4
   calls: sub_14d8890, sub_aabfc0, sub_e7eb10, sub_e84310
*/
void sub_a94390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa94390ULL || rel >= 0xa94570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a94570 size=608 callers=0 calls=8
   calls: anime_info_out_2, poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_9, sub_14ab040, sub_a99690, sub_ab2a10
*/
void sub_a94570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa94570ULL || rel >= 0xa947d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a947d0 size=400 callers=0 calls=7
   calls: anime_box_shift_right, anime_team_shift_right, sub_1500c90, sub_1502120, sub_5cfad0, sub_ea3d10, sub_ea4740
*/
void sub_a947d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa947d0ULL || rel >= 0xa94960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a94960 size=80 callers=5 calls=2
   calls: sub_14e1a30, sub_e84310
*/
void sub_a94960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa94960ULL || rel >= 0xa949b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a949b0 size=896 callers=1 calls=4
   calls: sub_14e6510, sub_14e6540, sub_e83e60, sub_e840a0
   ref: marking_panel
   ref: boxtray_panel_31
   ref: boxtray_panel_24
   ref: boxtray_panel_16
   ref: boxtray_panel_32
   ref: poke_panel
   ref: boxtray_panel_08
*/
void boxtray_panel_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa949b0ULL || rel >= 0xa94d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a94d30 size=240 callers=13 calls=2
   calls: sub_13533f0, sub_e840a0
   ref: boxtray_panel_%02d
*/
void boxtray_panel__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa94d30ULL || rel >= 0xa94e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a94e20 size=432 callers=0 calls=7
   calls: anime_L_bg_box_list_01_bg_default, boxtray_panel__02d, button_box__02d__02d_2, sub_1354890, sub_14e6510, sub_a99750, sub_aafbb0
*/
void sub_a94e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa94e20ULL || rel >= 0xa94fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a94fd0 size=336 callers=7 calls=3
   calls: sub_13533f0, sub_14e1a30, sub_e84310
   ref: boxtray_cursor_%02d
*/
void boxtray_cursor__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa94fd0ULL || rel >= 0xa95120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a95120 size=432 callers=1 calls=1
   calls: sub_a97450
*/
void sub_a95120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa95120ULL || rel >= 0xa952d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a952d0 size=256 callers=3 calls=2
   calls: sub_e83430, sub_e83850
*/
void sub_a952d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa952d0ULL || rel >= 0xa953d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a953d0 size=384 callers=2 calls=1
   calls: sub_eb7b00
*/
void sub_a953d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa953d0ULL || rel >= 0xa95550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a95550 size=544 callers=15 calls=6
   calls: sub_1354890, sub_aaf5d0, sub_e833a0, sub_e837c0, sub_e83870, sub_e83990
   ref: anime_info_out
   ref: anime_info_in
*/
void anime_info_out_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa95550ULL || rel >= 0xa95770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a95770 size=160 callers=1 calls=4
   calls: sub_e833a0, sub_e837c0, sub_e83870, sub_e83990
   ref: anime_info_out
   ref: anime_info_in
*/
void anime_info_out_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa95770ULL || rel >= 0xa95810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a95810 size=416 callers=1 calls=3
   calls: sub_14ab040, sub_a97450, sub_aab070
*/
void sub_a95810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa95810ULL || rel >= 0xa959b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a959b0 size=176 callers=7 calls=2
   calls: sub_14e1a00, sub_e83e60
*/
void sub_a959b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa959b0ULL || rel >= 0xa95a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a95a60 size=16 callers=0 calls=0
*/
void sub_a95a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa95a60ULL || rel >= 0xa95a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a95a70 size=1008 callers=0 calls=8
   calls: button_box__02d__02d, button_box__02d__02d_2, button_box__02d_search, button_box__02d_tray_mode, poke_panel, sub_13547b0, sub_1354890, sub_aa4440
*/
void sub_a95a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa95a70ULL || rel >= 0xa95e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a95e60 size=464 callers=3 calls=4
   calls: boxtray_panel__02d, sub_13533f0, sub_14e6510, sub_14e6540
   ref: button_box_%02d_%02d
   ref: button_box_%02d_search
*/
void button_box__02d__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa95e60ULL || rel >= 0xa96030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96030 size=480 callers=6 calls=7
   calls: sub_1354890, sub_14e6d50, sub_a993f0, sub_aae6a0, sub_aaf5d0, sub_e833a0, sub_e840a0
   ref: anime_L_window_marking_00_L_icon_marking_%02d
   ref: poke_panel
*/
void poke_panel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96030ULL || rel >= 0xa96210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96210 size=288 callers=2 calls=1
   calls: sub_13533f0
   ref: button_box_%02d_tray_mode
*/
void button_box__02d_tray_mode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96210ULL || rel >= 0xa96330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96330 size=288 callers=2 calls=1
   calls: sub_13533f0
   ref: button_box_%02d_search
*/
void button_box__02d_search(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96330ULL || rel >= 0xa96450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96450 size=368 callers=7 calls=1
   calls: sub_13533f0
   ref: button_box_%02d_%02d
*/
void button_box__02d__02d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96450ULL || rel >= 0xa965c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a965c0 size=416 callers=0 calls=10
   calls: boxtray_cursor__02d, poke_panel_2, sub_14e1a30, sub_aa4440, sub_aab070, sub_aabdb0, sub_e807d0, sub_e84310, sub_ea4760, sub_ea47a0
*/
void sub_a965c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa965c0ULL || rel >= 0xa96760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96760 size=272 callers=2 calls=7
   calls: anime_box_shift_right, anime_team_shift_right, sub_14e6d50, sub_1500c90, sub_1502120, sub_5cfad0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96760ULL || rel >= 0xa96870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96870 size=144 callers=1 calls=2
   calls: sub_aa4440, sub_aab070
*/
void sub_a96870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96870ULL || rel >= 0xa96900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96900 size=368 callers=1 calls=7
   calls: sub_14e1a00, sub_14e1a30, sub_e80580, sub_e807f0, sub_e840a0, sub_e84310, sub_eb7b00
   ref: marking_panel
   ref: poke_panel
*/
void marking_panel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96900ULL || rel >= 0xa96a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96a70 size=48 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_a96a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96a70ULL || rel >= 0xa96aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96aa0 size=48 callers=1 calls=1
   calls: sub_eb6230
*/
void sub_a96aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96aa0ULL || rel >= 0xa96ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96ad0 size=16 callers=1 calls=0
*/
void sub_a96ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96ad0ULL || rel >= 0xa96ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96ae0 size=16 callers=1 calls=0
*/
void sub_a96ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96ae0ULL || rel >= 0xa96af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96af0 size=32 callers=4 calls=1
   calls: sub_eb6530
*/
void sub_a96af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96af0ULL || rel >= 0xa96b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96b10 size=16 callers=1 calls=0
*/
void sub_a96b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96b10ULL || rel >= 0xa96b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96b20 size=16 callers=1 calls=0
*/
void sub_a96b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96b20ULL || rel >= 0xa96b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96b30 size=16 callers=4 calls=0
*/
void sub_a96b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96b30ULL || rel >= 0xa96b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96b40 size=16 callers=1 calls=0
*/
void sub_a96b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96b40ULL || rel >= 0xa96b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96b50 size=96 callers=1 calls=0
*/
void sub_a96b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96b50ULL || rel >= 0xa96bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96bb0 size=16 callers=1 calls=0
*/
void sub_a96bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96bb0ULL || rel >= 0xa96bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96bc0 size=16 callers=1 calls=0
*/
void sub_a96bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96bc0ULL || rel >= 0xa96bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96bd0 size=16 callers=1 calls=0
*/
void sub_a96bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96bd0ULL || rel >= 0xa96be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96be0 size=16 callers=3 calls=0
*/
void sub_a96be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96be0ULL || rel >= 0xa96bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a96bf0 size=2128 callers=1 calls=17
   calls: poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_9, sub_1354890, sub_14e6d50, sub_a94050, sub_a952d0, sub_a97450, sub_a99750, sub_aa8470, sub_aafb30
   ... +5 more
   ref: poke_panel
*/
void poke_panel_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96bf0ULL || rel >= 0xa97440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a97440 size=16 callers=1 calls=0
*/
void sub_a97440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa97440ULL || rel >= 0xa97450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a97450 size=288 callers=40 calls=3
   calls: sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_a97450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa97450ULL || rel >= 0xa97570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a97570 size=80 callers=1 calls=0
*/
void sub_a97570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa97570ULL || rel >= 0xa975c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a975c0 size=192 callers=2 calls=7
   calls: poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_9, sub_14e6d50, sub_a952d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa975c0ULL || rel >= 0xa97680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a97680 size=560 callers=23 calls=7
   calls: sub_1313580, sub_1315b90, sub_14ab040, sub_762d50, sub_764b40, sub_767950, sub_a97450
   ref: pane_L_icon_poke_team_%02d_T_poke_lv_00
   ref: pane_L_icon_poke_team_%02d_T_name_poke_00
*/
void pane_L_icon_poke_team__02d_T_poke_lv_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa97680ULL || rel >= 0xa978b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a978b0 size=3856 callers=2 calls=54
   calls: anime_L_marker_set_00_L__02d, default_fn, ribbon_table, sub_12fa130, sub_12fa250, sub_12fa2f0, sub_12fa520, sub_1313580, sub_1313e50, sub_1315b90, sub_14a9cf0, sub_14aad40
   ... +42 more
   ref: pane_L_skill_%02d_T_skill_name_00
   ref: anime_egg
   ref: anime_L_marker_set_01_glavel_%02d
   ref: anime_jadge
   ref: pane_L_skill_%02d
   ref: anime_L_spdefense_00
   ref: anime_L_skill_%02d_type_%02d
   ref: anime_info_out
*/
void anime_L_spdefense_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa978b0ULL || rel >= 0xa987c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a987c0 size=704 callers=2 calls=3
   calls: sub_762db0, sub_a993f0, sub_e833a0
   ref: anime_L_marker_set_00_L_%02d
*/
void anime_L_marker_set_00_L__02d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa987c0ULL || rel >= 0xa98a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a98a80 size=656 callers=7 calls=3
   calls: sub_1353c70, sub_1354400, sub_aad060
*/
void sub_a98a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa98a80ULL || rel >= 0xa98d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a98d10 size=688 callers=1 calls=6
   calls: sub_1106320, sub_11063e0, sub_11069b0, sub_14bc910, sub_769070, sub_7690a0
   ref: ribbon_table
   ref: imageName
   ref: imageName2
*/
void ribbon_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa98d10ULL || rel >= 0xa98fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a98fc0 size=640 callers=6 calls=5
   calls: sub_a99470, sub_a99500, sub_a99590, sub_e833a0, sub_e837c0
   ref: _default
*/
void default_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa98fc0ULL || rel >= 0xa99240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a99240 size=240 callers=2 calls=1
   calls: sub_1315270
*/
void sub_a99240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa99240ULL || rel >= 0xa99330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a99330 size=192 callers=1 calls=4
   calls: sub_e833a0, sub_e837c0, sub_e83870, sub_e83990
   ref: anime_info_out
   ref: anime_info_in
*/
void anime_info_out_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa99330ULL || rel >= 0xa993f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a993f0 size=128 callers=13 calls=1
   calls: sub_d0c0
*/
void sub_a993f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa993f0ULL || rel >= 0xa99470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a99470 size=144 callers=3 calls=1
   calls: sub_d0c0
*/
void sub_a99470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa99470ULL || rel >= 0xa99500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a99500 size=144 callers=4 calls=1
   calls: sub_d0c0
*/
void sub_a99500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa99500ULL || rel >= 0xa99590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a99590 size=144 callers=3 calls=1
   calls: sub_d0c0
*/
void sub_a99590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa99590ULL || rel >= 0xa99620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a99620 size=16 callers=1 calls=0
*/
void sub_a99620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa99620ULL || rel >= 0xa99630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a99630 size=96 callers=1 calls=1
   calls: sub_aaf5f0
*/
void sub_a99630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa99630ULL || rel >= 0xa99690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a99690 size=192 callers=1 calls=0
*/
void sub_a99690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa99690ULL || rel >= 0xa99750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a99750 size=368 callers=172 calls=6
   calls: sub_762d70, sub_aa8470, sub_aac6b0, sub_aaf920, sub_aafbb0, sub_ab1140
*/
void sub_a99750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa99750ULL || rel >= 0xa998c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a998c0 size=1056 callers=5 calls=11
   calls: boxtray_panel__02d, button_box__02d__02d_2, sub_14e6510, sub_14ea4f0, sub_14eaaf0, sub_5cfad0, sub_67d450, sub_a9bc60, sub_e7eb10, sub_e83e60, sub_eb7b00
*/
void sub_a998c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa998c0ULL || rel >= 0xa99ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a99ce0 size=256 callers=1 calls=9
   calls: poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_6, poke_panel_9, sub_14e6d50, sub_a959b0, sub_ab1840, sub_e840a0
   ref: poke_panel
*/
void poke_panel_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa99ce0ULL || rel >= 0xa99de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a99de0 size=400 callers=2 calls=6
   calls: sub_14e62c0, sub_14e6510, sub_14e6540, sub_14e6d90, sub_e83e60, sub_e840a0
   ref: poke_panel
*/
void poke_panel_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa99de0ULL || rel >= 0xa99f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a99f70 size=2160 callers=1 calls=23
   calls: anime_info_out_2, pane_L_icon_poke_team__02d_T_poke_lv_00, poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_6, poke_panel_9, sub_1354890, sub_14e6d50, sub_a959b0, sub_a98a80, sub_aa8470
   ... +11 more
   ref: poke_panel
*/
void poke_panel_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa99f70ULL || rel >= 0xa9a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9a7e0 size=960 callers=3 calls=20
   calls: sub_13533f0, sub_13546c0, sub_13547b0, sub_1354890, sub_762d70, sub_a98a80, sub_a9aba0, sub_aa8470, sub_aac6b0, sub_aaf920, sub_aafbb0, sub_ab0c80
   ... +8 more
   ref: anime_L_header_box_00_arrow_r
   ref: anime_box_shift_left
   ref: anime_L_header_box_00_arrow_l
   ref: anime_L_bg_box_list_02_bg_%02d
   ref: anime_box_shift_right
   ref: anime_L_bg_box_list_02_bg_default
*/
void anime_box_shift_right(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9a7e0ULL || rel >= 0xa9aba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9aba0 size=368 callers=4 calls=1
   calls: sub_1314040
*/
void sub_a9aba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9aba0ULL || rel >= 0xa9ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9ad10 size=224 callers=3 calls=1
   calls: sub_e83430
   ref: anime_L_bg_box_list_01_bg_default
   ref: anime_L_bg_box_list_02_bg_%02d
   ref: anime_L_bg_box_list_02_bg_default
   ref: anime_L_bg_box_list_01_bg_%02d
*/
void anime_L_bg_box_list_02_bg_default(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9ad10ULL || rel >= 0xa9adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9adf0 size=192 callers=1 calls=1
   calls: sub_14ab2b0
*/
void sub_a9adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9adf0ULL || rel >= 0xa9aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9aeb0 size=592 callers=1 calls=14
   calls: anime_info_out_2, poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_9, sub_13546c0, sub_1354890, sub_14e6d50, sub_a9aba0, sub_ab0c80, sub_ab0fa0, sub_e833a0
   ... +2 more
   ref: anime_box_shift_reset
   ref: anime_L_header_box_00_arrow_reset
   ref: anime_L_bg_box_list_01_bg_default
   ref: poke_panel
   ref: anime_L_bg_box_list_01_bg_%02d
*/
void anime_box_shift_reset(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9aeb0ULL || rel >= 0xa9b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9b100 size=96 callers=1 calls=1
   calls: sub_14ab2b0
*/
void sub_a9b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9b100ULL || rel >= 0xa9b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9b160 size=528 callers=3 calls=11
   calls: pane_L_icon_poke_team__02d_T_poke_lv_00, sub_a9b370, sub_aa8470, sub_aac6b0, sub_ab0c80, sub_ab0d70, sub_ab16d0, sub_ab2d40, sub_ab2e90, sub_e833a0, sub_e837c0
   ref: anime_L_header_team_00_arrow_r
   ref: anime_L_header_team_00_arrow_l
   ref: anime_team_shift_right
   ref: anime_team_shift_left
*/
void anime_team_shift_right(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9b160ULL || rel >= 0xa9b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9b370 size=640 callers=3 calls=8
   calls: sub_1353b30, sub_1354400, sub_14ab040, sub_14ac370, sub_67be60, sub_a97450, sub_e83430, sub_e83930
*/
void sub_a9b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9b370ULL || rel >= 0xa9b5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9b5f0 size=192 callers=1 calls=1
   calls: sub_14ab2b0
*/
void sub_a9b5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9b5f0ULL || rel >= 0xa9b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9b6b0 size=784 callers=1 calls=14
   calls: anime_info_out_2, pane_L_icon_poke_team__02d_T_poke_lv_00, poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_9, sub_14e6d50, sub_a9b370, sub_aac6b0, sub_ab0c80, sub_ab0fa0, sub_ab16d0
   ... +2 more
   ref: anime_team_shift_reset
   ref: poke_panel
   ref: anime_L_header_team_00_arrow_reset
*/
void anime_team_shift_reset(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9b6b0ULL || rel >= 0xa9b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9b9c0 size=96 callers=1 calls=1
   calls: sub_14ab2b0
*/
void sub_a9b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9b9c0ULL || rel >= 0xa9ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9ba20 size=224 callers=0 calls=5
   calls: sub_14e2410, sub_14e6510, sub_14e6d50, sub_e83e60, sub_e840a0
   ref: marking_panel
*/
void marking_panel_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9ba20ULL || rel >= 0xa9bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9bb00 size=352 callers=1 calls=10
   calls: poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_9, sub_14e1a00, sub_14e6d50, sub_a953d0, sub_a998c0, sub_e840a0, sub_eb7b00
   ref: poke_panel
*/
void poke_panel_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9bb00ULL || rel >= 0xa9bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9bc60 size=256 callers=8 calls=2
   calls: sub_14ea9a0, sub_eb7b00
*/
void sub_a9bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9bc60ULL || rel >= 0xa9bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9bd60 size=1888 callers=17 calls=14
   calls: poke_panel_13, sub_1354890, sub_14e6510, sub_14ea4f0, sub_14eaaf0, sub_5cfad0, sub_67d450, sub_a9bc60, sub_aac6b0, sub_aaf5d0, sub_ab1ad0, sub_e7eb10
   ... +2 more
   ref: poke_panel
*/
void poke_panel_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9bd60ULL || rel >= 0xa9c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9c4c0 size=1664 callers=17 calls=13
   calls: poke_panel_13, sub_1354890, sub_14e6510, sub_14ea4f0, sub_14eaaf0, sub_5cfad0, sub_67d450, sub_a9bc60, sub_aac6b0, sub_aaf5d0, sub_e7eb10, sub_e840a0
   ... +1 more
   ref: poke_panel
*/
void poke_panel_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9c4c0ULL || rel >= 0xa9cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9cb40 size=1328 callers=17 calls=13
   calls: poke_panel_13, sub_1354890, sub_14e6510, sub_14ea4f0, sub_14eaaf0, sub_5cfad0, sub_67d450, sub_a9bc60, sub_aac6b0, sub_aaf5d0, sub_e7eb10, sub_e840a0
   ... +1 more
   ref: poke_panel
*/
void poke_panel_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9cb40ULL || rel >= 0xa9d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9d070 size=1328 callers=17 calls=13
   calls: poke_panel_13, sub_1354890, sub_14e6510, sub_14ea4f0, sub_14eaaf0, sub_5cfad0, sub_67d450, sub_a9bc60, sub_aac6b0, sub_aaf5d0, sub_e7eb10, sub_e840a0
   ... +1 more
   ref: poke_panel
*/
void poke_panel_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9d070ULL || rel >= 0xa9d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9d5a0 size=512 callers=8 calls=7
   calls: sub_1354890, sub_135a1a0, sub_14e6d50, sub_767950, sub_aac6b0, sub_aaf5d0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9d5a0ULL || rel >= 0xa9d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9d7a0 size=624 callers=1 calls=5
   calls: sub_14ea4f0, sub_67d450, sub_a9bc60, sub_e7eb10, sub_eb7b00
*/
void sub_a9d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9d7a0ULL || rel >= 0xa9da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9da10 size=384 callers=0 calls=10
   calls: boxtray_panel__02d, button_box__02d__02d_2, sub_14e2410, sub_14e6510, sub_14e6d50, sub_1500c40, sub_a9db90, sub_a9dc90, sub_a9de40, sub_e83e60
*/
void sub_a9da10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9da10ULL || rel >= 0xa9db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9db90 size=256 callers=1 calls=5
   calls: poke_panel_38, sub_1502120, sub_5cfad0, sub_aa78d0, sub_aa7cd0
*/
void sub_a9db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9db90ULL || rel >= 0xa9dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9dc90 size=432 callers=1 calls=8
   calls: poke_panel_38, sub_1500c40, sub_1502120, sub_5cfad0, sub_aae740, sub_aaea10, sub_aaf5d0, sub_ab1ad0
*/
void sub_a9dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9dc90ULL || rel >= 0xa9de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9de40 size=176 callers=1 calls=9
   calls: anime_L_box_change_00_L_icon_box__02d__02d_catch, boxtray_panel__02d, sub_14e6d50, sub_1500c40, sub_1502120, sub_5cfad0, sub_a998c0, sub_aa76e0, sub_aa7810
*/
void sub_a9de40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9de40ULL || rel >= 0xa9def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9def0 size=1424 callers=0 calls=36
   calls: anime_L_spdefense_00, anime_info_out_2, poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_13, poke_panel_14, poke_panel_15, poke_panel_16, poke_panel_17, poke_panel_18, poke_panel_19
   ... +24 more
   ref: anime_info_out
   ref: anime_info_in
   ref: poke_panel
*/
void anime_info_out_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9def0ULL || rel >= 0xa9e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9e480 size=1296 callers=0 calls=26
   calls: anime_info_out_2, poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_13, poke_panel_22, poke_panel_23, poke_panel_24, poke_panel_4, poke_panel_9, sub_1354890, sub_14ab040
   ... +14 more
   ref: anime_info_out
   ref: anime_info_in
   ref: poke_panel
*/
void anime_info_out_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9e480ULL || rel >= 0xa9e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9e990 size=560 callers=0 calls=17
   calls: anime_info_out_2, poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_13, poke_panel_25, poke_panel_9, sub_14ab040, sub_14e2410, sub_14e6510, sub_14e6d50, sub_1500c40
   ... +5 more
   ref: anime_info_out
   ref: anime_info_in
   ref: poke_panel
*/
void anime_info_out_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9e990ULL || rel >= 0xa9ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9ebc0 size=576 callers=0 calls=17
   calls: anime_info_out_2, poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_13, poke_panel_26, poke_panel_9, sub_14ab040, sub_14e2410, sub_14e6510, sub_14e6d50, sub_1500c40
   ... +5 more
   ref: anime_info_out
   ref: anime_info_in
   ref: poke_panel
*/
void anime_info_out_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9ebc0ULL || rel >= 0xa9ee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9ee00 size=352 callers=2 calls=8
   calls: poke_panel_10, poke_panel_11, poke_panel_12, poke_panel_35, poke_panel_9, sub_14ab040, sub_14e6d50, sub_e840a0
   ref: poke_panel
*/
void poke_panel_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9ee00ULL || rel >= 0xa9ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9ef60 size=1504 callers=2 calls=13
   calls: anime_L_bg_box_list_01_bg_default, sub_13547b0, sub_1354890, sub_14e6550, sub_14e6d50, sub_a94050, sub_a99750, sub_aaf5f0, sub_aafb90, sub_aafbb0, sub_e83430, sub_e83850
   ... +1 more
   ref: poke_panel
*/
void poke_panel_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9ef60ULL || rel >= 0xa9f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9f540 size=480 callers=5 calls=10
   calls: anime_L_bg_box_list_01_bg_default, sub_13547b0, sub_1354890, sub_14e6550, sub_14e6d50, sub_a94050, sub_aaf5d0, sub_ab18f0, sub_ab1ad0, sub_e840a0
   ref: poke_panel
*/
void poke_panel_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9f540ULL || rel >= 0xa9f720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9f720 size=656 callers=2 calls=16
   calls: sub_1354890, sub_14ab040, sub_14e6d50, sub_1502120, sub_5cfad0, sub_762d70, sub_aa8470, sub_aac6b0, sub_aaf5d0, sub_aaf920, sub_aafb30, sub_aafb90
   ... +4 more
   ref: poke_panel
*/
void poke_panel_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9f720ULL || rel >= 0xa9f9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9f9b0 size=688 callers=1 calls=15
   calls: poke_panel_15, poke_panel_58, sub_1354890, sub_14e6d50, sub_1502120, sub_5cfad0, sub_762d70, sub_aac6b0, sub_aae290, sub_aaf5d0, sub_aafb90, sub_aafbb0
   ... +3 more
   ref: poke_panel
*/
void poke_panel_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9f9b0ULL || rel >= 0xa9fc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a9fc60 size=1248 callers=1 calls=13
   calls: poke_panel_38, poke_panel_39, sub_1313580, sub_1315270, sub_1354430, sub_1354890, sub_14e6d50, sub_762d70, sub_767950, sub_aa4440, sub_aac6b0, sub_aaf5d0
   ... +1 more
   ref: poke_panel
*/
void poke_panel_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9fc60ULL || rel >= 0xaa0140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

