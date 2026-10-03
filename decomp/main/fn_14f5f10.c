/* main functions 014f5f10..01514670 (179 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 014f5f10 size=32 callers=21 calls=0
*/
void sub_14f5f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5f10ULL || rel >= 0x14f5f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5f30 size=128 callers=5 calls=0
*/
void sub_14f5f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5f30ULL || rel >= 0x14f5fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5fb0 size=64 callers=12 calls=0
*/
void sub_14f5fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5fb0ULL || rel >= 0x14f5ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5ff0 size=208 callers=5 calls=0
*/
void sub_14f5ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5ff0ULL || rel >= 0x14f60c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f60c0 size=608 callers=1 calls=1
   calls: sub_14f5c70
*/
void sub_14f60c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f60c0ULL || rel >= 0x14f6320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f6320 size=48 callers=2 calls=0
*/
void sub_14f6320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f6320ULL || rel >= 0x14f6350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f6350 size=64 callers=1 calls=0
*/
void sub_14f6350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f6350ULL || rel >= 0x14f6390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f6390 size=32 callers=1 calls=0
*/
void sub_14f6390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f6390ULL || rel >= 0x14f63b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f63b0 size=16 callers=0 calls=0
*/
void sub_14f63b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f63b0ULL || rel >= 0x14f63c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f63c0 size=16 callers=0 calls=0
*/
void sub_14f63c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f63c0ULL || rel >= 0x14f63d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f63d0 size=16 callers=0 calls=0
*/
void sub_14f63d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f63d0ULL || rel >= 0x14f63e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f63e0 size=16 callers=0 calls=0
*/
void sub_14f63e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f63e0ULL || rel >= 0x14f63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f63f0 size=304 callers=1 calls=0
*/
void sub_14f63f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f63f0ULL || rel >= 0x14f6520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f6520 size=544 callers=1 calls=0
*/
void sub_14f6520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f6520ULL || rel >= 0x14f6740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f6740 size=80 callers=1 calls=1
   calls: sub_14f6980
*/
void sub_14f6740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f6740ULL || rel >= 0x14f6790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f6790 size=496 callers=1 calls=0
*/
void sub_14f6790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f6790ULL || rel >= 0x14f6980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f6980 size=592 callers=1 calls=0
*/
void sub_14f6980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f6980ULL || rel >= 0x14f6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f6bd0 size=224 callers=0 calls=0
*/
void sub_14f6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f6bd0ULL || rel >= 0x14f6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f6cb0 size=224 callers=0 calls=0
*/
void sub_14f6cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f6cb0ULL || rel >= 0x14f6d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f6d90 size=240 callers=0 calls=0
*/
void sub_14f6d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f6d90ULL || rel >= 0x14f6e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f6e80 size=240 callers=0 calls=0
*/
void sub_14f6e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f6e80ULL || rel >= 0x14f6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f6f70 size=240 callers=0 calls=0
*/
void sub_14f6f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f6f70ULL || rel >= 0x14f7060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7060 size=240 callers=0 calls=0
*/
void sub_14f7060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7060ULL || rel >= 0x14f7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7150 size=240 callers=0 calls=0
*/
void sub_14f7150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7150ULL || rel >= 0x14f7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7240 size=240 callers=0 calls=0
*/
void sub_14f7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7240ULL || rel >= 0x14f7330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7330 size=240 callers=0 calls=0
*/
void sub_14f7330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7330ULL || rel >= 0x14f7420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7420 size=240 callers=0 calls=0
*/
void sub_14f7420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7420ULL || rel >= 0x14f7510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7510 size=240 callers=0 calls=0
*/
void sub_14f7510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7510ULL || rel >= 0x14f7600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7600 size=240 callers=0 calls=0
*/
void sub_14f7600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7600ULL || rel >= 0x14f76f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f76f0 size=16 callers=1 calls=0
*/
void sub_14f76f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f76f0ULL || rel >= 0x14f7700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7700 size=32 callers=2 calls=0
*/
void sub_14f7700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7700ULL || rel >= 0x14f7720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7720 size=336 callers=1 calls=1
   calls: sub_65d700
*/
void sub_14f7720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7720ULL || rel >= 0x14f7870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7870 size=240 callers=1 calls=1
   calls: sub_14f7ad0
*/
void sub_14f7870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7870ULL || rel >= 0x14f7960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7960 size=80 callers=1 calls=0
*/
void sub_14f7960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7960ULL || rel >= 0x14f79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f79b0 size=112 callers=33 calls=0
*/
void sub_14f79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f79b0ULL || rel >= 0x14f7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7a20 size=48 callers=1 calls=0
*/
void sub_14f7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7a20ULL || rel >= 0x14f7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7a50 size=96 callers=1 calls=0
*/
void sub_14f7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7a50ULL || rel >= 0x14f7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7ab0 size=32 callers=1 calls=0
*/
void sub_14f7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7ab0ULL || rel >= 0x14f7ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7ad0 size=496 callers=1 calls=0
*/
void sub_14f7ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7ad0ULL || rel >= 0x14f7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7cc0 size=144 callers=1 calls=1
   calls: sub_14f87d0
*/
void sub_14f7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7cc0ULL || rel >= 0x14f7d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7d50 size=240 callers=3 calls=0
*/
void sub_14f7d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7d50ULL || rel >= 0x14f7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7e40 size=16 callers=6 calls=0
*/
void sub_14f7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7e40ULL || rel >= 0x14f7e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7e50 size=272 callers=5 calls=0
*/
void sub_14f7e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7e50ULL || rel >= 0x14f7f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7f60 size=128 callers=1 calls=0
*/
void sub_14f7f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7f60ULL || rel >= 0x14f7fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f7fe0 size=80 callers=1 calls=0
*/
void sub_14f7fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f7fe0ULL || rel >= 0x14f8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8030 size=16 callers=1 calls=0
*/
void sub_14f8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8030ULL || rel >= 0x14f8040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8040 size=304 callers=3 calls=2
   calls: sub_14f8840, sub_14f8860
*/
void sub_14f8040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8040ULL || rel >= 0x14f8170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8170 size=432 callers=0 calls=1
   calls: sub_14f8a20
*/
void sub_14f8170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8170ULL || rel >= 0x14f8320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8320 size=624 callers=0 calls=2
   calls: sub_14f8840, sub_14f8860
*/
void sub_14f8320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8320ULL || rel >= 0x14f8590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8590 size=448 callers=0 calls=0
*/
void sub_14f8590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8590ULL || rel >= 0x14f8750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8750 size=48 callers=0 calls=0
*/
void sub_14f8750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8750ULL || rel >= 0x14f8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8780 size=80 callers=0 calls=0
*/
void sub_14f8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8780ULL || rel >= 0x14f87d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f87d0 size=112 callers=1 calls=0
*/
void sub_14f87d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f87d0ULL || rel >= 0x14f8840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8840 size=32 callers=2 calls=0
*/
void sub_14f8840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8840ULL || rel >= 0x14f8860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8860 size=448 callers=4 calls=0
*/
void sub_14f8860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8860ULL || rel >= 0x14f8a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8a20 size=416 callers=1 calls=0
*/
void sub_14f8a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8a20ULL || rel >= 0x14f8bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8bc0 size=16 callers=0 calls=0
*/
void sub_14f8bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8bc0ULL || rel >= 0x14f8bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8bd0 size=16 callers=0 calls=0
*/
void sub_14f8bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8bd0ULL || rel >= 0x14f8be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8be0 size=64 callers=0 calls=0
*/
void sub_14f8be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8be0ULL || rel >= 0x14f8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8c20 size=48 callers=0 calls=0
*/
void sub_14f8c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8c20ULL || rel >= 0x14f8c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8c50 size=48 callers=0 calls=0
*/
void sub_14f8c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8c50ULL || rel >= 0x14f8c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8c80 size=64 callers=0 calls=0
*/
void sub_14f8c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8c80ULL || rel >= 0x14f8cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8cc0 size=528 callers=0 calls=0
*/
void sub_14f8cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8cc0ULL || rel >= 0x14f8ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8ed0 size=80 callers=0 calls=0
*/
void sub_14f8ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8ed0ULL || rel >= 0x14f8f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8f20 size=16 callers=0 calls=0
*/
void sub_14f8f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8f20ULL || rel >= 0x14f8f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8f30 size=16 callers=0 calls=0
*/
void sub_14f8f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8f30ULL || rel >= 0x14f8f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8f40 size=32 callers=0 calls=0
*/
void sub_14f8f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8f40ULL || rel >= 0x14f8f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8f60 size=80 callers=0 calls=0
*/
void sub_14f8f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8f60ULL || rel >= 0x14f8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f8fb0 size=80 callers=0 calls=0
*/
void sub_14f8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8fb0ULL || rel >= 0x14f9000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f9000 size=16 callers=0 calls=0
*/
void sub_14f9000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f9000ULL || rel >= 0x14f9010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f9010 size=16 callers=0 calls=0
*/
void sub_14f9010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f9010ULL || rel >= 0x14f9020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f9020 size=80 callers=0 calls=0
*/
void sub_14f9020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f9020ULL || rel >= 0x14f9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f9070 size=80 callers=0 calls=0
*/
void sub_14f9070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f9070ULL || rel >= 0x14f90c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f90c0 size=304 callers=0 calls=0
*/
void sub_14f90c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f90c0ULL || rel >= 0x14f91f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f91f0 size=4256 callers=1 calls=12
   calls: sub_14fa290, sub_14fa400, sub_14fa600, sub_14fa770, sub_14fa8e0, sub_14faa60, sub_14fabe0, sub_14fad50, sub_14faec0, sub_14fb030, sub_15009f0, sub_1500cb0
*/
void sub_14f91f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f91f0ULL || rel >= 0x14fa290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fa290 size=368 callers=1 calls=0
*/
void sub_14fa290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fa290ULL || rel >= 0x14fa400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fa400 size=512 callers=9 calls=0
*/
void sub_14fa400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fa400ULL || rel >= 0x14fa600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fa600 size=368 callers=1 calls=0
*/
void sub_14fa600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fa600ULL || rel >= 0x14fa770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fa770 size=368 callers=1 calls=0
*/
void sub_14fa770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fa770ULL || rel >= 0x14fa8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fa8e0 size=384 callers=1 calls=0
*/
void sub_14fa8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fa8e0ULL || rel >= 0x14faa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014faa60 size=384 callers=1 calls=0
*/
void sub_14faa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14faa60ULL || rel >= 0x14fabe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fabe0 size=368 callers=1 calls=0
*/
void sub_14fabe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fabe0ULL || rel >= 0x14fad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fad50 size=368 callers=1 calls=0
*/
void sub_14fad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fad50ULL || rel >= 0x14faec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014faec0 size=368 callers=1 calls=0
*/
void sub_14faec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14faec0ULL || rel >= 0x14fb030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb030 size=384 callers=1 calls=0
*/
void sub_14fb030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb030ULL || rel >= 0x14fb1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb1b0 size=640 callers=0 calls=1
   calls: sub_14fb460
*/
void sub_14fb1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb1b0ULL || rel >= 0x14fb430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb430 size=16 callers=0 calls=0
*/
void sub_14fb430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb430ULL || rel >= 0x14fb440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb440 size=16 callers=0 calls=0
*/
void sub_14fb440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb440ULL || rel >= 0x14fb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb450 size=16 callers=0 calls=0
*/
void sub_14fb450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb450ULL || rel >= 0x14fb460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb460 size=224 callers=2 calls=1
   calls: sub_14fb540
*/
void sub_14fb460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb460ULL || rel >= 0x14fb540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb540 size=144 callers=2 calls=1
   calls: sub_14e2360
*/
void sub_14fb540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb540ULL || rel >= 0x14fb5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb5d0 size=32 callers=0 calls=0
*/
void sub_14fb5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb5d0ULL || rel >= 0x14fb5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb5f0 size=32 callers=0 calls=0
*/
void sub_14fb5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb5f0ULL || rel >= 0x14fb610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb610 size=112 callers=0 calls=0
*/
void sub_14fb610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb610ULL || rel >= 0x14fb680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb680 size=112 callers=0 calls=0
*/
void sub_14fb680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb680ULL || rel >= 0x14fb6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb6f0 size=176 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14fb6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb6f0ULL || rel >= 0x14fb7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb7a0 size=112 callers=0 calls=0
*/
void sub_14fb7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb7a0ULL || rel >= 0x14fb810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb810 size=112 callers=0 calls=0
*/
void sub_14fb810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb810ULL || rel >= 0x14fb880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb880 size=176 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14fb880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb880ULL || rel >= 0x14fb930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb930 size=176 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14fb930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb930ULL || rel >= 0x14fb9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fb9e0 size=112 callers=0 calls=0
*/
void sub_14fb9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fb9e0ULL || rel >= 0x14fba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fba50 size=112 callers=0 calls=0
*/
void sub_14fba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fba50ULL || rel >= 0x14fbac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fbac0 size=416 callers=0 calls=1
   calls: sub_14fbc90
*/
void sub_14fbac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fbac0ULL || rel >= 0x14fbc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fbc60 size=16 callers=0 calls=0
*/
void sub_14fbc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fbc60ULL || rel >= 0x14fbc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fbc70 size=16 callers=0 calls=0
*/
void sub_14fbc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fbc70ULL || rel >= 0x14fbc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fbc80 size=16 callers=0 calls=0
*/
void sub_14fbc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fbc80ULL || rel >= 0x14fbc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fbc90 size=288 callers=2 calls=1
   calls: sub_14e19a0
*/
void sub_14fbc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fbc90ULL || rel >= 0x14fbdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fbdb0 size=112 callers=0 calls=0
*/
void sub_14fbdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fbdb0ULL || rel >= 0x14fbe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fbe20 size=128 callers=0 calls=0
*/
void sub_14fbe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fbe20ULL || rel >= 0x14fbea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fbea0 size=240 callers=0 calls=0
*/
void sub_14fbea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fbea0ULL || rel >= 0x14fbf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fbf90 size=80 callers=0 calls=0
*/
void sub_14fbf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fbf90ULL || rel >= 0x14fbfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fbfe0 size=16 callers=0 calls=0
*/
void sub_14fbfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fbfe0ULL || rel >= 0x14fbff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fbff0 size=112 callers=0 calls=0
*/
void sub_14fbff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fbff0ULL || rel >= 0x14fc060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc060 size=16 callers=0 calls=0
*/
void sub_14fc060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc060ULL || rel >= 0x14fc070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc070 size=16 callers=0 calls=0
*/
void sub_14fc070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc070ULL || rel >= 0x14fc080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc080 size=16 callers=0 calls=0
*/
void sub_14fc080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc080ULL || rel >= 0x14fc090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc090 size=16 callers=0 calls=0
*/
void sub_14fc090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc090ULL || rel >= 0x14fc0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc0a0 size=288 callers=0 calls=0
*/
void sub_14fc0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc0a0ULL || rel >= 0x14fc1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc1c0 size=64 callers=0 calls=0
*/
void sub_14fc1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc1c0ULL || rel >= 0x14fc200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc200 size=240 callers=0 calls=0
*/
void sub_14fc200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc200ULL || rel >= 0x14fc2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc2f0 size=240 callers=0 calls=0
*/
void sub_14fc2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc2f0ULL || rel >= 0x14fc3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc3e0 size=112 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14fc3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc3e0ULL || rel >= 0x14fc450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc450 size=240 callers=0 calls=0
*/
void sub_14fc450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc450ULL || rel >= 0x14fc540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc540 size=240 callers=0 calls=0
*/
void sub_14fc540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc540ULL || rel >= 0x14fc630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc630 size=112 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14fc630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc630ULL || rel >= 0x14fc6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc6a0 size=112 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14fc6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc6a0ULL || rel >= 0x14fc710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc710 size=240 callers=0 calls=0
*/
void sub_14fc710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc710ULL || rel >= 0x14fc800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc800 size=240 callers=0 calls=0
*/
void sub_14fc800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc800ULL || rel >= 0x14fc8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fc8f0 size=1152 callers=0 calls=6
   calls: sub_14e6170, sub_14e61b0, sub_14e61e0, sub_14e64b0, sub_14fcda0, sub_f0ce40
*/
void sub_14fc8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fc8f0ULL || rel >= 0x14fcd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fcd70 size=16 callers=0 calls=0
*/
void sub_14fcd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fcd70ULL || rel >= 0x14fcd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fcd80 size=16 callers=0 calls=0
*/
void sub_14fcd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fcd80ULL || rel >= 0x14fcd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fcd90 size=16 callers=0 calls=0
*/
void sub_14fcd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fcd90ULL || rel >= 0x14fcda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fcda0 size=224 callers=1 calls=1
   calls: Play_UI_common_select
*/
void sub_14fcda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fcda0ULL || rel >= 0x14fce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fce80 size=1840 callers=0 calls=1
   calls: sub_14fd5e0
*/
void sub_14fce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fce80ULL || rel >= 0x14fd5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fd5b0 size=16 callers=0 calls=0
*/
void sub_14fd5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fd5b0ULL || rel >= 0x14fd5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fd5c0 size=16 callers=0 calls=0
*/
void sub_14fd5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fd5c0ULL || rel >= 0x14fd5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fd5d0 size=16 callers=0 calls=0
*/
void sub_14fd5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fd5d0ULL || rel >= 0x14fd5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fd5e0 size=224 callers=2 calls=1
   calls: sub_14ea030
*/
void sub_14fd5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fd5e0ULL || rel >= 0x14fd6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fd6c0 size=1696 callers=0 calls=1
   calls: sub_e3f0f0
*/
void sub_14fd6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fd6c0ULL || rel >= 0x14fdd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fdd60 size=16 callers=0 calls=0
*/
void sub_14fdd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fdd60ULL || rel >= 0x14fdd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fdd70 size=16 callers=0 calls=0
*/
void sub_14fdd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fdd70ULL || rel >= 0x14fdd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fdd80 size=16 callers=0 calls=0
*/
void sub_14fdd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fdd80ULL || rel >= 0x14fdd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fdd90 size=1888 callers=0 calls=6
   calls: sub_14eda60, sub_14ee7b0, sub_14ee7c0, sub_14ee7d0, sub_14fe520, sub_f0ce40
*/
void sub_14fdd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fdd90ULL || rel >= 0x14fe4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fe4f0 size=16 callers=0 calls=0
*/
void sub_14fe4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fe4f0ULL || rel >= 0x14fe500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fe500 size=16 callers=0 calls=0
*/
void sub_14fe500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fe500ULL || rel >= 0x14fe510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fe510 size=16 callers=0 calls=0
*/
void sub_14fe510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fe510ULL || rel >= 0x14fe520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fe520 size=224 callers=1 calls=1
   calls: sub_14ecc50
*/
void sub_14fe520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fe520ULL || rel >= 0x14fe600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fe600 size=656 callers=0 calls=1
   calls: sub_14fe8c0
*/
void sub_14fe600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fe600ULL || rel >= 0x14fe890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fe890 size=16 callers=0 calls=0
*/
void sub_14fe890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fe890ULL || rel >= 0x14fe8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fe8a0 size=16 callers=0 calls=0
*/
void sub_14fe8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fe8a0ULL || rel >= 0x14fe8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fe8b0 size=16 callers=0 calls=0
*/
void sub_14fe8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fe8b0ULL || rel >= 0x14fe8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fe8c0 size=224 callers=2 calls=1
   calls: sub_14fe9a0
*/
void sub_14fe8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fe8c0ULL || rel >= 0x14fe9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fe9a0 size=224 callers=2 calls=1
   calls: sub_14e2360
*/
void sub_14fe9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fe9a0ULL || rel >= 0x14fea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fea80 size=208 callers=0 calls=0
*/
void sub_14fea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fea80ULL || rel >= 0x14feb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014feb50 size=560 callers=0 calls=2
   calls: sub_14e1a60, sub_14e1b60
*/
void sub_14feb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14feb50ULL || rel >= 0x14fed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fed80 size=96 callers=0 calls=0
*/
void sub_14fed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fed80ULL || rel >= 0x14fede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fede0 size=96 callers=0 calls=0
*/
void sub_14fede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fede0ULL || rel >= 0x14fee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fee40 size=176 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14fee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fee40ULL || rel >= 0x14feef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014feef0 size=96 callers=0 calls=0
*/
void sub_14feef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14feef0ULL || rel >= 0x14fef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fef50 size=96 callers=0 calls=0
*/
void sub_14fef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fef50ULL || rel >= 0x14fefb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014fefb0 size=176 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14fefb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14fefb0ULL || rel >= 0x14ff060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff060 size=176 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14ff060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff060ULL || rel >= 0x14ff110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff110 size=96 callers=0 calls=0
*/
void sub_14ff110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff110ULL || rel >= 0x14ff170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff170 size=96 callers=0 calls=0
*/
void sub_14ff170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff170ULL || rel >= 0x14ff1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff1d0 size=752 callers=0 calls=2
   calls: sub_14ff4f0, sub_14ff650
*/
void sub_14ff1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff1d0ULL || rel >= 0x14ff4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff4c0 size=16 callers=0 calls=0
*/
void sub_14ff4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff4c0ULL || rel >= 0x14ff4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff4d0 size=16 callers=0 calls=0
*/
void sub_14ff4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff4d0ULL || rel >= 0x14ff4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff4e0 size=16 callers=0 calls=0
*/
void sub_14ff4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff4e0ULL || rel >= 0x14ff4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff4f0 size=224 callers=2 calls=1
   calls: sub_14ff5d0
*/
void sub_14ff4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff4f0ULL || rel >= 0x14ff5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff5d0 size=96 callers=2 calls=1
   calls: sub_14e2360
*/
void sub_14ff5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff5d0ULL || rel >= 0x14ff630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff630 size=32 callers=1 calls=0
*/
void sub_14ff630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff630ULL || rel >= 0x14ff650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff650 size=64 callers=1 calls=0
*/
void sub_14ff650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff650ULL || rel >= 0x14ff690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff690 size=32 callers=0 calls=0
*/
void sub_14ff690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff690ULL || rel >= 0x14ff6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff6b0 size=208 callers=0 calls=0
*/
void sub_14ff6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff6b0ULL || rel >= 0x14ff780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff780 size=96 callers=0 calls=0
*/
void sub_14ff780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff780ULL || rel >= 0x14ff7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff7e0 size=96 callers=0 calls=0
*/
void sub_14ff7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff7e0ULL || rel >= 0x14ff840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff840 size=176 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14ff840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff840ULL || rel >= 0x14ff8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff8f0 size=96 callers=0 calls=0
*/
void sub_14ff8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff8f0ULL || rel >= 0x14ff950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff950 size=96 callers=0 calls=0
*/
void sub_14ff950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff950ULL || rel >= 0x14ff9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ff9b0 size=176 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14ff9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ff9b0ULL || rel >= 0x14ffa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ffa60 size=176 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14ffa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ffa60ULL || rel >= 0x14ffb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ffb10 size=96 callers=0 calls=0
*/
void sub_14ffb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ffb10ULL || rel >= 0x14ffb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ffb70 size=96 callers=0 calls=0
*/
void sub_14ffb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ffb70ULL || rel >= 0x14ffbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ffbd0 size=1200 callers=0 calls=6
   calls: sub_14e6170, sub_14e61b0, sub_14e61e0, sub_14e64b0, sub_15000b0, sub_f0ce40
*/
void sub_14ffbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ffbd0ULL || rel >= 0x1500080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500080 size=16 callers=0 calls=0
*/
void sub_1500080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500080ULL || rel >= 0x1500090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500090 size=16 callers=0 calls=0
*/
void sub_1500090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500090ULL || rel >= 0x15000a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015000a0 size=16 callers=0 calls=0
*/
void sub_15000a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15000a0ULL || rel >= 0x15000b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015000b0 size=224 callers=1 calls=1
   calls: sub_1500190
*/
void sub_15000b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15000b0ULL || rel >= 0x1500190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500190 size=80 callers=2 calls=1
   calls: Play_UI_common_select
*/
void sub_1500190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500190ULL || rel >= 0x15001e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015001e0 size=16 callers=0 calls=0
*/
void sub_15001e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15001e0ULL || rel >= 0x15001f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015001f0 size=16 callers=0 calls=0
*/
void sub_15001f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15001f0ULL || rel >= 0x1500200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500200 size=16 callers=0 calls=0
*/
void sub_1500200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500200ULL || rel >= 0x1500210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500210 size=320 callers=0 calls=3
   calls: sub_14f4510, sub_14ff630, sub_1500790
*/
void sub_1500210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500210ULL || rel >= 0x1500350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500350 size=16 callers=0 calls=0
*/
void sub_1500350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500350ULL || rel >= 0x1500360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500360 size=112 callers=0 calls=1
   calls: sub_15006e0
*/
void sub_1500360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500360ULL || rel >= 0x15003d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015003d0 size=208 callers=0 calls=0
*/
void sub_15003d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15003d0ULL || rel >= 0x15004a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015004a0 size=16 callers=0 calls=0
*/
void sub_15004a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15004a0ULL || rel >= 0x15004b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015004b0 size=16 callers=0 calls=0
*/
void sub_15004b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15004b0ULL || rel >= 0x15004c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015004c0 size=240 callers=0 calls=1
   calls: sub_e86260
*/
void sub_15004c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15004c0ULL || rel >= 0x15005b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015005b0 size=240 callers=0 calls=1
   calls: sub_e86260
*/
void sub_15005b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15005b0ULL || rel >= 0x15006a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015006a0 size=16 callers=0 calls=0
*/
void sub_15006a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15006a0ULL || rel >= 0x15006b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015006b0 size=16 callers=0 calls=0
*/
void sub_15006b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15006b0ULL || rel >= 0x15006c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015006c0 size=16 callers=0 calls=0
*/
void sub_15006c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15006c0ULL || rel >= 0x15006d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015006d0 size=16 callers=0 calls=0
*/
void sub_15006d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15006d0ULL || rel >= 0x15006e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015006e0 size=176 callers=1 calls=1
   calls: sub_e86260
*/
void sub_15006e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15006e0ULL || rel >= 0x1500790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500790 size=608 callers=4 calls=2
   calls: sub_1500790, sub_e86260
*/
void sub_1500790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500790ULL || rel >= 0x15009f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015009f0 size=272 callers=2 calls=1
   calls: sub_149eef0
*/
void sub_15009f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15009f0ULL || rel >= 0x1500b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500b00 size=80 callers=0 calls=0
*/
void sub_1500b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500b00ULL || rel >= 0x1500b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500b50 size=80 callers=0 calls=0
*/
void sub_1500b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500b50ULL || rel >= 0x1500ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500ba0 size=80 callers=0 calls=0
*/
void sub_1500ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500ba0ULL || rel >= 0x1500bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500bf0 size=80 callers=0 calls=0
*/
void sub_1500bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500bf0ULL || rel >= 0x1500c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500c40 size=80 callers=93 calls=1
   calls: sub_1501970
*/
void sub_1500c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500c40ULL || rel >= 0x1500c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500c90 size=32 callers=8 calls=0
*/
void sub_1500c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500c90ULL || rel >= 0x1500cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500cb0 size=96 callers=1 calls=1
   calls: sub_15012f0
*/
void sub_1500cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500cb0ULL || rel >= 0x1500d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500d10 size=32 callers=2 calls=0
*/
void sub_1500d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500d10ULL || rel >= 0x1500d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500d30 size=240 callers=2 calls=4
   calls: sub_15011c0, sub_15015a0, sub_1501800, sub_1501aa0
*/
void sub_1500d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500d30ULL || rel >= 0x1500e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500e20 size=16 callers=0 calls=0
*/
void sub_1500e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500e20ULL || rel >= 0x1500e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500e30 size=112 callers=2 calls=4
   calls: sub_ea4750, sub_ea4770, sub_ea4790, sub_ea47c0
*/
void sub_1500e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500e30ULL || rel >= 0x1500ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500ea0 size=192 callers=27 calls=0
*/
void sub_1500ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500ea0ULL || rel >= 0x1500f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01500f60 size=304 callers=3 calls=2
   calls: sub_1500f60, sub_1501090
*/
void sub_1500f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1500f60ULL || rel >= 0x1501090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01501090 size=304 callers=11 calls=0
*/
void sub_1501090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1501090ULL || rel >= 0x15011c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015011c0 size=304 callers=4 calls=2
   calls: sub_1501090, sub_15011c0
*/
void sub_15011c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15011c0ULL || rel >= 0x15012f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015012f0 size=384 callers=4 calls=2
   calls: sub_1501090, sub_15012f0
*/
void sub_15012f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15012f0ULL || rel >= 0x1501470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01501470 size=304 callers=3 calls=2
   calls: sub_1501090, sub_1501470
*/
void sub_1501470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1501470ULL || rel >= 0x15015a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015015a0 size=304 callers=4 calls=2
   calls: sub_1501090, sub_15015a0
*/
void sub_15015a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15015a0ULL || rel >= 0x15016d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015016d0 size=304 callers=3 calls=2
   calls: sub_1501090, sub_15016d0
*/
void sub_15016d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15016d0ULL || rel >= 0x1501800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01501800 size=368 callers=4 calls=2
   calls: sub_1501090, sub_1501800
*/
void sub_1501800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1501800ULL || rel >= 0x1501970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01501970 size=304 callers=4 calls=2
   calls: sub_1501090, sub_1501970
*/
void sub_1501970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1501970ULL || rel >= 0x1501aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01501aa0 size=496 callers=2 calls=3
   calls: sub_1501cb0, sub_1501e20, sub_1501fb0
*/
void sub_1501aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1501aa0ULL || rel >= 0x1501c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01501c90 size=16 callers=0 calls=0
*/
void sub_1501c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1501c90ULL || rel >= 0x1501ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01501ca0 size=16 callers=0 calls=0
*/
void sub_1501ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1501ca0ULL || rel >= 0x1501cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01501cb0 size=368 callers=4 calls=2
   calls: sub_1501090, sub_1501cb0
*/
void sub_1501cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1501cb0ULL || rel >= 0x1501e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01501e20 size=400 callers=4 calls=2
   calls: sub_1501090, sub_1501e20
*/
void sub_1501e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1501e20ULL || rel >= 0x1501fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01501fb0 size=368 callers=4 calls=2
   calls: sub_1501090, sub_1501fb0
*/
void sub_1501fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1501fb0ULL || rel >= 0x1502120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01502120 size=64 callers=229 calls=0
*/
void sub_1502120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1502120ULL || rel >= 0x1502160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01502160 size=32 callers=4 calls=0
*/
void sub_1502160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1502160ULL || rel >= 0x1502180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01502180 size=2352 callers=6 calls=20
   calls: nn_ldn_SetStationAcceptPolicy, sub_12f8340, sub_1502ab0, sub_5cf8e0, sub_5cf8f0, sub_5e2930, sub_6323a0, sub_65f110, sub_65f1c0, sub_7c2da0, sub_986200, sub_9a5290
   ... +8 more
   ref: fel_999
   ref: bin/graphics/glare_mask/mask.bntx
   ref: fel_910
*/
void fel_999_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1502180ULL || rel >= 0x1502ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01502ab0 size=304 callers=1 calls=3
   calls: sub_15061e0, sub_5e6180, sub_d0c0
*/
void sub_1502ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1502ab0ULL || rel >= 0x1502be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01502be0 size=1216 callers=0 calls=5
   calls: sub_5cf8f0, sub_5e2bc0, sub_65f110, sub_682dd0, sub_eeb2b0
*/
void sub_1502be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1502be0ULL || rel >= 0x15030a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015030a0 size=16 callers=0 calls=0
*/
void sub_15030a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15030a0ULL || rel >= 0x15030b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015030b0 size=16 callers=0 calls=0
*/
void sub_15030b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15030b0ULL || rel >= 0x15030c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015030c0 size=16 callers=0 calls=0
*/
void sub_15030c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15030c0ULL || rel >= 0x15030d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015030d0 size=16 callers=6 calls=0
*/
void sub_15030d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15030d0ULL || rel >= 0x15030e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015030e0 size=16 callers=4 calls=0
*/
void sub_15030e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15030e0ULL || rel >= 0x15030f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015030f0 size=288 callers=1 calls=3
   calls: sub_670810, sub_670830, sub_671ad0
*/
void sub_15030f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15030f0ULL || rel >= 0x1503210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01503210 size=112 callers=5 calls=0
*/
void sub_1503210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1503210ULL || rel >= 0x1503280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01503280 size=64 callers=8 calls=0
*/
void sub_1503280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1503280ULL || rel >= 0x15032c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015032c0 size=6832 callers=9 calls=41
   calls: app_state_3, sub_12f2b90, sub_12f2d90, sub_12f8350, sub_12f8360, sub_59a4f0, sub_5cfaf0, sub_5e2bc0, sub_5fc600, sub_5fda10, sub_603250, sub_607750
   ... +29 more
*/
void sub_15032c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15032c0ULL || rel >= 0x1504d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01504d70 size=128 callers=4 calls=0
*/
void sub_1504d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1504d70ULL || rel >= 0x1504df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01504df0 size=416 callers=0 calls=4
   calls: sub_59b2c0, sub_607750, sub_b33a30, sub_b4c060
*/
void sub_1504df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1504df0ULL || rel >= 0x1504f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01504f90 size=416 callers=2 calls=4
   calls: sub_59b2d0, sub_607750, sub_b33a30, sub_b4c060
*/
void sub_1504f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1504f90ULL || rel >= 0x1505130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01505130 size=416 callers=3 calls=4
   calls: sub_59b2e0, sub_607750, sub_b33a30, sub_b4c060
*/
void sub_1505130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1505130ULL || rel >= 0x15052d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015052d0 size=912 callers=1 calls=8
   calls: sub_59b090, sub_59b0c0, sub_59b1f0, sub_59b200, sub_59b280, sub_607750, sub_b33a30, sub_b4c060
   ref: app_state
*/
void app_state_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15052d0ULL || rel >= 0x1505660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01505660 size=944 callers=4 calls=6
   calls: sub_59a180, sub_5bee70, sub_5e2bc0, sub_607750, sub_b33a30, sub_b4c060
*/
void sub_1505660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1505660ULL || rel >= 0x1505a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01505a10 size=16 callers=3 calls=0
*/
void sub_1505a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1505a10ULL || rel >= 0x1505a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01505a20 size=16 callers=19 calls=0
*/
void sub_1505a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1505a20ULL || rel >= 0x1505a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01505a30 size=704 callers=6 calls=6
   calls: sub_12f8370, sub_607750, sub_b33640, sub_b33c60, sub_b46720, sub_b4c060
*/
void sub_1505a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1505a30ULL || rel >= 0x1505cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01505cf0 size=720 callers=6 calls=7
   calls: sub_5e2bc0, sub_682dd0, sub_7c2d90, sub_7c2db0, sub_b336a0, sub_b4c060, sub_ed29f0
*/
void sub_1505cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1505cf0ULL || rel >= 0x1505fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01505fc0 size=16 callers=3 calls=0
*/
void sub_1505fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1505fc0ULL || rel >= 0x1505fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01505fd0 size=304 callers=2 calls=3
   calls: sub_670810, sub_670830, sub_671ad0
*/
void sub_1505fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1505fd0ULL || rel >= 0x1506100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506100 size=144 callers=3 calls=2
   calls: sub_670830, sub_671ad0
*/
void sub_1506100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506100ULL || rel >= 0x1506190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506190 size=16 callers=0 calls=0
*/
void sub_1506190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506190ULL || rel >= 0x15061a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015061a0 size=16 callers=0 calls=0
*/
void sub_15061a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15061a0ULL || rel >= 0x15061b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015061b0 size=16 callers=0 calls=0
*/
void sub_15061b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15061b0ULL || rel >= 0x15061c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015061c0 size=32 callers=0 calls=0
*/
void sub_15061c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15061c0ULL || rel >= 0x15061e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015061e0 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_15061e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15061e0ULL || rel >= 0x1506260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506260 size=256 callers=0 calls=3
   calls: sub_5b90f0, sub_5b9220, sub_5b95e0
*/
void sub_1506260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506260ULL || rel >= 0x1506360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506360 size=16 callers=0 calls=0
*/
void sub_1506360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506360ULL || rel >= 0x1506370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506370 size=16 callers=0 calls=0
*/
void sub_1506370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506370ULL || rel >= 0x1506380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506380 size=16 callers=0 calls=0
*/
void sub_1506380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506380ULL || rel >= 0x1506390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506390 size=176 callers=0 calls=0
*/
void sub_1506390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506390ULL || rel >= 0x1506440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506440 size=16 callers=0 calls=0
*/
void sub_1506440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506440ULL || rel >= 0x1506450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506450 size=16 callers=0 calls=0
*/
void sub_1506450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506450ULL || rel >= 0x1506460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506460 size=16 callers=0 calls=0
*/
void sub_1506460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506460ULL || rel >= 0x1506470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506470 size=16 callers=0 calls=0
*/
void sub_1506470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506470ULL || rel >= 0x1506480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506480 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_1506480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506480ULL || rel >= 0x15064b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015064b0 size=16 callers=0 calls=0
*/
void sub_15064b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15064b0ULL || rel >= 0x15064c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015064c0 size=16 callers=0 calls=0
*/
void sub_15064c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15064c0ULL || rel >= 0x15064d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015064d0 size=16 callers=0 calls=0
*/
void sub_15064d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15064d0ULL || rel >= 0x15064e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015064e0 size=16 callers=0 calls=0
*/
void sub_15064e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15064e0ULL || rel >= 0x15064f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015064f0 size=16 callers=0 calls=0
*/
void sub_15064f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15064f0ULL || rel >= 0x1506500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506500 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_1506500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506500ULL || rel >= 0x1506530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506530 size=16 callers=0 calls=0
*/
void sub_1506530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506530ULL || rel >= 0x1506540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506540 size=16 callers=0 calls=0
*/
void sub_1506540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506540ULL || rel >= 0x1506550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506550 size=16 callers=0 calls=0
*/
void sub_1506550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506550ULL || rel >= 0x1506560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506560 size=16 callers=0 calls=0
*/
void sub_1506560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506560ULL || rel >= 0x1506570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506570 size=384 callers=0 calls=1
   calls: sub_1c0
   ref: to_ba21_tokusyu01
   ref: to_kw32_happyB01
   ref: to_kw01_wait01
   ref: to_ba20_buturi01
   ref: to_ba10_waitA01
   ref: to_kw30_hate01
*/
void to_ba21_tokusyu01_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506570ULL || rel >= 0x15066f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015066f0 size=208 callers=2 calls=2
   calls: sub_15067c0, sub_1507000
*/
void sub_15066f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15066f0ULL || rel >= 0x15067c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015067c0 size=288 callers=1 calls=3
   calls: sub_1507130, sub_c38350, sub_e9db40
*/
void sub_15067c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15067c0ULL || rel >= 0x15068e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015068e0 size=96 callers=0 calls=0
*/
void sub_15068e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15068e0ULL || rel >= 0x1506940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506940 size=96 callers=0 calls=0
*/
void sub_1506940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506940ULL || rel >= 0x15069a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015069a0 size=96 callers=0 calls=0
*/
void sub_15069a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15069a0ULL || rel >= 0x1506a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506a00 size=96 callers=0 calls=0
*/
void sub_1506a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506a00ULL || rel >= 0x1506a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506a60 size=96 callers=0 calls=0
*/
void sub_1506a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506a60ULL || rel >= 0x1506ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506ac0 size=96 callers=0 calls=0
*/
void sub_1506ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506ac0ULL || rel >= 0x1506b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506b20 size=16 callers=0 calls=0
*/
void sub_1506b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506b20ULL || rel >= 0x1506b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506b30 size=160 callers=0 calls=1
   calls: sub_14e0550
*/
void sub_1506b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506b30ULL || rel >= 0x1506bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506bd0 size=880 callers=0 calls=4
   calls: sub_12fafe0, sub_13017e0, sub_c3f160, sub_c3fab0
   ref: LEARN_SKILL
*/
void LEARN_SKILL_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506bd0ULL || rel >= 0x1506f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506f40 size=144 callers=0 calls=0
*/
void sub_1506f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506f40ULL || rel >= 0x1506fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506fd0 size=16 callers=0 calls=0
*/
void sub_1506fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506fd0ULL || rel >= 0x1506fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506fe0 size=16 callers=0 calls=0
*/
void sub_1506fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506fe0ULL || rel >= 0x1506ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01506ff0 size=16 callers=0 calls=0
*/
void sub_1506ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506ff0ULL || rel >= 0x1507000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01507000 size=304 callers=1 calls=0
*/
void sub_1507000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1507000ULL || rel >= 0x1507130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01507130 size=224 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_1507130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1507130ULL || rel >= 0x1507210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01507210 size=128 callers=0 calls=0
*/
void sub_1507210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1507210ULL || rel >= 0x1507290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01507290 size=1120 callers=0 calls=13
   calls: sub_15076f0, sub_1508500, sub_1508630, sub_1508980, sub_78f150, sub_78f240, sub_794e80, sub_79ab20, sub_79b250, sub_c3f9b0, sub_c43ed0, sub_e7c0f0
   ... +1 more
   ref: CommonOptionBar
   ref: WazaBgView
   ref: common/wazainfo.dat
   ref: SystemMessageView
   ref: common/waza_remember.dat
   ref: WazaRemenberView
*/
void SystemMessageView_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1507290ULL || rel >= 0x15076f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015076f0 size=400 callers=1 calls=3
   calls: sub_15081e0, sub_1508500, sub_e7c160
*/
void sub_15076f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15076f0ULL || rel >= 0x1507880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01507880 size=192 callers=0 calls=5
   calls: sub_1308340, sub_14d6820, sub_1508d30, sub_1509a70, sub_e7ea20
   ref: WazaRemenberView
*/
void WazaRemenberView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1507880ULL || rel >= 0x1507940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01507940 size=624 callers=0 calls=9
   calls: sub_14d68a0, sub_1500ea0, sub_1508500, sub_1508d30, sub_1509f90, sub_5cfad0, sub_67d450, sub_795bc0, sub_e7eb10
   ref: WazaRemenberView
*/
void WazaRemenberView_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1507940ULL || rel >= 0x1507bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01507bb0 size=16 callers=0 calls=0
*/
void sub_1507bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1507bb0ULL || rel >= 0x1507bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01507bc0 size=464 callers=0 calls=5
   calls: sub_1508e80, sub_1508fd0, sub_1509120, sub_c445f0, sub_e7c160
*/
void sub_1507bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1507bc0ULL || rel >= 0x1507d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01507d90 size=32 callers=0 calls=0
*/
void sub_1507d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1507d90ULL || rel >= 0x1507db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01507db0 size=464 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1507db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1507db0ULL || rel >= 0x1507f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01507f80 size=16 callers=0 calls=0
*/
void sub_1507f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1507f80ULL || rel >= 0x1507f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01507f90 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1507f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1507f90ULL || rel >= 0x1508040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508040 size=16 callers=0 calls=0
*/
void sub_1508040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508040ULL || rel >= 0x1508050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508050 size=16 callers=0 calls=0
*/
void sub_1508050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508050ULL || rel >= 0x1508060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508060 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1508060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508060ULL || rel >= 0x1508110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508110 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1508110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508110ULL || rel >= 0x15081c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015081c0 size=16 callers=0 calls=0
*/
void sub_15081c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15081c0ULL || rel >= 0x15081d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015081d0 size=16 callers=0 calls=0
*/
void sub_15081d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15081d0ULL || rel >= 0x15081e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015081e0 size=384 callers=1 calls=4
   calls: sub_11061d0, sub_67b990, sub_e76a20, sub_e7c210
*/
void sub_15081e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15081e0ULL || rel >= 0x1508360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508360 size=288 callers=0 calls=0
*/
void sub_1508360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508360ULL || rel >= 0x1508480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508480 size=16 callers=0 calls=0
*/
void sub_1508480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508480ULL || rel >= 0x1508490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508490 size=16 callers=0 calls=0
*/
void sub_1508490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508490ULL || rel >= 0x15084a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015084a0 size=16 callers=0 calls=0
*/
void sub_15084a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15084a0ULL || rel >= 0x15084b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015084b0 size=16 callers=0 calls=0
*/
void sub_15084b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15084b0ULL || rel >= 0x15084c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015084c0 size=16 callers=0 calls=0
*/
void sub_15084c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15084c0ULL || rel >= 0x15084d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015084d0 size=16 callers=0 calls=0
*/
void sub_15084d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15084d0ULL || rel >= 0x15084e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015084e0 size=16 callers=0 calls=0
*/
void sub_15084e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15084e0ULL || rel >= 0x15084f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015084f0 size=16 callers=0 calls=0
*/
void sub_15084f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15084f0ULL || rel >= 0x1508500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508500 size=304 callers=9 calls=0
*/
void sub_1508500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508500ULL || rel >= 0x1508630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508630 size=288 callers=1 calls=2
   calls: sub_1508750, sub_e809c0
*/
void sub_1508630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508630ULL || rel >= 0x1508750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508750 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1508750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508750ULL || rel >= 0x1508980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508980 size=288 callers=1 calls=2
   calls: sub_1508aa0, sub_e809c0
*/
void sub_1508980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508980ULL || rel >= 0x1508aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508aa0 size=656 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_1508aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508aa0ULL || rel >= 0x1508d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508d30 size=336 callers=5 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1508d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508d30ULL || rel >= 0x1508e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508e80 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_1508e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508e80ULL || rel >= 0x1508fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01508fd0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_1508fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1508fd0ULL || rel >= 0x1509120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01509120 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_1509120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1509120ULL || rel >= 0x1509270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01509270 size=1376 callers=0 calls=13
   calls: sub_12ffb80, sub_14aad40, sub_14ba7b0, sub_14da630, sub_14e1a00, sub_15097d0, sub_8f3180, sub_e7eb10, sub_e833a0, sub_e83d70, sub_e83e60, sub_e84190
   ... +1 more
   ref: button_back
   ref: anime_L_poke_name_00_keep
*/
void anime_L_poke_name_00_keep_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1509270ULL || rel >= 0x15097d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015097d0 size=672 callers=1 calls=2
   calls: sub_7a41b0, sub_e84250
*/
void sub_15097d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15097d0ULL || rel >= 0x1509a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01509a70 size=48 callers=1 calls=0
*/
void sub_1509a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1509a70ULL || rel >= 0x1509aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01509aa0 size=32 callers=3 calls=0
*/
void sub_1509aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1509aa0ULL || rel >= 0x1509ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01509ac0 size=496 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/status/bin/uikit_setting_status_wazaomoidashi_00.bin
   ref: bin/appli/status/bin/status_poke_wazaomoidashi_00_lyt.bin
*/
void uikit_setting_status_wazaomoidashi_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1509ac0ULL || rel >= 0x1509cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01509cb0 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/status/bin/uikit_setting_status_wazaomoidashi_00.bin
   ref: bin/appli/status/bin/status_poke_wazaomoidashi_00_lyt.bin
*/
void uikit_setting_status_wazaomoidashi_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1509cb0ULL || rel >= 0x1509e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01509e90 size=256 callers=0 calls=1
   calls: sub_14e6d50
*/
void sub_1509e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1509e90ULL || rel >= 0x1509f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01509f90 size=1024 callers=1 calls=6
   calls: sub_14e1a00, sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10, sub_eb7b00
*/
void sub_1509f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1509f90ULL || rel >= 0x150a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150a390 size=1056 callers=3 calls=10
   calls: sub_12ffd80, sub_12ffd90, sub_14e1a30, sub_14edac0, sub_14f1840, sub_14f1850, sub_14f1870, sub_765dd0, sub_765de0, sub_7a4ba0
*/
void sub_150a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150a390ULL || rel >= 0x150a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150a7b0 size=6048 callers=3 calls=34
   calls: sub_12fa130, sub_12fa520, sub_1313580, sub_1313e50, sub_1315270, sub_1315b90, sub_14aad40, sub_14bb960, sub_14d5b10, sub_14d6920, sub_150bf50, sub_762930
   ... +22 more
   ref: anime_P_icon_pokerus_00_check_02
   ref: anime_P_icon_pokerus_00_check_01
   ref: anime_P_icon_pokerus_00_check_00
   ref: anime_L_skill_%02d_type_%02d
   ref: anime_L_poke_name_00_L_icon_seibetsu_00_switch
*/
void anime_P_icon_pokerus_00_check_02(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150a7b0ULL || rel >= 0x150bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150bf50 size=272 callers=49 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_150bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150bf50ULL || rel >= 0x150c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c060 size=176 callers=0 calls=0
*/
void sub_150c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c060ULL || rel >= 0x150c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c110 size=176 callers=0 calls=0
*/
void sub_150c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c110ULL || rel >= 0x150c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c1c0 size=16 callers=0 calls=0
*/
void sub_150c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c1c0ULL || rel >= 0x150c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c1d0 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_150c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c1d0ULL || rel >= 0x150c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c220 size=176 callers=0 calls=0
*/
void sub_150c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c220ULL || rel >= 0x150c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c2d0 size=176 callers=0 calls=0
*/
void sub_150c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c2d0ULL || rel >= 0x150c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c380 size=16 callers=0 calls=0
*/
void sub_150c380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c380ULL || rel >= 0x150c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c390 size=16 callers=0 calls=0
*/
void sub_150c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c390ULL || rel >= 0x150c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c3a0 size=176 callers=0 calls=0
*/
void sub_150c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c3a0ULL || rel >= 0x150c450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c450 size=176 callers=0 calls=0
*/
void sub_150c450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c450ULL || rel >= 0x150c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c500 size=304 callers=0 calls=0
*/
void sub_150c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c500ULL || rel >= 0x150c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c630 size=32 callers=0 calls=0
*/
void sub_150c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c630ULL || rel >= 0x150c650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c650 size=16 callers=0 calls=0
*/
void sub_150c650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c650ULL || rel >= 0x150c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c660 size=16 callers=0 calls=0
*/
void sub_150c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c660ULL || rel >= 0x150c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c670 size=16 callers=0 calls=0
*/
void sub_150c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c670ULL || rel >= 0x150c680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c680 size=80 callers=0 calls=0
*/
void sub_150c680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c680ULL || rel >= 0x150c6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c6d0 size=16 callers=0 calls=0
*/
void sub_150c6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c6d0ULL || rel >= 0x150c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c6e0 size=16 callers=0 calls=0
*/
void sub_150c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c6e0ULL || rel >= 0x150c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c6f0 size=16 callers=0 calls=0
*/
void sub_150c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c6f0ULL || rel >= 0x150c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150c700 size=896 callers=0 calls=10
   calls: sub_1315b90, sub_14d6920, sub_150bf50, sub_765ae0, sub_765b70, sub_780ca0, sub_780d40, sub_8f3180, sub_e7eb10, wazaname
*/
void sub_150c700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150c700ULL || rel >= 0x150ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150ca80 size=16 callers=0 calls=0
*/
void sub_150ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150ca80ULL || rel >= 0x150ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150ca90 size=16 callers=0 calls=0
*/
void sub_150ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150ca90ULL || rel >= 0x150caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150caa0 size=16 callers=0 calls=0
*/
void sub_150caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150caa0ULL || rel >= 0x150cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150cab0 size=240 callers=0 calls=4
   calls: sub_14aad40, sub_e83430, sub_e83930, sub_e83a20
*/
void sub_150cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150cab0ULL || rel >= 0x150cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150cba0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/common_bg/bin/common_bg_white_00_lyt.bin
*/
void common_bg_white_00_lyt_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150cba0ULL || rel >= 0x150ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150ccb0 size=16 callers=0 calls=0
*/
void sub_150ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150ccb0ULL || rel >= 0x150ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150ccc0 size=16 callers=0 calls=0
*/
void sub_150ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150ccc0ULL || rel >= 0x150ccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150ccd0 size=80 callers=0 calls=1
   calls: sub_14aad40
*/
void sub_150ccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150ccd0ULL || rel >= 0x150cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150cd20 size=16 callers=0 calls=0
*/
void sub_150cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150cd20ULL || rel >= 0x150cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150cd30 size=16 callers=0 calls=0
*/
void sub_150cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150cd30ULL || rel >= 0x150cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150cd40 size=16 callers=0 calls=0
*/
void sub_150cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150cd40ULL || rel >= 0x150cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150cd50 size=16 callers=0 calls=0
*/
void sub_150cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150cd50ULL || rel >= 0x150cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150cd60 size=16 callers=0 calls=0
*/
void sub_150cd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150cd60ULL || rel >= 0x150cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150cd70 size=16 callers=0 calls=0
*/
void sub_150cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150cd70ULL || rel >= 0x150cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150cd80 size=304 callers=0 calls=0
*/
void sub_150cd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150cd80ULL || rel >= 0x150ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150ceb0 size=128 callers=0 calls=0
*/
void sub_150ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150ceb0ULL || rel >= 0x150cf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150cf30 size=848 callers=0 calls=12
   calls: anime_P_icon_pokerus_00_check_02, sub_1508d30, sub_150a390, sub_5cfad0, sub_5cfaf0, sub_795bc0, sub_79b990, sub_c39c40, sub_d0c0, sub_e807f0, sub_eb6230, sub_eb7730
   ref: WazaLoseState
   ref: WazaRemenberView
*/
void WazaRemenberView_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150cf30ULL || rel >= 0x150d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150d280 size=720 callers=0 calls=20
   calls: sub_14d6840, sub_14d6890, sub_14e1a00, sub_14e1a30, sub_1508500, sub_1509aa0, sub_150d550, sub_765dd0, sub_7661c0, sub_766860, sub_e80580, sub_e807f0
   ... +8 more
*/
void sub_150d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150d280ULL || rel >= 0x150d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150d550 size=944 callers=1 calls=7
   calls: sub_1311c60, sub_1508500, sub_67d450, sub_c39c40, sub_e7eb10, sub_e807f0, sub_eb7e40
*/
void sub_150d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150d550ULL || rel >= 0x150d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150d900 size=16 callers=0 calls=0
*/
void sub_150d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150d900ULL || rel >= 0x150d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150d910 size=16 callers=0 calls=0
*/
void sub_150d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150d910ULL || rel >= 0x150d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150d920 size=16 callers=0 calls=0
*/
void sub_150d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150d920ULL || rel >= 0x150d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150d930 size=16 callers=0 calls=0
*/
void sub_150d930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150d930ULL || rel >= 0x150d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150d940 size=16 callers=0 calls=0
*/
void sub_150d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150d940ULL || rel >= 0x150d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150d950 size=16 callers=0 calls=0
*/
void sub_150d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150d950ULL || rel >= 0x150d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150d960 size=16 callers=0 calls=0
*/
void sub_150d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150d960ULL || rel >= 0x150d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150d970 size=16 callers=0 calls=0
*/
void sub_150d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150d970ULL || rel >= 0x150d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150d980 size=16 callers=0 calls=0
*/
void sub_150d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150d980ULL || rel >= 0x150d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150d990 size=304 callers=0 calls=0
*/
void sub_150d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150d990ULL || rel >= 0x150dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150dac0 size=848 callers=0 calls=12
   calls: anime_P_icon_pokerus_00_check_02, sub_1508d30, sub_150a390, sub_5cfad0, sub_5cfaf0, sub_795bc0, sub_79b990, sub_c39c40, sub_d0c0, sub_e807f0, sub_eb6230, sub_eb7730
   ref: WazaRemenberView
   ref: WazaRecallState
*/
void WazaRemenberView_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150dac0ULL || rel >= 0x150de10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150de10 size=1040 callers=0 calls=22
   calls: sub_1313580, sub_14d6840, sub_14d6890, sub_14e1a00, sub_14e1a30, sub_1508500, sub_1509aa0, sub_150e220, sub_765dd0, sub_765de0, sub_766090, sub_7664a0
   ... +10 more
*/
void sub_150de10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150de10ULL || rel >= 0x150e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150e220 size=992 callers=2 calls=8
   calls: sub_1311c60, sub_1508500, sub_67d450, sub_c39c40, sub_e7eb10, sub_e807f0, sub_eb7e40, sub_eb8930
*/
void sub_150e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150e220ULL || rel >= 0x150e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150e600 size=16 callers=0 calls=0
*/
void sub_150e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150e600ULL || rel >= 0x150e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150e610 size=16 callers=0 calls=0
*/
void sub_150e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150e610ULL || rel >= 0x150e620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150e620 size=16 callers=0 calls=0
*/
void sub_150e620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150e620ULL || rel >= 0x150e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150e630 size=16 callers=0 calls=0
*/
void sub_150e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150e630ULL || rel >= 0x150e640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150e640 size=16 callers=0 calls=0
*/
void sub_150e640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150e640ULL || rel >= 0x150e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150e650 size=16 callers=0 calls=0
*/
void sub_150e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150e650ULL || rel >= 0x150e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150e660 size=16 callers=0 calls=0
*/
void sub_150e660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150e660ULL || rel >= 0x150e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150e670 size=16 callers=0 calls=0
*/
void sub_150e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150e670ULL || rel >= 0x150e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150e680 size=16 callers=0 calls=0
*/
void sub_150e680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150e680ULL || rel >= 0x150e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150e690 size=304 callers=0 calls=0
*/
void sub_150e690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150e690ULL || rel >= 0x150e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150e7c0 size=864 callers=0 calls=13
   calls: anime_P_icon_pokerus_00_check_02, sub_1508d30, sub_150a390, sub_5cfad0, sub_5cfaf0, sub_795bc0, sub_79b990, sub_c39c40, sub_d0c0, sub_e807f0, sub_e83870, sub_eb6230
   ... +1 more
   ref: WazaRemenberState
   ref: anime_L_status_button_skill_04_switch_wazaoshie
   ref: WazaRemenberView
*/
void anime_L_status_button_skill_04_switch_wazaoshie(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150e7c0ULL || rel >= 0x150eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150eb20 size=976 callers=0 calls=19
   calls: sub_14d6840, sub_14d6890, sub_14e1a00, sub_14e1a30, sub_1508500, sub_1509aa0, sub_150eef0, sub_765dd0, sub_7664a0, sub_e80580, sub_e807f0, sub_eb6230
   ... +7 more
*/
void sub_150eb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150eb20ULL || rel >= 0x150eef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150eef0 size=944 callers=1 calls=7
   calls: sub_1311c60, sub_1508500, sub_67d450, sub_c39c40, sub_e7eb10, sub_e807f0, sub_eb7e40
*/
void sub_150eef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150eef0ULL || rel >= 0x150f2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f2a0 size=16 callers=0 calls=0
*/
void sub_150f2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f2a0ULL || rel >= 0x150f2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f2b0 size=16 callers=0 calls=0
*/
void sub_150f2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f2b0ULL || rel >= 0x150f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f2c0 size=16 callers=0 calls=0
*/
void sub_150f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f2c0ULL || rel >= 0x150f2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f2d0 size=16 callers=0 calls=0
*/
void sub_150f2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f2d0ULL || rel >= 0x150f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f2e0 size=16 callers=0 calls=0
*/
void sub_150f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f2e0ULL || rel >= 0x150f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f2f0 size=16 callers=0 calls=0
*/
void sub_150f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f2f0ULL || rel >= 0x150f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f300 size=16 callers=0 calls=0
*/
void sub_150f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f300ULL || rel >= 0x150f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f310 size=16 callers=0 calls=0
*/
void sub_150f310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f310ULL || rel >= 0x150f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f320 size=16 callers=0 calls=0
*/
void sub_150f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f320ULL || rel >= 0x150f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f330 size=304 callers=0 calls=0
*/
void sub_150f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f330ULL || rel >= 0x150f460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f460 size=144 callers=0 calls=1
   calls: sub_150f4f0
*/
void sub_150f460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f460ULL || rel >= 0x150f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f4f0 size=448 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_150f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f4f0ULL || rel >= 0x150f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f6b0 size=96 callers=0 calls=0
*/
void sub_150f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f6b0ULL || rel >= 0x150f710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f710 size=96 callers=0 calls=0
*/
void sub_150f710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f710ULL || rel >= 0x150f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f770 size=96 callers=0 calls=0
*/
void sub_150f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f770ULL || rel >= 0x150f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f7d0 size=96 callers=0 calls=0
*/
void sub_150f7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f7d0ULL || rel >= 0x150f830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f830 size=96 callers=0 calls=0
*/
void sub_150f830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f830ULL || rel >= 0x150f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f890 size=96 callers=0 calls=0
*/
void sub_150f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f890ULL || rel >= 0x150f8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f8f0 size=16 callers=0 calls=0
*/
void sub_150f8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f8f0ULL || rel >= 0x150f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f900 size=16 callers=0 calls=0
*/
void sub_150f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f900ULL || rel >= 0x150f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f910 size=16 callers=0 calls=0
*/
void sub_150f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f910ULL || rel >= 0x150f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150f920 size=800 callers=0 calls=6
   calls: sub_104dbb0, sub_150fc40, sub_1510ec0, sub_ab49e0, sub_c39c40, sub_f3b120
*/
void sub_150f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150f920ULL || rel >= 0x150fc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150fc40 size=272 callers=1 calls=3
   calls: sub_150feb0, sub_672c10, sub_c386f0
*/
void sub_150fc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150fc40ULL || rel >= 0x150fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150fd50 size=16 callers=0 calls=0
*/
void sub_150fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150fd50ULL || rel >= 0x150fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150fd60 size=16 callers=0 calls=0
*/
void sub_150fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150fd60ULL || rel >= 0x150fd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150fd70 size=16 callers=0 calls=0
*/
void sub_150fd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150fd70ULL || rel >= 0x150fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150fd80 size=304 callers=0 calls=0
*/
void sub_150fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150fd80ULL || rel >= 0x150feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150feb0 size=224 callers=1 calls=2
   calls: sub_150ff90, sub_e7b660
*/
void sub_150feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150feb0ULL || rel >= 0x150ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0150ff90 size=224 callers=1 calls=3
   calls: sub_1510070, sub_7c2da0, sub_e7b5e0
*/
void sub_150ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150ff90ULL || rel >= 0x1510070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510070 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1510070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510070ULL || rel >= 0x1510160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510160 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_1510160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510160ULL || rel >= 0x15101e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015101e0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_15101e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15101e0ULL || rel >= 0x1510350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510350 size=96 callers=0 calls=1
   calls: sub_1510570
*/
void sub_1510350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510350ULL || rel >= 0x15103b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015103b0 size=16 callers=0 calls=0
*/
void sub_15103b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15103b0ULL || rel >= 0x15103c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015103c0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_15103c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15103c0ULL || rel >= 0x1510460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510460 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_1510460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510460ULL || rel >= 0x1510520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510520 size=16 callers=0 calls=0
*/
void sub_1510520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510520ULL || rel >= 0x1510530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510530 size=16 callers=0 calls=0
*/
void sub_1510530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510530ULL || rel >= 0x1510540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510540 size=16 callers=0 calls=0
*/
void sub_1510540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510540ULL || rel >= 0x1510550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510550 size=32 callers=0 calls=0
*/
void sub_1510550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510550ULL || rel >= 0x1510570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510570 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_1510570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510570ULL || rel >= 0x1510650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510650 size=128 callers=0 calls=0
*/
void sub_1510650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510650ULL || rel >= 0x15106d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015106d0 size=16 callers=6 calls=0
*/
void sub_15106d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15106d0ULL || rel >= 0x15106e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015106e0 size=16 callers=6 calls=0
*/
void sub_15106e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15106e0ULL || rel >= 0x15106f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015106f0 size=48 callers=2 calls=1
   calls: sub_105c390
*/
void sub_15106f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15106f0ULL || rel >= 0x1510720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510720 size=256 callers=1 calls=0
*/
void sub_1510720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510720ULL || rel >= 0x1510820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510820 size=960 callers=1 calls=9
   calls: sub_1062350, sub_1062360, sub_1064a20, sub_106fd10, sub_1078400, sub_1078450, sub_1078480, sub_1510be0, sub_1511c90
*/
void sub_1510820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510820ULL || rel >= 0x1510be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510be0 size=512 callers=2 calls=1
   calls: sub_1048470
*/
void sub_1510be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510be0ULL || rel >= 0x1510de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510de0 size=64 callers=1 calls=0
*/
void sub_1510de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510de0ULL || rel >= 0x1510e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510e20 size=80 callers=2 calls=0
*/
void sub_1510e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510e20ULL || rel >= 0x1510e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510e70 size=80 callers=1 calls=0
*/
void sub_1510e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510e70ULL || rel >= 0x1510ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510ec0 size=16 callers=2 calls=0
*/
void sub_1510ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510ec0ULL || rel >= 0x1510ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01510ed0 size=896 callers=0 calls=13
   calls: sub_1511250, sub_1513650, sub_1513780, sub_78f150, sub_78f240, sub_794e80, sub_7950c0, sub_79ab20, sub_79b250, sub_948390, sub_e7c0f0, sub_e7e400
   ... +1 more
   ref: OptionBar
   ref: ViewTop
   ref: font_fs_72_00.bffnt
   ref: SystemMessageView
   ref: bin/font/bmp/font_fs_72_00.bffnt
   ref: common/xmenu_net.dat
   ref: bin/font/bmp/font_fs_150_bold_00.bffnt
   ref: font_fs_150_bold_00.bffnt
*/
void SystemMessageView_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510ed0ULL || rel >= 0x1511250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511250 size=272 callers=1 calls=3
   calls: sub_15134b0, sub_1513650, sub_e7c160
*/
void sub_1511250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511250ULL || rel >= 0x1511360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511360 size=112 callers=0 calls=2
   calls: sub_e7e550, sub_e7ea20
*/
void sub_1511360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511360ULL || rel >= 0x15113d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015113d0 size=288 callers=0 calls=5
   calls: sub_104e050, sub_1500ea0, sub_1513b00, sub_795bc0, sub_ffa7d0
   ref: OptionBar
   ref: ViewTop
*/
void OptionBar_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15113d0ULL || rel >= 0x15114f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015114f0 size=16 callers=0 calls=0
*/
void sub_15114f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15114f0ULL || rel >= 0x1511500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511500 size=768 callers=0 calls=7
   calls: sub_1513650, sub_1513c50, sub_1513d90, sub_1513ed0, sub_1514010, sub_1514150, sub_e7c160
*/
void sub_1511500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511500ULL || rel >= 0x1511800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511800 size=16 callers=0 calls=0
*/
void sub_1511800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511800ULL || rel >= 0x1511810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511810 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_1511810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511810ULL || rel >= 0x15119b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015119b0 size=16 callers=0 calls=0
*/
void sub_15119b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15119b0ULL || rel >= 0x15119c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015119c0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_15119c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15119c0ULL || rel >= 0x1511a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511a70 size=16 callers=0 calls=0
*/
void sub_1511a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511a70ULL || rel >= 0x1511a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511a80 size=16 callers=0 calls=0
*/
void sub_1511a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511a80ULL || rel >= 0x1511a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511a90 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1511a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511a90ULL || rel >= 0x1511b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511b40 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_1511b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511b40ULL || rel >= 0x1511bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511bf0 size=16 callers=0 calls=0
*/
void sub_1511bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511bf0ULL || rel >= 0x1511c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511c00 size=16 callers=0 calls=0
*/
void sub_1511c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511c00ULL || rel >= 0x1511c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511c10 size=16 callers=0 calls=0
*/
void sub_1511c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511c10ULL || rel >= 0x1511c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511c20 size=16 callers=0 calls=0
*/
void sub_1511c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511c20ULL || rel >= 0x1511c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511c30 size=16 callers=0 calls=0
*/
void sub_1511c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511c30ULL || rel >= 0x1511c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511c40 size=16 callers=0 calls=0
*/
void sub_1511c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511c40ULL || rel >= 0x1511c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511c50 size=16 callers=0 calls=0
*/
void sub_1511c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511c50ULL || rel >= 0x1511c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511c60 size=16 callers=0 calls=0
*/
void sub_1511c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511c60ULL || rel >= 0x1511c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511c70 size=16 callers=0 calls=0
*/
void sub_1511c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511c70ULL || rel >= 0x1511c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511c80 size=16 callers=0 calls=0
*/
void sub_1511c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511c80ULL || rel >= 0x1511c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01511c90 size=3600 callers=3 calls=3
   calls: sub_1511c90, sub_1512aa0, sub_1512df0
*/
void sub_1511c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1511c90ULL || rel >= 0x1512aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01512aa0 size=848 callers=4 calls=0
*/
void sub_1512aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1512aa0ULL || rel >= 0x1512df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01512df0 size=1728 callers=2 calls=1
   calls: sub_1512aa0
*/
void sub_1512df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1512df0ULL || rel >= 0x15134b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015134b0 size=416 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_15134b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15134b0ULL || rel >= 0x1513650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01513650 size=304 callers=15 calls=0
*/
void sub_1513650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1513650ULL || rel >= 0x1513780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01513780 size=288 callers=1 calls=2
   calls: sub_15138a0, sub_e809c0
*/
void sub_1513780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1513780ULL || rel >= 0x15138a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015138a0 size=608 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_15138a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15138a0ULL || rel >= 0x1513b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01513b00 size=336 callers=7 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_1513b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1513b00ULL || rel >= 0x1513c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01513c50 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1513c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1513c50ULL || rel >= 0x1513d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01513d90 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1513d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1513d90ULL || rel >= 0x1513ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01513ed0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1513ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1513ed0ULL || rel >= 0x1514010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514010 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1514010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514010ULL || rel >= 0x1514150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514150 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_1514150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514150ULL || rel >= 0x1514290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514290 size=128 callers=0 calls=0
*/
void sub_1514290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514290ULL || rel >= 0x1514310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514310 size=640 callers=0 calls=9
   calls: sub_1502120, sub_1513b00, sub_1514f80, sub_5cfad0, sub_795bc0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb7730
   ref: OptionBar
   ref: ViewTop
*/
void OptionBar_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514310ULL || rel >= 0x1514590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514590 size=176 callers=0 calls=4
   calls: sub_15106e0, sub_1513650, sub_1514fe0, sub_eb7790
*/
void sub_1514590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514590ULL || rel >= 0x1514640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514640 size=16 callers=0 calls=0
*/
void sub_1514640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514640ULL || rel >= 0x1514650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514650 size=16 callers=0 calls=0
*/
void sub_1514650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514650ULL || rel >= 0x1514660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514660 size=16 callers=0 calls=0
*/
void sub_1514660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514660ULL || rel >= 0x1514670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01514670 size=16 callers=0 calls=0
*/
void sub_1514670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1514670ULL || rel >= 0x1514680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

