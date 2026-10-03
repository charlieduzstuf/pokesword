/* main functions 013be8a0..013dd580 (167 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 013be8a0 size=64 callers=0 calls=1
   calls: sub_d20430
*/
void sub_13be8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be8a0ULL || rel >= 0x13be8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be8e0 size=64 callers=0 calls=1
   calls: sub_d20520
*/
void sub_13be8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be8e0ULL || rel >= 0x13be920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be920 size=64 callers=0 calls=1
   calls: sub_d205e0
*/
void sub_13be920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be920ULL || rel >= 0x13be960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be960 size=240 callers=0 calls=2
   calls: sub_59bee0, sub_6191c0
*/
void sub_13be960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be960ULL || rel >= 0x13bea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bea50 size=208 callers=0 calls=1
   calls: sub_59bee0
*/
void sub_13bea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bea50ULL || rel >= 0x13beb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013beb20 size=176 callers=0 calls=0
*/
void sub_13beb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13beb20ULL || rel >= 0x13bebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bebd0 size=48 callers=0 calls=1
   calls: sub_d2b000
*/
void sub_13bebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bebd0ULL || rel >= 0x13bec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bec00 size=32 callers=0 calls=1
   calls: sub_d634d0
*/
void sub_13bec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bec00ULL || rel >= 0x13bec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bec20 size=144 callers=0 calls=2
   calls: sub_13c7340, sub_66efd0
*/
void sub_13bec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bec20ULL || rel >= 0x13becb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013becb0 size=272 callers=0 calls=1
   calls: sub_13ca860
*/
void sub_13becb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13becb0ULL || rel >= 0x13bedc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bedc0 size=48 callers=0 calls=1
   calls: sub_d28300
*/
void sub_13bedc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bedc0ULL || rel >= 0x13bedf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bedf0 size=128 callers=0 calls=0
*/
void sub_13bedf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bedf0ULL || rel >= 0x13bee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bee70 size=144 callers=0 calls=0
*/
void sub_13bee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bee70ULL || rel >= 0x13bef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bef00 size=240 callers=0 calls=3
   calls: sub_d20850, sub_d29470, sub_d29850
*/
void sub_13bef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bef00ULL || rel >= 0x13beff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013beff0 size=144 callers=0 calls=3
   calls: sub_d20b90, sub_d29470, sub_d29850
*/
void sub_13beff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13beff0ULL || rel >= 0x13bf080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bf080 size=320 callers=0 calls=3
   calls: sub_13b1210, sub_5cfaf0, sub_d20d30
*/
void sub_13bf080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bf080ULL || rel >= 0x13bf1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bf1c0 size=160 callers=0 calls=3
   calls: sub_d20f20, sub_d29470, sub_d29850
*/
void sub_13bf1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bf1c0ULL || rel >= 0x13bf260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bf260 size=144 callers=0 calls=3
   calls: sub_d212e0, sub_d29470, sub_d29850
*/
void sub_13bf260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bf260ULL || rel >= 0x13bf2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bf2f0 size=144 callers=0 calls=3
   calls: sub_d21790, sub_d29470, sub_d29850
*/
void sub_13bf2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bf2f0ULL || rel >= 0x13bf380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bf380 size=592 callers=0 calls=5
   calls: sub_13ca950, sub_13cac30, sub_ca07d0, sub_d29470, sub_d29850
*/
void sub_13bf380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bf380ULL || rel >= 0x13bf5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bf5d0 size=272 callers=0 calls=3
   calls: sub_d20a90, sub_d29470, sub_d29850
   ref: %s_%02d
   ref: PathObject
*/
void PathObject(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bf5d0ULL || rel >= 0x13bf6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bf6e0 size=48 callers=0 calls=1
   calls: sub_d25930
*/
void sub_13bf6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bf6e0ULL || rel >= 0x13bf710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bf710 size=16 callers=0 calls=0
*/
void sub_13bf710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bf710ULL || rel >= 0x13bf720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bf720 size=256 callers=0 calls=2
   calls: sub_13b1210, sub_d21b60
*/
void sub_13bf720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bf720ULL || rel >= 0x13bf820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bf820 size=272 callers=0 calls=2
   calls: sub_13b1210, sub_d21e40
*/
void sub_13bf820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bf820ULL || rel >= 0x13bf930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bf930 size=272 callers=0 calls=2
   calls: sub_13b1210, sub_d22140
*/
void sub_13bf930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bf930ULL || rel >= 0x13bfa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bfa40 size=288 callers=0 calls=2
   calls: sub_13b1210, sub_d22440
*/
void sub_13bfa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bfa40ULL || rel >= 0x13bfb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bfb60 size=128 callers=0 calls=3
   calls: sub_13b1210, sub_5cfaf0, sub_d22740
*/
void sub_13bfb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bfb60ULL || rel >= 0x13bfbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bfbe0 size=128 callers=0 calls=3
   calls: sub_13b1210, sub_5cfaf0, sub_d22920
*/
void sub_13bfbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bfbe0ULL || rel >= 0x13bfc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bfc60 size=128 callers=0 calls=3
   calls: sub_13b1210, sub_5cfaf0, sub_d22b00
*/
void sub_13bfc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bfc60ULL || rel >= 0x13bfce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bfce0 size=128 callers=0 calls=3
   calls: sub_13b1210, sub_5cfaf0, sub_d22df0
*/
void sub_13bfce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bfce0ULL || rel >= 0x13bfd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bfd60 size=48 callers=0 calls=1
   calls: sub_d22fd0
*/
void sub_13bfd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bfd60ULL || rel >= 0x13bfd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bfd90 size=48 callers=0 calls=1
   calls: sub_d23530
*/
void sub_13bfd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bfd90ULL || rel >= 0x13bfdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bfdc0 size=496 callers=0 calls=5
   calls: sub_13a6920, sub_13b1210, sub_5cfaf0, sub_d237f0, sub_d23d00
*/
void sub_13bfdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bfdc0ULL || rel >= 0x13bffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bffb0 size=608 callers=0 calls=6
   calls: sub_13a6920, sub_59a250, sub_59a930, sub_5b9220, sub_607750, sub_b4c060
*/
void sub_13bffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bffb0ULL || rel >= 0x13c0210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c0210 size=240 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_13c0210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c0210ULL || rel >= 0x13c0300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c0300 size=4272 callers=0 calls=10
   calls: sub_13c74e0, sub_13cb5a0, sub_13cf530, sub_13cf5f0, sub_13cf830, sub_13cfa80, sub_5cfad0, sub_5cfaf0, sub_5de630, sub_d0c0
   ref: rl_wait
   ref: fi_wait05_loop
   ref: fi1001_dowsingwait01_loop
   ref: fi_common_event
   ref: fi_wait%02d_loop
   ref: CharacterMotion
   ref: fi_event_number
   ref: fi_event_trigger
*/
void fi_action_uniq_trigger_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c0300ULL || rel >= 0x13c13b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c13b0 size=400 callers=0 calls=3
   calls: sub_13b1210, sub_13c7730, sub_5cfaf0
   ref: PokemonMotion
*/
void PokemonMotion(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c13b0ULL || rel >= 0x13c1540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c1540 size=160 callers=0 calls=2
   calls: sub_13cba10, sub_d240d0
   ref: CharacterMotion
*/
void CharacterMotion(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c1540ULL || rel >= 0x13c15e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c15e0 size=560 callers=0 calls=4
   calls: sub_13a6920, sub_13cbc70, sub_d23d00, sub_d24480
   ref: PokemonMotion
*/
void PokemonMotion_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c15e0ULL || rel >= 0x13c1810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c1810 size=3344 callers=0 calls=10
   calls: sub_13b1210, sub_13c7980, sub_13c7af0, sub_13cbde0, sub_13cc2c0, sub_13cc580, sub_13d0a70, sub_13d0ad0, sub_5cfaf0, sub_5de630
*/
void sub_13c1810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c1810ULL || rel >= 0x13c2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c2520 size=144 callers=0 calls=3
   calls: sub_13b1210, sub_5cfaf0, sub_d23ed0
*/
void sub_13c2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c2520ULL || rel >= 0x13c25b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c25b0 size=272 callers=0 calls=4
   calls: sub_13b1210, sub_13c7d30, sub_13cea70, sub_5cfaf0
   ref: MonitorState
*/
void MonitorState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c25b0ULL || rel >= 0x13c26c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c26c0 size=144 callers=0 calls=3
   calls: sub_13b1210, sub_5cfaf0, sub_d248e0
*/
void sub_13c26c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c26c0ULL || rel >= 0x13c2750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c2750 size=400 callers=0 calls=6
   calls: sub_13b1210, sub_13b12d0, sub_13fa4d0, sub_5cfaf0, sub_b4c060, sub_b963f0
*/
void sub_13c2750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c2750ULL || rel >= 0x13c28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c28e0 size=432 callers=0 calls=6
   calls: sub_13b1210, sub_13b12d0, sub_13fa4d0, sub_5cfaf0, sub_b4c060, sub_b96090
*/
void sub_13c28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c28e0ULL || rel >= 0x13c2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c2a90 size=416 callers=0 calls=6
   calls: sub_13b1210, sub_13b12d0, sub_13fa4d0, sub_5cfaf0, sub_b4c060, sub_b959d0
*/
void sub_13c2a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c2a90ULL || rel >= 0x13c2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c2c30 size=416 callers=0 calls=6
   calls: sub_13b1210, sub_13b12d0, sub_13fa4d0, sub_5cfaf0, sub_b4c060, sub_b95d30
*/
void sub_13c2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c2c30ULL || rel >= 0x13c2dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c2dd0 size=832 callers=0 calls=7
   calls: sub_13b1210, sub_13b12d0, sub_13fa4d0, sub_59b250, sub_59b330, sub_5b9220, sub_607750
*/
void sub_13c2dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c2dd0ULL || rel >= 0x13c3110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c3110 size=608 callers=1 calls=3
   calls: sub_13c7f70, sub_13c87e0, sub_b4c060
   ref: LookAtWait
*/
void LookAtWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c3110ULL || rel >= 0x13c3370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c3370 size=624 callers=1 calls=3
   calls: sub_13c87e0, sub_13c88e0, sub_b4c060
   ref: LookAtWait
*/
void LookAtWait_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c3370ULL || rel >= 0x13c35e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c35e0 size=640 callers=1 calls=4
   calls: sub_13c7f70, sub_13c87e0, sub_13c9150, sub_b4c060
   ref: LookAtWait
*/
void LookAtWait_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c35e0ULL || rel >= 0x13c3860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c3860 size=656 callers=1 calls=4
   calls: sub_13c87e0, sub_13c88e0, sub_13c9150, sub_b4c060
   ref: LookAtWait
*/
void LookAtWait_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c3860ULL || rel >= 0x13c3af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c3af0 size=576 callers=1 calls=4
   calls: sub_13c7f70, sub_13c87e0, sub_13c9280, sub_b4c060
   ref: LookAtWait
*/
void LookAtWait_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c3af0ULL || rel >= 0x13c3d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c3d30 size=592 callers=1 calls=4
   calls: sub_13c87e0, sub_13c88e0, sub_13c9280, sub_b4c060
   ref: LookAtWait
*/
void LookAtWait_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c3d30ULL || rel >= 0x13c3f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c3f80 size=1152 callers=0 calls=7
   calls: sub_13a6920, sub_13c7f70, sub_13c87e0, sub_13c9150, sub_b4c060, sub_c75b20, sub_c75b40
   ref: LookAtWait
*/
void LookAtWait_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c3f80ULL || rel >= 0x13c4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4400 size=704 callers=1 calls=5
   calls: sub_13c87e0, sub_13cc840, sub_b4c060, sub_c9ecd0, sub_d27210
   ref: LookAtWait
*/
void LookAtWait_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4400ULL || rel >= 0x13c46c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c46c0 size=272 callers=0 calls=3
   calls: sub_13b2310, sub_13b2330, sub_13cbb80
*/
void sub_13c46c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c46c0ULL || rel >= 0x13c47d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c47d0 size=80 callers=1 calls=1
   calls: sub_d27340
*/
void sub_13c47d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c47d0ULL || rel >= 0x13c4820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4820 size=80 callers=1 calls=1
   calls: sub_d21110
*/
void sub_13c4820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4820ULL || rel >= 0x13c4870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4870 size=80 callers=1 calls=1
   calls: sub_d21580
*/
void sub_13c4870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4870ULL || rel >= 0x13c48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c48c0 size=112 callers=1 calls=1
   calls: sub_d21a30
*/
void sub_13c48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c48c0ULL || rel >= 0x13c4930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4930 size=48 callers=1 calls=1
   calls: sub_d280d0
*/
void sub_13c4930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4930ULL || rel >= 0x13c4960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4960 size=48 callers=0 calls=1
   calls: sub_d261a0
*/
void sub_13c4960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4960ULL || rel >= 0x13c4990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4990 size=48 callers=0 calls=1
   calls: sub_d265b0
*/
void sub_13c4990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4990ULL || rel >= 0x13c49c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c49c0 size=48 callers=0 calls=1
   calls: sub_d268d0
*/
void sub_13c49c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c49c0ULL || rel >= 0x13c49f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c49f0 size=48 callers=0 calls=1
   calls: sub_d26ce0
*/
void sub_13c49f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c49f0ULL || rel >= 0x13c4a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4a20 size=224 callers=0 calls=2
   calls: sub_13ca860, sub_d4fbb0
*/
void sub_13c4a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4a20ULL || rel >= 0x13c4b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4b00 size=80 callers=0 calls=1
   calls: sub_d2ae10
*/
void sub_13c4b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4b00ULL || rel >= 0x13c4b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4b50 size=32 callers=0 calls=1
   calls: sub_d2af10
*/
void sub_13c4b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4b50ULL || rel >= 0x13c4b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4b70 size=368 callers=0 calls=4
   calls: sub_13b1210, sub_13c9630, sub_5cfaf0, sub_d24bf0
   ref: bin/field/effect/particle/
*/
void unnamed_49(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4b70ULL || rel >= 0x13c4ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4ce0 size=320 callers=0 calls=4
   calls: sub_13b1210, sub_13c9630, sub_5cfaf0, sub_d253d0
   ref: bin/field/effect/particle/
*/
void unnamed_50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4ce0ULL || rel >= 0x13c4e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4e20 size=48 callers=0 calls=1
   calls: sub_d25790
*/
void sub_13c4e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4e20ULL || rel >= 0x13c4e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4e50 size=48 callers=0 calls=1
   calls: sub_d25860
*/
void sub_13c4e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4e50ULL || rel >= 0x13c4e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4e80 size=48 callers=0 calls=1
   calls: sub_d281f0
*/
void sub_13c4e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4e80ULL || rel >= 0x13c4eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4eb0 size=48 callers=0 calls=1
   calls: sub_d2a060
*/
void sub_13c4eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4eb0ULL || rel >= 0x13c4ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4ee0 size=240 callers=0 calls=2
   calls: sub_13ca860, sub_d4fb90
*/
void sub_13c4ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4ee0ULL || rel >= 0x13c4fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c4fd0 size=224 callers=0 calls=2
   calls: sub_13ca860, sub_d4fba0
*/
void sub_13c4fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c4fd0ULL || rel >= 0x13c50b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c50b0 size=304 callers=0 calls=1
   calls: sub_13a6920
*/
void sub_13c50b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c50b0ULL || rel >= 0x13c51e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c51e0 size=400 callers=0 calls=2
   calls: sub_13a6920, sub_13b1210
*/
void sub_13c51e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c51e0ULL || rel >= 0x13c5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c5370 size=560 callers=0 calls=3
   calls: sub_13ca860, sub_13cc970, sub_13cce40
*/
void sub_13c5370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c5370ULL || rel >= 0x13c55a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c55a0 size=32 callers=0 calls=2
   calls: sub_d25bd0, sub_d42e80
*/
void sub_13c55a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c55a0ULL || rel >= 0x13c55c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c55c0 size=48 callers=0 calls=2
   calls: sub_d25bd0, sub_d465d0
*/
void sub_13c55c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c55c0ULL || rel >= 0x13c55f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c55f0 size=64 callers=0 calls=2
   calls: sub_d25bd0, sub_d3e090
*/
void sub_13c55f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c55f0ULL || rel >= 0x13c5630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c5630 size=64 callers=0 calls=1
   calls: sub_d25bd0
*/
void sub_13c5630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c5630ULL || rel >= 0x13c5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c5670 size=48 callers=0 calls=1
   calls: sub_d29c40
*/
void sub_13c5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c5670ULL || rel >= 0x13c56a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c56a0 size=64 callers=0 calls=1
   calls: sub_d29c60
*/
void sub_13c56a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c56a0ULL || rel >= 0x13c56e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c56e0 size=48 callers=0 calls=1
   calls: sub_d29e50
*/
void sub_13c56e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c56e0ULL || rel >= 0x13c5710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c5710 size=64 callers=0 calls=1
   calls: sub_d29e70
*/
void sub_13c5710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c5710ULL || rel >= 0x13c5750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c5750 size=576 callers=0 calls=4
   calls: sub_13a6920, sub_614680, sub_96ccf0, sub_d63430
   ref: unit_obj_tent01_cloth01_01_01_bld
*/
void unit_obj_tent01_cloth01_01_01_bld_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c5750ULL || rel >= 0x13c5990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c5990 size=384 callers=0 calls=3
   calls: sub_13a6920, sub_13cc840, sub_c9e5f0
*/
void sub_13c5990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c5990ULL || rel >= 0x13c5b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c5b10 size=384 callers=0 calls=3
   calls: sub_13a6920, sub_13cc840, sub_c9e610
*/
void sub_13c5b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c5b10ULL || rel >= 0x13c5c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c5c90 size=320 callers=0 calls=3
   calls: sub_13cc840, sub_13cce40, sub_c9e610
*/
void sub_13c5c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c5c90ULL || rel >= 0x13c5dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c5dd0 size=464 callers=0 calls=3
   calls: fi_unique_event_2, sub_13a6920, sub_13cc840
   ref: fi_common_event
*/
void fi_common_event_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c5dd0ULL || rel >= 0x13c5fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c5fa0 size=752 callers=0 calls=5
   calls: sub_13b12d0, sub_13cb120, sub_13ccaa0, sub_13fa5c0, sub_d2a4f0
   ref: %s_%02d
   ref: PathObject
*/
void PathObject_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c5fa0ULL || rel >= 0x13c6290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c6290 size=768 callers=0 calls=5
   calls: sub_13b1210, sub_5cfaf0, sub_607750, sub_b48440, sub_d23320
*/
void sub_13c6290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c6290ULL || rel >= 0x13c6590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c6590 size=592 callers=0 calls=3
   calls: sub_607750, sub_b484d0, sub_d23320
*/
void sub_13c6590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c6590ULL || rel >= 0x13c67e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c67e0 size=48 callers=0 calls=1
   calls: sub_e38bb0
*/
void sub_13c67e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c67e0ULL || rel >= 0x13c6810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c6810 size=144 callers=0 calls=0
*/
void sub_13c6810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c6810ULL || rel >= 0x13c68a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c68a0 size=176 callers=0 calls=0
*/
void sub_13c68a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c68a0ULL || rel >= 0x13c6950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c6950 size=192 callers=0 calls=3
   calls: sub_13b2320, sub_13c96d0, sub_d25bd0
   ref: EasyTalkPlayer
*/
void EasyTalkPlayer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c6950ULL || rel >= 0x13c6a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c6a10 size=272 callers=0 calls=3
   calls: sub_13b2320, sub_13c9910, sub_d281f0
   ref: EasyTalkCharacter
*/
void EasyTalkCharacter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c6a10ULL || rel >= 0x13c6b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c6b20 size=1024 callers=0 calls=11
   calls: sub_13a6920, sub_13b2310, sub_13b2330, sub_13ca860, sub_13ccc60, sub_13ccd50, sub_13cce40, sub_13ccf30, sub_13cdb30, sub_13d25e0, sub_13d3300
*/
void sub_13c6b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c6b20ULL || rel >= 0x13c6f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c6f20 size=224 callers=0 calls=3
   calls: sub_13b2320, sub_13c9b50, sub_d281f0
   ref: EasyTalkPokemon
*/
void EasyTalkPokemon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c6f20ULL || rel >= 0x13c7000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c7000 size=608 callers=0 calls=5
   calls: sub_13b2310, sub_13b2330, sub_13ccc60, sub_13ccd50, sub_13ccf30
*/
void sub_13c7000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c7000ULL || rel >= 0x13c7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c7260 size=224 callers=0 calls=1
   calls: TOWER_TRAINER__d
*/
void sub_13c7260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c7260ULL || rel >= 0x13c7340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c7340 size=288 callers=2 calls=3
   calls: sub_13ca6e0, sub_c38350, sub_e9db40
*/
void sub_13c7340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c7340ULL || rel >= 0x13c7460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c7460 size=128 callers=1 calls=0
*/
void sub_13c7460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c7460ULL || rel >= 0x13c74e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c74e0 size=592 callers=1 calls=2
   calls: sub_13cb390, sub_13ceeb0
*/
void sub_13c74e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c74e0ULL || rel >= 0x13c7730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c7730 size=592 callers=1 calls=2
   calls: sub_13cb390, sub_13d0fe0
*/
void sub_13c7730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c7730ULL || rel >= 0x13c7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c7980 size=368 callers=1 calls=3
   calls: sub_13b2310, sub_13b2330, sub_13cbb80
*/
void sub_13c7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c7980ULL || rel >= 0x13c7af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c7af0 size=576 callers=1 calls=2
   calls: sub_13cb390, sub_13d04e0
*/
void sub_13c7af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c7af0ULL || rel >= 0x13c7d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c7d30 size=576 callers=1 calls=2
   calls: sub_13cb390, sub_13ce3f0
*/
void sub_13c7d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c7d30ULL || rel >= 0x13c7f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c7f70 size=2160 callers=4 calls=8
   calls: sub_13c9150, sub_13ca370, sub_967240, sub_b97b00, sub_d21a30, sub_d27000, sub_d27e60, sub_d28000
*/
void sub_13c7f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c7f70ULL || rel >= 0x13c87e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c87e0 size=256 callers=8 calls=4
   calls: sub_13b15e0, sub_13b17e0, sub_13b2260, sub_13b2320
*/
void sub_13c87e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c87e0ULL || rel >= 0x13c88e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c88e0 size=2160 callers=3 calls=8
   calls: sub_13c9150, sub_13ca370, sub_967240, sub_b97b00, sub_d21a30, sub_d27000, sub_d27e60, sub_d28000
*/
void sub_13c88e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c88e0ULL || rel >= 0x13c9150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c9150 size=304 callers=8 calls=1
   calls: sub_13ca060
*/
void sub_13c9150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c9150ULL || rel >= 0x13c9280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c9280 size=944 callers=2 calls=3
   calls: sub_13c9150, sub_972c70, sub_b4c060
*/
void sub_13c9280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c9280ULL || rel >= 0x13c9630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c9630 size=160 callers=2 calls=1
   calls: sub_d0c0
*/
void sub_13c9630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c9630ULL || rel >= 0x13c96d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c96d0 size=576 callers=1 calls=2
   calls: fi_npc_type, sub_13cb390
*/
void sub_13c96d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c96d0ULL || rel >= 0x13c9910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c9910 size=576 callers=1 calls=2
   calls: fi_npc_type_2, sub_13cb390
*/
void sub_13c9910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c9910ULL || rel >= 0x13c9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c9b50 size=576 callers=1 calls=2
   calls: app_state_2, sub_13cb390
*/
void sub_13c9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c9b50ULL || rel >= 0x13c9d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c9d90 size=192 callers=1 calls=1
   calls: sub_13c9e50
*/
void sub_13c9d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c9d90ULL || rel >= 0x13c9e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013c9e50 size=528 callers=42 calls=0
*/
void sub_13c9e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c9e50ULL || rel >= 0x13ca060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ca060 size=784 callers=4 calls=7
   calls: sub_59b970, sub_607750, sub_612f70, sub_97e1a0, sub_b33800, sub_b33c60, sub_b48260
*/
void sub_13ca060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ca060ULL || rel >= 0x13ca370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ca370 size=336 callers=4 calls=2
   calls: sub_b97320, sub_b974f0
*/
void sub_13ca370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ca370ULL || rel >= 0x13ca4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ca4c0 size=240 callers=122 calls=0
*/
void sub_13ca4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ca4c0ULL || rel >= 0x13ca5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ca5b0 size=16 callers=0 calls=0
*/
void sub_13ca5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ca5b0ULL || rel >= 0x13ca5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ca5c0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_13ca5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ca5c0ULL || rel >= 0x13ca600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ca600 size=32 callers=0 calls=0
*/
void sub_13ca600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ca600ULL || rel >= 0x13ca620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ca620 size=16 callers=0 calls=0
*/
void sub_13ca620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ca620ULL || rel >= 0x13ca630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ca630 size=16 callers=0 calls=0
*/
void sub_13ca630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ca630ULL || rel >= 0x13ca640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ca640 size=144 callers=0 calls=1
   calls: sub_13fa0c0
*/
void sub_13ca640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ca640ULL || rel >= 0x13ca6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ca6d0 size=16 callers=0 calls=0
*/
void sub_13ca6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ca6d0ULL || rel >= 0x13ca6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ca6e0 size=384 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_13ca6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ca6e0ULL || rel >= 0x13ca860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ca860 size=240 callers=32 calls=1
   calls: sub_13a6920
*/
void sub_13ca860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ca860ULL || rel >= 0x13ca950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ca950 size=736 callers=36 calls=2
   calls: sub_13cad10, sub_13caf80
*/
void sub_13ca950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ca950ULL || rel >= 0x13cac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cac30 size=224 callers=3 calls=1
   calls: sub_ca0450
*/
void sub_13cac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cac30ULL || rel >= 0x13cad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cad10 size=624 callers=1 calls=0
*/
void sub_13cad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cad10ULL || rel >= 0x13caf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013caf80 size=416 callers=2 calls=0
*/
void sub_13caf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13caf80ULL || rel >= 0x13cb120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cb120 size=384 callers=1 calls=1
   calls: sub_13cb2a0
*/
void sub_13cb120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cb120ULL || rel >= 0x13cb2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cb2a0 size=240 callers=5 calls=1
   calls: sub_967240
*/
void sub_13cb2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cb2a0ULL || rel >= 0x13cb390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cb390 size=528 callers=14 calls=0
*/
void sub_13cb390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cb390ULL || rel >= 0x13cb5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cb5a0 size=368 callers=4 calls=1
   calls: sub_65d700
*/
void sub_13cb5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cb5a0ULL || rel >= 0x13cb710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cb710 size=192 callers=0 calls=0
*/
void sub_13cb710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cb710ULL || rel >= 0x13cb7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cb7d0 size=192 callers=0 calls=0
*/
void sub_13cb7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cb7d0ULL || rel >= 0x13cb890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cb890 size=192 callers=0 calls=0
*/
void sub_13cb890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cb890ULL || rel >= 0x13cb950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cb950 size=192 callers=0 calls=0
*/
void sub_13cb950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cb950ULL || rel >= 0x13cba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cba10 size=368 callers=1 calls=3
   calls: sub_13b2310, sub_13b2330, sub_13cbb80
*/
void sub_13cba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cba10ULL || rel >= 0x13cbb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cbb80 size=240 callers=11 calls=0
*/
void sub_13cbb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cbb80ULL || rel >= 0x13cbc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cbc70 size=368 callers=1 calls=3
   calls: sub_13b2310, sub_13b2330, sub_13cbb80
*/
void sub_13cbc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cbc70ULL || rel >= 0x13cbde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cbde0 size=512 callers=1 calls=1
   calls: sub_13cbfe0
*/
void sub_13cbde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cbde0ULL || rel >= 0x13cbfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cbfe0 size=304 callers=2 calls=1
   calls: sub_65d700
*/
void sub_13cbfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cbfe0ULL || rel >= 0x13cc110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cc110 size=384 callers=0 calls=0
*/
void sub_13cc110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cc110ULL || rel >= 0x13cc290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cc290 size=16 callers=0 calls=0
*/
void sub_13cc290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cc290ULL || rel >= 0x13cc2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cc2a0 size=16 callers=0 calls=0
*/
void sub_13cc2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cc2a0ULL || rel >= 0x13cc2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cc2b0 size=16 callers=0 calls=0
*/
void sub_13cc2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cc2b0ULL || rel >= 0x13cc2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cc2c0 size=704 callers=3 calls=0
*/
void sub_13cc2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cc2c0ULL || rel >= 0x13cc580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cc580 size=704 callers=1 calls=0
*/
void sub_13cc580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cc580ULL || rel >= 0x13cc840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cc840 size=304 callers=26 calls=0
*/
void sub_13cc840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cc840ULL || rel >= 0x13cc970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cc970 size=304 callers=1 calls=1
   calls: sub_967240
*/
void sub_13cc970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cc970ULL || rel >= 0x13ccaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ccaa0 size=448 callers=2 calls=0
*/
void sub_13ccaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ccaa0ULL || rel >= 0x13ccc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ccc60 size=240 callers=3 calls=1
   calls: sub_13cbb80
*/
void sub_13ccc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ccc60ULL || rel >= 0x13ccd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ccd50 size=240 callers=2 calls=1
   calls: sub_13cbb80
*/
void sub_13ccd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ccd50ULL || rel >= 0x13cce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cce40 size=240 callers=20 calls=1
   calls: sub_13a6920
*/
void sub_13cce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cce40ULL || rel >= 0x13ccf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ccf30 size=240 callers=3 calls=1
   calls: sub_13cbb80
*/
void sub_13ccf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ccf30ULL || rel >= 0x13cd020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cd020 size=16 callers=0 calls=0
*/
void sub_13cd020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cd020ULL || rel >= 0x13cd030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cd030 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_13cd030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cd030ULL || rel >= 0x13cd070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cd070 size=32 callers=0 calls=0
*/
void sub_13cd070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cd070ULL || rel >= 0x13cd090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cd090 size=16 callers=0 calls=0
*/
void sub_13cd090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cd090ULL || rel >= 0x13cd0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cd0a0 size=16 callers=0 calls=0
*/
void sub_13cd0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cd0a0ULL || rel >= 0x13cd0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cd0b0 size=32 callers=0 calls=0
*/
void sub_13cd0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cd0b0ULL || rel >= 0x13cd0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cd0d0 size=1200 callers=1 calls=8
   calls: sub_13b1ba0, sub_13b2120, sub_13ce3d0, sub_59a930, sub_59b330, sub_5b9220, sub_5cfad0, sub_b44bb0
   ref: app_state
*/
void app_state_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cd0d0ULL || rel >= 0x13cd580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cd580 size=1456 callers=0 calls=8
   calls: sub_59a930, sub_59b2f0, sub_59b330, sub_5b9220, sub_5cfad0, sub_d212e0, sub_d25930, sub_d4fbb0
   ref: Top/camp_base_default/camp_battle_default/ba20_buturi01
   ref: to_ba21_tokusyu01
   ref: to_kw32_happyB01
   ref: to_ba20_buturi01
   ref: app_state
*/
void to_ba21_tokusyu01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cd580ULL || rel >= 0x13cdb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cdb30 size=32 callers=1 calls=0
*/
void sub_13cdb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cdb30ULL || rel >= 0x13cdb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cdb50 size=256 callers=0 calls=0
*/
void sub_13cdb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cdb50ULL || rel >= 0x13cdc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cdc50 size=256 callers=0 calls=0
*/
void sub_13cdc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cdc50ULL || rel >= 0x13cdd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cdd50 size=112 callers=0 calls=1
   calls: sub_13ce2a0
*/
void sub_13cdd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cdd50ULL || rel >= 0x13cddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cddc0 size=256 callers=0 calls=0
*/
void sub_13cddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cddc0ULL || rel >= 0x13cdec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cdec0 size=256 callers=0 calls=0
*/
void sub_13cdec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cdec0ULL || rel >= 0x13cdfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cdfc0 size=112 callers=0 calls=1
   calls: sub_13ce2a0
*/
void sub_13cdfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cdfc0ULL || rel >= 0x13ce030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ce030 size=112 callers=0 calls=1
   calls: sub_13ce2a0
*/
void sub_13ce030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ce030ULL || rel >= 0x13ce0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ce0a0 size=256 callers=0 calls=0
*/
void sub_13ce0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ce0a0ULL || rel >= 0x13ce1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ce1a0 size=256 callers=0 calls=0
*/
void sub_13ce1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ce1a0ULL || rel >= 0x13ce2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ce2a0 size=304 callers=9 calls=0
*/
void sub_13ce2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ce2a0ULL || rel >= 0x13ce3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ce3d0 size=16 callers=4 calls=0
*/
void sub_13ce3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ce3d0ULL || rel >= 0x13ce3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ce3e0 size=16 callers=1 calls=0
*/
void sub_13ce3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ce3e0ULL || rel >= 0x13ce3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ce3f0 size=656 callers=1 calls=6
   calls: sub_13b2120, sub_13b2320, sub_13cec50, sub_b4a5e0, sub_d231e0, sub_d24480
*/
void sub_13ce3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ce3f0ULL || rel >= 0x13ce680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ce680 size=544 callers=0 calls=2
   calls: sub_b4a5e0, sub_d231e0
*/
void sub_13ce680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ce680ULL || rel >= 0x13ce8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ce8a0 size=16 callers=0 calls=0
*/
void sub_13ce8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ce8a0ULL || rel >= 0x13ce8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ce8b0 size=16 callers=0 calls=0
*/
void sub_13ce8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ce8b0ULL || rel >= 0x13ce8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ce8c0 size=16 callers=0 calls=0
*/
void sub_13ce8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ce8c0ULL || rel >= 0x13ce8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ce8d0 size=16 callers=0 calls=0
*/
void sub_13ce8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ce8d0ULL || rel >= 0x13ce8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ce8e0 size=16 callers=0 calls=0
*/
void sub_13ce8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ce8e0ULL || rel >= 0x13ce8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ce8f0 size=384 callers=0 calls=4
   calls: sub_b33a30, sub_b4c060, sub_d23150, sub_d237f0
*/
void sub_13ce8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ce8f0ULL || rel >= 0x13cea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cea70 size=128 callers=1 calls=0
*/
void sub_13cea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cea70ULL || rel >= 0x13ceaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ceaf0 size=16 callers=0 calls=0
*/
void sub_13ceaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ceaf0ULL || rel >= 0x13ceb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ceb00 size=16 callers=0 calls=0
*/
void sub_13ceb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ceb00ULL || rel >= 0x13ceb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ceb10 size=16 callers=0 calls=0
*/
void sub_13ceb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ceb10ULL || rel >= 0x13ceb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ceb20 size=304 callers=0 calls=0
*/
void sub_13ceb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ceb20ULL || rel >= 0x13cec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cec50 size=384 callers=5 calls=1
   calls: sub_967240
*/
void sub_13cec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cec50ULL || rel >= 0x13cedd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cedd0 size=176 callers=0 calls=3
   calls: sub_5b90f0, sub_5b9220, sub_5b95e0
*/
void sub_13cedd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cedd0ULL || rel >= 0x13cee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cee80 size=16 callers=0 calls=0
*/
void sub_13cee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cee80ULL || rel >= 0x13cee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cee90 size=16 callers=0 calls=0
*/
void sub_13cee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cee90ULL || rel >= 0x13ceea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ceea0 size=16 callers=0 calls=0
*/
void sub_13ceea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ceea0ULL || rel >= 0x13ceeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ceeb0 size=304 callers=1 calls=4
   calls: sub_13b2120, sub_13b2320, sub_13cec50, sub_65d700
*/
void sub_13ceeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ceeb0ULL || rel >= 0x13cefe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cefe0 size=416 callers=0 calls=5
   calls: sub_13cf180, sub_13cf320, sub_d23150, sub_d237f0, sub_d23d00
*/
void sub_13cefe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cefe0ULL || rel >= 0x13cf180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cf180 size=416 callers=1 calls=6
   calls: sub_13b2330, sub_13cbb80, sub_13ccc60, sub_13ccf30, sub_13faae0, sub_13fab20
*/
void sub_13cf180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cf180ULL || rel >= 0x13cf320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cf320 size=528 callers=1 calls=5
   calls: sub_d21d40, sub_d22030, sub_d22330, sub_d22630, sub_d22ce0
*/
void sub_13cf320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cf320ULL || rel >= 0x13cf530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cf530 size=192 callers=1 calls=0
*/
void sub_13cf530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cf530ULL || rel >= 0x13cf5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cf5f0 size=576 callers=4 calls=3
   calls: sub_13cb5a0, sub_13cffe0, sub_13d0200
*/
void sub_13cf5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cf5f0ULL || rel >= 0x13cf830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cf830 size=592 callers=1 calls=3
   calls: sub_13cb5a0, sub_13cffe0, sub_13d0200
*/
void sub_13cf830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cf830ULL || rel >= 0x13cfa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cfa80 size=592 callers=7 calls=3
   calls: sub_13cb5a0, sub_13cffe0, sub_13d0200
*/
void sub_13cfa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cfa80ULL || rel >= 0x13cfcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cfcd0 size=368 callers=0 calls=0
*/
void sub_13cfcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cfcd0ULL || rel >= 0x13cfe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cfe40 size=16 callers=0 calls=0
*/
void sub_13cfe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cfe40ULL || rel >= 0x13cfe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cfe50 size=112 callers=0 calls=1
   calls: sub_13cbb80
*/
void sub_13cfe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cfe50ULL || rel >= 0x13cfec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cfec0 size=16 callers=0 calls=0
*/
void sub_13cfec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cfec0ULL || rel >= 0x13cfed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cfed0 size=16 callers=0 calls=0
*/
void sub_13cfed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cfed0ULL || rel >= 0x13cfee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cfee0 size=112 callers=0 calls=1
   calls: sub_13cbb80
*/
void sub_13cfee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cfee0ULL || rel >= 0x13cff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cff50 size=112 callers=0 calls=1
   calls: sub_13cbb80
*/
void sub_13cff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cff50ULL || rel >= 0x13cffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cffc0 size=16 callers=0 calls=0
*/
void sub_13cffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cffc0ULL || rel >= 0x13cffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cffd0 size=16 callers=0 calls=0
*/
void sub_13cffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cffd0ULL || rel >= 0x13cffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013cffe0 size=544 callers=3 calls=0
*/
void sub_13cffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cffe0ULL || rel >= 0x13d0200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0200 size=608 callers=3 calls=0
*/
void sub_13d0200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0200ULL || rel >= 0x13d0460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0460 size=128 callers=0 calls=0
*/
void sub_13d0460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0460ULL || rel >= 0x13d04e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d04e0 size=304 callers=1 calls=3
   calls: sub_13b2120, sub_13b2320, sub_13d0ec0
*/
void sub_13d04e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d04e0ULL || rel >= 0x13d0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0610 size=1120 callers=0 calls=4
   calls: sub_13d0ec0, sub_d22030, sub_d22330, sub_d237f0
*/
void sub_13d0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0610ULL || rel >= 0x13d0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0a70 size=96 callers=1 calls=0
*/
void sub_13d0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0a70ULL || rel >= 0x13d0ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0ad0 size=32 callers=1 calls=0
*/
void sub_13d0ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0ad0ULL || rel >= 0x13d0af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0af0 size=272 callers=0 calls=2
   calls: sub_d22030, sub_d22330
*/
void sub_13d0af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0af0ULL || rel >= 0x13d0c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0c00 size=272 callers=0 calls=0
*/
void sub_13d0c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0c00ULL || rel >= 0x13d0d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0d10 size=16 callers=0 calls=0
*/
void sub_13d0d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0d10ULL || rel >= 0x13d0d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0d20 size=16 callers=0 calls=0
*/
void sub_13d0d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0d20ULL || rel >= 0x13d0d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0d30 size=16 callers=0 calls=0
*/
void sub_13d0d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0d30ULL || rel >= 0x13d0d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0d40 size=16 callers=0 calls=0
*/
void sub_13d0d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0d40ULL || rel >= 0x13d0d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0d50 size=16 callers=0 calls=0
*/
void sub_13d0d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0d50ULL || rel >= 0x13d0d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0d60 size=16 callers=0 calls=0
*/
void sub_13d0d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0d60ULL || rel >= 0x13d0d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0d70 size=16 callers=0 calls=0
*/
void sub_13d0d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0d70ULL || rel >= 0x13d0d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0d80 size=16 callers=0 calls=0
*/
void sub_13d0d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0d80ULL || rel >= 0x13d0d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0d90 size=304 callers=0 calls=0
*/
void sub_13d0d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0d90ULL || rel >= 0x13d0ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0ec0 size=288 callers=5 calls=1
   calls: sub_967240
*/
void sub_13d0ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0ec0ULL || rel >= 0x13d0fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d0fe0 size=304 callers=1 calls=3
   calls: sub_13b2120, sub_13b2320, sub_13cec50
*/
void sub_13d0fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d0fe0ULL || rel >= 0x13d1110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d1110 size=1216 callers=0 calls=6
   calls: sub_13d15d0, sub_5cfad0, sub_d22330, sub_d22ce0, sub_d237f0, sub_d23d00
   ref: cm10_kwwait_fiwait01
   ref: kw01_wait01
   ref: cm10_bawait_fiwait01
   ref: app_state
   ref: ba10_waitA01
   ref: cm10_kwwait_bawait01
   ref: fi01_wait01
   ref: cm10_fiwait_bawait01
*/
void cm10_kwwait_fiwait01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d1110ULL || rel >= 0x13d15d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d15d0 size=288 callers=2 calls=3
   calls: sub_d21d40, sub_d22030, sub_d22330
*/
void sub_13d15d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d15d0ULL || rel >= 0x13d16f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d16f0 size=272 callers=0 calls=0
*/
void sub_13d16f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d16f0ULL || rel >= 0x13d1800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d1800 size=16 callers=0 calls=0
*/
void sub_13d1800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d1800ULL || rel >= 0x13d1810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d1810 size=16 callers=0 calls=0
*/
void sub_13d1810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d1810ULL || rel >= 0x13d1820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d1820 size=16 callers=0 calls=0
*/
void sub_13d1820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d1820ULL || rel >= 0x13d1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d1830 size=16 callers=0 calls=0
*/
void sub_13d1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d1830ULL || rel >= 0x13d1840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d1840 size=16 callers=0 calls=0
*/
void sub_13d1840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d1840ULL || rel >= 0x13d1850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d1850 size=16 callers=0 calls=0
*/
void sub_13d1850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d1850ULL || rel >= 0x13d1860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d1860 size=16 callers=0 calls=0
*/
void sub_13d1860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d1860ULL || rel >= 0x13d1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d1870 size=16 callers=0 calls=0
*/
void sub_13d1870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d1870ULL || rel >= 0x13d1880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d1880 size=304 callers=0 calls=0
*/
void sub_13d1880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d1880ULL || rel >= 0x13d19b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d19b0 size=800 callers=1 calls=7
   calls: EffOverHead01_6, sub_13a6920, sub_13b2120, sub_13ce3d0, sub_d22ce0, sub_d25bd0, sub_d29160
   ref: fi_npc_type
*/
void fi_npc_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d19b0ULL || rel >= 0x13d1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d1cd0 size=512 callers=1 calls=7
   calls: sub_13a6920, sub_13cce40, sub_59bee0, sub_612ef0, sub_612f70, sub_d25bd0, sub_d281f0
   ref: EffOverHead01
   ref: loc_eff_head
*/
void EffOverHead01_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d1cd0ULL || rel >= 0x13d1ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d1ed0 size=1808 callers=0 calls=13
   calls: fi1001_dowsingwait01_loop, sub_13a6920, sub_13ca950, sub_13cac30, sub_13ce3d0, sub_13d28e0, sub_ca07d0, sub_d1ffe0, sub_d212e0, sub_d237f0, sub_d23d00, sub_d29580
   ... +1 more
   ref: fi_halfsit01
*/
void fi_halfsit01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d1ed0ULL || rel >= 0x13d25e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d25e0 size=80 callers=1 calls=0
*/
void sub_13d25e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d25e0ULL || rel >= 0x13d2630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d2630 size=272 callers=0 calls=0
*/
void sub_13d2630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d2630ULL || rel >= 0x13d2740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d2740 size=16 callers=0 calls=0
*/
void sub_13d2740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d2740ULL || rel >= 0x13d2750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d2750 size=112 callers=0 calls=1
   calls: sub_13ce2a0
*/
void sub_13d2750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d2750ULL || rel >= 0x13d27c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d27c0 size=16 callers=0 calls=0
*/
void sub_13d27c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d27c0ULL || rel >= 0x13d27d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d27d0 size=16 callers=0 calls=0
*/
void sub_13d27d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d27d0ULL || rel >= 0x13d27e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d27e0 size=112 callers=0 calls=1
   calls: sub_13ce2a0
*/
void sub_13d27e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d27e0ULL || rel >= 0x13d2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d2850 size=112 callers=0 calls=1
   calls: sub_13ce2a0
*/
void sub_13d2850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d2850ULL || rel >= 0x13d28c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d28c0 size=16 callers=0 calls=0
*/
void sub_13d28c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d28c0ULL || rel >= 0x13d28d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d28d0 size=16 callers=0 calls=0
*/
void sub_13d28d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d28d0ULL || rel >= 0x13d28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d28e0 size=304 callers=3 calls=0
*/
void sub_13d28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d28e0ULL || rel >= 0x13d2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d2a10 size=1312 callers=1 calls=10
   calls: sub_13b2120, sub_13ce3d0, sub_13ce3e0, sub_13d0ec0, sub_9733f0, sub_d1fb50, sub_d1ffe0, sub_d201e0, sub_d22ce0, sub_d28e50
   ref: fi_npc_type
*/
void fi_npc_type_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d2a10ULL || rel >= 0x13d2f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d2f30 size=528 callers=0 calls=5
   calls: fi1001_dowsingwait01_loop, fi_wait_type, sub_d212e0, sub_d22330, sub_d29580
   ref: fi_common_event
*/
void fi_common_event_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d2f30ULL || rel >= 0x13d3140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3140 size=448 callers=1 calls=4
   calls: sub_13cc840, sub_13d0ec0, sub_c9ece0, sub_d22ce0
   ref: fi_wait_type
*/
void fi_wait_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3140ULL || rel >= 0x13d3300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3300 size=32 callers=1 calls=0
*/
void sub_13d3300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3300ULL || rel >= 0x13d3320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3320 size=272 callers=0 calls=0
*/
void sub_13d3320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3320ULL || rel >= 0x13d3430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3430 size=16 callers=0 calls=0
*/
void sub_13d3430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3430ULL || rel >= 0x13d3440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3440 size=112 callers=0 calls=1
   calls: sub_13ce2a0
*/
void sub_13d3440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3440ULL || rel >= 0x13d34b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d34b0 size=16 callers=0 calls=0
*/
void sub_13d34b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d34b0ULL || rel >= 0x13d34c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d34c0 size=16 callers=0 calls=0
*/
void sub_13d34c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d34c0ULL || rel >= 0x13d34d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d34d0 size=112 callers=0 calls=1
   calls: sub_13ce2a0
*/
void sub_13d34d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d34d0ULL || rel >= 0x13d3540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3540 size=112 callers=0 calls=1
   calls: sub_13ce2a0
*/
void sub_13d3540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3540ULL || rel >= 0x13d35b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d35b0 size=16 callers=0 calls=0
*/
void sub_13d35b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d35b0ULL || rel >= 0x13d35c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d35c0 size=16 callers=0 calls=0
*/
void sub_13d35c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d35c0ULL || rel >= 0x13d35d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d35d0 size=144 callers=2 calls=2
   calls: sub_5e2350, sub_65d700
*/
void sub_13d35d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d35d0ULL || rel >= 0x13d3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3660 size=464 callers=0 calls=0
*/
void sub_13d3660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3660ULL || rel >= 0x13d3830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3830 size=304 callers=1 calls=2
   calls: sub_13d4010, sub_d0c0
*/
void sub_13d3830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3830ULL || rel >= 0x13d3960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3960 size=96 callers=2 calls=0
*/
void sub_13d3960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3960ULL || rel >= 0x13d39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d39c0 size=224 callers=0 calls=0
*/
void sub_13d39c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d39c0ULL || rel >= 0x13d3aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3aa0 size=224 callers=0 calls=0
*/
void sub_13d3aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3aa0ULL || rel >= 0x13d3b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3b80 size=240 callers=0 calls=0
*/
void sub_13d3b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3b80ULL || rel >= 0x13d3c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3c70 size=224 callers=0 calls=0
*/
void sub_13d3c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3c70ULL || rel >= 0x13d3d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3d50 size=224 callers=0 calls=0
*/
void sub_13d3d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3d50ULL || rel >= 0x13d3e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3e30 size=16 callers=0 calls=0
*/
void sub_13d3e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3e30ULL || rel >= 0x13d3e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3e40 size=16 callers=0 calls=0
*/
void sub_13d3e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3e40ULL || rel >= 0x13d3e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3e50 size=224 callers=0 calls=0
*/
void sub_13d3e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3e50ULL || rel >= 0x13d3f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d3f30 size=224 callers=0 calls=0
*/
void sub_13d3f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d3f30ULL || rel >= 0x13d4010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d4010 size=592 callers=1 calls=0
*/
void sub_13d4010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d4010ULL || rel >= 0x13d4260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d4260 size=2624 callers=1 calls=1
   calls: sub_13a7fe0
   ref: Message/ChrMsg
   ref: Message/MsgWinWait
   ref: Message/MsgClose
   ref: Message/WordSetMonsNameRomVersion
   ref: Message/WordSetMonsName
   ref: Message/MsgKeyWait
   ref: Message/ChrMsgRomVersion
   ref: Message/YesNoWin
*/
void YesNoWin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d4260ULL || rel >= 0x13d4ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d4ca0 size=512 callers=0 calls=5
   calls: IsUseZoneMessage, sub_66c4e0, sub_66c570, sub_680c80, sub_680f00
   ref: MessageLabel
*/
void MessageLabel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d4ca0ULL || rel >= 0x13d4ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d4ea0 size=16 callers=0 calls=0
*/
void sub_13d4ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d4ea0ULL || rel >= 0x13d4eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d4eb0 size=16 callers=0 calls=0
*/
void sub_13d4eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d4eb0ULL || rel >= 0x13d4ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d4ec0 size=16 callers=0 calls=0
*/
void sub_13d4ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d4ec0ULL || rel >= 0x13d4ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d4ed0 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_MsgWin
*/
void CS_MsgWin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d4ed0ULL || rel >= 0x13d4f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d4f50 size=16 callers=0 calls=0
*/
void sub_13d4f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d4f50ULL || rel >= 0x13d4f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d4f60 size=16 callers=0 calls=0
*/
void sub_13d4f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d4f60ULL || rel >= 0x13d4f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d4f70 size=16 callers=0 calls=0
*/
void sub_13d4f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d4f70ULL || rel >= 0x13d4f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d4f80 size=864 callers=0 calls=7
   calls: IsUseZoneMessage, sub_13a8100, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680f00
   ref: CharaID
   ref: MessageLabel
   ref: SpeakType
*/
void MessageLabel_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d4f80ULL || rel >= 0x13d52e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d52e0 size=16 callers=0 calls=0
*/
void sub_13d52e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d52e0ULL || rel >= 0x13d52f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d52f0 size=16 callers=0 calls=0
*/
void sub_13d52f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d52f0ULL || rel >= 0x13d5300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5300 size=16 callers=0 calls=0
*/
void sub_13d5300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5300ULL || rel >= 0x13d5310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5310 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_ChrMsg
*/
void CS_ChrMsg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5310ULL || rel >= 0x13d5390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5390 size=16 callers=0 calls=0
*/
void sub_13d5390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5390ULL || rel >= 0x13d53a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d53a0 size=16 callers=0 calls=0
*/
void sub_13d53a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d53a0ULL || rel >= 0x13d53b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d53b0 size=16 callers=0 calls=0
*/
void sub_13d53b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d53b0ULL || rel >= 0x13d53c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d53c0 size=1184 callers=0 calls=7
   calls: IsUseZoneMessage, sub_13a8100, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680f00
   ref: CharaID_v1
   ref: MessageLabel_v1
   ref: CharaID_v2
   ref: MessageLabel_v2
   ref: SpeakType
*/
void MessageLabel_v2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d53c0ULL || rel >= 0x13d5860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5860 size=16 callers=0 calls=0
*/
void sub_13d5860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5860ULL || rel >= 0x13d5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5870 size=16 callers=0 calls=0
*/
void sub_13d5870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5870ULL || rel >= 0x13d5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5880 size=16 callers=0 calls=0
*/
void sub_13d5880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5880ULL || rel >= 0x13d5890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5890 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_ChrMsgRomVersion
*/
void CS_ChrMsgRomVersion(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5890ULL || rel >= 0x13d5910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5910 size=16 callers=0 calls=0
*/
void sub_13d5910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5910ULL || rel >= 0x13d5920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5920 size=16 callers=0 calls=0
*/
void sub_13d5920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5920ULL || rel >= 0x13d5930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5930 size=16 callers=0 calls=0
*/
void sub_13d5930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5930ULL || rel >= 0x13d5940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5940 size=1008 callers=0 calls=7
   calls: IsUseZoneMessage, sub_13a8100, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680f00
   ref: CharaID
   ref: MessageLabel_Female
   ref: SpeakType
   ref: MessageLabel_Male
*/
void MessageLabel_Female(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5940ULL || rel >= 0x13d5d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5d30 size=16 callers=0 calls=0
*/
void sub_13d5d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5d30ULL || rel >= 0x13d5d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5d40 size=16 callers=0 calls=0
*/
void sub_13d5d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5d40ULL || rel >= 0x13d5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5d50 size=16 callers=0 calls=0
*/
void sub_13d5d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5d50ULL || rel >= 0x13d5d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5d60 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_ChrMsgMF
*/
void CS_ChrMsgMF(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5d60ULL || rel >= 0x13d5de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5de0 size=16 callers=0 calls=0
*/
void sub_13d5de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5de0ULL || rel >= 0x13d5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5df0 size=16 callers=0 calls=0
*/
void sub_13d5df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5df0ULL || rel >= 0x13d5e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5e00 size=16 callers=0 calls=0
*/
void sub_13d5e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5e00ULL || rel >= 0x13d5e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5e10 size=368 callers=0 calls=5
   calls: IsUseZoneMessage, sub_66c4e0, sub_66c570, sub_680c80, sub_680f00
   ref: MessageLabel
*/
void MessageLabel_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5e10ULL || rel >= 0x13d5f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5f80 size=16 callers=0 calls=0
*/
void sub_13d5f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5f80ULL || rel >= 0x13d5f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5f90 size=16 callers=0 calls=0
*/
void sub_13d5f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5f90ULL || rel >= 0x13d5fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5fa0 size=16 callers=0 calls=0
*/
void sub_13d5fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5fa0ULL || rel >= 0x13d5fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d5fb0 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_SysMsg
*/
void CS_SysMsg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d5fb0ULL || rel >= 0x13d6030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6030 size=16 callers=0 calls=0
*/
void sub_13d6030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6030ULL || rel >= 0x13d6040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6040 size=16 callers=0 calls=0
*/
void sub_13d6040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6040ULL || rel >= 0x13d6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6050 size=16 callers=0 calls=0
*/
void sub_13d6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6050ULL || rel >= 0x13d6060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6060 size=160 callers=0 calls=3
   calls: sub_66c4e0, sub_680c80, sub_680e70
   ref: IsSePlay
*/
void IsSePlay(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6060ULL || rel >= 0x13d6100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6100 size=16 callers=0 calls=0
*/
void sub_13d6100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6100ULL || rel >= 0x13d6110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6110 size=16 callers=0 calls=0
*/
void sub_13d6110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6110ULL || rel >= 0x13d6120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6120 size=16 callers=0 calls=0
*/
void sub_13d6120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6120ULL || rel >= 0x13d6130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6130 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_MsgKeyWait
*/
void CS_MsgKeyWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6130ULL || rel >= 0x13d61b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d61b0 size=16 callers=0 calls=0
*/
void sub_13d61b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d61b0ULL || rel >= 0x13d61c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d61c0 size=16 callers=0 calls=0
*/
void sub_13d61c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d61c0ULL || rel >= 0x13d61d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d61d0 size=16 callers=0 calls=0
*/
void sub_13d61d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d61d0ULL || rel >= 0x13d61e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d61e0 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_MsgWinWait
*/
void CS_MsgWinWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d61e0ULL || rel >= 0x13d6260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6260 size=16 callers=0 calls=0
*/
void sub_13d6260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6260ULL || rel >= 0x13d6270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6270 size=16 callers=0 calls=0
*/
void sub_13d6270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6270ULL || rel >= 0x13d6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6280 size=16 callers=0 calls=0
*/
void sub_13d6280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6280ULL || rel >= 0x13d6290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6290 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_MsgClose
*/
void CS_MsgClose(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6290ULL || rel >= 0x13d6310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6310 size=16 callers=0 calls=0
*/
void sub_13d6310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6310ULL || rel >= 0x13d6320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6320 size=16 callers=0 calls=0
*/
void sub_13d6320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6320ULL || rel >= 0x13d6330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6330 size=16 callers=0 calls=0
*/
void sub_13d6330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6330ULL || rel >= 0x13d6340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6340 size=800 callers=0 calls=6
   calls: sub_66c4e0, sub_66c570, sub_680c80, sub_680d80, sub_680e70, sub_680f00
   ref: IsScriptMsg
   ref: MessageLabel2
   ref: IsUseExtraMsg
   ref: MenuPos
   ref: MessageLabel1
   ref: InitPos
*/
void IsScriptMsg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6340ULL || rel >= 0x13d6660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6660 size=16 callers=0 calls=0
*/
void sub_13d6660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6660ULL || rel >= 0x13d6670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6670 size=16 callers=0 calls=0
*/
void sub_13d6670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6670ULL || rel >= 0x13d6680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6680 size=16 callers=0 calls=0
*/
void sub_13d6680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6680ULL || rel >= 0x13d6690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6690 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_YesNoWin
*/
void CS_YesNoWin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6690ULL || rel >= 0x13d6710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6710 size=16 callers=0 calls=0
*/
void sub_13d6710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6710ULL || rel >= 0x13d6720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6720 size=16 callers=0 calls=0
*/
void sub_13d6720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6720ULL || rel >= 0x13d6730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6730 size=16 callers=0 calls=0
*/
void sub_13d6730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6730ULL || rel >= 0x13d6740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6740 size=1616 callers=0 calls=6
   calls: sub_66c4e0, sub_66c570, sub_680c80, sub_680d80, sub_680e70, sub_680f00
   ref: MessageLabel2
   ref: IsCancel
   ref: MessageLabel3
   ref: MessageLabel6
   ref: IsUseExtraMsg
   ref: MenuPos
   ref: MessageLabel7
   ref: MessageLabel1
*/
void MenuPos(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6740ULL || rel >= 0x13d6d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6d90 size=16 callers=0 calls=0
*/
void sub_13d6d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6d90ULL || rel >= 0x13d6da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6da0 size=16 callers=0 calls=0
*/
void sub_13d6da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6da0ULL || rel >= 0x13d6db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6db0 size=16 callers=0 calls=0
*/
void sub_13d6db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6db0ULL || rel >= 0x13d6dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6dc0 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_ListMenuStart
*/
void CS_ListMenuStart(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6dc0ULL || rel >= 0x13d6e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6e40 size=16 callers=0 calls=0
*/
void sub_13d6e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6e40ULL || rel >= 0x13d6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6e50 size=16 callers=0 calls=0
*/
void sub_13d6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6e50ULL || rel >= 0x13d6e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6e60 size=16 callers=0 calls=0
*/
void sub_13d6e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6e60ULL || rel >= 0x13d6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6e70 size=352 callers=0 calls=4
   calls: sub_13a8200, sub_66c4e0, sub_680c80, sub_680d80
   ref: MonsNo
   ref: CS_WordSetMonsName
*/
void CS_WordSetMonsName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6e70ULL || rel >= 0x13d6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6fd0 size=16 callers=0 calls=0
*/
void sub_13d6fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6fd0ULL || rel >= 0x13d6fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6fe0 size=16 callers=0 calls=0
*/
void sub_13d6fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6fe0ULL || rel >= 0x13d6ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d6ff0 size=16 callers=0 calls=0
*/
void sub_13d6ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6ff0ULL || rel >= 0x13d7000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d7000 size=448 callers=0 calls=4
   calls: sub_13a8200, sub_66c4e0, sub_680c80, sub_680d80
   ref: MonsNo_v2
   ref: CS_WordSetMonsNameRomVersion
   ref: MonsNo_v1
*/
void CS_WordSetMonsNameRomVersion(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d7000ULL || rel >= 0x13d71c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d71c0 size=16 callers=0 calls=0
*/
void sub_13d71c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d71c0ULL || rel >= 0x13d71d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d71d0 size=16 callers=0 calls=0
*/
void sub_13d71d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d71d0ULL || rel >= 0x13d71e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d71e0 size=16 callers=0 calls=0
*/
void sub_13d71e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d71e0ULL || rel >= 0x13d71f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d71f0 size=1952 callers=1 calls=1
   calls: sub_13a7fe0
   ref: FieldObject/FObjSetActiveCollision
   ref: FieldObject/FObjSetActiveStaticCollision
   ref: FieldObject/FObjSetAngTargetPos
   ref: FieldObject/FObjSetShadowEnable
   ref: FieldObject/FObjSetPosAng
   ref: FieldObject/FObjSetAlwaysVisibleInEvent
   ref: FieldObject/FObjSetPosVec3
   ref: FieldObject/FObjSetAng
*/
void FObjSetVisibility(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d71f0ULL || rel >= 0x13d7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d7990 size=1152 callers=1 calls=1
   calls: sub_13a7fe0
   ref: FieldObject/Facial/FObjResetEye
   ref: FieldObject/Facial/FObjEyeBlink
   ref: FieldObject/Facial/FObjSetMouth
   ref: FieldObject/Facial/FObjSetEye
   ref: FieldObject/Facial/FObjSetFace
   ref: FieldObject/Facial/FObjResetFace
   ref: FieldObject/Facial/FObjResetMouth
*/
void FObjSetMouth(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d7990ULL || rel >= 0x13d7e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d7e10 size=2432 callers=1 calls=1
   calls: sub_13a7fe0
   ref: FieldObject/LookAt/FObjStartEyeLookAtDirection
   ref: FieldObject/LookAt/FObjLookAtPosSpeed
   ref: FieldObject/LookAt/FObjLookAtReset
   ref: FieldObject/LookAt/FObjLookAtPos
   ref: FieldObject/LookAt/FObjLookAtCharaSpeed
   ref: FieldObject/LookAt/FObjStartEyeLookAt
   ref: FieldObject/LookAt/FObjLookAtAngleSpeed
   ref: FieldObject/LookAt/FObjLookAtDirectionSpeed
*/
void FObjStartEyeLookAtPosition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d7e10ULL || rel >= 0x13d8790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d8790 size=1568 callers=1 calls=1
   calls: sub_13a7fe0
   ref: FieldObject/ActionCommand/FObjACWait
   ref: FieldObject/ActionCommand/FObjACRot
   ref: FieldObject/ActionCommand/FObjACMoveTurnToTarget
   ref: FieldObject/ActionCommand/FObjACMoveFrame
   ref: FieldObject/ActionCommand/FObjACMove
   ref: FieldObject/ActionCommand/FObjACPathMove
   ref: FieldObject/ActionCommand/FObjACRotTarget
   ref: FieldObject/ActionCommand/FObjACRotTargetPos
*/
void FObjACWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d8790ULL || rel >= 0x13d8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d8db0 size=1968 callers=1 calls=1
   calls: sub_13a7fe0
   ref: FieldObject/Animation/StateSetFloat
   ref: FieldObject/Animation/StateSetTrigger
   ref: FieldObject/Animation/FObjMotionPlayLoopOut
   ref: FieldObject/Animation/StateSetInt
   ref: FieldObject/Animation/FObjMotionChangeWaitType
   ref: FieldObject/Animation/FObjMotionReset
   ref: FieldObject/Animation/FObjMotionWait
   ref: FieldObject/Animation/FObjMotionPlayOneShot
*/
void StateSetTrigger(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d8db0ULL || rel >= 0x13d9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d9560 size=1088 callers=1 calls=1
   calls: sub_13a7fe0
   ref: FieldObject/Effect/EffectPlayOnCamera
   ref: FieldObject/Effect/EffectPlay
   ref: FieldObject/Effect/EffectPlayHead
   ref: FieldObject/Effect/EffectPlayWorld
   ref: FieldObject/Effect/EffectPlayBalloon
   ref: FieldObject/Effect/EffectWait
*/
void EffectWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d9560ULL || rel >= 0x13d99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d99a0 size=416 callers=0 calls=7
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680e70, sub_680ff0
   ref: TerrainHeightAdjustFlag
   ref: CS_FObjSetPos
*/
void TerrainHeightAdjustFlag(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d99a0ULL || rel >= 0x13d9b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d9b40 size=16 callers=0 calls=0
*/
void sub_13d9b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d9b40ULL || rel >= 0x13d9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d9b50 size=16 callers=0 calls=0
*/
void sub_13d9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d9b50ULL || rel >= 0x13d9b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d9b60 size=16 callers=0 calls=0
*/
void sub_13d9b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d9b60ULL || rel >= 0x13d9b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d9b70 size=544 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680e00, sub_680e70, sub_680ff0
   ref: TerrainHeightAdjustFlag
   ref: CS_FObjSetPosAng
*/
void TerrainHeightAdjustFlag_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d9b70ULL || rel >= 0x13d9d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d9d90 size=16 callers=0 calls=0
*/
void sub_13d9d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d9d90ULL || rel >= 0x13d9da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d9da0 size=16 callers=0 calls=0
*/
void sub_13d9da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d9da0ULL || rel >= 0x13d9db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d9db0 size=16 callers=0 calls=0
*/
void sub_13d9db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d9db0ULL || rel >= 0x13d9dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d9dc0 size=448 callers=0 calls=7
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680e70, sub_680ff0
   ref: TerrainHeightAdjustFlag
   ref: CS_FObjSetPosVec3
*/
void TerrainHeightAdjustFlag_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d9dc0ULL || rel >= 0x13d9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d9f80 size=16 callers=0 calls=0
*/
void sub_13d9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d9f80ULL || rel >= 0x13d9f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d9f90 size=16 callers=0 calls=0
*/
void sub_13d9f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d9f90ULL || rel >= 0x13d9fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d9fa0 size=16 callers=0 calls=0
*/
void sub_13d9fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d9fa0ULL || rel >= 0x13d9fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013d9fb0 size=288 callers=0 calls=6
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680e00
   ref: CS_FObjSetAng
*/
void CS_FObjSetAng(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d9fb0ULL || rel >= 0x13da0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da0d0 size=16 callers=0 calls=0
*/
void sub_13da0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da0d0ULL || rel >= 0x13da0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da0e0 size=16 callers=0 calls=0
*/
void sub_13da0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da0e0ULL || rel >= 0x13da0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da0f0 size=16 callers=0 calls=0
*/
void sub_13da0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da0f0ULL || rel >= 0x13da100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da100 size=320 callers=0 calls=6
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680f00
   ref: CS_FObjSetAngTarget
   ref: TargetHash
*/
void CS_FObjSetAngTarget(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da100ULL || rel >= 0x13da240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da240 size=16 callers=0 calls=0
*/
void sub_13da240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da240ULL || rel >= 0x13da250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da250 size=16 callers=0 calls=0
*/
void sub_13da250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da250ULL || rel >= 0x13da260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da260 size=16 callers=0 calls=0
*/
void sub_13da260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da260ULL || rel >= 0x13da270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da270 size=320 callers=0 calls=6
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680ff0
   ref: CS_FObjSetAngTargetPos
*/
void CS_FObjSetAngTargetPos(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da270ULL || rel >= 0x13da3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da3b0 size=16 callers=0 calls=0
*/
void sub_13da3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da3b0ULL || rel >= 0x13da3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da3c0 size=16 callers=0 calls=0
*/
void sub_13da3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da3c0ULL || rel >= 0x13da3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da3d0 size=16 callers=0 calls=0
*/
void sub_13da3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da3d0ULL || rel >= 0x13da3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da3e0 size=272 callers=0 calls=6
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680e70
   ref: CS_FObjSetVisibility
   ref: Visibility
*/
void CS_FObjSetVisibility(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da3e0ULL || rel >= 0x13da4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da4f0 size=16 callers=0 calls=0
*/
void sub_13da4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da4f0ULL || rel >= 0x13da500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da500 size=16 callers=0 calls=0
*/
void sub_13da500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da500ULL || rel >= 0x13da510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da510 size=16 callers=0 calls=0
*/
void sub_13da510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da510ULL || rel >= 0x13da520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da520 size=272 callers=0 calls=6
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680e70
   ref: CS_FObjSetFloat
   ref: IsFloat
*/
void CS_FObjSetFloat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da520ULL || rel >= 0x13da630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da630 size=16 callers=0 calls=0
*/
void sub_13da630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da630ULL || rel >= 0x13da640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da640 size=16 callers=0 calls=0
*/
void sub_13da640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da640ULL || rel >= 0x13da650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da650 size=16 callers=0 calls=0
*/
void sub_13da650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da650ULL || rel >= 0x13da660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da660 size=272 callers=0 calls=6
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680e70
   ref: IsActive
   ref: CS_FObjSetActiveCollision
*/
void CS_FObjSetActiveCollision(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da660ULL || rel >= 0x13da770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da770 size=16 callers=0 calls=0
*/
void sub_13da770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da770ULL || rel >= 0x13da780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da780 size=16 callers=0 calls=0
*/
void sub_13da780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da780ULL || rel >= 0x13da790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da790 size=16 callers=0 calls=0
*/
void sub_13da790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da790ULL || rel >= 0x13da7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da7a0 size=272 callers=0 calls=6
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680e70
   ref: IsActive
   ref: CS_FObjSetActiveStaticCollision
*/
void CS_FObjSetActiveStaticCollision(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da7a0ULL || rel >= 0x13da8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da8b0 size=16 callers=0 calls=0
*/
void sub_13da8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da8b0ULL || rel >= 0x13da8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da8c0 size=16 callers=0 calls=0
*/
void sub_13da8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da8c0ULL || rel >= 0x13da8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da8d0 size=16 callers=0 calls=0
*/
void sub_13da8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da8d0ULL || rel >= 0x13da8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da8e0 size=272 callers=0 calls=6
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680e70
   ref: Enable
   ref: CS_FObjSetShadowEnable
*/
void CS_FObjSetShadowEnable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da8e0ULL || rel >= 0x13da9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013da9f0 size=16 callers=0 calls=0
*/
void sub_13da9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13da9f0ULL || rel >= 0x13daa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013daa00 size=16 callers=0 calls=0
*/
void sub_13daa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13daa00ULL || rel >= 0x13daa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013daa10 size=16 callers=0 calls=0
*/
void sub_13daa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13daa10ULL || rel >= 0x13daa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013daa20 size=272 callers=0 calls=6
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680e70
   ref: CS_FObjSetAlwaysVisibleInEvent
   ref: IsVisibleAlways
*/
void CS_FObjSetAlwaysVisibleInEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13daa20ULL || rel >= 0x13dab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dab30 size=16 callers=0 calls=0
*/
void sub_13dab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dab30ULL || rel >= 0x13dab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dab40 size=16 callers=0 calls=0
*/
void sub_13dab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dab40ULL || rel >= 0x13dab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dab50 size=16 callers=0 calls=0
*/
void sub_13dab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dab50ULL || rel >= 0x13dab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dab60 size=160 callers=0 calls=4
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0
   ref: CS_FObjEyeBlink
*/
void CS_FObjEyeBlink(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dab60ULL || rel >= 0x13dac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dac00 size=16 callers=0 calls=0
*/
void sub_13dac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dac00ULL || rel >= 0x13dac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dac10 size=16 callers=0 calls=0
*/
void sub_13dac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dac10ULL || rel >= 0x13dac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dac20 size=16 callers=0 calls=0
*/
void sub_13dac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dac20ULL || rel >= 0x13dac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dac30 size=272 callers=0 calls=6
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680d80
   ref: CS_FObjSetEye
   ref: EyeType
*/
void CS_FObjSetEye(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dac30ULL || rel >= 0x13dad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dad40 size=16 callers=0 calls=0
*/
void sub_13dad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dad40ULL || rel >= 0x13dad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dad50 size=16 callers=0 calls=0
*/
void sub_13dad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dad50ULL || rel >= 0x13dad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dad60 size=16 callers=0 calls=0
*/
void sub_13dad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dad60ULL || rel >= 0x13dad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dad70 size=160 callers=0 calls=4
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0
   ref: CS_FObjResetEye
*/
void CS_FObjResetEye(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dad70ULL || rel >= 0x13dae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dae10 size=16 callers=0 calls=0
*/
void sub_13dae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dae10ULL || rel >= 0x13dae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dae20 size=16 callers=0 calls=0
*/
void sub_13dae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dae20ULL || rel >= 0x13dae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dae30 size=16 callers=0 calls=0
*/
void sub_13dae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dae30ULL || rel >= 0x13dae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dae40 size=272 callers=0 calls=6
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680d80
   ref: MouthType
   ref: CS_FObjSetMouth
*/
void CS_FObjSetMouth(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dae40ULL || rel >= 0x13daf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013daf50 size=16 callers=0 calls=0
*/
void sub_13daf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13daf50ULL || rel >= 0x13daf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013daf60 size=16 callers=0 calls=0
*/
void sub_13daf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13daf60ULL || rel >= 0x13daf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013daf70 size=16 callers=0 calls=0
*/
void sub_13daf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13daf70ULL || rel >= 0x13daf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013daf80 size=160 callers=0 calls=4
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0
   ref: CS_FObjResetMouth
*/
void CS_FObjResetMouth(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13daf80ULL || rel >= 0x13db020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db020 size=16 callers=0 calls=0
*/
void sub_13db020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db020ULL || rel >= 0x13db030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db030 size=16 callers=0 calls=0
*/
void sub_13db030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db030ULL || rel >= 0x13db040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db040 size=16 callers=0 calls=0
*/
void sub_13db040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db040ULL || rel >= 0x13db050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db050 size=384 callers=0 calls=6
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680d80
   ref: MouthType
   ref: EyeType
   ref: CS_FObjSetFace
*/
void CS_FObjSetFace(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db050ULL || rel >= 0x13db1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db1d0 size=16 callers=0 calls=0
*/
void sub_13db1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db1d0ULL || rel >= 0x13db1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db1e0 size=16 callers=0 calls=0
*/
void sub_13db1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db1e0ULL || rel >= 0x13db1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db1f0 size=16 callers=0 calls=0
*/
void sub_13db1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db1f0ULL || rel >= 0x13db200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db200 size=160 callers=0 calls=4
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0
   ref: CS_FObjResetFace
*/
void CS_FObjResetFace(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db200ULL || rel >= 0x13db2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db2a0 size=16 callers=0 calls=0
*/
void sub_13db2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db2a0ULL || rel >= 0x13db2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db2b0 size=16 callers=0 calls=0
*/
void sub_13db2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db2b0ULL || rel >= 0x13db2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db2c0 size=16 callers=0 calls=0
*/
void sub_13db2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db2c0ULL || rel >= 0x13db2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db2d0 size=528 callers=0 calls=7
   calls: LookAtWait, sub_13a8100, sub_680be0, sub_680c80, sub_680d80, sub_680e70, sub_680ff0
   ref: Target
   ref: IsEyeMove
   ref: isEyeMoveReset
*/
void isEyeMoveReset(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db2d0ULL || rel >= 0x13db4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db4e0 size=16 callers=0 calls=0
*/
void sub_13db4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db4e0ULL || rel >= 0x13db4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db4f0 size=16 callers=0 calls=0
*/
void sub_13db4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db4f0ULL || rel >= 0x13db500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db500 size=16 callers=0 calls=0
*/
void sub_13db500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db500ULL || rel >= 0x13db510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db510 size=528 callers=0 calls=7
   calls: LookAtWait_2, sub_13a8100, sub_680be0, sub_680c80, sub_680e00, sub_680e70, sub_680ff0
   ref: Target
   ref: IsEyeMove
   ref: isEyeMoveReset
*/
void isEyeMoveReset_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db510ULL || rel >= 0x13db720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db720 size=16 callers=0 calls=0
*/
void sub_13db720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db720ULL || rel >= 0x13db730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db730 size=16 callers=0 calls=0
*/
void sub_13db730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db730ULL || rel >= 0x13db740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db740 size=16 callers=0 calls=0
*/
void sub_13db740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db740ULL || rel >= 0x13db750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db750 size=528 callers=0 calls=7
   calls: LookAtWait_3, sub_13a8100, sub_680be0, sub_680c80, sub_680d80, sub_680e70, sub_680f00
   ref: Target
   ref: IsEyeMove
   ref: isEyeMoveReset
*/
void isEyeMoveReset_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db750ULL || rel >= 0x13db960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db960 size=16 callers=0 calls=0
*/
void sub_13db960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db960ULL || rel >= 0x13db970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db970 size=16 callers=0 calls=0
*/
void sub_13db970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db970ULL || rel >= 0x13db980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db980 size=16 callers=0 calls=0
*/
void sub_13db980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db980ULL || rel >= 0x13db990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013db990 size=544 callers=0 calls=7
   calls: LookAtWait_4, sub_13a8100, sub_680be0, sub_680c80, sub_680e00, sub_680e70, sub_680f00
   ref: Target
   ref: IsEyeMove
   ref: isEyeMoveReset
*/
void isEyeMoveReset_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13db990ULL || rel >= 0x13dbbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dbbb0 size=16 callers=0 calls=0
*/
void sub_13dbbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dbbb0ULL || rel >= 0x13dbbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dbbc0 size=16 callers=0 calls=0
*/
void sub_13dbbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dbbc0ULL || rel >= 0x13dbbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dbbd0 size=16 callers=0 calls=0
*/
void sub_13dbbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dbbd0ULL || rel >= 0x13dbbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dbbe0 size=608 callers=0 calls=7
   calls: LookAtWait_5, sub_13a8100, sub_680be0, sub_680c80, sub_680d80, sub_680e00, sub_680e70
   ref: IsEyeMove
   ref: isEyeMoveReset
   ref: AngleY
   ref: AngleX
*/
void isEyeMoveReset_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dbbe0ULL || rel >= 0x13dbe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dbe40 size=16 callers=0 calls=0
*/
void sub_13dbe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dbe40ULL || rel >= 0x13dbe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dbe50 size=16 callers=0 calls=0
*/
void sub_13dbe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dbe50ULL || rel >= 0x13dbe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dbe60 size=16 callers=0 calls=0
*/
void sub_13dbe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dbe60ULL || rel >= 0x13dbe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dbe70 size=608 callers=0 calls=6
   calls: LookAtWait_6, sub_13a8100, sub_680be0, sub_680c80, sub_680e00, sub_680e70
   ref: IsEyeMove
   ref: isEyeMoveReset
   ref: AngleY
   ref: AngleX
*/
void isEyeMoveReset_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dbe70ULL || rel >= 0x13dc0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc0d0 size=16 callers=0 calls=0
*/
void sub_13dc0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc0d0ULL || rel >= 0x13dc0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc0e0 size=16 callers=0 calls=0
*/
void sub_13dc0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc0e0ULL || rel >= 0x13dc0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc0f0 size=16 callers=0 calls=0
*/
void sub_13dc0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc0f0ULL || rel >= 0x13dc100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc100 size=944 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680d80, sub_680e70, sub_680f00
   ref: CS_FObjLookAtDirection
   ref: Direction
   ref: IsEyeMove
   ref: isEyeMoveReset
*/
void CS_FObjLookAtDirection(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc100ULL || rel >= 0x13dc4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc4b0 size=16 callers=0 calls=0
*/
void sub_13dc4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc4b0ULL || rel >= 0x13dc4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc4c0 size=16 callers=0 calls=0
*/
void sub_13dc4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc4c0ULL || rel >= 0x13dc4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc4d0 size=16 callers=0 calls=0
*/
void sub_13dc4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc4d0ULL || rel >= 0x13dc4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc4e0 size=944 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680e00, sub_680e70, sub_680f00
   ref: Direction
   ref: IsEyeMove
   ref: isEyeMoveReset
   ref: CS_FObjLookAtDirectionSpeed
*/
void CS_FObjLookAtDirectionSpeed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc4e0ULL || rel >= 0x13dc890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc890 size=16 callers=0 calls=0
*/
void sub_13dc890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc890ULL || rel >= 0x13dc8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc8a0 size=16 callers=0 calls=0
*/
void sub_13dc8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc8a0ULL || rel >= 0x13dc8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc8b0 size=16 callers=0 calls=0
*/
void sub_13dc8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc8b0ULL || rel >= 0x13dc8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc8c0 size=192 callers=0 calls=5
   calls: LookAtWait_8, sub_13a8100, sub_680be0, sub_680c80, sub_680d80
*/
void sub_13dc8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc8c0ULL || rel >= 0x13dc980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc980 size=16 callers=0 calls=0
*/
void sub_13dc980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc980ULL || rel >= 0x13dc990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc990 size=16 callers=0 calls=0
*/
void sub_13dc990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc990ULL || rel >= 0x13dc9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc9a0 size=16 callers=0 calls=0
*/
void sub_13dc9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc9a0ULL || rel >= 0x13dc9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dc9b0 size=496 callers=0 calls=6
   calls: sub_13a8100, sub_13c47d0, sub_680be0, sub_680c80, sub_680d80, sub_680e00
   ref: ValueU
   ref: ResetFrame
   ref: ValueV
*/
void ResetFrame(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dc9b0ULL || rel >= 0x13dcba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dcba0 size=16 callers=0 calls=0
*/
void sub_13dcba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dcba0ULL || rel >= 0x13dcbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dcbb0 size=16 callers=0 calls=0
*/
void sub_13dcbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dcbb0ULL || rel >= 0x13dcbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dcbc0 size=16 callers=0 calls=0
*/
void sub_13dcbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dcbc0ULL || rel >= 0x13dcbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dcbd0 size=496 callers=0 calls=6
   calls: sub_13a8100, sub_13c4820, sub_680be0, sub_680c80, sub_680d80, sub_680e00
   ref: ResetFrame
   ref: AngleY
   ref: AngleX
*/
void ResetFrame_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dcbd0ULL || rel >= 0x13dcdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dcdc0 size=16 callers=0 calls=0
*/
void sub_13dcdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dcdc0ULL || rel >= 0x13dcdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dcdd0 size=16 callers=0 calls=0
*/
void sub_13dcdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dcdd0ULL || rel >= 0x13dcde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dcde0 size=16 callers=0 calls=0
*/
void sub_13dcde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dcde0ULL || rel >= 0x13dcdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dcdf0 size=432 callers=0 calls=6
   calls: sub_13a8100, sub_13c4870, sub_680be0, sub_680c80, sub_680d80, sub_680f00
   ref: Target
   ref: ResetFrame
*/
void ResetFrame_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dcdf0ULL || rel >= 0x13dcfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dcfa0 size=16 callers=0 calls=0
*/
void sub_13dcfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dcfa0ULL || rel >= 0x13dcfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dcfb0 size=16 callers=0 calls=0
*/
void sub_13dcfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dcfb0ULL || rel >= 0x13dcfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dcfc0 size=16 callers=0 calls=0
*/
void sub_13dcfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dcfc0ULL || rel >= 0x13dcfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dcfd0 size=416 callers=0 calls=6
   calls: sub_13a8100, sub_13c48c0, sub_680be0, sub_680c80, sub_680d80, sub_680ff0
   ref: ResetFrame
   ref: TargetPos
*/
void ResetFrame_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dcfd0ULL || rel >= 0x13dd170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dd170 size=16 callers=0 calls=0
*/
void sub_13dd170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dd170ULL || rel >= 0x13dd180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dd180 size=16 callers=0 calls=0
*/
void sub_13dd180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dd180ULL || rel >= 0x13dd190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dd190 size=16 callers=0 calls=0
*/
void sub_13dd190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dd190ULL || rel >= 0x13dd1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dd1a0 size=992 callers=0 calls=7
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680d80, sub_680f00
   ref: Direction
   ref: CS_FObjStartEyeLookAtDirection
   ref: ResetFrame
*/
void CS_FObjStartEyeLookAtDirection(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dd1a0ULL || rel >= 0x13dd580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dd580 size=16 callers=0 calls=0
*/
void sub_13dd580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dd580ULL || rel >= 0x13dd590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

