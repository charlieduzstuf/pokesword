/* main functions 01291af0..012aea10 (157 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01291af0 size=16 callers=0 calls=0
*/
void sub_1291af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291af0ULL || rel >= 0x1291b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291b00 size=288 callers=2 calls=0
*/
void sub_1291b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291b00ULL || rel >= 0x1291c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291c20 size=16 callers=0 calls=0
*/
void sub_1291c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291c20ULL || rel >= 0x1291c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291c30 size=16 callers=0 calls=0
*/
void sub_1291c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291c30ULL || rel >= 0x1291c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291c40 size=16 callers=0 calls=0
*/
void sub_1291c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291c40ULL || rel >= 0x1291c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291c50 size=32 callers=0 calls=1
   calls: sub_1291b00
*/
void sub_1291c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291c50ULL || rel >= 0x1291c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291c70 size=32 callers=0 calls=1
   calls: sub_1291b00
*/
void sub_1291c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291c70ULL || rel >= 0x1291c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291c90 size=16 callers=0 calls=0
*/
void sub_1291c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291c90ULL || rel >= 0x1291ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291ca0 size=16 callers=0 calls=0
*/
void sub_1291ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291ca0ULL || rel >= 0x1291cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291cb0 size=608 callers=0 calls=8
   calls: sub_1127d00, sub_1269880, sub_126ab20, sub_126aca0, sub_126ad50, sub_1290ea0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1291cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291cb0ULL || rel >= 0x1291f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291f10 size=16 callers=0 calls=0
*/
void sub_1291f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291f10ULL || rel >= 0x1291f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291f20 size=16 callers=0 calls=0
*/
void sub_1291f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291f20ULL || rel >= 0x1291f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01291f30 size=352 callers=2 calls=0
*/
void sub_1291f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1291f30ULL || rel >= 0x1292090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292090 size=400 callers=0 calls=2
   calls: sub_126abd0, sub_126adb0
*/
void sub_1292090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292090ULL || rel >= 0x1292220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292220 size=96 callers=0 calls=1
   calls: sub_126b1f0
*/
void sub_1292220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292220ULL || rel >= 0x1292280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292280 size=16 callers=0 calls=0
*/
void sub_1292280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292280ULL || rel >= 0x1292290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292290 size=16 callers=0 calls=0
*/
void sub_1292290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292290ULL || rel >= 0x12922a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012922a0 size=32 callers=0 calls=1
   calls: sub_1291f30
*/
void sub_12922a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12922a0ULL || rel >= 0x12922c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012922c0 size=32 callers=0 calls=1
   calls: sub_1291f30
*/
void sub_12922c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12922c0ULL || rel >= 0x12922e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012922e0 size=16 callers=0 calls=0
*/
void sub_12922e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12922e0ULL || rel >= 0x12922f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012922f0 size=16 callers=0 calls=0
*/
void sub_12922f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12922f0ULL || rel >= 0x1292300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292300 size=112 callers=0 calls=0
*/
void sub_1292300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292300ULL || rel >= 0x1292370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292370 size=16 callers=0 calls=0
*/
void sub_1292370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292370ULL || rel >= 0x1292380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292380 size=16 callers=0 calls=0
*/
void sub_1292380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292380ULL || rel >= 0x1292390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292390 size=16 callers=0 calls=0
*/
void sub_1292390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292390ULL || rel >= 0x12923a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012923a0 size=16 callers=0 calls=0
*/
void sub_12923a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12923a0ULL || rel >= 0x12923b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012923b0 size=16 callers=0 calls=0
*/
void sub_12923b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12923b0ULL || rel >= 0x12923c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012923c0 size=16 callers=0 calls=0
*/
void sub_12923c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12923c0ULL || rel >= 0x12923d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012923d0 size=16 callers=0 calls=0
*/
void sub_12923d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12923d0ULL || rel >= 0x12923e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012923e0 size=16 callers=0 calls=0
*/
void sub_12923e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12923e0ULL || rel >= 0x12923f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012923f0 size=16 callers=0 calls=0
*/
void sub_12923f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12923f0ULL || rel >= 0x1292400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292400 size=16 callers=0 calls=0
*/
void sub_1292400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292400ULL || rel >= 0x1292410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292410 size=16 callers=0 calls=0
*/
void sub_1292410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292410ULL || rel >= 0x1292420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292420 size=16 callers=0 calls=0
*/
void sub_1292420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292420ULL || rel >= 0x1292430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292430 size=16 callers=0 calls=0
*/
void sub_1292430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292430ULL || rel >= 0x1292440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292440 size=544 callers=0 calls=5
   calls: sub_1127d00, sub_126ab20, sub_126aca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1292440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292440ULL || rel >= 0x1292660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292660 size=16 callers=0 calls=0
*/
void sub_1292660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292660ULL || rel >= 0x1292670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292670 size=16 callers=0 calls=0
*/
void sub_1292670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292670ULL || rel >= 0x1292680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292680 size=352 callers=2 calls=0
*/
void sub_1292680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292680ULL || rel >= 0x12927e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012927e0 size=48 callers=0 calls=2
   calls: sub_126abd0, sub_126aca0
*/
void sub_12927e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12927e0ULL || rel >= 0x1292810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292810 size=16 callers=0 calls=0
*/
void sub_1292810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292810ULL || rel >= 0x1292820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292820 size=16 callers=0 calls=0
*/
void sub_1292820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292820ULL || rel >= 0x1292830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292830 size=16 callers=0 calls=0
*/
void sub_1292830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292830ULL || rel >= 0x1292840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292840 size=32 callers=0 calls=1
   calls: sub_1292680
*/
void sub_1292840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292840ULL || rel >= 0x1292860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292860 size=32 callers=0 calls=1
   calls: sub_1292680
*/
void sub_1292860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292860ULL || rel >= 0x1292880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292880 size=16 callers=0 calls=0
*/
void sub_1292880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292880ULL || rel >= 0x1292890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292890 size=16 callers=0 calls=0
*/
void sub_1292890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292890ULL || rel >= 0x12928a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012928a0 size=16 callers=0 calls=0
*/
void sub_12928a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12928a0ULL || rel >= 0x12928b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012928b0 size=16 callers=0 calls=0
*/
void sub_12928b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12928b0ULL || rel >= 0x12928c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012928c0 size=384 callers=0 calls=0
*/
void sub_12928c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12928c0ULL || rel >= 0x1292a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292a40 size=16 callers=0 calls=0
*/
void sub_1292a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292a40ULL || rel >= 0x1292a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292a50 size=352 callers=2 calls=0
*/
void sub_1292a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292a50ULL || rel >= 0x1292bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292bb0 size=528 callers=0 calls=2
   calls: sub_126abd0, sub_126adb0
*/
void sub_1292bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292bb0ULL || rel >= 0x1292dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292dc0 size=96 callers=0 calls=1
   calls: sub_126b1f0
*/
void sub_1292dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292dc0ULL || rel >= 0x1292e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292e20 size=16 callers=0 calls=0
*/
void sub_1292e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292e20ULL || rel >= 0x1292e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292e30 size=16 callers=0 calls=0
*/
void sub_1292e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292e30ULL || rel >= 0x1292e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292e40 size=32 callers=0 calls=1
   calls: sub_1292a50
*/
void sub_1292e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292e40ULL || rel >= 0x1292e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292e60 size=32 callers=0 calls=1
   calls: sub_1292a50
*/
void sub_1292e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292e60ULL || rel >= 0x1292e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292e80 size=16 callers=0 calls=0
*/
void sub_1292e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292e80ULL || rel >= 0x1292e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292e90 size=16 callers=0 calls=0
*/
void sub_1292e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292e90ULL || rel >= 0x1292ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01292ea0 size=544 callers=0 calls=5
   calls: sub_1127d00, sub_126ab20, sub_126aca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1292ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1292ea0ULL || rel >= 0x12930c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012930c0 size=16 callers=0 calls=0
*/
void sub_12930c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12930c0ULL || rel >= 0x12930d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012930d0 size=16 callers=0 calls=0
*/
void sub_12930d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12930d0ULL || rel >= 0x12930e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012930e0 size=352 callers=2 calls=0
*/
void sub_12930e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12930e0ULL || rel >= 0x1293240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01293240 size=432 callers=0 calls=3
   calls: sub_126abd0, sub_126aca0, sub_126adb0
*/
void sub_1293240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1293240ULL || rel >= 0x12933f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012933f0 size=80 callers=0 calls=1
   calls: sub_126b1f0
*/
void sub_12933f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12933f0ULL || rel >= 0x1293440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01293440 size=16 callers=0 calls=0
*/
void sub_1293440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1293440ULL || rel >= 0x1293450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01293450 size=16 callers=0 calls=0
*/
void sub_1293450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1293450ULL || rel >= 0x1293460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01293460 size=32 callers=0 calls=1
   calls: sub_12930e0
*/
void sub_1293460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1293460ULL || rel >= 0x1293480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01293480 size=32 callers=0 calls=1
   calls: sub_12930e0
*/
void sub_1293480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1293480ULL || rel >= 0x12934a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012934a0 size=16 callers=0 calls=0
*/
void sub_12934a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12934a0ULL || rel >= 0x12934b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012934b0 size=16 callers=0 calls=0
*/
void sub_12934b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12934b0ULL || rel >= 0x12934c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012934c0 size=256 callers=0 calls=4
   calls: sub_1127d00, sub_126aca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_12934c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12934c0ULL || rel >= 0x12935c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012935c0 size=16 callers=0 calls=0
*/
void sub_12935c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12935c0ULL || rel >= 0x12935d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012935d0 size=16 callers=0 calls=0
*/
void sub_12935d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12935d0ULL || rel >= 0x12935e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012935e0 size=16 callers=0 calls=0
*/
void sub_12935e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12935e0ULL || rel >= 0x12935f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012935f0 size=16 callers=0 calls=0
*/
void sub_12935f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12935f0ULL || rel >= 0x1293600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01293600 size=16 callers=0 calls=0
*/
void sub_1293600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1293600ULL || rel >= 0x1293610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01293610 size=320 callers=0 calls=4
   calls: sub_1127d00, sub_126aca0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1293610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1293610ULL || rel >= 0x1293750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01293750 size=16 callers=0 calls=0
*/
void sub_1293750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1293750ULL || rel >= 0x1293760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01293760 size=16 callers=0 calls=0
*/
void sub_1293760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1293760ULL || rel >= 0x1293770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01293770 size=16 callers=0 calls=0
*/
void sub_1293770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1293770ULL || rel >= 0x1293780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01293780 size=48 callers=0 calls=1
   calls: sub_1263300
*/
void sub_1293780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1293780ULL || rel >= 0x12937b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012937b0 size=16 callers=0 calls=0
*/
void sub_12937b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12937b0ULL || rel >= 0x12937c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012937c0 size=16 callers=0 calls=0
*/
void sub_12937c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12937c0ULL || rel >= 0x12937d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012937d0 size=16 callers=0 calls=0
*/
void sub_12937d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12937d0ULL || rel >= 0x12937e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012937e0 size=208 callers=0 calls=0
*/
void sub_12937e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12937e0ULL || rel >= 0x12938b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012938b0 size=1392 callers=0 calls=14
   calls: Play_UI_Common_window_open, anime_in_4, msg_pokecamp_optionbar_decide, sub_1127d00, sub_1179ec0, sub_125b840, sub_125de00, sub_1261c60, sub_126e900, sub_126f190, sub_1293e20, sub_5cf8e0
   ... +2 more
   ref: notice
*/
void notice_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12938b0ULL || rel >= 0x1293e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01293e20 size=336 callers=2 calls=2
   calls: msg_pokecamp_optionbar_decide, sub_125de00
*/
void sub_1293e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1293e20ULL || rel >= 0x1293f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01293f70 size=4656 callers=0 calls=21
   calls: Play_UI_Common_window_close, Play_UI_Common_window_open, msg_pokecamp_optionbar_decide, msg_pokecamp_optionbar_throw, sub_1127d00, sub_1127fc0, sub_1128340, sub_125de00, sub_1264560, sub_126ec70, sub_1278500, sub_127d050
   ... +9 more
*/
void sub_1293f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1293f70ULL || rel >= 0x12951a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012951a0 size=416 callers=1 calls=10
   calls: sub_125a0f0, sub_125de00, sub_1263070, sub_12630d0, sub_1263300, sub_1263640, sub_1263990, sub_1313580, sub_c39c40, sub_e7eb10
*/
void sub_12951a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12951a0ULL || rel >= 0x1295340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295340 size=160 callers=0 calls=3
   calls: Play_UI_Common_window_close, anime_out_7, sub_125de00
*/
void sub_1295340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295340ULL || rel >= 0x12953e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012953e0 size=992 callers=0 calls=7
   calls: Play_UI_Common_window_close, sub_1127d00, sub_125de00, sub_5cf8e0, sub_5cf8f0, sub_e80580, sub_e807d0
*/
void sub_12953e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12953e0ULL || rel >= 0x12957c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012957c0 size=16 callers=0 calls=0
*/
void sub_12957c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12957c0ULL || rel >= 0x12957d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012957d0 size=16 callers=0 calls=0
*/
void sub_12957d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12957d0ULL || rel >= 0x12957e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012957e0 size=16 callers=0 calls=0
*/
void sub_12957e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12957e0ULL || rel >= 0x12957f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012957f0 size=16 callers=0 calls=0
*/
void sub_12957f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12957f0ULL || rel >= 0x1295800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295800 size=16 callers=0 calls=0
*/
void sub_1295800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295800ULL || rel >= 0x1295810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295810 size=16 callers=0 calls=0
*/
void sub_1295810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295810ULL || rel >= 0x1295820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295820 size=16 callers=0 calls=0
*/
void sub_1295820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295820ULL || rel >= 0x1295830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295830 size=16 callers=0 calls=0
*/
void sub_1295830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295830ULL || rel >= 0x1295840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295840 size=304 callers=0 calls=0
*/
void sub_1295840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295840ULL || rel >= 0x1295970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295970 size=16 callers=0 calls=0
*/
void sub_1295970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295970ULL || rel >= 0x1295980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295980 size=16 callers=0 calls=0
*/
void sub_1295980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295980ULL || rel >= 0x1295990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295990 size=16 callers=0 calls=0
*/
void sub_1295990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295990ULL || rel >= 0x12959a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012959a0 size=16 callers=0 calls=0
*/
void sub_12959a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12959a0ULL || rel >= 0x12959b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012959b0 size=544 callers=2 calls=3
   calls: sub_1127d00, sub_5cf8e0, sub_5cf8f0
*/
void sub_12959b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12959b0ULL || rel >= 0x1295bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295bd0 size=256 callers=0 calls=0
*/
void sub_1295bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295bd0ULL || rel >= 0x1295cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295cd0 size=128 callers=0 calls=0
*/
void sub_1295cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295cd0ULL || rel >= 0x1295d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295d50 size=144 callers=0 calls=0
*/
void sub_1295d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295d50ULL || rel >= 0x1295de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295de0 size=144 callers=0 calls=0
*/
void sub_1295de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295de0ULL || rel >= 0x1295e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295e70 size=368 callers=3 calls=3
   calls: sub_1127d00, sub_5cf8e0, sub_5cf8f0
*/
void sub_1295e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295e70ULL || rel >= 0x1295fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01295fe0 size=96 callers=0 calls=0
*/
void sub_1295fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1295fe0ULL || rel >= 0x1296040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296040 size=64 callers=0 calls=0
*/
void sub_1296040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296040ULL || rel >= 0x1296080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296080 size=32 callers=0 calls=0
*/
void sub_1296080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296080ULL || rel >= 0x12960a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012960a0 size=32 callers=0 calls=0
*/
void sub_12960a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12960a0ULL || rel >= 0x12960c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012960c0 size=16 callers=0 calls=0
*/
void sub_12960c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12960c0ULL || rel >= 0x12960d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012960d0 size=16 callers=0 calls=0
*/
void sub_12960d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12960d0ULL || rel >= 0x12960e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012960e0 size=16 callers=0 calls=0
*/
void sub_12960e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12960e0ULL || rel >= 0x12960f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012960f0 size=16 callers=0 calls=0
*/
void sub_12960f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12960f0ULL || rel >= 0x1296100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296100 size=352 callers=1 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1296100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296100ULL || rel >= 0x1296260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296260 size=352 callers=1 calls=3
   calls: sub_1127fc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1296260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296260ULL || rel >= 0x12963c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012963c0 size=160 callers=0 calls=0
*/
void sub_12963c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12963c0ULL || rel >= 0x1296460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296460 size=144 callers=1 calls=1
   calls: sub_12964f0
*/
void sub_1296460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296460ULL || rel >= 0x12964f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012964f0 size=416 callers=1 calls=3
   calls: sub_1296690, sub_c38350, sub_e9db40
*/
void sub_12964f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12964f0ULL || rel >= 0x1296690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296690 size=1024 callers=1 calls=4
   calls: sub_11061d0, sub_76f550, sub_a74910, sub_e9d130
*/
void sub_1296690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296690ULL || rel >= 0x1296a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296a90 size=416 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_1296a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296a90ULL || rel >= 0x1296c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296c30 size=16 callers=0 calls=0
*/
void sub_1296c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296c30ULL || rel >= 0x1296c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296c40 size=16 callers=0 calls=0
*/
void sub_1296c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296c40ULL || rel >= 0x1296c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296c50 size=16 callers=0 calls=0
*/
void sub_1296c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296c50ULL || rel >= 0x1296c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296c60 size=16 callers=0 calls=0
*/
void sub_1296c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296c60ULL || rel >= 0x1296c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296c70 size=16 callers=0 calls=0
*/
void sub_1296c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296c70ULL || rel >= 0x1296c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296c80 size=16 callers=0 calls=0
*/
void sub_1296c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296c80ULL || rel >= 0x1296c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296c90 size=176 callers=0 calls=1
   calls: sub_13517a0
*/
void sub_1296c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296c90ULL || rel >= 0x1296d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296d40 size=16 callers=0 calls=0
*/
void sub_1296d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296d40ULL || rel >= 0x1296d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01296d50 size=2432 callers=0 calls=6
   calls: sub_12976d0, sub_12997b0, sub_a75c00, sub_a75e20, sub_a777c0, sub_c39c40
*/
void sub_1296d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1296d50ULL || rel >= 0x12976d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012976d0 size=272 callers=2 calls=3
   calls: sub_1297940, sub_672c10, sub_c386f0
*/
void sub_12976d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12976d0ULL || rel >= 0x12977e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012977e0 size=16 callers=0 calls=0
*/
void sub_12977e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12977e0ULL || rel >= 0x12977f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012977f0 size=16 callers=0 calls=0
*/
void sub_12977f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12977f0ULL || rel >= 0x1297800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297800 size=16 callers=0 calls=0
*/
void sub_1297800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297800ULL || rel >= 0x1297810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297810 size=304 callers=0 calls=0
*/
void sub_1297810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297810ULL || rel >= 0x1297940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297940 size=240 callers=1 calls=2
   calls: sub_1297a30, sub_e7b660
*/
void sub_1297940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297940ULL || rel >= 0x1297a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297a30 size=224 callers=1 calls=3
   calls: sub_1297b10, sub_7c2da0, sub_e7b5e0
*/
void sub_1297a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297a30ULL || rel >= 0x1297b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297b10 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1297b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297b10ULL || rel >= 0x1297c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297c00 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_1297c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297c00ULL || rel >= 0x1297c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297c80 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1297c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297c80ULL || rel >= 0x1297df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297df0 size=96 callers=0 calls=1
   calls: sub_1298010
*/
void sub_1297df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297df0ULL || rel >= 0x1297e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297e50 size=16 callers=0 calls=0
*/
void sub_1297e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297e50ULL || rel >= 0x1297e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297e60 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1297e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297e60ULL || rel >= 0x1297f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297f00 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1297f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297f00ULL || rel >= 0x1297fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297fc0 size=16 callers=0 calls=0
*/
void sub_1297fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297fc0ULL || rel >= 0x1297fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297fd0 size=16 callers=0 calls=0
*/
void sub_1297fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297fd0ULL || rel >= 0x1297fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297fe0 size=16 callers=0 calls=0
*/
void sub_1297fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297fe0ULL || rel >= 0x1297ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01297ff0 size=32 callers=0 calls=0
*/
void sub_1297ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297ff0ULL || rel >= 0x1298010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01298010 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_1298010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1298010ULL || rel >= 0x12980f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012980f0 size=128 callers=0 calls=0
*/
void sub_12980f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12980f0ULL || rel >= 0x1298170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01298170 size=256 callers=1 calls=1
   calls: sub_13736e0
*/
void sub_1298170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1298170ULL || rel >= 0x1298270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01298270 size=304 callers=5 calls=2
   calls: sub_1299fb0, sub_13736e0
*/
void sub_1298270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1298270ULL || rel >= 0x12983a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012983a0 size=144 callers=1 calls=2
   calls: jobList, sub_1298270
*/
void sub_12983a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12983a0ULL || rel >= 0x1298430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01298430 size=416 callers=2 calls=9
   calls: group_id, required_job, sub_1298270, sub_12985d0, sub_12986e0, sub_135a1a0, sub_13736e0, unlock_condition, unlock_flag
*/
void sub_1298430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1298430ULL || rel >= 0x12985d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012985d0 size=272 callers=2 calls=2
   calls: sub_129eee0, sub_135a1a0
*/
void sub_12985d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12985d0ULL || rel >= 0x12986e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012986e0 size=240 callers=4 calls=4
   calls: related_job, sub_1373710, sub_1373fc0, unlock_condition
*/
void sub_12986e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12986e0ULL || rel >= 0x12987d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012987d0 size=112 callers=2 calls=2
   calls: required_success, sub_1373fb0
*/
void sub_12987d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12987d0ULL || rel >= 0x1298840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01298840 size=720 callers=1 calls=13
   calls: initialJob, required_success, sub_1298270, sub_12985d0, sub_1298b10, sub_13736e0, sub_1373710, sub_1373f50, sub_1373f60, sub_1373fb0, sub_1373fc0, sub_1373fe0
   ... +1 more
*/
void sub_1298840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1298840ULL || rel >= 0x1298b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01298b10 size=704 callers=3 calls=7
   calls: group_id, related_job, sub_12986e0, sub_12a3c50, sub_13736e0, sub_1373fe0, unlock_condition
*/
void sub_1298b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1298b10ULL || rel >= 0x1298dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01298dd0 size=448 callers=1 calls=8
   calls: sub_12a3c50, sub_134f490, sub_1350770, sub_1373710, sub_1373720, sub_1373750, sub_1373770, sub_13739c0
*/
void sub_1298dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1298dd0ULL || rel >= 0x1298f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01298f90 size=288 callers=1 calls=9
   calls: effort_type, sub_1298270, sub_12990b0, sub_12a3c50, sub_13736e0, sub_1373710, sub_1373730, sub_1373f70, sub_1373f90
*/
void sub_1298f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1298f90ULL || rel >= 0x12990b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012990b0 size=640 callers=2 calls=4
   calls: sub_134fcb0, sub_13736e0, sub_13737c0, sub_76f440
*/
void sub_12990b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12990b0ULL || rel >= 0x1299330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01299330 size=336 callers=1 calls=5
   calls: effort_type, sub_12990b0, sub_12a3c50, sub_1373710, sub_1373730
*/
void sub_1299330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1299330ULL || rel >= 0x1299480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01299480 size=112 callers=2 calls=1
   calls: sub_13736e0
*/
void sub_1299480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1299480ULL || rel >= 0x12994f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012994f0 size=48 callers=1 calls=1
   calls: sub_12986e0
*/
void sub_12994f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12994f0ULL || rel >= 0x1299520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01299520 size=176 callers=1 calls=1
   calls: sub_13736e0
*/
void sub_1299520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1299520ULL || rel >= 0x12995d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012995d0 size=208 callers=2 calls=3
   calls: sub_1350f70, sub_13736e0, sub_13736f0
*/
void sub_12995d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12995d0ULL || rel >= 0x12996a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012996a0 size=272 callers=3 calls=4
   calls: sub_1298270, sub_12a3c50, sub_13736e0, sub_1373710
*/
void sub_12996a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12996a0ULL || rel >= 0x12997b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012997b0 size=128 callers=1 calls=1
   calls: sub_1373fc0
*/
void sub_12997b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12997b0ULL || rel >= 0x1299830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01299830 size=208 callers=2 calls=3
   calls: sub_768f00, sub_768fa0, type_d
*/
void sub_1299830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1299830ULL || rel >= 0x1299900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01299900 size=832 callers=1 calls=10
   calls: effort_type, recruit_count, sub_13736e0, sub_13736f0, sub_1373760, sub_1373860, sub_1374180, sub_768f00, sub_768fa0, type_d
*/
void sub_1299900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1299900ULL || rel >= 0x1299c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01299c40 size=464 callers=1 calls=8
   calls: exp__dh, exp_bonus_factor, exp_bonus_factor_2, sub_13736e0, sub_762d70, sub_768f00, sub_768fa0, type_d
*/
void sub_1299c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1299c40ULL || rel >= 0x1299e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01299e10 size=400 callers=1 calls=4
   calls: effort_type_2, effort_value, sub_762d70, sub_7690e0
*/
void sub_1299e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1299e10ULL || rel >= 0x1299fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01299fa0 size=16 callers=1 calls=0
*/
void sub_1299fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1299fa0ULL || rel >= 0x1299fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01299fb0 size=7520 callers=3 calls=6
   calls: effort_type, sub_1299fb0, sub_129bd10, sub_129ce10, sub_129d810, sub_13736e0
*/
void sub_1299fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1299fb0ULL || rel >= 0x129bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129bd10 size=2480 callers=5 calls=2
   calls: effort_type, sub_13736e0
*/
void sub_129bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129bd10ULL || rel >= 0x129c6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129c6c0 size=1872 callers=2 calls=3
   calls: effort_type, sub_129bd10, sub_13736e0
*/
void sub_129c6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129c6c0ULL || rel >= 0x129ce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129ce10 size=2560 callers=2 calls=3
   calls: effort_type, sub_129c6c0, sub_13736e0
*/
void sub_129ce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129ce10ULL || rel >= 0x129d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129d810 size=1968 callers=2 calls=5
   calls: effort_type, sub_129bd10, sub_129c6c0, sub_129ce10, sub_13736e0
*/
void sub_129d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129d810ULL || rel >= 0x129dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129dfc0 size=128 callers=0 calls=0
*/
void sub_129dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129dfc0ULL || rel >= 0x129e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129e040 size=304 callers=0 calls=4
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_c46830
*/
void sub_129e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129e040ULL || rel >= 0x129e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129e170 size=240 callers=1 calls=3
   calls: sub_1106200, sub_11063e0, sub_1106f30
   ref: jobList
*/
void jobList(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129e170ULL || rel >= 0x129e260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129e260 size=336 callers=5 calls=3
   calls: sub_1106320, sub_11063e0, sub_1106cd0
   ref: unlock_condition
*/
void unlock_condition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129e260ULL || rel >= 0x129e3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129e3b0 size=112 callers=1 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: required_job
*/
void required_job(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129e3b0ULL || rel >= 0x129e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129e420 size=112 callers=2 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: group_id
*/
void group_id(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129e420ULL || rel >= 0x129e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129e490 size=192 callers=1 calls=3
   calls: sub_1106320, sub_11063e0, sub_11069b0
   ref: description_txt
*/
void description_txt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129e490ULL || rel >= 0x129e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129e550 size=192 callers=2 calls=3
   calls: sub_1106320, sub_11063e0, sub_11069b0
   ref: title_txt
*/
void title_txt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129e550ULL || rel >= 0x129e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129e610 size=112 callers=3 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: recruit_count
*/
void recruit_count(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129e610ULL || rel >= 0x129e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129e680 size=192 callers=2 calls=3
   calls: sub_1106320, sub_11063e0, sub_11069b0
   ref: company_txt
*/
void company_txt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129e680ULL || rel >= 0x129e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129e740 size=192 callers=3 calls=3
   calls: sub_1106320, sub_11063e0, sub_11069b0
   ref: company_icon
*/
void company_icon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129e740ULL || rel >= 0x129e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129e800 size=112 callers=2 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: related_job
*/
void related_job(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129e800ULL || rel >= 0x129e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129e870 size=128 callers=62 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: effort_type
*/
void effort_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129e870ULL || rel >= 0x129e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129e8f0 size=192 callers=1 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: exp_%dh
*/
void exp__dh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129e8f0ULL || rel >= 0x129e9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129e9b0 size=112 callers=1 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: exp_grade
*/
void exp_grade(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129e9b0ULL || rel >= 0x129ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129ea20 size=112 callers=4 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: effort_type
*/
void effort_type_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129ea20ULL || rel >= 0x129ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129ea90 size=112 callers=1 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: effort_value
*/
void effort_value(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129ea90ULL || rel >= 0x129eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129eb00 size=128 callers=3 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: effort_up
*/
void effort_up(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129eb00ULL || rel >= 0x129eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129eb80 size=112 callers=1 calls=3
   calls: sub_1106320, sub_11063e0, sub_11067c0
   ref: exp_bonus_factor
*/
void exp_bonus_factor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129eb80ULL || rel >= 0x129ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129ebf0 size=224 callers=1 calls=3
   calls: sub_1106320, sub_11063e0, sub_11067c0
   ref: exp_bonus_factor_2
   ref: exp_bonus_factor_0
   ref: exp_bonus_factor_1
*/
void exp_bonus_factor_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129ebf0ULL || rel >= 0x129ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129ecd0 size=192 callers=9 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: type%d
*/
void type_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129ecd0ULL || rel >= 0x129ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129ed90 size=224 callers=1 calls=3
   calls: sub_1106320, sub_11063e0, sub_11069b0
   ref: unlock_flag
*/
void unlock_flag(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129ed90ULL || rel >= 0x129ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129ee70 size=112 callers=1 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: reward_rank
*/
void reward_rank(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129ee70ULL || rel >= 0x129eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129eee0 size=80 callers=1 calls=1
   calls: unlock_flag_K
*/
void sub_129eee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129eee0ULL || rel >= 0x129ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129ef30 size=288 callers=1 calls=2
   calls: sub_11063e0, sub_11069b0
   ref: group%d
   ref: unlock_flag_K
*/
void unlock_flag_K(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129ef30ULL || rel >= 0x129f050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129f050 size=704 callers=1 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: money_count_%d
   ref: is_money_%d
   ref: rank%d
   ref: item_count_%d
   ref: item_id_%d
*/
void rank_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129f050ULL || rel >= 0x129f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129f310 size=576 callers=2 calls=3
   calls: sub_1106320, sub_11063e0, sub_11065b0
   ref: jobCounts
   ref: required_success
   ref: unlock_count
*/
void required_success(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129f310ULL || rel >= 0x129f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129f550 size=160 callers=2 calls=2
   calls: sub_11063e0, sub_11065b0
   ref: initialJob
*/
void initialJob(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129f550ULL || rel >= 0x129f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129f5f0 size=80 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_129f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129f5f0ULL || rel >= 0x129f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129f640 size=128 callers=0 calls=0
*/
void sub_129f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129f640ULL || rel >= 0x129f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129f6c0 size=1680 callers=0 calls=23
   calls: sub_129fd50, sub_12a0ed0, sub_12a1040, sub_12a13b0, sub_12a1720, sub_12a1b30, sub_12a1ec0, sub_12a2240, sub_12a25b0, sub_12a26a0, sub_14db790, sub_5cfad0
   ... +11 more
   ref: CommonOptionBar
   ref: ViewCounter
   ref: ViewResult
   ref: ViewTips
   ref: ViewTop
   ref: ViewCheck
   ref: SystemMessageView
   ref: ViewBg
*/
void ViewTitle_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129f6c0ULL || rel >= 0x129fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129fd50 size=400 callers=1 calls=3
   calls: sub_12a0da0, sub_12a3cb0, sub_e7c160
*/
void sub_129fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129fd50ULL || rel >= 0x129fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129fee0 size=96 callers=0 calls=4
   calls: sub_12983a0, sub_14dba00, sub_e7ea20, sub_ebb1f0
*/
void sub_129fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129fee0ULL || rel >= 0x129ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129ff40 size=128 callers=2 calls=0
*/
void sub_129ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129ff40ULL || rel >= 0x129ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0129ffc0 size=128 callers=2 calls=0
*/
void sub_129ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129ffc0ULL || rel >= 0x12a0040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0040 size=1568 callers=0 calls=10
   calls: sub_12a0da0, sub_12a2880, sub_12a2b00, sub_12a2c50, sub_12a2da0, sub_12a2ef0, sub_12a3040, sub_12a3d10, sub_12adc20, sub_e7eb10
   ref: ViewCounter
   ref: ViewResult
   ref: ViewTop
   ref: ViewCheck
   ref: ViewBg
   ref: ViewTitle
*/
void ViewTitle_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0040ULL || rel >= 0x12a0660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0660 size=16 callers=0 calls=0
*/
void sub_12a0660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0660ULL || rel >= 0x12a0670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0670 size=768 callers=0 calls=8
   calls: sub_12a3190, sub_12a3300, sub_12a34f0, sub_12a3650, sub_12a37c0, sub_12a3930, sub_14dbab0, sub_e7c160
*/
void sub_12a0670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0670ULL || rel >= 0x12a0970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0970 size=16 callers=0 calls=0
*/
void sub_12a0970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0970ULL || rel >= 0x12a0980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0980 size=448 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_12a0980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0980ULL || rel >= 0x12a0b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0b40 size=16 callers=0 calls=0
*/
void sub_12a0b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0b40ULL || rel >= 0x12a0b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0b50 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_12a0b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0b50ULL || rel >= 0x12a0c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0c00 size=16 callers=0 calls=0
*/
void sub_12a0c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0c00ULL || rel >= 0x12a0c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0c10 size=16 callers=0 calls=0
*/
void sub_12a0c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0c10ULL || rel >= 0x12a0c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0c20 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_12a0c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0c20ULL || rel >= 0x12a0cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0cd0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_12a0cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0cd0ULL || rel >= 0x12a0d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0d80 size=16 callers=0 calls=0
*/
void sub_12a0d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0d80ULL || rel >= 0x12a0d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0d90 size=16 callers=0 calls=0
*/
void sub_12a0d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0d90ULL || rel >= 0x12a0da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0da0 size=304 callers=14 calls=0
*/
void sub_12a0da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0da0ULL || rel >= 0x12a0ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a0ed0 size=368 callers=5 calls=0
*/
void sub_12a0ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a0ed0ULL || rel >= 0x12a1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a1040 size=288 callers=1 calls=2
   calls: sub_12a1160, sub_e809c0
*/
void sub_12a1040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a1040ULL || rel >= 0x12a1160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a1160 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_12a1160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a1160ULL || rel >= 0x12a13b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a13b0 size=288 callers=1 calls=2
   calls: sub_12a14d0, sub_e809c0
*/
void sub_12a13b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a13b0ULL || rel >= 0x12a14d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a14d0 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_12a14d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a14d0ULL || rel >= 0x12a1720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a1720 size=288 callers=1 calls=2
   calls: sub_12a1840, sub_e809c0
*/
void sub_12a1720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a1720ULL || rel >= 0x12a1840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a1840 size=384 callers=1 calls=3
   calls: sub_12a19c0, sub_790490, sub_e7fe20
*/
void sub_12a1840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a1840ULL || rel >= 0x12a19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a19c0 size=368 callers=1 calls=1
   calls: anonymous_2
*/
void sub_12a19c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a19c0ULL || rel >= 0x12a1b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a1b30 size=288 callers=1 calls=2
   calls: sub_12a1c50, sub_e809c0
*/
void sub_12a1b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a1b30ULL || rel >= 0x12a1c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a1c50 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_12a1c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a1c50ULL || rel >= 0x12a1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a1ec0 size=288 callers=1 calls=2
   calls: sub_12a1fe0, sub_e809c0
*/
void sub_12a1ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a1ec0ULL || rel >= 0x12a1fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a1fe0 size=608 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_12a1fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a1fe0ULL || rel >= 0x12a2240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a2240 size=288 callers=1 calls=2
   calls: sub_12a2360, sub_e809c0
*/
void sub_12a2240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a2240ULL || rel >= 0x12a2360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a2360 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_12a2360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a2360ULL || rel >= 0x12a25b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a25b0 size=240 callers=31 calls=0
*/
void sub_12a25b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a25b0ULL || rel >= 0x12a26a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a26a0 size=240 callers=8 calls=1
   calls: sub_12a25b0
*/
void sub_12a26a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a26a0ULL || rel >= 0x12a2790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a2790 size=192 callers=0 calls=2
   calls: sub_12a25b0, sub_12a26a0
*/
void sub_12a2790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a2790ULL || rel >= 0x12a2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a2850 size=16 callers=0 calls=0
*/
void sub_12a2850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a2850ULL || rel >= 0x12a2860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a2860 size=16 callers=0 calls=0
*/
void sub_12a2860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a2860ULL || rel >= 0x12a2870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a2870 size=16 callers=0 calls=0
*/
void sub_12a2870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a2870ULL || rel >= 0x12a2880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a2880 size=336 callers=3 calls=2
   calls: sub_12a29d0, sub_5cfaf0
*/
void sub_12a2880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a2880ULL || rel >= 0x12a29d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a29d0 size=304 callers=24 calls=0
*/
void sub_12a29d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a29d0ULL || rel >= 0x12a2b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a2b00 size=336 callers=1 calls=2
   calls: sub_12a29d0, sub_5cfaf0
*/
void sub_12a2b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a2b00ULL || rel >= 0x12a2c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a2c50 size=336 callers=4 calls=2
   calls: sub_12a29d0, sub_5cfaf0
*/
void sub_12a2c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a2c50ULL || rel >= 0x12a2da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a2da0 size=336 callers=2 calls=2
   calls: sub_12a29d0, sub_5cfaf0
*/
void sub_12a2da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a2da0ULL || rel >= 0x12a2ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a2ef0 size=336 callers=1 calls=2
   calls: sub_12a29d0, sub_5cfaf0
*/
void sub_12a2ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a2ef0ULL || rel >= 0x12a3040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a3040 size=336 callers=2 calls=2
   calls: sub_12a29d0, sub_5cfaf0
*/
void sub_12a3040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a3040ULL || rel >= 0x12a3190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a3190 size=368 callers=1 calls=1
   calls: anonymous
*/
void sub_12a3190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a3190ULL || rel >= 0x12a3300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a3300 size=496 callers=1 calls=1
   calls: anonymous
*/
void sub_12a3300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a3300ULL || rel >= 0x12a34f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a34f0 size=352 callers=1 calls=1
   calls: anonymous
*/
void sub_12a34f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a34f0ULL || rel >= 0x12a3650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a3650 size=368 callers=1 calls=1
   calls: anonymous
*/
void sub_12a3650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a3650ULL || rel >= 0x12a37c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a37c0 size=368 callers=1 calls=2
   calls: anonymous, sub_13a4980
*/
void sub_12a37c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a37c0ULL || rel >= 0x12a3930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a3930 size=672 callers=1 calls=1
   calls: anonymous
*/
void sub_12a3930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a3930ULL || rel >= 0x12a3bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a3bd0 size=128 callers=0 calls=0
*/
void sub_12a3bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a3bd0ULL || rel >= 0x12a3c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a3c50 size=48 callers=7 calls=2
   calls: sub_eadb00, sub_eaed70
*/
void sub_12a3c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a3c50ULL || rel >= 0x12a3c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a3c80 size=48 callers=2 calls=0
*/
void sub_12a3c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a3c80ULL || rel >= 0x12a3cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a3cb0 size=96 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_12a3cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a3cb0ULL || rel >= 0x12a3d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a3d10 size=1600 callers=1 calls=1
   calls: sub_67b990
*/
void sub_12a3d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a3d10ULL || rel >= 0x12a4350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a4350 size=144 callers=1 calls=2
   calls: sub_1311c60, sub_67d450
*/
void sub_12a4350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a4350ULL || rel >= 0x12a43e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a43e0 size=64 callers=8 calls=1
   calls: sub_67d450
*/
void sub_12a43e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a43e0ULL || rel >= 0x12a4420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a4420 size=304 callers=0 calls=0
*/
void sub_12a4420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a4420ULL || rel >= 0x12a4550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a4550 size=16 callers=0 calls=0
*/
void sub_12a4550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a4550ULL || rel >= 0x12a4560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a4560 size=16 callers=0 calls=0
*/
void sub_12a4560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a4560ULL || rel >= 0x12a4570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a4570 size=16 callers=0 calls=0
*/
void sub_12a4570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a4570ULL || rel >= 0x12a4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a4580 size=16 callers=0 calls=0
*/
void sub_12a4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a4580ULL || rel >= 0x12a4590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a4590 size=16 callers=0 calls=0
*/
void sub_12a4590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a4590ULL || rel >= 0x12a45a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a45a0 size=16 callers=0 calls=0
*/
void sub_12a45a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a45a0ULL || rel >= 0x12a45b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a45b0 size=16 callers=0 calls=0
*/
void sub_12a45b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a45b0ULL || rel >= 0x12a45c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a45c0 size=16 callers=0 calls=0
*/
void sub_12a45c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a45c0ULL || rel >= 0x12a45d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a45d0 size=128 callers=0 calls=0
*/
void sub_12a45d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a45d0ULL || rel >= 0x12a4650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a4650 size=224 callers=35 calls=1
   calls: sub_c39c40
*/
void sub_12a4650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a4650ULL || rel >= 0x12a4730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a4730 size=192 callers=5 calls=1
   calls: sub_c39c40
*/
void sub_12a4730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a4730ULL || rel >= 0x12a47f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a47f0 size=192 callers=21 calls=1
   calls: sub_c39c40
*/
void sub_12a47f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a47f0ULL || rel >= 0x12a48b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a48b0 size=208 callers=7 calls=1
   calls: sub_c39c40
*/
void sub_12a48b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a48b0ULL || rel >= 0x12a4980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a4980 size=704 callers=3 calls=1
   calls: sub_c39c40
*/
void sub_12a4980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a4980ULL || rel >= 0x12a4c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a4c40 size=576 callers=6 calls=4
   calls: sub_5cfaf0, sub_795bc0, sub_79b990, sub_c39c40
   ref: CommonOptionBar
*/
void CommonOptionBar_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a4c40ULL || rel >= 0x12a4e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a4e80 size=144 callers=6 calls=2
   calls: sub_eb8c60, sub_eb8ea0
*/
void sub_12a4e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a4e80ULL || rel >= 0x12a4f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a4f10 size=336 callers=34 calls=4
   calls: sub_12a0da0, sub_12a4350, sub_e807f0, sub_eb8930
*/
void sub_12a4f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a4f10ULL || rel >= 0x12a5060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5060 size=176 callers=3 calls=2
   calls: sub_12a0da0, sub_eb8a30
*/
void sub_12a5060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5060ULL || rel >= 0x12a5110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5110 size=112 callers=0 calls=0
*/
void sub_12a5110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5110ULL || rel >= 0x12a5180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5180 size=112 callers=0 calls=0
*/
void sub_12a5180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5180ULL || rel >= 0x12a51f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a51f0 size=16 callers=0 calls=0
*/
void sub_12a51f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a51f0ULL || rel >= 0x12a5200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5200 size=112 callers=0 calls=0
*/
void sub_12a5200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5200ULL || rel >= 0x12a5270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5270 size=112 callers=0 calls=0
*/
void sub_12a5270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5270ULL || rel >= 0x12a52e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a52e0 size=16 callers=0 calls=0
*/
void sub_12a52e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a52e0ULL || rel >= 0x12a52f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a52f0 size=16 callers=0 calls=0
*/
void sub_12a52f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a52f0ULL || rel >= 0x12a5300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5300 size=112 callers=0 calls=0
*/
void sub_12a5300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5300ULL || rel >= 0x12a5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5370 size=112 callers=0 calls=0
*/
void sub_12a5370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5370ULL || rel >= 0x12a53e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a53e0 size=304 callers=3 calls=0
*/
void sub_12a53e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a53e0ULL || rel >= 0x12a5510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5510 size=128 callers=0 calls=0
*/
void sub_12a5510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5510ULL || rel >= 0x12a5590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5590 size=1776 callers=0 calls=20
   calls: CommonOptionBar_3, T_title_00_2, anime__s_2, anime_keep_3, sub_12a4730, sub_12a5f60, sub_12a6050, sub_12addc0, sub_12ae680, sub_5cfad0, sub_5cfaf0, sub_67d450
   ... +8 more
*/
void sub_12a5590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5590ULL || rel >= 0x12a5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5c80 size=160 callers=0 calls=3
   calls: sub_12a4e80, sub_12adde0, sub_12ae770
*/
void sub_12a5c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5c80ULL || rel >= 0x12a5d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5d20 size=16 callers=0 calls=0
*/
void sub_12a5d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5d20ULL || rel >= 0x12a5d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5d30 size=112 callers=0 calls=0
*/
void sub_12a5d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5d30ULL || rel >= 0x12a5da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5da0 size=112 callers=0 calls=0
*/
void sub_12a5da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5da0ULL || rel >= 0x12a5e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5e10 size=112 callers=0 calls=0
*/
void sub_12a5e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5e10ULL || rel >= 0x12a5e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5e80 size=112 callers=0 calls=0
*/
void sub_12a5e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5e80ULL || rel >= 0x12a5ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5ef0 size=112 callers=0 calls=0
*/
void sub_12a5ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5ef0ULL || rel >= 0x12a5f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a5f60 size=240 callers=2 calls=1
   calls: sub_e7f6c0
*/
void sub_12a5f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a5f60ULL || rel >= 0x12a6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6050 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_12a6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6050ULL || rel >= 0x12a6140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6140 size=144 callers=0 calls=2
   calls: anime_f_out_3, sub_12ae680
*/
void sub_12a6140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6140ULL || rel >= 0x12a61d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a61d0 size=16 callers=0 calls=0
*/
void sub_12a61d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a61d0ULL || rel >= 0x12a61e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a61e0 size=16 callers=0 calls=0
*/
void sub_12a61e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a61e0ULL || rel >= 0x12a61f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a61f0 size=16 callers=0 calls=0
*/
void sub_12a61f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a61f0ULL || rel >= 0x12a6200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6200 size=128 callers=0 calls=0
*/
void sub_12a6200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6200ULL || rel >= 0x12a6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6280 size=96 callers=0 calls=2
   calls: CommonOptionBar_3, sub_d0c0
*/
void sub_12a6280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6280ULL || rel >= 0x12a62e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a62e0 size=32 callers=0 calls=1
   calls: sub_12a4e80
*/
void sub_12a62e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a62e0ULL || rel >= 0x12a6300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6300 size=16 callers=0 calls=0
*/
void sub_12a6300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6300ULL || rel >= 0x12a6310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6310 size=112 callers=0 calls=0
*/
void sub_12a6310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6310ULL || rel >= 0x12a6380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6380 size=112 callers=0 calls=0
*/
void sub_12a6380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6380ULL || rel >= 0x12a63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a63f0 size=112 callers=0 calls=0
*/
void sub_12a63f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a63f0ULL || rel >= 0x12a6460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6460 size=112 callers=0 calls=0
*/
void sub_12a6460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6460ULL || rel >= 0x12a64d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a64d0 size=112 callers=0 calls=0
*/
void sub_12a64d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a64d0ULL || rel >= 0x12a6540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6540 size=128 callers=0 calls=0
*/
void sub_12a6540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6540ULL || rel >= 0x12a65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a65c0 size=752 callers=0 calls=11
   calls: CommonOptionBar_3, anime_keep_3, sub_12a47f0, sub_12a6c10, sub_1502120, sub_5cfad0, sub_5cfaf0, sub_795bc0, sub_c39c40, sub_d0c0, sub_e806b0
*/
void sub_12a65c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a65c0ULL || rel >= 0x12a68b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a68b0 size=288 callers=0 calls=6
   calls: anime_f_out_3, sub_129ffc0, sub_12a4650, sub_12a4e80, sub_12adde0, sub_e806b0
*/
void sub_12a68b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a68b0ULL || rel >= 0x12a69d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a69d0 size=16 callers=0 calls=0
*/
void sub_12a69d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a69d0ULL || rel >= 0x12a69e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a69e0 size=112 callers=0 calls=0
*/
void sub_12a69e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a69e0ULL || rel >= 0x12a6a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6a50 size=112 callers=0 calls=0
*/
void sub_12a6a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6a50ULL || rel >= 0x12a6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6ac0 size=112 callers=0 calls=0
*/
void sub_12a6ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6ac0ULL || rel >= 0x12a6b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6b30 size=112 callers=0 calls=0
*/
void sub_12a6b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6b30ULL || rel >= 0x12a6ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6ba0 size=112 callers=0 calls=0
*/
void sub_12a6ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6ba0ULL || rel >= 0x12a6c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6c10 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_12a6c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6c10ULL || rel >= 0x12a6d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6d00 size=128 callers=0 calls=0
*/
void sub_12a6d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6d00ULL || rel >= 0x12a6d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a6d80 size=2656 callers=0 calls=20
   calls: CommonOptionBar_3, sub_12a2c50, sub_12a4650, sub_12a47f0, sub_12f9ef0, sub_134f490, sub_135a1a0, sub_13736e0, sub_13736f0, sub_1373860, sub_14dbb10, sub_14dbb60
   ... +8 more
   ref: ViewTop
   ref: play_demo
   ref: sd8030_pokejob
   ref: sd8031_pokejob_back
*/
void play_demo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a6d80ULL || rel >= 0x12a77e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a77e0 size=224 callers=0 calls=9
   calls: demo_data, sub_129ff40, sub_129ffc0, sub_12a4650, sub_12a4e80, sub_c1bcb0, sub_c1bce0, sub_c1bd10, sub_c444b0
*/
void sub_12a77e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a77e0ULL || rel >= 0x12a78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a78c0 size=16 callers=0 calls=0
*/
void sub_12a78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a78c0ULL || rel >= 0x12a78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a78d0 size=176 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_12a78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a78d0ULL || rel >= 0x12a7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a7980 size=176 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_12a7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a7980ULL || rel >= 0x12a7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a7a30 size=176 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_12a7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a7a30ULL || rel >= 0x12a7ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a7ae0 size=176 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_12a7ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a7ae0ULL || rel >= 0x12a7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a7b90 size=176 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_12a7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a7b90ULL || rel >= 0x12a7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a7c40 size=176 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_12a7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a7c40ULL || rel >= 0x12a7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a7cf0 size=128 callers=0 calls=0
*/
void sub_12a7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a7cf0ULL || rel >= 0x12a7d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a7d70 size=1696 callers=0 calls=23
   calls: CommonOptionBar_3, LEARN_SKILL_7, T_title_00_3, T_title_02, anime_keep_3, company_icon, company_txt, effort_type, sub_1299830, sub_12a2880, sub_12a2c50, sub_12a2da0
   ... +11 more
   ref: ViewResult
   ref: ViewTop
   ref: ViewCheck
   ref: ViewBg
   ref: result
*/
void ViewResult(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a7d70ULL || rel >= 0x12a8410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a8410 size=176 callers=1 calls=3
   calls: sub_13736e0, sub_13736f0, sub_1373860
*/
void sub_12a8410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a8410ULL || rel >= 0x12a84c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a84c0 size=784 callers=1 calls=8
   calls: sub_1299c40, sub_12fafe0, sub_13736e0, sub_1373970, sub_764b40, sub_7658b0, sub_7664a0, sub_766da0
   ref: LEARN_SKILL
*/
void LEARN_SKILL_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a84c0ULL || rel >= 0x12a87d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a87d0 size=656 callers=1 calls=6
   calls: effort_type_2, effort_up, sub_1299e10, sub_13736e0, sub_1373970, sub_764da0
*/
void sub_12a87d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a87d0ULL || rel >= 0x12a8a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a8a60 size=304 callers=1 calls=6
   calls: rank_d, reward_rank, sub_1367100, sub_13736e0, sub_1374180, sub_137b8e0
*/
void sub_12a8a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a8a60ULL || rel >= 0x12a8b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a8b90 size=4624 callers=0 calls=29
   calls: T_effort_add_00, T_lv_add_00, anime__s, anime_f_out_3, anime_keep_3, effort, effort_type_2, effort_up, status, sub_12a0da0, sub_12a3c80, sub_12a4e80
   ... +17 more
*/
void sub_12a8b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a8b90ULL || rel >= 0x12a9da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a9da0 size=240 callers=1 calls=2
   calls: emotion_off_2, sub_1299830
*/
void sub_12a9da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a9da0ULL || rel >= 0x12a9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a9e90 size=64 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_12a9e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a9e90ULL || rel >= 0x12a9ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012a9ed0 size=912 callers=0 calls=0
*/
void sub_12a9ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a9ed0ULL || rel >= 0x12aa260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa260 size=16 callers=0 calls=0
*/
void sub_12aa260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa260ULL || rel >= 0x12aa270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa270 size=112 callers=0 calls=1
   calls: sub_12a53e0
*/
void sub_12aa270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa270ULL || rel >= 0x12aa2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa2e0 size=16 callers=0 calls=0
*/
void sub_12aa2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa2e0ULL || rel >= 0x12aa2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa2f0 size=16 callers=0 calls=0
*/
void sub_12aa2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa2f0ULL || rel >= 0x12aa300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa300 size=112 callers=0 calls=1
   calls: sub_12a53e0
*/
void sub_12aa300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa300ULL || rel >= 0x12aa370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa370 size=112 callers=0 calls=1
   calls: sub_12a53e0
*/
void sub_12aa370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa370ULL || rel >= 0x12aa3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa3e0 size=16 callers=0 calls=0
*/
void sub_12aa3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa3e0ULL || rel >= 0x12aa3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa3f0 size=16 callers=0 calls=0
*/
void sub_12aa3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa3f0ULL || rel >= 0x12aa400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa400 size=48 callers=0 calls=0
*/
void sub_12aa400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa400ULL || rel >= 0x12aa430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa430 size=16 callers=0 calls=0
*/
void sub_12aa430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa430ULL || rel >= 0x12aa440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa440 size=16 callers=0 calls=0
*/
void sub_12aa440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa440ULL || rel >= 0x12aa450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa450 size=16 callers=0 calls=0
*/
void sub_12aa450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa450ULL || rel >= 0x12aa460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa460 size=16 callers=0 calls=0
*/
void sub_12aa460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa460ULL || rel >= 0x12aa470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa470 size=16 callers=0 calls=0
*/
void sub_12aa470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa470ULL || rel >= 0x12aa480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa480 size=16 callers=0 calls=0
*/
void sub_12aa480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa480ULL || rel >= 0x12aa490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa490 size=16 callers=0 calls=0
*/
void sub_12aa490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa490ULL || rel >= 0x12aa4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa4a0 size=16 callers=0 calls=0
*/
void sub_12aa4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa4a0ULL || rel >= 0x12aa4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa4b0 size=16 callers=0 calls=0
*/
void sub_12aa4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa4b0ULL || rel >= 0x12aa4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa4c0 size=16 callers=0 calls=0
*/
void sub_12aa4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa4c0ULL || rel >= 0x12aa4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa4d0 size=16 callers=0 calls=0
*/
void sub_12aa4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa4d0ULL || rel >= 0x12aa4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa4e0 size=16 callers=0 calls=0
*/
void sub_12aa4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa4e0ULL || rel >= 0x12aa4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa4f0 size=16 callers=0 calls=0
*/
void sub_12aa4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa4f0ULL || rel >= 0x12aa500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa500 size=16 callers=0 calls=0
*/
void sub_12aa500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa500ULL || rel >= 0x12aa510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa510 size=16 callers=0 calls=0
*/
void sub_12aa510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa510ULL || rel >= 0x12aa520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa520 size=16 callers=0 calls=0
*/
void sub_12aa520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa520ULL || rel >= 0x12aa530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa530 size=16 callers=0 calls=0
*/
void sub_12aa530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa530ULL || rel >= 0x12aa540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa540 size=16 callers=0 calls=0
*/
void sub_12aa540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa540ULL || rel >= 0x12aa550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa550 size=16 callers=0 calls=0
*/
void sub_12aa550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa550ULL || rel >= 0x12aa560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa560 size=16 callers=0 calls=0
*/
void sub_12aa560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa560ULL || rel >= 0x12aa570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa570 size=16 callers=0 calls=0
*/
void sub_12aa570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa570ULL || rel >= 0x12aa580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa580 size=16 callers=0 calls=0
*/
void sub_12aa580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa580ULL || rel >= 0x12aa590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa590 size=16 callers=0 calls=0
*/
void sub_12aa590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa590ULL || rel >= 0x12aa5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa5a0 size=128 callers=0 calls=0
*/
void sub_12aa5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa5a0ULL || rel >= 0x12aa620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aa620 size=2912 callers=0 calls=36
   calls: CommonOptionBar_3, anime_keep_3, initialJob, sub_1298430, sub_12987d0, sub_1298840, sub_1298dd0, sub_1298f90, sub_12994f0, sub_12996a0, sub_12a4650, sub_12a47f0
   ... +24 more
   ref: execute
*/
void execute_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aa620ULL || rel >= 0x12ab180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ab180 size=5040 callers=0 calls=37
   calls: T_contents_03_01, T_pw_counter_00, anime_f_out_3, anime_keep_3, change_icon, sub_12996a0, sub_12a4650, sub_12a4730, sub_12a47f0, sub_12a48b0, sub_12a4980, sub_12a4e80
   ... +25 more
*/
void sub_12ab180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ab180ULL || rel >= 0x12ac530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ac530 size=560 callers=3 calls=3
   calls: sub_12a0da0, sub_12a43e0, sub_e807f0
*/
void sub_12ac530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ac530ULL || rel >= 0x12ac760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ac760 size=384 callers=2 calls=0
*/
void sub_12ac760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ac760ULL || rel >= 0x12ac8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ac8e0 size=416 callers=1 calls=3
   calls: sub_12a0da0, sub_12ad690, sub_e807f0
*/
void sub_12ac8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ac8e0ULL || rel >= 0x12aca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aca80 size=288 callers=2 calls=12
   calls: anime_f_out_3, sub_129ff40, sub_12a4650, sub_12a5060, sub_12addc0, sub_12adf40, sub_12ae680, sub_12b6db0, sub_12b6ef0, sub_1502120, sub_5cfad0, sub_c445f0
*/
void sub_12aca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aca80ULL || rel >= 0x12acba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012acba0 size=448 callers=0 calls=7
   calls: sub_12995d0, sub_1299900, sub_12a4650, sub_12adf40, sub_1350ab0, sub_13736e0, sub_1373cb0
*/
void sub_12acba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12acba0ULL || rel >= 0x12acd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012acd60 size=256 callers=1 calls=9
   calls: T_contents_03_01, change_icon, effort_type, sub_1299330, sub_12a4650, sub_12b4ab0, sub_12b5560, sub_12b6d40, sub_12b6db0
*/
void sub_12acd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12acd60ULL || rel >= 0x12ace60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ace60 size=16 callers=0 calls=0
*/
void sub_12ace60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ace60ULL || rel >= 0x12ace70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ace70 size=112 callers=0 calls=0
*/
void sub_12ace70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ace70ULL || rel >= 0x12acee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012acee0 size=112 callers=0 calls=0
*/
void sub_12acee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12acee0ULL || rel >= 0x12acf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012acf50 size=112 callers=0 calls=0
*/
void sub_12acf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12acf50ULL || rel >= 0x12acfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012acfc0 size=112 callers=0 calls=0
*/
void sub_12acfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12acfc0ULL || rel >= 0x12ad030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad030 size=112 callers=0 calls=0
*/
void sub_12ad030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad030ULL || rel >= 0x12ad0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad0a0 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_12ad0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad0a0ULL || rel >= 0x12ad190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad190 size=240 callers=1 calls=1
   calls: sub_e7f6c0
*/
void sub_12ad190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad190ULL || rel >= 0x12ad280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad280 size=64 callers=0 calls=1
   calls: sub_12a47f0
*/
void sub_12ad280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad280ULL || rel >= 0x12ad2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad2c0 size=16 callers=0 calls=0
*/
void sub_12ad2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad2c0ULL || rel >= 0x12ad2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad2d0 size=16 callers=0 calls=0
*/
void sub_12ad2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad2d0ULL || rel >= 0x12ad2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad2e0 size=16 callers=0 calls=0
*/
void sub_12ad2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad2e0ULL || rel >= 0x12ad2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad2f0 size=96 callers=0 calls=2
   calls: sub_12a47f0, sub_12a48b0
*/
void sub_12ad2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad2f0ULL || rel >= 0x12ad350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad350 size=16 callers=0 calls=0
*/
void sub_12ad350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad350ULL || rel >= 0x12ad360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad360 size=16 callers=0 calls=0
*/
void sub_12ad360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad360ULL || rel >= 0x12ad370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad370 size=16 callers=0 calls=0
*/
void sub_12ad370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad370ULL || rel >= 0x12ad380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad380 size=32 callers=0 calls=0
*/
void sub_12ad380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad380ULL || rel >= 0x12ad3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad3a0 size=16 callers=0 calls=0
*/
void sub_12ad3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad3a0ULL || rel >= 0x12ad3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad3b0 size=16 callers=0 calls=0
*/
void sub_12ad3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad3b0ULL || rel >= 0x12ad3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad3c0 size=16 callers=0 calls=0
*/
void sub_12ad3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad3c0ULL || rel >= 0x12ad3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad3d0 size=128 callers=0 calls=4
   calls: recruit_count, sub_12a4650, sub_12a4730, sub_12a48b0
*/
void sub_12ad3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad3d0ULL || rel >= 0x12ad450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad450 size=16 callers=0 calls=0
*/
void sub_12ad450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad450ULL || rel >= 0x12ad460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad460 size=16 callers=0 calls=0
*/
void sub_12ad460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad460ULL || rel >= 0x12ad470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad470 size=16 callers=0 calls=0
*/
void sub_12ad470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad470ULL || rel >= 0x12ad480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad480 size=16 callers=0 calls=0
*/
void sub_12ad480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad480ULL || rel >= 0x12ad490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad490 size=16 callers=0 calls=0
*/
void sub_12ad490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad490ULL || rel >= 0x12ad4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad4a0 size=16 callers=0 calls=0
*/
void sub_12ad4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad4a0ULL || rel >= 0x12ad4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad4b0 size=16 callers=0 calls=0
*/
void sub_12ad4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad4b0ULL || rel >= 0x12ad4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad4c0 size=16 callers=0 calls=0
*/
void sub_12ad4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad4c0ULL || rel >= 0x12ad4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad4d0 size=16 callers=0 calls=0
*/
void sub_12ad4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad4d0ULL || rel >= 0x12ad4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad4e0 size=16 callers=0 calls=0
*/
void sub_12ad4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad4e0ULL || rel >= 0x12ad4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad4f0 size=16 callers=0 calls=0
*/
void sub_12ad4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad4f0ULL || rel >= 0x12ad500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad500 size=32 callers=0 calls=0
*/
void sub_12ad500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad500ULL || rel >= 0x12ad520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad520 size=16 callers=0 calls=0
*/
void sub_12ad520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad520ULL || rel >= 0x12ad530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad530 size=16 callers=0 calls=0
*/
void sub_12ad530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad530ULL || rel >= 0x12ad540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad540 size=16 callers=0 calls=0
*/
void sub_12ad540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad540ULL || rel >= 0x12ad550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad550 size=80 callers=0 calls=1
   calls: sub_12a48b0
*/
void sub_12ad550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad550ULL || rel >= 0x12ad5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad5a0 size=16 callers=0 calls=0
*/
void sub_12ad5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad5a0ULL || rel >= 0x12ad5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad5b0 size=16 callers=0 calls=0
*/
void sub_12ad5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad5b0ULL || rel >= 0x12ad5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad5c0 size=16 callers=0 calls=0
*/
void sub_12ad5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad5c0ULL || rel >= 0x12ad5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad5d0 size=16 callers=0 calls=0
*/
void sub_12ad5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad5d0ULL || rel >= 0x12ad5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad5e0 size=16 callers=0 calls=0
*/
void sub_12ad5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad5e0ULL || rel >= 0x12ad5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad5f0 size=16 callers=0 calls=0
*/
void sub_12ad5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad5f0ULL || rel >= 0x12ad600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad600 size=16 callers=0 calls=0
*/
void sub_12ad600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad600ULL || rel >= 0x12ad610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad610 size=16 callers=0 calls=0
*/
void sub_12ad610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad610ULL || rel >= 0x12ad620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad620 size=16 callers=0 calls=0
*/
void sub_12ad620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad620ULL || rel >= 0x12ad630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad630 size=16 callers=0 calls=0
*/
void sub_12ad630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad630ULL || rel >= 0x12ad640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad640 size=16 callers=0 calls=0
*/
void sub_12ad640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad640ULL || rel >= 0x12ad650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad650 size=16 callers=0 calls=0
*/
void sub_12ad650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad650ULL || rel >= 0x12ad660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad660 size=16 callers=0 calls=0
*/
void sub_12ad660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad660ULL || rel >= 0x12ad670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad670 size=16 callers=0 calls=0
*/
void sub_12ad670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad670ULL || rel >= 0x12ad680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad680 size=16 callers=0 calls=0
*/
void sub_12ad680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad680ULL || rel >= 0x12ad690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad690 size=288 callers=1 calls=1
   calls: sub_12a43e0
*/
void sub_12ad690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad690ULL || rel >= 0x12ad7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad7b0 size=96 callers=0 calls=1
   calls: sub_12a4980
*/
void sub_12ad7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad7b0ULL || rel >= 0x12ad810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad810 size=16 callers=0 calls=0
*/
void sub_12ad810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad810ULL || rel >= 0x12ad820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad820 size=16 callers=0 calls=0
*/
void sub_12ad820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad820ULL || rel >= 0x12ad830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad830 size=16 callers=0 calls=0
*/
void sub_12ad830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad830ULL || rel >= 0x12ad840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad840 size=16 callers=0 calls=0
*/
void sub_12ad840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad840ULL || rel >= 0x12ad850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad850 size=16 callers=0 calls=0
*/
void sub_12ad850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad850ULL || rel >= 0x12ad860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad860 size=16 callers=0 calls=0
*/
void sub_12ad860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad860ULL || rel >= 0x12ad870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad870 size=16 callers=0 calls=0
*/
void sub_12ad870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad870ULL || rel >= 0x12ad880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad880 size=112 callers=0 calls=2
   calls: sub_1299480, sub_12a4650
*/
void sub_12ad880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad880ULL || rel >= 0x12ad8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad8f0 size=16 callers=0 calls=0
*/
void sub_12ad8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad8f0ULL || rel >= 0x12ad900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad900 size=16 callers=0 calls=0
*/
void sub_12ad900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad900ULL || rel >= 0x12ad910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad910 size=16 callers=0 calls=0
*/
void sub_12ad910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad910ULL || rel >= 0x12ad920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad920 size=176 callers=0 calls=3
   calls: sub_1299480, sub_12995d0, sub_12a4650
*/
void sub_12ad920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad920ULL || rel >= 0x12ad9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad9d0 size=16 callers=0 calls=0
*/
void sub_12ad9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad9d0ULL || rel >= 0x12ad9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad9e0 size=16 callers=0 calls=0
*/
void sub_12ad9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad9e0ULL || rel >= 0x12ad9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ad9f0 size=16 callers=0 calls=0
*/
void sub_12ad9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ad9f0ULL || rel >= 0x12ada00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ada00 size=112 callers=0 calls=3
   calls: anime_f_out_3, sub_12a4650, sub_12acd60
*/
void sub_12ada00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ada00ULL || rel >= 0x12ada70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ada70 size=16 callers=0 calls=0
*/
void sub_12ada70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ada70ULL || rel >= 0x12ada80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ada80 size=16 callers=0 calls=0
*/
void sub_12ada80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ada80ULL || rel >= 0x12ada90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ada90 size=16 callers=0 calls=0
*/
void sub_12ada90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ada90ULL || rel >= 0x12adaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adaa0 size=16 callers=0 calls=0
*/
void sub_12adaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adaa0ULL || rel >= 0x12adab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adab0 size=16 callers=0 calls=0
*/
void sub_12adab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adab0ULL || rel >= 0x12adac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adac0 size=16 callers=0 calls=0
*/
void sub_12adac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adac0ULL || rel >= 0x12adad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adad0 size=16 callers=0 calls=0
*/
void sub_12adad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adad0ULL || rel >= 0x12adae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adae0 size=16 callers=0 calls=0
*/
void sub_12adae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adae0ULL || rel >= 0x12adaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adaf0 size=16 callers=0 calls=0
*/
void sub_12adaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adaf0ULL || rel >= 0x12adb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adb00 size=16 callers=0 calls=0
*/
void sub_12adb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adb00ULL || rel >= 0x12adb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adb10 size=16 callers=0 calls=0
*/
void sub_12adb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adb10ULL || rel >= 0x12adb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adb20 size=80 callers=0 calls=2
   calls: sub_12addc0, sub_12b3570
*/
void sub_12adb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adb20ULL || rel >= 0x12adb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adb70 size=16 callers=0 calls=0
*/
void sub_12adb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adb70ULL || rel >= 0x12adb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adb80 size=16 callers=0 calls=0
*/
void sub_12adb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adb80ULL || rel >= 0x12adb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adb90 size=16 callers=0 calls=0
*/
void sub_12adb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adb90ULL || rel >= 0x12adba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adba0 size=128 callers=0 calls=0
*/
void sub_12adba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adba0ULL || rel >= 0x12adc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adc20 size=144 callers=12 calls=0
*/
void sub_12adc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adc20ULL || rel >= 0x12adcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adcb0 size=80 callers=6 calls=1
   calls: sub_e833a0
   ref: anime_in
   ref: anime_keep
   ref: anime_f_in
*/
void anime_keep_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adcb0ULL || rel >= 0x12add00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012add00 size=32 callers=7 calls=0
   ref: anime_f_out
   ref: anime_out
*/
void anime_f_out_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12add00ULL || rel >= 0x12add20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012add20 size=160 callers=0 calls=1
   calls: sub_ea4760
*/
void sub_12add20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12add20ULL || rel >= 0x12addc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012addc0 size=32 callers=6 calls=0
*/
void sub_12addc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12addc0ULL || rel >= 0x12adde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adde0 size=352 callers=10 calls=1
   calls: sub_14ab2b0
*/
void sub_12adde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adde0ULL || rel >= 0x12adf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adf40 size=80 callers=4 calls=2
   calls: sub_14e1a30, sub_e84310
*/
void sub_12adf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adf40ULL || rel >= 0x12adf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adf90 size=64 callers=0 calls=1
   calls: sub_e806b0
*/
void sub_12adf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adf90ULL || rel >= 0x12adfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012adfd0 size=352 callers=25 calls=4
   calls: sub_14ac370, sub_67d450, sub_e7eb10, sub_e7f7c0
*/
void sub_12adfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12adfd0ULL || rel >= 0x12ae130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae130 size=224 callers=4 calls=1
   calls: sub_1315b90
*/
void sub_12ae130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae130ULL || rel >= 0x12ae210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae210 size=128 callers=0 calls=0
*/
void sub_12ae210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae210ULL || rel >= 0x12ae290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae290 size=128 callers=0 calls=0
*/
void sub_12ae290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae290ULL || rel >= 0x12ae310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae310 size=16 callers=0 calls=0
*/
void sub_12ae310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae310ULL || rel >= 0x12ae320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae320 size=16 callers=0 calls=0
*/
void sub_12ae320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae320ULL || rel >= 0x12ae330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae330 size=16 callers=0 calls=0
*/
void sub_12ae330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae330ULL || rel >= 0x12ae340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae340 size=128 callers=0 calls=0
*/
void sub_12ae340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae340ULL || rel >= 0x12ae3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae3c0 size=128 callers=0 calls=0
*/
void sub_12ae3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae3c0ULL || rel >= 0x12ae440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae440 size=16 callers=0 calls=0
*/
void sub_12ae440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae440ULL || rel >= 0x12ae450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae450 size=16 callers=0 calls=0
*/
void sub_12ae450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae450ULL || rel >= 0x12ae460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae460 size=128 callers=0 calls=0
*/
void sub_12ae460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae460ULL || rel >= 0x12ae4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae4e0 size=128 callers=0 calls=0
*/
void sub_12ae4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae4e0ULL || rel >= 0x12ae560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae560 size=16 callers=0 calls=0
*/
void sub_12ae560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae560ULL || rel >= 0x12ae570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae570 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/pw/bin/pw_bg_00_lyt.bin
*/
void pw_bg_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae570ULL || rel >= 0x12ae680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae680 size=240 callers=6 calls=1
   calls: sub_e83430
*/
void sub_12ae680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae680ULL || rel >= 0x12ae770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae770 size=432 callers=4 calls=1
   calls: sub_14ab2b0
*/
void sub_12ae770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae770ULL || rel >= 0x12ae920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae920 size=128 callers=0 calls=0
*/
void sub_12ae920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae920ULL || rel >= 0x12ae9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012ae9a0 size=112 callers=0 calls=1
   calls: sub_12a29d0
*/
void sub_12ae9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae9a0ULL || rel >= 0x12aea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 012aea10 size=128 callers=0 calls=0
*/
void sub_12aea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12aea10ULL || rel >= 0x12aea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

