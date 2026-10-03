/* main functions 015e8eb0..01612510 (187 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 015e8eb0 size=224 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15e8eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e8eb0ULL || rel >= 0x15e8f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e8f90 size=240 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15e8f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e8f90ULL || rel >= 0x15e9080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e9080 size=16 callers=8 calls=0
*/
void sub_15e9080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e9080ULL || rel >= 0x15e9090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e9090 size=1264 callers=1 calls=13
   calls: prudps, sub_15b6dc0, sub_15b9340, sub_15b9390, sub_15bc1e0, sub_15bc310, sub_15bc5d0, sub_15e9900, sub_15ea560, sub_16109c0, sub_1618120, sub_1618500
   ... +1 more
*/
void sub_15e9090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e9090ULL || rel >= 0x15e9580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e9580 size=160 callers=5 calls=4
   calls: prudps, sub_15bc1e0, sub_1618500, sub_1618510
*/
void sub_15e9580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e9580ULL || rel >= 0x15e9620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e9620 size=48 callers=5 calls=1
   calls: sub_15ea440
*/
void sub_15e9620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e9620ULL || rel >= 0x15e9650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e9650 size=160 callers=24 calls=3
   calls: prudps, sub_15b6dc0, sub_1618120
*/
void sub_15e9650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e9650ULL || rel >= 0x15e96f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e96f0 size=144 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15e96f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e96f0ULL || rel >= 0x15e9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e9780 size=240 callers=1 calls=4
   calls: sub_15b6dc0, sub_15b9340, sub_15b9390, sub_1618120
*/
void sub_15e9780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e9780ULL || rel >= 0x15e9870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e9870 size=144 callers=11 calls=2
   calls: sub_15b6dc0, sub_1618120
*/
void sub_15e9870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e9870ULL || rel >= 0x15e9900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e9900 size=320 callers=45 calls=5
   calls: sub_15b9340, sub_15b9390, sub_1610b80, sub_1610f30, sub_1618200
*/
void sub_15e9900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e9900ULL || rel >= 0x15e9a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e9a40 size=128 callers=34 calls=2
   calls: sub_15b9390, sub_1611190
*/
void sub_15e9a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e9a40ULL || rel >= 0x15e9ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e9ac0 size=128 callers=0 calls=3
   calls: sub_15b9390, sub_1610dd0, sub_1611190
*/
void sub_15e9ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e9ac0ULL || rel >= 0x15e9b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e9b40 size=800 callers=129 calls=6
   calls: address_2, sub_15bbc90, sub_15eaad0, sub_1610dd0, sub_1611190, sub_1618170
   ref: prudps
*/
void prudps(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e9b40ULL || rel >= 0x15e9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015e9e60 size=1376 callers=2 calls=10
   calls: sub_15b9340, sub_15b9390, sub_15bc310, sub_15bc650, sub_1618110, sub_1618440, sub_16184e0, sub_1618500, sub_1618510, sub_1618580
   ref: %s%s%s
   ref: %s%s%u
   ref: %s%s%lu
   ref: address
*/
void address(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e9e60ULL || rel >= 0x15ea3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea3c0 size=64 callers=1 calls=1
   calls: prudps
*/
void sub_15ea3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea3c0ULL || rel >= 0x15ea400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea400 size=64 callers=1 calls=1
   calls: prudps
*/
void sub_15ea400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea400ULL || rel >= 0x15ea440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea440 size=288 callers=39 calls=6
   calls: Result_2, prudps, sub_15bc1e0, sub_15bc310, sub_1613190, sub_1613550
*/
void sub_15ea440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea440ULL || rel >= 0x15ea560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea560 size=368 callers=112 calls=5
   calls: prudps, sub_15bc1e0, sub_15bc310, sub_15bc650, sub_15ea440
*/
void sub_15ea560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea560ULL || rel >= 0x15ea6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea6d0 size=32 callers=2 calls=1
   calls: sub_15ea560
*/
void sub_15ea6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea6d0ULL || rel >= 0x15ea6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea6f0 size=48 callers=5 calls=1
   calls: sub_15ea440
*/
void sub_15ea6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea6f0ULL || rel >= 0x15ea720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea720 size=48 callers=5 calls=1
   calls: sub_15ea440
*/
void sub_15ea720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea720ULL || rel >= 0x15ea750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea750 size=32 callers=1 calls=1
   calls: sub_15ea560
*/
void sub_15ea750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea750ULL || rel >= 0x15ea770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea770 size=48 callers=6 calls=1
   calls: sub_15ea440
*/
void sub_15ea770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea770ULL || rel >= 0x15ea7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea7a0 size=32 callers=1 calls=1
   calls: sub_15ea560
*/
void sub_15ea7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea7a0ULL || rel >= 0x15ea7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea7c0 size=48 callers=1 calls=1
   calls: sub_15ea440
*/
void sub_15ea7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea7c0ULL || rel >= 0x15ea7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea7f0 size=48 callers=1 calls=1
   calls: sub_15ea440
*/
void sub_15ea7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea7f0ULL || rel >= 0x15ea820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea820 size=48 callers=3 calls=1
   calls: sub_15ea440
*/
void sub_15ea820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea820ULL || rel >= 0x15ea850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea850 size=32 callers=5 calls=1
   calls: sub_15ea560
*/
void sub_15ea850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea850ULL || rel >= 0x15ea870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea870 size=176 callers=2 calls=4
   calls: sub_15bab00, sub_15bc1e0, sub_15bc310, sub_16132b0
*/
void sub_15ea870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea870ULL || rel >= 0x15ea920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ea920 size=272 callers=2 calls=3
   calls: sub_15bc1e0, sub_15bc310, sub_15bc650
*/
void sub_15ea920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ea920ULL || rel >= 0x15eaa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eaa30 size=32 callers=2 calls=1
   calls: sub_15ea560
*/
void sub_15eaa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eaa30ULL || rel >= 0x15eaa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eaa50 size=48 callers=2 calls=1
   calls: sub_15ea440
*/
void sub_15eaa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eaa50ULL || rel >= 0x15eaa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eaa80 size=16 callers=1 calls=0
*/
void sub_15eaa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eaa80ULL || rel >= 0x15eaa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eaa90 size=64 callers=1 calls=1
   calls: address
*/
void sub_15eaa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eaa90ULL || rel >= 0x15eaad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eaad0 size=272 callers=1 calls=1
   calls: Result_2
*/
void sub_15eaad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eaad0ULL || rel >= 0x15eabe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eabe0 size=672 callers=3 calls=10
   calls: localhost_2, prudps, sub_15bab00, sub_15bc1e0, sub_15bc310, sub_1613400, sub_1618240, sub_1618410, sub_16184e0, sub_1618500
   ref: address
*/
void address_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eabe0ULL || rel >= 0x15eae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eae80 size=464 callers=5 calls=7
   calls: prudps, sub_15bc1e0, sub_15bc310, sub_15bc5d0, sub_15ea560, sub_1618500, sub_1618510
*/
void sub_15eae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eae80ULL || rel >= 0x15eb050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eb050 size=64 callers=1 calls=2
   calls: address, null_2
*/
void sub_15eb050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eb050ULL || rel >= 0x15eb090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eb090 size=800 callers=32 calls=4
   calls: sub_15b78f0, sub_15b79f0, sub_15cee20, sub_15cef80
*/
void sub_15eb090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eb090ULL || rel >= 0x15eb3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eb3b0 size=320 callers=0 calls=3
   calls: sub_15b9300, sub_15ceec0, sub_15cefa0
*/
void sub_15eb3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eb3b0ULL || rel >= 0x15eb4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eb4f0 size=1216 callers=0 calls=5
   calls: sub_15cee20, sub_15cef80, sub_15eb090, sub_1618120, sub_1c0
*/
void sub_15eb4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eb4f0ULL || rel >= 0x15eb9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eb9b0 size=144 callers=0 calls=2
   calls: sub_15b9300, sub_15ceec0
*/
void sub_15eb9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eb9b0ULL || rel >= 0x15eba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eba40 size=16 callers=0 calls=0
*/
void sub_15eba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eba40ULL || rel >= 0x15eba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eba50 size=32 callers=0 calls=0
*/
void sub_15eba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eba50ULL || rel >= 0x15eba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eba70 size=64 callers=0 calls=1
   calls: sub_15b9300
*/
void sub_15eba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eba70ULL || rel >= 0x15ebab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ebab0 size=240 callers=1 calls=3
   calls: sub_15b8d60, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_276(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ebab0ULL || rel >= 0x15ebba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ebba0 size=48 callers=0 calls=0
*/
void sub_15ebba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ebba0ULL || rel >= 0x15ebbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ebbd0 size=80 callers=0 calls=1
   calls: sub_15b9300
*/
void sub_15ebbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ebbd0ULL || rel >= 0x15ebc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ebc20 size=448 callers=2 calls=14
   calls: sub_15ba6a0, sub_15ba780, sub_15bca70, sub_15c3ed0, sub_15c3ee0, sub_15c63b0, sub_15c6480, sub_15c64b0, sub_15c66f0, sub_15c7dc0, sub_15c7dd0, sub_15c8140
   ... +2 more
*/
void sub_15ebc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ebc20ULL || rel >= 0x15ebde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ebde0 size=48 callers=1 calls=1
   calls: Result_2
*/
void sub_15ebde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ebde0ULL || rel >= 0x15ebe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ebe10 size=48 callers=1 calls=1
   calls: Result_2
*/
void sub_15ebe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ebe10ULL || rel >= 0x15ebe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ebe40 size=112 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15ebe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ebe40ULL || rel >= 0x15ebeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ebeb0 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15ebeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ebeb0ULL || rel >= 0x15ebf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ebf30 size=144 callers=1 calls=0
*/
void sub_15ebf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ebf30ULL || rel >= 0x15ebfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ebfc0 size=80 callers=0 calls=1
   calls: sub_16184e0
*/
void sub_15ebfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ebfc0ULL || rel >= 0x15ec010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ec010 size=80 callers=0 calls=1
   calls: sub_16184e0
*/
void sub_15ec010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ec010ULL || rel >= 0x15ec060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ec060 size=1312 callers=0 calls=18
   calls: prudps, sub_15b6dc0, sub_15b9340, sub_15b9390, sub_15e9900, sub_1610dd0, sub_1611190, sub_1618120, sub_1618200, sub_16184e0, sub_1618570, sub_1618830
   ... +6 more
   ref: prudp:/
*/
void unnamed_70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ec060ULL || rel >= 0x15ec580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ec580 size=128 callers=0 calls=6
   calls: localhost_2, sub_1616be0, sub_1618410, sub_1618570, sub_1618830, sub_1618840
   ref: 0.0.0.1
*/
void f_0_0_0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ec580ULL || rel >= 0x15ec600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ec600 size=32 callers=0 calls=1
   calls: localhost_2
*/
void sub_15ec600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ec600ULL || rel >= 0x15ec620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ec620 size=32 callers=0 calls=1
   calls: sub_1618410
*/
void sub_15ec620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ec620ULL || rel >= 0x15ec640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ec640 size=112 callers=0 calls=3
   calls: InstanceTable_201, InstanceTable_208, Result_2
*/
void sub_15ec640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ec640ULL || rel >= 0x15ec6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ec6b0 size=16 callers=0 calls=0
*/
void sub_15ec6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ec6b0ULL || rel >= 0x15ec6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ec6c0 size=16 callers=0 calls=0
*/
void sub_15ec6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ec6c0ULL || rel >= 0x15ec6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ec6d0 size=1072 callers=0 calls=8
   calls: sub_15b6dc0, sub_15b9340, sub_15b9390, sub_15e8d60, sub_15e9090, sub_15e9900, sub_16109c0, sub_1618120
*/
void sub_15ec6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ec6d0ULL || rel >= 0x15ecb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ecb00 size=224 callers=0 calls=8
   calls: localhost_2, prudps, sub_15bc1e0, sub_15bc310, sub_1618120, sub_16184e0, sub_1618500, sub_1618510
*/
void sub_15ecb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ecb00ULL || rel >= 0x15ecbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ecbe0 size=16 callers=0 calls=0
*/
void sub_15ecbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ecbe0ULL || rel >= 0x15ecbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ecbf0 size=16 callers=0 calls=0
*/
void sub_15ecbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ecbf0ULL || rel >= 0x15ecc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ecc00 size=16 callers=0 calls=0
*/
void sub_15ecc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ecc00ULL || rel >= 0x15ecc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ecc10 size=16 callers=0 calls=0
*/
void sub_15ecc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ecc10ULL || rel >= 0x15ecc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ecc20 size=368 callers=1 calls=12
   calls: sub_15b6dc0, sub_15b8d60, sub_15c3fe0, sub_15c63b0, sub_15c74b0, sub_15c7580, sub_15c7bc0, sub_15c7dc0, sub_15c7dd0, sub_15c8140, sub_15ce160, sub_15ce560
*/
void sub_15ecc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ecc20ULL || rel >= 0x15ecd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ecd90 size=128 callers=0 calls=1
   calls: InstanceTable_277
*/
void sub_15ecd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ecd90ULL || rel >= 0x15ece10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ece10 size=560 callers=18 calls=3
   calls: InstanceTable_279, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_277(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ece10ULL || rel >= 0x15ed040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ed040 size=112 callers=0 calls=2
   calls: InstanceTable_277, sub_15b9390
*/
void sub_15ed040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ed040ULL || rel >= 0x15ed0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ed0b0 size=592 callers=5 calls=4
   calls: InstanceTable_279, sub_15b8dc0, sub_1613de0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_278(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ed0b0ULL || rel >= 0x15ed300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ed300 size=448 callers=6 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_279(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ed300ULL || rel >= 0x15ed4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ed4c0 size=1120 callers=1 calls=11
   calls: InstanceTable_275, InstanceTable_279, prudps, sub_15b6dc0, sub_15b8dc0, sub_15b9390, sub_1610dd0, sub_1611190, sub_1618120, sub_1618200, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ed4c0ULL || rel >= 0x15ed920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ed920 size=16 callers=0 calls=0
*/
void sub_15ed920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ed920ULL || rel >= 0x15ed930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ed930 size=16 callers=0 calls=0
*/
void sub_15ed930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ed930ULL || rel >= 0x15ed940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ed940 size=256 callers=3 calls=4
   calls: sub_15b6dc0, sub_15b8d60, sub_15e9900, sub_1618120
*/
void sub_15ed940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ed940ULL || rel >= 0x15eda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eda40 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15eda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eda40ULL || rel >= 0x15edac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015edac0 size=128 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_15edac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15edac0ULL || rel >= 0x15edb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015edb40 size=192 callers=1 calls=4
   calls: sub_15b78f0, sub_15c0230, sub_15edc00, sub_6a5230
*/
void sub_15edb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15edb40ULL || rel >= 0x15edc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015edc00 size=464 callers=3 calls=3
   calls: sub_15b78f0, sub_15b9340, sub_6a5230
*/
void sub_15edc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15edc00ULL || rel >= 0x15eddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eddd0 size=464 callers=1 calls=6
   calls: sub_15b9300, sub_15b9390, sub_15ba7a0, sub_15bbef0, sub_15c02a0, sub_15ee6e0
*/
void sub_15eddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eddd0ULL || rel >= 0x15edfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015edfa0 size=48 callers=0 calls=1
   calls: sub_15eddd0
*/
void sub_15edfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15edfa0ULL || rel >= 0x15edfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015edfd0 size=272 callers=0 calls=5
   calls: sub_15b6dc0, sub_15b9ef0, sub_15ba370, sub_15bc1e0, sub_15bc310
   ref: TransportBufferThread(send)
*/
void TransportBufferThread_send(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15edfd0ULL || rel >= 0x15ee0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ee0e0 size=176 callers=0 calls=3
   calls: sub_15bbdb0, sub_15cf150, sub_15ee220
*/
void sub_15ee0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ee0e0ULL || rel >= 0x15ee190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ee190 size=144 callers=0 calls=2
   calls: sub_15ba7a0, sub_15bbef0
*/
void sub_15ee190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ee190ULL || rel >= 0x15ee220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ee220 size=272 callers=3 calls=4
   calls: sub_15f68e0, sub_1618120, sub_16184e0, sub_161e190
*/
void sub_15ee220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ee220ULL || rel >= 0x15ee330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ee330 size=32 callers=0 calls=0
*/
void sub_15ee330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ee330ULL || rel >= 0x15ee350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ee350 size=880 callers=0 calls=4
   calls: TransportBufferThread_recv, sub_15b8e10, sub_15b9340, sub_15b9390
*/
void sub_15ee350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ee350ULL || rel >= 0x15ee6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ee6c0 size=32 callers=0 calls=0
*/
void sub_15ee6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ee6c0ULL || rel >= 0x15ee6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ee6e0 size=752 callers=3 calls=2
   calls: sub_15ba7a0, sub_161db80
*/
void sub_15ee6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ee6e0ULL || rel >= 0x15ee9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ee9d0 size=752 callers=1 calls=4
   calls: sub_15f6a50, sub_1618120, sub_16184e0, sub_161e5f0
*/
void sub_15ee9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ee9d0ULL || rel >= 0x15eecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eecc0 size=944 callers=1 calls=4
   calls: sub_15f6a50, sub_1618120, sub_16184e0, sub_161e5f0
*/
void sub_15eecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eecc0ULL || rel >= 0x15ef070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ef070 size=112 callers=0 calls=4
   calls: sub_15b8e10, sub_15cf150, sub_15ee9d0, sub_15eecc0
*/
void sub_15ef070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ef070ULL || rel >= 0x15ef0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ef0e0 size=336 callers=1 calls=8
   calls: null_2, sub_15b6dc0, sub_15b9ef0, sub_15ba370, sub_15bc1e0, sub_15bc310, sub_15bd810, sub_15bd850
   ref: TransportBufferThread(recv 
*/
void TransportBufferThread_recv(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ef0e0ULL || rel >= 0x15ef230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ef230 size=240 callers=1 calls=5
   calls: sub_15b6dc0, sub_15b8d60, sub_15d7ad0, sub_1618120, sub_6a5230
*/
void sub_15ef230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ef230ULL || rel >= 0x15ef320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ef320 size=128 callers=0 calls=2
   calls: InstanceTable_233, InstanceTable_277
*/
void sub_15ef320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ef320ULL || rel >= 0x15ef3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ef3a0 size=144 callers=0 calls=3
   calls: InstanceTable_233, InstanceTable_277, sub_16184e0
*/
void sub_15ef3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ef3a0ULL || rel >= 0x15ef430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ef430 size=240 callers=3 calls=7
   calls: sub_1616220, sub_16180e0, sub_1618110, sub_1618120, sub_1618200, sub_16184e0, sub_1618500
*/
void sub_15ef430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ef430ULL || rel >= 0x15ef520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ef520 size=288 callers=3 calls=6
   calls: sub_1616330, sub_16180e0, sub_16181b0, sub_1618200, sub_16184e0, sub_1618500
*/
void sub_15ef520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ef520ULL || rel >= 0x15ef640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ef640 size=608 callers=1 calls=8
   calls: sub_15ef8a0, sub_1616220, sub_1618110, sub_1618120, sub_1618200, sub_16184e0, sub_1618500, sub_6a5230
*/
void sub_15ef640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ef640ULL || rel >= 0x15ef8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ef8a0 size=224 callers=1 calls=4
   calls: InstanceTable_237, InstanceTable_344, sub_15b6dc0, sub_15bbf80
*/
void sub_15ef8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ef8a0ULL || rel >= 0x15ef980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ef980 size=224 callers=2 calls=3
   calls: sub_15c42c0, sub_15c42d0, sub_15c6470
*/
void sub_15ef980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ef980ULL || rel >= 0x15efa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015efa60 size=16 callers=0 calls=0
*/
void sub_15efa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15efa60ULL || rel >= 0x15efa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015efa70 size=336 callers=0 calls=3
   calls: sub_15ef980, sub_15efbc0, sub_15efe30
*/
void sub_15efa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15efa70ULL || rel >= 0x15efbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015efbc0 size=624 callers=1 calls=2
   calls: Buffer_2, sub_15c3ee0
*/
void sub_15efbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15efbc0ULL || rel >= 0x15efe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015efe30 size=256 callers=1 calls=3
   calls: sub_15c81e0, sub_15c8830, sub_15c88c0
*/
void sub_15efe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15efe30ULL || rel >= 0x15eff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015eff30 size=176 callers=0 calls=1
   calls: sub_15effe0
*/
void sub_15eff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15eff30ULL || rel >= 0x15effe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015effe0 size=832 callers=1 calls=6
   calls: sub_15b6dc0, sub_15c3ee0, sub_15c7dd0, sub_15c81e0, sub_15c8830, sub_15c88c0
*/
void sub_15effe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15effe0ULL || rel >= 0x15f0320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f0320 size=736 callers=0 calls=8
   calls: sub_15c3ee0, sub_15c42c0, sub_15c42d0, sub_15c6470, sub_15c8a70, sub_15c8ad0, sub_15c8c60, sub_15ef980
*/
void sub_15f0320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f0320ULL || rel >= 0x15f0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f0600 size=560 callers=0 calls=5
   calls: sub_15ef520, sub_15f0830, sub_1618440, sub_16184e0, sub_6a5230
*/
void sub_15f0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f0600ULL || rel >= 0x15f0830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f0830 size=224 callers=2 calls=4
   calls: sub_15b9390, sub_1616520, sub_16184e0, sub_6f9720
*/
void sub_15f0830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f0830ULL || rel >= 0x15f0910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f0910 size=16 callers=0 calls=0
*/
void sub_15f0910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f0910ULL || rel >= 0x15f0920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f0920 size=928 callers=1 calls=14
   calls: InstanceTable_216, InstanceTable_233, InstanceTable_277, InstanceTable_278, sub_15b6dc0, sub_15b9340, sub_15b9390, sub_15bb2f0, sub_15c7dd0, sub_15e8560, sub_15ef230, sub_160b5c0
   ... +2 more
   ref: Transport Job
*/
void Transport_Job(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f0920ULL || rel >= 0x15f0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f0cc0 size=1408 callers=2 calls=18
   calls: InstanceTable_217, InstanceTable_233, InstanceTable_277, InstanceTable_282, sub_15b6e10, sub_15b8dc0, sub_15b9390, sub_15bb460, sub_15c8140, sub_15e88a0, sub_15f4410, sub_15f6480
   ... +6 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_281(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f0cc0ULL || rel >= 0x15f1240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f1240 size=528 callers=1 calls=3
   calls: sub_15b8dc0, sub_15d0120, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_282(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f1240ULL || rel >= 0x15f1450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f1450 size=96 callers=0 calls=0
*/
void sub_15f1450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f1450ULL || rel >= 0x15f14b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f14b0 size=160 callers=0 calls=0
*/
void sub_15f14b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f14b0ULL || rel >= 0x15f1550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f1550 size=48 callers=0 calls=1
   calls: InstanceTable_281
*/
void sub_15f1550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f1550ULL || rel >= 0x15f1580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f1580 size=96 callers=0 calls=3
   calls: InstanceTable_283, Result_2, sub_16180c0
*/
void sub_15f1580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f1580ULL || rel >= 0x15f15e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f15e0 size=816 callers=1 calls=11
   calls: sub_15b6dc0, sub_15b6e10, sub_15b8dc0, sub_15bc1e0, sub_15bc310, sub_15c5880, sub_15d1f40, sub_15edb40, sub_15f62f0, sub_15f6480, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: SocketTransport::TransportJob
*/
void InstanceTable_283(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f15e0ULL || rel >= 0x15f1910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f1910 size=1328 callers=1 calls=12
   calls: InstanceTable_346, sub_15b6dc0, sub_15c7dd0, sub_15f6560, sub_16144e0, sub_1618110, sub_1618120, sub_1618410, sub_16184e0, sub_1619730, sub_16199e0, sub_161be70
*/
void sub_15f1910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f1910ULL || rel >= 0x15f1e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f1e40 size=384 callers=0 calls=8
   calls: InstanceTable_285, prudps, sub_15b8dc0, sub_15bc310, sub_15bca70, sub_15ea920, sub_1619d20, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_284(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f1e40ULL || rel >= 0x15f1fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f1fc0 size=608 callers=9 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_285(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f1fc0ULL || rel >= 0x15f2220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f2220 size=1200 callers=0 calls=11
   calls: InstanceTable_285, prudps, sub_15b8dc0, sub_15b9390, sub_15e6fd0, sub_15ea440, sub_15f1910, sub_1618110, sub_1618410, sub_161cea0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_286(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f2220ULL || rel >= 0x15f26d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f26d0 size=64 callers=0 calls=0
*/
void sub_15f26d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f26d0ULL || rel >= 0x15f2710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f2710 size=288 callers=0 calls=4
   calls: InstanceTable_285, sub_15b8dc0, sub_161d050, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_287(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f2710ULL || rel >= 0x15f2830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f2830 size=288 callers=0 calls=4
   calls: InstanceTable_285, sub_15b8dc0, sub_161d4f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_288(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f2830ULL || rel >= 0x15f2950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f2950 size=272 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_289(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f2950ULL || rel >= 0x15f2a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f2a60 size=32 callers=0 calls=0
*/
void sub_15f2a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f2a60ULL || rel >= 0x15f2a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f2a80 size=1360 callers=0 calls=9
   calls: InstanceTable_285, prudps, sub_15b8dc0, sub_15b9390, sub_15e71a0, sub_15ea440, sub_1618410, sub_1619730, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f2a80ULL || rel >= 0x15f2fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f2fd0 size=832 callers=1 calls=9
   calls: prudps, sub_15b6dc0, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15e9900, sub_1618120, sub_1618410, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_291(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f2fd0ULL || rel >= 0x15f3310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f3310 size=224 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_292(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f3310ULL || rel >= 0x15f33f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f33f0 size=272 callers=0 calls=3
   calls: InstanceTable_285, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_293(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f33f0ULL || rel >= 0x15f3500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f3500 size=736 callers=0 calls=10
   calls: InstanceTable_285, prudps, sub_15b6dc0, sub_15b8dc0, sub_15b9390, sub_1610dd0, sub_1611190, sub_1618120, sub_1618200, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_294(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f3500ULL || rel >= 0x15f37e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f37e0 size=752 callers=0 calls=9
   calls: InstanceTable_237, InstanceTable_344, Result_2, prudps, sub_15b6dc0, sub_15b8dc0, sub_15bbf80, sub_1618200, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_295(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f37e0ULL || rel >= 0x15f3ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f3ad0 size=512 callers=1 calls=10
   calls: InstanceTable_275, InstanceTable_348, sub_15b8dc0, sub_16180e0, sub_1618110, sub_16181b0, sub_16184e0, sub_161cea0, sub_161d4f0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_296(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f3ad0ULL || rel >= 0x15f3cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f3cd0 size=96 callers=0 calls=1
   calls: InstanceTable_285
*/
void sub_15f3cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f3cd0ULL || rel >= 0x15f3d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f3d30 size=16 callers=0 calls=0
*/
void sub_15f3d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f3d30ULL || rel >= 0x15f3d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f3d40 size=432 callers=1 calls=5
   calls: sub_15b8dc0, sub_15f3ef0, sub_15f4070, sub_161cb70, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_297(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f3d40ULL || rel >= 0x15f3ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f3ef0 size=384 callers=1 calls=2
   calls: InstanceTable_280, sub_15f42f0
*/
void sub_15f3ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f3ef0ULL || rel >= 0x15f4070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f4070 size=640 callers=1 calls=9
   calls: InstanceTable_285, InstanceTable_298, sub_15ef430, sub_15f46f0, sub_15f5840, sub_15f5a10, sub_160b230, sub_16181b0, sub_16184e0
*/
void sub_15f4070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f4070ULL || rel >= 0x15f42f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f42f0 size=288 callers=1 calls=4
   calls: InstanceTable_296, sub_15f4530, sub_1618120, sub_16184e0
*/
void sub_15f42f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f42f0ULL || rel >= 0x15f4410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f4410 size=288 callers=4 calls=0
*/
void sub_15f4410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f4410ULL || rel >= 0x15f4530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f4530 size=448 callers=1 calls=5
   calls: sub_15b6dc0, sub_15c7dd0, sub_160c2a0, sub_1618120, sub_16184e0
*/
void sub_15f4530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f4530ULL || rel >= 0x15f46f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f46f0 size=1088 callers=2 calls=1
   calls: sub_15b8d60
*/
void sub_15f46f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f46f0ULL || rel >= 0x15f4b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f4b30 size=3344 callers=1 calls=16
   calls: InstanceTable_345, InstanceTable_347, sub_15b6dc0, sub_15b8d60, sub_15b8dc0, sub_15bbf80, sub_15c3ee0, sub_15c7dd0, sub_15c8830, sub_15c88c0, sub_15c8a70, sub_15c8c60
   ... +4 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_298(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f4b30ULL || rel >= 0x15f5840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f5840 size=464 callers=1 calls=8
   calls: sub_15ef430, sub_15f5aa0, sub_160b230, sub_1614200, sub_1616be0, sub_1618110, sub_1618440, sub_16184e0
*/
void sub_15f5840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f5840ULL || rel >= 0x15f5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f5a10 size=144 callers=1 calls=4
   calls: sub_160c500, sub_160cd50, sub_1618120, sub_16184e0
*/
void sub_15f5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f5a10ULL || rel >= 0x15f5aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f5aa0 size=608 callers=1 calls=7
   calls: sub_15ef430, sub_15ef640, sub_15f5d00, sub_160b230, sub_1616ac0, sub_1618120, sub_16184e0
*/
void sub_15f5aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f5aa0ULL || rel >= 0x15f5d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f5d00 size=528 callers=1 calls=6
   calls: sub_160b320, sub_1616220, sub_1618120, sub_1618200, sub_16184e0, sub_6a5230
*/
void sub_15f5d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f5d00ULL || rel >= 0x15f5f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f5f10 size=16 callers=0 calls=0
*/
void sub_15f5f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f5f10ULL || rel >= 0x15f5f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f5f20 size=16 callers=0 calls=0
*/
void sub_15f5f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f5f20ULL || rel >= 0x15f5f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f5f30 size=960 callers=0 calls=0
*/
void sub_15f5f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f5f30ULL || rel >= 0x15f62f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f62f0 size=400 callers=1 calls=4
   calls: sub_15b6dc0, sub_15b78f0, sub_15b9340, sub_15c7dd0
*/
void sub_15f62f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f62f0ULL || rel >= 0x15f6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f6480 size=224 callers=2 calls=2
   calls: sub_15b6e10, sub_15b9390
*/
void sub_15f6480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f6480ULL || rel >= 0x15f6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f6560 size=464 callers=2 calls=3
   calls: sub_15b78f0, sub_15b9340, sub_1618120
*/
void sub_15f6560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f6560ULL || rel >= 0x15f6730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f6730 size=160 callers=4 calls=4
   calls: sub_15b9300, sub_15b9390, sub_15f67d0, sub_16184e0
*/
void sub_15f6730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f6730ULL || rel >= 0x15f67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f67d0 size=272 callers=1 calls=0
*/
void sub_15f67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f67d0ULL || rel >= 0x15f68e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f68e0 size=368 callers=2 calls=2
   calls: sub_15c8420, sub_1618200
*/
void sub_15f68e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f68e0ULL || rel >= 0x15f6a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f6a50 size=512 callers=3 calls=4
   calls: sub_15b6dc0, sub_15c7dd0, sub_15c8420, sub_1618200
*/
void sub_15f6a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f6a50ULL || rel >= 0x15f6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f6c50 size=416 callers=2 calls=2
   calls: sub_15b9390, sub_6f9720
*/
void sub_15f6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f6c50ULL || rel >= 0x15f6df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f6df0 size=496 callers=1 calls=2
   calls: sub_15b9340, sub_6a54a0
*/
void sub_15f6df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f6df0ULL || rel >= 0x15f6fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f6fe0 size=384 callers=1 calls=2
   calls: sub_15b9390, sub_6f9720
*/
void sub_15f6fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f6fe0ULL || rel >= 0x15f7160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f7160 size=80 callers=0 calls=1
   calls: sub_15ceec0
*/
void sub_15f7160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f7160ULL || rel >= 0x15f71b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f71b0 size=16 callers=0 calls=0
*/
void sub_15f71b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f71b0ULL || rel >= 0x15f71c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f71c0 size=448 callers=0 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_15f71c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f71c0ULL || rel >= 0x15f7380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f7380 size=240 callers=0 calls=4
   calls: InstanceTable_300, sub_15b8dc0, sub_15f7600, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_299(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f7380ULL || rel >= 0x15f7470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f7470 size=400 callers=4 calls=3
   calls: InstanceTable_303, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f7470ULL || rel >= 0x15f7600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f7600 size=208 callers=2 calls=2
   calls: InstanceTable_344, sub_15b6dc0
*/
void sub_15f7600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f7600ULL || rel >= 0x15f76d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f76d0 size=1184 callers=2 calls=9
   calls: sub_15b6dc0, sub_15b9340, sub_15b9390, sub_15f7b70, sub_1615060, sub_1615290, sub_1615470, sub_16155b0, sub_6a5230
*/
void sub_15f76d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f76d0ULL || rel >= 0x15f7b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f7b70 size=608 callers=1 calls=2
   calls: sub_15b9390, sub_1614ba0
*/
void sub_15f7b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f7b70ULL || rel >= 0x15f7dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f7dd0 size=2672 callers=1 calls=14
   calls: InstanceTable_344, sub_15b6dc0, sub_15b8d60, sub_15b8dc0, sub_15b9340, sub_15baeb0, sub_15bb2f0, sub_15bde80, sub_15be030, sub_15e75c0, sub_15e9900, sub_15ea560
   ... +2 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_301(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f7dd0ULL || rel >= 0x15f8840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f8840 size=1232 callers=1 calls=12
   calls: InstanceTable_300, InstanceTable_303, InstanceTable_304, InstanceTable_343, sub_15b6e10, sub_15b8dc0, sub_15b9390, sub_15bb460, sub_15d4b50, sub_15f6c50, sub_1611470, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_302(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f8840ULL || rel >= 0x15f8d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f8d10 size=960 callers=6 calls=4
   calls: sub_15b8dc0, sub_15b9390, sub_6a5230, sub_6f9720
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_303(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f8d10ULL || rel >= 0x15f90d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f90d0 size=608 callers=2 calls=4
   calls: sub_15b8dc0, sub_15b9390, sub_6a5230, sub_6f9720
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_304(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f90d0ULL || rel >= 0x15f9330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f9330 size=208 callers=0 calls=0
*/
void sub_15f9330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f9330ULL || rel >= 0x15f9400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f9400 size=48 callers=0 calls=1
   calls: InstanceTable_302
*/
void sub_15f9400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f9400ULL || rel >= 0x15f9430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f9430 size=1472 callers=0 calls=13
   calls: InstanceTable_305, Result_2, prudps, sub_15b8dc0, sub_15baa10, sub_15baa20, sub_15bc0a0, sub_15bc130, sub_15bde80, sub_15be030, sub_15d1dc0, sub_1618200
   ... +1 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp
   ref: (IsConnecting() && !Core::GetInstance()->GetTerminateImmediately())
   ref: IsConnecting()
*/
void PRUDPEndPoint(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f9430ULL || rel >= 0x15f99f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f99f0 size=768 callers=3 calls=8
   calls: InstanceTable_306, InstanceTable_310, sub_15b8dc0, sub_15bde80, sub_15be030, sub_15ea560, sub_15fcf60, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_305(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f99f0ULL || rel >= 0x15f9cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015f9cf0 size=1696 callers=0 calls=16
   calls: InstanceTable_306, InstanceTable_344, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15baa10, sub_15baa20, sub_15bbc90, sub_15bc0a0, sub_15bc130, sub_15bde80, sub_15be030
   ... +4 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
   ref: C:/home/ws/hac-appor/Pack/7923402a/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp
   ref: (IsDisconnecting() && !Core::GetInstance()->GetTerminateImmediately())
   ref: IsDisconnecting()
*/
void PRUDPEndPoint_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f9cf0ULL || rel >= 0x15fa390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fa390 size=1632 callers=3 calls=11
   calls: sub_15b6dc0, sub_15b6e10, sub_15b9340, sub_15b9390, sub_15bbf80, sub_15c7dd0, sub_15c8140, sub_15c8390, sub_15c8830, sub_15c8ad0, sub_15fd760
*/
void sub_15fa390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fa390ULL || rel >= 0x15fa9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fa9f0 size=1456 callers=3 calls=8
   calls: sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15bde80, sub_15be030, sub_6a5230, sub_6a54a0, sub_6f9720
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_306(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fa9f0ULL || rel >= 0x15fafa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fafa0 size=1136 callers=11 calls=15
   calls: InstanceTable_309, InstanceTable_310, Result_2, prudps, sub_15bde80, sub_15be030, sub_15ea560, sub_15fc580, sub_15fc9f0, sub_1618110, sub_1618120, sub_1618200
   ... +3 more
*/
void sub_15fafa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fafa0ULL || rel >= 0x15fb410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fb410 size=1888 callers=1 calls=15
   calls: InstanceTable_237, InstanceTable_344, Result_2, sub_15b6dc0, sub_15b6e10, sub_15b9340, sub_15b9390, sub_15bbc90, sub_15bbf80, sub_15c3ee0, sub_15c7dd0, sub_15c8140
   ... +3 more
*/
void sub_15fb410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fb410ULL || rel >= 0x15fbb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fbb70 size=1696 callers=0 calls=15
   calls: InstanceTable_237, InstanceTable_308, InstanceTable_344, Result_2, sub_15b6dc0, sub_15b8dc0, sub_15b9340, sub_15b9d00, sub_15bbc90, sub_15bbf80, sub_15fafa0, sub_15fb410
   ... +3 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_307(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fbb70ULL || rel >= 0x15fc210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fc210 size=432 callers=1 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_308(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fc210ULL || rel >= 0x15fc3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fc3c0 size=448 callers=1 calls=6
   calls: sub_15b6dc0, sub_15b6e10, sub_15bbf80, sub_15c4e00, sub_15c7dd0, sub_15c8140
*/
void sub_15fc3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fc3c0ULL || rel >= 0x15fc580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fc580 size=368 callers=1 calls=4
   calls: Result_2, Result_3, sub_15bbc90, sub_15bbd10
*/
void sub_15fc580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fc580ULL || rel >= 0x15fc6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fc6f0 size=768 callers=1 calls=4
   calls: sub_15b8dc0, sub_15b9340, sub_6a5230, sub_6a54a0
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_309(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fc6f0ULL || rel >= 0x15fc9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fc9f0 size=272 callers=1 calls=5
   calls: InstanceTable_305, InstanceTable_311, sub_15bde80, sub_15be030, sub_6a5230
*/
void sub_15fc9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fc9f0ULL || rel >= 0x15fcb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fcb00 size=784 callers=4 calls=6
   calls: sub_15b8dc0, sub_1611690, sub_1618120, sub_1618200, sub_16184e0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fcb00ULL || rel >= 0x15fce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fce10 size=336 callers=1 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_311(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fce10ULL || rel >= 0x15fcf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fcf60 size=320 callers=1 calls=1
   calls: sub_6a5230
*/
void sub_15fcf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fcf60ULL || rel >= 0x15fd0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fd0a0 size=848 callers=1 calls=5
   calls: sub_15b6dc0, sub_15c4e00, sub_15c7dd0, sub_15c8350, sub_15c8390
*/
void sub_15fd0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fd0a0ULL || rel >= 0x15fd3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fd3f0 size=576 callers=1 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_312(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fd3f0ULL || rel >= 0x15fd630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fd630 size=304 callers=2 calls=2
   calls: InstanceTable_312, sub_15fd0a0
*/
void sub_15fd630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fd630ULL || rel >= 0x15fd760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fd760 size=400 callers=2 calls=5
   calls: InstanceTable_237, InstanceTable_344, sub_15b6dc0, sub_15bbf80, sub_15fafa0
*/
void sub_15fd760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fd760ULL || rel >= 0x15fd8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fd8f0 size=48 callers=0 calls=0
*/
void sub_15fd8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fd8f0ULL || rel >= 0x15fd920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fd920 size=272 callers=2 calls=3
   calls: InstanceTable_300, sub_15b8ec0, sub_15fda30
*/
void sub_15fd920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fd920ULL || rel >= 0x15fda30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fda30 size=1056 callers=1 calls=3
   calls: sub_15b6dc0, sub_15fafa0, sub_1618120
*/
void sub_15fda30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fda30ULL || rel >= 0x15fde50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fde50 size=256 callers=3 calls=3
   calls: sub_15b8dc0, sub_1602860, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_313(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fde50ULL || rel >= 0x15fdf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fdf50 size=2080 callers=2 calls=10
   calls: InstanceTable_344, sub_15b6dc0, sub_15baeb0, sub_15bbf80, sub_15bde80, sub_15be030, sub_15f76d0, sub_15fafa0, sub_1610290, sub_1618120
*/
void sub_15fdf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fdf50ULL || rel >= 0x15fe770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fe770 size=64 callers=0 calls=0
*/
void sub_15fe770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fe770ULL || rel >= 0x15fe7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fe7b0 size=4032 callers=1 calls=29
   calls: InstanceTable_300, InstanceTable_303, InstanceTable_313, InstanceTable_315, InstanceTable_316, InstanceTable_344, sub_15b6dc0, sub_15b8dc0, sub_15b8ec0, sub_15b9340, sub_15b9d00, sub_15baeb0
   ... +17 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_314(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fe7b0ULL || rel >= 0x15ff770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ff770 size=992 callers=5 calls=6
   calls: InstanceTable_303, InstanceTable_305, InstanceTable_317, InstanceTable_318, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_315(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ff770ULL || rel >= 0x15ffb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015ffb50 size=1088 callers=1 calls=7
   calls: InstanceTable_315, sub_15b8dc0, sub_15b9390, sub_15c8830, sub_15c88c0, sub_1615830, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_316(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ffb50ULL || rel >= 0x15fff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015fff90 size=304 callers=1 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_317(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fff90ULL || rel >= 0x16000c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016000c0 size=1456 callers=1 calls=5
   calls: sub_15b8dc0, sub_15b9340, sub_15b9390, sub_6a5230, sub_6f9720
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_318(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16000c0ULL || rel >= 0x1600670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01600670 size=544 callers=1 calls=1
   calls: sub_6a5230
*/
void sub_1600670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1600670ULL || rel >= 0x1600890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01600890 size=496 callers=0 calls=6
   calls: InstanceTable_306, sub_15bde80, sub_15be030, sub_15fafa0, sub_15fd920, sub_6a5230
*/
void sub_1600890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1600890ULL || rel >= 0x1600a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01600a80 size=416 callers=0 calls=2
   calls: Result_2, sub_15bbd10
*/
void sub_1600a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1600a80ULL || rel >= 0x1600c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01600c20 size=448 callers=3 calls=0
*/
void sub_1600c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1600c20ULL || rel >= 0x1600de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01600de0 size=416 callers=0 calls=3
   calls: sub_15b8d60, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_319(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1600de0ULL || rel >= 0x1600f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01600f80 size=336 callers=0 calls=3
   calls: sub_15b8dc0, sub_15ea560, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1600f80ULL || rel >= 0x16010d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016010d0 size=544 callers=2 calls=10
   calls: InstanceTable_230, sub_15b6dc0, sub_15b78f0, sub_15b8d60, sub_15b8dc0, sub_15baeb0, sub_15cdb70, sub_15d7ad0, sub_15ecc20, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_321(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16010d0ULL || rel >= 0x16012f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016012f0 size=208 callers=0 calls=3
   calls: InstanceTable_340, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_322(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16012f0ULL || rel >= 0x16013c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016013c0 size=848 callers=1 calls=15
   calls: InstanceTable_231, sub_15b8d60, sub_15b8dc0, sub_15b9300, sub_15b9390, sub_15cdbc0, sub_1601710, sub_1610500, sub_1611580, sub_16115c0, sub_1611600, sub_1611640
   ... +3 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_323(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16013c0ULL || rel >= 0x1601710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01601710 size=720 callers=2 calls=7
   calls: Result_2, prudps, sub_15b9390, sub_15ea560, sub_1600c20, sub_6a5230, sub_6f9720
*/
void sub_1601710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1601710ULL || rel >= 0x16019e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016019e0 size=48 callers=0 calls=1
   calls: InstanceTable_323
*/
void sub_16019e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16019e0ULL || rel >= 0x1601a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01601a10 size=256 callers=0 calls=4
   calls: Result_2, sub_15b8dc0, sub_15bbc90, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_324(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1601a10ULL || rel >= 0x1601b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01601b10 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_1601b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1601b10ULL || rel >= 0x1601b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01601b40 size=384 callers=0 calls=3
   calls: InstanceTable_277, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_325(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1601b40ULL || rel >= 0x1601cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01601cc0 size=144 callers=0 calls=2
   calls: prudps, sub_1618110
*/
void sub_1601cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1601cc0ULL || rel >= 0x1601d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01601d50 size=16 callers=0 calls=0
*/
void sub_1601d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1601d50ULL || rel >= 0x1601d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01601d60 size=864 callers=2 calls=12
   calls: InstanceTable_301, prudps, sub_15b6dc0, sub_15b8dc0, sub_15ea560, sub_16020c0, sub_1611690, sub_1618110, sub_1618120, sub_1618200, sub_16184e0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_326(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1601d60ULL || rel >= 0x16020c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016020c0 size=160 callers=1 calls=6
   calls: prudps, sub_1611790, sub_1618120, sub_16181b0, sub_1618200, sub_16184e0
*/
void sub_16020c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16020c0ULL || rel >= 0x1602160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01602160 size=592 callers=0 calls=5
   calls: InstanceTable_326, sub_15b8dc0, sub_15b9340, sub_6a5230, sub_6a54a0
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_327(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1602160ULL || rel >= 0x16023b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016023b0 size=48 callers=0 calls=0
*/
void sub_16023b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16023b0ULL || rel >= 0x16023e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016023e0 size=256 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_328(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16023e0ULL || rel >= 0x16024e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016024e0 size=288 callers=0 calls=3
   calls: InstanceTable_313, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_329(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16024e0ULL || rel >= 0x1602600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01602600 size=608 callers=0 calls=6
   calls: Result_2, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_1600c20, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1602600ULL || rel >= 0x1602860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01602860 size=512 callers=1 calls=9
   calls: prudps, sub_15b8d60, sub_15b9340, sub_15ea560, sub_1602a60, sub_1611690, sub_1618120, sub_1618200, sub_16184e0
*/
void sub_1602860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1602860ULL || rel >= 0x1602a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01602a60 size=304 callers=1 calls=6
   calls: sub_15b9390, sub_1611690, sub_1618120, sub_1618200, sub_16184e0, sub_6f9720
*/
void sub_1602a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1602a60ULL || rel >= 0x1602b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01602b90 size=352 callers=0 calls=4
   calls: sub_15b8dc0, sub_15b9340, sub_6a5230, sub_6a54a0
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_331(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1602b90ULL || rel >= 0x1602cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01602cf0 size=528 callers=0 calls=4
   calls: sub_15b8dc0, sub_15b9390, sub_6a5230, sub_6f9720
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_332(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1602cf0ULL || rel >= 0x1602f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01602f00 size=288 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_333(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1602f00ULL || rel >= 0x1603020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01603020 size=656 callers=0 calls=5
   calls: sub_15b8dc0, sub_15b9340, sub_15b9390, sub_6a5230, sub_6a54a0
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_334(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1603020ULL || rel >= 0x16032b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016032b0 size=640 callers=0 calls=4
   calls: sub_15b8dc0, sub_15b9390, sub_6a5230, sub_6f9720
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_335(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16032b0ULL || rel >= 0x1603530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01603530 size=288 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_336(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1603530ULL || rel >= 0x1603650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01603650 size=416 callers=0 calls=3
   calls: sub_15b8dc0, sub_15b9340, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_337(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1603650ULL || rel >= 0x16037f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016037f0 size=16 callers=0 calls=0
*/
void sub_16037f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16037f0ULL || rel >= 0x1603800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01603800 size=656 callers=0 calls=10
   calls: localhost_2, prudps, sub_15b6dc0, sub_15b9390, sub_15e9900, sub_1610dd0, sub_1611190, sub_1618120, sub_1618410, sub_6a5230
   ref: 255.255.255.255
   ref: 127.0.0.1
*/
void f_127_0_0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1603800ULL || rel >= 0x1603a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01603a90 size=800 callers=0 calls=10
   calls: InstanceTable_310, InstanceTable_344, Result_2, prudps, sub_15b6dc0, sub_15b9340, sub_15ea560, sub_1618200, sub_6a5230, sub_6a54a0
*/
void sub_1603a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1603a90ULL || rel >= 0x1603db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01603db0 size=48 callers=0 calls=0
*/
void sub_1603db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1603db0ULL || rel >= 0x1603de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01603de0 size=544 callers=1 calls=10
   calls: InstanceTable_313, InstanceTable_326, prudps, sub_15b6dc0, sub_15b9390, sub_15ea440, sub_1610dd0, sub_1611190, sub_1618120, sub_1618200
*/
void sub_1603de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1603de0ULL || rel >= 0x1604000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01604000 size=384 callers=1 calls=7
   calls: prudps, sub_15b6dc0, sub_15b9390, sub_1610dd0, sub_1611190, sub_1618120, sub_1618200
*/
void sub_1604000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1604000ULL || rel >= 0x1604180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01604180 size=528 callers=2 calls=6
   calls: sub_15b8dc0, sub_1611690, sub_1618120, sub_1618200, sub_16184e0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_338(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1604180ULL || rel >= 0x1604390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01604390 size=3968 callers=0 calls=20
   calls: InstanceTable_310, InstanceTable_314, InstanceTable_338, prudps, sub_15b6dc0, sub_15b8dc0, sub_15b9340, sub_15b9390, sub_15ea440, sub_15fdf50, sub_1603de0, sub_1604000
   ... +8 more
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_339(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1604390ULL || rel >= 0x1605310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01605310 size=400 callers=0 calls=4
   calls: sub_1611690, sub_1618120, sub_1618200, sub_16184e0
*/
void sub_1605310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1605310ULL || rel >= 0x16054a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016054a0 size=672 callers=1 calls=5
   calls: sub_15b9340, sub_1611640, sub_16118b0, sub_6a5230, sub_6a54a0
*/
void sub_16054a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16054a0ULL || rel >= 0x1605740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01605740 size=416 callers=1 calls=4
   calls: sub_15b9390, sub_15fa390, sub_16058e0, sub_6f9720
*/
void sub_1605740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1605740ULL || rel >= 0x16058e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016058e0 size=800 callers=1 calls=4
   calls: sub_15b9390, sub_1600670, sub_16156f0, sub_6f9720
*/
void sub_16058e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16058e0ULL || rel >= 0x1605c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01605c00 size=96 callers=0 calls=3
   calls: sub_1601710, sub_16054a0, sub_1605740
*/
void sub_1605c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1605c00ULL || rel >= 0x1605c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01605c60 size=32 callers=0 calls=0
*/
void sub_1605c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1605c60ULL || rel >= 0x1605c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01605c80 size=32 callers=0 calls=0
*/
void sub_1605c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1605c80ULL || rel >= 0x1605ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01605ca0 size=336 callers=1 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1605ca0ULL || rel >= 0x1605df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01605df0 size=400 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_341(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1605df0ULL || rel >= 0x1605f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01605f80 size=288 callers=1 calls=6
   calls: sub_15b6dc0, sub_15b78f0, sub_15b9340, sub_15bae60, sub_15baf90, sub_15bb890
*/
void sub_1605f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1605f80ULL || rel >= 0x16060a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016060a0 size=176 callers=0 calls=0
*/
void sub_16060a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16060a0ULL || rel >= 0x1606150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01606150 size=176 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1606150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1606150ULL || rel >= 0x1606200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01606200 size=32 callers=0 calls=0
*/
void sub_1606200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1606200ULL || rel >= 0x1606220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01606220 size=32 callers=0 calls=0
*/
void sub_1606220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1606220ULL || rel >= 0x1606240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01606240 size=32 callers=0 calls=0
*/
void sub_1606240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1606240ULL || rel >= 0x1606260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01606260 size=32 callers=0 calls=0
*/
void sub_1606260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1606260ULL || rel >= 0x1606280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01606280 size=160 callers=0 calls=0
*/
void sub_1606280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1606280ULL || rel >= 0x1606320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01606320 size=160 callers=0 calls=0
*/
void sub_1606320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1606320ULL || rel >= 0x16063c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016063c0 size=64 callers=0 calls=0
*/
void sub_16063c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16063c0ULL || rel >= 0x1606400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01606400 size=16 callers=0 calls=0
*/
void sub_1606400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1606400ULL || rel >= 0x1606410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01606410 size=16 callers=0 calls=0
*/
void sub_1606410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1606410ULL || rel >= 0x1606420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01606420 size=1456 callers=2 calls=9
   calls: sub_15b8dc0, sub_15c3ee0, sub_15c42b0, sub_15c7dd0, sub_15c8140, sub_15ce600, sub_1618110, sub_1618500, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/LiteBuffer.h
*/
void LiteBuffer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1606420ULL || rel >= 0x16069d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016069d0 size=32 callers=0 calls=1
   calls: LiteBuffer
*/
void sub_16069d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16069d0ULL || rel >= 0x16069f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016069f0 size=16 callers=0 calls=0
*/
void sub_16069f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16069f0ULL || rel >= 0x1606a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01606a00 size=336 callers=0 calls=1
   calls: sub_6a5230
*/
void sub_1606a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1606a00ULL || rel >= 0x1606b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01606b50 size=48 callers=0 calls=1
   calls: LiteBuffer
*/
void sub_1606b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1606b50ULL || rel >= 0x1606b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01606b80 size=1008 callers=0 calls=5
   calls: Buffer_2, sub_15c3ee0, sub_15c85c0, sub_15c85d0, sub_6a5230
*/
void sub_1606b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1606b80ULL || rel >= 0x1606f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01606f70 size=512 callers=0 calls=0
*/
void sub_1606f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1606f70ULL || rel >= 0x1607170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01607170 size=1296 callers=0 calls=7
   calls: sub_15c3ee0, sub_15c7dd0, sub_15c8140, sub_15c84a0, sub_15c8ad0, sub_15c8c60, sub_6a5230
*/
void sub_1607170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1607170ULL || rel >= 0x1607680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01607680 size=64 callers=0 calls=1
   calls: sub_15b9300
*/
void sub_1607680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1607680ULL || rel >= 0x16076c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016076c0 size=80 callers=0 calls=2
   calls: sub_15b9300, sub_15bb900
*/
void sub_16076c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16076c0ULL || rel >= 0x1607710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01607710 size=896 callers=2 calls=4
   calls: sub_15b8dc0, sub_15c42b0, sub_15ce600, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/LiteBuffer.h
*/
void LiteBuffer_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1607710ULL || rel >= 0x1607a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01607a90 size=464 callers=0 calls=4
   calls: sub_15b8dc0, sub_1618110, sub_1618500, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/LiteBuffer.h
*/
void LiteBuffer_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1607a90ULL || rel >= 0x1607c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01607c60 size=16 callers=0 calls=0
*/
void sub_1607c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1607c60ULL || rel >= 0x1607c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01607c70 size=336 callers=0 calls=1
   calls: sub_15bafc0
*/
void sub_1607c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1607c70ULL || rel >= 0x1607dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01607dc0 size=224 callers=0 calls=2
   calls: LiteBuffer_2, LiteBuffer_5
*/
void sub_1607dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1607dc0ULL || rel >= 0x1607ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01607ea0 size=16 callers=0 calls=0
*/
void sub_1607ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1607ea0ULL || rel >= 0x1607eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01607eb0 size=256 callers=0 calls=1
   calls: sub_6a5230
*/
void sub_1607eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1607eb0ULL || rel >= 0x1607fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01607fb0 size=48 callers=0 calls=1
   calls: LiteBuffer_2
*/
void sub_1607fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1607fb0ULL || rel >= 0x1607fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01607fe0 size=688 callers=1 calls=2
   calls: Buffer_2, sub_15b8dc0
   ref: ..\..\..\..\.\OnlineCore/src/Core/LiteBuffer.h
*/
void LiteBuffer_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1607fe0ULL || rel >= 0x1608290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01608290 size=592 callers=0 calls=4
   calls: Buffer_2, LiteBuffer_4, sub_15c3ee0, sub_6a5230
*/
void sub_1608290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1608290ULL || rel >= 0x16084e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016084e0 size=448 callers=0 calls=1
   calls: Buffer_2
*/
void sub_16084e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16084e0ULL || rel >= 0x16086a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016086a0 size=2032 callers=2 calls=1
   calls: sub_15b8dc0
   ref: ..\..\..\..\.\OnlineCore/src/Core/LiteBuffer.h
*/
void LiteBuffer_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16086a0ULL || rel >= 0x1608e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01608e90 size=1056 callers=0 calls=7
   calls: LiteBuffer_5, sub_15b6dc0, sub_15c3ee0, sub_15c7dd0, sub_15c8ad0, sub_15c8c60, sub_6a5230
*/
void sub_1608e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1608e90ULL || rel >= 0x16092b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016092b0 size=16 callers=0 calls=0
*/
void sub_16092b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16092b0ULL || rel >= 0x16092c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016092c0 size=64 callers=0 calls=1
   calls: sub_15b9300
*/
void sub_16092c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16092c0ULL || rel >= 0x1609300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609300 size=80 callers=0 calls=2
   calls: sub_15b9300, sub_15bb900
*/
void sub_1609300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609300ULL || rel >= 0x1609350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609350 size=528 callers=2 calls=1
   calls: sub_6a5230
*/
void sub_1609350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609350ULL || rel >= 0x1609560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609560 size=480 callers=1 calls=1
   calls: Buffer_2
*/
void sub_1609560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609560ULL || rel >= 0x1609740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609740 size=64 callers=0 calls=1
   calls: sub_1609350
*/
void sub_1609740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609740ULL || rel >= 0x1609780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609780 size=416 callers=0 calls=3
   calls: Buffer_2, sub_15c3ee0, sub_1609560
*/
void sub_1609780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609780ULL || rel >= 0x1609920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609920 size=304 callers=0 calls=1
   calls: Buffer_2
*/
void sub_1609920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609920ULL || rel >= 0x1609a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609a50 size=880 callers=1 calls=1
   calls: sub_15b8dc0
   ref: ..\..\..\..\.\OnlineCore/src/Core/LiteBuffer.h
*/
void LiteBuffer_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609a50ULL || rel >= 0x1609dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609dc0 size=304 callers=0 calls=3
   calls: LiteBuffer_6, sub_15c8ad0, sub_15c8c60
*/
void sub_1609dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609dc0ULL || rel >= 0x1609ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609ef0 size=48 callers=0 calls=1
   calls: sub_1609350
*/
void sub_1609ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609ef0ULL || rel >= 0x1609f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609f20 size=16 callers=0 calls=0
*/
void sub_1609f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609f20ULL || rel >= 0x1609f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609f30 size=32 callers=0 calls=0
*/
void sub_1609f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609f30ULL || rel >= 0x1609f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609f50 size=16 callers=0 calls=0
*/
void sub_1609f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609f50ULL || rel >= 0x1609f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609f60 size=16 callers=0 calls=0
*/
void sub_1609f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609f60ULL || rel >= 0x1609f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609f70 size=16 callers=0 calls=0
*/
void sub_1609f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609f70ULL || rel >= 0x1609f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609f80 size=64 callers=0 calls=0
*/
void sub_1609f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609f80ULL || rel >= 0x1609fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01609fc0 size=496 callers=0 calls=1
   calls: sub_6a5230
*/
void sub_1609fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1609fc0ULL || rel >= 0x160a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a1b0 size=64 callers=0 calls=0
*/
void sub_160a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a1b0ULL || rel >= 0x160a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a1f0 size=64 callers=0 calls=0
*/
void sub_160a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a1f0ULL || rel >= 0x160a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a230 size=176 callers=0 calls=0
*/
void sub_160a230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a230ULL || rel >= 0x160a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a2e0 size=16 callers=0 calls=0
*/
void sub_160a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a2e0ULL || rel >= 0x160a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a2f0 size=32 callers=0 calls=0
*/
void sub_160a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a2f0ULL || rel >= 0x160a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a310 size=64 callers=0 calls=1
   calls: sub_15e76f0
*/
void sub_160a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a310ULL || rel >= 0x160a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a350 size=400 callers=0 calls=1
   calls: sub_6a5230
*/
void sub_160a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a350ULL || rel >= 0x160a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a4e0 size=48 callers=0 calls=0
*/
void sub_160a4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a4e0ULL || rel >= 0x160a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a510 size=16 callers=0 calls=0
*/
void sub_160a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a510ULL || rel >= 0x160a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a520 size=16 callers=0 calls=0
*/
void sub_160a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a520ULL || rel >= 0x160a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a530 size=32 callers=0 calls=0
*/
void sub_160a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a530ULL || rel >= 0x160a550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a550 size=192 callers=0 calls=1
   calls: sub_6a5230
*/
void sub_160a550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a550ULL || rel >= 0x160a610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a610 size=64 callers=0 calls=0
*/
void sub_160a610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a610ULL || rel >= 0x160a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a650 size=64 callers=0 calls=0
*/
void sub_160a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a650ULL || rel >= 0x160a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a690 size=192 callers=0 calls=0
*/
void sub_160a690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a690ULL || rel >= 0x160a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a750 size=16 callers=0 calls=0
*/
void sub_160a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a750ULL || rel >= 0x160a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a760 size=16 callers=0 calls=0
*/
void sub_160a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a760ULL || rel >= 0x160a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a770 size=144 callers=0 calls=1
   calls: sub_6a5230
*/
void sub_160a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a770ULL || rel >= 0x160a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a800 size=48 callers=0 calls=0
*/
void sub_160a800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a800ULL || rel >= 0x160a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a830 size=176 callers=0 calls=0
*/
void sub_160a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a830ULL || rel >= 0x160a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a8e0 size=192 callers=0 calls=1
   calls: sub_1611cc0
*/
void sub_160a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a8e0ULL || rel >= 0x160a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a9a0 size=16 callers=0 calls=0
*/
void sub_160a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a9a0ULL || rel >= 0x160a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a9b0 size=16 callers=0 calls=0
*/
void sub_160a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a9b0ULL || rel >= 0x160a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a9c0 size=16 callers=0 calls=0
*/
void sub_160a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a9c0ULL || rel >= 0x160a9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a9d0 size=32 callers=0 calls=0
*/
void sub_160a9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a9d0ULL || rel >= 0x160a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160a9f0 size=16 callers=0 calls=0
*/
void sub_160a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160a9f0ULL || rel >= 0x160aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160aa00 size=176 callers=0 calls=0
*/
void sub_160aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160aa00ULL || rel >= 0x160aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160aab0 size=992 callers=0 calls=5
   calls: sub_15b6dc0, sub_15b8dc0, sub_15b9340, sub_6a5230, sub_6a54a0
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_342(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160aab0ULL || rel >= 0x160ae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ae90 size=160 callers=1 calls=6
   calls: sub_15b6dc0, sub_15b78f0, sub_15bae60, sub_15baf90, sub_15bb890, sub_1605f80
*/
void sub_160ae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ae90ULL || rel >= 0x160af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160af30 size=96 callers=0 calls=0
*/
void sub_160af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160af30ULL || rel >= 0x160af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160af90 size=96 callers=0 calls=0
*/
void sub_160af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160af90ULL || rel >= 0x160aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160aff0 size=16 callers=0 calls=0
*/
void sub_160aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160aff0ULL || rel >= 0x160b000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160b000 size=16 callers=0 calls=0
*/
void sub_160b000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160b000ULL || rel >= 0x160b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160b010 size=224 callers=1 calls=3
   calls: InstanceTable_304, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_343(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160b010ULL || rel >= 0x160b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160b0f0 size=160 callers=0 calls=4
   calls: InstanceTable_277, sub_15b6e10, sub_1611dc0, sub_1611e10
*/
void sub_160b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160b0f0ULL || rel >= 0x160b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160b190 size=160 callers=0 calls=4
   calls: InstanceTable_277, sub_15b6e10, sub_1611dc0, sub_1611e10
*/
void sub_160b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160b190ULL || rel >= 0x160b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160b230 size=240 callers=3 calls=7
   calls: sub_1616220, sub_16180e0, sub_1618110, sub_1618120, sub_1618200, sub_16184e0, sub_1618500
*/
void sub_160b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160b230ULL || rel >= 0x160b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160b320 size=672 callers=2 calls=14
   calls: InstanceTable_237, InstanceTable_344, sub_15b6dc0, sub_15b6e10, sub_15bbf80, sub_15c7dc0, sub_15c7dd0, sub_15c8140, sub_15c8830, sub_15c88c0, sub_15c8ad0, sub_15c8c60
   ... +2 more
*/
void sub_160b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160b320ULL || rel >= 0x160b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160b5c0 size=208 callers=1 calls=4
   calls: sub_15b78f0, sub_15b8d60, sub_15d7ad0, sub_6a5230
*/
void sub_160b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160b5c0ULL || rel >= 0x160b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160b690 size=1920 callers=0 calls=24
   calls: sub_15b8d60, sub_15c7dc0, sub_15c7dd0, sub_15c8140, sub_15ef520, sub_15f0830, sub_160b320, sub_160be10, sub_1615a50, sub_1615b60, sub_1615c70, sub_1615f00
   ... +12 more
   ref: 255.0.0.0
*/
void f_255_0_0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160b690ULL || rel >= 0x160be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160be10 size=272 callers=1 calls=5
   calls: sub_15c3ee0, sub_15c8830, sub_15c88c0, sub_1618410, sub_16184b0
*/
void sub_160be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160be10ULL || rel >= 0x160bf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160bf20 size=768 callers=1 calls=4
   calls: sub_15b8d60, sub_15b9390, sub_16184e0, sub_6f9720
*/
void sub_160bf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160bf20ULL || rel >= 0x160c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160c220 size=128 callers=0 calls=2
   calls: sub_15b8d60, sub_160bf20
*/
void sub_160c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160c220ULL || rel >= 0x160c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160c2a0 size=464 callers=2 calls=5
   calls: sub_15b8d60, sub_1612240, sub_1618120, sub_1618200, sub_16184e0
*/
void sub_160c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160c2a0ULL || rel >= 0x160c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160c470 size=144 callers=0 calls=1
   calls: sub_1612240
*/
void sub_160c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160c470ULL || rel >= 0x160c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160c500 size=1488 callers=2 calls=6
   calls: sub_15b8d60, sub_15b9390, sub_160cb00, sub_1618120, sub_1618200, sub_16184e0
*/
void sub_160c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160c500ULL || rel >= 0x160cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160cad0 size=48 callers=0 calls=0
*/
void sub_160cad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160cad0ULL || rel >= 0x160cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160cb00 size=176 callers=1 calls=3
   calls: sub_15baeb0, sub_15bb130, sub_1612240
*/
void sub_160cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160cb00ULL || rel >= 0x160cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160cbb0 size=192 callers=0 calls=1
   calls: sub_1618120
*/
void sub_160cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160cbb0ULL || rel >= 0x160cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160cc70 size=224 callers=0 calls=1
   calls: sub_16184e0
*/
void sub_160cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160cc70ULL || rel >= 0x160cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160cd50 size=560 callers=2 calls=5
   calls: sub_15b8d60, sub_15b9390, sub_1618120, sub_1618200, sub_16184e0
*/
void sub_160cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160cd50ULL || rel >= 0x160cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160cf80 size=16 callers=0 calls=0
*/
void sub_160cf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160cf80ULL || rel >= 0x160cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160cf90 size=224 callers=0 calls=1
   calls: sub_16184e0
*/
void sub_160cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160cf90ULL || rel >= 0x160d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160d070 size=480 callers=1 calls=4
   calls: sub_15b6dc0, sub_15c7dc0, sub_15c7dd0, sub_1618120
*/
void sub_160d070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160d070ULL || rel >= 0x160d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160d250 size=512 callers=1 calls=3
   calls: sub_15bbf80, sub_15c7dd0, sub_1618120
*/
void sub_160d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160d250ULL || rel >= 0x160d450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160d450 size=816 callers=13 calls=4
   calls: sub_15b6dc0, sub_15b8dc0, sub_1618120, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_344(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160d450ULL || rel >= 0x160d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160d780 size=272 callers=0 calls=1
   calls: sub_16184e0
*/
void sub_160d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160d780ULL || rel >= 0x160d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160d890 size=464 callers=2 calls=3
   calls: InstanceTable_276, sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_345(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160d890ULL || rel >= 0x160da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160da60 size=336 callers=0 calls=1
   calls: sub_15f4410
*/
void sub_160da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160da60ULL || rel >= 0x160dbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160dbb0 size=160 callers=0 calls=0
*/
void sub_160dbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160dbb0ULL || rel >= 0x160dc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160dc50 size=320 callers=0 calls=2
   calls: sub_15b6e10, sub_15f4410
*/
void sub_160dc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160dc50ULL || rel >= 0x160dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160dd90 size=224 callers=0 calls=0
*/
void sub_160dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160dd90ULL || rel >= 0x160de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160de70 size=304 callers=0 calls=2
   calls: sub_15bde80, sub_15be030
*/
void sub_160de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160de70ULL || rel >= 0x160dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160dfa0 size=416 callers=2 calls=4
   calls: sub_15b8d60, sub_15b8dc0, sub_1618a70, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_346(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160dfa0ULL || rel >= 0x160e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160e140 size=368 callers=2 calls=4
   calls: sub_15f4410, sub_160e2b0, sub_16194a0, sub_1619730
*/
void sub_160e140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160e140ULL || rel >= 0x160e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160e2b0 size=480 callers=2 calls=2
   calls: sub_15b9390, sub_16184e0
*/
void sub_160e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160e2b0ULL || rel >= 0x160e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160e490 size=48 callers=0 calls=1
   calls: sub_160e140
*/
void sub_160e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160e490ULL || rel >= 0x160e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160e4c0 size=16 callers=0 calls=0
*/
void sub_160e4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160e4c0ULL || rel >= 0x160e4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160e4d0 size=304 callers=0 calls=3
   calls: sub_15b6dc0, sub_15c7ff0, sub_160c2a0
*/
void sub_160e4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160e4d0ULL || rel >= 0x160e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160e600 size=32 callers=0 calls=0
*/
void sub_160e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160e600ULL || rel >= 0x160e620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160e620 size=544 callers=1 calls=1
   calls: sub_15b8d60
*/
void sub_160e620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160e620ULL || rel >= 0x160e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160e840 size=2592 callers=1 calls=7
   calls: sub_15b6dc0, sub_15b8dc0, sub_15c8790, sub_15c8a70, sub_15c8c60, sub_16180e0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_347(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160e840ULL || rel >= 0x160f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160f260 size=880 callers=1 calls=2
   calls: sub_15b8d60, sub_160e620
*/
void sub_160f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160f260ULL || rel >= 0x160f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160f5d0 size=16 callers=0 calls=0
*/
void sub_160f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160f5d0ULL || rel >= 0x160f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160f5e0 size=16 callers=0 calls=0
*/
void sub_160f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160f5e0ULL || rel >= 0x160f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160f5f0 size=144 callers=0 calls=3
   calls: sub_15c4e00, sub_160c500, sub_160cd50
*/
void sub_160f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160f5f0ULL || rel >= 0x160f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160f680 size=16 callers=0 calls=0
*/
void sub_160f680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160f680ULL || rel >= 0x160f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160f690 size=1088 callers=1 calls=12
   calls: InstanceTable_279, sub_15b6dc0, sub_15b8dc0, sub_15bbf80, sub_15c3ee0, sub_15c81e0, sub_15c8830, sub_15c88c0, sub_160d070, sub_160d250, sub_1618200, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_348(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160f690ULL || rel >= 0x160fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fad0 size=96 callers=0 calls=2
   calls: sub_15c8140, sub_15f6730
*/
void sub_160fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fad0ULL || rel >= 0x160fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fb30 size=96 callers=0 calls=3
   calls: sub_15c8140, sub_15f6730, sub_160e140
*/
void sub_160fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fb30ULL || rel >= 0x160fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fb90 size=144 callers=0 calls=3
   calls: sub_15bbef0, sub_15c4e00, sub_15f6a50
*/
void sub_160fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fb90ULL || rel >= 0x160fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fc20 size=48 callers=0 calls=0
*/
void sub_160fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fc20ULL || rel >= 0x160fc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fc50 size=64 callers=0 calls=1
   calls: sub_15f68e0
*/
void sub_160fc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fc50ULL || rel >= 0x160fc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fc90 size=16 callers=0 calls=0
*/
void sub_160fc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fc90ULL || rel >= 0x160fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fca0 size=16 callers=0 calls=0
*/
void sub_160fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fca0ULL || rel >= 0x160fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fcb0 size=48 callers=0 calls=1
   calls: InstanceTable_281
*/
void sub_160fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fcb0ULL || rel >= 0x160fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fce0 size=16 callers=0 calls=0
*/
void sub_160fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fce0ULL || rel >= 0x160fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fcf0 size=16 callers=0 calls=0
*/
void sub_160fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fcf0ULL || rel >= 0x160fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fd00 size=16 callers=0 calls=0
*/
void sub_160fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fd00ULL || rel >= 0x160fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fd10 size=16 callers=0 calls=0
*/
void sub_160fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fd10ULL || rel >= 0x160fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fd20 size=16 callers=0 calls=0
*/
void sub_160fd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fd20ULL || rel >= 0x160fd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fd30 size=16 callers=0 calls=0
*/
void sub_160fd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fd30ULL || rel >= 0x160fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fd40 size=16 callers=0 calls=0
*/
void sub_160fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fd40ULL || rel >= 0x160fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fd50 size=16 callers=0 calls=0
*/
void sub_160fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fd50ULL || rel >= 0x160fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fd60 size=32 callers=0 calls=0
*/
void sub_160fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fd60ULL || rel >= 0x160fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fd80 size=64 callers=0 calls=1
   calls: sub_16124b0
*/
void sub_160fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fd80ULL || rel >= 0x160fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fdc0 size=16 callers=0 calls=0
*/
void sub_160fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fdc0ULL || rel >= 0x160fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fdd0 size=16 callers=0 calls=0
*/
void sub_160fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fdd0ULL || rel >= 0x160fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fde0 size=16 callers=0 calls=0
*/
void sub_160fde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fde0ULL || rel >= 0x160fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fdf0 size=16 callers=0 calls=0
*/
void sub_160fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fdf0ULL || rel >= 0x160fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fe00 size=16 callers=0 calls=0
*/
void sub_160fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fe00ULL || rel >= 0x160fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fe10 size=16 callers=0 calls=0
*/
void sub_160fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fe10ULL || rel >= 0x160fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fe20 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_160fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fe20ULL || rel >= 0x160fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fe50 size=48 callers=0 calls=1
   calls: Result_2
*/
void sub_160fe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fe50ULL || rel >= 0x160fe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fe80 size=16 callers=0 calls=0
*/
void sub_160fe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fe80ULL || rel >= 0x160fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fe90 size=16 callers=0 calls=0
*/
void sub_160fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fe90ULL || rel >= 0x160fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fea0 size=16 callers=0 calls=0
*/
void sub_160fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fea0ULL || rel >= 0x160feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160feb0 size=16 callers=0 calls=0
*/
void sub_160feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160feb0ULL || rel >= 0x160fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fec0 size=16 callers=0 calls=0
*/
void sub_160fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fec0ULL || rel >= 0x160fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fed0 size=16 callers=0 calls=0
*/
void sub_160fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fed0ULL || rel >= 0x160fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fee0 size=16 callers=0 calls=0
*/
void sub_160fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fee0ULL || rel >= 0x160fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fef0 size=16 callers=0 calls=0
*/
void sub_160fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fef0ULL || rel >= 0x160ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ff00 size=16 callers=0 calls=0
*/
void sub_160ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ff00ULL || rel >= 0x160ff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ff10 size=16 callers=0 calls=0
*/
void sub_160ff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ff10ULL || rel >= 0x160ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ff20 size=16 callers=0 calls=0
*/
void sub_160ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ff20ULL || rel >= 0x160ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ff30 size=16 callers=0 calls=0
*/
void sub_160ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ff30ULL || rel >= 0x160ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ff40 size=16 callers=0 calls=0
*/
void sub_160ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ff40ULL || rel >= 0x160ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ff50 size=16 callers=0 calls=0
*/
void sub_160ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ff50ULL || rel >= 0x160ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ff60 size=16 callers=0 calls=0
*/
void sub_160ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ff60ULL || rel >= 0x160ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ff70 size=16 callers=0 calls=0
*/
void sub_160ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ff70ULL || rel >= 0x160ff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ff80 size=16 callers=0 calls=0
*/
void sub_160ff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ff80ULL || rel >= 0x160ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ff90 size=16 callers=0 calls=0
*/
void sub_160ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ff90ULL || rel >= 0x160ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ffa0 size=16 callers=0 calls=0
*/
void sub_160ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ffa0ULL || rel >= 0x160ffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ffb0 size=16 callers=0 calls=0
*/
void sub_160ffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ffb0ULL || rel >= 0x160ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ffc0 size=16 callers=0 calls=0
*/
void sub_160ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ffc0ULL || rel >= 0x160ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ffd0 size=16 callers=0 calls=0
*/
void sub_160ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ffd0ULL || rel >= 0x160ffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160ffe0 size=16 callers=0 calls=0
*/
void sub_160ffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ffe0ULL || rel >= 0x160fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0160fff0 size=16 callers=0 calls=0
*/
void sub_160fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160fff0ULL || rel >= 0x1610000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610000 size=16 callers=0 calls=0
*/
void sub_1610000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610000ULL || rel >= 0x1610010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610010 size=16 callers=0 calls=0
*/
void sub_1610010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610010ULL || rel >= 0x1610020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610020 size=16 callers=0 calls=0
*/
void sub_1610020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610020ULL || rel >= 0x1610030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610030 size=16 callers=0 calls=0
*/
void sub_1610030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610030ULL || rel >= 0x1610040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610040 size=16 callers=0 calls=0
*/
void sub_1610040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610040ULL || rel >= 0x1610050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610050 size=16 callers=0 calls=0
*/
void sub_1610050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610050ULL || rel >= 0x1610060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610060 size=80 callers=0 calls=3
   calls: sub_15b9300, sub_1611ec0, sub_16124b0
*/
void sub_1610060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610060ULL || rel >= 0x16100b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016100b0 size=96 callers=0 calls=4
   calls: sub_15b9300, sub_1611e60, sub_1611ec0, sub_16124b0
*/
void sub_16100b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16100b0ULL || rel >= 0x1610110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610110 size=16 callers=0 calls=0
*/
void sub_1610110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610110ULL || rel >= 0x1610120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610120 size=144 callers=0 calls=3
   calls: sub_15b9390, sub_1610dd0, sub_1611190
*/
void sub_1610120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610120ULL || rel >= 0x16101b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016101b0 size=224 callers=0 calls=1
   calls: sub_16184e0
*/
void sub_16101b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16101b0ULL || rel >= 0x1610290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610290 size=224 callers=1 calls=1
   calls: sub_16184e0
*/
void sub_1610290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610290ULL || rel >= 0x1610370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610370 size=224 callers=0 calls=1
   calls: sub_16184e0
*/
void sub_1610370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610370ULL || rel >= 0x1610450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610450 size=48 callers=0 calls=1
   calls: sub_15cac40
*/
void sub_1610450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610450ULL || rel >= 0x1610480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610480 size=16 callers=0 calls=0
   ref: ComponentState
*/
void ComponentState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610480ULL || rel >= 0x1610490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610490 size=96 callers=0 calls=0
   ref: SystemComponent
   ref: ComponentState
*/
void SystemComponent_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610490ULL || rel >= 0x16104f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016104f0 size=16 callers=0 calls=0
*/
void sub_16104f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16104f0ULL || rel >= 0x1610500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610500 size=64 callers=3 calls=1
   calls: sub_1610500
*/
void sub_1610500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610500ULL || rel >= 0x1610540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610540 size=272 callers=2 calls=4
   calls: sub_15b6dc0, sub_15b9340, sub_15e9900, sub_1618120
*/
void sub_1610540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610540ULL || rel >= 0x1610650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610650 size=16 callers=0 calls=0
*/
void sub_1610650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610650ULL || rel >= 0x1610660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610660 size=272 callers=0 calls=1
   calls: sub_16184e0
*/
void sub_1610660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610660ULL || rel >= 0x1610770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610770 size=272 callers=0 calls=1
   calls: sub_16184e0
*/
void sub_1610770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610770ULL || rel >= 0x1610880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610880 size=160 callers=3 calls=4
   calls: sub_15b9390, sub_1610880, sub_1610dd0, sub_1611190
*/
void sub_1610880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610880ULL || rel >= 0x1610920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610920 size=48 callers=0 calls=1
   calls: sub_15c8140
*/
void sub_1610920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610920ULL || rel >= 0x1610950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610950 size=16 callers=0 calls=0
*/
void sub_1610950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610950ULL || rel >= 0x1610960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610960 size=16 callers=0 calls=0
*/
void sub_1610960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610960ULL || rel >= 0x1610970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610970 size=80 callers=3 calls=1
   calls: sub_1610970
*/
void sub_1610970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610970ULL || rel >= 0x16109c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016109c0 size=448 callers=3 calls=4
   calls: sub_15b6dc0, sub_15b9340, sub_15e9900, sub_1618120
*/
void sub_16109c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16109c0ULL || rel >= 0x1610b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610b80 size=592 callers=1 calls=4
   calls: sub_15bab00, sub_15bc650, sub_1610e30, sub_6a54a0
*/
void sub_1610b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610b80ULL || rel >= 0x1610dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610dd0 size=96 callers=35 calls=2
   calls: sub_15bc310, sub_1610dd0
*/
void sub_1610dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610dd0ULL || rel >= 0x1610e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610e30 size=256 callers=1 calls=4
   calls: sub_15b9340, sub_15bc1e0, sub_15bc650, sub_6a54a0
*/
void sub_1610e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610e30ULL || rel >= 0x1610f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01610f30 size=608 callers=2 calls=4
   calls: sub_15bab00, sub_15bc650, sub_1611200, sub_6a54a0
*/
void sub_1610f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1610f30ULL || rel >= 0x1611190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611190 size=112 callers=74 calls=2
   calls: sub_15bc310, sub_1611190
*/
void sub_1611190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611190ULL || rel >= 0x1611200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611200 size=304 callers=1 calls=4
   calls: sub_15b9340, sub_15bc1e0, sub_15bc650, sub_6a54a0
*/
void sub_1611200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611200ULL || rel >= 0x1611330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611330 size=224 callers=0 calls=2
   calls: sub_15b8dc0, sub_6a5230
   ref: ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
*/
void InstanceTable_349(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611330ULL || rel >= 0x1611410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611410 size=48 callers=0 calls=1
   calls: sub_15d46a0
*/
void sub_1611410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611410ULL || rel >= 0x1611440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611440 size=48 callers=0 calls=1
   calls: InstanceTable_297
*/
void sub_1611440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611440ULL || rel >= 0x1611470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611470 size=64 callers=3 calls=1
   calls: sub_1611470
*/
void sub_1611470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611470ULL || rel >= 0x16114b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016114b0 size=208 callers=0 calls=0
*/
void sub_16114b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16114b0ULL || rel >= 0x1611580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611580 size=64 callers=3 calls=1
   calls: sub_1611580
*/
void sub_1611580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611580ULL || rel >= 0x16115c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016115c0 size=64 callers=3 calls=1
   calls: sub_16115c0
*/
void sub_16115c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16115c0ULL || rel >= 0x1611600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611600 size=64 callers=3 calls=1
   calls: sub_1611600
*/
void sub_1611600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611600ULL || rel >= 0x1611640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611640 size=80 callers=4 calls=2
   calls: sub_1611640, sub_16184e0
*/
void sub_1611640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611640ULL || rel >= 0x1611690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611690 size=256 callers=28 calls=1
   calls: sub_16180e0
*/
void sub_1611690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611690ULL || rel >= 0x1611790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611790 size=288 callers=1 calls=4
   calls: sub_15b9340, sub_1611690, sub_16181b0, sub_6a54a0
*/
void sub_1611790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611790ULL || rel >= 0x16118b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016118b0 size=336 callers=1 calls=4
   calls: sub_15b9340, sub_1611a00, sub_16181b0, sub_6a54a0
*/
void sub_16118b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16118b0ULL || rel >= 0x1611a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611a00 size=560 callers=1 calls=1
   calls: sub_1611690
*/
void sub_1611a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611a00ULL || rel >= 0x1611c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611c30 size=16 callers=0 calls=0
*/
void sub_1611c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611c30ULL || rel >= 0x1611c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611c40 size=16 callers=0 calls=0
*/
void sub_1611c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611c40ULL || rel >= 0x1611c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611c50 size=16 callers=0 calls=0
*/
void sub_1611c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611c50ULL || rel >= 0x1611c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611c60 size=16 callers=0 calls=0
*/
void sub_1611c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611c60ULL || rel >= 0x1611c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611c70 size=16 callers=0 calls=0
*/
void sub_1611c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611c70ULL || rel >= 0x1611c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611c80 size=16 callers=0 calls=0
*/
void sub_1611c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611c80ULL || rel >= 0x1611c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611c90 size=16 callers=0 calls=0
*/
void sub_1611c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611c90ULL || rel >= 0x1611ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611ca0 size=16 callers=0 calls=0
*/
void sub_1611ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611ca0ULL || rel >= 0x1611cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611cb0 size=16 callers=0 calls=0
*/
void sub_1611cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611cb0ULL || rel >= 0x1611cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611cc0 size=64 callers=3 calls=1
   calls: sub_1611cc0
*/
void sub_1611cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611cc0ULL || rel >= 0x1611d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611d00 size=64 callers=2 calls=1
   calls: sub_1611d00
*/
void sub_1611d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611d00ULL || rel >= 0x1611d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611d40 size=64 callers=3 calls=1
   calls: sub_1611d40
*/
void sub_1611d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611d40ULL || rel >= 0x1611d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611d80 size=64 callers=3 calls=1
   calls: sub_1611d80
*/
void sub_1611d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611d80ULL || rel >= 0x1611dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611dc0 size=80 callers=5 calls=2
   calls: sub_1611dc0, sub_16184e0
*/
void sub_1611dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611dc0ULL || rel >= 0x1611e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611e10 size=80 callers=5 calls=2
   calls: sub_1611e10, sub_16184e0
*/
void sub_1611e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611e10ULL || rel >= 0x1611e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611e60 size=96 callers=3 calls=2
   calls: sub_1611e60, sub_16184e0
*/
void sub_1611e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611e60ULL || rel >= 0x1611ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611ec0 size=80 callers=4 calls=2
   calls: sub_1611ec0, sub_16184e0
*/
void sub_1611ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611ec0ULL || rel >= 0x1611f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01611f10 size=272 callers=0 calls=2
   calls: sub_15b9390, sub_16184e0
*/
void sub_1611f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1611f10ULL || rel >= 0x1612020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01612020 size=272 callers=0 calls=2
   calls: sub_15b9390, sub_16184e0
*/
void sub_1612020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1612020ULL || rel >= 0x1612130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01612130 size=272 callers=0 calls=2
   calls: sub_15b9390, sub_16184e0
*/
void sub_1612130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1612130ULL || rel >= 0x1612240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01612240 size=624 callers=3 calls=4
   calls: sub_15b9340, sub_1618120, sub_1618200, sub_16184e0
*/
void sub_1612240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1612240ULL || rel >= 0x16124b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016124b0 size=96 callers=6 calls=2
   calls: sub_16124b0, sub_16184e0
*/
void sub_16124b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16124b0ULL || rel >= 0x1612510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01612510 size=16 callers=0 calls=0
*/
void sub_1612510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1612510ULL || rel >= 0x1612520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

