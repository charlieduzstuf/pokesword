/* main functions 00e7cc70..00e9e720 (114 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00e7cc70 size=16 callers=0 calls=0
*/
void sub_e7cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cc70ULL || rel >= 0xe7cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cc80 size=16 callers=0 calls=0
*/
void sub_e7cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cc80ULL || rel >= 0xe7cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cc90 size=16 callers=0 calls=0
*/
void sub_e7cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cc90ULL || rel >= 0xe7cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cca0 size=16 callers=0 calls=0
*/
void sub_e7cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cca0ULL || rel >= 0xe7ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ccb0 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_e7ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ccb0ULL || rel >= 0xe7cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cd20 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_e7cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cd20ULL || rel >= 0xe7cd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cd90 size=16 callers=0 calls=0
*/
void sub_e7cd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cd90ULL || rel >= 0xe7cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cda0 size=16 callers=0 calls=0
*/
void sub_e7cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cda0ULL || rel >= 0xe7cdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cdb0 size=240 callers=0 calls=0
*/
void sub_e7cdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cdb0ULL || rel >= 0xe7cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cea0 size=16 callers=0 calls=0
*/
void sub_e7cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cea0ULL || rel >= 0xe7ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ceb0 size=16 callers=0 calls=0
*/
void sub_e7ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ceb0ULL || rel >= 0xe7cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cec0 size=16 callers=0 calls=0
*/
void sub_e7cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cec0ULL || rel >= 0xe7ced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ced0 size=16 callers=0 calls=0
*/
void sub_e7ced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ced0ULL || rel >= 0xe7cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cee0 size=16 callers=0 calls=0
*/
void sub_e7cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cee0ULL || rel >= 0xe7cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cef0 size=16 callers=0 calls=0
*/
void sub_e7cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cef0ULL || rel >= 0xe7cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7cf00 size=400 callers=2 calls=0
*/
void sub_e7cf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7cf00ULL || rel >= 0xe7d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7d090 size=48 callers=0 calls=1
   calls: sub_e7cf00
*/
void sub_e7d090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7d090ULL || rel >= 0xe7d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7d0c0 size=208 callers=0 calls=0
*/
void sub_e7d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7d0c0ULL || rel >= 0xe7d190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7d190 size=288 callers=6 calls=2
   calls: sub_5e2bc0, sub_e7e5e0
*/
void sub_e7d190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7d190ULL || rel >= 0xe7d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7d2b0 size=240 callers=0 calls=2
   calls: sub_5e2bc0, sub_e7e5e0
*/
void sub_e7d2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7d2b0ULL || rel >= 0xe7d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7d3a0 size=256 callers=0 calls=2
   calls: sub_5e2bc0, sub_e7e5e0
*/
void sub_e7d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7d3a0ULL || rel >= 0xe7d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7d4a0 size=272 callers=3 calls=1
   calls: sub_e7d5b0
*/
void sub_e7d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7d4a0ULL || rel >= 0xe7d5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7d5b0 size=304 callers=1 calls=0
*/
void sub_e7d5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7d5b0ULL || rel >= 0xe7d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7d6e0 size=1120 callers=1 calls=4
   calls: sub_e7db40, sub_e7dd30, sub_e7df20, sub_e7e120
*/
void sub_e7d6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7d6e0ULL || rel >= 0xe7db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7db40 size=496 callers=1 calls=0
*/
void sub_e7db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7db40ULL || rel >= 0xe7dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7dd30 size=496 callers=1 calls=0
*/
void sub_e7dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7dd30ULL || rel >= 0xe7df20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7df20 size=512 callers=1 calls=0
*/
void sub_e7df20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7df20ULL || rel >= 0xe7e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7e120 size=512 callers=1 calls=0
*/
void sub_e7e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7e120ULL || rel >= 0xe7e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7e320 size=96 callers=1 calls=1
   calls: sub_ea3d10
*/
void sub_e7e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7e320ULL || rel >= 0xe7e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7e380 size=96 callers=3 calls=1
   calls: sub_ea3d10
*/
void sub_e7e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7e380ULL || rel >= 0xe7e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7e3e0 size=32 callers=1 calls=0
*/
void sub_e7e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7e3e0ULL || rel >= 0xe7e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7e400 size=336 callers=21 calls=2
   calls: sub_5de890, sub_5e2930
*/
void sub_e7e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7e400ULL || rel >= 0xe7e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7e550 size=80 callers=7 calls=0
*/
void sub_e7e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7e550ULL || rel >= 0xe7e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7e5a0 size=32 callers=1 calls=0
*/
void sub_e7e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7e5a0ULL || rel >= 0xe7e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7e5c0 size=32 callers=1 calls=0
*/
void sub_e7e5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7e5c0ULL || rel >= 0xe7e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7e5e0 size=688 callers=5 calls=1
   calls: sub_5e2bc0
*/
void sub_e7e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7e5e0ULL || rel >= 0xe7e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7e890 size=400 callers=138 calls=5
   calls: sub_1307de0, sub_5cfaf0, sub_5cff50, sub_5e6770, sub_c4ac70
*/
void sub_e7e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7e890ULL || rel >= 0xe7ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ea20 size=112 callers=27 calls=1
   calls: sub_1308340
*/
void sub_e7ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ea20ULL || rel >= 0xe7ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ea90 size=128 callers=126 calls=0
*/
void sub_e7ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ea90ULL || rel >= 0xe7eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7eb10 size=48 callers=382 calls=0
*/
void sub_e7eb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7eb10ULL || rel >= 0xe7eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7eb40 size=112 callers=7 calls=0
*/
void sub_e7eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7eb40ULL || rel >= 0xe7ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7ebb0 size=1056 callers=2 calls=3
   calls: anonymous_2, sub_14b31a0, sub_65d700
   ref: modalRoot
   ref: focusRoot
   ref: unfocusRoot
*/
void unfocusRoot(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ebb0ULL || rel >= 0xe7efd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7efd0 size=288 callers=0 calls=0
*/
void sub_e7efd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7efd0ULL || rel >= 0xe7f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f0f0 size=16 callers=0 calls=0
*/
void sub_e7f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f0f0ULL || rel >= 0xe7f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f100 size=16 callers=0 calls=0
*/
void sub_e7f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f100ULL || rel >= 0xe7f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f110 size=16 callers=0 calls=0
*/
void sub_e7f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f110ULL || rel >= 0xe7f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f120 size=224 callers=0 calls=3
   calls: sub_e7f6c0, sub_e806a0, sub_e809c0
*/
void sub_e7f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f120ULL || rel >= 0xe7f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f200 size=80 callers=7 calls=1
   calls: sub_e80ec0
*/
void sub_e7f200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f200ULL || rel >= 0xe7f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f250 size=64 callers=2 calls=1
   calls: sub_e7fe80
*/
void sub_e7f250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f250ULL || rel >= 0xe7f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f290 size=80 callers=2 calls=0
*/
void sub_e7f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f290ULL || rel >= 0xe7f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f2e0 size=288 callers=2 calls=3
   calls: sub_e80e90, sub_e81040, sub_ea46c0
*/
void sub_e7f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f2e0ULL || rel >= 0xe7f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f400 size=64 callers=2 calls=1
   calls: sub_e81210
*/
void sub_e7f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f400ULL || rel >= 0xe7f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f440 size=80 callers=3 calls=1
   calls: sub_e806b0
*/
void sub_e7f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f440ULL || rel >= 0xe7f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f490 size=16 callers=0 calls=0
*/
void sub_e7f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f490ULL || rel >= 0xe7f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f4a0 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_e7f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f4a0ULL || rel >= 0xe7f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f510 size=16 callers=0 calls=0
*/
void sub_e7f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f510ULL || rel >= 0xe7f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f520 size=16 callers=0 calls=0
*/
void sub_e7f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f520ULL || rel >= 0xe7f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f530 size=16 callers=0 calls=0
*/
void sub_e7f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f530ULL || rel >= 0xe7f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f540 size=16 callers=0 calls=0
*/
void sub_e7f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f540ULL || rel >= 0xe7f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f550 size=16 callers=0 calls=0
*/
void sub_e7f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f550ULL || rel >= 0xe7f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f560 size=16 callers=0 calls=0
*/
void sub_e7f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f560ULL || rel >= 0xe7f570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f570 size=16 callers=0 calls=0
*/
void sub_e7f570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f570ULL || rel >= 0xe7f580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f580 size=16 callers=0 calls=0
*/
void sub_e7f580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f580ULL || rel >= 0xe7f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f590 size=16 callers=0 calls=0
*/
void sub_e7f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f590ULL || rel >= 0xe7f5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f5a0 size=16 callers=0 calls=0
*/
void sub_e7f5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f5a0ULL || rel >= 0xe7f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f5b0 size=16 callers=0 calls=0
*/
void sub_e7f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f5b0ULL || rel >= 0xe7f5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f5c0 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_e7f5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f5c0ULL || rel >= 0xe7f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f630 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_e7f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f630ULL || rel >= 0xe7f6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f6a0 size=16 callers=0 calls=0
*/
void sub_e7f6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f6a0ULL || rel >= 0xe7f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f6b0 size=16 callers=0 calls=0
*/
void sub_e7f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f6b0ULL || rel >= 0xe7f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f6c0 size=240 callers=177 calls=0
*/
void sub_e7f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f6c0ULL || rel >= 0xe7f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f7b0 size=16 callers=1 calls=0
*/
void sub_e7f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f7b0ULL || rel >= 0xe7f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f7c0 size=16 callers=22 calls=0
*/
void sub_e7f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f7c0ULL || rel >= 0xe7f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f7d0 size=16 callers=4 calls=0
*/
void sub_e7f7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f7d0ULL || rel >= 0xe7f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f7e0 size=16 callers=69 calls=0
*/
void sub_e7f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f7e0ULL || rel >= 0xe7f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f7f0 size=48 callers=25 calls=0
*/
void sub_e7f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f7f0ULL || rel >= 0xe7f820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7f820 size=1152 callers=191 calls=4
   calls: sub_5e2350, sub_6835f0, sub_d0c0, sub_e7fca0
   ref: anonymous
*/
void anonymous_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f820ULL || rel >= 0xe7fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7fca0 size=288 callers=1 calls=1
   calls: sub_65d700
*/
void sub_e7fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7fca0ULL || rel >= 0xe7fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7fdc0 size=96 callers=1 calls=1
   calls: sub_d0c0
   ref: anonymous
*/
void anonymous_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7fdc0ULL || rel >= 0xe7fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7fe20 size=96 callers=188 calls=1
   calls: sub_e81de0
*/
void sub_e7fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7fe20ULL || rel >= 0xe7fe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7fe80 size=48 callers=1 calls=0
*/
void sub_e7fe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7fe80ULL || rel >= 0xe7feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e7feb0 size=560 callers=0 calls=1
   calls: sub_e800e0
*/
void sub_e7feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7feb0ULL || rel >= 0xe800e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e800e0 size=1104 callers=2 calls=2
   calls: sub_5e2bc0, sub_e812f0
*/
void sub_e800e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe800e0ULL || rel >= 0xe80530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e80530 size=16 callers=0 calls=0
*/
void sub_e80530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe80530ULL || rel >= 0xe80540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e80540 size=16 callers=0 calls=0
*/
void sub_e80540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe80540ULL || rel >= 0xe80550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e80550 size=16 callers=0 calls=0
*/
void sub_e80550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe80550ULL || rel >= 0xe80560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e80560 size=16 callers=0 calls=0
*/
void sub_e80560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe80560ULL || rel >= 0xe80570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e80570 size=16 callers=0 calls=0
*/
void sub_e80570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe80570ULL || rel >= 0xe80580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e80580 size=288 callers=325 calls=3
   calls: sub_e80580, sub_e81640, sub_e82ef0
*/
void sub_e80580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe80580ULL || rel >= 0xe806a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e806a0 size=16 callers=1 calls=0
*/
void sub_e806a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe806a0ULL || rel >= 0xe806b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e806b0 size=288 callers=360 calls=3
   calls: sub_e806b0, sub_e81640, sub_e82f10
*/
void sub_e806b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe806b0ULL || rel >= 0xe807d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e807d0 size=16 callers=17 calls=0
*/
void sub_e807d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe807d0ULL || rel >= 0xe807e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e807e0 size=16 callers=2 calls=0
*/
void sub_e807e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe807e0ULL || rel >= 0xe807f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e807f0 size=32 callers=442 calls=0
*/
void sub_e807f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe807f0ULL || rel >= 0xe80810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e80810 size=80 callers=9 calls=1
   calls: sub_e80860
*/
void sub_e80810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe80810ULL || rel >= 0xe80860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e80860 size=352 callers=2 calls=1
   calls: sub_e81640
*/
void sub_e80860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe80860ULL || rel >= 0xe809c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e809c0 size=16 callers=377 calls=0
*/
void sub_e809c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe809c0ULL || rel >= 0xe809d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e809d0 size=464 callers=0 calls=3
   calls: sub_e80d20, sub_e81410, sub_e81640
*/
void sub_e809d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe809d0ULL || rel >= 0xe80ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e80ba0 size=384 callers=2 calls=1
   calls: sub_e81640
*/
void sub_e80ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe80ba0ULL || rel >= 0xe80d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e80d20 size=368 callers=1 calls=2
   calls: sub_e80ba0, sub_e81640
*/
void sub_e80d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe80d20ULL || rel >= 0xe80e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e80e90 size=48 callers=1 calls=0
*/
void sub_e80e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe80e90ULL || rel >= 0xe80ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e80ec0 size=160 callers=1 calls=2
   calls: sub_e80f60, sub_e82f40
*/
void sub_e80ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe80ec0ULL || rel >= 0xe80f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e80f60 size=224 callers=1 calls=2
   calls: sub_5e5560, sub_e81e60
*/
void sub_e80f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe80f60ULL || rel >= 0xe81040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81040 size=464 callers=4 calls=4
   calls: sub_e81040, sub_e81640, sub_e83200, sub_ea46c0
*/
void sub_e81040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81040ULL || rel >= 0xe81210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81210 size=16 callers=1 calls=0
*/
void sub_e81210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81210ULL || rel >= 0xe81220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81220 size=16 callers=0 calls=0
*/
void sub_e81220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81220ULL || rel >= 0xe81230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81230 size=16 callers=3 calls=0
*/
void sub_e81230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81230ULL || rel >= 0xe81240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81240 size=16 callers=0 calls=0
*/
void sub_e81240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81240ULL || rel >= 0xe81250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81250 size=16 callers=0 calls=0
*/
void sub_e81250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81250ULL || rel >= 0xe81260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81260 size=16 callers=0 calls=0
*/
void sub_e81260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81260ULL || rel >= 0xe81270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81270 size=16 callers=0 calls=0
*/
void sub_e81270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81270ULL || rel >= 0xe81280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81280 size=48 callers=0 calls=1
   calls: sub_e800e0
*/
void sub_e81280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81280ULL || rel >= 0xe812b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e812b0 size=32 callers=0 calls=0
*/
void sub_e812b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe812b0ULL || rel >= 0xe812d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e812d0 size=32 callers=0 calls=0
*/
void sub_e812d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe812d0ULL || rel >= 0xe812f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e812f0 size=272 callers=6 calls=0
*/
void sub_e812f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe812f0ULL || rel >= 0xe81400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81400 size=16 callers=0 calls=0
*/
void sub_e81400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81400ULL || rel >= 0xe81410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81410 size=528 callers=1 calls=0
*/
void sub_e81410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81410ULL || rel >= 0xe81620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81620 size=32 callers=0 calls=0
*/
void sub_e81620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81620ULL || rel >= 0xe81640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81640 size=240 callers=12 calls=0
*/
void sub_e81640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81640ULL || rel >= 0xe81730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81730 size=208 callers=0 calls=0
*/
void sub_e81730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81730ULL || rel >= 0xe81800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81800 size=32 callers=0 calls=0
*/
void sub_e81800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81800ULL || rel >= 0xe81820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81820 size=16 callers=0 calls=0
*/
void sub_e81820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81820ULL || rel >= 0xe81830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81830 size=192 callers=0 calls=1
   calls: sub_e818f0
*/
void sub_e81830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81830ULL || rel >= 0xe818f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e818f0 size=944 callers=1 calls=2
   calls: sub_5cfaf0, sub_e81640
*/
void sub_e818f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe818f0ULL || rel >= 0xe81ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81ca0 size=208 callers=0 calls=0
*/
void sub_e81ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81ca0ULL || rel >= 0xe81d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81d70 size=112 callers=3 calls=2
   calls: sub_683640, sub_683670
*/
void sub_e81d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81d70ULL || rel >= 0xe81de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81de0 size=128 callers=1 calls=1
   calls: sub_5f19d0
*/
void sub_e81de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81de0ULL || rel >= 0xe81e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e81e60 size=2272 callers=1 calls=12
   calls: dummy, lang_icon, live_comm_player, sub_14a99d0, sub_14ba3b0, sub_14bd420, sub_14d5790, sub_14d6130, sub_5e2930, sub_c4a100, sub_e84900, type_dummy
*/
void sub_e81e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81e60ULL || rel >= 0xe82740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e82740 size=64 callers=0 calls=1
   calls: sub_e82780
*/
void sub_e82740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe82740ULL || rel >= 0xe82780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e82780 size=384 callers=1 calls=7
   calls: sub_14a9c50, sub_14a9c70, sub_14bd810, sub_14d5a10, sub_14d5a90, sub_14d6820, sub_14d68a0
*/
void sub_e82780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe82780ULL || rel >= 0xe82900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e82900 size=1520 callers=0 calls=13
   calls: sub_14abc90, sub_14ac3c0, sub_14ad840, sub_14f91f0, sub_1500c90, sub_1500d10, sub_683640, sub_683670, sub_685230, sub_c48c70, sub_e812f0, sub_e857e0
   ... +1 more
*/
void sub_e82900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe82900ULL || rel >= 0xe82ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e82ef0 size=32 callers=10 calls=0
*/
void sub_e82ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe82ef0ULL || rel >= 0xe82f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e82f10 size=48 callers=5 calls=0
*/
void sub_e82f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe82f10ULL || rel >= 0xe82f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e82f40 size=672 callers=1 calls=2
   calls: sub_e85db0, sub_e85fb0
*/
void sub_e82f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe82f40ULL || rel >= 0xe831e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e831e0 size=32 callers=0 calls=0
*/
void sub_e831e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe831e0ULL || rel >= 0xe83200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83200 size=368 callers=1 calls=3
   calls: sub_14bacd0, sub_1500d30, sub_1500e30
*/
void sub_e83200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83200ULL || rel >= 0xe83370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83370 size=32 callers=0 calls=0
*/
void sub_e83370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83370ULL || rel >= 0xe83390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83390 size=16 callers=2 calls=0
*/
void sub_e83390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83390ULL || rel >= 0xe833a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e833a0 size=144 callers=177 calls=1
   calls: sub_14ab0c0
*/
void sub_e833a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe833a0ULL || rel >= 0xe83430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83430 size=32 callers=301 calls=1
   calls: sub_14ab0c0
*/
void sub_e83430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83430ULL || rel >= 0xe83450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83450 size=240 callers=12 calls=1
   calls: sub_e83540
*/
void sub_e83450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83450ULL || rel >= 0xe83540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83540 size=352 callers=24 calls=2
   calls: sub_14ab0c0, sub_e87010
*/
void sub_e83540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83540ULL || rel >= 0xe836a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e836a0 size=288 callers=8 calls=2
   calls: sub_1500c90, sub_e83540
*/
void sub_e836a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe836a0ULL || rel >= 0xe837c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e837c0 size=144 callers=64 calls=1
   calls: sub_14ab200
*/
void sub_e837c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe837c0ULL || rel >= 0xe83850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83850 size=32 callers=119 calls=1
   calls: sub_14ab200
*/
void sub_e83850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83850ULL || rel >= 0xe83870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83870 size=192 callers=55 calls=3
   calls: sub_14ab0c0, sub_14ab2b0, sub_14ab440
*/
void sub_e83870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83870ULL || rel >= 0xe83930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83930 size=96 callers=347 calls=3
   calls: sub_14ab0c0, sub_14ab2b0, sub_14ab440
*/
void sub_e83930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83930ULL || rel >= 0xe83990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83990 size=144 callers=6 calls=1
   calls: sub_14ab5c0
*/
void sub_e83990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83990ULL || rel >= 0xe83a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83a20 size=32 callers=32 calls=0
*/
void sub_e83a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83a20ULL || rel >= 0xe83a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83a40 size=128 callers=9 calls=0
*/
void sub_e83a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83a40ULL || rel >= 0xe83ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83ac0 size=96 callers=253 calls=1
   calls: sub_14abe00
*/
void sub_e83ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83ac0ULL || rel >= 0xe83b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83b20 size=16 callers=74 calls=0
*/
void sub_e83b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83b20ULL || rel >= 0xe83b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83b30 size=304 callers=1 calls=4
   calls: sub_14ab0c0, sub_14ab2b0, sub_14ab440, sub_7670a0
   ref: switch
   ref: anime_%s
   ref: anime_%s_%s
*/
void switch_fn_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83b30ULL || rel >= 0xe83c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83c60 size=272 callers=29 calls=2
   calls: sub_17919c0, sub_e83c60
*/
void sub_e83c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83c60ULL || rel >= 0xe83d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83d70 size=240 callers=41 calls=1
   calls: sub_e86780
*/
void sub_e83d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83d70ULL || rel >= 0xe83e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83e60 size=192 callers=235 calls=1
   calls: sub_e86780
*/
void sub_e83e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83e60ULL || rel >= 0xe83f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83f20 size=192 callers=47 calls=1
   calls: sub_e86780
*/
void sub_e83f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83f20ULL || rel >= 0xe83fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e83fe0 size=192 callers=41 calls=1
   calls: sub_e86780
*/
void sub_e83fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83fe0ULL || rel >= 0xe840a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e840a0 size=240 callers=176 calls=1
   calls: sub_e868f0
*/
void sub_e840a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe840a0ULL || rel >= 0xe84190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e84190 size=192 callers=57 calls=1
   calls: sub_e868f0
*/
void sub_e84190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe84190ULL || rel >= 0xe84250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e84250 size=192 callers=58 calls=1
   calls: sub_e86b50
*/
void sub_e84250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe84250ULL || rel >= 0xe84310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e84310 size=192 callers=100 calls=1
   calls: sub_e86db0
*/
void sub_e84310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe84310ULL || rel >= 0xe843d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e843d0 size=192 callers=8 calls=1
   calls: sub_e86db0
*/
void sub_e843d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe843d0ULL || rel >= 0xe84490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e84490 size=656 callers=0 calls=2
   calls: sub_e84720, sub_e87010
*/
void sub_e84490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe84490ULL || rel >= 0xe84720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e84720 size=480 callers=1 calls=0
*/
void sub_e84720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe84720ULL || rel >= 0xe84900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e84900 size=2368 callers=1 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5de540, sub_5e2180, sub_5e2500, sub_5e6970, sub_df90
*/
void sub_e84900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe84900ULL || rel >= 0xe85240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e85240 size=96 callers=0 calls=0
*/
void sub_e85240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe85240ULL || rel >= 0xe852a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e852a0 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_e852a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe852a0ULL || rel >= 0xe85350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e85350 size=64 callers=0 calls=2
   calls: sub_5e2750, sub_5e2830
*/
void sub_e85350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe85350ULL || rel >= 0xe85390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e85390 size=96 callers=0 calls=0
*/
void sub_e85390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe85390ULL || rel >= 0xe853f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e853f0 size=96 callers=0 calls=0
*/
void sub_e853f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe853f0ULL || rel >= 0xe85450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e85450 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_e85450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe85450ULL || rel >= 0xe85500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e85500 size=176 callers=0 calls=1
   calls: sub_5de540
*/
void sub_e85500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe85500ULL || rel >= 0xe855b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e855b0 size=96 callers=0 calls=0
*/
void sub_e855b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe855b0ULL || rel >= 0xe85610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e85610 size=96 callers=0 calls=0
*/
void sub_e85610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe85610ULL || rel >= 0xe85670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e85670 size=320 callers=0 calls=4
   calls: sub_601800, sub_687450, sub_e7e5a0, sub_e7e5c0
*/
void sub_e85670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe85670ULL || rel >= 0xe857b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e857b0 size=16 callers=0 calls=0
*/
void sub_e857b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe857b0ULL || rel >= 0xe857c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e857c0 size=16 callers=0 calls=0
*/
void sub_e857c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe857c0ULL || rel >= 0xe857d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e857d0 size=16 callers=0 calls=0
*/
void sub_e857d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe857d0ULL || rel >= 0xe857e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e857e0 size=240 callers=2 calls=1
   calls: sub_14b2b20
*/
void sub_e857e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe857e0ULL || rel >= 0xe858d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e858d0 size=896 callers=2 calls=1
   calls: sub_e85c50
*/
void sub_e858d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe858d0ULL || rel >= 0xe85c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e85c50 size=352 callers=1 calls=0
*/
void sub_e85c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe85c50ULL || rel >= 0xe85db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e85db0 size=512 callers=1 calls=0
*/
void sub_e85db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe85db0ULL || rel >= 0xe85fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e85fb0 size=384 callers=5 calls=3
   calls: sub_e85fb0, sub_e86130, sub_e86350
*/
void sub_e85fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe85fb0ULL || rel >= 0xe86130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86130 size=304 callers=4 calls=1
   calls: sub_e86260
*/
void sub_e86130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86130ULL || rel >= 0xe86260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86260 size=240 callers=29 calls=0
*/
void sub_e86260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86260ULL || rel >= 0xe86350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86350 size=320 callers=1 calls=0
*/
void sub_e86350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86350ULL || rel >= 0xe86490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86490 size=464 callers=0 calls=0
*/
void sub_e86490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86490ULL || rel >= 0xe86660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86660 size=32 callers=0 calls=0
*/
void sub_e86660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86660ULL || rel >= 0xe86680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86680 size=16 callers=0 calls=0
*/
void sub_e86680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86680ULL || rel >= 0xe86690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86690 size=16 callers=0 calls=0
*/
void sub_e86690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86690ULL || rel >= 0xe866a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e866a0 size=16 callers=0 calls=0
*/
void sub_e866a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe866a0ULL || rel >= 0xe866b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e866b0 size=16 callers=0 calls=0
*/
void sub_e866b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe866b0ULL || rel >= 0xe866c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e866c0 size=16 callers=0 calls=0
*/
void sub_e866c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe866c0ULL || rel >= 0xe866d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e866d0 size=16 callers=0 calls=0
*/
void sub_e866d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe866d0ULL || rel >= 0xe866e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e866e0 size=16 callers=0 calls=0
*/
void sub_e866e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe866e0ULL || rel >= 0xe866f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e866f0 size=96 callers=0 calls=2
   calls: sub_14ab2b0, sub_1500c40
*/
void sub_e866f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe866f0ULL || rel >= 0xe86750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86750 size=16 callers=0 calls=0
*/
void sub_e86750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86750ULL || rel >= 0xe86760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86760 size=16 callers=0 calls=0
*/
void sub_e86760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86760ULL || rel >= 0xe86770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86770 size=16 callers=0 calls=0
*/
void sub_e86770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86770ULL || rel >= 0xe86780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86780 size=368 callers=12 calls=2
   calls: sub_e86130, sub_e86780
*/
void sub_e86780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86780ULL || rel >= 0xe868f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e868f0 size=368 callers=6 calls=2
   calls: sub_e868f0, sub_e86a60
*/
void sub_e868f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe868f0ULL || rel >= 0xe86a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86a60 size=240 callers=1 calls=1
   calls: sub_e86260
*/
void sub_e86a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86a60ULL || rel >= 0xe86b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86b50 size=368 callers=4 calls=2
   calls: sub_e86b50, sub_e86cc0
*/
void sub_e86b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86b50ULL || rel >= 0xe86cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86cc0 size=240 callers=1 calls=1
   calls: sub_e86260
*/
void sub_e86cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86cc0ULL || rel >= 0xe86db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86db0 size=368 callers=7 calls=2
   calls: sub_e86db0, sub_e86f20
*/
void sub_e86db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86db0ULL || rel >= 0xe86f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e86f20 size=240 callers=1 calls=1
   calls: sub_e86260
*/
void sub_e86f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86f20ULL || rel >= 0xe87010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e87010 size=464 callers=2 calls=0
*/
void sub_e87010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe87010ULL || rel >= 0xe871e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e871e0 size=1056 callers=0 calls=0
*/
void sub_e871e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe871e0ULL || rel >= 0xe87600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e87600 size=1600 callers=24 calls=8
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_11067c0, sub_11069b0, sub_1106cd0, sub_689950
   ref: AudienceColArr
   ref: bg_table
   ref: enable_darkball
   ref: comm_timezone
   ref: is_waitcam_except
   ref: waza_sizen
   ref: is_stadium
   ref: mino_form
*/
void sound_attr(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe87600ULL || rel >= 0xe87c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e87c40 size=16 callers=1 calls=0
*/
void sub_e87c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe87c40ULL || rel >= 0xe87c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e87c50 size=80 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_e87c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe87c50ULL || rel >= 0xe87ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e87ca0 size=304 callers=1 calls=3
   calls: sub_5dd790, sub_5e2930, sub_e87dd0
   ref: bin/battle/data_table/background.prmb
*/
void background(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe87ca0ULL || rel >= 0xe87dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e87dd0 size=304 callers=2 calls=3
   calls: sub_5e6180, sub_d0c0, sub_e87f60
*/
void sub_e87dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe87dd0ULL || rel >= 0xe87f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e87f00 size=16 callers=1 calls=0
*/
void sub_e87f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe87f00ULL || rel >= 0xe87f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e87f10 size=80 callers=1 calls=2
   calls: sub_1106200, sub_1106f30
*/
void sub_e87f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe87f10ULL || rel >= 0xe87f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e87f60 size=128 callers=2 calls=1
   calls: sub_d0c0
*/
void sub_e87f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe87f60ULL || rel >= 0xe87fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e87fe0 size=880 callers=26 calls=6
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_11069b0, sub_1106cd0
   ref: winBgm
   ref: cmdSeqName
   ref: fadeType
   ref: battleEffectId
   ref: battleBgm
   ref: g_table
*/
void battleEffectId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe87fe0ULL || rel >= 0xe88350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e88350 size=16 callers=1 calls=0
*/
void sub_e88350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe88350ULL || rel >= 0xe88360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e88360 size=80 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_e88360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe88360ULL || rel >= 0xe883b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e883b0 size=304 callers=1 calls=3
   calls: sub_5dd790, sub_5e2930, sub_e884e0
   ref: bin/battle/data_table/battle_effect.prmb
*/
void battle_effect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe883b0ULL || rel >= 0xe884e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e884e0 size=304 callers=3 calls=3
   calls: sub_5e6180, sub_c4aad0, sub_d0c0
*/
void sub_e884e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe884e0ULL || rel >= 0xe88610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e88610 size=16 callers=1 calls=0
*/
void sub_e88610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe88610ULL || rel >= 0xe88620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e88620 size=80 callers=1 calls=2
   calls: sub_1106200, sub_1106f30
*/
void sub_e88620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe88620ULL || rel >= 0xe88670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e88670 size=224 callers=2 calls=1
   calls: sub_e88750
*/
void sub_e88670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe88670ULL || rel >= 0xe88750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e88750 size=672 callers=6 calls=1
   calls: sub_e893e0
*/
void sub_e88750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe88750ULL || rel >= 0xe889f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e889f0 size=1328 callers=6 calls=11
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2010, sub_5d76c0, sub_7c2e90, sub_8ce750, sub_8ce8c0, sub_8cea80, sub_8cf500, sub_e9ddd0
*/
void sub_e889f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe889f0ULL || rel >= 0xe88f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e88f20 size=96 callers=4 calls=0
*/
void sub_e88f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe88f20ULL || rel >= 0xe88f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e88f80 size=96 callers=0 calls=1
   calls: fileName
*/
void sub_e88f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe88f80ULL || rel >= 0xe88fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e88fe0 size=16 callers=2 calls=0
*/
void sub_e88fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe88fe0ULL || rel >= 0xe88ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e88ff0 size=16 callers=1 calls=0
*/
void sub_e88ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe88ff0ULL || rel >= 0xe89000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e89000 size=416 callers=3 calls=4
   calls: sub_7c5080, sub_7c5930, sub_8ce8c0, sub_8cef70
*/
void sub_e89000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89000ULL || rel >= 0xe891a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e891a0 size=160 callers=0 calls=1
   calls: sub_8ce8c0
*/
void sub_e891a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe891a0ULL || rel >= 0xe89240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e89240 size=160 callers=0 calls=1
   calls: sub_8ce8c0
*/
void sub_e89240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89240ULL || rel >= 0xe892e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e892e0 size=16 callers=0 calls=0
*/
void sub_e892e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe892e0ULL || rel >= 0xe892f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e892f0 size=112 callers=0 calls=0
*/
void sub_e892f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe892f0ULL || rel >= 0xe89360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e89360 size=16 callers=0 calls=0
*/
void sub_e89360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89360ULL || rel >= 0xe89370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e89370 size=112 callers=0 calls=0
*/
void sub_e89370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89370ULL || rel >= 0xe893e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e893e0 size=320 callers=5 calls=1
   calls: sub_1c0
*/
void sub_e893e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe893e0ULL || rel >= 0xe89520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e89520 size=32 callers=0 calls=0
*/
void sub_e89520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89520ULL || rel >= 0xe89540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e89540 size=16 callers=0 calls=0
*/
void sub_e89540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89540ULL || rel >= 0xe89550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e89550 size=32 callers=0 calls=0
*/
void sub_e89550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89550ULL || rel >= 0xe89570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e89570 size=32 callers=0 calls=0
*/
void sub_e89570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89570ULL || rel >= 0xe89590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e89590 size=608 callers=17 calls=0
*/
void sub_e89590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89590ULL || rel >= 0xe897f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e897f0 size=128 callers=0 calls=0
*/
void sub_e897f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe897f0ULL || rel >= 0xe89870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e89870 size=16 callers=1 calls=0
*/
void sub_e89870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89870ULL || rel >= 0xe89880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e89880 size=288 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_e89880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89880ULL || rel >= 0xe899a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e899a0 size=1184 callers=1 calls=7
   calls: sub_5dd790, sub_5e20, sub_5e2930, sub_948390, sub_96e0d0, sub_e89e40, sub_e89f70
   ref: bin/battle/data_table/poke_data.prmb
   ref: bin/battle/default_placement/battle_default_placement_data.bin
   ref: bin/battle/data_table/trainer_data.prmb
   ref: bin/battle/common/battle_common_field_parameter.bin
   ref: bin/battle/data_table/battle_talk.prmb
*/
void battle_default_placement_data(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe899a0ULL || rel >= 0xe89e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e89e40 size=304 callers=1 calls=3
   calls: sub_5e6180, sub_d0c0, sub_e8a100
*/
void sub_e89e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89e40ULL || rel >= 0xe89f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e89f70 size=304 callers=2 calls=3
   calls: sub_5e6180, sub_d0c0, sub_e8a180
*/
void sub_e89f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89f70ULL || rel >= 0xe8a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8a0a0 size=96 callers=1 calls=1
   calls: sub_5e26a0
*/
void sub_e8a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8a0a0ULL || rel >= 0xe8a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8a100 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_e8a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8a100ULL || rel >= 0xe8a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8a180 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_e8a180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8a180ULL || rel >= 0xe8a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8a200 size=368 callers=0 calls=0
*/
void sub_e8a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8a200ULL || rel >= 0xe8a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8a370 size=752 callers=0 calls=1
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
void skybox_01_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8a370ULL || rel >= 0xe8a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8a660 size=3456 callers=1 calls=18
   calls: sub_13118e0, sub_5cf8e0, sub_5cf8f0, sub_5cf9c0, sub_5cfad0, sub_65d700, sub_65f110, sub_67b990, sub_6917a0, sub_691ac0, sub_695210, sub_695ec0
   ... +6 more
*/
void sub_e8a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8a660ULL || rel >= 0xe8b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8b3e0 size=272 callers=0 calls=0
*/
void sub_e8b3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8b3e0ULL || rel >= 0xe8b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8b4f0 size=2784 callers=0 calls=10
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e2bc0, sub_65f110, sub_c4ff70, sub_e8bfd0, sub_e8c150, sub_e8c570, sub_e8c910, sub_e904a0
*/
void sub_e8b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8b4f0ULL || rel >= 0xe8bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8bfd0 size=384 callers=1 calls=2
   calls: sub_5e2bc0, sub_e904a0
*/
void sub_e8bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8bfd0ULL || rel >= 0xe8c150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8c150 size=1056 callers=1 calls=0
*/
void sub_e8c150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8c150ULL || rel >= 0xe8c570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8c570 size=928 callers=1 calls=1
   calls: sub_7c2da0
*/
void sub_e8c570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8c570ULL || rel >= 0xe8c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8c910 size=688 callers=2 calls=1
   calls: sub_5e2bc0
*/
void sub_e8c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8c910ULL || rel >= 0xe8cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8cbc0 size=16 callers=0 calls=0
*/
void sub_e8cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8cbc0ULL || rel >= 0xe8cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8cbd0 size=16 callers=0 calls=0
*/
void sub_e8cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8cbd0ULL || rel >= 0xe8cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8cbe0 size=16 callers=0 calls=0
*/
void sub_e8cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8cbe0ULL || rel >= 0xe8cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8cbf0 size=16 callers=1 calls=0
*/
void sub_e8cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8cbf0ULL || rel >= 0xe8cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8cc00 size=2032 callers=0 calls=34
   calls: effect_resource_table, sub_5cf9c0, sub_5d1b50, sub_65f1c0, sub_695210, sub_c386f0, sub_c539f0, sub_de8ae0, sub_e8e600, sub_e930b0, sub_e93680, sub_e94540
   ... +22 more
*/
void sub_e8cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8cc00ULL || rel >= 0xe8d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8d3f0 size=768 callers=4 calls=8
   calls: sub_1309a90, sub_1345ca0, sub_1345cb0, sub_1357400, sub_136b680, sub_136b6a0, sub_14bdd50, sub_e8d6f0
*/
void sub_e8d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8d3f0ULL || rel >= 0xe8d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8d6f0 size=3520 callers=5 calls=17
   calls: sub_135a1a0, sub_136c760, sub_136c7a0, sub_136c7e0, sub_136c830, sub_136c8a0, sub_136c910, sub_136c960, sub_137b970, sub_d62e30, sub_e591a0, sub_e59310
   ... +5 more
*/
void sub_e8d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8d6f0ULL || rel >= 0xe8e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8e4b0 size=336 callers=2 calls=8
   calls: T_save_00, sub_1309a90, sub_1357400, sub_13574b0, sub_13574f0, sub_14bdd50, sub_7c22f0, sub_7c2b90
*/
void sub_e8e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8e4b0ULL || rel >= 0xe8e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8e600 size=336 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_e8e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8e600ULL || rel >= 0xe8e750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8e750 size=3712 callers=1 calls=13
   calls: sub_5e2930, sub_5e2bc0, sub_c4f500, sub_c50870, sub_c508b0, sub_c50a60, sub_e42d30, sub_e43470, sub_e8f5d0, sub_e8f950, sub_e8fbb0, sub_e9b2f0
   ... +1 more
   ref: bin/field/param/effect/effect_resource_table.bin
   ref: bin/archive/field/resident/data_table.gfpak
   ref: bin/archive/field/resident/placement.gfpak
   ref: bin/archive/pokemon_data/pokecamp.gfpak
*/
void effect_resource_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8e750ULL || rel >= 0xe8f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8f5d0 size=656 callers=9 calls=5
   calls: sub_5dd790, sub_5e2930, sub_5e6180, sub_8c2f40, sub_c49fc0
*/
void sub_e8f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8f5d0ULL || rel >= 0xe8f860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8f860 size=240 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e8f860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8f860ULL || rel >= 0xe8f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8f950 size=608 callers=6 calls=6
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e6180, sub_c470e0, sub_c49fc0
*/
void sub_e8f950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8f950ULL || rel >= 0xe8fbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8fbb0 size=480 callers=1 calls=4
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_96bb80
*/
void sub_e8fbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8fbb0ULL || rel >= 0xe8fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e8fd90 size=1328 callers=1 calls=10
   calls: sub_1c0, sub_5e6770, sub_5e7b90, sub_5e7bb0, sub_e8f950, sub_e902c0, sub_e903b0, sub_e904a0, sub_e9c4e0, sub_e9c5f0
   ref: bin/field/param/terrain/
   ref: bin/field/param/placement/
*/
void unnamed_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8fd90ULL || rel >= 0xe902c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e902c0 size=240 callers=1 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_e902c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe902c0ULL || rel >= 0xe903b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e903b0 size=240 callers=1 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_e903b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe903b0ULL || rel >= 0xe904a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e904a0 size=320 callers=3 calls=1
   calls: sub_5e2bc0
*/
void sub_e904a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe904a0ULL || rel >= 0xe905e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e905e0 size=656 callers=5 calls=0
*/
void sub_e905e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe905e0ULL || rel >= 0xe90870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e90870 size=192 callers=10 calls=1
   calls: sub_e905e0
*/
void sub_e90870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe90870ULL || rel >= 0xe90930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e90930 size=192 callers=15 calls=1
   calls: sub_e905e0
*/
void sub_e90930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe90930ULL || rel >= 0xe909f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e909f0 size=720 callers=3 calls=3
   calls: sub_972c70, sub_e905e0, sub_e90cc0
*/
void sub_e909f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe909f0ULL || rel >= 0xe90cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e90cc0 size=224 callers=2 calls=4
   calls: sub_1c0, sub_5cfaf0, sub_5e6770, sub_5e7a30
*/
void sub_e90cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe90cc0ULL || rel >= 0xe90da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e90da0 size=832 callers=2 calls=4
   calls: sub_972c70, sub_c60ed0, sub_e905e0, sub_e90cc0
*/
void sub_e90da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe90da0ULL || rel >= 0xe910e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e910e0 size=32 callers=41 calls=0
*/
void sub_e910e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe910e0ULL || rel >= 0xe91100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e91100 size=32 callers=17 calls=0
*/
void sub_e91100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe91100ULL || rel >= 0xe91120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e91120 size=720 callers=4 calls=0
*/
void sub_e91120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe91120ULL || rel >= 0xe913f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e913f0 size=848 callers=2 calls=1
   calls: sub_136c720
*/
void sub_e913f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe913f0ULL || rel >= 0xe91740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e91740 size=832 callers=6 calls=8
   calls: sub_136c700, sub_136c740, sub_136c760, sub_136c780, sub_136c7a0, sub_136c810, sub_136c940, sub_ead0f0
*/
void sub_e91740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe91740ULL || rel >= 0xe91a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e91a80 size=800 callers=2 calls=1
   calls: sub_1364c30
*/
void sub_e91a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe91a80ULL || rel >= 0xe91da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e91da0 size=144 callers=2 calls=1
   calls: sub_1364c50
*/
void sub_e91da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe91da0ULL || rel >= 0xe91e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e91e30 size=144 callers=2 calls=2
   calls: sub_1305d30, sub_67be60
*/
void sub_e91e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe91e30ULL || rel >= 0xe91ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e91ec0 size=288 callers=1 calls=0
*/
void sub_e91ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe91ec0ULL || rel >= 0xe91fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e91fe0 size=496 callers=1 calls=0
*/
void sub_e91fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe91fe0ULL || rel >= 0xe921d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e921d0 size=912 callers=5 calls=1
   calls: sub_135a1a0
*/
void sub_e921d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe921d0ULL || rel >= 0xe92560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92560 size=48 callers=0 calls=1
   calls: sub_e8c910
*/
void sub_e92560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92560ULL || rel >= 0xe92590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92590 size=336 callers=1 calls=0
*/
void sub_e92590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92590ULL || rel >= 0xe926e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e926e0 size=160 callers=0 calls=1
   calls: sub_695fb0
*/
void sub_e926e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe926e0ULL || rel >= 0xe92780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92780 size=240 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e92780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92780ULL || rel >= 0xe92870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92870 size=160 callers=0 calls=2
   calls: sub_5e3870, sub_5e3aa0
*/
void sub_e92870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92870ULL || rel >= 0xe92910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92910 size=16 callers=0 calls=0
*/
void sub_e92910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92910ULL || rel >= 0xe92920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92920 size=16 callers=0 calls=0
*/
void sub_e92920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92920ULL || rel >= 0xe92930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92930 size=16 callers=0 calls=0
*/
void sub_e92930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92930ULL || rel >= 0xe92940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92940 size=192 callers=0 calls=2
   calls: sub_5e3870, sub_5e3aa0
*/
void sub_e92940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92940ULL || rel >= 0xe92a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92a00 size=16 callers=0 calls=0
*/
void sub_e92a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92a00ULL || rel >= 0xe92a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92a10 size=16 callers=0 calls=0
*/
void sub_e92a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92a10ULL || rel >= 0xe92a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92a20 size=16 callers=0 calls=0
*/
void sub_e92a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92a20ULL || rel >= 0xe92a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92a30 size=16 callers=0 calls=0
*/
void sub_e92a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92a30ULL || rel >= 0xe92a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92a40 size=16 callers=0 calls=0
*/
void sub_e92a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92a40ULL || rel >= 0xe92a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92a50 size=16 callers=0 calls=0
*/
void sub_e92a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92a50ULL || rel >= 0xe92a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92a60 size=32 callers=0 calls=0
*/
void sub_e92a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92a60ULL || rel >= 0xe92a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92a80 size=256 callers=1 calls=1
   calls: sub_e92b80
*/
void sub_e92a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92a80ULL || rel >= 0xe92b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92b80 size=576 callers=2 calls=2
   calls: sub_5cfad0, sub_65d700
*/
void sub_e92b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92b80ULL || rel >= 0xe92dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92dc0 size=480 callers=0 calls=0
*/
void sub_e92dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92dc0ULL || rel >= 0xe92fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92fa0 size=16 callers=0 calls=0
*/
void sub_e92fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92fa0ULL || rel >= 0xe92fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92fb0 size=16 callers=0 calls=0
*/
void sub_e92fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92fb0ULL || rel >= 0xe92fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e92fc0 size=112 callers=0 calls=0
*/
void sub_e92fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92fc0ULL || rel >= 0xe93030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93030 size=16 callers=0 calls=0
*/
void sub_e93030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93030ULL || rel >= 0xe93040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93040 size=112 callers=0 calls=0
*/
void sub_e93040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93040ULL || rel >= 0xe930b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e930b0 size=320 callers=1 calls=1
   calls: sub_e931f0
*/
void sub_e930b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe930b0ULL || rel >= 0xe931f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e931f0 size=464 callers=1 calls=0
*/
void sub_e931f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe931f0ULL || rel >= 0xe933c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e933c0 size=224 callers=0 calls=0
*/
void sub_e933c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe933c0ULL || rel >= 0xe934a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e934a0 size=224 callers=0 calls=0
*/
void sub_e934a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe934a0ULL || rel >= 0xe93580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93580 size=16 callers=0 calls=0
*/
void sub_e93580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93580ULL || rel >= 0xe93590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93590 size=112 callers=0 calls=0
*/
void sub_e93590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93590ULL || rel >= 0xe93600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93600 size=16 callers=0 calls=0
*/
void sub_e93600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93600ULL || rel >= 0xe93610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93610 size=112 callers=0 calls=0
*/
void sub_e93610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93610ULL || rel >= 0xe93680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93680 size=320 callers=1 calls=4
   calls: sub_e937c0, sub_e938f0, sub_e93c10, sub_e93d00
*/
void sub_e93680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93680ULL || rel >= 0xe937c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e937c0 size=304 callers=20 calls=0
*/
void sub_e937c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe937c0ULL || rel >= 0xe938f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e938f0 size=656 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_7c2da0
*/
void sub_e938f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe938f0ULL || rel >= 0xe93b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93b80 size=32 callers=0 calls=0
*/
void sub_e93b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93b80ULL || rel >= 0xe93ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93ba0 size=32 callers=0 calls=0
*/
void sub_e93ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93ba0ULL || rel >= 0xe93bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93bc0 size=16 callers=0 calls=0
*/
void sub_e93bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93bc0ULL || rel >= 0xe93bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93bd0 size=16 callers=0 calls=0
*/
void sub_e93bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93bd0ULL || rel >= 0xe93be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93be0 size=16 callers=0 calls=0
*/
void sub_e93be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93be0ULL || rel >= 0xe93bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93bf0 size=32 callers=0 calls=0
*/
void sub_e93bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93bf0ULL || rel >= 0xe93c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93c10 size=240 callers=1 calls=0
*/
void sub_e93c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93c10ULL || rel >= 0xe93d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93d00 size=656 callers=19 calls=3
   calls: sub_e93f90, sub_e940d0, sub_e943b0
*/
void sub_e93d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93d00ULL || rel >= 0xe93f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e93f90 size=320 callers=1 calls=0
*/
void sub_e93f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93f90ULL || rel >= 0xe940d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e940d0 size=736 callers=1 calls=0
*/
void sub_e940d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe940d0ULL || rel >= 0xe943b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e943b0 size=400 callers=1 calls=0
*/
void sub_e943b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe943b0ULL || rel >= 0xe94540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94540 size=320 callers=1 calls=4
   calls: sub_e937c0, sub_e93d00, sub_e94680, sub_e94980
*/
void sub_e94540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94540ULL || rel >= 0xe94680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94680 size=624 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_7c2da0
*/
void sub_e94680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94680ULL || rel >= 0xe948f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e948f0 size=32 callers=0 calls=0
*/
void sub_e948f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe948f0ULL || rel >= 0xe94910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94910 size=32 callers=0 calls=0
*/
void sub_e94910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94910ULL || rel >= 0xe94930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94930 size=16 callers=0 calls=0
*/
void sub_e94930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94930ULL || rel >= 0xe94940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94940 size=16 callers=0 calls=0
*/
void sub_e94940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94940ULL || rel >= 0xe94950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94950 size=16 callers=0 calls=0
*/
void sub_e94950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94950ULL || rel >= 0xe94960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94960 size=32 callers=0 calls=0
*/
void sub_e94960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94960ULL || rel >= 0xe94980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94980 size=208 callers=1 calls=0
*/
void sub_e94980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94980ULL || rel >= 0xe94a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94a50 size=304 callers=4 calls=4
   calls: sub_5d12d0, sub_5d1b50, sub_5d1ea0, sub_5ecb70
*/
void sub_e94a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94a50ULL || rel >= 0xe94b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94b80 size=16 callers=0 calls=0
*/
void sub_e94b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94b80ULL || rel >= 0xe94b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94b90 size=16 callers=0 calls=0
*/
void sub_e94b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94b90ULL || rel >= 0xe94ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94ba0 size=16 callers=0 calls=0
*/
void sub_e94ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94ba0ULL || rel >= 0xe94bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94bb0 size=16 callers=0 calls=0
*/
void sub_e94bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94bb0ULL || rel >= 0xe94bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94bc0 size=16 callers=0 calls=0
*/
void sub_e94bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94bc0ULL || rel >= 0xe94bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94bd0 size=16 callers=0 calls=0
*/
void sub_e94bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94bd0ULL || rel >= 0xe94be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94be0 size=16 callers=0 calls=0
*/
void sub_e94be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94be0ULL || rel >= 0xe94bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94bf0 size=16 callers=0 calls=0
*/
void sub_e94bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94bf0ULL || rel >= 0xe94c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94c00 size=16 callers=0 calls=0
*/
void sub_e94c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94c00ULL || rel >= 0xe94c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94c10 size=304 callers=0 calls=0
*/
void sub_e94c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94c10ULL || rel >= 0xe94d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94d40 size=304 callers=1 calls=3
   calls: sub_e937c0, sub_e93d00, sub_e94e70
*/
void sub_e94d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94d40ULL || rel >= 0xe94e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e94e70 size=528 callers=1 calls=1
   calls: sub_65d700
*/
void sub_e94e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94e70ULL || rel >= 0xe95080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e95080 size=144 callers=0 calls=0
*/
void sub_e95080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe95080ULL || rel >= 0xe95110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e95110 size=144 callers=0 calls=0
*/
void sub_e95110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe95110ULL || rel >= 0xe951a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e951a0 size=640 callers=0 calls=1
   calls: sub_e95420
*/
void sub_e951a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe951a0ULL || rel >= 0xe95420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e95420 size=320 callers=25 calls=1
   calls: sub_5e2bc0
*/
void sub_e95420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe95420ULL || rel >= 0xe95560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e95560 size=304 callers=1 calls=3
   calls: sub_e937c0, sub_e93d00, sub_e95690
*/
void sub_e95560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe95560ULL || rel >= 0xe95690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e95690 size=320 callers=1 calls=1
   calls: sub_e957d0
*/
void sub_e95690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe95690ULL || rel >= 0xe957d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e957d0 size=480 callers=1 calls=1
   calls: sub_65d700
*/
void sub_e957d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe957d0ULL || rel >= 0xe959b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e959b0 size=32 callers=0 calls=0
*/
void sub_e959b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe959b0ULL || rel >= 0xe959d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e959d0 size=32 callers=0 calls=0
*/
void sub_e959d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe959d0ULL || rel >= 0xe959f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e959f0 size=592 callers=0 calls=0
*/
void sub_e959f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe959f0ULL || rel >= 0xe95c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e95c40 size=336 callers=1 calls=3
   calls: sub_c669e0, sub_e937c0, sub_e93d00
*/
void sub_e95c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe95c40ULL || rel >= 0xe95d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e95d90 size=288 callers=1 calls=4
   calls: sub_e937c0, sub_e93d00, sub_e95eb0, sub_e96410
*/
void sub_e95d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe95d90ULL || rel >= 0xe95eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e95eb0 size=352 callers=1 calls=1
   calls: sub_e96210
*/
void sub_e95eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe95eb0ULL || rel >= 0xe96010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e96010 size=256 callers=0 calls=0
*/
void sub_e96010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe96010ULL || rel >= 0xe96110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e96110 size=256 callers=0 calls=0
*/
void sub_e96110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe96110ULL || rel >= 0xe96210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e96210 size=512 callers=1 calls=0
*/
void sub_e96210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe96210ULL || rel >= 0xe96410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e96410 size=256 callers=1 calls=0
*/
void sub_e96410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe96410ULL || rel >= 0xe96510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e96510 size=320 callers=1 calls=3
   calls: sub_ce0690, sub_e937c0, sub_e93d00
*/
void sub_e96510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe96510ULL || rel >= 0xe96650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e96650 size=336 callers=1 calls=3
   calls: sub_c7f680, sub_e937c0, sub_e93d00
*/
void sub_e96650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe96650ULL || rel >= 0xe967a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e967a0 size=336 callers=1 calls=3
   calls: sub_ca55f0, sub_e937c0, sub_e93d00
*/
void sub_e967a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe967a0ULL || rel >= 0xe968f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e968f0 size=320 callers=1 calls=3
   calls: sub_d60bb0, sub_e937c0, sub_e93d00
*/
void sub_e968f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe968f0ULL || rel >= 0xe96a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e96a30 size=336 callers=1 calls=3
   calls: sub_cb5460, sub_e937c0, sub_e93d00
*/
void sub_e96a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe96a30ULL || rel >= 0xe96b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e96b80 size=320 callers=1 calls=3
   calls: sub_cb7670, sub_e937c0, sub_e93d00
*/
void sub_e96b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe96b80ULL || rel >= 0xe96cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e96cc0 size=320 callers=1 calls=3
   calls: sub_e4aac0, sub_e937c0, sub_e93d00
*/
void sub_e96cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe96cc0ULL || rel >= 0xe96e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e96e00 size=320 callers=1 calls=3
   calls: sub_d60290, sub_e937c0, sub_e93d00
*/
void sub_e96e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe96e00ULL || rel >= 0xe96f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e96f40 size=320 callers=1 calls=3
   calls: ef_env_wr0101_nesuto_rare, sub_e937c0, sub_e93d00
*/
void sub_e96f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe96f40ULL || rel >= 0xe97080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e97080 size=336 callers=1 calls=3
   calls: sub_dedfa0, sub_e937c0, sub_e93d00
*/
void sub_e97080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97080ULL || rel >= 0xe971d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e971d0 size=224 callers=1 calls=1
   calls: sub_e36ec0
*/
void sub_e971d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe971d0ULL || rel >= 0xe972b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e972b0 size=224 callers=1 calls=1
   calls: sub_de89d0
*/
void sub_e972b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe972b0ULL || rel >= 0xe97390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e97390 size=224 callers=1 calls=1
   calls: weather_data
*/
void sub_e97390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97390ULL || rel >= 0xe97470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e97470 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_e97470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97470ULL || rel >= 0xe975d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e975d0 size=160 callers=0 calls=0
*/
void sub_e975d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe975d0ULL || rel >= 0xe97670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e97670 size=160 callers=0 calls=0
*/
void sub_e97670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97670ULL || rel >= 0xe97710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e97710 size=240 callers=0 calls=0
*/
void sub_e97710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97710ULL || rel >= 0xe97800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e97800 size=160 callers=0 calls=0
*/
void sub_e97800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97800ULL || rel >= 0xe978a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e978a0 size=160 callers=0 calls=0
*/
void sub_e978a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe978a0ULL || rel >= 0xe97940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e97940 size=16 callers=0 calls=0
*/
void sub_e97940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97940ULL || rel >= 0xe97950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e97950 size=16 callers=0 calls=0
*/
void sub_e97950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97950ULL || rel >= 0xe97960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e97960 size=160 callers=0 calls=0
*/
void sub_e97960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97960ULL || rel >= 0xe97a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e97a00 size=160 callers=0 calls=0
*/
void sub_e97a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97a00ULL || rel >= 0xe97aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e97aa0 size=560 callers=0 calls=7
   calls: sub_5e2bc0, sub_c4f500, sub_c50b30, sub_e8f950, sub_e97ce0, sub_e97f10, unnamed_37
   ref: bin/field/param/placement/template_data.bin
   ref: bin/field/param/placement/table/ZoneNameHashTable.tbl
   ref: bin/archive/field/resident/terrain.gfpak
   ref: bin/field/param/placement/table/AreaNameHashTable.tbl
*/
void template_data(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97aa0ULL || rel >= 0xe97cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e97cd0 size=16 callers=0 calls=0
*/
void sub_e97cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97cd0ULL || rel >= 0xe97ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e97ce0 size=560 callers=2 calls=8
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e3870, sub_5e3aa0, sub_5e6180, sub_8c2f40, sub_c49fc0
*/
void sub_e97ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97ce0ULL || rel >= 0xe97f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e97f10 size=608 callers=2 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_5e6180, sub_c470e0, sub_c49fc0, sub_e98170
*/
void sub_e97f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97f10ULL || rel >= 0xe98170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e98170 size=2304 callers=16 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5de540, sub_5e2500, sub_5e6970, sub_5e7640, sub_df90
*/
void sub_e98170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe98170ULL || rel >= 0xe98a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e98a70 size=32 callers=0 calls=0
*/
void sub_e98a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe98a70ULL || rel >= 0xe98a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e98a90 size=32 callers=0 calls=0
*/
void sub_e98a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe98a90ULL || rel >= 0xe98ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e98ab0 size=496 callers=0 calls=8
   calls: sub_e394b0, sub_e8f950, sub_e98cb0, sub_e98d90, sub_e98e70, sub_e98f50, sub_e99030, sub_ead3a0
   ref: bin/field/param/encount/encount_k.bin
   ref: bin/field/param/encount/encount_symbol_k.bin
*/
void encount_symbol_k(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe98ab0ULL || rel >= 0xe98ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e98ca0 size=16 callers=0 calls=0
*/
void sub_e98ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe98ca0ULL || rel >= 0xe98cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e98cb0 size=224 callers=1 calls=1
   calls: sub_e9cc20
*/
void sub_e98cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe98cb0ULL || rel >= 0xe98d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e98d90 size=224 callers=1 calls=1
   calls: sub_e38ec0
*/
void sub_e98d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe98d90ULL || rel >= 0xe98e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e98e70 size=224 callers=1 calls=1
   calls: sub_ce0210
*/
void sub_e98e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe98e70ULL || rel >= 0xe98f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e98f50 size=224 callers=1 calls=1
   calls: sub_de6ee0
*/
void sub_e98f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe98f50ULL || rel >= 0xe99030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e99030 size=224 callers=1 calls=1
   calls: sub_de4c80
*/
void sub_e99030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe99030ULL || rel >= 0xe99110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e99110 size=16 callers=0 calls=0
*/
void sub_e99110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe99110ULL || rel >= 0xe99120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e99120 size=16 callers=0 calls=0
*/
void sub_e99120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe99120ULL || rel >= 0xe99130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e99130 size=1552 callers=0 calls=14
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3980, sub_793480, sub_96a5a0, sub_b77710, sub_e99750, sub_e99820, sub_e99910, sub_e99a00
   ... +2 more
   ref: .gfbanm
   ref: .gfbmdl
   ref: .gfbanmcfg
*/
void gfbmdl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe99130ULL || rel >= 0xe99740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e99740 size=16 callers=0 calls=0
*/
void sub_e99740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe99740ULL || rel >= 0xe99750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e99750 size=208 callers=1 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_e99750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe99750ULL || rel >= 0xe99820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e99820 size=240 callers=2 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_e99820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe99820ULL || rel >= 0xe99910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e99910 size=240 callers=1 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_e99910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe99910ULL || rel >= 0xe99a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e99a00 size=1328 callers=2 calls=1
   calls: sub_e9ab60
*/
void sub_e99a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe99a00ULL || rel >= 0xe99f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e99f30 size=1328 callers=2 calls=1
   calls: sub_e9ab60
*/
void sub_e99f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe99f30ULL || rel >= 0xe9a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9a460 size=1328 callers=1 calls=1
   calls: sub_e9ab60
*/
void sub_e9a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9a460ULL || rel >= 0xe9a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9a990 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e9a990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9a990ULL || rel >= 0xe9aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9aa50 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e9aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9aa50ULL || rel >= 0xe9ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ab10 size=32 callers=0 calls=0
*/
void sub_e9ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ab10ULL || rel >= 0xe9ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ab30 size=48 callers=0 calls=0
*/
void sub_e9ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ab30ULL || rel >= 0xe9ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ab60 size=272 callers=10 calls=0
*/
void sub_e9ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ab60ULL || rel >= 0xe9ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ac70 size=704 callers=0 calls=0
*/
void sub_e9ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ac70ULL || rel >= 0xe9af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9af30 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e9af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9af30ULL || rel >= 0xe9aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9aff0 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e9aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9aff0ULL || rel >= 0xe9b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9b0b0 size=32 callers=0 calls=0
*/
void sub_e9b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9b0b0ULL || rel >= 0xe9b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9b0d0 size=48 callers=0 calls=0
*/
void sub_e9b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9b0d0ULL || rel >= 0xe9b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9b100 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e9b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9b100ULL || rel >= 0xe9b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9b1c0 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_e9b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9b1c0ULL || rel >= 0xe9b280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9b280 size=32 callers=0 calls=0
*/
void sub_e9b280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9b280ULL || rel >= 0xe9b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9b2a0 size=48 callers=0 calls=0
*/
void sub_e9b2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9b2a0ULL || rel >= 0xe9b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9b2d0 size=16 callers=0 calls=0
*/
void sub_e9b2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9b2d0ULL || rel >= 0xe9b2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9b2e0 size=16 callers=0 calls=0
*/
void sub_e9b2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9b2e0ULL || rel >= 0xe9b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9b2f0 size=336 callers=1 calls=3
   calls: sub_e937c0, sub_e93d00, sub_e9b440
*/
void sub_e9b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9b2f0ULL || rel >= 0xe9b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9b440 size=1888 callers=1 calls=7
   calls: sub_5e2bc0, sub_5e6180, sub_65d700, sub_c470e0, sub_c49fc0, sub_e9bd20, sub_e9be30
*/
void sub_e9b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9b440ULL || rel >= 0xe9bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9bba0 size=192 callers=0 calls=1
   calls: sub_e9c290
*/
void sub_e9bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9bba0ULL || rel >= 0xe9bc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9bc60 size=192 callers=0 calls=1
   calls: sub_e9c290
*/
void sub_e9bc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9bc60ULL || rel >= 0xe9bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9bd20 size=272 callers=1 calls=0
*/
void sub_e9bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9bd20ULL || rel >= 0xe9be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9be30 size=416 callers=1 calls=0
*/
void sub_e9be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9be30ULL || rel >= 0xe9bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9bfd0 size=704 callers=0 calls=0
*/
void sub_e9bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9bfd0ULL || rel >= 0xe9c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9c290 size=272 callers=2 calls=1
   calls: sub_5e2bc0
*/
void sub_e9c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9c290ULL || rel >= 0xe9c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9c3a0 size=320 callers=1 calls=3
   calls: sub_e42850, sub_e937c0, sub_e93d00
*/
void sub_e9c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9c3a0ULL || rel >= 0xe9c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9c4e0 size=272 callers=1 calls=0
*/
void sub_e9c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9c4e0ULL || rel >= 0xe9c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9c5f0 size=432 callers=1 calls=0
*/
void sub_e9c5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9c5f0ULL || rel >= 0xe9c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9c7a0 size=704 callers=0 calls=0
*/
void sub_e9c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9c7a0ULL || rel >= 0xe9ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ca60 size=448 callers=4 calls=0
*/
void sub_e9ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ca60ULL || rel >= 0xe9cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9cc20 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_e9cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9cc20ULL || rel >= 0xe9cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9cc60 size=16 callers=0 calls=0
*/
void sub_e9cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9cc60ULL || rel >= 0xe9cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9cc70 size=16 callers=0 calls=0
*/
void sub_e9cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9cc70ULL || rel >= 0xe9cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9cc80 size=16 callers=0 calls=0
*/
void sub_e9cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9cc80ULL || rel >= 0xe9cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9cc90 size=16 callers=0 calls=0
*/
void sub_e9cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9cc90ULL || rel >= 0xe9cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9cca0 size=16 callers=0 calls=0
*/
void sub_e9cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9cca0ULL || rel >= 0xe9ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ccb0 size=528 callers=2 calls=2
   calls: sub_ead670, sub_ead710
*/
void sub_e9ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ccb0ULL || rel >= 0xe9cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9cec0 size=48 callers=1 calls=1
   calls: sub_e9ccb0
*/
void sub_e9cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9cec0ULL || rel >= 0xe9cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9cef0 size=32 callers=1 calls=1
   calls: sub_e9ccb0
*/
void sub_e9cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9cef0ULL || rel >= 0xe9cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9cf10 size=480 callers=1 calls=2
   calls: sub_135a1a0, sub_ead710
*/
void sub_e9cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9cf10ULL || rel >= 0xe9d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d0f0 size=64 callers=0 calls=0
   ref: bin/field/param/schedule/schedule_weather.bin
*/
void schedule_weather(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d0f0ULL || rel >= 0xe9d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d130 size=224 callers=140 calls=3
   calls: sub_5d1b50, sub_5e2350, sub_e9d690
*/
void sub_e9d130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d130ULL || rel >= 0xe9d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d210 size=208 callers=1 calls=0
*/
void sub_e9d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d210ULL || rel >= 0xe9d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d2e0 size=208 callers=0 calls=0
*/
void sub_e9d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d2e0ULL || rel >= 0xe9d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d3b0 size=208 callers=0 calls=0
*/
void sub_e9d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d3b0ULL || rel >= 0xe9d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d480 size=16 callers=0 calls=0
*/
void sub_e9d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d480ULL || rel >= 0xe9d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d490 size=16 callers=0 calls=0
*/
void sub_e9d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d490ULL || rel >= 0xe9d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d4a0 size=16 callers=0 calls=0
*/
void sub_e9d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d4a0ULL || rel >= 0xe9d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d4b0 size=208 callers=1 calls=0
*/
void sub_e9d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d4b0ULL || rel >= 0xe9d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d580 size=240 callers=0 calls=0
*/
void sub_e9d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d580ULL || rel >= 0xe9d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d670 size=16 callers=0 calls=0
*/
void sub_e9d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d670ULL || rel >= 0xe9d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d680 size=16 callers=0 calls=0
*/
void sub_e9d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d680ULL || rel >= 0xe9d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d690 size=304 callers=2 calls=4
   calls: sub_5d12d0, sub_5d1b50, sub_5d1ea0, sub_5ecb70
*/
void sub_e9d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d690ULL || rel >= 0xe9d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d7c0 size=16 callers=0 calls=0
*/
void sub_e9d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d7c0ULL || rel >= 0xe9d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d7d0 size=16 callers=0 calls=0
*/
void sub_e9d7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d7d0ULL || rel >= 0xe9d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d7e0 size=16 callers=0 calls=0
*/
void sub_e9d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d7e0ULL || rel >= 0xe9d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d7f0 size=16 callers=0 calls=0
*/
void sub_e9d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d7f0ULL || rel >= 0xe9d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d800 size=16 callers=0 calls=0
*/
void sub_e9d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d800ULL || rel >= 0xe9d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d810 size=16 callers=0 calls=0
*/
void sub_e9d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d810ULL || rel >= 0xe9d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d820 size=16 callers=0 calls=0
*/
void sub_e9d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d820ULL || rel >= 0xe9d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d830 size=16 callers=0 calls=0
*/
void sub_e9d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d830ULL || rel >= 0xe9d840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d840 size=304 callers=0 calls=0
*/
void sub_e9d840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d840ULL || rel >= 0xe9d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9d970 size=256 callers=1 calls=4
   calls: sub_5d1b50, sub_5e2350, sub_e9e460, sub_e9ea90
*/
void sub_e9d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d970ULL || rel >= 0xe9da70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9da70 size=208 callers=7 calls=0
*/
void sub_e9da70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9da70ULL || rel >= 0xe9db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9db40 size=208 callers=98 calls=0
*/
void sub_e9db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9db40ULL || rel >= 0xe9dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9dc10 size=416 callers=0 calls=1
   calls: sub_e9d4b0
*/
void sub_e9dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9dc10ULL || rel >= 0xe9ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ddb0 size=16 callers=12 calls=0
*/
void sub_e9ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ddb0ULL || rel >= 0xe9ddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ddc0 size=16 callers=1 calls=0
*/
void sub_e9ddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ddc0ULL || rel >= 0xe9ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ddd0 size=160 callers=6 calls=0
*/
void sub_e9ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ddd0ULL || rel >= 0xe9de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9de70 size=208 callers=0 calls=0
*/
void sub_e9de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9de70ULL || rel >= 0xe9df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9df40 size=208 callers=0 calls=0
*/
void sub_e9df40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9df40ULL || rel >= 0xe9e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e010 size=240 callers=0 calls=0
*/
void sub_e9e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e010ULL || rel >= 0xe9e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e100 size=208 callers=0 calls=0
*/
void sub_e9e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e100ULL || rel >= 0xe9e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e1d0 size=208 callers=0 calls=0
*/
void sub_e9e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e1d0ULL || rel >= 0xe9e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e2a0 size=16 callers=0 calls=0
*/
void sub_e9e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e2a0ULL || rel >= 0xe9e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e2b0 size=16 callers=0 calls=0
*/
void sub_e9e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e2b0ULL || rel >= 0xe9e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e2c0 size=208 callers=0 calls=0
*/
void sub_e9e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e2c0ULL || rel >= 0xe9e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e390 size=208 callers=0 calls=0
*/
void sub_e9e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e390ULL || rel >= 0xe9e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e460 size=320 callers=1 calls=4
   calls: sub_5d12d0, sub_5d1b50, sub_5d1ea0, sub_5ecb70
*/
void sub_e9e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e460ULL || rel >= 0xe9e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e5a0 size=96 callers=0 calls=0
*/
void sub_e9e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e5a0ULL || rel >= 0xe9e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e600 size=176 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_e9e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e600ULL || rel >= 0xe9e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e6b0 size=16 callers=0 calls=0
*/
void sub_e9e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e6b0ULL || rel >= 0xe9e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e6c0 size=96 callers=0 calls=0
*/
void sub_e9e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e6c0ULL || rel >= 0xe9e720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e720 size=96 callers=0 calls=0
*/
void sub_e9e720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e720ULL || rel >= 0xe9e780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

