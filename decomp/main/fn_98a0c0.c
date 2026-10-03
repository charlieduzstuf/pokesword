/* main functions 0098a0c0..009ae1b0 (75 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0098a0c0 size=96 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_98a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a0c0ULL || rel >= 0x98a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a120 size=32 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_98a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a120ULL || rel >= 0x98a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a140 size=32 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_98a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a140ULL || rel >= 0x98a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a160 size=32 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_98a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a160ULL || rel >= 0x98a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a180 size=32 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_98a180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a180ULL || rel >= 0x98a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a1a0 size=32 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_98a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a1a0ULL || rel >= 0x98a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a1c0 size=32 callers=1 calls=1
   calls: sub_98ab90
*/
void sub_98a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a1c0ULL || rel >= 0x98a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a1e0 size=80 callers=1 calls=1
   calls: sub_98ab90
*/
void sub_98a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a1e0ULL || rel >= 0x98a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a230 size=32 callers=1 calls=1
   calls: sub_98ab90
*/
void sub_98a230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a230ULL || rel >= 0x98a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a250 size=64 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_98a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a250ULL || rel >= 0x98a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a290 size=80 callers=2 calls=1
   calls: sub_98adb0
*/
void sub_98a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a290ULL || rel >= 0x98a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a2e0 size=48 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_98a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a2e0ULL || rel >= 0x98a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a310 size=64 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_98a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a310ULL || rel >= 0x98a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a350 size=64 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_98a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a350ULL || rel >= 0x98a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a390 size=80 callers=1 calls=1
   calls: sub_98adb0
*/
void sub_98a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a390ULL || rel >= 0x98a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a3e0 size=32 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_98a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a3e0ULL || rel >= 0x98a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a400 size=32 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_98a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a400ULL || rel >= 0x98a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a420 size=32 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_98a420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a420ULL || rel >= 0x98a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a440 size=64 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_98a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a440ULL || rel >= 0x98a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a480 size=48 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_98a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a480ULL || rel >= 0x98a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a4b0 size=48 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_98a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a4b0ULL || rel >= 0x98a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a4e0 size=48 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_98a4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a4e0ULL || rel >= 0x98a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a510 size=32 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_98a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a510ULL || rel >= 0x98a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a530 size=64 callers=1 calls=1
   calls: sub_98adb0
*/
void sub_98a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a530ULL || rel >= 0x98a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a570 size=64 callers=2 calls=1
   calls: sub_98adb0
*/
void sub_98a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a570ULL || rel >= 0x98a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a5b0 size=64 callers=1 calls=1
   calls: sub_98adb0
*/
void sub_98a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a5b0ULL || rel >= 0x98a5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a5f0 size=64 callers=1 calls=1
   calls: sub_98adb0
*/
void sub_98a5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a5f0ULL || rel >= 0x98a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a630 size=64 callers=1 calls=1
   calls: sub_98adb0
*/
void sub_98a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a630ULL || rel >= 0x98a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a670 size=32 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_98a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a670ULL || rel >= 0x98a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a690 size=48 callers=1 calls=1
   calls: sub_98adb0
*/
void sub_98a690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a690ULL || rel >= 0x98a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a6c0 size=48 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_98a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a6c0ULL || rel >= 0x98a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a6f0 size=32 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_98a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a6f0ULL || rel >= 0x98a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a710 size=112 callers=1 calls=1
   calls: sub_98adb0
*/
void sub_98a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a710ULL || rel >= 0x98a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a780 size=48 callers=1 calls=1
   calls: sub_98adb0
*/
void sub_98a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a780ULL || rel >= 0x98a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a7b0 size=48 callers=1 calls=1
   calls: sub_98adb0
*/
void sub_98a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a7b0ULL || rel >= 0x98a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a7e0 size=32 callers=1 calls=1
   calls: sub_98ab90
*/
void sub_98a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a7e0ULL || rel >= 0x98a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a800 size=32 callers=1 calls=1
   calls: sub_98ab90
*/
void sub_98a800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a800ULL || rel >= 0x98a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a820 size=48 callers=2 calls=1
   calls: sub_98ab90
*/
void sub_98a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a820ULL || rel >= 0x98a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a850 size=48 callers=2 calls=1
   calls: sub_98ab90
*/
void sub_98a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a850ULL || rel >= 0x98a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a880 size=48 callers=1 calls=1
   calls: sub_98adb0
*/
void sub_98a880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a880ULL || rel >= 0x98a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a8b0 size=32 callers=1 calls=1
   calls: sub_98adb0
*/
void sub_98a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a8b0ULL || rel >= 0x98a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a8d0 size=32 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_98a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a8d0ULL || rel >= 0x98a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a8f0 size=96 callers=1 calls=1
   calls: sub_98a950
*/
void sub_98a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a8f0ULL || rel >= 0x98a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098a950 size=256 callers=4 calls=2
   calls: sub_672980, sub_c39c40
*/
void sub_98a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98a950ULL || rel >= 0x98aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098aa50 size=80 callers=1 calls=1
   calls: sub_98a950
*/
void sub_98aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98aa50ULL || rel >= 0x98aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098aaa0 size=32 callers=0 calls=0
*/
void sub_98aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98aaa0ULL || rel >= 0x98aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098aac0 size=32 callers=1 calls=0
*/
void sub_98aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98aac0ULL || rel >= 0x98aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098aae0 size=176 callers=0 calls=1
   calls: sub_98a950
*/
void sub_98aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98aae0ULL || rel >= 0x98ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098ab90 size=304 callers=78 calls=2
   calls: sub_14dd2a0, sub_98acc0
*/
void sub_98ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98ab90ULL || rel >= 0x98acc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098acc0 size=240 callers=10 calls=0
*/
void sub_98acc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98acc0ULL || rel >= 0x98adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098adb0 size=304 callers=31 calls=2
   calls: sub_14dd6a0, sub_98acc0
*/
void sub_98adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98adb0ULL || rel >= 0x98aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098aee0 size=32 callers=0 calls=0
*/
void sub_98aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98aee0ULL || rel >= 0x98af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098af00 size=16 callers=0 calls=0
*/
void sub_98af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98af00ULL || rel >= 0x98af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098af10 size=16 callers=0 calls=0
*/
void sub_98af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98af10ULL || rel >= 0x98af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098af20 size=16 callers=0 calls=0
*/
void sub_98af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98af20ULL || rel >= 0x98af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098af30 size=144 callers=10 calls=1
   calls: sub_970060
*/
void sub_98af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98af30ULL || rel >= 0x98afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098afc0 size=128 callers=0 calls=2
   calls: sub_59a4f0, sub_98cf50
*/
void sub_98afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98afc0ULL || rel >= 0x98b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098b040 size=64 callers=0 calls=0
*/
void sub_98b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98b040ULL || rel >= 0x98b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098b080 size=672 callers=8 calls=4
   calls: sub_974630, sub_b334c0, sub_b334e0, sub_ea0fd0
*/
void sub_98b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98b080ULL || rel >= 0x98b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098b320 size=640 callers=1 calls=4
   calls: sub_974630, sub_b334c0, sub_b33500, sub_ea0fd0
*/
void sub_98b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98b320ULL || rel >= 0x98b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098b5a0 size=192 callers=0 calls=1
   calls: sub_b335e0
*/
void sub_98b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98b5a0ULL || rel >= 0x98b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098b660 size=1216 callers=5 calls=11
   calls: camAdjustScale_2, sub_607750, sub_6194a0, sub_98c1b0, sub_b33760, sub_b33c60, sub_b46b30, sub_b46d30, sub_b46e30, sub_b99000, sub_c51540
*/
void sub_98b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98b660ULL || rel >= 0x98bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098bb20 size=1680 callers=1 calls=20
   calls: exadjust_table, sub_11061d0, sub_1106220, sub_11063e0, sub_11067c0, sub_12f2b90, sub_12f2c40, sub_59a4f0, sub_607750, sub_618d40, sub_618e70, sub_671d00
   ... +8 more
   ref: adjustScale
   ref: camAdjustScale
*/
void camAdjustScale_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98bb20ULL || rel >= 0x98c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098c1b0 size=560 callers=7 calls=2
   calls: sub_607750, sub_b33800
*/
void sub_98c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98c1b0ULL || rel >= 0x98c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098c3e0 size=896 callers=2 calls=4
   calls: sub_607750, sub_987040, sub_b33c60, sub_b8c930
*/
void sub_98c3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98c3e0ULL || rel >= 0x98c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098c760 size=416 callers=1 calls=2
   calls: sub_671e80, sub_98c3e0
*/
void sub_98c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98c760ULL || rel >= 0x98c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098c900 size=352 callers=7 calls=4
   calls: sub_967240, sub_9746f0, sub_b33640, sub_c51740
*/
void sub_98c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98c900ULL || rel >= 0x98ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098ca60 size=208 callers=8 calls=1
   calls: sub_b336a0
*/
void sub_98ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98ca60ULL || rel >= 0x98cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098cb30 size=656 callers=0 calls=2
   calls: PM_Visible_2, sub_b33870
*/
void sub_98cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98cb30ULL || rel >= 0x98cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098cdc0 size=224 callers=1 calls=3
   calls: sub_793fb0, sub_986e00, sub_b85840
   ref: PM_Visible
*/
void PM_Visible_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98cdc0ULL || rel >= 0x98cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098cea0 size=32 callers=0 calls=0
*/
void sub_98cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98cea0ULL || rel >= 0x98cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098cec0 size=144 callers=0 calls=3
   calls: sub_59a520, sub_974740, sub_98cf50
*/
void sub_98cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98cec0ULL || rel >= 0x98cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098cf50 size=464 callers=5 calls=2
   calls: sub_607750, sub_b33a30
*/
void sub_98cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98cf50ULL || rel >= 0x98d120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098d120 size=160 callers=0 calls=3
   calls: sub_59a520, sub_974760, sub_98cf50
*/
void sub_98d120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98d120ULL || rel >= 0x98d1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098d1c0 size=576 callers=5 calls=4
   calls: sub_607750, sub_b33c60, sub_b477b0, sub_b96730
*/
void sub_98d1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98d1c0ULL || rel >= 0x98d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098d400 size=496 callers=6 calls=3
   calls: sub_607750, sub_b33c60, sub_b46f20
*/
void sub_98d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98d400ULL || rel >= 0x98d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098d5f0 size=176 callers=4 calls=1
   calls: sub_b96730
*/
void sub_98d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98d5f0ULL || rel >= 0x98d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098d6a0 size=544 callers=2 calls=3
   calls: sub_1106320, sub_11063e0, sub_11067c0
   ref: g_table
*/
void g_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98d6a0ULL || rel >= 0x98d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098d8c0 size=640 callers=0 calls=3
   calls: sub_607750, sub_612ef0, sub_b33800
*/
void sub_98d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98d8c0ULL || rel >= 0x98db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098db40 size=288 callers=0 calls=0
*/
void sub_98db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98db40ULL || rel >= 0x98dc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098dc60 size=16 callers=0 calls=0
*/
void sub_98dc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98dc60ULL || rel >= 0x98dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098dc70 size=16 callers=0 calls=0
*/
void sub_98dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98dc70ULL || rel >= 0x98dc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098dc80 size=16 callers=0 calls=0
*/
void sub_98dc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98dc80ULL || rel >= 0x98dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098dc90 size=16 callers=0 calls=0
*/
void sub_98dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98dc90ULL || rel >= 0x98dca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098dca0 size=80 callers=0 calls=0
*/
void sub_98dca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98dca0ULL || rel >= 0x98dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098dcf0 size=16 callers=0 calls=0
*/
void sub_98dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98dcf0ULL || rel >= 0x98dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098dd00 size=16 callers=0 calls=0
*/
void sub_98dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98dd00ULL || rel >= 0x98dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098dd10 size=16 callers=0 calls=0
*/
void sub_98dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98dd10ULL || rel >= 0x98dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098dd20 size=16 callers=0 calls=0
*/
void sub_98dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98dd20ULL || rel >= 0x98dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098dd30 size=16 callers=0 calls=0
*/
void sub_98dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98dd30ULL || rel >= 0x98dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098dd40 size=16 callers=0 calls=0
*/
void sub_98dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98dd40ULL || rel >= 0x98dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098dd50 size=304 callers=0 calls=1
   calls: sub_967240
*/
void sub_98dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98dd50ULL || rel >= 0x98de80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098de80 size=16 callers=0 calls=0
*/
void sub_98de80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98de80ULL || rel >= 0x98de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098de90 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_98de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98de90ULL || rel >= 0x98ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098ded0 size=32 callers=0 calls=0
*/
void sub_98ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98ded0ULL || rel >= 0x98def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098def0 size=16 callers=0 calls=0
*/
void sub_98def0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98def0ULL || rel >= 0x98df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098df00 size=16 callers=0 calls=0
*/
void sub_98df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98df00ULL || rel >= 0x98df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098df10 size=192 callers=0 calls=1
   calls: sub_c51540
*/
void sub_98df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98df10ULL || rel >= 0x98dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098dfd0 size=16 callers=0 calls=0
*/
void sub_98dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98dfd0ULL || rel >= 0x98dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098dfe0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_98dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98dfe0ULL || rel >= 0x98e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e020 size=32 callers=0 calls=0
*/
void sub_98e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e020ULL || rel >= 0x98e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e040 size=16 callers=0 calls=0
*/
void sub_98e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e040ULL || rel >= 0x98e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e050 size=16 callers=0 calls=0
*/
void sub_98e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e050ULL || rel >= 0x98e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e060 size=112 callers=0 calls=1
   calls: sub_619130
*/
void sub_98e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e060ULL || rel >= 0x98e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e0d0 size=16 callers=0 calls=0
*/
void sub_98e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e0d0ULL || rel >= 0x98e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e0e0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_98e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e0e0ULL || rel >= 0x98e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e120 size=32 callers=0 calls=0
*/
void sub_98e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e120ULL || rel >= 0x98e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e140 size=16 callers=0 calls=0
*/
void sub_98e140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e140ULL || rel >= 0x98e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e150 size=16 callers=0 calls=0
*/
void sub_98e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e150ULL || rel >= 0x98e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e160 size=112 callers=0 calls=1
   calls: sub_6191c0
*/
void sub_98e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e160ULL || rel >= 0x98e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e1d0 size=80 callers=12 calls=1
   calls: sub_970060
*/
void sub_98e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e1d0ULL || rel >= 0x98e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e220 size=448 callers=13 calls=5
   calls: sub_5d99d0, sub_68d630, sub_68d950, sub_974630, sub_98eec0
*/
void sub_98e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e220ULL || rel >= 0x98e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e3e0 size=1088 callers=19 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_619640, sub_68d9f0, sub_9746f0
*/
void sub_98e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e3e0ULL || rel >= 0x98e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e820 size=16 callers=0 calls=0
*/
void sub_98e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e820ULL || rel >= 0x98e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e830 size=176 callers=0 calls=2
   calls: sub_68da30, sub_695420
*/
void sub_98e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e830ULL || rel >= 0x98e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e8e0 size=96 callers=0 calls=0
*/
void sub_98e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e8e0ULL || rel >= 0x98e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e940 size=96 callers=0 calls=0
*/
void sub_98e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e940ULL || rel >= 0x98e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e9a0 size=16 callers=0 calls=0
*/
void sub_98e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e9a0ULL || rel >= 0x98e9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098e9b0 size=240 callers=0 calls=0
*/
void sub_98e9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e9b0ULL || rel >= 0x98eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098eaa0 size=240 callers=0 calls=0
*/
void sub_98eaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98eaa0ULL || rel >= 0x98eb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098eb90 size=16 callers=0 calls=0
*/
void sub_98eb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98eb90ULL || rel >= 0x98eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098eba0 size=16 callers=0 calls=0
*/
void sub_98eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98eba0ULL || rel >= 0x98ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098ebb0 size=240 callers=0 calls=0
*/
void sub_98ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98ebb0ULL || rel >= 0x98eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098eca0 size=240 callers=0 calls=0
*/
void sub_98eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98eca0ULL || rel >= 0x98ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098ed90 size=304 callers=0 calls=1
   calls: sub_967240
*/
void sub_98ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98ed90ULL || rel >= 0x98eec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098eec0 size=240 callers=18 calls=1
   calls: sub_68d370
*/
void sub_98eec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98eec0ULL || rel >= 0x98efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098efb0 size=112 callers=4 calls=1
   calls: sub_142a040
*/
void sub_98efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98efb0ULL || rel >= 0x98f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098f020 size=352 callers=0 calls=2
   calls: sub_96c4a0, sub_988230
*/
void sub_98f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98f020ULL || rel >= 0x98f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098f180 size=112 callers=3 calls=1
   calls: sub_142a040
*/
void sub_98f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98f180ULL || rel >= 0x98f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098f1f0 size=352 callers=0 calls=2
   calls: sub_96c4a0, sub_98e3e0
*/
void sub_98f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98f1f0ULL || rel >= 0x98f350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098f350 size=112 callers=2 calls=1
   calls: sub_142a040
*/
void sub_98f350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98f350ULL || rel >= 0x98f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098f3c0 size=352 callers=0 calls=2
   calls: sub_96c4a0, sub_9b04d0
*/
void sub_98f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98f3c0ULL || rel >= 0x98f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098f520 size=144 callers=2 calls=1
   calls: sub_142a040
*/
void sub_98f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98f520ULL || rel >= 0x98f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098f5b0 size=80 callers=0 calls=0
*/
void sub_98f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98f5b0ULL || rel >= 0x98f600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098f600 size=208 callers=7 calls=1
   calls: sub_142a040
*/
void sub_98f600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98f600ULL || rel >= 0x98f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098f6d0 size=304 callers=0 calls=1
   calls: sub_142a1b0
*/
void sub_98f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98f6d0ULL || rel >= 0x98f800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098f800 size=208 callers=1 calls=1
   calls: sub_142a040
*/
void sub_98f800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98f800ULL || rel >= 0x98f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098f8d0 size=336 callers=0 calls=1
   calls: sub_142a1b0
*/
void sub_98f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98f8d0ULL || rel >= 0x98fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098fa20 size=176 callers=2 calls=1
   calls: sub_142a040
*/
void sub_98fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98fa20ULL || rel >= 0x98fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098fad0 size=176 callers=0 calls=1
   calls: sub_142a1b0
*/
void sub_98fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98fad0ULL || rel >= 0x98fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098fb80 size=336 callers=2 calls=1
   calls: sub_142a040
*/
void sub_98fb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98fb80ULL || rel >= 0x98fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098fcd0 size=592 callers=0 calls=1
   calls: sub_142a1b0
*/
void sub_98fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98fcd0ULL || rel >= 0x98ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0098ff20 size=240 callers=1 calls=1
   calls: sub_142a040
*/
void sub_98ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98ff20ULL || rel >= 0x990010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00990010 size=480 callers=0 calls=4
   calls: sub_142a1b0, sub_972c70, sub_9ab610, sub_9ab6c0
*/
void sub_990010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x990010ULL || rel >= 0x9901f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009901f0 size=208 callers=7 calls=1
   calls: sub_142a040
*/
void sub_9901f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9901f0ULL || rel >= 0x9902c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009902c0 size=480 callers=0 calls=3
   calls: sub_142a1b0, sub_9a71a0, sub_9a7240
*/
void sub_9902c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9902c0ULL || rel >= 0x9904a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009904a0 size=240 callers=2 calls=2
   calls: sub_142a040, sub_990590
*/
void sub_9904a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9904a0ULL || rel >= 0x990590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00990590 size=480 callers=18 calls=0
*/
void sub_990590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x990590ULL || rel >= 0x990770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00990770 size=336 callers=0 calls=2
   calls: sub_142a1b0, sub_9a71a0
*/
void sub_990770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x990770ULL || rel >= 0x9908c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009908c0 size=240 callers=1 calls=2
   calls: sub_142a040, sub_990590
*/
void sub_9908c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9908c0ULL || rel >= 0x9909b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009909b0 size=336 callers=0 calls=2
   calls: sub_142a1b0, sub_9a71a0
*/
void sub_9909b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9909b0ULL || rel >= 0x990b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00990b00 size=160 callers=1 calls=2
   calls: sub_142a040, sub_ed32d0
*/
void sub_990b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x990b00ULL || rel >= 0x990ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00990ba0 size=256 callers=0 calls=3
   calls: sub_142a1b0, sub_ed3290, sub_ed32d0
*/
void sub_990ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x990ba0ULL || rel >= 0x990ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00990ca0 size=224 callers=1 calls=2
   calls: sub_142a040, sub_ed32d0
*/
void sub_990ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x990ca0ULL || rel >= 0x990d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00990d80 size=368 callers=0 calls=3
   calls: sub_142a1b0, sub_ed3290, sub_ed32d0
*/
void sub_990d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x990d80ULL || rel >= 0x990ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00990ef0 size=256 callers=1 calls=2
   calls: sub_142a040, sub_ed32d0
*/
void sub_990ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x990ef0ULL || rel >= 0x990ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00990ff0 size=432 callers=0 calls=3
   calls: sub_142a1b0, sub_ed3290, sub_ed32d0
*/
void sub_990ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x990ff0ULL || rel >= 0x9911a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009911a0 size=288 callers=1 calls=2
   calls: sub_142a040, sub_ed32d0
*/
void sub_9911a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9911a0ULL || rel >= 0x9912c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009912c0 size=432 callers=0 calls=3
   calls: sub_142a1b0, sub_ed3290, sub_ed32d0
*/
void sub_9912c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9912c0ULL || rel >= 0x991470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00991470 size=352 callers=1 calls=2
   calls: sub_142a040, sub_ed32d0
*/
void sub_991470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x991470ULL || rel >= 0x9915d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009915d0 size=576 callers=0 calls=3
   calls: sub_142a1b0, sub_ed3290, sub_ed32d0
*/
void sub_9915d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9915d0ULL || rel >= 0x991810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00991810 size=176 callers=1 calls=2
   calls: sub_142a040, sub_ed32d0
*/
void sub_991810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x991810ULL || rel >= 0x9918c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009918c0 size=240 callers=0 calls=3
   calls: sub_142a1b0, sub_ed3290, sub_ed32d0
*/
void sub_9918c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9918c0ULL || rel >= 0x9919b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009919b0 size=208 callers=1 calls=2
   calls: sub_142a040, sub_ed32d0
*/
void sub_9919b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9919b0ULL || rel >= 0x991a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00991a80 size=320 callers=0 calls=3
   calls: sub_142a1b0, sub_ed3290, sub_ed32d0
*/
void sub_991a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x991a80ULL || rel >= 0x991bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00991bc0 size=240 callers=1 calls=2
   calls: sub_142a040, sub_ed32d0
*/
void sub_991bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x991bc0ULL || rel >= 0x991cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00991cb0 size=432 callers=0 calls=3
   calls: sub_142a1b0, sub_ed3290, sub_ed32d0
*/
void sub_991cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x991cb0ULL || rel >= 0x991e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00991e60 size=336 callers=1 calls=1
   calls: sub_142a040
*/
void sub_991e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x991e60ULL || rel >= 0x991fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00991fb0 size=464 callers=0 calls=1
   calls: sub_142a1b0
*/
void sub_991fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x991fb0ULL || rel >= 0x992180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00992180 size=464 callers=1 calls=2
   calls: sub_142a040, sub_ed32d0
*/
void sub_992180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x992180ULL || rel >= 0x992350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00992350 size=1088 callers=0 calls=3
   calls: sub_142a1b0, sub_ed3290, sub_ed32d0
*/
void sub_992350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x992350ULL || rel >= 0x992790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00992790 size=352 callers=1 calls=2
   calls: sub_142a040, sub_ed32d0
*/
void sub_992790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x992790ULL || rel >= 0x9928f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009928f0 size=752 callers=0 calls=3
   calls: sub_142a1b0, sub_ed3290, sub_ed32d0
*/
void sub_9928f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9928f0ULL || rel >= 0x992be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00992be0 size=224 callers=1 calls=3
   calls: sub_142a040, sub_ed3290, sub_ed32d0
*/
void sub_992be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x992be0ULL || rel >= 0x992cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00992cc0 size=240 callers=0 calls=3
   calls: sub_142a1b0, sub_ed3290, sub_ed32d0
*/
void sub_992cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x992cc0ULL || rel >= 0x992db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00992db0 size=352 callers=1 calls=1
   calls: sub_142a040
*/
void sub_992db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x992db0ULL || rel >= 0x992f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00992f10 size=352 callers=0 calls=0
*/
void sub_992f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x992f10ULL || rel >= 0x993070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00993070 size=224 callers=1 calls=1
   calls: sub_142a040
*/
void sub_993070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x993070ULL || rel >= 0x993150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00993150 size=176 callers=0 calls=1
   calls: sub_142a1b0
*/
void sub_993150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x993150ULL || rel >= 0x993200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00993200 size=416 callers=1 calls=3
   calls: sub_142a040, sub_96c4a0, sub_981540
*/
void sub_993200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x993200ULL || rel >= 0x9933a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009933a0 size=432 callers=0 calls=2
   calls: sub_96c4a0, sub_981840
*/
void sub_9933a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9933a0ULL || rel >= 0x993550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00993550 size=112 callers=1 calls=1
   calls: sub_142a040
*/
void sub_993550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x993550ULL || rel >= 0x9935c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009935c0 size=1504 callers=0 calls=1
   calls: sub_96c4a0
*/
void sub_9935c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9935c0ULL || rel >= 0x993ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00993ba0 size=240 callers=1 calls=1
   calls: sub_142a040
*/
void sub_993ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x993ba0ULL || rel >= 0x993c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00993c90 size=240 callers=2 calls=1
   calls: sub_142a040
*/
void sub_993c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x993c90ULL || rel >= 0x993d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00993d80 size=272 callers=1 calls=1
   calls: sub_142a040
*/
void sub_993d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x993d80ULL || rel >= 0x993e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00993e90 size=416 callers=0 calls=11
   calls: GroundAttributes, sub_142a1b0, sub_949300, sub_97b480, sub_97b8c0, sub_97e340, sub_97e740, sub_983f70, sub_984250, sub_9846c0, sub_984790
*/
void sub_993e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x993e90ULL || rel >= 0x994030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00994030 size=112 callers=1 calls=1
   calls: sub_142a040
*/
void sub_994030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x994030ULL || rel >= 0x9940a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009940a0 size=288 callers=0 calls=3
   calls: GroundAttributes, sub_142a1b0, sub_97b180
*/
void sub_9940a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9940a0ULL || rel >= 0x9941c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009941c0 size=96 callers=1 calls=1
   calls: sub_142a040
*/
void sub_9941c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9941c0ULL || rel >= 0x994220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00994220 size=208 callers=0 calls=3
   calls: sub_142a1b0, sub_97e340, sub_97e740
*/
void sub_994220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x994220ULL || rel >= 0x9942f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009942f0 size=64 callers=1 calls=1
   calls: sub_142a040
*/
void sub_9942f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9942f0ULL || rel >= 0x994330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00994330 size=32 callers=0 calls=0
*/
void sub_994330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x994330ULL || rel >= 0x994350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00994350 size=2080 callers=1 calls=4
   calls: sub_142a040, sub_948f20, sub_96c4a0, sub_977b70
*/
void sub_994350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x994350ULL || rel >= 0x994b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00994b70 size=8272 callers=0 calls=17
   calls: sub_12fa050, sub_142a1b0, sub_59a930, sub_5b9220, sub_5cfaf0, sub_947d00, sub_96a3a0, sub_96c4a0, sub_97dfd0, sub_97f190, sub_981f30, sub_981ff0
   ... +5 more
   ref: bin/battle/waza/particle/cmn/cmn_land_smoke_m.ptcl
   ref: to_ba01_landC01
   ref: to_ba01_land_state
   ref: Play_PM_Landing_FX
   ref: bin/battle/waza/particle/cmn/cmn_land_smoke_s.ptcl
   ref: Flight
   ref: Weight
*/
void to_ba01_land_state(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x994b70ULL || rel >= 0x996bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00996bc0 size=512 callers=1 calls=3
   calls: sub_142a040, sub_948f20, sub_96c4a0
*/
void sub_996bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x996bc0ULL || rel >= 0x996dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00996dc0 size=9072 callers=0 calls=24
   calls: Play_eg_poke_land, land_adjust_table, sub_11061d0, sub_11063e0, sub_11065b0, sub_11067c0, sub_142a1b0, sub_59a930, sub_5b9220, sub_5cfaf0, sub_947d00, sub_955da0
   ... +12 more
   ref: adjustAnimSpeed
   ref: bin/battle/waza/particle/eg_land/eg_land_shout_wind01.ptcl
   ref: adjustLandFrame
   ref: to_ba01_landC01
   ref: to_ba01_land_state
   ref: to_ba02_roar01
*/
void to_ba01_land_state_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x996dc0ULL || rel >= 0x999130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00999130 size=1136 callers=2 calls=10
   calls: sub_5cfaf0, sub_947d00, sub_956000, sub_9626a0, sub_96c4a0, sub_981ff0, sub_98e1d0, sub_98e220, sub_c1f610, sub_d0c0
   ref: bin/battle/waza/particle/eg_cmn/eg_cmn_land_smoke_g.ptcl
   ref: Play_eg_poke_land
*/
void Play_eg_poke_land(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x999130ULL || rel >= 0x9995a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009995a0 size=48 callers=0 calls=0
*/
void sub_9995a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9995a0ULL || rel >= 0x9995d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009995d0 size=80 callers=0 calls=0
*/
void sub_9995d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9995d0ULL || rel >= 0x999620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00999620 size=240 callers=0 calls=0
*/
void sub_999620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x999620ULL || rel >= 0x999710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00999710 size=240 callers=0 calls=0
*/
void sub_999710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x999710ULL || rel >= 0x999800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00999800 size=240 callers=0 calls=0
*/
void sub_999800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x999800ULL || rel >= 0x9998f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009998f0 size=240 callers=0 calls=0
*/
void sub_9998f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9998f0ULL || rel >= 0x9999e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009999e0 size=240 callers=0 calls=0
*/
void sub_9999e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9999e0ULL || rel >= 0x999ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00999ad0 size=16 callers=0 calls=0
*/
void sub_999ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x999ad0ULL || rel >= 0x999ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00999ae0 size=16 callers=0 calls=0
*/
void sub_999ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x999ae0ULL || rel >= 0x999af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00999af0 size=240 callers=0 calls=0
*/
void sub_999af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x999af0ULL || rel >= 0x999be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00999be0 size=240 callers=0 calls=0
*/
void sub_999be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x999be0ULL || rel >= 0x999cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00999cd0 size=240 callers=0 calls=0
*/
void sub_999cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x999cd0ULL || rel >= 0x999dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00999dc0 size=240 callers=0 calls=0
*/
void sub_999dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x999dc0ULL || rel >= 0x999eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00999eb0 size=240 callers=0 calls=0
*/
void sub_999eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x999eb0ULL || rel >= 0x999fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00999fa0 size=240 callers=0 calls=0
*/
void sub_999fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x999fa0ULL || rel >= 0x99a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099a090 size=240 callers=0 calls=0
*/
void sub_99a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99a090ULL || rel >= 0x99a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099a180 size=240 callers=0 calls=0
*/
void sub_99a180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99a180ULL || rel >= 0x99a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099a270 size=240 callers=0 calls=0
*/
void sub_99a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99a270ULL || rel >= 0x99a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099a360 size=240 callers=0 calls=0
*/
void sub_99a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99a360ULL || rel >= 0x99a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099a450 size=240 callers=0 calls=0
*/
void sub_99a450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99a450ULL || rel >= 0x99a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099a540 size=240 callers=0 calls=0
*/
void sub_99a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99a540ULL || rel >= 0x99a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099a630 size=240 callers=0 calls=0
*/
void sub_99a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99a630ULL || rel >= 0x99a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099a720 size=240 callers=0 calls=0
*/
void sub_99a720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99a720ULL || rel >= 0x99a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099a810 size=240 callers=0 calls=0
*/
void sub_99a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99a810ULL || rel >= 0x99a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099a900 size=240 callers=0 calls=0
*/
void sub_99a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99a900ULL || rel >= 0x99a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099a9f0 size=240 callers=0 calls=0
*/
void sub_99a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99a9f0ULL || rel >= 0x99aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099aae0 size=240 callers=0 calls=0
*/
void sub_99aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99aae0ULL || rel >= 0x99abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099abd0 size=240 callers=0 calls=0
*/
void sub_99abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99abd0ULL || rel >= 0x99acc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099acc0 size=240 callers=0 calls=0
*/
void sub_99acc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99acc0ULL || rel >= 0x99adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099adb0 size=240 callers=0 calls=0
*/
void sub_99adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99adb0ULL || rel >= 0x99aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099aea0 size=240 callers=0 calls=0
*/
void sub_99aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99aea0ULL || rel >= 0x99af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099af90 size=240 callers=0 calls=0
*/
void sub_99af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99af90ULL || rel >= 0x99b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099b080 size=240 callers=0 calls=0
*/
void sub_99b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99b080ULL || rel >= 0x99b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099b170 size=240 callers=0 calls=0
*/
void sub_99b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99b170ULL || rel >= 0x99b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099b260 size=240 callers=0 calls=0
*/
void sub_99b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99b260ULL || rel >= 0x99b350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099b350 size=240 callers=0 calls=0
*/
void sub_99b350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99b350ULL || rel >= 0x99b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099b440 size=240 callers=0 calls=0
*/
void sub_99b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99b440ULL || rel >= 0x99b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099b530 size=240 callers=0 calls=0
*/
void sub_99b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99b530ULL || rel >= 0x99b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099b620 size=240 callers=0 calls=0
*/
void sub_99b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99b620ULL || rel >= 0x99b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099b710 size=240 callers=0 calls=0
*/
void sub_99b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99b710ULL || rel >= 0x99b800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099b800 size=240 callers=0 calls=0
*/
void sub_99b800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99b800ULL || rel >= 0x99b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099b8f0 size=240 callers=0 calls=0
*/
void sub_99b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99b8f0ULL || rel >= 0x99b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099b9e0 size=240 callers=0 calls=0
*/
void sub_99b9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99b9e0ULL || rel >= 0x99bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099bad0 size=240 callers=0 calls=0
*/
void sub_99bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99bad0ULL || rel >= 0x99bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099bbc0 size=240 callers=0 calls=0
*/
void sub_99bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99bbc0ULL || rel >= 0x99bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099bcb0 size=240 callers=0 calls=0
*/
void sub_99bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99bcb0ULL || rel >= 0x99bda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099bda0 size=240 callers=0 calls=0
*/
void sub_99bda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99bda0ULL || rel >= 0x99be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099be90 size=288 callers=0 calls=0
*/
void sub_99be90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99be90ULL || rel >= 0x99bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099bfb0 size=288 callers=0 calls=0
*/
void sub_99bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99bfb0ULL || rel >= 0x99c0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099c0d0 size=288 callers=0 calls=0
*/
void sub_99c0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99c0d0ULL || rel >= 0x99c1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099c1f0 size=288 callers=0 calls=0
*/
void sub_99c1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99c1f0ULL || rel >= 0x99c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099c310 size=288 callers=0 calls=0
*/
void sub_99c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99c310ULL || rel >= 0x99c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099c430 size=288 callers=0 calls=0
*/
void sub_99c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99c430ULL || rel >= 0x99c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099c550 size=256 callers=0 calls=0
*/
void sub_99c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99c550ULL || rel >= 0x99c650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099c650 size=256 callers=0 calls=0
*/
void sub_99c650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99c650ULL || rel >= 0x99c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099c750 size=256 callers=0 calls=0
*/
void sub_99c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99c750ULL || rel >= 0x99c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099c850 size=256 callers=0 calls=0
*/
void sub_99c850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99c850ULL || rel >= 0x99c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099c950 size=256 callers=0 calls=0
*/
void sub_99c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99c950ULL || rel >= 0x99ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099ca50 size=256 callers=0 calls=0
*/
void sub_99ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99ca50ULL || rel >= 0x99cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099cb50 size=192 callers=0 calls=0
*/
void sub_99cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99cb50ULL || rel >= 0x99cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099cc10 size=192 callers=0 calls=0
*/
void sub_99cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99cc10ULL || rel >= 0x99ccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099ccd0 size=192 callers=0 calls=0
*/
void sub_99ccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99ccd0ULL || rel >= 0x99cd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099cd90 size=192 callers=0 calls=0
*/
void sub_99cd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99cd90ULL || rel >= 0x99ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099ce50 size=192 callers=0 calls=0
*/
void sub_99ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99ce50ULL || rel >= 0x99cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099cf10 size=192 callers=0 calls=0
*/
void sub_99cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99cf10ULL || rel >= 0x99cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099cfd0 size=192 callers=0 calls=0
*/
void sub_99cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99cfd0ULL || rel >= 0x99d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099d090 size=192 callers=0 calls=0
*/
void sub_99d090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99d090ULL || rel >= 0x99d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099d150 size=192 callers=0 calls=0
*/
void sub_99d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99d150ULL || rel >= 0x99d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099d210 size=192 callers=0 calls=0
*/
void sub_99d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99d210ULL || rel >= 0x99d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099d2d0 size=192 callers=0 calls=0
*/
void sub_99d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99d2d0ULL || rel >= 0x99d390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099d390 size=192 callers=0 calls=0
*/
void sub_99d390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99d390ULL || rel >= 0x99d450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099d450 size=192 callers=0 calls=0
*/
void sub_99d450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99d450ULL || rel >= 0x99d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099d510 size=192 callers=0 calls=0
*/
void sub_99d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99d510ULL || rel >= 0x99d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099d5d0 size=192 callers=0 calls=0
*/
void sub_99d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99d5d0ULL || rel >= 0x99d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099d690 size=192 callers=0 calls=0
*/
void sub_99d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99d690ULL || rel >= 0x99d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099d750 size=240 callers=0 calls=0
*/
void sub_99d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99d750ULL || rel >= 0x99d840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099d840 size=240 callers=0 calls=0
*/
void sub_99d840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99d840ULL || rel >= 0x99d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099d930 size=240 callers=0 calls=0
*/
void sub_99d930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99d930ULL || rel >= 0x99da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099da20 size=240 callers=0 calls=0
*/
void sub_99da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99da20ULL || rel >= 0x99db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099db10 size=240 callers=0 calls=0
*/
void sub_99db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99db10ULL || rel >= 0x99dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099dc00 size=240 callers=0 calls=0
*/
void sub_99dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99dc00ULL || rel >= 0x99dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099dcf0 size=240 callers=0 calls=0
*/
void sub_99dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99dcf0ULL || rel >= 0x99dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099dde0 size=240 callers=0 calls=0
*/
void sub_99dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99dde0ULL || rel >= 0x99ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099ded0 size=240 callers=0 calls=0
*/
void sub_99ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99ded0ULL || rel >= 0x99dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099dfc0 size=240 callers=0 calls=0
*/
void sub_99dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99dfc0ULL || rel >= 0x99e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099e0b0 size=240 callers=0 calls=0
*/
void sub_99e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99e0b0ULL || rel >= 0x99e1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099e1a0 size=240 callers=0 calls=0
*/
void sub_99e1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99e1a0ULL || rel >= 0x99e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099e290 size=240 callers=0 calls=0
*/
void sub_99e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99e290ULL || rel >= 0x99e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099e380 size=240 callers=0 calls=0
*/
void sub_99e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99e380ULL || rel >= 0x99e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099e470 size=240 callers=0 calls=0
*/
void sub_99e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99e470ULL || rel >= 0x99e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099e560 size=240 callers=0 calls=0
*/
void sub_99e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99e560ULL || rel >= 0x99e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099e650 size=240 callers=0 calls=0
*/
void sub_99e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99e650ULL || rel >= 0x99e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099e740 size=240 callers=0 calls=0
*/
void sub_99e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99e740ULL || rel >= 0x99e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099e830 size=240 callers=0 calls=0
*/
void sub_99e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99e830ULL || rel >= 0x99e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099e920 size=240 callers=0 calls=0
*/
void sub_99e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99e920ULL || rel >= 0x99ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099ea10 size=240 callers=0 calls=0
*/
void sub_99ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99ea10ULL || rel >= 0x99eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099eb00 size=240 callers=0 calls=0
*/
void sub_99eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99eb00ULL || rel >= 0x99ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099ebf0 size=240 callers=0 calls=0
*/
void sub_99ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99ebf0ULL || rel >= 0x99ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099ece0 size=240 callers=0 calls=0
*/
void sub_99ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99ece0ULL || rel >= 0x99edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099edd0 size=240 callers=0 calls=0
*/
void sub_99edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99edd0ULL || rel >= 0x99eec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099eec0 size=240 callers=0 calls=0
*/
void sub_99eec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99eec0ULL || rel >= 0x99efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099efb0 size=240 callers=0 calls=0
*/
void sub_99efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99efb0ULL || rel >= 0x99f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099f0a0 size=240 callers=0 calls=0
*/
void sub_99f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99f0a0ULL || rel >= 0x99f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099f190 size=240 callers=0 calls=0
*/
void sub_99f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99f190ULL || rel >= 0x99f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099f280 size=240 callers=0 calls=0
*/
void sub_99f280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99f280ULL || rel >= 0x99f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099f370 size=240 callers=0 calls=0
*/
void sub_99f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99f370ULL || rel >= 0x99f460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099f460 size=240 callers=0 calls=0
*/
void sub_99f460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99f460ULL || rel >= 0x99f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099f550 size=240 callers=0 calls=0
*/
void sub_99f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99f550ULL || rel >= 0x99f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099f640 size=240 callers=0 calls=0
*/
void sub_99f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99f640ULL || rel >= 0x99f730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099f730 size=240 callers=0 calls=0
*/
void sub_99f730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99f730ULL || rel >= 0x99f820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099f820 size=240 callers=0 calls=0
*/
void sub_99f820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99f820ULL || rel >= 0x99f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099f910 size=240 callers=0 calls=0
*/
void sub_99f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99f910ULL || rel >= 0x99fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099fa00 size=240 callers=0 calls=0
*/
void sub_99fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99fa00ULL || rel >= 0x99faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099faf0 size=240 callers=0 calls=0
*/
void sub_99faf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99faf0ULL || rel >= 0x99fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099fbe0 size=240 callers=0 calls=0
*/
void sub_99fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99fbe0ULL || rel >= 0x99fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099fcd0 size=240 callers=0 calls=0
*/
void sub_99fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99fcd0ULL || rel >= 0x99fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099fdc0 size=240 callers=0 calls=0
*/
void sub_99fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99fdc0ULL || rel >= 0x99feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099feb0 size=240 callers=0 calls=0
*/
void sub_99feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99feb0ULL || rel >= 0x99ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0099ffa0 size=240 callers=0 calls=0
*/
void sub_99ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99ffa0ULL || rel >= 0x9a0090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0090 size=240 callers=0 calls=0
*/
void sub_9a0090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0090ULL || rel >= 0x9a0180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0180 size=240 callers=0 calls=0
*/
void sub_9a0180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0180ULL || rel >= 0x9a0270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0270 size=240 callers=0 calls=0
*/
void sub_9a0270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0270ULL || rel >= 0x9a0360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0360 size=240 callers=0 calls=0
*/
void sub_9a0360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0360ULL || rel >= 0x9a0450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0450 size=192 callers=0 calls=0
*/
void sub_9a0450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0450ULL || rel >= 0x9a0510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0510 size=192 callers=0 calls=0
*/
void sub_9a0510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0510ULL || rel >= 0x9a05d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a05d0 size=192 callers=0 calls=0
*/
void sub_9a05d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a05d0ULL || rel >= 0x9a0690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0690 size=192 callers=0 calls=0
*/
void sub_9a0690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0690ULL || rel >= 0x9a0750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0750 size=192 callers=0 calls=0
*/
void sub_9a0750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0750ULL || rel >= 0x9a0810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0810 size=240 callers=0 calls=0
*/
void sub_9a0810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0810ULL || rel >= 0x9a0900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0900 size=240 callers=0 calls=0
*/
void sub_9a0900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0900ULL || rel >= 0x9a09f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a09f0 size=240 callers=0 calls=0
*/
void sub_9a09f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a09f0ULL || rel >= 0x9a0ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0ae0 size=240 callers=0 calls=0
*/
void sub_9a0ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0ae0ULL || rel >= 0x9a0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0bd0 size=240 callers=0 calls=0
*/
void sub_9a0bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0bd0ULL || rel >= 0x9a0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0cc0 size=240 callers=0 calls=0
*/
void sub_9a0cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0cc0ULL || rel >= 0x9a0db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0db0 size=240 callers=0 calls=0
*/
void sub_9a0db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0db0ULL || rel >= 0x9a0ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0ea0 size=240 callers=0 calls=0
*/
void sub_9a0ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0ea0ULL || rel >= 0x9a0f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a0f90 size=240 callers=0 calls=0
*/
void sub_9a0f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a0f90ULL || rel >= 0x9a1080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1080 size=240 callers=0 calls=0
*/
void sub_9a1080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1080ULL || rel >= 0x9a1170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1170 size=240 callers=0 calls=0
*/
void sub_9a1170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1170ULL || rel >= 0x9a1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1260 size=240 callers=0 calls=0
*/
void sub_9a1260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1260ULL || rel >= 0x9a1350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1350 size=240 callers=0 calls=0
*/
void sub_9a1350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1350ULL || rel >= 0x9a1440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1440 size=240 callers=0 calls=0
*/
void sub_9a1440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1440ULL || rel >= 0x9a1530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1530 size=240 callers=0 calls=0
*/
void sub_9a1530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1530ULL || rel >= 0x9a1620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1620 size=240 callers=0 calls=0
*/
void sub_9a1620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1620ULL || rel >= 0x9a1710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1710 size=240 callers=0 calls=0
*/
void sub_9a1710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1710ULL || rel >= 0x9a1800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1800 size=240 callers=0 calls=0
*/
void sub_9a1800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1800ULL || rel >= 0x9a18f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a18f0 size=240 callers=0 calls=0
*/
void sub_9a18f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a18f0ULL || rel >= 0x9a19e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a19e0 size=240 callers=0 calls=0
*/
void sub_9a19e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a19e0ULL || rel >= 0x9a1ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1ad0 size=240 callers=0 calls=0
*/
void sub_9a1ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1ad0ULL || rel >= 0x9a1bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1bc0 size=240 callers=0 calls=0
*/
void sub_9a1bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1bc0ULL || rel >= 0x9a1cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1cb0 size=240 callers=0 calls=0
*/
void sub_9a1cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1cb0ULL || rel >= 0x9a1da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1da0 size=240 callers=0 calls=0
*/
void sub_9a1da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1da0ULL || rel >= 0x9a1e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1e90 size=240 callers=0 calls=0
*/
void sub_9a1e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1e90ULL || rel >= 0x9a1f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a1f80 size=240 callers=0 calls=0
*/
void sub_9a1f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1f80ULL || rel >= 0x9a2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a2070 size=240 callers=0 calls=0
*/
void sub_9a2070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a2070ULL || rel >= 0x9a2160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a2160 size=240 callers=0 calls=0
*/
void sub_9a2160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a2160ULL || rel >= 0x9a2250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a2250 size=240 callers=0 calls=0
*/
void sub_9a2250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a2250ULL || rel >= 0x9a2340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a2340 size=240 callers=0 calls=0
*/
void sub_9a2340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a2340ULL || rel >= 0x9a2430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a2430 size=240 callers=0 calls=0
*/
void sub_9a2430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a2430ULL || rel >= 0x9a2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a2520 size=240 callers=0 calls=0
*/
void sub_9a2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a2520ULL || rel >= 0x9a2610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a2610 size=240 callers=0 calls=0
*/
void sub_9a2610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a2610ULL || rel >= 0x9a2700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a2700 size=240 callers=0 calls=0
*/
void sub_9a2700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a2700ULL || rel >= 0x9a27f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a27f0 size=240 callers=0 calls=0
*/
void sub_9a27f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a27f0ULL || rel >= 0x9a28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a28e0 size=240 callers=0 calls=0
*/
void sub_9a28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a28e0ULL || rel >= 0x9a29d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a29d0 size=240 callers=0 calls=0
*/
void sub_9a29d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a29d0ULL || rel >= 0x9a2ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a2ac0 size=240 callers=0 calls=0
*/
void sub_9a2ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a2ac0ULL || rel >= 0x9a2bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a2bb0 size=240 callers=0 calls=0
*/
void sub_9a2bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a2bb0ULL || rel >= 0x9a2ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a2ca0 size=240 callers=0 calls=0
*/
void sub_9a2ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a2ca0ULL || rel >= 0x9a2d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a2d90 size=240 callers=0 calls=0
*/
void sub_9a2d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a2d90ULL || rel >= 0x9a2e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a2e80 size=240 callers=0 calls=0
*/
void sub_9a2e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a2e80ULL || rel >= 0x9a2f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a2f70 size=192 callers=0 calls=0
*/
void sub_9a2f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a2f70ULL || rel >= 0x9a3030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a3030 size=192 callers=0 calls=0
*/
void sub_9a3030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a3030ULL || rel >= 0x9a30f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a30f0 size=192 callers=0 calls=0
*/
void sub_9a30f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a30f0ULL || rel >= 0x9a31b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a31b0 size=192 callers=0 calls=0
*/
void sub_9a31b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a31b0ULL || rel >= 0x9a3270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a3270 size=192 callers=0 calls=0
*/
void sub_9a3270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a3270ULL || rel >= 0x9a3330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a3330 size=192 callers=0 calls=0
*/
void sub_9a3330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a3330ULL || rel >= 0x9a33f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a33f0 size=192 callers=0 calls=0
*/
void sub_9a33f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a33f0ULL || rel >= 0x9a34b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a34b0 size=192 callers=0 calls=0
*/
void sub_9a34b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a34b0ULL || rel >= 0x9a3570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a3570 size=192 callers=0 calls=0
*/
void sub_9a3570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a3570ULL || rel >= 0x9a3630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a3630 size=192 callers=0 calls=0
*/
void sub_9a3630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a3630ULL || rel >= 0x9a36f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a36f0 size=192 callers=0 calls=0
*/
void sub_9a36f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a36f0ULL || rel >= 0x9a37b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a37b0 size=192 callers=0 calls=0
*/
void sub_9a37b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a37b0ULL || rel >= 0x9a3870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a3870 size=192 callers=0 calls=0
*/
void sub_9a3870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a3870ULL || rel >= 0x9a3930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a3930 size=192 callers=0 calls=0
*/
void sub_9a3930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a3930ULL || rel >= 0x9a39f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a39f0 size=192 callers=0 calls=0
*/
void sub_9a39f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a39f0ULL || rel >= 0x9a3ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a3ab0 size=192 callers=0 calls=0
*/
void sub_9a3ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a3ab0ULL || rel >= 0x9a3b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a3b70 size=192 callers=0 calls=0
*/
void sub_9a3b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a3b70ULL || rel >= 0x9a3c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a3c30 size=192 callers=0 calls=0
*/
void sub_9a3c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a3c30ULL || rel >= 0x9a3cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a3cf0 size=192 callers=0 calls=0
*/
void sub_9a3cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a3cf0ULL || rel >= 0x9a3db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a3db0 size=192 callers=0 calls=0
*/
void sub_9a3db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a3db0ULL || rel >= 0x9a3e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a3e70 size=416 callers=0 calls=0
*/
void sub_9a3e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a3e70ULL || rel >= 0x9a4010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4010 size=16 callers=0 calls=0
*/
void sub_9a4010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4010ULL || rel >= 0x9a4020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4020 size=16 callers=0 calls=0
*/
void sub_9a4020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4020ULL || rel >= 0x9a4030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4030 size=16 callers=0 calls=0
*/
void sub_9a4030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4030ULL || rel >= 0x9a4040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4040 size=16 callers=0 calls=0
*/
void sub_9a4040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4040ULL || rel >= 0x9a4050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4050 size=16 callers=0 calls=0
*/
void sub_9a4050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4050ULL || rel >= 0x9a4060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4060 size=384 callers=0 calls=0
*/
void sub_9a4060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4060ULL || rel >= 0x9a41e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a41e0 size=16 callers=0 calls=0
*/
void sub_9a41e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a41e0ULL || rel >= 0x9a41f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a41f0 size=16 callers=0 calls=0
*/
void sub_9a41f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a41f0ULL || rel >= 0x9a4200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4200 size=16 callers=0 calls=0
*/
void sub_9a4200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4200ULL || rel >= 0x9a4210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4210 size=16 callers=0 calls=0
*/
void sub_9a4210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4210ULL || rel >= 0x9a4220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4220 size=16 callers=0 calls=0
*/
void sub_9a4220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4220ULL || rel >= 0x9a4230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4230 size=192 callers=0 calls=0
*/
void sub_9a4230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4230ULL || rel >= 0x9a42f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a42f0 size=16 callers=0 calls=0
*/
void sub_9a42f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a42f0ULL || rel >= 0x9a4300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4300 size=192 callers=0 calls=0
*/
void sub_9a4300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4300ULL || rel >= 0x9a43c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a43c0 size=192 callers=0 calls=0
*/
void sub_9a43c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a43c0ULL || rel >= 0x9a4480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4480 size=192 callers=0 calls=0
*/
void sub_9a4480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4480ULL || rel >= 0x9a4540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4540 size=192 callers=0 calls=0
*/
void sub_9a4540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4540ULL || rel >= 0x9a4600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4600 size=32 callers=0 calls=0
*/
void sub_9a4600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4600ULL || rel >= 0x9a4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4620 size=64 callers=0 calls=0
*/
void sub_9a4620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4620ULL || rel >= 0x9a4660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4660 size=32 callers=0 calls=0
*/
void sub_9a4660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4660ULL || rel >= 0x9a4680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4680 size=16 callers=0 calls=0
*/
void sub_9a4680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4680ULL || rel >= 0x9a4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4690 size=32 callers=0 calls=0
*/
void sub_9a4690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4690ULL || rel >= 0x9a46b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a46b0 size=64 callers=0 calls=0
*/
void sub_9a46b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a46b0ULL || rel >= 0x9a46f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a46f0 size=32 callers=0 calls=0
*/
void sub_9a46f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a46f0ULL || rel >= 0x9a4710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4710 size=16 callers=0 calls=0
*/
void sub_9a4710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4710ULL || rel >= 0x9a4720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4720 size=32 callers=0 calls=0
*/
void sub_9a4720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4720ULL || rel >= 0x9a4740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4740 size=64 callers=0 calls=0
*/
void sub_9a4740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4740ULL || rel >= 0x9a4780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4780 size=32 callers=0 calls=0
*/
void sub_9a4780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4780ULL || rel >= 0x9a47a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a47a0 size=16 callers=0 calls=0
*/
void sub_9a47a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a47a0ULL || rel >= 0x9a47b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a47b0 size=32 callers=0 calls=0
*/
void sub_9a47b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a47b0ULL || rel >= 0x9a47d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a47d0 size=64 callers=0 calls=0
*/
void sub_9a47d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a47d0ULL || rel >= 0x9a4810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4810 size=32 callers=0 calls=0
*/
void sub_9a4810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4810ULL || rel >= 0x9a4830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4830 size=16 callers=0 calls=0
*/
void sub_9a4830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4830ULL || rel >= 0x9a4840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4840 size=32 callers=0 calls=0
*/
void sub_9a4840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4840ULL || rel >= 0x9a4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4860 size=64 callers=0 calls=0
*/
void sub_9a4860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4860ULL || rel >= 0x9a48a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a48a0 size=32 callers=0 calls=0
*/
void sub_9a48a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a48a0ULL || rel >= 0x9a48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a48c0 size=16 callers=0 calls=0
*/
void sub_9a48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a48c0ULL || rel >= 0x9a48d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a48d0 size=32 callers=0 calls=0
*/
void sub_9a48d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a48d0ULL || rel >= 0x9a48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a48f0 size=16 callers=0 calls=0
*/
void sub_9a48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a48f0ULL || rel >= 0x9a4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4900 size=16 callers=0 calls=0
*/
void sub_9a4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4900ULL || rel >= 0x9a4910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4910 size=16 callers=0 calls=0
*/
void sub_9a4910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4910ULL || rel >= 0x9a4920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a4920 size=2416 callers=2 calls=11
   calls: nn_ldn_SetStationAcceptPolicy, sub_11061d0, sub_5d99d0, sub_631840, sub_682dd0, sub_974a00, sub_9a5290, sub_9aca80, sub_9ad300, sub_e9ddd0, sub_ea9e40
*/
void sub_9a4920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a4920ULL || rel >= 0x9a5290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a5290 size=240 callers=4 calls=1
   calls: sub_631840
*/
void sub_9a5290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a5290ULL || rel >= 0x9a5380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a5380 size=1568 callers=1 calls=3
   calls: sub_5e2bc0, sub_682dd0, sub_791da0
*/
void sub_9a5380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a5380ULL || rel >= 0x9a59a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a59a0 size=48 callers=0 calls=1
   calls: sub_9a5380
*/
void sub_9a59a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a59a0ULL || rel >= 0x9a59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a59d0 size=16 callers=3 calls=0
*/
void sub_9a59d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a59d0ULL || rel >= 0x9a59e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a59e0 size=80 callers=1 calls=2
   calls: sub_1106200, sub_1106f30
*/
void sub_9a59e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a59e0ULL || rel >= 0x9a5a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a5a30 size=1120 callers=3 calls=4
   calls: sub_791d50, sub_791da0, sub_9a5e90, sub_9a6500
*/
void sub_9a5a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a5a30ULL || rel >= 0x9a5e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a5e90 size=1648 callers=1 calls=5
   calls: isDepthOfField, sub_5a08f0, sub_5c5490, sub_952930, to_ba10_waitB01
*/
void sub_9a5e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a5e90ULL || rel >= 0x9a6500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a6500 size=3232 callers=1 calls=5
   calls: sub_972c70, sub_975b90, sub_981b70, sub_990590, sub_9a74c0
*/
void sub_9a6500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a6500ULL || rel >= 0x9a71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a71a0 size=48 callers=13 calls=0
*/
void sub_9a71a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a71a0ULL || rel >= 0x9a71d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a71d0 size=16 callers=5 calls=0
*/
void sub_9a71d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a71d0ULL || rel >= 0x9a71e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a71e0 size=32 callers=0 calls=0
*/
void sub_9a71e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a71e0ULL || rel >= 0x9a7200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a7200 size=32 callers=0 calls=0
*/
void sub_9a7200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a7200ULL || rel >= 0x9a7220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a7220 size=16 callers=5 calls=0
*/
void sub_9a7220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a7220ULL || rel >= 0x9a7230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a7230 size=16 callers=5 calls=0
*/
void sub_9a7230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a7230ULL || rel >= 0x9a7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a7240 size=16 callers=12 calls=0
*/
void sub_9a7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a7240ULL || rel >= 0x9a7250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a7250 size=80 callers=1 calls=0
*/
void sub_9a7250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a7250ULL || rel >= 0x9a72a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a72a0 size=32 callers=1 calls=0
*/
void sub_9a72a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a72a0ULL || rel >= 0x9a72c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a72c0 size=64 callers=4 calls=1
   calls: sub_9a7300
*/
void sub_9a72c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a72c0ULL || rel >= 0x9a7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a7300 size=368 callers=6 calls=2
   calls: sub_5c51b0, sub_5e2bc0
*/
void sub_9a7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a7300ULL || rel >= 0x9a7470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a7470 size=80 callers=4 calls=1
   calls: sub_631930
*/
void sub_9a7470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a7470ULL || rel >= 0x9a74c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a74c0 size=448 callers=6 calls=2
   calls: sub_5e2bc0, sub_9a7300
*/
void sub_9a74c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a74c0ULL || rel >= 0x9a7680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a7680 size=48 callers=2 calls=1
   calls: sub_5c5480
*/
void sub_9a7680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a7680ULL || rel >= 0x9a76b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a76b0 size=48 callers=1 calls=0
*/
void sub_9a76b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a76b0ULL || rel >= 0x9a76e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a76e0 size=368 callers=0 calls=5
   calls: sub_142a480, sub_612f70, sub_970390, sub_972f70, sub_9a5a30
*/
void sub_9a76e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a76e0ULL || rel >= 0x9a7850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a7850 size=112 callers=1 calls=0
*/
void sub_9a7850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a7850ULL || rel >= 0x9a78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a78c0 size=16 callers=1 calls=0
*/
void sub_9a78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a78c0ULL || rel >= 0x9a78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a78d0 size=448 callers=2 calls=3
   calls: sub_5e2bc0, sub_9a7300, sub_9a7a90
*/
void sub_9a78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a78d0ULL || rel >= 0x9a7a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a7a90 size=1152 callers=2 calls=13
   calls: sub_94e880, sub_952920, sub_962ec0, sub_963110, sub_965790, sub_965d30, sub_9a7f10, sub_ed29e0, sub_ed3290, sub_ed32d0, sub_ed32f0, sub_ed3e60
   ... +1 more
*/
void sub_9a7a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a7a90ULL || rel >= 0x9a7f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a7f10 size=640 callers=2 calls=3
   calls: sub_5e2bc0, sub_682dd0, sub_988230
*/
void sub_9a7f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a7f10ULL || rel >= 0x9a8190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a8190 size=112 callers=0 calls=0
*/
void sub_9a8190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a8190ULL || rel >= 0x9a8200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a8200 size=2064 callers=0 calls=9
   calls: subIndexId, sub_1106320, sub_11063e0, sub_11069b0, sub_5dd790, sub_5e2930, sub_5e2bc0, sub_8c2c10, sub_9ad440
   ref: bin/battle/waza/camera/wait/w_f_101.gfbcama
   ref: cameraAnimeFile
   ref: cameraFile
   ref: g_table
   ref: bin/battle/waza/camera/wait/w_f_101.gfbcam
*/
void cameraAnimeFile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a8200ULL || rel >= 0x9a8a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a8a10 size=16 callers=0 calls=0
*/
void sub_9a8a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a8a10ULL || rel >= 0x9a8a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a8a20 size=96 callers=0 calls=0
*/
void sub_9a8a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a8a20ULL || rel >= 0x9a8a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a8a80 size=5232 callers=1 calls=35
   calls: Spine3, ba_drone_move_2, sub_1106320, sub_11063e0, sub_11065b0, sub_11067c0, sub_5c51b0, sub_5cfaf0, sub_5fc600, sub_5fda10, sub_631930, sub_682dd0
   ... +23 more
   ref: isPosOver
   ref: isDepthOfField
   ref: focusDistance
   ref: fNumber
   ref: startTarget
   ref: renderVisibleArray
   ref: isCameraFlip
   ref: dronePosArray
*/
void isDepthOfField(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a8a80ULL || rel >= 0x9a9ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009a9ef0 size=2864 callers=1 calls=14
   calls: isOtherField, pattern__02d, pattern__02d_2, sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_5dd790, sub_5e2930, sub_947d00, sub_952910, sub_987ee0
   ... +2 more
   ref: splitMaskPattern
   ref: isSplitScreen
   ref: subIndexId
   ref: g_table
   ref: isAudience
*/
void subIndexId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a9ef0ULL || rel >= 0x9aaa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009aaa20 size=304 callers=1 calls=7
   calls: sub_960610, sub_970390, sub_972af0, sub_972c60, sub_9abbe0, sub_9abed0, sub_9ac1c0
*/
void sub_9aaa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aaa20ULL || rel >= 0x9aab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009aab50 size=464 callers=1 calls=8
   calls: sub_612f70, sub_960610, sub_970390, sub_971650, sub_972c60, sub_976120, sub_9ac1c0, sub_9ac350
   ref: Spine3
*/
void Spine3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aab50ULL || rel >= 0x9aad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009aad20 size=2288 callers=1 calls=11
   calls: startTarget, sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_11067c0, sub_7c56e0, sub_8a9060, sub_950e60, sub_9510f0, sub_951350
   ref: isDistCamExcept
   ref: isStadium
   ref: isOtherField
   ref: isRunaway
   ref: isRoseTower
   ref: isSplitScreen
   ref: subIndexId
   ref: g_table
*/
void isOtherField(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aad20ULL || rel >= 0x9ab610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ab610 size=176 callers=3 calls=0
*/
void sub_9ab610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ab610ULL || rel >= 0x9ab6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ab6c0 size=256 callers=3 calls=1
   calls: sub_962230
*/
void sub_9ab6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ab6c0ULL || rel >= 0x9ab7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ab7c0 size=400 callers=2 calls=6
   calls: sub_1106320, sub_11063e0, sub_11065b0, sub_9abbe0, sub_9abed0, sub_9ac350
   ref: startTarget
   ref: g_table
*/
void startTarget(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ab7c0ULL || rel >= 0x9ab950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ab950 size=656 callers=1 calls=3
   calls: sub_7eef50, sub_7fc2e0, sub_7fc450
*/
void sub_9ab950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ab950ULL || rel >= 0x9abbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009abbe0 size=752 callers=2 calls=2
   calls: sub_97ef10, sub_981b70
*/
void sub_9abbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9abbe0ULL || rel >= 0x9abed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009abed0 size=752 callers=2 calls=2
   calls: sub_97ef10, sub_981b70
*/
void sub_9abed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9abed0ULL || rel >= 0x9ac1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ac1c0 size=400 callers=2 calls=0
*/
void sub_9ac1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ac1c0ULL || rel >= 0x9ac350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ac350 size=656 callers=2 calls=1
   calls: sub_97ef10
*/
void sub_9ac350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ac350ULL || rel >= 0x9ac5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ac5e0 size=16 callers=0 calls=0
*/
void sub_9ac5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ac5e0ULL || rel >= 0x9ac5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ac5f0 size=16 callers=0 calls=0
*/
void sub_9ac5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ac5f0ULL || rel >= 0x9ac600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ac600 size=16 callers=0 calls=0
*/
void sub_9ac600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ac600ULL || rel >= 0x9ac610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ac610 size=16 callers=0 calls=0
*/
void sub_9ac610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ac610ULL || rel >= 0x9ac620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ac620 size=144 callers=0 calls=0
*/
void sub_9ac620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ac620ULL || rel >= 0x9ac6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ac6b0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_9ac6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ac6b0ULL || rel >= 0x9ac720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ac720 size=144 callers=0 calls=0
*/
void sub_9ac720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ac720ULL || rel >= 0x9ac7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ac7b0 size=144 callers=0 calls=0
*/
void sub_9ac7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ac7b0ULL || rel >= 0x9ac840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ac840 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_9ac840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ac840ULL || rel >= 0x9ac8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ac8b0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_9ac8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ac8b0ULL || rel >= 0x9ac920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ac920 size=144 callers=0 calls=0
*/
void sub_9ac920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ac920ULL || rel >= 0x9ac9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ac9b0 size=144 callers=0 calls=0
*/
void sub_9ac9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ac9b0ULL || rel >= 0x9aca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009aca40 size=32 callers=0 calls=0
*/
void sub_9aca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aca40ULL || rel >= 0x9aca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009aca60 size=32 callers=0 calls=0
*/
void sub_9aca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aca60ULL || rel >= 0x9aca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009aca80 size=240 callers=4 calls=2
   calls: sub_5c5150, sub_5db1b0
*/
void sub_9aca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aca80ULL || rel >= 0x9acb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009acb70 size=336 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_9acb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9acb70ULL || rel >= 0x9accc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009accc0 size=16 callers=0 calls=0
*/
void sub_9accc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9accc0ULL || rel >= 0x9accd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009accd0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_9accd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9accd0ULL || rel >= 0x9acd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009acd40 size=416 callers=0 calls=3
   calls: sub_5c51a0, sub_967240, sub_9ad100
*/
void sub_9acd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9acd40ULL || rel >= 0x9acee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009acee0 size=112 callers=0 calls=2
   calls: sub_5c53a0, sub_5c5440
*/
void sub_9acee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9acee0ULL || rel >= 0x9acf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009acf50 size=16 callers=0 calls=0
*/
void sub_9acf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9acf50ULL || rel >= 0x9acf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009acf60 size=16 callers=0 calls=0
*/
void sub_9acf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9acf60ULL || rel >= 0x9acf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009acf70 size=16 callers=0 calls=0
*/
void sub_9acf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9acf70ULL || rel >= 0x9acf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009acf80 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_9acf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9acf80ULL || rel >= 0x9acff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009acff0 size=112 callers=0 calls=2
   calls: sub_5c53a0, sub_5c5440
*/
void sub_9acff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9acff0ULL || rel >= 0x9ad060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ad060 size=16 callers=0 calls=0
*/
void sub_9ad060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ad060ULL || rel >= 0x9ad070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ad070 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_9ad070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ad070ULL || rel >= 0x9ad0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ad0e0 size=16 callers=0 calls=0
*/
void sub_9ad0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ad0e0ULL || rel >= 0x9ad0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ad0f0 size=16 callers=0 calls=0
*/
void sub_9ad0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ad0f0ULL || rel >= 0x9ad100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ad100 size=512 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_9ad100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ad100ULL || rel >= 0x9ad300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ad300 size=320 callers=1 calls=2
   calls: sub_5d99d0, sub_5db3d0
*/
void sub_9ad300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ad300ULL || rel >= 0x9ad440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ad440 size=2304 callers=6 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5de540, sub_5e2500, sub_5e6970, sub_637df0, sub_df90
*/
void sub_9ad440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ad440ULL || rel >= 0x9add40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009add40 size=480 callers=1 calls=0
*/
void sub_9add40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9add40ULL || rel >= 0x9adf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009adf20 size=656 callers=0 calls=6
   calls: mask_d, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_ec20
*/
void sub_9adf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9adf20ULL || rel >= 0x9ae1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ae1b0 size=16 callers=0 calls=0
*/
void sub_9ae1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ae1b0ULL || rel >= 0x9ae1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

