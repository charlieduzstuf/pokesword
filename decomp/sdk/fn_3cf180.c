/* sdk functions 003cf180..003efdd0 (42 of 53). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 003cf180 size=16 callers=0 calls=0
*/
void sub_3cf180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf180ULL || rel >= 0x3cf190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf190 size=672 callers=2 calls=1
   calls: sub_3c9b20
   ref: /dev/nvmap
*/
void nvmap_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf190ULL || rel >= 0x3cf430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf430 size=416 callers=0 calls=2
   calls: sub_3c96a0, sub_3c9b20
   ref: /dev/nvmap
*/
void nvmap_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf430ULL || rel >= 0x3cf5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf5d0 size=128 callers=0 calls=2
   calls: nvmap_2, nvmap_6
*/
void sub_3cf5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf5d0ULL || rel >= 0x3cf650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf650 size=112 callers=0 calls=2
   calls: nvmap_2, nvmap_6
*/
void sub_3cf650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf650ULL || rel >= 0x3cf6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf6c0 size=160 callers=0 calls=0
   ref: /dev/nvmap
*/
void nvmap_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf6c0ULL || rel >= 0x3cf760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf760 size=16 callers=0 calls=0
*/
void sub_3cf760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf760ULL || rel >= 0x3cf770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf770 size=16 callers=0 calls=0
*/
void sub_3cf770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf770ULL || rel >= 0x3cf780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf780 size=16 callers=0 calls=0
*/
void sub_3cf780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf780ULL || rel >= 0x3cf790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf790 size=16 callers=0 calls=0
*/
void sub_3cf790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf790ULL || rel >= 0x3cf7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf7a0 size=336 callers=0 calls=1
   calls: sub_3c9b20
   ref: /dev/nvmap
*/
void nvmap_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf7a0ULL || rel >= 0x3cf8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf8f0 size=288 callers=2 calls=1
   calls: sub_3c9b20
   ref: /dev/nvmap
*/
void nvmap_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf8f0ULL || rel >= 0x3cfa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cfa10 size=16 callers=0 calls=0
*/
void sub_3cfa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cfa10ULL || rel >= 0x3cfa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cfa20 size=16 callers=0 calls=0
*/
void sub_3cfa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cfa20ULL || rel >= 0x3cfa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cfa30 size=16 callers=0 calls=0
*/
void sub_3cfa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cfa30ULL || rel >= 0x3cfa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cfa40 size=32 callers=0 calls=0
*/
void sub_3cfa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cfa40ULL || rel >= 0x3cfa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cfa60 size=416 callers=0 calls=2
   calls: nvmap_10, sub_3c9b20
   ref: /dev/nvmap
*/
void nvmap_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cfa60ULL || rel >= 0x3cfc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cfc00 size=32 callers=0 calls=0
*/
void sub_3cfc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cfc00ULL || rel >= 0x3cfc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cfc20 size=416 callers=0 calls=2
   calls: nvmap_10, sub_3c9b20
   ref: /dev/nvmap
*/
void nvmap_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cfc20ULL || rel >= 0x3cfdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cfdc0 size=160 callers=0 calls=0
   ref: /dev/nvmap
*/
void nvmap_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cfdc0ULL || rel >= 0x3cfe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cfe60 size=176 callers=0 calls=0
*/
void sub_3cfe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cfe60ULL || rel >= 0x3cff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cff10 size=160 callers=0 calls=0
   ref: /dev/nvmap
*/
void nvmap_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cff10ULL || rel >= 0x3cffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cffb0 size=160 callers=0 calls=0
   ref: /dev/nvmap
*/
void nvmap_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cffb0ULL || rel >= 0x3d0050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0050 size=160 callers=0 calls=0
   ref: /dev/nvmap
*/
void nvmap_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0050ULL || rel >= 0x3d00f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d00f0 size=16 callers=0 calls=0
*/
void sub_3d00f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d00f0ULL || rel >= 0x3d0100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0100 size=16 callers=0 calls=0
*/
void sub_3d0100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0100ULL || rel >= 0x3d0110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0110 size=16 callers=0 calls=0
*/
void sub_3d0110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0110ULL || rel >= 0x3d0120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0120 size=16 callers=0 calls=0
*/
void sub_3d0120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0120ULL || rel >= 0x3d0130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0130 size=16 callers=0 calls=0
*/
void sub_3d0130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0130ULL || rel >= 0x3d0140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0140 size=16 callers=0 calls=0
*/
void sub_3d0140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0140ULL || rel >= 0x3d0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0150 size=16 callers=0 calls=0
*/
void sub_3d0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0150ULL || rel >= 0x3d0160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0160 size=64 callers=0 calls=0
*/
void sub_3d0160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0160ULL || rel >= 0x3d01a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d01a0 size=176 callers=0 calls=0
*/
void sub_3d01a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d01a0ULL || rel >= 0x3d0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0250 size=128 callers=0 calls=0
*/
void sub_3d0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0250ULL || rel >= 0x3d02d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d02d0 size=48 callers=0 calls=0
*/
void sub_3d02d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d02d0ULL || rel >= 0x3d0300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0300 size=192 callers=0 calls=0
*/
void sub_3d0300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0300ULL || rel >= 0x3d03c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d03c0 size=464 callers=0 calls=0
*/
void sub_3d03c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d03c0ULL || rel >= 0x3d0590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0590 size=96 callers=0 calls=0
*/
void sub_3d0590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0590ULL || rel >= 0x3d05f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d05f0 size=80 callers=0 calls=0
*/
void sub_3d05f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d05f0ULL || rel >= 0x3d0640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0640 size=48 callers=0 calls=0
*/
void sub_3d0640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0640ULL || rel >= 0x3d0670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0670 size=48 callers=0 calls=0
*/
void sub_3d0670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0670ULL || rel >= 0x3d06a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d06a0 size=48 callers=0 calls=0
*/
void sub_3d06a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d06a0ULL || rel >= 0x3d06d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d06d0 size=112 callers=0 calls=0
*/
void sub_3d06d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d06d0ULL || rel >= 0x3d0740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0740 size=16 callers=0 calls=0
*/
void sub_3d0740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0740ULL || rel >= 0x3d0750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0750 size=112 callers=0 calls=1
   calls: sub_3d0850
*/
void sub_3d0750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0750ULL || rel >= 0x3d07c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d07c0 size=16 callers=0 calls=0
*/
void sub_3d07c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d07c0ULL || rel >= 0x3d07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d07d0 size=128 callers=0 calls=1
   calls: sub_3d0850
*/
void sub_3d07d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d07d0ULL || rel >= 0x3d0850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0850 size=272 callers=3 calls=0
*/
void sub_3d0850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0850ULL || rel >= 0x3d0960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0960 size=880 callers=0 calls=1
   calls: sub_3d1110
   ref: /dev/nvhost-ctrl
*/
void nvhost_ctrl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0960ULL || rel >= 0x3d0cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0cd0 size=80 callers=0 calls=0
   ref: <syncpoint-based sync>
*/
void syncpoint_based_sync(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0cd0ULL || rel >= 0x3d0d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0d20 size=16 callers=0 calls=0
*/
void sub_3d0d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0d20ULL || rel >= 0x3d0d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0d30 size=224 callers=0 calls=0
*/
void sub_3d0d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0d30ULL || rel >= 0x3d0e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0e10 size=416 callers=0 calls=0
*/
void sub_3d0e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0e10ULL || rel >= 0x3d0fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d0fb0 size=144 callers=0 calls=0
*/
void sub_3d0fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d0fb0ULL || rel >= 0x3d1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1040 size=16 callers=0 calls=0
*/
void sub_3d1040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1040ULL || rel >= 0x3d1050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1050 size=48 callers=0 calls=0
*/
void sub_3d1050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1050ULL || rel >= 0x3d1080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1080 size=96 callers=0 calls=0
*/
void sub_3d1080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1080ULL || rel >= 0x3d10e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d10e0 size=48 callers=0 calls=1
   calls: sub_3d1110
*/
void sub_3d10e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d10e0ULL || rel >= 0x3d1110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1110 size=272 callers=3 calls=0
*/
void sub_3d1110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1110ULL || rel >= 0x3d1220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1220 size=48 callers=0 calls=1
   calls: sub_3d1110
*/
void sub_3d1220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1220ULL || rel >= 0x3d1250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1250 size=16 callers=0 calls=0
*/
void sub_3d1250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1250ULL || rel >= 0x3d1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1260 size=96 callers=0 calls=0
*/
void sub_3d1260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1260ULL || rel >= 0x3d12c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d12c0 size=208 callers=0 calls=0
*/
void sub_3d12c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d12c0ULL || rel >= 0x3d1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1390 size=128 callers=0 calls=0
   ref: NvRmSyncGetFd
*/
void NvRmSyncGetFd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1390ULL || rel >= 0x3d1410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1410 size=16 callers=0 calls=0
*/
void sub_3d1410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1410ULL || rel >= 0x3d1420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1420 size=16 callers=0 calls=0
*/
void sub_3d1420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1420ULL || rel >= 0x3d1430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1430 size=16 callers=0 calls=0
*/
void sub_3d1430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1430ULL || rel >= 0x3d1440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1440 size=16 callers=0 calls=0
*/
void sub_3d1440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1440ULL || rel >= 0x3d1450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1450 size=16 callers=0 calls=0
*/
void sub_3d1450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1450ULL || rel >= 0x3d1460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1460 size=16 callers=0 calls=0
*/
void sub_3d1460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1460ULL || rel >= 0x3d1470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1470 size=16 callers=0 calls=0
*/
void sub_3d1470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1470ULL || rel >= 0x3d1480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1480 size=16 callers=0 calls=0
*/
void sub_3d1480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1480ULL || rel >= 0x3d1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1490 size=48 callers=1 calls=0
*/
void sub_3d1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1490ULL || rel >= 0x3d14c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d14c0 size=256 callers=1 calls=1
   calls: sub_3d15c0
*/
void sub_3d14c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d14c0ULL || rel >= 0x3d15c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d15c0 size=2544 callers=4 calls=0
*/
void sub_3d15c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d15c0ULL || rel >= 0x3d1fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d1fb0 size=192 callers=1 calls=1
   calls: sub_3d15c0
*/
void sub_3d1fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d1fb0ULL || rel >= 0x3d2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2070 size=16 callers=0 calls=0
*/
void sub_3d2070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2070ULL || rel >= 0x3d2080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2080 size=96 callers=0 calls=1
   calls: sub_3d20e0
*/
void sub_3d2080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2080ULL || rel >= 0x3d20e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d20e0 size=800 callers=1 calls=0
*/
void sub_3d20e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d20e0ULL || rel >= 0x3d2400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2400 size=176 callers=0 calls=1
   calls: sub_3d5600
*/
void sub_3d2400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2400ULL || rel >= 0x3d24b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d24b0 size=688 callers=0 calls=1
   calls: NVRM_STREAM_DISASM
*/
void sub_3d24b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d24b0ULL || rel >= 0x3d2760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2760 size=2192 callers=4 calls=5
   calls: sub_3d55f0, sub_3d5610, sub_3d5620, sub_3d5630, sub_3d5640
   ref: NVRM STREAM DISASM:
*/
void NVRM_STREAM_DISASM(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2760ULL || rel >= 0x3d2ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d2ff0 size=16 callers=0 calls=0
*/
void sub_3d2ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d2ff0ULL || rel >= 0x3d3000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3000 size=192 callers=0 calls=0
*/
void sub_3d3000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3000ULL || rel >= 0x3d30c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d30c0 size=144 callers=0 calls=0
*/
void sub_3d30c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d30c0ULL || rel >= 0x3d3150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3150 size=160 callers=0 calls=0
*/
void sub_3d3150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3150ULL || rel >= 0x3d31f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d31f0 size=112 callers=0 calls=0
*/
void sub_3d31f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d31f0ULL || rel >= 0x3d3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3260 size=160 callers=0 calls=0
*/
void sub_3d3260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3260ULL || rel >= 0x3d3300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3300 size=64 callers=0 calls=0
*/
void sub_3d3300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3300ULL || rel >= 0x3d3340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3340 size=224 callers=0 calls=0
*/
void sub_3d3340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3340ULL || rel >= 0x3d3420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3420 size=448 callers=0 calls=0
*/
void sub_3d3420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3420ULL || rel >= 0x3d35e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d35e0 size=480 callers=0 calls=0
*/
void sub_3d35e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d35e0ULL || rel >= 0x3d37c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d37c0 size=144 callers=0 calls=0
*/
void sub_3d37c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d37c0ULL || rel >= 0x3d3850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3850 size=256 callers=0 calls=0
*/
void sub_3d3850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3850ULL || rel >= 0x3d3950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3950 size=128 callers=0 calls=0
*/
void sub_3d3950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3950ULL || rel >= 0x3d39d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d39d0 size=128 callers=0 calls=0
*/
void sub_3d39d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d39d0ULL || rel >= 0x3d3a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3a50 size=256 callers=0 calls=0
*/
void sub_3d3a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3a50ULL || rel >= 0x3d3b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3b50 size=272 callers=0 calls=0
*/
void sub_3d3b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3b50ULL || rel >= 0x3d3c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3c60 size=144 callers=0 calls=1
   calls: NVRM_STREAM_DISASM
*/
void sub_3d3c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3c60ULL || rel >= 0x3d3cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3cf0 size=272 callers=0 calls=1
   calls: NVRM_STREAM_DISASM
*/
void sub_3d3cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3cf0ULL || rel >= 0x3d3e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3e00 size=320 callers=0 calls=1
   calls: NVRM_STREAM_DISASM
   ref: nvrm-stream-flush
*/
void nvrm_stream_flush(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3e00ULL || rel >= 0x3d3f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3f40 size=16 callers=0 calls=0
*/
void sub_3d3f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3f40ULL || rel >= 0x3d3f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3f50 size=16 callers=0 calls=0
*/
void sub_3d3f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3f50ULL || rel >= 0x3d3f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3f60 size=352 callers=0 calls=1
   calls: sub_3d40c0
   ref: /dev/nvhost-ctrl
*/
void nvhost_ctrl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3f60ULL || rel >= 0x3d40c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d40c0 size=368 callers=2 calls=0
*/
void sub_3d40c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d40c0ULL || rel >= 0x3d4230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4230 size=48 callers=0 calls=0
*/
void sub_3d4230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4230ULL || rel >= 0x3d4260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4260 size=16 callers=0 calls=0
*/
void sub_3d4260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4260ULL || rel >= 0x3d4270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4270 size=16 callers=0 calls=0
*/
void sub_3d4270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4270ULL || rel >= 0x3d4280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4280 size=192 callers=0 calls=0
*/
void sub_3d4280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4280ULL || rel >= 0x3d4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4340 size=416 callers=0 calls=0
*/
void sub_3d4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4340ULL || rel >= 0x3d44e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d44e0 size=512 callers=0 calls=0
*/
void sub_3d44e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d44e0ULL || rel >= 0x3d46e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d46e0 size=112 callers=0 calls=0
*/
void sub_3d46e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d46e0ULL || rel >= 0x3d4750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4750 size=16 callers=0 calls=0
*/
void sub_3d4750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4750ULL || rel >= 0x3d4760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4760 size=16 callers=0 calls=0
*/
void sub_3d4760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4760ULL || rel >= 0x3d4770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4770 size=16 callers=0 calls=0
*/
void sub_3d4770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4770ULL || rel >= 0x3d4780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4780 size=16 callers=0 calls=0
*/
void sub_3d4780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4780ULL || rel >= 0x3d4790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4790 size=16 callers=0 calls=0
*/
void sub_3d4790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4790ULL || rel >= 0x3d47a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d47a0 size=16 callers=0 calls=0
*/
void sub_3d47a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d47a0ULL || rel >= 0x3d47b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d47b0 size=176 callers=0 calls=0
   ref: /dev/nvhost-ctrl
*/
void nvhost_ctrl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d47b0ULL || rel >= 0x3d4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4860 size=160 callers=0 calls=0
   ref: /dev/nvhost-ctrl
*/
void nvhost_ctrl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4860ULL || rel >= 0x3d4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4900 size=224 callers=0 calls=0
   ref: /dev/nvhost-ctrl
*/
void nvhost_ctrl_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4900ULL || rel >= 0x3d49e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d49e0 size=160 callers=0 calls=1
   calls: nvhost_ctrl_9
   ref: /dev/nvhost-ctrl
*/
void nvhost_ctrl_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d49e0ULL || rel >= 0x3d4a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4a80 size=176 callers=0 calls=1
   calls: nvhost_ctrl_9
   ref: /dev/nvhost-ctrl
*/
void nvhost_ctrl_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4a80ULL || rel >= 0x3d4b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4b30 size=176 callers=0 calls=1
   calls: nvhost_ctrl_9
   ref: /dev/nvhost-ctrl
*/
void nvhost_ctrl_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4b30ULL || rel >= 0x3d4be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4be0 size=704 callers=4 calls=0
   ref: /dev/nvhost-ctrl
*/
void nvhost_ctrl_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4be0ULL || rel >= 0x3d4ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4ea0 size=16 callers=0 calls=0
*/
void sub_3d4ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4ea0ULL || rel >= 0x3d4eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4eb0 size=160 callers=0 calls=1
   calls: nvhost_ctrl_9
   ref: /dev/nvhost-ctrl
*/
void nvhost_ctrl_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4eb0ULL || rel >= 0x3d4f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4f50 size=16 callers=0 calls=0
*/
void sub_3d4f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4f50ULL || rel >= 0x3d4f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4f60 size=176 callers=0 calls=0
*/
void sub_3d4f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4f60ULL || rel >= 0x3d5010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5010 size=96 callers=0 calls=0
*/
void sub_3d5010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5010ULL || rel >= 0x3d5070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5070 size=16 callers=0 calls=0
*/
void sub_3d5070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5070ULL || rel >= 0x3d5080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5080 size=16 callers=0 calls=0
*/
void sub_3d5080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5080ULL || rel >= 0x3d5090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5090 size=16 callers=0 calls=0
*/
void sub_3d5090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5090ULL || rel >= 0x3d50a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d50a0 size=16 callers=0 calls=0
*/
void sub_3d50a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d50a0ULL || rel >= 0x3d50b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d50b0 size=32 callers=0 calls=0
*/
void sub_3d50b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d50b0ULL || rel >= 0x3d50d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d50d0 size=416 callers=0 calls=0
   ref: /dev/nvhost-ctrl
*/
void nvhost_ctrl_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d50d0ULL || rel >= 0x3d5270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5270 size=32 callers=0 calls=0
*/
void sub_3d5270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5270ULL || rel >= 0x3d5290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5290 size=16 callers=0 calls=0
*/
void sub_3d5290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5290ULL || rel >= 0x3d52a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d52a0 size=80 callers=0 calls=0
*/
void sub_3d52a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d52a0ULL || rel >= 0x3d52f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d52f0 size=80 callers=0 calls=0
*/
void sub_3d52f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d52f0ULL || rel >= 0x3d5340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5340 size=96 callers=0 calls=0
*/
void sub_3d5340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5340ULL || rel >= 0x3d53a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d53a0 size=64 callers=0 calls=0
*/
void sub_3d53a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d53a0ULL || rel >= 0x3d53e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d53e0 size=16 callers=0 calls=0
*/
void sub_3d53e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d53e0ULL || rel >= 0x3d53f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d53f0 size=16 callers=0 calls=0
*/
void sub_3d53f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d53f0ULL || rel >= 0x3d5400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5400 size=16 callers=0 calls=0
*/
void sub_3d5400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5400ULL || rel >= 0x3d5410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5410 size=16 callers=0 calls=0
*/
void sub_3d5410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5410ULL || rel >= 0x3d5420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5420 size=16 callers=0 calls=0
*/
void sub_3d5420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5420ULL || rel >= 0x3d5430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5430 size=16 callers=0 calls=0
*/
void sub_3d5430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5430ULL || rel >= 0x3d5440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5440 size=144 callers=0 calls=1
   calls: sub_3d40c0
*/
void sub_3d5440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5440ULL || rel >= 0x3d54d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d54d0 size=16 callers=0 calls=0
*/
void sub_3d54d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d54d0ULL || rel >= 0x3d54e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d54e0 size=272 callers=0 calls=0
*/
void sub_3d54e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d54e0ULL || rel >= 0x3d55f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d55f0 size=16 callers=1 calls=0
*/
void sub_3d55f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d55f0ULL || rel >= 0x3d5600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5600 size=16 callers=1 calls=0
*/
void sub_3d5600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5600ULL || rel >= 0x3d5610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5610 size=16 callers=1 calls=0
*/
void sub_3d5610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5610ULL || rel >= 0x3d5620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5620 size=16 callers=1 calls=0
*/
void sub_3d5620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5620ULL || rel >= 0x3d5630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5630 size=16 callers=1 calls=0
*/
void sub_3d5630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5630ULL || rel >= 0x3d5640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5640 size=16 callers=1 calls=0
*/
void sub_3d5640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5640ULL || rel >= 0x3d5650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5650 size=112 callers=1 calls=0
*/
void sub_3d5650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5650ULL || rel >= 0x3d56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d56c0 size=272 callers=2 calls=8
   calls: blocklinear, persist_tegra_compression, persist_tegra_gpu_mapping_cache, persist_tegra_scan_props, sub_3deed0, sub_3dffc0, sub_3dffe0, unnamed_19
*/
void sub_3d56c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d56c0ULL || rel >= 0x3d57d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d57d0 size=64 callers=2 calls=1
   calls: sub_3d56c0
*/
void sub_3d57d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d57d0ULL || rel >= 0x3d5810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5810 size=112 callers=4 calls=2
   calls: sub_3dffe0, unnamed_19
*/
void sub_3d5810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5810ULL || rel >= 0x3d5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5880 size=32 callers=0 calls=0
*/
void sub_3d5880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5880ULL || rel >= 0x3d58a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d58a0 size=240 callers=0 calls=1
   calls: sub_3d6970
*/
void sub_3d58a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d58a0ULL || rel >= 0x3d5990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5990 size=64 callers=5 calls=0
*/
void sub_3d5990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5990ULL || rel >= 0x3d59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d59d0 size=608 callers=4 calls=1
   calls: sub_3d5c30
*/
void sub_3d59d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d59d0ULL || rel >= 0x3d5c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5c30 size=272 callers=4 calls=1
   calls: sub_3d65b0
*/
void sub_3d5c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5c30ULL || rel >= 0x3d5d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5d40 size=2160 callers=4 calls=5
   calls: persist_tegra_compression, sub_3d59d0, sub_3d65b0, sub_3d7100, sub_3d9360
*/
void sub_3d5d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5d40ULL || rel >= 0x3d65b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d65b0 size=368 callers=4 calls=0
*/
void sub_3d65b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d65b0ULL || rel >= 0x3d6720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6720 size=448 callers=1 calls=0
*/
void sub_3d6720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6720ULL || rel >= 0x3d68e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d68e0 size=80 callers=1 calls=0
*/
void sub_3d68e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d68e0ULL || rel >= 0x3d6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6930 size=64 callers=10 calls=1
   calls: unnamed_11
*/
void sub_3d6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6930ULL || rel >= 0x3d6970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6970 size=208 callers=1 calls=1
   calls: sub_3d56c0
*/
void sub_3d6970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6970ULL || rel >= 0x3d6a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6a40 size=80 callers=0 calls=2
   calls: sub_3d5650, sub_3d5810
*/
void sub_3d6a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6a40ULL || rel >= 0x3d6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6a90 size=480 callers=0 calls=2
   calls: blocklinear, sub_3d6f20
*/
void sub_3d6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6a90ULL || rel >= 0x3d6c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6c70 size=64 callers=0 calls=1
   calls: unnamed_11
*/
void sub_3d6c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6c70ULL || rel >= 0x3d6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6cb0 size=624 callers=0 calls=1
   calls: persist_tegra_compression
   ref: Nvidia Gralloc
*/
void Nvidia_Gralloc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6cb0ULL || rel >= 0x3d6f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6f20 size=480 callers=1 calls=2
   calls: sub_3d5c30, sub_3d5d40
*/
void sub_3d6f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6f20ULL || rel >= 0x3d7100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7100 size=384 callers=2 calls=5
   calls: sub_3d57d0, sub_3d6720, sub_3d9350, sub_3dc090, sub_3e1500
*/
void sub_3d7100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7100ULL || rel >= 0x3d7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7280 size=352 callers=2 calls=4
   calls: sub_3d5810, sub_3d68e0, sub_3d73e0, sub_3e1510
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7280ULL || rel >= 0x3d73e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d73e0 size=208 callers=3 calls=1
   calls: sub_3e1510
*/
void sub_3d73e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d73e0ULL || rel >= 0x3d74b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d74b0 size=96 callers=0 calls=0
*/
void sub_3d74b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d74b0ULL || rel >= 0x3d7510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7510 size=16 callers=0 calls=0
*/
void sub_3d7510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7510ULL || rel >= 0x3d7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7520 size=240 callers=1 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7520ULL || rel >= 0x3d7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7610 size=288 callers=1 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7610ULL || rel >= 0x3d7730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7730 size=576 callers=1 calls=3
   calls: unnamed_12, unnamed_13, unnamed_26
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
   ref: NvGrDecompressBuffer
*/
void NvGrDecompressBuffer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7730ULL || rel >= 0x3d7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7970 size=752 callers=0 calls=3
   calls: sub_3d59d0, sub_3d73e0, sub_3e0480
*/
void sub_3d7970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7970ULL || rel >= 0x3d7c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7c60 size=64 callers=0 calls=1
   calls: unnamed_15
*/
void sub_3d7c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7c60ULL || rel >= 0x3d7ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7ca0 size=176 callers=0 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7ca0ULL || rel >= 0x3d7d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7d50 size=2224 callers=2 calls=3
   calls: NvGrDecompressBuffer, sub_3d5d40, unnamed_25
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7d50ULL || rel >= 0x3d8600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d8600 size=48 callers=0 calls=1
   calls: unnamed_16
*/
void sub_3d8600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d8600ULL || rel >= 0x3d8630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d8630 size=384 callers=1 calls=1
   calls: unnamed_15
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d8630ULL || rel >= 0x3d87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d87b0 size=16 callers=0 calls=0
*/
void sub_3d87b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d87b0ULL || rel >= 0x3d87c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d87c0 size=512 callers=0 calls=1
   calls: unnamed_25
*/
void sub_3d87c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d87c0ULL || rel >= 0x3d89c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d89c0 size=128 callers=0 calls=1
   calls: unnamed_25
*/
void sub_3d89c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d89c0ULL || rel >= 0x3d8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d8a40 size=208 callers=0 calls=1
   calls: sub_3d8b10
*/
void sub_3d8a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d8a40ULL || rel >= 0x3d8b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d8b10 size=800 callers=3 calls=0
*/
void sub_3d8b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d8b10ULL || rel >= 0x3d8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d8e30 size=816 callers=0 calls=1
   calls: sub_3d8b10
   ref: gralloc::get_fence
*/
void gralloc_get_fence(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d8e30ULL || rel >= 0x3d9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d9160 size=480 callers=0 calls=1
   calls: sub_3d8b10
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d9160ULL || rel >= 0x3d9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d9340 size=16 callers=0 calls=0
*/
void sub_3d9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d9340ULL || rel >= 0x3d9350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d9350 size=16 callers=1 calls=0
*/
void sub_3d9350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d9350ULL || rel >= 0x3d9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d9360 size=11568 callers=2 calls=0
*/
void sub_3d9360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d9360ULL || rel >= 0x3dc090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc090 size=10896 callers=1 calls=0
*/
void sub_3dc090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc090ULL || rel >= 0x3deb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003deb20 size=416 callers=0 calls=2
   calls: sub_3d57d0, sub_3e1500
*/
void sub_3deb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3deb20ULL || rel >= 0x3decc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003decc0 size=528 callers=0 calls=3
   calls: sub_3d5810, sub_3d6930, sub_3e1510
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3decc0ULL || rel >= 0x3deed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003deed0 size=16 callers=1 calls=0
*/
void sub_3deed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3deed0ULL || rel >= 0x3deee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003deee0 size=448 callers=3 calls=3
   calls: sub_3d5810, sub_3d6930, sub_3e1510
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3deee0ULL || rel >= 0x3df0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df0a0 size=1760 callers=0 calls=3
   calls: sub_3d5d40, sub_3d6930, sub_3dfef0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df0a0ULL || rel >= 0x3df780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df780 size=16 callers=0 calls=0
*/
void sub_3df780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df780ULL || rel >= 0x3df790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df790 size=16 callers=0 calls=0
*/
void sub_3df790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df790ULL || rel >= 0x3df7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df7a0 size=16 callers=0 calls=0
*/
void sub_3df7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df7a0ULL || rel >= 0x3df7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df7b0 size=16 callers=0 calls=0
*/
void sub_3df7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df7b0ULL || rel >= 0x3df7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df7c0 size=240 callers=0 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df7c0ULL || rel >= 0x3df8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df8b0 size=144 callers=0 calls=0
*/
void sub_3df8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df8b0ULL || rel >= 0x3df940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df940 size=400 callers=0 calls=1
   calls: sub_3d6930
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df940ULL || rel >= 0x3dfad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dfad0 size=560 callers=0 calls=1
   calls: unnamed_25
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dfad0ULL || rel >= 0x3dfd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dfd00 size=176 callers=0 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dfd00ULL || rel >= 0x3dfdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dfdb0 size=320 callers=0 calls=0
   ref:       Scratch pool (%zu total):
   ref: %d, size=(%d, %d), format = %x, layout = %d
*/
void Scratch_pool_zu_total(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dfdb0ULL || rel >= 0x3dfef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dfef0 size=208 callers=1 calls=0
*/
void sub_3dfef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dfef0ULL || rel >= 0x3dffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dffc0 size=32 callers=1 calls=0
*/
void sub_3dffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dffc0ULL || rel >= 0x3dffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dffe0 size=48 callers=3 calls=0
*/
void sub_3dffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dffe0ULL || rel >= 0x3e0010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0010 size=720 callers=4 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0010ULL || rel >= 0x3e02e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e02e0 size=416 callers=1 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e02e0ULL || rel >= 0x3e0480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0480 size=2624 callers=1 calls=5
   calls: sub_3d5990, sub_3d7100, sub_3d9360, sub_3e1500, sub_3e1510
*/
void sub_3e0480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0480ULL || rel >= 0x3e0ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0ec0 size=240 callers=2 calls=0
   ref: persist.tegra.grlayout
   ref: blocklinear
   ref: default
*/
void blocklinear(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0ec0ULL || rel >= 0x3e0fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0fb0 size=256 callers=3 calls=0
   ref: persist.tegra.compression
*/
void persist_tegra_compression(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0fb0ULL || rel >= 0x3e10b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e10b0 size=240 callers=1 calls=0
   ref: persist.tegra.gpu_mapping_cache
*/
void persist_tegra_gpu_mapping_cache(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e10b0ULL || rel >= 0x3e11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e11a0 size=240 callers=1 calls=0
   ref: persist.tegra.scan_props
*/
void persist_tegra_scan_props(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e11a0ULL || rel >= 0x3e1290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1290 size=624 callers=0 calls=0
   ref: persist.tegra.scan_props
   ref: persist.tegra.compression
   ref: persist.tegra.gpu_mapping_cache
*/
void persist_tegra_scan_props_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1290ULL || rel >= 0x3e1500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1500 size=16 callers=3 calls=0
*/
void sub_3e1500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1500ULL || rel >= 0x3e1510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1510 size=16 callers=7 calls=0
*/
void sub_3e1510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1510ULL || rel >= 0x3e1520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1520 size=128 callers=0 calls=2
   calls: ddkvic, sub_3e2380
*/
void sub_3e1520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1520ULL || rel >= 0x3e15a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e15a0 size=160 callers=0 calls=3
   calls: sub_3e2380, unnamed_27, unnamed_28
*/
void sub_3e15a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e15a0ULL || rel >= 0x3e1640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1640 size=320 callers=0 calls=3
   calls: Validate, sub_3e1b00, sub_3e2380
   ref: NvBlit
*/
void NvBlit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1640ULL || rel >= 0x3e1780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1780 size=240 callers=0 calls=2
   calls: sub_3e2380, unnamed_28
   ref: NvBlitFlush
*/
void NvBlitFlush(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1780ULL || rel >= 0x3e1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1870 size=208 callers=0 calls=2
   calls: OpenEngine, sub_3e2380
   ref: NvBlitQuery
*/
void NvBlitQuery(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1870ULL || rel >= 0x3e1940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1940 size=208 callers=0 calls=2
   calls: sub_3e2380, sub_3e2440
   ref: NvBlitForceFlag
*/
void NvBlitForceFlag(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1940ULL || rel >= 0x3e1a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1a10 size=240 callers=0 calls=1
   calls: sub_3e2380
   ref: NvBlitSetDumpPath
*/
void NvBlitSetDumpPath(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1a10ULL || rel >= 0x3e1b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1b00 size=144 callers=1 calls=1
   calls: unnamed_28
*/
void sub_3e1b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1b00ULL || rel >= 0x3e1b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1b90 size=960 callers=1 calls=0
*/
void sub_3e1b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1b90ULL || rel >= 0x3e1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1f50 size=368 callers=1 calls=2
   calls: nvblit, unnamed_27
   ref: ddkvic
*/
void ddkvic(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1f50ULL || rel >= 0x3e20c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e20c0 size=304 callers=2 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e20c0ULL || rel >= 0x3e21f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e21f0 size=224 callers=1 calls=1
   calls: DdkVicOpen
   ref: OpenEngine
*/
void OpenEngine(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e21f0ULL || rel >= 0x3e22d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e22d0 size=176 callers=1 calls=1
   calls: DdkVicOpen
   ref: OpenEngine
*/
void OpenEngine_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e22d0ULL || rel >= 0x3e2380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2380 size=80 callers=7 calls=0
*/
void sub_3e2380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2380ULL || rel >= 0x3e23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e23d0 size=112 callers=1 calls=0
   ref: nvblit.vic
*/
void nvblit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e23d0ULL || rel >= 0x3e2440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2440 size=48 callers=1 calls=0
*/
void sub_3e2440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2440ULL || rel >= 0x3e2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2470 size=592 callers=3 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2470ULL || rel >= 0x3e26c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e26c0 size=416 callers=3 calls=0
   ref: <%d:%s>
   ref: PrepareCompressibleRead
   ref: <%d:UNKNOWN>
*/
void PrepareCompressibleRead(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e26c0ULL || rel >= 0x3e2860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2860 size=368 callers=1 calls=0
   ref: MarkCompressibleWrite
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void MarkCompressibleWrite(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2860ULL || rel >= 0x3e29d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e29d0 size=2816 callers=1 calls=1
   calls: OpenEngine_2
   ref: <%d:%s>
   ref: Validate
   ref: <%d:UNKNOWN>
*/
void Validate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e29d0ULL || rel >= 0x3e34d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e34d0 size=192 callers=2 calls=0
   ref: DdkVicOpen
*/
void DdkVicOpen(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e34d0ULL || rel >= 0x3e3590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3590 size=48 callers=0 calls=0
*/
void sub_3e3590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3590ULL || rel >= 0x3e35c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e35c0 size=4720 callers=0 calls=3
   calls: MarkCompressibleWrite, PrepareCompressibleRead, sub_3e1b90
   ref: DdkVicConfigure
   ref: DdkVicConfigureMemCpy
   ref: <%d:%s>
   ref: DdkVicBlit
   ref: <%d:UNKNOWN>
*/
void DdkVicConfigureMemCpy(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e35c0ULL || rel >= 0x3e4830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4830 size=48 callers=0 calls=0
   ref: unknown
*/
void unknown(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4830ULL || rel >= 0x3e4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4860 size=848 callers=0 calls=0
   ref: LegacyRGBA
   ref: RGB709_Linear
   ref: RGB2020
   ref: ColorIndex
   ref: RGB2020_Linear
   ref: YCbCr709
   ref: RGB709
   ref: YCbCr2020
*/
void ColorIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4860ULL || rel >= 0x3e4bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4bb0 size=11360 callers=0 calls=0
   ref: B10G10R10A2_709_Linear
   ref: Signed_A16
   ref: U12V12
   ref: V12_709
   ref: Y12_2020
   ref: V16_2020_PQ_ER
   ref: R5G5B5X1
   ref: B5G5R5X1
*/
void X8B8G8R8_2020_Linear(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4bb0ULL || rel >= 0x3e7810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7810 size=8272 callers=0 calls=0
   ref: B10G10R10A2_709_Linear
   ref: Signed_A16
   ref: U12V12
   ref: V12_709
   ref: Y12_2020
   ref: V16_2020_PQ_ER
   ref: R5G5B5X1
   ref: B5G5R5X1
*/
void X8B8G8R8_2020_Linear_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7810ULL || rel >= 0x3e9860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e9860 size=32 callers=6 calls=0
*/
void sub_3e9860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e9860ULL || rel >= 0x3e9880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e9880 size=256 callers=3 calls=0
*/
void sub_3e9880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e9880ULL || rel >= 0x3e9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e9980 size=48 callers=1 calls=0
*/
void sub_3e9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e9980ULL || rel >= 0x3e99b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e99b0 size=160 callers=1 calls=0
*/
void sub_3e99b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e99b0ULL || rel >= 0x3e9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e9a50 size=144 callers=1 calls=0
*/
void sub_3e9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e9a50ULL || rel >= 0x3e9ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e9ae0 size=304 callers=0 calls=0
*/
void sub_3e9ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e9ae0ULL || rel >= 0x3e9c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e9c10 size=2288 callers=0 calls=1
   calls: sub_3ea500
*/
void sub_3e9c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e9c10ULL || rel >= 0x3ea500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ea500 size=544 callers=23 calls=0
*/
void sub_3ea500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ea500ULL || rel >= 0x3ea720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ea720 size=32 callers=1 calls=0
*/
void sub_3ea720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ea720ULL || rel >= 0x3ea740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ea740 size=48 callers=1 calls=0
*/
void sub_3ea740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ea740ULL || rel >= 0x3ea770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ea770 size=96 callers=1 calls=0
*/
void sub_3ea770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ea770ULL || rel >= 0x3ea7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ea7d0 size=640 callers=1 calls=0
*/
void sub_3ea7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ea7d0ULL || rel >= 0x3eaa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eaa50 size=176 callers=1 calls=0
*/
void sub_3eaa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eaa50ULL || rel >= 0x3eab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eab00 size=224 callers=0 calls=0
*/
void sub_3eab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eab00ULL || rel >= 0x3eabe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eabe0 size=128 callers=0 calls=0
*/
void sub_3eabe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eabe0ULL || rel >= 0x3eac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eac60 size=320 callers=0 calls=0
*/
void sub_3eac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eac60ULL || rel >= 0x3eada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eada0 size=192 callers=0 calls=0
*/
void sub_3eada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eada0ULL || rel >= 0x3eae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eae60 size=32 callers=0 calls=0
*/
void sub_3eae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eae60ULL || rel >= 0x3eae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eae80 size=656 callers=0 calls=0
*/
void sub_3eae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eae80ULL || rel >= 0x3eb110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb110 size=112 callers=0 calls=0
*/
void sub_3eb110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb110ULL || rel >= 0x3eb180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb180 size=48 callers=0 calls=0
*/
void sub_3eb180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb180ULL || rel >= 0x3eb1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb1b0 size=240 callers=0 calls=0
*/
void sub_3eb1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb1b0ULL || rel >= 0x3eb2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb2a0 size=96 callers=1 calls=0
*/
void sub_3eb2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb2a0ULL || rel >= 0x3eb300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb300 size=112 callers=1 calls=0
*/
void sub_3eb300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb300ULL || rel >= 0x3eb370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb370 size=160 callers=1 calls=0
*/
void sub_3eb370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb370ULL || rel >= 0x3eb410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb410 size=80 callers=1 calls=0
*/
void sub_3eb410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb410ULL || rel >= 0x3eb460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb460 size=368 callers=1 calls=0
*/
void sub_3eb460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb460ULL || rel >= 0x3eb5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb5d0 size=240 callers=1 calls=0
*/
void sub_3eb5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb5d0ULL || rel >= 0x3eb6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb6c0 size=272 callers=1 calls=0
*/
void sub_3eb6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb6c0ULL || rel >= 0x3eb7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb7d0 size=176 callers=1 calls=0
*/
void sub_3eb7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb7d0ULL || rel >= 0x3eb880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb880 size=1024 callers=3 calls=0
*/
void sub_3eb880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb880ULL || rel >= 0x3ebc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ebc80 size=32 callers=1 calls=0
*/
void sub_3ebc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ebc80ULL || rel >= 0x3ebca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ebca0 size=32 callers=0 calls=0
*/
void sub_3ebca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ebca0ULL || rel >= 0x3ebcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ebcc0 size=64 callers=0 calls=0
*/
void sub_3ebcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ebcc0ULL || rel >= 0x3ebd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ebd00 size=64 callers=1 calls=0
*/
void sub_3ebd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ebd00ULL || rel >= 0x3ebd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ebd40 size=176 callers=0 calls=2
   calls: sub_3ea720, sub_3ea7d0
*/
void sub_3ebd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ebd40ULL || rel >= 0x3ebdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ebdf0 size=96 callers=0 calls=0
*/
void sub_3ebdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ebdf0ULL || rel >= 0x3ebe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ebe50 size=928 callers=0 calls=1
   calls: sub_3ea740
*/
void sub_3ebe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ebe50ULL || rel >= 0x3ec1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ec1f0 size=336 callers=0 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ec1f0ULL || rel >= 0x3ec340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ec340 size=240 callers=0 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ec340ULL || rel >= 0x3ec430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ec430 size=448 callers=0 calls=1
   calls: sub_3ea770
   ref: NVDDK_VIC_PREVENT_USE
*/
void NVDDK_VIC_PREVENT_USE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ec430ULL || rel >= 0x3ec5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ec5f0 size=32 callers=0 calls=0
*/
void sub_3ec5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ec5f0ULL || rel >= 0x3ec610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ec610 size=160 callers=0 calls=1
   calls: sub_3eaa50
*/
void sub_3ec610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ec610ULL || rel >= 0x3ec6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ec6b0 size=176 callers=0 calls=0
*/
void sub_3ec6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ec6b0ULL || rel >= 0x3ec760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ec760 size=80 callers=0 calls=0
*/
void sub_3ec760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ec760ULL || rel >= 0x3ec7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ec7b0 size=16 callers=0 calls=0
*/
void sub_3ec7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ec7b0ULL || rel >= 0x3ec7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ec7c0 size=4752 callers=0 calls=13
   calls: sub_3e9860, sub_3e9880, sub_3e9980, sub_3e99b0, sub_3e9a50, sub_3eb2a0, sub_3eb300, sub_3eb370, sub_3eb410, sub_3eb460, sub_3eb5d0, sub_3eb6c0
   ... +1 more
*/
void sub_3ec7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ec7c0ULL || rel >= 0x3eda50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eda50 size=112 callers=0 calls=1
   calls: sub_3eb7d0
*/
void sub_3eda50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eda50ULL || rel >= 0x3edac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edac0 size=16 callers=0 calls=0
*/
void sub_3edac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edac0ULL || rel >= 0x3edad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edad0 size=16 callers=0 calls=0
*/
void sub_3edad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edad0ULL || rel >= 0x3edae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edae0 size=16 callers=0 calls=0
*/
void sub_3edae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edae0ULL || rel >= 0x3edaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edaf0 size=32 callers=0 calls=0
*/
void sub_3edaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edaf0ULL || rel >= 0x3edb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edb10 size=48 callers=0 calls=0
*/
void sub_3edb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edb10ULL || rel >= 0x3edb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edb40 size=48 callers=0 calls=0
*/
void sub_3edb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edb40ULL || rel >= 0x3edb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edb70 size=128 callers=0 calls=1
   calls: sub_3ebd00
*/
void sub_3edb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edb70ULL || rel >= 0x3edbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edbf0 size=112 callers=0 calls=1
   calls: sub_3ebc80
*/
void sub_3edbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edbf0ULL || rel >= 0x3edc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edc60 size=32 callers=0 calls=0
*/
void sub_3edc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edc60ULL || rel >= 0x3edc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edc80 size=64 callers=0 calls=0
*/
void sub_3edc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edc80ULL || rel >= 0x3edcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edcc0 size=32 callers=0 calls=0
*/
void sub_3edcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edcc0ULL || rel >= 0x3edce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edce0 size=32 callers=0 calls=0
*/
void sub_3edce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edce0ULL || rel >= 0x3edd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edd00 size=80 callers=0 calls=0
*/
void sub_3edd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edd00ULL || rel >= 0x3edd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edd50 size=32 callers=0 calls=0
*/
void sub_3edd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edd50ULL || rel >= 0x3edd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edd70 size=96 callers=0 calls=0
*/
void sub_3edd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edd70ULL || rel >= 0x3eddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eddd0 size=16 callers=0 calls=0
*/
void sub_3eddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eddd0ULL || rel >= 0x3edde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edde0 size=64 callers=0 calls=0
*/
void sub_3edde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edde0ULL || rel >= 0x3ede20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ede20 size=16 callers=0 calls=0
*/
void sub_3ede20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ede20ULL || rel >= 0x3ede30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ede30 size=16 callers=0 calls=0
*/
void sub_3ede30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ede30ULL || rel >= 0x3ede40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ede40 size=16 callers=0 calls=0
*/
void sub_3ede40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ede40ULL || rel >= 0x3ede50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ede50 size=16 callers=0 calls=0
*/
void sub_3ede50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ede50ULL || rel >= 0x3ede60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ede60 size=16 callers=0 calls=0
*/
void sub_3ede60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ede60ULL || rel >= 0x3ede70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ede70 size=16 callers=0 calls=0
*/
void sub_3ede70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ede70ULL || rel >= 0x3ede80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ede80 size=48 callers=0 calls=0
*/
void sub_3ede80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ede80ULL || rel >= 0x3edeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edeb0 size=32 callers=0 calls=0
*/
void sub_3edeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edeb0ULL || rel >= 0x3eded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eded0 size=96 callers=0 calls=0
*/
void sub_3eded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eded0ULL || rel >= 0x3edf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edf30 size=64 callers=0 calls=0
*/
void sub_3edf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edf30ULL || rel >= 0x3edf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edf70 size=64 callers=0 calls=0
*/
void sub_3edf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edf70ULL || rel >= 0x3edfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edfb0 size=64 callers=0 calls=0
*/
void sub_3edfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edfb0ULL || rel >= 0x3edff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edff0 size=48 callers=0 calls=0
*/
void sub_3edff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edff0ULL || rel >= 0x3ee020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee020 size=16 callers=0 calls=0
*/
void sub_3ee020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee020ULL || rel >= 0x3ee030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee030 size=16 callers=0 calls=0
*/
void sub_3ee030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee030ULL || rel >= 0x3ee040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee040 size=64 callers=0 calls=0
*/
void sub_3ee040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee040ULL || rel >= 0x3ee080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee080 size=16 callers=0 calls=0
*/
void sub_3ee080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee080ULL || rel >= 0x3ee090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee090 size=16 callers=0 calls=0
*/
void sub_3ee090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee090ULL || rel >= 0x3ee0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee0a0 size=16 callers=0 calls=0
*/
void sub_3ee0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee0a0ULL || rel >= 0x3ee0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee0b0 size=32 callers=0 calls=0
*/
void sub_3ee0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee0b0ULL || rel >= 0x3ee0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee0d0 size=32 callers=0 calls=0
*/
void sub_3ee0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee0d0ULL || rel >= 0x3ee0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee0f0 size=64 callers=0 calls=0
*/
void sub_3ee0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee0f0ULL || rel >= 0x3ee130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee130 size=64 callers=0 calls=0
*/
void sub_3ee130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee130ULL || rel >= 0x3ee170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee170 size=48 callers=0 calls=0
*/
void sub_3ee170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee170ULL || rel >= 0x3ee1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee1a0 size=48 callers=0 calls=0
*/
void sub_3ee1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee1a0ULL || rel >= 0x3ee1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee1d0 size=48 callers=0 calls=0
*/
void sub_3ee1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee1d0ULL || rel >= 0x3ee200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee200 size=48 callers=0 calls=0
*/
void sub_3ee200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee200ULL || rel >= 0x3ee230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee230 size=96 callers=0 calls=0
*/
void sub_3ee230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee230ULL || rel >= 0x3ee290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee290 size=80 callers=0 calls=0
*/
void sub_3ee290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee290ULL || rel >= 0x3ee2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee2e0 size=80 callers=0 calls=0
*/
void sub_3ee2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee2e0ULL || rel >= 0x3ee330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee330 size=64 callers=0 calls=0
*/
void sub_3ee330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee330ULL || rel >= 0x3ee370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee370 size=64 callers=0 calls=0
*/
void sub_3ee370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee370ULL || rel >= 0x3ee3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee3b0 size=160 callers=0 calls=0
*/
void sub_3ee3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee3b0ULL || rel >= 0x3ee450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee450 size=48 callers=0 calls=0
*/
void sub_3ee450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee450ULL || rel >= 0x3ee480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee480 size=48 callers=0 calls=0
*/
void sub_3ee480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee480ULL || rel >= 0x3ee4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee4b0 size=64 callers=0 calls=0
*/
void sub_3ee4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee4b0ULL || rel >= 0x3ee4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee4f0 size=80 callers=0 calls=0
*/
void sub_3ee4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee4f0ULL || rel >= 0x3ee540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee540 size=48 callers=0 calls=0
*/
void sub_3ee540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee540ULL || rel >= 0x3ee570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee570 size=16 callers=0 calls=0
*/
void sub_3ee570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee570ULL || rel >= 0x3ee580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee580 size=224 callers=0 calls=4
   calls: sub_3f33c0, sub_3f3540, sub_3f35a0, sub_3f45a0
   ref: libnvrm_gpu.so: %s failed
   ref: NvRmGpuLibOpen
*/
void NvRmGpuLibOpen(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee580ULL || rel >= 0x3ee660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee660 size=16 callers=0 calls=0
*/
void sub_3ee660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee660ULL || rel >= 0x3ee670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee670 size=80 callers=0 calls=2
   calls: sub_3f33c0, sub_3f3540
*/
void sub_3ee670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee670ULL || rel >= 0x3ee6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee6c0 size=16 callers=0 calls=0
*/
void sub_3ee6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee6c0ULL || rel >= 0x3ee6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee6d0 size=32 callers=0 calls=0
*/
void sub_3ee6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee6d0ULL || rel >= 0x3ee6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee6f0 size=64 callers=0 calls=0
*/
void sub_3ee6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee6f0ULL || rel >= 0x3ee730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee730 size=32 callers=0 calls=0
*/
void sub_3ee730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee730ULL || rel >= 0x3ee750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee750 size=64 callers=0 calls=0
*/
void sub_3ee750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee750ULL || rel >= 0x3ee790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee790 size=16 callers=0 calls=0
*/
void sub_3ee790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee790ULL || rel >= 0x3ee7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee7a0 size=16 callers=0 calls=0
*/
void sub_3ee7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee7a0ULL || rel >= 0x3ee7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee7b0 size=16 callers=0 calls=0
*/
void sub_3ee7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee7b0ULL || rel >= 0x3ee7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee7c0 size=16 callers=0 calls=0
*/
void sub_3ee7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee7c0ULL || rel >= 0x3ee7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee7d0 size=16 callers=0 calls=0
*/
void sub_3ee7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee7d0ULL || rel >= 0x3ee7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee7e0 size=16 callers=0 calls=0
*/
void sub_3ee7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee7e0ULL || rel >= 0x3ee7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee7f0 size=16 callers=0 calls=0
*/
void sub_3ee7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee7f0ULL || rel >= 0x3ee800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee800 size=16 callers=0 calls=0
*/
void sub_3ee800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee800ULL || rel >= 0x3ee810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee810 size=16 callers=0 calls=0
*/
void sub_3ee810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee810ULL || rel >= 0x3ee820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee820 size=16 callers=0 calls=0
*/
void sub_3ee820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee820ULL || rel >= 0x3ee830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee830 size=16 callers=0 calls=0
*/
void sub_3ee830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee830ULL || rel >= 0x3ee840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee840 size=16 callers=0 calls=0
*/
void sub_3ee840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee840ULL || rel >= 0x3ee850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee850 size=16 callers=0 calls=0
*/
void sub_3ee850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee850ULL || rel >= 0x3ee860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee860 size=16 callers=0 calls=0
*/
void sub_3ee860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee860ULL || rel >= 0x3ee870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee870 size=96 callers=0 calls=0
*/
void sub_3ee870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee870ULL || rel >= 0x3ee8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee8d0 size=16 callers=0 calls=0
*/
void sub_3ee8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee8d0ULL || rel >= 0x3ee8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee8e0 size=16 callers=0 calls=0
*/
void sub_3ee8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee8e0ULL || rel >= 0x3ee8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee8f0 size=32 callers=0 calls=0
*/
void sub_3ee8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee8f0ULL || rel >= 0x3ee910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee910 size=16 callers=0 calls=0
*/
void sub_3ee910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee910ULL || rel >= 0x3ee920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee920 size=112 callers=0 calls=0
*/
void sub_3ee920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee920ULL || rel >= 0x3ee990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee990 size=96 callers=0 calls=0
*/
void sub_3ee990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee990ULL || rel >= 0x3ee9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee9f0 size=16 callers=0 calls=0
*/
void sub_3ee9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee9f0ULL || rel >= 0x3eea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eea00 size=32 callers=0 calls=0
*/
void sub_3eea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eea00ULL || rel >= 0x3eea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eea20 size=32 callers=0 calls=0
*/
void sub_3eea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eea20ULL || rel >= 0x3eea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eea40 size=48 callers=0 calls=0
*/
void sub_3eea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eea40ULL || rel >= 0x3eea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eea70 size=64 callers=0 calls=0
*/
void sub_3eea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eea70ULL || rel >= 0x3eeab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eeab0 size=16 callers=0 calls=0
*/
void sub_3eeab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eeab0ULL || rel >= 0x3eeac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eeac0 size=16 callers=0 calls=0
*/
void sub_3eeac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eeac0ULL || rel >= 0x3eead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eead0 size=112 callers=0 calls=0
*/
void sub_3eead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eead0ULL || rel >= 0x3eeb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eeb40 size=64 callers=0 calls=0
*/
void sub_3eeb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eeb40ULL || rel >= 0x3eeb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eeb80 size=16 callers=0 calls=0
*/
void sub_3eeb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eeb80ULL || rel >= 0x3eeb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eeb90 size=16 callers=0 calls=0
*/
void sub_3eeb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eeb90ULL || rel >= 0x3eeba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eeba0 size=112 callers=0 calls=0
*/
void sub_3eeba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eeba0ULL || rel >= 0x3eec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eec10 size=80 callers=0 calls=0
*/
void sub_3eec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eec10ULL || rel >= 0x3eec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eec60 size=112 callers=0 calls=0
*/
void sub_3eec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eec60ULL || rel >= 0x3eecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eecd0 size=16 callers=0 calls=0
*/
void sub_3eecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eecd0ULL || rel >= 0x3eece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eece0 size=16 callers=0 calls=0
*/
void sub_3eece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eece0ULL || rel >= 0x3eecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eecf0 size=64 callers=0 calls=0
*/
void sub_3eecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eecf0ULL || rel >= 0x3eed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eed30 size=352 callers=0 calls=0
   ref: libnvrm_gpu.so: failed to set timeslice
   ref: libnvrm_gpu.so: failed to set interleave
*/
void libnvrm_gpu_so_failed_to_set_timeslice(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eed30ULL || rel >= 0x3eee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eee90 size=64 callers=0 calls=0
*/
void sub_3eee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eee90ULL || rel >= 0x3eeed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eeed0 size=16 callers=0 calls=0
*/
void sub_3eeed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eeed0ULL || rel >= 0x3eeee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eeee0 size=32 callers=0 calls=0
*/
void sub_3eeee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eeee0ULL || rel >= 0x3eef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eef00 size=32 callers=0 calls=0
*/
void sub_3eef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eef00ULL || rel >= 0x3eef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eef20 size=16 callers=0 calls=0
*/
void sub_3eef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eef20ULL || rel >= 0x3eef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eef30 size=16 callers=0 calls=0
*/
void sub_3eef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eef30ULL || rel >= 0x3eef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eef40 size=32 callers=0 calls=0
*/
void sub_3eef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eef40ULL || rel >= 0x3eef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eef60 size=32 callers=0 calls=0
*/
void sub_3eef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eef60ULL || rel >= 0x3eef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eef80 size=16 callers=0 calls=0
*/
void sub_3eef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eef80ULL || rel >= 0x3eef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eef90 size=32 callers=0 calls=0
*/
void sub_3eef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eef90ULL || rel >= 0x3eefb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eefb0 size=48 callers=0 calls=0
*/
void sub_3eefb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eefb0ULL || rel >= 0x3eefe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eefe0 size=48 callers=0 calls=0
*/
void sub_3eefe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eefe0ULL || rel >= 0x3ef010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef010 size=48 callers=0 calls=0
*/
void sub_3ef010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef010ULL || rel >= 0x3ef040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef040 size=16 callers=0 calls=0
*/
void sub_3ef040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef040ULL || rel >= 0x3ef050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef050 size=32 callers=0 calls=0
*/
void sub_3ef050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef050ULL || rel >= 0x3ef070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef070 size=16 callers=0 calls=0
*/
void sub_3ef070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef070ULL || rel >= 0x3ef080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef080 size=16 callers=0 calls=0
*/
void sub_3ef080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef080ULL || rel >= 0x3ef090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef090 size=32 callers=0 calls=0
*/
void sub_3ef090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef090ULL || rel >= 0x3ef0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef0b0 size=16 callers=0 calls=0
*/
void sub_3ef0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef0b0ULL || rel >= 0x3ef0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef0c0 size=16 callers=0 calls=0
*/
void sub_3ef0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef0c0ULL || rel >= 0x3ef0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef0d0 size=16 callers=0 calls=0
*/
void sub_3ef0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef0d0ULL || rel >= 0x3ef0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef0e0 size=16 callers=0 calls=0
*/
void sub_3ef0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef0e0ULL || rel >= 0x3ef0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef0f0 size=16 callers=0 calls=0
*/
void sub_3ef0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef0f0ULL || rel >= 0x3ef100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef100 size=16 callers=0 calls=0
*/
void sub_3ef100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef100ULL || rel >= 0x3ef110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef110 size=64 callers=0 calls=0
*/
void sub_3ef110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef110ULL || rel >= 0x3ef150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef150 size=16 callers=0 calls=0
*/
void sub_3ef150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef150ULL || rel >= 0x3ef160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef160 size=16 callers=0 calls=0
*/
void sub_3ef160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef160ULL || rel >= 0x3ef170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef170 size=16 callers=0 calls=0
*/
void sub_3ef170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef170ULL || rel >= 0x3ef180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef180 size=16 callers=0 calls=0
*/
void sub_3ef180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef180ULL || rel >= 0x3ef190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef190 size=16 callers=0 calls=0
*/
void sub_3ef190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef190ULL || rel >= 0x3ef1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef1a0 size=16 callers=0 calls=0
*/
void sub_3ef1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef1a0ULL || rel >= 0x3ef1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef1b0 size=16 callers=0 calls=0
*/
void sub_3ef1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef1b0ULL || rel >= 0x3ef1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef1c0 size=16 callers=0 calls=0
*/
void sub_3ef1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef1c0ULL || rel >= 0x3ef1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef1d0 size=16 callers=0 calls=0
*/
void sub_3ef1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef1d0ULL || rel >= 0x3ef1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef1e0 size=16 callers=0 calls=0
*/
void sub_3ef1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef1e0ULL || rel >= 0x3ef1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef1f0 size=16 callers=0 calls=0
*/
void sub_3ef1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef1f0ULL || rel >= 0x3ef200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef200 size=16 callers=0 calls=0
*/
void sub_3ef200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef200ULL || rel >= 0x3ef210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef210 size=16 callers=0 calls=0
*/
void sub_3ef210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef210ULL || rel >= 0x3ef220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef220 size=16 callers=0 calls=0
*/
void sub_3ef220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef220ULL || rel >= 0x3ef230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef230 size=64 callers=0 calls=0
*/
void sub_3ef230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef230ULL || rel >= 0x3ef270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef270 size=16 callers=0 calls=0
*/
void sub_3ef270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef270ULL || rel >= 0x3ef280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef280 size=96 callers=0 calls=0
*/
void sub_3ef280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef280ULL || rel >= 0x3ef2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef2e0 size=64 callers=0 calls=0
*/
void sub_3ef2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef2e0ULL || rel >= 0x3ef320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef320 size=16 callers=0 calls=0
*/
void sub_3ef320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef320ULL || rel >= 0x3ef330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef330 size=16 callers=0 calls=0
*/
void sub_3ef330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef330ULL || rel >= 0x3ef340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef340 size=48 callers=0 calls=0
*/
void sub_3ef340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef340ULL || rel >= 0x3ef370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef370 size=48 callers=0 calls=0
*/
void sub_3ef370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef370ULL || rel >= 0x3ef3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef3a0 size=16 callers=0 calls=0
*/
void sub_3ef3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef3a0ULL || rel >= 0x3ef3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef3b0 size=32 callers=0 calls=0
*/
void sub_3ef3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef3b0ULL || rel >= 0x3ef3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef3d0 size=64 callers=0 calls=0
*/
void sub_3ef3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef3d0ULL || rel >= 0x3ef410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef410 size=16 callers=0 calls=0
*/
void sub_3ef410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef410ULL || rel >= 0x3ef420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef420 size=16 callers=0 calls=0
*/
void sub_3ef420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef420ULL || rel >= 0x3ef430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef430 size=16 callers=0 calls=0
*/
void sub_3ef430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef430ULL || rel >= 0x3ef440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef440 size=16 callers=0 calls=0
*/
void sub_3ef440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef440ULL || rel >= 0x3ef450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef450 size=16 callers=0 calls=0
*/
void sub_3ef450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef450ULL || rel >= 0x3ef460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef460 size=16 callers=0 calls=0
*/
void sub_3ef460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef460ULL || rel >= 0x3ef470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef470 size=16 callers=0 calls=0
*/
void sub_3ef470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef470ULL || rel >= 0x3ef480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef480 size=128 callers=0 calls=0
*/
void sub_3ef480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef480ULL || rel >= 0x3ef500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef500 size=16 callers=0 calls=0
*/
void sub_3ef500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef500ULL || rel >= 0x3ef510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef510 size=128 callers=0 calls=0
*/
void sub_3ef510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef510ULL || rel >= 0x3ef590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef590 size=16 callers=0 calls=0
*/
void sub_3ef590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef590ULL || rel >= 0x3ef5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef5a0 size=128 callers=0 calls=0
*/
void sub_3ef5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef5a0ULL || rel >= 0x3ef620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef620 size=16 callers=0 calls=0
*/
void sub_3ef620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef620ULL || rel >= 0x3ef630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef630 size=16 callers=0 calls=0
*/
void sub_3ef630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef630ULL || rel >= 0x3ef640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef640 size=128 callers=0 calls=0
*/
void sub_3ef640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef640ULL || rel >= 0x3ef6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef6c0 size=16 callers=0 calls=0
*/
void sub_3ef6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef6c0ULL || rel >= 0x3ef6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef6d0 size=16 callers=0 calls=0
*/
void sub_3ef6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef6d0ULL || rel >= 0x3ef6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef6e0 size=16 callers=0 calls=0
*/
void sub_3ef6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef6e0ULL || rel >= 0x3ef6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef6f0 size=64 callers=0 calls=0
*/
void sub_3ef6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef6f0ULL || rel >= 0x3ef730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef730 size=64 callers=0 calls=1
   calls: sub_3ef9a0
*/
void sub_3ef730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef730ULL || rel >= 0x3ef770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef770 size=16 callers=0 calls=0
*/
void sub_3ef770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef770ULL || rel >= 0x3ef780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef780 size=16 callers=2 calls=0
*/
void sub_3ef780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef780ULL || rel >= 0x3ef790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef790 size=176 callers=110 calls=0
*/
void sub_3ef790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef790ULL || rel >= 0x3ef840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef840 size=352 callers=8 calls=0
*/
void sub_3ef840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef840ULL || rel >= 0x3ef9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef9a0 size=16 callers=2 calls=0
*/
void sub_3ef9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef9a0ULL || rel >= 0x3ef9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef9b0 size=32 callers=0 calls=0
*/
void sub_3ef9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef9b0ULL || rel >= 0x3ef9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ef9d0 size=160 callers=2 calls=1
   calls: sub_3f04c0
*/
void sub_3ef9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ef9d0ULL || rel >= 0x3efa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efa70 size=16 callers=0 calls=0
*/
void sub_3efa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efa70ULL || rel >= 0x3efa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efa80 size=32 callers=1 calls=0
*/
void sub_3efa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efa80ULL || rel >= 0x3efaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efaa0 size=16 callers=0 calls=0
*/
void sub_3efaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efaa0ULL || rel >= 0x3efab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efab0 size=16 callers=0 calls=0
*/
void sub_3efab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efab0ULL || rel >= 0x3efac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efac0 size=32 callers=2 calls=0
*/
void sub_3efac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efac0ULL || rel >= 0x3efae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efae0 size=432 callers=1 calls=0
*/
void sub_3efae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efae0ULL || rel >= 0x3efc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efc90 size=16 callers=0 calls=0
*/
void sub_3efc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efc90ULL || rel >= 0x3efca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efca0 size=16 callers=0 calls=0
*/
void sub_3efca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efca0ULL || rel >= 0x3efcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efcb0 size=16 callers=0 calls=0
*/
void sub_3efcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efcb0ULL || rel >= 0x3efcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efcc0 size=16 callers=0 calls=0
*/
void sub_3efcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efcc0ULL || rel >= 0x3efcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efcd0 size=16 callers=0 calls=0
*/
void sub_3efcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efcd0ULL || rel >= 0x3efce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efce0 size=16 callers=0 calls=0
*/
void sub_3efce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efce0ULL || rel >= 0x3efcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efcf0 size=16 callers=0 calls=0
*/
void sub_3efcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efcf0ULL || rel >= 0x3efd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efd00 size=16 callers=0 calls=0
*/
void sub_3efd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efd00ULL || rel >= 0x3efd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efd10 size=16 callers=0 calls=0
*/
void sub_3efd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efd10ULL || rel >= 0x3efd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efd20 size=16 callers=0 calls=0
*/
void sub_3efd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efd20ULL || rel >= 0x3efd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efd30 size=16 callers=0 calls=0
*/
void sub_3efd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efd30ULL || rel >= 0x3efd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efd40 size=16 callers=0 calls=0
*/
void sub_3efd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efd40ULL || rel >= 0x3efd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efd50 size=16 callers=0 calls=0
*/
void sub_3efd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efd50ULL || rel >= 0x3efd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efd60 size=16 callers=0 calls=0
*/
void sub_3efd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efd60ULL || rel >= 0x3efd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efd70 size=16 callers=0 calls=0
*/
void sub_3efd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efd70ULL || rel >= 0x3efd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efd80 size=16 callers=0 calls=0
*/
void sub_3efd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efd80ULL || rel >= 0x3efd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efd90 size=16 callers=0 calls=0
*/
void sub_3efd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efd90ULL || rel >= 0x3efda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efda0 size=16 callers=0 calls=0
*/
void sub_3efda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efda0ULL || rel >= 0x3efdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efdb0 size=16 callers=0 calls=0
*/
void sub_3efdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efdb0ULL || rel >= 0x3efdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efdc0 size=16 callers=0 calls=0
*/
void sub_3efdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efdc0ULL || rel >= 0x3efdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efdd0 size=16 callers=0 calls=0
*/
void sub_3efdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efdd0ULL || rel >= 0x3efde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

