/* main functions 00fd80a0..00feebb0 (127 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00fd80a0 size=16 callers=1 calls=0
*/
void sub_fd80a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd80a0ULL || rel >= 0xfd80b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd80b0 size=16 callers=17 calls=0
*/
void sub_fd80b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd80b0ULL || rel >= 0xfd80c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd80c0 size=16 callers=3 calls=0
*/
void sub_fd80c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd80c0ULL || rel >= 0xfd80d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd80d0 size=16 callers=4 calls=0
*/
void sub_fd80d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd80d0ULL || rel >= 0xfd80e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd80e0 size=48 callers=1 calls=0
*/
void sub_fd80e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd80e0ULL || rel >= 0xfd8110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8110 size=32 callers=6 calls=0
*/
void sub_fd8110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8110ULL || rel >= 0xfd8130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8130 size=32 callers=11 calls=0
*/
void sub_fd8130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8130ULL || rel >= 0xfd8150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8150 size=48 callers=4 calls=0
*/
void sub_fd8150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8150ULL || rel >= 0xfd8180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8180 size=16 callers=2 calls=0
*/
void sub_fd8180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8180ULL || rel >= 0xfd8190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8190 size=96 callers=8 calls=0
*/
void sub_fd8190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8190ULL || rel >= 0xfd81f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd81f0 size=48 callers=2 calls=0
*/
void sub_fd81f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd81f0ULL || rel >= 0xfd8220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8220 size=112 callers=1 calls=0
*/
void sub_fd8220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8220ULL || rel >= 0xfd8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8290 size=48 callers=2 calls=0
*/
void sub_fd8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8290ULL || rel >= 0xfd82c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd82c0 size=64 callers=1 calls=1
   calls: sub_7f4580
*/
void sub_fd82c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd82c0ULL || rel >= 0xfd8300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8300 size=96 callers=2 calls=0
*/
void sub_fd8300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8300ULL || rel >= 0xfd8360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8360 size=288 callers=1 calls=2
   calls: sub_f3c740, sub_fc2480
*/
void sub_fd8360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8360ULL || rel >= 0xfd8480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8480 size=96 callers=1 calls=0
*/
void sub_fd8480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8480ULL || rel >= 0xfd84e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd84e0 size=16 callers=5 calls=0
*/
void sub_fd84e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd84e0ULL || rel >= 0xfd84f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd84f0 size=208 callers=1 calls=1
   calls: sub_67c120
*/
void sub_fd84f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd84f0ULL || rel >= 0xfd85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd85c0 size=16 callers=1 calls=0
*/
void sub_fd85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd85c0ULL || rel >= 0xfd85d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd85d0 size=48 callers=2 calls=0
*/
void sub_fd85d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd85d0ULL || rel >= 0xfd8600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8600 size=80 callers=1 calls=2
   calls: sub_67c120, sub_7c2af0
*/
void sub_fd8600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8600ULL || rel >= 0xfd8650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8650 size=16 callers=3 calls=0
*/
void sub_fd8650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8650ULL || rel >= 0xfd8660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8660 size=48 callers=0 calls=0
*/
void sub_fd8660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8660ULL || rel >= 0xfd8690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8690 size=32 callers=8 calls=0
*/
void sub_fd8690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8690ULL || rel >= 0xfd86b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd86b0 size=32 callers=8 calls=0
*/
void sub_fd86b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd86b0ULL || rel >= 0xfd86d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd86d0 size=16 callers=1 calls=0
*/
void sub_fd86d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd86d0ULL || rel >= 0xfd86e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd86e0 size=48 callers=0 calls=0
*/
void sub_fd86e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd86e0ULL || rel >= 0xfd8710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8710 size=16 callers=1 calls=0
*/
void sub_fd8710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8710ULL || rel >= 0xfd8720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8720 size=48 callers=1 calls=0
*/
void sub_fd8720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8720ULL || rel >= 0xfd8750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8750 size=32 callers=1 calls=0
*/
void sub_fd8750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8750ULL || rel >= 0xfd8770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8770 size=16 callers=1 calls=0
*/
void sub_fd8770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8770ULL || rel >= 0xfd8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8780 size=32 callers=1 calls=0
*/
void sub_fd8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8780ULL || rel >= 0xfd87a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd87a0 size=16 callers=1 calls=0
*/
void sub_fd87a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd87a0ULL || rel >= 0xfd87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd87b0 size=32 callers=1 calls=0
*/
void sub_fd87b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd87b0ULL || rel >= 0xfd87d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd87d0 size=96 callers=0 calls=0
*/
void sub_fd87d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd87d0ULL || rel >= 0xfd8830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8830 size=96 callers=0 calls=0
*/
void sub_fd8830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8830ULL || rel >= 0xfd8890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8890 size=16 callers=0 calls=0
*/
void sub_fd8890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8890ULL || rel >= 0xfd88a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd88a0 size=96 callers=0 calls=0
*/
void sub_fd88a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd88a0ULL || rel >= 0xfd8900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8900 size=96 callers=0 calls=0
*/
void sub_fd8900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8900ULL || rel >= 0xfd8960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8960 size=16 callers=0 calls=0
*/
void sub_fd8960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8960ULL || rel >= 0xfd8970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8970 size=16 callers=0 calls=0
*/
void sub_fd8970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8970ULL || rel >= 0xfd8980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8980 size=96 callers=0 calls=0
*/
void sub_fd8980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8980ULL || rel >= 0xfd89e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd89e0 size=96 callers=0 calls=0
*/
void sub_fd89e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd89e0ULL || rel >= 0xfd8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8a40 size=128 callers=0 calls=0
*/
void sub_fd8a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8a40ULL || rel >= 0xfd8ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8ac0 size=368 callers=0 calls=10
   calls: sub_d0c0, sub_fc7b20, sub_fd7fb0, sub_fd7fd0, sub_fd80b0, sub_fd80c0, sub_fd80d0, sub_fd8c30, sub_fd8d90, sub_ffe640
   ref: StateContinue
*/
void StateContinue(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8ac0ULL || rel >= 0xfd8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8c30 size=352 callers=15 calls=0
*/
void sub_fd8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8c30ULL || rel >= 0xfd8d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd8d90 size=2064 callers=1 calls=18
   calls: sub_1052ca0, sub_1052de0, sub_1061810, sub_1063e60, sub_106e4e0, sub_106ea50, sub_106ead0, sub_106eae0, sub_106fd00, sub_106fd30, sub_1078400, sub_1078420
   ... +6 more
*/
void sub_fd8d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd8d90ULL || rel >= 0xfd95a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd95a0 size=1024 callers=0 calls=16
   calls: sub_1001170, sub_1001180, sub_10014b0, sub_10014d0, sub_10014e0, sub_1052c20, sub_1345d20, sub_6a0d40, sub_fcb060, sub_fd8060, sub_fd80b0, sub_fd8190
   ... +4 more
   ref: DetermineBattleTeam
   ref: BlackList
   ref: ConfirmQuit
   ref: DetermineLeader
   ref: AnyoneLeftNotice
*/
void DetermineBattleTeam_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd95a0ULL || rel >= 0xfd99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd99a0 size=352 callers=19 calls=0
*/
void sub_fd99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd99a0ULL || rel >= 0xfd9b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd9b00 size=304 callers=1 calls=5
   calls: sub_1052c20, sub_1345e70, sub_1345eb0, sub_fc7b20, sub_fd8130
*/
void sub_fd9b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd9b00ULL || rel >= 0xfd9c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd9c30 size=32 callers=0 calls=0
*/
void sub_fd9c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd9c30ULL || rel >= 0xfd9c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd9c50 size=112 callers=0 calls=0
*/
void sub_fd9c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd9c50ULL || rel >= 0xfd9cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd9cc0 size=112 callers=0 calls=0
*/
void sub_fd9cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd9cc0ULL || rel >= 0xfd9d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd9d30 size=16 callers=0 calls=0
*/
void sub_fd9d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd9d30ULL || rel >= 0xfd9d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd9d40 size=112 callers=0 calls=0
*/
void sub_fd9d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd9d40ULL || rel >= 0xfd9db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd9db0 size=112 callers=0 calls=0
*/
void sub_fd9db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd9db0ULL || rel >= 0xfd9e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd9e20 size=16 callers=0 calls=0
*/
void sub_fd9e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd9e20ULL || rel >= 0xfd9e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd9e30 size=16 callers=0 calls=0
*/
void sub_fd9e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd9e30ULL || rel >= 0xfd9e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd9e40 size=112 callers=0 calls=0
*/
void sub_fd9e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd9e40ULL || rel >= 0xfd9eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd9eb0 size=112 callers=0 calls=0
*/
void sub_fd9eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd9eb0ULL || rel >= 0xfd9f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fd9f20 size=496 callers=1 calls=4
   calls: sub_10466c0, sub_1047180, sub_10473b0, sub_a704f0
*/
void sub_fd9f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd9f20ULL || rel >= 0xfda110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fda110 size=304 callers=0 calls=0
*/
void sub_fda110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfda110ULL || rel >= 0xfda240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fda240 size=128 callers=0 calls=0
*/
void sub_fda240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfda240ULL || rel >= 0xfda2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fda2c0 size=736 callers=0 calls=9
   calls: sub_1310f00, sub_67b7e0, sub_d0c0, sub_e81230, sub_fc7b20, sub_fd7fb0, sub_fd7fd0, sub_fd8010, sub_fd80b0
   ref: SyncLast
*/
void SyncLast(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfda2c0ULL || rel >= 0xfda5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fda5a0 size=1216 callers=0 calls=28
   calls: NONE_NONE_7, sub_1000b10, sub_1000b50, sub_1000f80, sub_1001080, sub_1001130, sub_10014e0, sub_10457e0, sub_e89590, sub_fc7570, sub_fcafe0, sub_fcb060
   ... +16 more
   ref: ConfirmQuit
   ref: AnyoneLeftNotice
*/
void AnyoneLeftNotice(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfda5a0ULL || rel >= 0xfdaa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdaa60 size=2688 callers=1 calls=20
   calls: a_btl36_vs02, sound_attr, sub_1000800, sub_1001130, sub_1001140, sub_1052ca0, sub_105c390, sub_1061810, sub_1061830, sub_136b4f0, sub_1c0, sub_7f4d70
   ... +8 more
   ref: NONE_NONE
*/
void NONE_NONE_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdaa60ULL || rel >= 0xfdb4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdb4e0 size=1536 callers=1 calls=13
   calls: sub_10008e0, sub_10457f0, sub_1052ca0, sub_1311c60, sub_13149a0, sub_136b780, sub_67b990, sub_abe950, sub_b6fa70, sub_fc7570, sub_fd7fa0, sub_fd8130
   ... +1 more
*/
void sub_fdb4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdb4e0ULL || rel >= 0xfdbae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdbae0 size=384 callers=1 calls=4
   calls: sub_10008e0, sub_1061830, sub_fc7570, sub_fdc260
*/
void sub_fdbae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdbae0ULL || rel >= 0xfdbc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdbc60 size=32 callers=0 calls=0
*/
void sub_fdbc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdbc60ULL || rel >= 0xfdbc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdbc80 size=192 callers=0 calls=0
*/
void sub_fdbc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdbc80ULL || rel >= 0xfdbd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdbd40 size=192 callers=0 calls=0
*/
void sub_fdbd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdbd40ULL || rel >= 0xfdbe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdbe00 size=16 callers=0 calls=0
*/
void sub_fdbe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdbe00ULL || rel >= 0xfdbe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdbe10 size=192 callers=0 calls=0
*/
void sub_fdbe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdbe10ULL || rel >= 0xfdbed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdbed0 size=192 callers=0 calls=0
*/
void sub_fdbed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdbed0ULL || rel >= 0xfdbf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdbf90 size=16 callers=0 calls=0
*/
void sub_fdbf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdbf90ULL || rel >= 0xfdbfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdbfa0 size=16 callers=0 calls=0
*/
void sub_fdbfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdbfa0ULL || rel >= 0xfdbfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdbfb0 size=192 callers=0 calls=0
*/
void sub_fdbfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdbfb0ULL || rel >= 0xfdc070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdc070 size=192 callers=0 calls=0
*/
void sub_fdc070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdc070ULL || rel >= 0xfdc130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdc130 size=304 callers=0 calls=0
*/
void sub_fdc130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdc130ULL || rel >= 0xfdc260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdc260 size=288 callers=23 calls=0
*/
void sub_fdc260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdc260ULL || rel >= 0xfdc380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdc380 size=128 callers=0 calls=0
*/
void sub_fdc380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdc380ULL || rel >= 0xfdc400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdc400 size=352 callers=0 calls=7
   calls: sub_d0c0, sub_fc7b20, sub_fd7fb0, sub_fd7fd0, sub_fd8010, sub_fd80b0, sub_fdc560
   ref: SyncFirst
*/
void SyncFirst(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdc400ULL || rel >= 0xfdc560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdc560 size=1200 callers=1 calls=12
   calls: sub_1052de0, sub_1061810, sub_1061830, sub_1063e60, sub_1064450, sub_106e4e0, sub_106ead0, sub_106eae0, sub_1078420, sub_6ba6a0, sub_fd8130, sub_fd8150
*/
void sub_fdc560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdc560ULL || rel >= 0xfdca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdca10 size=1232 callers=0 calls=18
   calls: sub_10014e0, sub_10457c0, sub_10457e0, sub_10459a0, sub_fc7570, sub_fc7b20, sub_fcb060, sub_fd8060, sub_fd80b0, sub_fd8190, sub_fd99a0, sub_fdc260
   ... +6 more
   ref: ConfirmQuit
   ref: DetermineLeader
   ref: AnyoneLeftNotice
*/
void AnyoneLeftNotice_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdca10ULL || rel >= 0xfdcee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdcee0 size=240 callers=1 calls=7
   calls: sub_1052c50, sub_136b530, sub_136b580, sub_136b590, sub_136b770, sub_fd8130, sub_fd84f0
*/
void sub_fdcee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdcee0ULL || rel >= 0xfdcfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdcfd0 size=752 callers=1 calls=7
   calls: sub_10457e0, sub_1045890, sub_1052ca0, sub_1061830, sub_6ba6a0, sub_fc7570, sub_fdd7a0
*/
void sub_fdcfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdcfd0ULL || rel >= 0xfdd2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdd2c0 size=32 callers=0 calls=0
*/
void sub_fdd2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd2c0ULL || rel >= 0xfdd2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdd2e0 size=144 callers=0 calls=0
*/
void sub_fdd2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd2e0ULL || rel >= 0xfdd370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdd370 size=144 callers=0 calls=0
*/
void sub_fdd370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd370ULL || rel >= 0xfdd400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdd400 size=16 callers=0 calls=0
*/
void sub_fdd400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd400ULL || rel >= 0xfdd410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdd410 size=144 callers=0 calls=0
*/
void sub_fdd410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd410ULL || rel >= 0xfdd4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdd4a0 size=144 callers=0 calls=0
*/
void sub_fdd4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd4a0ULL || rel >= 0xfdd530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdd530 size=16 callers=0 calls=0
*/
void sub_fdd530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd530ULL || rel >= 0xfdd540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdd540 size=16 callers=0 calls=0
*/
void sub_fdd540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd540ULL || rel >= 0xfdd550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdd550 size=144 callers=0 calls=0
*/
void sub_fdd550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd550ULL || rel >= 0xfdd5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdd5e0 size=144 callers=0 calls=0
*/
void sub_fdd5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd5e0ULL || rel >= 0xfdd670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdd670 size=304 callers=0 calls=0
*/
void sub_fdd670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd670ULL || rel >= 0xfdd7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdd7a0 size=576 callers=1 calls=0
*/
void sub_fdd7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd7a0ULL || rel >= 0xfdd9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdd9e0 size=128 callers=0 calls=0
*/
void sub_fdd9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd9e0ULL || rel >= 0xfdda60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdda60 size=400 callers=0 calls=6
   calls: sub_d0c0, sub_fc7b20, sub_fd7fb0, sub_fd7fd0, sub_fd8c30, sub_ffcd60
   ref: ConfirmQuit
*/
void ConfirmQuit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdda60ULL || rel >= 0xfddbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fddbf0 size=368 callers=0 calls=7
   calls: sub_fc7b20, sub_fcb060, sub_fd8060, sub_fd80a0, sub_fd81f0, sub_fd8c30, sub_fd99a0
*/
void sub_fddbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfddbf0ULL || rel >= 0xfddd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fddd60 size=32 callers=0 calls=0
*/
void sub_fddd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfddd60ULL || rel >= 0xfddd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fddd80 size=192 callers=0 calls=3
   calls: sub_fd8690, sub_fd8c30, sub_fffa20
*/
void sub_fddd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfddd80ULL || rel >= 0xfdde40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdde40 size=16 callers=0 calls=0
*/
void sub_fdde40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdde40ULL || rel >= 0xfdde50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdde50 size=16 callers=0 calls=0
*/
void sub_fdde50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdde50ULL || rel >= 0xfdde60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdde60 size=192 callers=0 calls=3
   calls: sub_10009a0, sub_fd86b0, sub_fd8c30
*/
void sub_fdde60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdde60ULL || rel >= 0xfddf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fddf20 size=16 callers=0 calls=0
*/
void sub_fddf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfddf20ULL || rel >= 0xfddf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fddf30 size=16 callers=0 calls=0
*/
void sub_fddf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfddf30ULL || rel >= 0xfddf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fddf40 size=128 callers=0 calls=0
*/
void sub_fddf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfddf40ULL || rel >= 0xfddfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fddfc0 size=128 callers=0 calls=0
*/
void sub_fddfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfddfc0ULL || rel >= 0xfde040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fde040 size=16 callers=0 calls=0
*/
void sub_fde040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde040ULL || rel >= 0xfde050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fde050 size=128 callers=0 calls=0
*/
void sub_fde050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde050ULL || rel >= 0xfde0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fde0d0 size=128 callers=0 calls=0
*/
void sub_fde0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde0d0ULL || rel >= 0xfde150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fde150 size=16 callers=0 calls=0
*/
void sub_fde150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde150ULL || rel >= 0xfde160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fde160 size=16 callers=0 calls=0
*/
void sub_fde160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde160ULL || rel >= 0xfde170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fde170 size=128 callers=0 calls=0
*/
void sub_fde170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde170ULL || rel >= 0xfde1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fde1f0 size=128 callers=0 calls=0
*/
void sub_fde1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde1f0ULL || rel >= 0xfde270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fde270 size=304 callers=0 calls=0
*/
void sub_fde270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde270ULL || rel >= 0xfde3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fde3a0 size=128 callers=0 calls=0
*/
void sub_fde3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde3a0ULL || rel >= 0xfde420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fde420 size=336 callers=0 calls=6
   calls: sub_d0c0, sub_fc7b20, sub_fd7fb0, sub_fd7fd0, sub_fd80b0, sub_fd85d0
   ref: DetermineLeader
*/
void DetermineLeader(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde420ULL || rel >= 0xfde570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fde570 size=1024 callers=0 calls=20
   calls: sub_10014e0, sub_fc7b20, sub_fcb060, sub_fd8060, sub_fd80b0, sub_fd80e0, sub_fd8110, sub_fd8130, sub_fd8190, sub_fd85c0, sub_fd8c30, sub_fd99a0
   ... +8 more
   ref: ConfirmQuit
   ref: DetermineRegulation
   ref: AnyoneLeftNotice
*/
void DetermineRegulation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde570ULL || rel >= 0xfde970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fde970 size=32 callers=0 calls=0
*/
void sub_fde970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde970ULL || rel >= 0xfde990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fde990 size=112 callers=0 calls=0
*/
void sub_fde990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde990ULL || rel >= 0xfdea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdea00 size=112 callers=0 calls=0
*/
void sub_fdea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdea00ULL || rel >= 0xfdea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdea70 size=16 callers=0 calls=0
*/
void sub_fdea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdea70ULL || rel >= 0xfdea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdea80 size=112 callers=0 calls=0
*/
void sub_fdea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdea80ULL || rel >= 0xfdeaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdeaf0 size=112 callers=0 calls=0
*/
void sub_fdeaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdeaf0ULL || rel >= 0xfdeb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdeb60 size=16 callers=0 calls=0
*/
void sub_fdeb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdeb60ULL || rel >= 0xfdeb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdeb70 size=16 callers=0 calls=0
*/
void sub_fdeb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdeb70ULL || rel >= 0xfdeb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdeb80 size=112 callers=0 calls=0
*/
void sub_fdeb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdeb80ULL || rel >= 0xfdebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdebf0 size=112 callers=0 calls=0
*/
void sub_fdebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdebf0ULL || rel >= 0xfdec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdec60 size=304 callers=0 calls=0
*/
void sub_fdec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdec60ULL || rel >= 0xfded90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fded90 size=128 callers=0 calls=0
*/
void sub_fded90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfded90ULL || rel >= 0xfdee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdee10 size=272 callers=0 calls=4
   calls: sub_d0c0, sub_fc7b20, sub_fd7fb0, sub_fd7fd0
   ref: AnyoneLeftNotice
*/
void AnyoneLeftNotice_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdee10ULL || rel >= 0xfdef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdef20 size=208 callers=0 calls=4
   calls: sub_fcb060, sub_fd8060, sub_fd8c30, sub_fd99a0
*/
void sub_fdef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdef20ULL || rel >= 0xfdeff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdeff0 size=32 callers=0 calls=0
*/
void sub_fdeff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdeff0ULL || rel >= 0xfdf010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf010 size=112 callers=0 calls=0
*/
void sub_fdf010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf010ULL || rel >= 0xfdf080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf080 size=112 callers=0 calls=0
*/
void sub_fdf080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf080ULL || rel >= 0xfdf0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf0f0 size=16 callers=0 calls=0
*/
void sub_fdf0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf0f0ULL || rel >= 0xfdf100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf100 size=112 callers=0 calls=0
*/
void sub_fdf100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf100ULL || rel >= 0xfdf170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf170 size=112 callers=0 calls=0
*/
void sub_fdf170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf170ULL || rel >= 0xfdf1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf1e0 size=16 callers=0 calls=0
*/
void sub_fdf1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf1e0ULL || rel >= 0xfdf1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf1f0 size=16 callers=0 calls=0
*/
void sub_fdf1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf1f0ULL || rel >= 0xfdf200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf200 size=112 callers=0 calls=0
*/
void sub_fdf200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf200ULL || rel >= 0xfdf270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf270 size=112 callers=0 calls=0
*/
void sub_fdf270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf270ULL || rel >= 0xfdf2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf2e0 size=304 callers=0 calls=0
*/
void sub_fdf2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf2e0ULL || rel >= 0xfdf410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf410 size=128 callers=0 calls=0
*/
void sub_fdf410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf410ULL || rel >= 0xfdf490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf490 size=464 callers=0 calls=7
   calls: sub_d0c0, sub_fc7b20, sub_fd7fb0, sub_fd7fd0, sub_fd80b0, sub_fdc260, sub_ffd7e0
   ref: DeterminePlayerPos
*/
void DeterminePlayerPos(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf490ULL || rel >= 0xfdf660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf660 size=448 callers=0 calls=11
   calls: sub_1000280, sub_10002a0, sub_10014e0, sub_fd8060, sub_fd80b0, sub_fd8190, sub_fd99a0, sub_fdc260, sub_ffd320, sub_fffa50, sub_fffcf0
   ref: ConfirmQuit
   ref: SyncLast
   ref: AnyoneLeftNotice
*/
void AnyoneLeftNotice_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf660ULL || rel >= 0xfdf820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf820 size=32 callers=0 calls=0
*/
void sub_fdf820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf820ULL || rel >= 0xfdf840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf840 size=112 callers=0 calls=0
*/
void sub_fdf840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf840ULL || rel >= 0xfdf8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf8b0 size=112 callers=0 calls=0
*/
void sub_fdf8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf8b0ULL || rel >= 0xfdf920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf920 size=16 callers=0 calls=0
*/
void sub_fdf920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf920ULL || rel >= 0xfdf930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf930 size=112 callers=0 calls=0
*/
void sub_fdf930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf930ULL || rel >= 0xfdf9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdf9a0 size=112 callers=0 calls=0
*/
void sub_fdf9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdf9a0ULL || rel >= 0xfdfa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdfa10 size=16 callers=0 calls=0
*/
void sub_fdfa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdfa10ULL || rel >= 0xfdfa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdfa20 size=16 callers=0 calls=0
*/
void sub_fdfa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdfa20ULL || rel >= 0xfdfa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdfa30 size=112 callers=0 calls=0
*/
void sub_fdfa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdfa30ULL || rel >= 0xfdfaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdfaa0 size=112 callers=0 calls=0
*/
void sub_fdfaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdfaa0ULL || rel >= 0xfdfb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdfb10 size=304 callers=0 calls=0
*/
void sub_fdfb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdfb10ULL || rel >= 0xfdfc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdfc40 size=128 callers=0 calls=0
*/
void sub_fdfc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdfc40ULL || rel >= 0xfdfcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fdfcc0 size=912 callers=0 calls=18
   calls: sub_d0c0, sub_fc7b20, sub_fd7fb0, sub_fd7fd0, sub_fd8010, sub_fd80b0, sub_fd80c0, sub_fd80d0, sub_fd8180, sub_fd81f0, sub_fd8650, sub_fd8710
   ... +6 more
   ref: DetermineBattleTeam
*/
void DetermineBattleTeam_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdfcc0ULL || rel >= 0xfe0050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0050 size=224 callers=1 calls=3
   calls: sub_fd8690, sub_fdc260, sub_fffa20
*/
void sub_fe0050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0050ULL || rel >= 0xfe0130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0130 size=1616 callers=0 calls=35
   calls: sub_10014e0, sub_10459a0, sub_67bdb0, sub_8e0730, sub_fc7570, sub_fcafa0, sub_fcaff0, sub_fcb060, sub_fd8060, sub_fd80b0, sub_fd8130, sub_fd8190
   ... +23 more
   ref: DeterminePlayerPos
   ref: ConfirmQuit
   ref: DeterminePlayerPosMulti
   ref: DetermineLeader
   ref: AnyoneLeftNotice
*/
void DeterminePlayerPosMulti(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0130ULL || rel >= 0xfe0780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0780 size=112 callers=0 calls=2
   calls: sub_fdc260, sub_ffcdc0
*/
void sub_fe0780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0780ULL || rel >= 0xfe07f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe07f0 size=16 callers=0 calls=0
*/
void sub_fe07f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe07f0ULL || rel >= 0xfe0800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0800 size=16 callers=0 calls=0
*/
void sub_fe0800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0800ULL || rel >= 0xfe0810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0810 size=144 callers=0 calls=0
*/
void sub_fe0810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0810ULL || rel >= 0xfe08a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe08a0 size=144 callers=0 calls=0
*/
void sub_fe08a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe08a0ULL || rel >= 0xfe0930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0930 size=16 callers=0 calls=0
*/
void sub_fe0930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0930ULL || rel >= 0xfe0940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0940 size=144 callers=0 calls=0
*/
void sub_fe0940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0940ULL || rel >= 0xfe09d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe09d0 size=144 callers=0 calls=0
*/
void sub_fe09d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe09d0ULL || rel >= 0xfe0a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0a60 size=16 callers=0 calls=0
*/
void sub_fe0a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0a60ULL || rel >= 0xfe0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0a70 size=16 callers=0 calls=0
*/
void sub_fe0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0a70ULL || rel >= 0xfe0a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0a80 size=144 callers=0 calls=0
*/
void sub_fe0a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0a80ULL || rel >= 0xfe0b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0b10 size=144 callers=0 calls=0
*/
void sub_fe0b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0b10ULL || rel >= 0xfe0ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0ba0 size=16 callers=0 calls=0
*/
void sub_fe0ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0ba0ULL || rel >= 0xfe0bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0bb0 size=304 callers=0 calls=0
*/
void sub_fe0bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0bb0ULL || rel >= 0xfe0ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0ce0 size=128 callers=0 calls=0
*/
void sub_fe0ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0ce0ULL || rel >= 0xfe0d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0d60 size=352 callers=0 calls=7
   calls: sub_d0c0, sub_fc7b20, sub_fd7fb0, sub_fd7fd0, sub_fd80b0, sub_fd80c0, sub_fd80d0
   ref: DetermineRegulation
*/
void DetermineRegulation_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0d60ULL || rel >= 0xfe0ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe0ec0 size=1344 callers=0 calls=24
   calls: sub_10014e0, sub_fcb060, sub_fd8060, sub_fd80b0, sub_fd8190, sub_fd8300, sub_fd84e0, sub_fd85d0, sub_fd87b0, sub_fd8c30, sub_fd99a0, sub_fe1400
   ... +12 more
   ref: DetermineBattleTeam
   ref: ConfirmQuit
   ref: DetermineLeader
   ref: AnyoneLeftNotice
*/
void DetermineBattleTeam_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe0ec0ULL || rel >= 0xfe1400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe1400 size=560 callers=2 calls=9
   calls: sub_67b990, sub_67bdb0, sub_67c120, sub_7c2280, sub_8dfba0, sub_8e0730, sub_8e0840, sub_8e0b00, sub_8e1490
*/
void sub_fe1400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe1400ULL || rel >= 0xfe1630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe1630 size=32 callers=0 calls=0
*/
void sub_fe1630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe1630ULL || rel >= 0xfe1650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe1650 size=112 callers=0 calls=0
*/
void sub_fe1650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe1650ULL || rel >= 0xfe16c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe16c0 size=112 callers=0 calls=0
*/
void sub_fe16c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe16c0ULL || rel >= 0xfe1730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe1730 size=16 callers=0 calls=0
*/
void sub_fe1730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe1730ULL || rel >= 0xfe1740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe1740 size=112 callers=0 calls=0
*/
void sub_fe1740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe1740ULL || rel >= 0xfe17b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe17b0 size=112 callers=0 calls=0
*/
void sub_fe17b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe17b0ULL || rel >= 0xfe1820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe1820 size=16 callers=0 calls=0
*/
void sub_fe1820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe1820ULL || rel >= 0xfe1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe1830 size=16 callers=0 calls=0
*/
void sub_fe1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe1830ULL || rel >= 0xfe1840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe1840 size=112 callers=0 calls=0
*/
void sub_fe1840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe1840ULL || rel >= 0xfe18b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe18b0 size=112 callers=0 calls=0
*/
void sub_fe18b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe18b0ULL || rel >= 0xfe1920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe1920 size=304 callers=0 calls=0
*/
void sub_fe1920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe1920ULL || rel >= 0xfe1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe1a50 size=128 callers=0 calls=0
*/
void sub_fe1a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe1a50ULL || rel >= 0xfe1ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe1ad0 size=480 callers=0 calls=9
   calls: sub_d0c0, sub_fc7b20, sub_fd7fb0, sub_fd7fd0, sub_fd80b0, sub_fd8c30, sub_fe1cb0, sub_ffcd60, sub_fffca0
   ref: DeterminePlayerPosMulti
*/
void DeterminePlayerPosMulti_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe1ad0ULL || rel >= 0xfe1cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe1cb0 size=192 callers=1 calls=3
   calls: sub_10009a0, sub_fd86b0, sub_fd8c30
*/
void sub_fe1cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe1cb0ULL || rel >= 0xfe1d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe1d70 size=1952 callers=0 calls=21
   calls: sub_1000280, sub_10002a0, sub_1000800, sub_10008e0, sub_10009a0, sub_1000a80, sub_10014e0, sub_6ae890, sub_6ba6a0, sub_6bb230, sub_fcb060, sub_fd8060
   ... +9 more
   ref: ConfirmQuit
   ref: SyncLast
   ref: AnyoneLeftNotice
*/
void AnyoneLeftNotice_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe1d70ULL || rel >= 0xfe2510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2510 size=80 callers=0 calls=2
   calls: sub_fd8c30, sub_ffcdc0
*/
void sub_fe2510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2510ULL || rel >= 0xfe2560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2560 size=16 callers=0 calls=0
*/
void sub_fe2560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2560ULL || rel >= 0xfe2570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2570 size=16 callers=0 calls=0
*/
void sub_fe2570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2570ULL || rel >= 0xfe2580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2580 size=128 callers=0 calls=0
*/
void sub_fe2580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2580ULL || rel >= 0xfe2600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2600 size=128 callers=0 calls=0
*/
void sub_fe2600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2600ULL || rel >= 0xfe2680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2680 size=16 callers=0 calls=0
*/
void sub_fe2680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2680ULL || rel >= 0xfe2690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2690 size=128 callers=0 calls=0
*/
void sub_fe2690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2690ULL || rel >= 0xfe2710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2710 size=128 callers=0 calls=0
*/
void sub_fe2710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2710ULL || rel >= 0xfe2790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2790 size=16 callers=0 calls=0
*/
void sub_fe2790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2790ULL || rel >= 0xfe27a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe27a0 size=16 callers=0 calls=0
*/
void sub_fe27a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe27a0ULL || rel >= 0xfe27b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe27b0 size=128 callers=0 calls=0
*/
void sub_fe27b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe27b0ULL || rel >= 0xfe2830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2830 size=128 callers=0 calls=0
*/
void sub_fe2830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2830ULL || rel >= 0xfe28b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe28b0 size=16 callers=0 calls=0
*/
void sub_fe28b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe28b0ULL || rel >= 0xfe28c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe28c0 size=304 callers=0 calls=0
*/
void sub_fe28c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe28c0ULL || rel >= 0xfe29f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe29f0 size=128 callers=0 calls=0
*/
void sub_fe29f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe29f0ULL || rel >= 0xfe2a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2a70 size=304 callers=0 calls=5
   calls: sub_d0c0, sub_fc7b20, sub_fd7fb0, sub_fd7fd0, sub_fd8010
*/
void sub_fe2a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2a70ULL || rel >= 0xfe2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2ba0 size=576 callers=0 calls=11
   calls: sub_10457e0, sub_10459c0, sub_104fb70, sub_1050060, sub_fc7570, sub_fcafe0, sub_fcb060, sub_fd8060, sub_fd84e0, sub_fd8c30, sub_fd99a0
*/
void sub_fe2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2ba0ULL || rel >= 0xfe2de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2de0 size=32 callers=0 calls=0
*/
void sub_fe2de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2de0ULL || rel >= 0xfe2e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2e00 size=144 callers=0 calls=0
*/
void sub_fe2e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2e00ULL || rel >= 0xfe2e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2e90 size=144 callers=0 calls=0
*/
void sub_fe2e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2e90ULL || rel >= 0xfe2f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2f20 size=16 callers=0 calls=0
*/
void sub_fe2f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2f20ULL || rel >= 0xfe2f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2f30 size=144 callers=0 calls=0
*/
void sub_fe2f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2f30ULL || rel >= 0xfe2fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe2fc0 size=144 callers=0 calls=0
*/
void sub_fe2fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe2fc0ULL || rel >= 0xfe3050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe3050 size=16 callers=0 calls=0
*/
void sub_fe3050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe3050ULL || rel >= 0xfe3060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe3060 size=16 callers=0 calls=0
*/
void sub_fe3060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe3060ULL || rel >= 0xfe3070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe3070 size=144 callers=0 calls=0
*/
void sub_fe3070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe3070ULL || rel >= 0xfe3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe3100 size=144 callers=0 calls=0
*/
void sub_fe3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe3100ULL || rel >= 0xfe3190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe3190 size=304 callers=0 calls=0
*/
void sub_fe3190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe3190ULL || rel >= 0xfe32c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe32c0 size=128 callers=0 calls=0
*/
void sub_fe32c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe32c0ULL || rel >= 0xfe3340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe3340 size=512 callers=2 calls=4
   calls: sub_1310f00, sub_5e2350, sub_67b7e0, sub_e81230
*/
void sub_fe3340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe3340ULL || rel >= 0xfe3540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe3540 size=624 callers=0 calls=2
   calls: sub_6aeb70, sub_fe5ce0
*/
void sub_fe3540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe3540ULL || rel >= 0xfe37b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe37b0 size=16 callers=0 calls=0
*/
void sub_fe37b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe37b0ULL || rel >= 0xfe37c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe37c0 size=16 callers=0 calls=0
*/
void sub_fe37c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe37c0ULL || rel >= 0xfe37d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe37d0 size=16 callers=0 calls=0
*/
void sub_fe37d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe37d0ULL || rel >= 0xfe37e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe37e0 size=16 callers=0 calls=0
*/
void sub_fe37e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe37e0ULL || rel >= 0xfe37f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe37f0 size=16 callers=0 calls=0
*/
void sub_fe37f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe37f0ULL || rel >= 0xfe3800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe3800 size=768 callers=1 calls=4
   calls: sub_5e2350, sub_6aea40, sub_6be8b0, sub_fe3b00
*/
void sub_fe3800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe3800ULL || rel >= 0xfe3b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe3b00 size=208 callers=2 calls=5
   calls: sub_1064840, sub_106e130, sub_bb5a90, sub_ff22f0, sub_ff3390
*/
void sub_fe3b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe3b00ULL || rel >= 0xfe3bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe3bd0 size=672 callers=1 calls=4
   calls: sub_5e2350, sub_6aea40, sub_6be8b0, sub_fe3b00
*/
void sub_fe3bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe3bd0ULL || rel >= 0xfe3e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe3e70 size=1328 callers=3 calls=23
   calls: RequestCloseSession, sub_1052c50, sub_10617c0, sub_abf400, sub_abf420, sub_fe43a0, sub_fe4800, sub_fe4b80, sub_fe4dc0, sub_fe5040, sub_fe53c0, sub_fe5610
   ... +11 more
*/
void sub_fe3e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe3e70ULL || rel >= 0xfe43a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe43a0 size=1120 callers=1 calls=16
   calls: sub_172bd80, sub_6cf5a0, sub_6cf8f0, sub_6cfbd0, sub_6d1070, sub_6d12e0, sub_6d13b0, sub_6d1450, sub_6d1490, sub_6d14f0, sub_6d7d80, sub_6d7e60
   ... +4 more
*/
void sub_fe43a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe43a0ULL || rel >= 0xfe4800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe4800 size=896 callers=1 calls=6
   calls: sub_1052c50, sub_abed80, sub_abf2c0, sub_abf2d0, sub_abf420, sub_fe6b60
*/
void sub_fe4800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe4800ULL || rel >= 0xfe4b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe4b80 size=576 callers=1 calls=7
   calls: sub_6ae890, sub_6ae9d0, sub_6d7610, sub_fe5ce0, sub_fe6c80, sub_fe8810, sub_fe9830
*/
void sub_fe4b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe4b80ULL || rel >= 0xfe4dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe4dc0 size=640 callers=2 calls=9
   calls: sub_65da00, sub_65daf0, sub_6d1070, sub_6f6640, sub_8dfff0, sub_c70, sub_ce0, sub_fe7170, sub_fecb00
*/
void sub_fe4dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe4dc0ULL || rel >= 0xfe5040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe5040 size=896 callers=1 calls=6
   calls: sub_89b390, sub_8dfba0, sub_8dfd80, sub_8e0080, sub_8e1430, sub_8e1460
*/
void sub_fe5040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe5040ULL || rel >= 0xfe53c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe53c0 size=480 callers=1 calls=4
   calls: sub_89b390, sub_8dfba0, sub_8dfd80, sub_8e0080
*/
void sub_fe53c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe53c0ULL || rel >= 0xfe55a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe55a0 size=112 callers=3 calls=3
   calls: sub_abf400, sub_fe5ce0, sub_ff23d0
*/
void sub_fe55a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe55a0ULL || rel >= 0xfe5610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe5610 size=528 callers=1 calls=5
   calls: sub_1052c50, sub_8ddc00, sub_8ddc20, sub_8dde50, sub_8ddec0
*/
void sub_fe5610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe5610ULL || rel >= 0xfe5820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe5820 size=256 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_fe7530, sub_feace0
*/
void sub_fe5820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe5820ULL || rel >= 0xfe5920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe5920 size=528 callers=1 calls=6
   calls: sub_6ae890, sub_6d7610, sub_fe5ce0, sub_fe6c80, sub_fe8810, sub_fe9830
*/
void sub_fe5920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe5920ULL || rel >= 0xfe5b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe5b30 size=432 callers=1 calls=3
   calls: sub_89b390, sub_8dfd80, sub_8e0080
*/
void sub_fe5b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe5b30ULL || rel >= 0xfe5ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe5ce0 size=320 callers=6 calls=4
   calls: sub_6d1530, sub_6d7910, sub_89a0f0, sub_fe85a0
*/
void sub_fe5ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe5ce0ULL || rel >= 0xfe5e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe5e20 size=32 callers=10 calls=0
*/
void sub_fe5e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe5e20ULL || rel >= 0xfe5e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe5e40 size=48 callers=1 calls=1
   calls: sub_10619f0
*/
void sub_fe5e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe5e40ULL || rel >= 0xfe5e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe5e70 size=48 callers=1 calls=0
*/
void sub_fe5e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe5e70ULL || rel >= 0xfe5ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe5ea0 size=1728 callers=2 calls=10
   calls: a_btl36_vs02, sound_attr, sub_1052c50, sub_10617e0, sub_10619f0, sub_136b4f0, sub_1c0, sub_7f4d70, sub_e88750, sub_e89590
   ref: NONE_NONE
*/
void NONE_NONE_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe5ea0ULL || rel >= 0xfe6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe6560 size=224 callers=2 calls=2
   calls: sub_6ae890, sub_6ae9d0
*/
void sub_fe6560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe6560ULL || rel >= 0xfe6640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe6640 size=1280 callers=2 calls=7
   calls: sub_1052c50, sub_1311c60, sub_13149a0, sub_136b780, sub_67b990, sub_abe950, sub_b6fa70
*/
void sub_fe6640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe6640ULL || rel >= 0xfe6b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe6b40 size=32 callers=2 calls=0
*/
void sub_fe6b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe6b40ULL || rel >= 0xfe6b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe6b60 size=288 callers=2 calls=1
   calls: sub_5fe6a0
*/
void sub_fe6b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe6b60ULL || rel >= 0xfe6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe6c80 size=1264 callers=2 calls=8
   calls: sub_5e2350, sub_6be8b0, sub_6bee70, sub_6d0a20, sub_6d1530, sub_6d1540, sub_6d7840, sub_6d7aa0
*/
void sub_fe6c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe6c80ULL || rel >= 0xfe7170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7170 size=480 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_fe85a0, sub_fea2c0
*/
void sub_fe7170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7170ULL || rel >= 0xfe7350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7350 size=480 callers=2 calls=4
   calls: sub_65da00, sub_65daf0, sub_fe85a0, sub_fea3f0
*/
void sub_fe7350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7350ULL || rel >= 0xfe7530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7530 size=208 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_fea520, sub_fea630
*/
void sub_fe7530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7530ULL || rel >= 0xfe7600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7600 size=16 callers=0 calls=0
*/
void sub_fe7600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7600ULL || rel >= 0xfe7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7610 size=16 callers=0 calls=0
*/
void sub_fe7610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7610ULL || rel >= 0xfe7620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7620 size=16 callers=0 calls=0
*/
void sub_fe7620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7620ULL || rel >= 0xfe7630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7630 size=16 callers=0 calls=0
*/
void sub_fe7630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7630ULL || rel >= 0xfe7640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7640 size=32 callers=0 calls=0
*/
void sub_fe7640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7640ULL || rel >= 0xfe7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7660 size=32 callers=0 calls=0
*/
void sub_fe7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7660ULL || rel >= 0xfe7680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7680 size=464 callers=0 calls=4
   calls: sub_1061800, sub_6d7ac0, sub_89b390, sub_fe7850
*/
void sub_fe7680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7680ULL || rel >= 0xfe7850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7850 size=304 callers=1 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_fe7850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7850ULL || rel >= 0xfe7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7980 size=16 callers=0 calls=0
*/
void sub_fe7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7980ULL || rel >= 0xfe7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7990 size=16 callers=0 calls=0
*/
void sub_fe7990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7990ULL || rel >= 0xfe79a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe79a0 size=16 callers=0 calls=0
*/
void sub_fe79a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe79a0ULL || rel >= 0xfe79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe79b0 size=128 callers=0 calls=2
   calls: sub_1061800, sub_1061810
*/
void sub_fe79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe79b0ULL || rel >= 0xfe7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7a30 size=128 callers=0 calls=2
   calls: sub_1061800, sub_1061810
*/
void sub_fe7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7a30ULL || rel >= 0xfe7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7ab0 size=240 callers=0 calls=0
*/
void sub_fe7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7ab0ULL || rel >= 0xfe7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7ba0 size=16 callers=0 calls=0
*/
void sub_fe7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7ba0ULL || rel >= 0xfe7bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7bb0 size=16 callers=0 calls=0
*/
void sub_fe7bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7bb0ULL || rel >= 0xfe7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7bc0 size=16 callers=0 calls=0
*/
void sub_fe7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7bc0ULL || rel >= 0xfe7bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7bd0 size=16 callers=0 calls=0
*/
void sub_fe7bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7bd0ULL || rel >= 0xfe7be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7be0 size=16 callers=0 calls=0
*/
void sub_fe7be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7be0ULL || rel >= 0xfe7bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7bf0 size=16 callers=0 calls=0
*/
void sub_fe7bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7bf0ULL || rel >= 0xfe7c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7c00 size=16 callers=0 calls=0
*/
void sub_fe7c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7c00ULL || rel >= 0xfe7c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7c10 size=16 callers=0 calls=0
*/
void sub_fe7c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7c10ULL || rel >= 0xfe7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7c20 size=160 callers=0 calls=0
*/
void sub_fe7c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7c20ULL || rel >= 0xfe7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7cc0 size=416 callers=0 calls=5
   calls: gflnet3_message_lite_2, network_live_start_sync_5, sub_65da00, sub_65daf0, sub_feb690
*/
void sub_fe7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7cc0ULL || rel >= 0xfe7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7e60 size=160 callers=0 calls=0
*/
void sub_fe7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7e60ULL || rel >= 0xfe7f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7f00 size=160 callers=0 calls=0
*/
void sub_fe7f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7f00ULL || rel >= 0xfe7fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe7fa0 size=160 callers=0 calls=0
*/
void sub_fe7fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe7fa0ULL || rel >= 0xfe8040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8040 size=160 callers=0 calls=0
*/
void sub_fe8040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8040ULL || rel >= 0xfe80e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe80e0 size=320 callers=1 calls=0
*/
void sub_fe80e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe80e0ULL || rel >= 0xfe8220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8220 size=288 callers=2 calls=3
   calls: sub_65da00, sub_65daf0, sub_fe8340
*/
void sub_fe8220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8220ULL || rel >= 0xfe8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8340 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_fe8340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8340ULL || rel >= 0xfe84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe84b0 size=240 callers=3 calls=3
   calls: sub_6d7d80, sub_89a0f0, sub_fe85a0
*/
void sub_fe84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe84b0ULL || rel >= 0xfe85a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe85a0 size=208 callers=7 calls=2
   calls: sub_65da00, sub_65daf0
*/
void sub_fe85a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe85a0ULL || rel >= 0xfe8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8670 size=48 callers=0 calls=0
*/
void sub_fe8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8670ULL || rel >= 0xfe86a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe86a0 size=64 callers=0 calls=0
*/
void sub_fe86a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe86a0ULL || rel >= 0xfe86e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe86e0 size=48 callers=0 calls=0
*/
void sub_fe86e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe86e0ULL || rel >= 0xfe8710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8710 size=48 callers=0 calls=0
*/
void sub_fe8710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8710ULL || rel >= 0xfe8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8740 size=48 callers=0 calls=0
*/
void sub_fe8740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8740ULL || rel >= 0xfe8770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8770 size=64 callers=0 calls=0
*/
void sub_fe8770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8770ULL || rel >= 0xfe87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe87b0 size=48 callers=0 calls=0
*/
void sub_fe87b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe87b0ULL || rel >= 0xfe87e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe87e0 size=48 callers=0 calls=0
*/
void sub_fe87e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe87e0ULL || rel >= 0xfe8810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8810 size=480 callers=2 calls=4
   calls: sub_5e2350, sub_6d04c0, sub_6d70e0, sub_899e80
*/
void sub_fe8810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8810ULL || rel >= 0xfe89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe89f0 size=496 callers=0 calls=3
   calls: sub_6d0670, sub_89a0f0, sub_fe85a0
*/
void sub_fe89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe89f0ULL || rel >= 0xfe8be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8be0 size=16 callers=0 calls=0
*/
void sub_fe8be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8be0ULL || rel >= 0xfe8bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8bf0 size=240 callers=0 calls=0
*/
void sub_fe8bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8bf0ULL || rel >= 0xfe8ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8ce0 size=32 callers=0 calls=0
*/
void sub_fe8ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8ce0ULL || rel >= 0xfe8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8d00 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_fe8d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8d00ULL || rel >= 0xfe8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8d60 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_fe8d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8d60ULL || rel >= 0xfe8df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8df0 size=368 callers=0 calls=2
   calls: sub_6ae9d0, sub_89a310
*/
void sub_fe8df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8df0ULL || rel >= 0xfe8f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe8f60 size=384 callers=0 calls=3
   calls: sub_6ae9d0, sub_6d7e60, sub_89a310
*/
void sub_fe8f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe8f60ULL || rel >= 0xfe90e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe90e0 size=464 callers=0 calls=4
   calls: sub_6ae9d0, sub_6d7aa0, sub_6d7e60, sub_89a310
*/
void sub_fe90e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe90e0ULL || rel >= 0xfe92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe92b0 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_fe92b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe92b0ULL || rel >= 0xfe9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9360 size=16 callers=0 calls=0
*/
void sub_fe9360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9360ULL || rel >= 0xfe9370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9370 size=16 callers=0 calls=0
*/
void sub_fe9370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9370ULL || rel >= 0xfe9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9380 size=16 callers=0 calls=0
*/
void sub_fe9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9380ULL || rel >= 0xfe9390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9390 size=16 callers=0 calls=0
*/
void sub_fe9390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9390ULL || rel >= 0xfe93a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe93a0 size=16 callers=0 calls=0
*/
void sub_fe93a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe93a0ULL || rel >= 0xfe93b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe93b0 size=16 callers=0 calls=0
*/
void sub_fe93b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe93b0ULL || rel >= 0xfe93c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe93c0 size=96 callers=0 calls=1
   calls: sub_6d80a0
*/
void sub_fe93c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe93c0ULL || rel >= 0xfe9420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9420 size=144 callers=0 calls=2
   calls: sub_6d1620, sub_6d7760
*/
void sub_fe9420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9420ULL || rel >= 0xfe94b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe94b0 size=176 callers=0 calls=2
   calls: sub_6ae9d0, sub_6bee70
*/
void sub_fe94b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe94b0ULL || rel >= 0xfe9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9560 size=16 callers=0 calls=0
*/
void sub_fe9560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9560ULL || rel >= 0xfe9570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9570 size=16 callers=0 calls=0
*/
void sub_fe9570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9570ULL || rel >= 0xfe9580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9580 size=16 callers=0 calls=0
*/
void sub_fe9580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9580ULL || rel >= 0xfe9590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9590 size=32 callers=0 calls=0
*/
void sub_fe9590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9590ULL || rel >= 0xfe95b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe95b0 size=80 callers=0 calls=1
   calls: sub_6d12e0
*/
void sub_fe95b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe95b0ULL || rel >= 0xfe9600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9600 size=16 callers=0 calls=0
*/
void sub_fe9600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9600ULL || rel >= 0xfe9610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9610 size=16 callers=0 calls=0
*/
void sub_fe9610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9610ULL || rel >= 0xfe9620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9620 size=16 callers=0 calls=0
*/
void sub_fe9620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9620ULL || rel >= 0xfe9630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9630 size=128 callers=0 calls=4
   calls: sub_6d7ac0, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_fe9630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9630ULL || rel >= 0xfe96b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe96b0 size=16 callers=0 calls=0
*/
void sub_fe96b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe96b0ULL || rel >= 0xfe96c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe96c0 size=32 callers=0 calls=0
*/
void sub_fe96c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe96c0ULL || rel >= 0xfe96e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe96e0 size=32 callers=0 calls=0
*/
void sub_fe96e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe96e0ULL || rel >= 0xfe9700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9700 size=224 callers=0 calls=5
   calls: sub_6d7aa0, sub_6d7d80, sub_6d9c40, sub_6d9cb0, sub_89a730
*/
void sub_fe9700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9700ULL || rel >= 0xfe97e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe97e0 size=16 callers=0 calls=0
*/
void sub_fe97e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe97e0ULL || rel >= 0xfe97f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe97f0 size=32 callers=0 calls=0
*/
void sub_fe97f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe97f0ULL || rel >= 0xfe9810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9810 size=32 callers=0 calls=0
*/
void sub_fe9810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9810ULL || rel >= 0xfe9830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9830 size=544 callers=4 calls=2
   calls: sub_5e2350, sub_89b480
*/
void sub_fe9830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9830ULL || rel >= 0xfe9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9a50 size=80 callers=0 calls=0
*/
void sub_fe9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9a50ULL || rel >= 0xfe9aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9aa0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_fe9aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9aa0ULL || rel >= 0xfe9b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9b10 size=16 callers=0 calls=0
*/
void sub_fe9b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9b10ULL || rel >= 0xfe9b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9b20 size=48 callers=0 calls=0
*/
void sub_fe9b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9b20ULL || rel >= 0xfe9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9b50 size=80 callers=0 calls=0
*/
void sub_fe9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9b50ULL || rel >= 0xfe9ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9ba0 size=80 callers=0 calls=0
*/
void sub_fe9ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9ba0ULL || rel >= 0xfe9bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9bf0 size=80 callers=0 calls=0
*/
void sub_fe9bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9bf0ULL || rel >= 0xfe9c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9c40 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_fe9c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9c40ULL || rel >= 0xfe9cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9cb0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_fe9cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9cb0ULL || rel >= 0xfe9d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9d20 size=80 callers=0 calls=0
*/
void sub_fe9d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9d20ULL || rel >= 0xfe9d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9d70 size=80 callers=0 calls=0
*/
void sub_fe9d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9d70ULL || rel >= 0xfe9dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9dc0 size=160 callers=0 calls=0
*/
void sub_fe9dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9dc0ULL || rel >= 0xfe9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fe9e60 size=480 callers=0 calls=6
   calls: gflnet3_message_lite_2, network_live_empty_5, sub_65da00, sub_65daf0, sub_fecd50, sub_fed6e0
*/
void sub_fe9e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9e60ULL || rel >= 0xfea040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fea040 size=160 callers=0 calls=0
*/
void sub_fea040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfea040ULL || rel >= 0xfea0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fea0e0 size=160 callers=0 calls=0
*/
void sub_fea0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfea0e0ULL || rel >= 0xfea180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fea180 size=160 callers=0 calls=0
*/
void sub_fea180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfea180ULL || rel >= 0xfea220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fea220 size=160 callers=0 calls=0
*/
void sub_fea220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfea220ULL || rel >= 0xfea2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fea2c0 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_c70, sub_fecb00, sub_fed250, sub_fed6e0, sub_fed980
*/
void sub_fea2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfea2c0ULL || rel >= 0xfea3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fea3f0 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_c70, sub_fec180, sub_fec680, sub_fed6e0, sub_fed980
*/
void sub_fea3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfea3f0ULL || rel >= 0xfea520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fea520 size=272 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_fea760
*/
void sub_fea520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfea520ULL || rel >= 0xfea630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fea630 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_c70, sub_feace0, sub_feb1e0, sub_feb690, sub_feb7d0
*/
void sub_fea630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfea630ULL || rel >= 0xfea760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fea760 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_fea760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfea760ULL || rel >= 0xfea8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fea8d0 size=128 callers=0 calls=0
*/
void sub_fea8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfea8d0ULL || rel >= 0xfea950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fea950 size=384 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
   ref: live_start_sync.proto
*/
void network_live_start_sync(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfea950ULL || rel >= 0xfeaad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feaad0 size=160 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
   ref: live_start_sync.proto
*/
void network_live_start_sync_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeaad0ULL || rel >= 0xfeab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feab70 size=80 callers=0 calls=0
*/
void sub_feab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeab70ULL || rel >= 0xfeabc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feabc0 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
   ref: live_start_sync.proto
*/
void network_live_start_sync_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeabc0ULL || rel >= 0xfeace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feace0 size=32 callers=4 calls=0
*/
void sub_feace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeace0ULL || rel >= 0xfead00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fead00 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_live_start_sync_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfead00ULL || rel >= 0xfead30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fead30 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_fead30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfead30ULL || rel >= 0xfead90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fead90 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_fead90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfead90ULL || rel >= 0xfeadf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feadf0 size=16 callers=0 calls=0
*/
void sub_feadf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeadf0ULL || rel >= 0xfeae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feae00 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
   ref: live_start_sync.proto
*/
void network_live_start_sync_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeae00ULL || rel >= 0xfeaed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feaed0 size=96 callers=0 calls=2
   calls: sub_c70, sub_feaf30
*/
void sub_feaed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeaed0ULL || rel >= 0xfeaf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feaf30 size=32 callers=1 calls=0
*/
void sub_feaf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeaf30ULL || rel >= 0xfeaf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feaf50 size=16 callers=0 calls=0
*/
void sub_feaf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeaf50ULL || rel >= 0xfeaf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feaf60 size=160 callers=1 calls=2
   calls: sub_70c480, sub_713480
*/
void sub_feaf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeaf60ULL || rel >= 0xfeb000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb000 size=16 callers=0 calls=0
*/
void sub_feb000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb000ULL || rel >= 0xfeb010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb010 size=16 callers=0 calls=0
*/
void sub_feb010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb010ULL || rel >= 0xfeb020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb020 size=16 callers=1 calls=0
*/
void sub_feb020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb020ULL || rel >= 0xfeb030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb030 size=352 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
   ref: live_start_sync.proto
*/
void network_live_start_sync_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb030ULL || rel >= 0xfeb190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb190 size=80 callers=0 calls=0
*/
void sub_feb190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb190ULL || rel >= 0xfeb1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb1e0 size=32 callers=1 calls=0
*/
void sub_feb1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb1e0ULL || rel >= 0xfeb200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb200 size=16 callers=0 calls=0
*/
void sub_feb200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb200ULL || rel >= 0xfeb210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb210 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_feb210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb210ULL || rel >= 0xfeb280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb280 size=16 callers=0 calls=0
*/
void sub_feb280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb280ULL || rel >= 0xfeb290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb290 size=32 callers=0 calls=0
*/
void sub_feb290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb290ULL || rel >= 0xfeb2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb2b0 size=16 callers=0 calls=0
*/
void sub_feb2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb2b0ULL || rel >= 0xfeb2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb2c0 size=16 callers=0 calls=0
*/
void sub_feb2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb2c0ULL || rel >= 0xfeb2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb2d0 size=160 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
   ref: live_start_sync.proto
*/
void network_live_start_sync_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb2d0ULL || rel >= 0xfeb370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb370 size=336 callers=0 calls=10
   calls: network_net_live_async_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
   ref: net_live_async_data_holder.proto
*/
void network_net_live_async_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb370ULL || rel >= 0xfeb4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb4c0 size=224 callers=3 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, network_live_start_sync_2, network_live_start_sync_5, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
   ref: net_live_async_data_holder.proto
*/
void network_net_live_async_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb4c0ULL || rel >= 0xfeb5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb5a0 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_feb5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb5a0ULL || rel >= 0xfeb600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb600 size=144 callers=0 calls=4
   calls: gflnet3_message_4, network_net_live_async_data_holder_2, sub_6fff50, sub_7007d0
*/
void sub_feb600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb600ULL || rel >= 0xfeb690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb690 size=32 callers=2 calls=0
*/
void sub_feb690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb690ULL || rel >= 0xfeb6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb6b0 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_feb6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb6b0ULL || rel >= 0xfeb740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb740 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_feb740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb740ULL || rel >= 0xfeb7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb7d0 size=64 callers=1 calls=0
*/
void sub_feb7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb7d0ULL || rel >= 0xfeb810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb810 size=16 callers=0 calls=0
*/
void sub_feb810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb810ULL || rel >= 0xfeb820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb820 size=96 callers=0 calls=2
   calls: sub_c70, sub_feb880
*/
void sub_feb820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb820ULL || rel >= 0xfeb880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb880 size=32 callers=1 calls=0
*/
void sub_feb880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb880ULL || rel >= 0xfeb8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb8a0 size=64 callers=0 calls=0
*/
void sub_feb8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb8a0ULL || rel >= 0xfeb8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feb8e0 size=416 callers=0 calls=8
   calls: sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_c70, sub_feace0, sub_feaf60
*/
void sub_feb8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeb8e0ULL || rel >= 0xfeba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feba80 size=32 callers=0 calls=0
*/
void sub_feba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeba80ULL || rel >= 0xfebaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00febaa0 size=96 callers=0 calls=0
*/
void sub_febaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfebaa0ULL || rel >= 0xfebb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00febb00 size=112 callers=0 calls=2
   calls: sub_70d000, sub_feb020
*/
void sub_febb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfebb00ULL || rel >= 0xfebb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00febb70 size=336 callers=0 calls=5
   calls: gflnet3_generated_message_util, network_live_start_sync_5, network_net_live_async_data_holder_2, sub_c70, sub_feace0
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_net_live_async_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfebb70ULL || rel >= 0xfebcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00febcc0 size=80 callers=0 calls=0
*/
void sub_febcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfebcc0ULL || rel >= 0xfebd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00febd10 size=16 callers=0 calls=0
*/
void sub_febd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfebd10ULL || rel >= 0xfebd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00febd20 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_febd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfebd20ULL || rel >= 0xfebd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00febd90 size=16 callers=0 calls=0
*/
void sub_febd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfebd90ULL || rel >= 0xfebda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00febda0 size=32 callers=0 calls=0
*/
void sub_febda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfebda0ULL || rel >= 0xfebdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00febdc0 size=16 callers=0 calls=0
*/
void sub_febdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfebdc0ULL || rel >= 0xfebdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00febdd0 size=16 callers=0 calls=0
*/
void sub_febdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfebdd0ULL || rel >= 0xfebde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00febde0 size=16 callers=0 calls=0
*/
void sub_febde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfebde0ULL || rel >= 0xfebdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00febdf0 size=384 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: live_empty.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_live_empty(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfebdf0ULL || rel >= 0xfebf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00febf70 size=160 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: live_empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_live_empty_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfebf70ULL || rel >= 0xfec010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec010 size=80 callers=0 calls=0
*/
void sub_fec010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec010ULL || rel >= 0xfec060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec060 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: live_empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_live_empty_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec060ULL || rel >= 0xfec180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec180 size=32 callers=5 calls=0
*/
void sub_fec180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec180ULL || rel >= 0xfec1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec1a0 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_live_empty_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec1a0ULL || rel >= 0xfec1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec1d0 size=96 callers=2 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_fec1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec1d0ULL || rel >= 0xfec230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec230 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_fec230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec230ULL || rel >= 0xfec290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec290 size=16 callers=0 calls=0
*/
void sub_fec290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec290ULL || rel >= 0xfec2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec2a0 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: live_empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_live_empty_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec2a0ULL || rel >= 0xfec370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec370 size=96 callers=0 calls=2
   calls: sub_c70, sub_fec3d0
*/
void sub_fec370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec370ULL || rel >= 0xfec3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec3d0 size=32 callers=1 calls=0
*/
void sub_fec3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec3d0ULL || rel >= 0xfec3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec3f0 size=16 callers=0 calls=0
*/
void sub_fec3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec3f0ULL || rel >= 0xfec400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec400 size=160 callers=1 calls=2
   calls: sub_70c480, sub_713480
*/
void sub_fec400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec400ULL || rel >= 0xfec4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec4a0 size=16 callers=0 calls=0
*/
void sub_fec4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec4a0ULL || rel >= 0xfec4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec4b0 size=16 callers=0 calls=0
*/
void sub_fec4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec4b0ULL || rel >= 0xfec4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec4c0 size=16 callers=1 calls=0
*/
void sub_fec4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec4c0ULL || rel >= 0xfec4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec4d0 size=352 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: live_empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_live_empty_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec4d0ULL || rel >= 0xfec630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec630 size=80 callers=0 calls=0
*/
void sub_fec630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec630ULL || rel >= 0xfec680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec680 size=32 callers=1 calls=0
*/
void sub_fec680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec680ULL || rel >= 0xfec6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec6a0 size=16 callers=0 calls=0
*/
void sub_fec6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec6a0ULL || rel >= 0xfec6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec6b0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_fec6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec6b0ULL || rel >= 0xfec720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec720 size=16 callers=0 calls=0
*/
void sub_fec720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec720ULL || rel >= 0xfec730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec730 size=32 callers=0 calls=0
*/
void sub_fec730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec730ULL || rel >= 0xfec750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec750 size=16 callers=0 calls=0
*/
void sub_fec750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec750ULL || rel >= 0xfec760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec760 size=16 callers=0 calls=0
*/
void sub_fec760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec760ULL || rel >= 0xfec770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec770 size=160 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: live_empty.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_live_empty_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec770ULL || rel >= 0xfec810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec810 size=256 callers=0 calls=9
   calls: network_live_regulation_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
   ref: CHECK failed: file != NULL: 
   ref: live_regulation.proto
*/
void network_live_regulation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec810ULL || rel >= 0xfec910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fec910 size=272 callers=5 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
   ref: live_regulation.proto
*/
void network_live_regulation_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfec910ULL || rel >= 0xfeca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feca20 size=80 callers=0 calls=0
*/
void sub_feca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeca20ULL || rel >= 0xfeca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feca70 size=144 callers=0 calls=4
   calls: gflnet3_message_4, network_live_regulation_2, sub_6fff50, sub_7007d0
*/
void sub_feca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeca70ULL || rel >= 0xfecb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fecb00 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_fecb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfecb00ULL || rel >= 0xfecba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fecba0 size=96 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_live_regulation_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfecba0ULL || rel >= 0xfecc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fecc00 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_fecc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfecc00ULL || rel >= 0xfecca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fecca0 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_fecca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfecca0ULL || rel >= 0xfecd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fecd40 size=16 callers=0 calls=0
*/
void sub_fecd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfecd40ULL || rel >= 0xfecd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fecd50 size=64 callers=3 calls=1
   calls: network_live_regulation_2
*/
void sub_fecd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfecd50ULL || rel >= 0xfecd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fecd90 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_c70, sub_fece50
*/
void sub_fecd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfecd90ULL || rel >= 0xfece50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fece50 size=32 callers=1 calls=0
*/
void sub_fece50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfece50ULL || rel >= 0xfece70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fece70 size=64 callers=0 calls=0
*/
void sub_fece70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfece70ULL || rel >= 0xfeceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feceb0 size=304 callers=1 calls=4
   calls: sub_6f6640, sub_70c480, sub_713480, sub_714c90
*/
void sub_feceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeceb0ULL || rel >= 0xfecfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fecfe0 size=48 callers=0 calls=0
*/
void sub_fecfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfecfe0ULL || rel >= 0xfed010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed010 size=64 callers=0 calls=0
*/
void sub_fed010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed010ULL || rel >= 0xfed050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed050 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_fed050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed050ULL || rel >= 0xfed0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed0f0 size=272 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_live_regulation_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_live_regulation_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed0f0ULL || rel >= 0xfed200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed200 size=80 callers=0 calls=0
*/
void sub_fed200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed200ULL || rel >= 0xfed250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed250 size=112 callers=1 calls=0
*/
void sub_fed250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed250ULL || rel >= 0xfed2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed2c0 size=16 callers=0 calls=0
*/
void sub_fed2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed2c0ULL || rel >= 0xfed2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed2d0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_fed2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed2d0ULL || rel >= 0xfed340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed340 size=16 callers=0 calls=0
*/
void sub_fed340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed340ULL || rel >= 0xfed350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed350 size=32 callers=0 calls=0
*/
void sub_fed350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed350ULL || rel >= 0xfed370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed370 size=16 callers=0 calls=0
*/
void sub_fed370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed370ULL || rel >= 0xfed380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed380 size=16 callers=0 calls=0
*/
void sub_fed380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed380ULL || rel >= 0xfed390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed390 size=16 callers=0 calls=0
*/
void sub_fed390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed390ULL || rel >= 0xfed3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed3a0 size=352 callers=0 calls=10
   calls: network_net_live_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: net_live_data_holder.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_net_live_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed3a0ULL || rel >= 0xfed500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed500 size=240 callers=3 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, network_live_empty_2, network_live_empty_5, network_live_regulation_2, sub_c70, sub_fecd50
   ref: net_live_data_holder.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_net_live_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed500ULL || rel >= 0xfed5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed5f0 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_fed5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed5f0ULL || rel >= 0xfed650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed650 size=144 callers=0 calls=4
   calls: gflnet3_message_4, network_net_live_data_holder_2, sub_6fff50, sub_7007d0
*/
void sub_fed650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed650ULL || rel >= 0xfed6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed6e0 size=32 callers=3 calls=0
*/
void sub_fed6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed6e0ULL || rel >= 0xfed700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed700 size=352 callers=0 calls=6
   calls: gflnet3_generated_message_util, network_live_empty_5, sub_c70, sub_fec180, sub_fecb00, sub_fecd50
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_net_live_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed700ULL || rel >= 0xfed860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed860 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_fed860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed860ULL || rel >= 0xfed8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed8f0 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_fed8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed8f0ULL || rel >= 0xfed980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed980 size=80 callers=2 calls=0
*/
void sub_fed980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed980ULL || rel >= 0xfed9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed9d0 size=16 callers=0 calls=0
*/
void sub_fed9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed9d0ULL || rel >= 0xfed9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fed9e0 size=96 callers=0 calls=2
   calls: sub_c70, sub_feda40
*/
void sub_fed9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfed9e0ULL || rel >= 0xfeda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feda40 size=32 callers=1 calls=0
*/
void sub_feda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeda40ULL || rel >= 0xfeda60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feda60 size=80 callers=0 calls=0
*/
void sub_feda60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeda60ULL || rel >= 0xfedab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fedab0 size=736 callers=0 calls=10
   calls: sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_c70, sub_fec180, sub_fec400, sub_fecb00, sub_feceb0
*/
void sub_fedab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfedab0ULL || rel >= 0xfedd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fedd90 size=96 callers=0 calls=1
   calls: sub_714af0
*/
void sub_fedd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfedd90ULL || rel >= 0xfeddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feddf0 size=224 callers=0 calls=0
*/
void sub_feddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeddf0ULL || rel >= 0xfeded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feded0 size=144 callers=0 calls=3
   calls: sub_70d000, sub_fec4c0, sub_fed050
*/
void sub_feded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeded0ULL || rel >= 0xfedf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fedf60 size=208 callers=0 calls=2
   calls: gflnet3_generated_message_util, network_net_live_data_holder_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_bu
*/
void network_net_live_data_holder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfedf60ULL || rel >= 0xfee030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee030 size=80 callers=0 calls=0
*/
void sub_fee030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee030ULL || rel >= 0xfee080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee080 size=16 callers=0 calls=0
*/
void sub_fee080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee080ULL || rel >= 0xfee090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee090 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_fee090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee090ULL || rel >= 0xfee100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee100 size=16 callers=0 calls=0
*/
void sub_fee100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee100ULL || rel >= 0xfee110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee110 size=32 callers=0 calls=0
*/
void sub_fee110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee110ULL || rel >= 0xfee130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee130 size=16 callers=0 calls=0
*/
void sub_fee130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee130ULL || rel >= 0xfee140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee140 size=16 callers=0 calls=0
*/
void sub_fee140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee140ULL || rel >= 0xfee150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee150 size=16 callers=0 calls=0
*/
void sub_fee150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee150ULL || rel >= 0xfee160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee160 size=800 callers=2 calls=4
   calls: sub_5e2350, sub_6be8b0, sub_fef460, sub_feffa0
*/
void sub_fee160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee160ULL || rel >= 0xfee480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee480 size=288 callers=0 calls=1
   calls: sub_ff00f0
*/
void sub_fee480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee480ULL || rel >= 0xfee5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee5a0 size=16 callers=0 calls=0
*/
void sub_fee5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee5a0ULL || rel >= 0xfee5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee5b0 size=16 callers=0 calls=0
*/
void sub_fee5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee5b0ULL || rel >= 0xfee5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee5c0 size=16 callers=0 calls=0
*/
void sub_fee5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee5c0ULL || rel >= 0xfee5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee5d0 size=16 callers=0 calls=0
*/
void sub_fee5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee5d0ULL || rel >= 0xfee5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee5e0 size=16 callers=0 calls=0
*/
void sub_fee5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee5e0ULL || rel >= 0xfee5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee5f0 size=16 callers=0 calls=0
*/
void sub_fee5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee5f0ULL || rel >= 0xfee600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee600 size=16 callers=0 calls=0
*/
void sub_fee600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee600ULL || rel >= 0xfee610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee610 size=336 callers=2 calls=3
   calls: sub_10619f0, sub_6ae890, sub_6ae9d0
*/
void sub_fee610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee610ULL || rel >= 0xfee760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee760 size=80 callers=1 calls=3
   calls: sub_fee7b0, sub_ff1db0, sub_ff1e00
*/
void sub_fee760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee760ULL || rel >= 0xfee7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee7b0 size=208 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_fef550, sub_fef660
*/
void sub_fee7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee7b0ULL || rel >= 0xfee880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee880 size=32 callers=2 calls=0
*/
void sub_fee880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee880ULL || rel >= 0xfee8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee8a0 size=144 callers=2 calls=1
   calls: sub_fee930
*/
void sub_fee8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee8a0ULL || rel >= 0xfee930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00fee930 size=592 callers=3 calls=7
   calls: sub_65da00, sub_65daf0, sub_6f6640, sub_c70, sub_ce0, sub_feebb0, sub_ff1570
*/
void sub_fee930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee930ULL || rel >= 0xfeeb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feeb80 size=48 callers=2 calls=1
   calls: sub_fee930
*/
void sub_feeb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeeb80ULL || rel >= 0xfeebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00feebb0 size=208 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_fef550, sub_fef900
*/
void sub_feebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeebb0ULL || rel >= 0xfeec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

