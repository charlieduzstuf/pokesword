/* subsdk1 functions 003fece0..0041b5a0 (20 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 003fece0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4279f0
*/
void sub_3fece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fece0ULL || rel >= 0x3fed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fed50 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4279f0
*/
void sub_3fed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fed50ULL || rel >= 0x3fedc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fedc0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4279f0
*/
void sub_3fedc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fedc0ULL || rel >= 0x3fee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fee30 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426ca0
*/
void sub_3fee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fee30ULL || rel >= 0x3feeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003feeb0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4278d0
*/
void sub_3feeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3feeb0ULL || rel >= 0x3fef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fef20 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4279f0
*/
void sub_3fef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fef20ULL || rel >= 0x3fef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fef90 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4279f0
*/
void sub_3fef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fef90ULL || rel >= 0x3ff000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff000 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4279f0
*/
void sub_3ff000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff000ULL || rel >= 0x3ff070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff070 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_440700
*/
void sub_3ff070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff070ULL || rel >= 0x3ff0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff0e0 size=400 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3ff0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff0e0ULL || rel >= 0x3ff270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff270 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_440700
*/
void sub_3ff270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff270ULL || rel >= 0x3ff2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff2e0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_440700
*/
void sub_3ff2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff2e0ULL || rel >= 0x3ff350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff350 size=96 callers=0 calls=2
   calls: sub_393430, sub_440850
*/
void sub_3ff350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff350ULL || rel >= 0x3ff3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff3b0 size=400 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3ff3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff3b0ULL || rel >= 0x3ff540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff540 size=96 callers=0 calls=2
   calls: sub_393430, sub_440980
*/
void sub_3ff540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff540ULL || rel >= 0x3ff5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff5a0 size=96 callers=0 calls=2
   calls: sub_393430, sub_440aa0
*/
void sub_3ff5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff5a0ULL || rel >= 0x3ff600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff600 size=96 callers=0 calls=2
   calls: sub_393430, sub_440980
*/
void sub_3ff600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff600ULL || rel >= 0x3ff660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff660 size=96 callers=0 calls=2
   calls: sub_393430, sub_440aa0
*/
void sub_3ff660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff660ULL || rel >= 0x3ff6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff6c0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_440bf0
*/
void sub_3ff6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff6c0ULL || rel >= 0x3ff710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff710 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_440cf0
*/
void sub_3ff710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff710ULL || rel >= 0x3ff760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff760 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_440bf0
*/
void sub_3ff760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff760ULL || rel >= 0x3ff7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff7b0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_440e20
*/
void sub_3ff7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff7b0ULL || rel >= 0x3ff830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff830 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_440ee0
*/
void sub_3ff830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff830ULL || rel >= 0x3ff880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff880 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_440e20
*/
void sub_3ff880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff880ULL || rel >= 0x3ff900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff900 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_440ee0
*/
void sub_3ff900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff900ULL || rel >= 0x3ff950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff950 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_440e20
*/
void sub_3ff950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff950ULL || rel >= 0x3ff9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff9d0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_440ee0
*/
void sub_3ff9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff9d0ULL || rel >= 0x3ffa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffa20 size=336 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3ffa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffa20ULL || rel >= 0x3ffb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffb70 size=96 callers=0 calls=2
   calls: sub_393430, sub_440aa0
*/
void sub_3ffb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffb70ULL || rel >= 0x3ffbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffbd0 size=288 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3ffbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffbd0ULL || rel >= 0x3ffcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffcf0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_440cf0
*/
void sub_3ffcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffcf0ULL || rel >= 0x3ffd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffd40 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_440ff0
*/
void sub_3ffd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffd40ULL || rel >= 0x3ffd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffd90 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_3ffd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffd90ULL || rel >= 0x3ffde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffde0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_3ffde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffde0ULL || rel >= 0x3ffe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffe30 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_3ffe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffe30ULL || rel >= 0x3ffe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffe80 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_3ffe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffe80ULL || rel >= 0x3ffed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffed0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_3ffed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffed0ULL || rel >= 0x3fff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fff20 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_3fff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fff20ULL || rel >= 0x3fff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fff70 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_3fff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fff70ULL || rel >= 0x3fffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fffc0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_3fffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fffc0ULL || rel >= 0x400010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400010 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_440ff0
*/
void sub_400010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400010ULL || rel >= 0x400060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400060 size=2704 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_400060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400060ULL || rel >= 0x400af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400af0 size=2992 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_400af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400af0ULL || rel >= 0x4016a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004016a0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4411a0
*/
void sub_4016a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4016a0ULL || rel >= 0x401720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401720 size=96 callers=0 calls=2
   calls: sub_393430, sub_441b60
*/
void sub_401720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401720ULL || rel >= 0x401780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401780 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4411a0
*/
void sub_401780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401780ULL || rel >= 0x401800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401800 size=96 callers=0 calls=2
   calls: sub_393430, sub_441b60
*/
void sub_401800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401800ULL || rel >= 0x401860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401860 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4411a0
*/
void sub_401860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401860ULL || rel >= 0x4018e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004018e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_441b60
*/
void sub_4018e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4018e0ULL || rel >= 0x401940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401940 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4411a0
*/
void sub_401940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401940ULL || rel >= 0x4019c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004019c0 size=96 callers=0 calls=2
   calls: sub_393430, sub_441b60
*/
void sub_4019c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4019c0ULL || rel >= 0x401a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401a20 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4411a0
*/
void sub_401a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401a20ULL || rel >= 0x401aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401aa0 size=96 callers=0 calls=2
   calls: sub_393430, sub_441b60
*/
void sub_401aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401aa0ULL || rel >= 0x401b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401b00 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4411a0
*/
void sub_401b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401b00ULL || rel >= 0x401b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401b80 size=96 callers=0 calls=2
   calls: sub_393430, sub_441b60
*/
void sub_401b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401b80ULL || rel >= 0x401be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401be0 size=2704 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_401be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401be0ULL || rel >= 0x402670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402670 size=2992 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_402670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402670ULL || rel >= 0x403220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403220 size=448 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_403220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403220ULL || rel >= 0x4033e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004033e0 size=608 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_4033e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4033e0ULL || rel >= 0x403640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403640 size=752 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_403640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403640ULL || rel >= 0x403930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403930 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_403930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403930ULL || rel >= 0x4039d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004039d0 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_4039d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4039d0ULL || rel >= 0x403a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403a70 size=112 callers=0 calls=3
   calls: sub_2fade0, sub_3936f0, sub_426860
*/
void sub_403a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403a70ULL || rel >= 0x403ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403ae0 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_403ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403ae0ULL || rel >= 0x403b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403b80 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_403b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403b80ULL || rel >= 0x403c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403c20 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_403c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403c20ULL || rel >= 0x403cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403cc0 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_403cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403cc0ULL || rel >= 0x403d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403d60 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_403d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403d60ULL || rel >= 0x403db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403db0 size=96 callers=0 calls=2
   calls: sub_393430, sub_440850
*/
void sub_403db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403db0ULL || rel >= 0x403e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403e10 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_442650
*/
void sub_403e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403e10ULL || rel >= 0x403e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403e80 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_442710
*/
void sub_403e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403e80ULL || rel >= 0x403f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403f00 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_403f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403f00ULL || rel >= 0x403f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403f50 size=96 callers=0 calls=2
   calls: sub_393430, sub_442850
*/
void sub_403f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403f50ULL || rel >= 0x403fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403fb0 size=144 callers=0 calls=2
   calls: sub_393430, sub_442920
*/
void sub_403fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403fb0ULL || rel >= 0x404040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404040 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_442650
*/
void sub_404040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404040ULL || rel >= 0x4040b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004040b0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_442ae0
*/
void sub_4040b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4040b0ULL || rel >= 0x404130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404130 size=144 callers=0 calls=2
   calls: sub_393430, sub_442bc0
*/
void sub_404130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404130ULL || rel >= 0x4041c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004041c0 size=96 callers=0 calls=2
   calls: sub_393430, sub_440850
*/
void sub_4041c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4041c0ULL || rel >= 0x404220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404220 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_442710
*/
void sub_404220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404220ULL || rel >= 0x4042a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004042a0 size=144 callers=0 calls=2
   calls: sub_393430, sub_442d80
*/
void sub_4042a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4042a0ULL || rel >= 0x404330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404330 size=144 callers=0 calls=2
   calls: sub_393430, sub_442f40
*/
void sub_404330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404330ULL || rel >= 0x4043c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004043c0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_4043c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4043c0ULL || rel >= 0x404410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404410 size=96 callers=0 calls=2
   calls: sub_393430, sub_440980
*/
void sub_404410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404410ULL || rel >= 0x404470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404470 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_442650
*/
void sub_404470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404470ULL || rel >= 0x4044e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004044e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_443100
*/
void sub_4044e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4044e0ULL || rel >= 0x404560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404560 size=256 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_404560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404560ULL || rel >= 0x404660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404660 size=416 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_404660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404660ULL || rel >= 0x404800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404800 size=672 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_404800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404800ULL || rel >= 0x404aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404aa0 size=384 callers=0 calls=7
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_404aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404aa0ULL || rel >= 0x404c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404c20 size=416 callers=0 calls=7
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_404c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404c20ULL || rel >= 0x404dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404dc0 size=1536 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_404dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404dc0ULL || rel >= 0x4053c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004053c0 size=1200 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_4053c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4053c0ULL || rel >= 0x405870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00405870 size=96 callers=0 calls=2
   calls: sub_393430, sub_443220
*/
void sub_405870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x405870ULL || rel >= 0x4058d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004058d0 size=6368 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_426860, sub_4387b0
*/
void sub_4058d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4058d0ULL || rel >= 0x4071b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004071b0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_4071b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4071b0ULL || rel >= 0x407200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407200 size=96 callers=0 calls=2
   calls: sub_393430, sub_442850
*/
void sub_407200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407200ULL || rel >= 0x407260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407260 size=144 callers=0 calls=2
   calls: sub_393430, sub_443340
*/
void sub_407260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407260ULL || rel >= 0x4072f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004072f0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_442650
*/
void sub_4072f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4072f0ULL || rel >= 0x407360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407360 size=144 callers=0 calls=2
   calls: sub_393430, sub_4434e0
*/
void sub_407360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407360ULL || rel >= 0x4073f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004073f0 size=272 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_4073f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4073f0ULL || rel >= 0x407500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407500 size=448 callers=0 calls=7
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_407500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407500ULL || rel >= 0x4076c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004076c0 size=704 callers=0 calls=7
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_4076c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4076c0ULL || rel >= 0x407980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407980 size=384 callers=0 calls=7
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_407980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407980ULL || rel >= 0x407b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407b00 size=416 callers=0 calls=7
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_407b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407b00ULL || rel >= 0x407ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407ca0 size=1568 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_407ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407ca0ULL || rel >= 0x4082c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004082c0 size=1264 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_3936f0, sub_426860, sub_4387b0
*/
void sub_4082c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4082c0ULL || rel >= 0x4087b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004087b0 size=96 callers=0 calls=2
   calls: sub_393430, sub_443220
*/
void sub_4087b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4087b0ULL || rel >= 0x408810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00408810 size=336 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_408810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x408810ULL || rel >= 0x408960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00408960 size=6304 callers=0 calls=8
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_426860, sub_4387b0
*/
void sub_408960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x408960ULL || rel >= 0x40a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a200 size=272 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_40a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a200ULL || rel >= 0x40a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a310 size=96 callers=0 calls=2
   calls: sub_393430, sub_440980
*/
void sub_40a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a310ULL || rel >= 0x40a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a370 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_443100
*/
void sub_40a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a370ULL || rel >= 0x40a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a3f0 size=144 callers=0 calls=2
   calls: sub_393430, sub_443340
*/
void sub_40a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a3f0ULL || rel >= 0x40a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a480 size=144 callers=0 calls=2
   calls: sub_393430, sub_4434e0
*/
void sub_40a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a480ULL || rel >= 0x40a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a510 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_40a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a510ULL || rel >= 0x40a560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a560 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_442650
*/
void sub_40a560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a560ULL || rel >= 0x40a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a5d0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_40a5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a5d0ULL || rel >= 0x40a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a620 size=96 callers=0 calls=2
   calls: sub_393430, sub_442850
*/
void sub_40a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a620ULL || rel >= 0x40a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a680 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_442650
*/
void sub_40a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a680ULL || rel >= 0x40a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a6f0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_442ae0
*/
void sub_40a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a6f0ULL || rel >= 0x40a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a770 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_40a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a770ULL || rel >= 0x40a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a7c0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_40a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a7c0ULL || rel >= 0x40a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a810 size=96 callers=0 calls=2
   calls: sub_393430, sub_442850
*/
void sub_40a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a810ULL || rel >= 0x40a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a870 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_40a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a870ULL || rel >= 0x40a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a8c0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_440bf0
*/
void sub_40a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a8c0ULL || rel >= 0x40a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a910 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_442650
*/
void sub_40a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a910ULL || rel >= 0x40a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a980 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_443680
*/
void sub_40a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a980ULL || rel >= 0x40a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a9f0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_40a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a9f0ULL || rel >= 0x40aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040aa40 size=96 callers=0 calls=2
   calls: sub_393430, sub_443780
*/
void sub_40aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40aa40ULL || rel >= 0x40aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040aaa0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_442650
*/
void sub_40aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40aaa0ULL || rel >= 0x40ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ab10 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4438f0
*/
void sub_40ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ab10ULL || rel >= 0x40ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ab90 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_440bf0
*/
void sub_40ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ab90ULL || rel >= 0x40abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040abe0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_443680
*/
void sub_40abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40abe0ULL || rel >= 0x40ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ac50 size=96 callers=0 calls=2
   calls: sub_393430, sub_443780
*/
void sub_40ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ac50ULL || rel >= 0x40acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040acb0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4438f0
*/
void sub_40acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40acb0ULL || rel >= 0x40ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ad30 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_440bf0
*/
void sub_40ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ad30ULL || rel >= 0x40ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ad80 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_442650
*/
void sub_40ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ad80ULL || rel >= 0x40adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040adf0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_443680
*/
void sub_40adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40adf0ULL || rel >= 0x40ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ae60 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_40ae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ae60ULL || rel >= 0x40aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040aeb0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_440bf0
*/
void sub_40aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40aeb0ULL || rel >= 0x40af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040af00 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_443680
*/
void sub_40af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40af00ULL || rel >= 0x40af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040af70 size=96 callers=0 calls=2
   calls: sub_393430, sub_440980
*/
void sub_40af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40af70ULL || rel >= 0x40afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040afd0 size=144 callers=0 calls=2
   calls: sub_393430, sub_443340
*/
void sub_40afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40afd0ULL || rel >= 0x40b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b060 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_440bf0
*/
void sub_40b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b060ULL || rel >= 0x40b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b0b0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_443a60
*/
void sub_40b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b0b0ULL || rel >= 0x40b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b100 size=144 callers=0 calls=2
   calls: sub_393430, sub_443b70
*/
void sub_40b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b100ULL || rel >= 0x40b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b190 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_443a60
*/
void sub_40b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b190ULL || rel >= 0x40b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b1e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_443d10
*/
void sub_40b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b1e0ULL || rel >= 0x40b240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b240 size=96 callers=0 calls=2
   calls: sub_393430, sub_443e00
*/
void sub_40b240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b240ULL || rel >= 0x40b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b2a0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_443f50
*/
void sub_40b2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b2a0ULL || rel >= 0x40b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b2f0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_444020
*/
void sub_40b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b2f0ULL || rel >= 0x40b340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b340 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_443f50
*/
void sub_40b340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b340ULL || rel >= 0x40b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b390 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_443f50
*/
void sub_40b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b390ULL || rel >= 0x40b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b3e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_443d10
*/
void sub_40b3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b3e0ULL || rel >= 0x40b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b440 size=96 callers=0 calls=2
   calls: sub_393430, sub_444130
*/
void sub_40b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b440ULL || rel >= 0x40b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b4a0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_443f50
*/
void sub_40b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b4a0ULL || rel >= 0x40b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b4f0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4442d0
*/
void sub_40b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b4f0ULL || rel >= 0x40b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b550 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_443f50
*/
void sub_40b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b550ULL || rel >= 0x40b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b5a0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_443f50
*/
void sub_40b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b5a0ULL || rel >= 0x40b5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b5f0 size=96 callers=0 calls=2
   calls: sub_393430, sub_443e00
*/
void sub_40b5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b5f0ULL || rel >= 0x40b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b650 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_444020
*/
void sub_40b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b650ULL || rel >= 0x40b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b6a0 size=96 callers=0 calls=2
   calls: sub_393430, sub_444130
*/
void sub_40b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b6a0ULL || rel >= 0x40b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b700 size=96 callers=0 calls=2
   calls: sub_393430, sub_4442d0
*/
void sub_40b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b700ULL || rel >= 0x40b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b760 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_444450
*/
void sub_40b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b760ULL || rel >= 0x40b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b7d0 size=144 callers=0 calls=2
   calls: sub_393430, sub_444570
*/
void sub_40b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b7d0ULL || rel >= 0x40b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b860 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_444450
*/
void sub_40b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b860ULL || rel >= 0x40b8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b8d0 size=144 callers=0 calls=2
   calls: sub_393430, sub_444570
*/
void sub_40b8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b8d0ULL || rel >= 0x40b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b960 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_444450
*/
void sub_40b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b960ULL || rel >= 0x40b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b9d0 size=464 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_40b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b9d0ULL || rel >= 0x40bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bba0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_444450
*/
void sub_40bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bba0ULL || rel >= 0x40bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bc10 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_444450
*/
void sub_40bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bc10ULL || rel >= 0x40bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bc80 size=144 callers=0 calls=2
   calls: sub_393430, sub_444570
*/
void sub_40bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bc80ULL || rel >= 0x40bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bd10 size=96 callers=0 calls=2
   calls: sub_393430, sub_444710
*/
void sub_40bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bd10ULL || rel >= 0x40bd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bd70 size=96 callers=0 calls=2
   calls: sub_393430, sub_444860
*/
void sub_40bd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bd70ULL || rel >= 0x40bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bdd0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_444a00
*/
void sub_40bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bdd0ULL || rel >= 0x40be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040be20 size=96 callers=0 calls=2
   calls: sub_393430, sub_444860
*/
void sub_40be20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40be20ULL || rel >= 0x40be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040be80 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_444a00
*/
void sub_40be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40be80ULL || rel >= 0x40bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bed0 size=96 callers=0 calls=2
   calls: sub_393430, sub_444860
*/
void sub_40bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bed0ULL || rel >= 0x40bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bf30 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_444a00
*/
void sub_40bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bf30ULL || rel >= 0x40bf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bf80 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_443a60
*/
void sub_40bf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bf80ULL || rel >= 0x40bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bfd0 size=144 callers=0 calls=2
   calls: sub_393430, sub_443b70
*/
void sub_40bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bfd0ULL || rel >= 0x40c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c060 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_443a60
*/
void sub_40c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c060ULL || rel >= 0x40c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c0b0 size=144 callers=0 calls=2
   calls: sub_393430, sub_443b70
*/
void sub_40c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c0b0ULL || rel >= 0x40c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c140 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_443a60
*/
void sub_40c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c140ULL || rel >= 0x40c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c190 size=448 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_40c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c190ULL || rel >= 0x40c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c350 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_443a60
*/
void sub_40c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c350ULL || rel >= 0x40c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c3a0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_443a60
*/
void sub_40c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c3a0ULL || rel >= 0x40c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c3f0 size=144 callers=0 calls=2
   calls: sub_393430, sub_443b70
*/
void sub_40c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c3f0ULL || rel >= 0x40c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c480 size=96 callers=0 calls=2
   calls: sub_393430, sub_444710
*/
void sub_40c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c480ULL || rel >= 0x40c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c4e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_444860
*/
void sub_40c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c4e0ULL || rel >= 0x40c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c540 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_444a00
*/
void sub_40c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c540ULL || rel >= 0x40c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c590 size=96 callers=0 calls=2
   calls: sub_393430, sub_444860
*/
void sub_40c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c590ULL || rel >= 0x40c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c5f0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_444a00
*/
void sub_40c5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c5f0ULL || rel >= 0x40c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c640 size=96 callers=0 calls=2
   calls: sub_393430, sub_444860
*/
void sub_40c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c640ULL || rel >= 0x40c6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c6a0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_444a00
*/
void sub_40c6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c6a0ULL || rel >= 0x40c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c6f0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_442710
*/
void sub_40c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c6f0ULL || rel >= 0x40c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c770 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_443100
*/
void sub_40c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c770ULL || rel >= 0x40c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c7f0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_443680
*/
void sub_40c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c7f0ULL || rel >= 0x40c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c860 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_444b30
*/
void sub_40c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c860ULL || rel >= 0x40c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c8e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_443100
*/
void sub_40c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c8e0ULL || rel >= 0x40c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c960 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_443680
*/
void sub_40c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c960ULL || rel >= 0x40c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c9d0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_444c40
*/
void sub_40c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c9d0ULL || rel >= 0x40ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ca50 size=400 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_40ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ca50ULL || rel >= 0x40cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040cbe0 size=352 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_40cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40cbe0ULL || rel >= 0x40cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040cd40 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_444db0
*/
void sub_40cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40cd40ULL || rel >= 0x40cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040cdc0 size=400 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_40cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40cdc0ULL || rel >= 0x40cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040cf50 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_444ef0
*/
void sub_40cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40cf50ULL || rel >= 0x40cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040cfc0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_442650
*/
void sub_40cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40cfc0ULL || rel >= 0x40d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d030 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_445020
*/
void sub_40d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d030ULL || rel >= 0x40d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d0b0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_445020
*/
void sub_40d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d0b0ULL || rel >= 0x40d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d130 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_445020
*/
void sub_40d130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d130ULL || rel >= 0x40d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d1b0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_445020
*/
void sub_40d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d1b0ULL || rel >= 0x40d230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d230 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_445020
*/
void sub_40d230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d230ULL || rel >= 0x40d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d2b0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_445020
*/
void sub_40d2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d2b0ULL || rel >= 0x40d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d330 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_445020
*/
void sub_40d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d330ULL || rel >= 0x40d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d3b0 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_445100
*/
void sub_40d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d3b0ULL || rel >= 0x40d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d420 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_442650
*/
void sub_40d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d420ULL || rel >= 0x40d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d490 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_443100
*/
void sub_40d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d490ULL || rel >= 0x40d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d510 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_443100
*/
void sub_40d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d510ULL || rel >= 0x40d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d590 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4451c0
*/
void sub_40d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d590ULL || rel >= 0x40d600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d600 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_442650
*/
void sub_40d600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d600ULL || rel >= 0x40d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d670 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_443680
*/
void sub_40d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d670ULL || rel >= 0x40d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d6e0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_443680
*/
void sub_40d6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d6e0ULL || rel >= 0x40d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d750 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4451c0
*/
void sub_40d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d750ULL || rel >= 0x40d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d7c0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4452e0
*/
void sub_40d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d7c0ULL || rel >= 0x40d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d830 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4453d0
*/
void sub_40d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d830ULL || rel >= 0x40d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d8b0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_445520
*/
void sub_40d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d8b0ULL || rel >= 0x40d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d920 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4453d0
*/
void sub_40d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d920ULL || rel >= 0x40d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d9a0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4452e0
*/
void sub_40d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d9a0ULL || rel >= 0x40da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040da10 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_444ef0
*/
void sub_40da10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40da10ULL || rel >= 0x40da80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040da80 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_444ef0
*/
void sub_40da80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40da80ULL || rel >= 0x40daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040daf0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_445520
*/
void sub_40daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40daf0ULL || rel >= 0x40db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040db60 size=96 callers=0 calls=2
   calls: sub_393430, sub_445670
*/
void sub_40db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40db60ULL || rel >= 0x40dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dbc0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445760
*/
void sub_40dbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dbc0ULL || rel >= 0x40dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dc10 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445830
*/
void sub_40dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dc10ULL || rel >= 0x40dc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dc60 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445830
*/
void sub_40dc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dc60ULL || rel >= 0x40dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dcb0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_444a00
*/
void sub_40dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dcb0ULL || rel >= 0x40dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dd00 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445760
*/
void sub_40dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dd00ULL || rel >= 0x40dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dd50 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_444a00
*/
void sub_40dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dd50ULL || rel >= 0x40dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dda0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445760
*/
void sub_40dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dda0ULL || rel >= 0x40ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ddf0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445940
*/
void sub_40ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ddf0ULL || rel >= 0x40de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040de40 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445a40
*/
void sub_40de40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40de40ULL || rel >= 0x40de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040de90 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445a40
*/
void sub_40de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40de90ULL || rel >= 0x40dee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dee0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445b80
*/
void sub_40dee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dee0ULL || rel >= 0x40df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040df30 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445940
*/
void sub_40df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40df30ULL || rel >= 0x40df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040df80 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445b80
*/
void sub_40df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40df80ULL || rel >= 0x40dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dfd0 size=272 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_40dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dfd0ULL || rel >= 0x40e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e0e0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4452e0
*/
void sub_40e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e0e0ULL || rel >= 0x40e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e150 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_445ce0
*/
void sub_40e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e150ULL || rel >= 0x40e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e1d0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4452e0
*/
void sub_40e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e1d0ULL || rel >= 0x40e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e240 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_445e50
*/
void sub_40e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e240ULL || rel >= 0x40e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e2c0 size=144 callers=0 calls=2
   calls: sub_393430, sub_445f60
*/
void sub_40e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e2c0ULL || rel >= 0x40e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e350 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_445ce0
*/
void sub_40e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e350ULL || rel >= 0x40e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e3d0 size=144 callers=0 calls=2
   calls: sub_393430, sub_446150
*/
void sub_40e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e3d0ULL || rel >= 0x40e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e460 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_446340
*/
void sub_40e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e460ULL || rel >= 0x40e4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e4d0 size=144 callers=0 calls=2
   calls: sub_393430, sub_446490
*/
void sub_40e4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e4d0ULL || rel >= 0x40e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e560 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4452e0
*/
void sub_40e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e560ULL || rel >= 0x40e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e5d0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4453d0
*/
void sub_40e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e5d0ULL || rel >= 0x40e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e650 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4452e0
*/
void sub_40e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e650ULL || rel >= 0x40e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e6c0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_445e50
*/
void sub_40e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e6c0ULL || rel >= 0x40e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e740 size=144 callers=0 calls=2
   calls: sub_393430, sub_446660
*/
void sub_40e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e740ULL || rel >= 0x40e7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e7d0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4453d0
*/
void sub_40e7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e7d0ULL || rel >= 0x40e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e850 size=144 callers=0 calls=2
   calls: sub_393430, sub_446660
*/
void sub_40e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e850ULL || rel >= 0x40e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e8e0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_446340
*/
void sub_40e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e8e0ULL || rel >= 0x40e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e950 size=144 callers=0 calls=2
   calls: sub_393430, sub_446490
*/
void sub_40e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e950ULL || rel >= 0x40e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e9e0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4452e0
*/
void sub_40e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e9e0ULL || rel >= 0x40ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ea50 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_444ef0
*/
void sub_40ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ea50ULL || rel >= 0x40eac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040eac0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4452e0
*/
void sub_40eac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40eac0ULL || rel >= 0x40eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040eb30 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_446830
*/
void sub_40eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40eb30ULL || rel >= 0x40ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ebb0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_444ef0
*/
void sub_40ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ebb0ULL || rel >= 0x40ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ec20 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_446830
*/
void sub_40ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ec20ULL || rel >= 0x40eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040eca0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_446340
*/
void sub_40eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40eca0ULL || rel >= 0x40ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ed10 size=512 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_40ed10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ed10ULL || rel >= 0x40ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ef10 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4452e0
*/
void sub_40ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ef10ULL || rel >= 0x40ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ef80 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4452e0
*/
void sub_40ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ef80ULL || rel >= 0x40eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040eff0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_445e50
*/
void sub_40eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40eff0ULL || rel >= 0x40f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f070 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_446340
*/
void sub_40f070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f070ULL || rel >= 0x40f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f0e0 size=144 callers=0 calls=2
   calls: sub_393430, sub_446490
*/
void sub_40f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f0e0ULL || rel >= 0x40f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f170 size=96 callers=0 calls=2
   calls: sub_393430, sub_4469d0
*/
void sub_40f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f170ULL || rel >= 0x40f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f1d0 size=96 callers=0 calls=2
   calls: sub_393430, sub_446af0
*/
void sub_40f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f1d0ULL || rel >= 0x40f230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f230 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445940
*/
void sub_40f230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f230ULL || rel >= 0x40f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f280 size=96 callers=0 calls=2
   calls: sub_393430, sub_446af0
*/
void sub_40f280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f280ULL || rel >= 0x40f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f2e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4469d0
*/
void sub_40f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f2e0ULL || rel >= 0x40f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f340 size=96 callers=0 calls=2
   calls: sub_393430, sub_446c50
*/
void sub_40f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f340ULL || rel >= 0x40f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f3a0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445940
*/
void sub_40f3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f3a0ULL || rel >= 0x40f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f3f0 size=96 callers=0 calls=2
   calls: sub_393430, sub_446c50
*/
void sub_40f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f3f0ULL || rel >= 0x40f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f450 size=400 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_40f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f450ULL || rel >= 0x40f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f5e0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445a40
*/
void sub_40f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f5e0ULL || rel >= 0x40f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f630 size=512 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_40f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f630ULL || rel >= 0x40f830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f830 size=96 callers=0 calls=2
   calls: sub_393430, sub_446c50
*/
void sub_40f830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f830ULL || rel >= 0x40f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f890 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445940
*/
void sub_40f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f890ULL || rel >= 0x40f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f8e0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445940
*/
void sub_40f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f8e0ULL || rel >= 0x40f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f930 size=416 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_40f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f930ULL || rel >= 0x40fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fad0 size=96 callers=0 calls=2
   calls: sub_393430, sub_446e00
*/
void sub_40fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fad0ULL || rel >= 0x40fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fb30 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445b80
*/
void sub_40fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fb30ULL || rel >= 0x40fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fb80 size=96 callers=0 calls=2
   calls: sub_393430, sub_446e00
*/
void sub_40fb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fb80ULL || rel >= 0x40fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fbe0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445b80
*/
void sub_40fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fbe0ULL || rel >= 0x40fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fc30 size=96 callers=0 calls=2
   calls: sub_393430, sub_446e00
*/
void sub_40fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fc30ULL || rel >= 0x40fc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fc90 size=272 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
   ref: 1`0`/`
*/
void unnamed_39(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fc90ULL || rel >= 0x40fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fda0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4279f0
*/
void sub_40fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fda0ULL || rel >= 0x40fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fe10 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_40fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fe10ULL || rel >= 0x40fe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fe60 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_40fe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fe60ULL || rel >= 0x40feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040feb0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_40feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40feb0ULL || rel >= 0x40ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ff00 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_40ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ff00ULL || rel >= 0x40ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ff50 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_40ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ff50ULL || rel >= 0x40ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ffa0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_40ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ffa0ULL || rel >= 0x40fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fff0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_446fd0
*/
void sub_40fff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fff0ULL || rel >= 0x410040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410040 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_446fd0
*/
void sub_410040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410040ULL || rel >= 0x410090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410090 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_446fd0
*/
void sub_410090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410090ULL || rel >= 0x4100e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004100e0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_446fd0
*/
void sub_4100e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4100e0ULL || rel >= 0x410130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410130 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_447080
*/
void sub_410130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410130ULL || rel >= 0x410180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410180 size=528 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_410180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410180ULL || rel >= 0x410390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410390 size=96 callers=0 calls=2
   calls: sub_393430, sub_447180
*/
void sub_410390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410390ULL || rel >= 0x4103f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004103f0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_447080
*/
void sub_4103f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4103f0ULL || rel >= 0x410440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410440 size=96 callers=0 calls=2
   calls: sub_393430, sub_447180
*/
void sub_410440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410440ULL || rel >= 0x4104a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004104a0 size=96 callers=0 calls=2
   calls: sub_393430, sub_447390
*/
void sub_4104a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4104a0ULL || rel >= 0x410500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410500 size=96 callers=0 calls=2
   calls: sub_393430, sub_447390
*/
void sub_410500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410500ULL || rel >= 0x410560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410560 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_447480
*/
void sub_410560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410560ULL || rel >= 0x4105e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004105e0 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_445100
*/
void sub_4105e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4105e0ULL || rel >= 0x410650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410650 size=208 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_410650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410650ULL || rel >= 0x410720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410720 size=240 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_410720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410720ULL || rel >= 0x410810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410810 size=240 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_410810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410810ULL || rel >= 0x410900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410900 size=272 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_410900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410900ULL || rel >= 0x410a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410a10 size=96 callers=0 calls=2
   calls: sub_393430, sub_445670
*/
void sub_410a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410a10ULL || rel >= 0x410a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410a70 size=288 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_410a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410a70ULL || rel >= 0x410b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410b90 size=288 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_410b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410b90ULL || rel >= 0x410cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410cb0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_442710
*/
void sub_410cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410cb0ULL || rel >= 0x410d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410d30 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_444b30
*/
void sub_410d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410d30ULL || rel >= 0x410db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410db0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_447500
*/
void sub_410db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410db0ULL || rel >= 0x410e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410e40 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_447620
*/
void sub_410e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410e40ULL || rel >= 0x410ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410ec0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_442650
*/
void sub_410ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410ec0ULL || rel >= 0x410f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410f30 size=96 callers=0 calls=2
   calls: sub_393430, sub_447720
*/
void sub_410f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410f30ULL || rel >= 0x410f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410f90 size=96 callers=0 calls=2
   calls: sub_393430, sub_440850
*/
void sub_410f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410f90ULL || rel >= 0x410ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410ff0 size=96 callers=0 calls=2
   calls: sub_393430, sub_440980
*/
void sub_410ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410ff0ULL || rel >= 0x411050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411050 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_447870
*/
void sub_411050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411050ULL || rel >= 0x4110d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004110d0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_447920
*/
void sub_4110d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4110d0ULL || rel >= 0x411150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411150 size=96 callers=0 calls=2
   calls: sub_393430, sub_447a20
*/
void sub_411150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411150ULL || rel >= 0x4111b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004111b0 size=96 callers=0 calls=2
   calls: sub_393430, sub_447b30
*/
void sub_4111b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4111b0ULL || rel >= 0x411210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411210 size=96 callers=0 calls=2
   calls: sub_393430, sub_447ca0
*/
void sub_411210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411210ULL || rel >= 0x411270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411270 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_447dd0
*/
void sub_411270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411270ULL || rel >= 0x411300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411300 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_442710
*/
void sub_411300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411300ULL || rel >= 0x411380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411380 size=336 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_411380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411380ULL || rel >= 0x4114d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004114d0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_447620
*/
void sub_4114d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4114d0ULL || rel >= 0x411550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411550 size=96 callers=0 calls=2
   calls: sub_393430, sub_447ec0
*/
void sub_411550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411550ULL || rel >= 0x4115b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004115b0 size=304 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_4115b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4115b0ULL || rel >= 0x4116e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004116e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_445670
*/
void sub_4116e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4116e0ULL || rel >= 0x411740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411740 size=96 callers=0 calls=2
   calls: sub_3936f0, sub_447ff0
*/
void sub_411740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411740ULL || rel >= 0x4117a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004117a0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4452e0
*/
void sub_4117a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4117a0ULL || rel >= 0x411810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411810 size=336 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_411810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411810ULL || rel >= 0x411960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411960 size=96 callers=0 calls=2
   calls: sub_393430, sub_4480a0
*/
void sub_411960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411960ULL || rel >= 0x4119c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004119c0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_448200
*/
void sub_4119c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4119c0ULL || rel >= 0x411a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411a10 size=96 callers=0 calls=2
   calls: sub_393430, sub_447720
*/
void sub_411a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411a10ULL || rel >= 0x411a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411a70 size=144 callers=0 calls=2
   calls: sub_393430, sub_442920
*/
void sub_411a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411a70ULL || rel >= 0x411b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411b00 size=144 callers=0 calls=2
   calls: sub_393430, sub_443340
*/
void sub_411b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411b00ULL || rel >= 0x411b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411b90 size=272 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_411b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411b90ULL || rel >= 0x411ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411ca0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_447870
*/
void sub_411ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411ca0ULL || rel >= 0x411d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411d20 size=96 callers=0 calls=2
   calls: sub_393430, sub_443780
*/
void sub_411d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411d20ULL || rel >= 0x411d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411d80 size=96 callers=0 calls=2
   calls: sub_393430, sub_447a20
*/
void sub_411d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411d80ULL || rel >= 0x411de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411de0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4482e0
*/
void sub_411de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411de0ULL || rel >= 0x411e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411e40 size=96 callers=0 calls=2
   calls: sub_393430, sub_4484a0
*/
void sub_411e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411e40ULL || rel >= 0x411ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411ea0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_447dd0
*/
void sub_411ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411ea0ULL || rel >= 0x411f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411f30 size=144 callers=0 calls=2
   calls: sub_393430, sub_442bc0
*/
void sub_411f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411f30ULL || rel >= 0x411fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411fc0 size=144 callers=0 calls=2
   calls: sub_393430, sub_4434e0
*/
void sub_411fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411fc0ULL || rel >= 0x412050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412050 size=272 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_412050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412050ULL || rel >= 0x412160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412160 size=96 callers=0 calls=2
   calls: sub_3936f0, sub_447ff0
*/
void sub_412160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412160ULL || rel >= 0x4121c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004121c0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4438f0
*/
void sub_4121c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4121c0ULL || rel >= 0x412240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412240 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_448200
*/
void sub_412240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412240ULL || rel >= 0x412290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412290 size=288 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_412290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412290ULL || rel >= 0x4123b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004123b0 size=528 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860, sub_4387b0
*/
void sub_4123b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4123b0ULL || rel >= 0x4125c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004125c0 size=96 callers=0 calls=2
   calls: sub_393430, sub_440850
*/
void sub_4125c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4125c0ULL || rel >= 0x412620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412620 size=96 callers=0 calls=2
   calls: sub_393430, sub_440980
*/
void sub_412620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412620ULL || rel >= 0x412680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412680 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_447920
*/
void sub_412680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412680ULL || rel >= 0x412700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412700 size=96 callers=0 calls=2
   calls: sub_393430, sub_447b30
*/
void sub_412700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412700ULL || rel >= 0x412760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412760 size=96 callers=0 calls=2
   calls: sub_393430, sub_447ca0
*/
void sub_412760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412760ULL || rel >= 0x4127c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004127c0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_442710
*/
void sub_4127c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4127c0ULL || rel >= 0x412840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412840 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_447500
*/
void sub_412840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412840ULL || rel >= 0x4128d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004128d0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_447620
*/
void sub_4128d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4128d0ULL || rel >= 0x412950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412950 size=96 callers=0 calls=2
   calls: sub_393430, sub_447ec0
*/
void sub_412950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412950ULL || rel >= 0x4129b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004129b0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4452e0
*/
void sub_4129b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4129b0ULL || rel >= 0x412a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412a20 size=336 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_412a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412a20ULL || rel >= 0x412b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412b70 size=96 callers=0 calls=2
   calls: sub_393430, sub_4480a0
*/
void sub_412b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412b70ULL || rel >= 0x412bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412bd0 size=144 callers=0 calls=2
   calls: sub_393430, sub_442d80
*/
void sub_412bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412bd0ULL || rel >= 0x412c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412c60 size=144 callers=0 calls=2
   calls: sub_393430, sub_443340
*/
void sub_412c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412c60ULL || rel >= 0x412cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412cf0 size=96 callers=0 calls=2
   calls: sub_393430, sub_443780
*/
void sub_412cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412cf0ULL || rel >= 0x412d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412d50 size=96 callers=0 calls=2
   calls: sub_393430, sub_4482e0
*/
void sub_412d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412d50ULL || rel >= 0x412db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412db0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4484a0
*/
void sub_412db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412db0ULL || rel >= 0x412e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412e10 size=144 callers=0 calls=2
   calls: sub_393430, sub_442f40
*/
void sub_412e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412e10ULL || rel >= 0x412ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412ea0 size=144 callers=0 calls=2
   calls: sub_393430, sub_4434e0
*/
void sub_412ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412ea0ULL || rel >= 0x412f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412f30 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4438f0
*/
void sub_412f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412f30ULL || rel >= 0x412fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412fb0 size=416 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_412fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412fb0ULL || rel >= 0x413150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413150 size=336 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_413150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413150ULL || rel >= 0x4132a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004132a0 size=400 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_4132a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4132a0ULL || rel >= 0x413430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413430 size=304 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_413430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413430ULL || rel >= 0x413560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413560 size=560 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_413560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413560ULL || rel >= 0x413790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413790 size=464 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_413790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413790ULL || rel >= 0x413960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413960 size=480 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_413960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413960ULL || rel >= 0x413b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413b40 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_444c40
*/
void sub_413b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413b40ULL || rel >= 0x413bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413bc0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_444db0
*/
void sub_413bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413bc0ULL || rel >= 0x413c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413c40 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_448640
*/
void sub_413c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413c40ULL || rel >= 0x413cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413cd0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_448790
*/
void sub_413cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413cd0ULL || rel >= 0x413d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413d50 size=384 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_413d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413d50ULL || rel >= 0x413ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413ed0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_445ce0
*/
void sub_413ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413ed0ULL || rel >= 0x413f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413f50 size=384 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_413f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413f50ULL || rel >= 0x4140d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004140d0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_448790
*/
void sub_4140d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4140d0ULL || rel >= 0x414150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414150 size=96 callers=0 calls=2
   calls: sub_3936f0, sub_4488c0
*/
void sub_414150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414150ULL || rel >= 0x4141b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004141b0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4489a0
*/
void sub_4141b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4141b0ULL || rel >= 0x414210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414210 size=96 callers=0 calls=2
   calls: sub_393430, sub_448af0
*/
void sub_414210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414210ULL || rel >= 0x414270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414270 size=416 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_414270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414270ULL || rel >= 0x414410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414410 size=352 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_414410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414410ULL || rel >= 0x414570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414570 size=368 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_414570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414570ULL || rel >= 0x4146e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004146e0 size=464 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_4146e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4146e0ULL || rel >= 0x4148b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004148b0 size=448 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_4148b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4148b0ULL || rel >= 0x414a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414a70 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_445ce0
*/
void sub_414a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414a70ULL || rel >= 0x414af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414af0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_448640
*/
void sub_414af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414af0ULL || rel >= 0x414b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414b80 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_448790
*/
void sub_414b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414b80ULL || rel >= 0x414c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414c00 size=96 callers=0 calls=2
   calls: sub_393430, sub_448af0
*/
void sub_414c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414c00ULL || rel >= 0x414c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414c60 size=400 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_414c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414c60ULL || rel >= 0x414df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414df0 size=352 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_414df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414df0ULL || rel >= 0x414f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414f50 size=144 callers=0 calls=2
   calls: sub_393430, sub_445f60
*/
void sub_414f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414f50ULL || rel >= 0x414fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414fe0 size=144 callers=0 calls=2
   calls: sub_393430, sub_446660
*/
void sub_414fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414fe0ULL || rel >= 0x415070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415070 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_446830
*/
void sub_415070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415070ULL || rel >= 0x4150f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004150f0 size=96 callers=0 calls=2
   calls: sub_3936f0, sub_4488c0
*/
void sub_4150f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4150f0ULL || rel >= 0x415150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415150 size=320 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_415150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415150ULL || rel >= 0x415290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415290 size=96 callers=0 calls=2
   calls: sub_393430, sub_4489a0
*/
void sub_415290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415290ULL || rel >= 0x4152f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004152f0 size=96 callers=0 calls=2
   calls: sub_393430, sub_448c90
*/
void sub_4152f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4152f0ULL || rel >= 0x415350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415350 size=96 callers=0 calls=2
   calls: sub_393430, sub_448e80
*/
void sub_415350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415350ULL || rel >= 0x4153b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004153b0 size=352 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_4153b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4153b0ULL || rel >= 0x415510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415510 size=144 callers=0 calls=2
   calls: sub_393430, sub_446150
*/
void sub_415510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415510ULL || rel >= 0x4155a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004155a0 size=144 callers=0 calls=2
   calls: sub_393430, sub_446660
*/
void sub_4155a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4155a0ULL || rel >= 0x415630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415630 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_446830
*/
void sub_415630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415630ULL || rel >= 0x4156b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004156b0 size=96 callers=0 calls=2
   calls: sub_393430, sub_448c90
*/
void sub_4156b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4156b0ULL || rel >= 0x415710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415710 size=96 callers=0 calls=2
   calls: sub_393430, sub_448e80
*/
void sub_415710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415710ULL || rel >= 0x415770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415770 size=512 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_415770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415770ULL || rel >= 0x415970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415970 size=608 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_415970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415970ULL || rel >= 0x415bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415bd0 size=224 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_415bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415bd0ULL || rel >= 0x415cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415cb0 size=256 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_415cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415cb0ULL || rel >= 0x415db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415db0 size=96 callers=0 calls=2
   calls: sub_3936f0, sub_447ff0
*/
void sub_415db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415db0ULL || rel >= 0x415e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415e10 size=128 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_449050
*/
void sub_415e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415e10ULL || rel >= 0x415e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415e90 size=96 callers=0 calls=2
   calls: sub_3936f0, sub_449140
*/
void sub_415e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415e90ULL || rel >= 0x415ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415ef0 size=128 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_449210
*/
void sub_415ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415ef0ULL || rel >= 0x415f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415f70 size=96 callers=0 calls=2
   calls: sub_3936f0, sub_447ff0
*/
void sub_415f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415f70ULL || rel >= 0x415fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415fd0 size=128 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_449050
*/
void sub_415fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415fd0ULL || rel >= 0x416050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416050 size=96 callers=0 calls=2
   calls: sub_3936f0, sub_449140
*/
void sub_416050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416050ULL || rel >= 0x4160b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004160b0 size=128 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_449210
*/
void sub_4160b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4160b0ULL || rel >= 0x416130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416130 size=256 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_416130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416130ULL || rel >= 0x416230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416230 size=288 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_416230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416230ULL || rel >= 0x416350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416350 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_445940
*/
void sub_416350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416350ULL || rel >= 0x4163a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004163a0 size=320 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_4163a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4163a0ULL || rel >= 0x4164e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004164e0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4452e0
*/
void sub_4164e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4164e0ULL || rel >= 0x416550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416550 size=320 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_416550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416550ULL || rel >= 0x416690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416690 size=336 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_416690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416690ULL || rel >= 0x4167e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004167e0 size=368 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_4167e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4167e0ULL || rel >= 0x416950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416950 size=1216 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_416950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416950ULL || rel >= 0x416e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416e10 size=1264 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_416e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416e10ULL || rel >= 0x417300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417300 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_447480
*/
void sub_417300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417300ULL || rel >= 0x417380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417380 size=192 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_417380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417380ULL || rel >= 0x417440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417440 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4410f0
*/
void sub_417440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417440ULL || rel >= 0x417490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417490 size=384 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_417490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417490ULL || rel >= 0x417610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417610 size=416 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_417610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417610ULL || rel >= 0x4177b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004177b0 size=1360 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_4177b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4177b0ULL || rel >= 0x417d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417d00 size=96 callers=0 calls=2
   calls: sub_393430, sub_426be0
*/
void sub_417d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417d00ULL || rel >= 0x417d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417d60 size=96 callers=0 calls=2
   calls: sub_393430, sub_427b10
*/
void sub_417d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417d60ULL || rel >= 0x417dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417dc0 size=96 callers=0 calls=2
   calls: sub_393430, sub_427c50
*/
void sub_417dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417dc0ULL || rel >= 0x417e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417e20 size=96 callers=0 calls=2
   calls: sub_393430, sub_427e10
*/
void sub_417e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417e20ULL || rel >= 0x417e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417e80 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426910
*/
void sub_417e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417e80ULL || rel >= 0x417f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417f00 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426910
*/
void sub_417f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417f00ULL || rel >= 0x417f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417f80 size=464 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_417f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417f80ULL || rel >= 0x418150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418150 size=368 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_418150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418150ULL || rel >= 0x4182c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004182c0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449310
   ref: /@0@1@2@
*/
void f_0_1_2_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4182c0ULL || rel >= 0x418310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418310 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449310
*/
void sub_418310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418310ULL || rel >= 0x418360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418360 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_418360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418360ULL || rel >= 0x4183b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004183b0 size=288 callers=0 calls=4
   calls: atomicCompSwap, sub_393430, sub_3936f0, sub_426860
*/
void sub_4183b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4183b0ULL || rel >= 0x4184d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004184d0 size=592 callers=0 calls=4
   calls: atomicCompSwap, sub_2f7fb0, sub_393430, sub_426860
*/
void sub_4184d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4184d0ULL || rel >= 0x418720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418720 size=272 callers=0 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_3936f0, sub_426860
*/
void sub_418720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418720ULL || rel >= 0x418830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418830 size=1008 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_393430, sub_426860
*/
void sub_418830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418830ULL || rel >= 0x418c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418c20 size=752 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_393430, sub_3936f0, sub_426860
*/
void sub_418c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418c20ULL || rel >= 0x418f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418f10 size=992 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_393430, sub_426860
*/
void sub_418f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418f10ULL || rel >= 0x4192f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004192f0 size=1312 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_393430, sub_3936f0, sub_426860
*/
void sub_4192f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4192f0ULL || rel >= 0x419810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419810 size=992 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_393430, sub_426860
*/
void sub_419810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419810ULL || rel >= 0x419bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419bf0 size=960 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_393430, sub_426860
*/
void sub_419bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419bf0ULL || rel >= 0x419fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419fb0 size=752 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_393430, sub_426860
*/
void sub_419fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419fb0ULL || rel >= 0x41a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a2a0 size=496 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_393430, sub_426860
*/
void sub_41a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a2a0ULL || rel >= 0x41a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a490 size=784 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_393430, sub_426860
*/
void sub_41a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a490ULL || rel >= 0x41a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a7a0 size=320 callers=0 calls=3
   calls: atomicCompSwap, sub_3936f0, sub_426860
*/
void sub_41a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a7a0ULL || rel >= 0x41a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a8e0 size=608 callers=0 calls=4
   calls: atomicCompSwap, sub_2f7fb0, sub_393430, sub_426860
*/
void sub_41a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a8e0ULL || rel >= 0x41ab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ab40 size=512 callers=0 calls=4
   calls: atomicCompSwap, sub_2fab10, sub_393430, sub_426860
*/
void sub_41ab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ab40ULL || rel >= 0x41ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ad40 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ad40ULL || rel >= 0x41ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ad90 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ad90ULL || rel >= 0x41ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ade0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ade0ULL || rel >= 0x41ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ae30 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ae30ULL || rel >= 0x41ae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ae80 size=96 callers=0 calls=2
   calls: sub_393430, sub_449540
*/
void sub_41ae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ae80ULL || rel >= 0x41aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041aee0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41aee0ULL || rel >= 0x41af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041af30 size=96 callers=0 calls=2
   calls: sub_393430, sub_449540
*/
void sub_41af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41af30ULL || rel >= 0x41af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041af90 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41af90ULL || rel >= 0x41afe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041afe0 size=96 callers=0 calls=2
   calls: sub_393430, sub_449540
*/
void sub_41afe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41afe0ULL || rel >= 0x41b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b040 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b040ULL || rel >= 0x41b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b090 size=96 callers=0 calls=2
   calls: sub_393430, sub_449540
*/
void sub_41b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b090ULL || rel >= 0x41b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b0f0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b0f0ULL || rel >= 0x41b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b140 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b140ULL || rel >= 0x41b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b190 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b190ULL || rel >= 0x41b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b1e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_449540
*/
void sub_41b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b1e0ULL || rel >= 0x41b240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b240 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41b240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b240ULL || rel >= 0x41b290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b290 size=96 callers=0 calls=2
   calls: sub_393430, sub_449540
*/
void sub_41b290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b290ULL || rel >= 0x41b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b2f0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b2f0ULL || rel >= 0x41b340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b340 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41b340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b340ULL || rel >= 0x41b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b390 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b390ULL || rel >= 0x41b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b3e0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41b3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b3e0ULL || rel >= 0x41b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b430 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_449470
*/
void sub_41b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b430ULL || rel >= 0x41b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b480 size=96 callers=0 calls=2
   calls: sub_393430, sub_449610
*/
void sub_41b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b480ULL || rel >= 0x41b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b4e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4497f0
*/
void sub_41b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b4e0ULL || rel >= 0x41b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b540 size=96 callers=0 calls=2
   calls: sub_393430, sub_449a10
*/
void sub_41b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b540ULL || rel >= 0x41b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041b5a0 size=96 callers=0 calls=2
   calls: sub_393430, sub_449610
*/
void sub_41b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41b5a0ULL || rel >= 0x41b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

