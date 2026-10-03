/* main functions 017908a0..017b0d20 (202 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 017908a0 size=32 callers=4 calls=0
*/
void sub_17908a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17908a0ULL || rel >= 0x17908c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017908c0 size=16 callers=4 calls=0
*/
void sub_17908c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17908c0ULL || rel >= 0x17908d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017908d0 size=64 callers=4 calls=0
*/
void sub_17908d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17908d0ULL || rel >= 0x1790910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790910 size=64 callers=6 calls=0
*/
void sub_1790910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790910ULL || rel >= 0x1790950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790950 size=80 callers=1 calls=0
*/
void sub_1790950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790950ULL || rel >= 0x17909a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017909a0 size=32 callers=2 calls=0
*/
void sub_17909a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17909a0ULL || rel >= 0x17909c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017909c0 size=16 callers=2 calls=0
*/
void sub_17909c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17909c0ULL || rel >= 0x17909d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017909d0 size=64 callers=2 calls=0
*/
void sub_17909d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17909d0ULL || rel >= 0x1790a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790a10 size=64 callers=2 calls=0
*/
void sub_1790a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790a10ULL || rel >= 0x1790a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790a50 size=96 callers=8 calls=1
   calls: sub_178dac0
*/
void sub_1790a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790a50ULL || rel >= 0x1790ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790ab0 size=96 callers=6 calls=1
   calls: sub_178dac0
*/
void sub_1790ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790ab0ULL || rel >= 0x1790b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790b10 size=64 callers=8 calls=0
*/
void sub_1790b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790b10ULL || rel >= 0x1790b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790b50 size=16 callers=8 calls=0
*/
void sub_1790b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790b50ULL || rel >= 0x1790b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790b60 size=208 callers=14 calls=2
   calls: sub_178dac0, sub_17911a0
*/
void sub_1790b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790b60ULL || rel >= 0x1790c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790c30 size=64 callers=15 calls=0
*/
void sub_1790c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790c30ULL || rel >= 0x1790c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790c70 size=32 callers=12 calls=0
*/
void sub_1790c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790c70ULL || rel >= 0x1790c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790c90 size=16 callers=13 calls=0
*/
void sub_1790c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790c90ULL || rel >= 0x1790ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790ca0 size=320 callers=15 calls=3
   calls: sub_178d540, sub_178d620, sub_17911b0
*/
void sub_1790ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790ca0ULL || rel >= 0x1790de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790de0 size=16 callers=18 calls=0
*/
void sub_1790de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790de0ULL || rel >= 0x1790df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790df0 size=32 callers=12 calls=0
*/
void sub_1790df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790df0ULL || rel >= 0x1790e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790e10 size=16 callers=7 calls=0
*/
void sub_1790e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790e10ULL || rel >= 0x1790e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790e20 size=224 callers=5 calls=2
   calls: sub_178d540, sub_178d620
*/
void sub_1790e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790e20ULL || rel >= 0x1790f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790f00 size=16 callers=5 calls=0
*/
void sub_1790f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790f00ULL || rel >= 0x1790f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790f10 size=32 callers=5 calls=0
*/
void sub_1790f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790f10ULL || rel >= 0x1790f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790f30 size=16 callers=8 calls=0
*/
void sub_1790f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790f30ULL || rel >= 0x1790f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790f40 size=192 callers=4 calls=1
   calls: sub_178d620
*/
void sub_1790f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790f40ULL || rel >= 0x1791000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791000 size=16 callers=4 calls=0
*/
void sub_1791000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791000ULL || rel >= 0x1791010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791010 size=16 callers=1 calls=0
*/
void sub_1791010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791010ULL || rel >= 0x1791020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791020 size=48 callers=1 calls=2
   calls: sub_178df00, sub_17912c0
*/
void sub_1791020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791020ULL || rel >= 0x1791050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791050 size=32 callers=1 calls=0
*/
void sub_1791050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791050ULL || rel >= 0x1791070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791070 size=16 callers=0 calls=0
*/
void sub_1791070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791070ULL || rel >= 0x1791080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791080 size=208 callers=1 calls=4
   calls: SDK_MW_Nintendo_NintendoSDK_gfx_7_3_2_Release, nvnVertexAttribStateSetStreamIndex, sub_178d530, sub_178d780
   ref: nvnDeviceGetProcAddress
*/
void nvnDeviceGetProcAddress_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791080ULL || rel >= 0x1791150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791150 size=64 callers=0 calls=0
*/
void sub_1791150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791150ULL || rel >= 0x1791190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791190 size=16 callers=1 calls=0
*/
void sub_1791190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791190ULL || rel >= 0x17911a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017911a0 size=16 callers=1 calls=0
*/
void sub_17911a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17911a0ULL || rel >= 0x17911b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017911b0 size=16 callers=1 calls=0
*/
void sub_17911b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17911b0ULL || rel >= 0x17911c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017911c0 size=48 callers=0 calls=0
*/
void sub_17911c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17911c0ULL || rel >= 0x17911f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017911f0 size=192 callers=1 calls=8
   calls: sub_17912e0, sub_17912f0, sub_1791300, sub_1791310, sub_1791320, sub_1791330, sub_1791340, sub_1791350
*/
void sub_17911f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17911f0ULL || rel >= 0x17912b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017912b0 size=16 callers=0 calls=0
*/
void sub_17912b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17912b0ULL || rel >= 0x17912c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017912c0 size=16 callers=2 calls=0
*/
void sub_17912c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17912c0ULL || rel >= 0x17912d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017912d0 size=16 callers=1 calls=0
*/
void sub_17912d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17912d0ULL || rel >= 0x17912e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017912e0 size=16 callers=1 calls=0
*/
void sub_17912e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17912e0ULL || rel >= 0x17912f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017912f0 size=16 callers=1 calls=0
*/
void sub_17912f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17912f0ULL || rel >= 0x1791300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791300 size=16 callers=1 calls=0
*/
void sub_1791300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791300ULL || rel >= 0x1791310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791310 size=16 callers=1 calls=0
*/
void sub_1791310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791310ULL || rel >= 0x1791320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791320 size=16 callers=1 calls=0
*/
void sub_1791320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791320ULL || rel >= 0x1791330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791330 size=16 callers=1 calls=0
*/
void sub_1791330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791330ULL || rel >= 0x1791340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791340 size=16 callers=1 calls=0
*/
void sub_1791340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791340ULL || rel >= 0x1791350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791350 size=16 callers=1 calls=0
*/
void sub_1791350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791350ULL || rel >= 0x1791360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791360 size=32 callers=1 calls=0
*/
void sub_1791360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791360ULL || rel >= 0x1791380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791380 size=32 callers=4 calls=0
*/
void sub_1791380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791380ULL || rel >= 0x17913a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017913a0 size=32 callers=1 calls=0
*/
void sub_17913a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17913a0ULL || rel >= 0x17913c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017913c0 size=48 callers=1 calls=0
*/
void sub_17913c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17913c0ULL || rel >= 0x17913f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017913f0 size=16 callers=2 calls=0
*/
void sub_17913f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17913f0ULL || rel >= 0x1791400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791400 size=16 callers=0 calls=0
*/
void sub_1791400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791400ULL || rel >= 0x1791410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791410 size=16 callers=4 calls=0
*/
void sub_1791410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791410ULL || rel >= 0x1791420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791420 size=16 callers=3 calls=0
*/
void sub_1791420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791420ULL || rel >= 0x1791430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791430 size=48 callers=2 calls=0
*/
void sub_1791430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791430ULL || rel >= 0x1791460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791460 size=16 callers=4 calls=0
*/
void sub_1791460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791460ULL || rel >= 0x1791470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791470 size=16 callers=3 calls=0
*/
void sub_1791470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791470ULL || rel >= 0x1791480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791480 size=16 callers=77 calls=0
*/
void sub_1791480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791480ULL || rel >= 0x1791490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791490 size=16 callers=3 calls=0
*/
void sub_1791490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791490ULL || rel >= 0x17914a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017914a0 size=16 callers=1 calls=0
*/
void sub_17914a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17914a0ULL || rel >= 0x17914b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017914b0 size=16 callers=2 calls=0
*/
void sub_17914b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17914b0ULL || rel >= 0x17914c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017914c0 size=16 callers=1 calls=0
*/
void sub_17914c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17914c0ULL || rel >= 0x17914d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017914d0 size=16 callers=1 calls=0
*/
void sub_17914d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17914d0ULL || rel >= 0x17914e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017914e0 size=16 callers=1 calls=0
*/
void sub_17914e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17914e0ULL || rel >= 0x17914f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017914f0 size=16 callers=1 calls=0
*/
void sub_17914f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17914f0ULL || rel >= 0x1791500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791500 size=16 callers=0 calls=0
*/
void sub_1791500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791500ULL || rel >= 0x1791510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791510 size=16 callers=1 calls=0
*/
void sub_1791510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791510ULL || rel >= 0x1791520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791520 size=32 callers=1 calls=0
*/
void sub_1791520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791520ULL || rel >= 0x1791540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791540 size=176 callers=1 calls=0
*/
void sub_1791540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791540ULL || rel >= 0x17915f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017915f0 size=16 callers=0 calls=0
*/
void sub_17915f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17915f0ULL || rel >= 0x1791600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791600 size=384 callers=1 calls=0
*/
void sub_1791600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791600ULL || rel >= 0x1791780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791780 size=384 callers=0 calls=1
   calls: sub_1791600
*/
void sub_1791780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791780ULL || rel >= 0x1791900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791900 size=32 callers=0 calls=0
*/
void sub_1791900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791900ULL || rel >= 0x1791920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791920 size=64 callers=0 calls=1
   calls: sub_17a9e80
*/
void sub_1791920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791920ULL || rel >= 0x1791960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791960 size=96 callers=1 calls=1
   calls: sub_17a9e90
*/
void sub_1791960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791960ULL || rel >= 0x17919c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017919c0 size=16 callers=24 calls=0
*/
void sub_17919c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17919c0ULL || rel >= 0x17919d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017919d0 size=176 callers=0 calls=6
   calls: sub_1791a80, sub_17924d0, sub_1792690, sub_1793100, sub_17ab570, sub_17ac5d0
*/
void sub_17919d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17919d0ULL || rel >= 0x1791a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791a80 size=688 callers=1 calls=2
   calls: sub_1791d30, sub_17acea0
*/
void sub_1791a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791a80ULL || rel >= 0x1791d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01791d30 size=1952 callers=2 calls=8
   calls: sub_1793370, sub_1793930, sub_1793ad0, sub_17acea0, sub_17acf00, sub_17acf60, sub_17acfc0, sub_17b5e50
*/
void sub_1791d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791d30ULL || rel >= 0x17924d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017924d0 size=448 callers=1 calls=1
   calls: sub_1791d30
*/
void sub_17924d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17924d0ULL || rel >= 0x1792690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01792690 size=704 callers=1 calls=2
   calls: sub_1792950, sub_17acea0
*/
void sub_1792690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1792690ULL || rel >= 0x1792950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01792950 size=1968 callers=2 calls=8
   calls: sub_1793370, sub_1793930, sub_1794220, sub_17acea0, sub_17acf00, sub_17acf60, sub_17acfc0, sub_17b5e50
*/
void sub_1792950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1792950ULL || rel >= 0x1793100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01793100 size=432 callers=1 calls=1
   calls: sub_1792950
*/
void sub_1793100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1793100ULL || rel >= 0x17932b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017932b0 size=176 callers=0 calls=0
*/
void sub_17932b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17932b0ULL || rel >= 0x1793360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01793360 size=16 callers=0 calls=0
*/
void sub_1793360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1793360ULL || rel >= 0x1793370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01793370 size=1472 callers=2 calls=1
   calls: sub_1793930
*/
void sub_1793370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1793370ULL || rel >= 0x1793930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01793930 size=416 callers=10 calls=0
*/
void sub_1793930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1793930ULL || rel >= 0x1793ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01793ad0 size=1280 callers=3 calls=4
   calls: sub_1793ad0, sub_1793fd0, sub_17acea0, sub_17b5e50
*/
void sub_1793ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1793ad0ULL || rel >= 0x1793fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01793fd0 size=592 callers=6 calls=1
   calls: sub_1793930
*/
void sub_1793fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1793fd0ULL || rel >= 0x1794220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01794220 size=1296 callers=3 calls=4
   calls: sub_1793fd0, sub_1794220, sub_17acea0, sub_17b5e50
*/
void sub_1794220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1794220ULL || rel >= 0x1794730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01794730 size=16 callers=8 calls=0
*/
void sub_1794730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1794730ULL || rel >= 0x1794740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01794740 size=16 callers=0 calls=0
*/
void sub_1794740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1794740ULL || rel >= 0x1794750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01794750 size=16 callers=0 calls=0
*/
void sub_1794750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1794750ULL || rel >= 0x1794760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01794760 size=32 callers=2 calls=0
*/
void sub_1794760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1794760ULL || rel >= 0x1794780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01794780 size=48 callers=4 calls=0
*/
void sub_1794780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1794780ULL || rel >= 0x17947b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017947b0 size=80 callers=0 calls=1
   calls: sub_179cd30
*/
void sub_17947b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17947b0ULL || rel >= 0x1794800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01794800 size=80 callers=0 calls=1
   calls: sub_179cd30
*/
void sub_1794800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1794800ULL || rel >= 0x1794850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01794850 size=16 callers=0 calls=0
*/
void sub_1794850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1794850ULL || rel >= 0x1794860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01794860 size=272 callers=0 calls=1
   calls: sub_179cd10
*/
void sub_1794860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1794860ULL || rel >= 0x1794970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01794970 size=384 callers=0 calls=2
   calls: sub_1794af0, sub_17ac790
*/
void sub_1794970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1794970ULL || rel >= 0x1794af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01794af0 size=864 callers=5 calls=0
*/
void sub_1794af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1794af0ULL || rel >= 0x1794e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01794e50 size=480 callers=0 calls=2
   calls: sub_1794af0, sub_17ac790
*/
void sub_1794e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1794e50ULL || rel >= 0x1795030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01795030 size=176 callers=0 calls=1
   calls: sub_1794af0
*/
void sub_1795030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1795030ULL || rel >= 0x17950e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017950e0 size=512 callers=0 calls=2
   calls: sub_1794af0, sub_17ac790
*/
void sub_17950e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17950e0ULL || rel >= 0x17952e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017952e0 size=384 callers=0 calls=2
   calls: sub_17ac720, sub_17ac750
*/
void sub_17952e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17952e0ULL || rel >= 0x1795460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01795460 size=96 callers=0 calls=0
*/
void sub_1795460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1795460ULL || rel >= 0x17954c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017954c0 size=96 callers=0 calls=0
*/
void sub_17954c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17954c0ULL || rel >= 0x1795520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01795520 size=16 callers=0 calls=0
*/
void sub_1795520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1795520ULL || rel >= 0x1795530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01795530 size=192 callers=0 calls=0
*/
void sub_1795530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1795530ULL || rel >= 0x17955f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017955f0 size=208 callers=0 calls=0
*/
void sub_17955f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17955f0ULL || rel >= 0x17956c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017956c0 size=80 callers=0 calls=0
*/
void sub_17956c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17956c0ULL || rel >= 0x1795710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01795710 size=2592 callers=0 calls=6
   calls: sub_17aa9f0, sub_17aac70, sub_17b7a70, sub_17b7ab0, sub_17b9190, sub_17b9320
   ref: RootPane
*/
void RootPane(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1795710ULL || rel >= 0x1796130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01796130 size=1792 callers=0 calls=4
   calls: sub_1797390, sub_1797780, sub_17b9190, sub_17b9320
*/
void sub_1796130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1796130ULL || rel >= 0x1796830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01796830 size=320 callers=0 calls=1
   calls: sub_17b9190
*/
void sub_1796830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1796830ULL || rel >= 0x1796970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01796970 size=608 callers=0 calls=4
   calls: sub_1796bd0, sub_17aa9f0, sub_17b9190, sub_17b9320
*/
void sub_1796970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1796970ULL || rel >= 0x1796bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01796bd0 size=368 callers=5 calls=1
   calls: sub_17b9db0
*/
void sub_1796bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1796bd0ULL || rel >= 0x1796d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01796d40 size=16 callers=1 calls=0
*/
void sub_1796d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1796d40ULL || rel >= 0x1796d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01796d50 size=288 callers=1 calls=0
   ref: Signature check failed ('%c%c%c%c' must be '%c%c%c%c').
*/
void Signature_check_failed_c_c_c_c_must_be_c_c_c_c_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1796d50ULL || rel >= 0x1796e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01796e70 size=32 callers=3 calls=0
*/
void sub_1796e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1796e70ULL || rel >= 0x1796e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01796e90 size=32 callers=4 calls=0
*/
void sub_1796e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1796e90ULL || rel >= 0x1796eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01796eb0 size=32 callers=3 calls=0
*/
void sub_1796eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1796eb0ULL || rel >= 0x1796ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01796ed0 size=32 callers=2 calls=0
*/
void sub_1796ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1796ed0ULL || rel >= 0x1796ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01796ef0 size=32 callers=1 calls=0
*/
void sub_1796ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1796ef0ULL || rel >= 0x1796f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01796f10 size=240 callers=2 calls=0
*/
void sub_1796f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1796f10ULL || rel >= 0x1797000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01797000 size=48 callers=1 calls=0
*/
void sub_1797000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1797000ULL || rel >= 0x1797030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01797030 size=432 callers=0 calls=0
*/
void sub_1797030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1797030ULL || rel >= 0x17971e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017971e0 size=256 callers=2 calls=2
   calls: sub_1794af0, sub_179e760
*/
void sub_17971e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17971e0ULL || rel >= 0x17972e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017972e0 size=176 callers=0 calls=0
*/
void sub_17972e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17972e0ULL || rel >= 0x1797390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01797390 size=672 callers=1 calls=1
   calls: sub_1797630
*/
void sub_1797390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1797390ULL || rel >= 0x1797630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01797630 size=336 callers=1 calls=0
*/
void sub_1797630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1797630ULL || rel >= 0x1797780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01797780 size=656 callers=2 calls=0
*/
void sub_1797780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1797780ULL || rel >= 0x1797a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01797a10 size=96 callers=1 calls=1
   calls: sub_17999f0
*/
void sub_1797a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1797a10ULL || rel >= 0x1797a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01797a70 size=80 callers=4 calls=3
   calls: sub_179aa60, sub_17b3330, sub_17b8250
*/
void sub_1797a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1797a70ULL || rel >= 0x1797ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01797ac0 size=96 callers=0 calls=4
   calls: sub_1799a10, sub_179aa60, sub_17b3330, sub_17b8250
*/
void sub_1797ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1797ac0ULL || rel >= 0x1797b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01797b20 size=224 callers=1 calls=1
   calls: sub_1799720
*/
void sub_1797b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1797b20ULL || rel >= 0x1797c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01797c00 size=112 callers=4 calls=4
   calls: sub_1789ca0, sub_179aa70, sub_17b3340, sub_17b8260
*/
void sub_1797c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1797c00ULL || rel >= 0x1797c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01797c70 size=368 callers=1 calls=4
   calls: sub_17873b0, sub_1789c10, sub_1799a20, sub_1799aa0
   ref: __Combined.bntx
   ref: %s/%s/%s
*/
void unnamed_80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1797c70ULL || rel >= 0x1797de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01797de0 size=240 callers=1 calls=2
   calls: sub_1799a20, sub_1799aa0
   ref: %s/%s/%s
*/
void unnamed_81(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1797de0ULL || rel >= 0x1797ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01797ed0 size=544 callers=1 calls=3
   calls: sub_1799a20, sub_1799aa0, unnamed_80
   ref: %s/%s/%s
*/
void unnamed_82(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1797ed0ULL || rel >= 0x17980f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017980f0 size=272 callers=1 calls=3
   calls: sub_1799a20, sub_1799aa0, sub_17b9040
   ref: ArchiveShader-%s.bnsh
   ref: %s/%s/%s
*/
void ArchiveShader_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17980f0ULL || rel >= 0x1798200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01798200 size=544 callers=1 calls=4
   calls: sub_1799a20, sub_1799aa0, sub_17b9040, sub_17b9050
   ref: __ArchiveShader.bushvt
   ref: __ArchiveShader.bnsh
   ref: %s/%s/%s
*/
void unnamed_83(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798200ULL || rel >= 0x1798420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01798420 size=304 callers=1 calls=2
   calls: sub_1799a20, sub_1799d40
   ref: %s/%s/
*/
void unnamed_84(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798420ULL || rel >= 0x1798550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01798550 size=80 callers=1 calls=1
   calls: sub_17b2c20
*/
void sub_1798550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798550ULL || rel >= 0x17985a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017985a0 size=80 callers=0 calls=3
   calls: sub_179aa60, sub_17b3330, sub_17b8250
*/
void sub_17985a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17985a0ULL || rel >= 0x17985f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017985f0 size=96 callers=0 calls=4
   calls: sub_179aa60, sub_17b2c00, sub_17b3330, sub_17b8250
*/
void sub_17985f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17985f0ULL || rel >= 0x1798650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01798650 size=256 callers=0 calls=5
   calls: sub_1789ca0, sub_179aa70, sub_179cd30, sub_17b3340, sub_17b8260
*/
void sub_1798650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798650ULL || rel >= 0x1798750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01798750 size=96 callers=0 calls=1
   calls: sub_179cd10
*/
void sub_1798750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798750ULL || rel >= 0x17987b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017987b0 size=96 callers=1 calls=1
   calls: sub_179cd30
*/
void sub_17987b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17987b0ULL || rel >= 0x1798810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01798810 size=112 callers=0 calls=1
   calls: unnamed_81
*/
void sub_1798810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798810ULL || rel >= 0x1798880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01798880 size=112 callers=0 calls=1
   calls: unnamed_84
*/
void sub_1798880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798880ULL || rel >= 0x17988f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017988f0 size=208 callers=0 calls=3
   calls: sub_179ab20, sub_179ab70, unnamed_85
*/
void sub_17988f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17988f0ULL || rel >= 0x17989c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017989c0 size=272 callers=1 calls=2
   calls: sub_1799a20, sub_1799aa0
   ref: %s/%s/%s
*/
void unnamed_85(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17989c0ULL || rel >= 0x1798ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01798ad0 size=16 callers=1 calls=0
*/
void sub_1798ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798ad0ULL || rel >= 0x1798ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01798ae0 size=224 callers=0 calls=3
   calls: sub_17b8310, sub_17b8800, unnamed_86
*/
void sub_1798ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798ae0ULL || rel >= 0x1798bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01798bc0 size=672 callers=1 calls=3
   calls: sub_17873b0, sub_1799a20, sub_1799aa0
   ref: __Combined.bntx
   ref: %s/%s/%s
*/
void unnamed_86(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798bc0ULL || rel >= 0x1798e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01798e60 size=128 callers=0 calls=1
   calls: unnamed_82
*/
void sub_1798e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798e60ULL || rel >= 0x1798ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01798ee0 size=128 callers=0 calls=1
   calls: ArchiveShader_s
*/
void sub_1798ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798ee0ULL || rel >= 0x1798f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01798f60 size=144 callers=0 calls=1
   calls: unnamed_83
*/
void sub_1798f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798f60ULL || rel >= 0x1798ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01798ff0 size=16 callers=1 calls=0
*/
void sub_1798ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798ff0ULL || rel >= 0x1799000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799000 size=208 callers=0 calls=3
   calls: ArchiveShader_s_2, sub_17b33d0, sub_17b3550
*/
void sub_1799000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799000ULL || rel >= 0x17990d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017990d0 size=288 callers=1 calls=2
   calls: sub_1799a20, sub_1799aa0
   ref: ArchiveShader-%s.bnsh
   ref: %s/%s/%s
*/
void ArchiveShader_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17990d0ULL || rel >= 0x17991f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017991f0 size=288 callers=0 calls=4
   calls: sub_17b33d0, sub_17b3550, sub_17b9050, unnamed_87
   ref: __arcsh
*/
void arcsh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17991f0ULL || rel >= 0x1799310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799310 size=464 callers=1 calls=3
   calls: sub_1799a20, sub_1799aa0, sub_17b9050
   ref: __ArchiveShader.bushvt
   ref: __ArchiveShader.bnsh
   ref: %s/%s/%s
*/
void unnamed_87(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799310ULL || rel >= 0x17994e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017994e0 size=144 callers=0 calls=2
   calls: sub_179ac60, sub_17b86d0
*/
void sub_17994e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17994e0ULL || rel >= 0x1799570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799570 size=144 callers=0 calls=2
   calls: sub_179acc0, sub_17b8770
*/
void sub_1799570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799570ULL || rel >= 0x1799600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799600 size=16 callers=0 calls=0
*/
void sub_1799600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799600ULL || rel >= 0x1799610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799610 size=16 callers=0 calls=0
*/
void sub_1799610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799610ULL || rel >= 0x1799620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799620 size=176 callers=0 calls=0
*/
void sub_1799620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799620ULL || rel >= 0x17996d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017996d0 size=16 callers=0 calls=0
*/
void sub_17996d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17996d0ULL || rel >= 0x17996e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017996e0 size=32 callers=0 calls=0
*/
void sub_17996e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17996e0ULL || rel >= 0x1799700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799700 size=32 callers=0 calls=0
*/
void sub_1799700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799700ULL || rel >= 0x1799720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799720 size=720 callers=1 calls=0
*/
void sub_1799720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799720ULL || rel >= 0x17999f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017999f0 size=32 callers=1 calls=0
*/
void sub_17999f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17999f0ULL || rel >= 0x1799a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799a10 size=16 callers=1 calls=0
*/
void sub_1799a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799a10ULL || rel >= 0x1799a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799a20 size=128 callers=13 calls=0
*/
void sub_1799a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799a20ULL || rel >= 0x1799aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799aa0 size=672 callers=12 calls=0
*/
void sub_1799aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799aa0ULL || rel >= 0x1799d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799d40 size=576 callers=2 calls=0
*/
void sub_1799d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799d40ULL || rel >= 0x1799f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799f80 size=32 callers=1 calls=0
*/
void sub_1799f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799f80ULL || rel >= 0x1799fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799fa0 size=16 callers=1 calls=0
*/
void sub_1799fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799fa0ULL || rel >= 0x1799fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01799fb0 size=160 callers=2 calls=4
   calls: sub_1790130, sub_1790df0, sub_179cd10, sub_17b9f60
*/
void sub_1799fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799fb0ULL || rel >= 0x179a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a050 size=32 callers=2 calls=0
*/
void sub_179a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a050ULL || rel >= 0x179a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a070 size=16 callers=0 calls=0
*/
void sub_179a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a070ULL || rel >= 0x179a080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a080 size=112 callers=0 calls=1
   calls: sub_179cd30
*/
void sub_179a080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a080ULL || rel >= 0x179a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a0f0 size=16 callers=5 calls=0
*/
void sub_179a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a0f0ULL || rel >= 0x179a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a100 size=48 callers=0 calls=1
   calls: sub_179cd30
*/
void sub_179a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a100ULL || rel >= 0x179a130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a130 size=96 callers=2 calls=2
   calls: sub_179cd10, sub_179cd30
*/
void sub_179a130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a130ULL || rel >= 0x179a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a190 size=192 callers=1 calls=0
*/
void sub_179a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a190ULL || rel >= 0x179a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a250 size=128 callers=2 calls=0
*/
void sub_179a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a250ULL || rel >= 0x179a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a2d0 size=32 callers=9 calls=0
*/
void sub_179a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a2d0ULL || rel >= 0x179a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a2f0 size=32 callers=1 calls=0
*/
void sub_179a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a2f0ULL || rel >= 0x179a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a310 size=48 callers=14 calls=0
*/
void sub_179a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a310ULL || rel >= 0x179a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a340 size=16 callers=10 calls=0
*/
void sub_179a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a340ULL || rel >= 0x179a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a350 size=480 callers=1 calls=0
*/
void sub_179a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a350ULL || rel >= 0x179a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a530 size=112 callers=3 calls=3
   calls: sub_179a8a0, sub_179a8c0, sub_17a9e70
*/
void sub_179a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a530ULL || rel >= 0x179a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a5a0 size=32 callers=6 calls=0
*/
void sub_179a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a5a0ULL || rel >= 0x179a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a5c0 size=96 callers=0 calls=0
*/
void sub_179a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a5c0ULL || rel >= 0x179a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a620 size=16 callers=0 calls=0
*/
void sub_179a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a620ULL || rel >= 0x179a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a630 size=16 callers=0 calls=0
*/
void sub_179a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a630ULL || rel >= 0x179a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a640 size=16 callers=0 calls=0
*/
void sub_179a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a640ULL || rel >= 0x179a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a650 size=16 callers=0 calls=0
*/
void sub_179a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a650ULL || rel >= 0x179a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a660 size=208 callers=1 calls=2
   calls: sub_1787580, sub_1787590
*/
void sub_179a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a660ULL || rel >= 0x179a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a730 size=16 callers=1 calls=0
*/
void sub_179a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a730ULL || rel >= 0x179a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a740 size=16 callers=0 calls=0
*/
void sub_179a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a740ULL || rel >= 0x179a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a750 size=32 callers=2 calls=0
*/
void sub_179a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a750ULL || rel >= 0x179a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a770 size=16 callers=0 calls=0
*/
void sub_179a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a770ULL || rel >= 0x179a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a780 size=16 callers=3 calls=0
*/
void sub_179a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a780ULL || rel >= 0x179a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a790 size=80 callers=1 calls=1
   calls: sub_177a830
*/
void sub_179a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a790ULL || rel >= 0x179a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a7e0 size=64 callers=1 calls=1
   calls: sub_177a8b0
*/
void sub_179a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a7e0ULL || rel >= 0x179a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a820 size=32 callers=1 calls=0
*/
void sub_179a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a820ULL || rel >= 0x179a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a840 size=16 callers=1 calls=0
*/
void sub_179a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a840ULL || rel >= 0x179a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a850 size=80 callers=3 calls=0
*/
void sub_179a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a850ULL || rel >= 0x179a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a8a0 size=32 callers=3 calls=0
*/
void sub_179a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a8a0ULL || rel >= 0x179a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a8c0 size=64 callers=5 calls=0
*/
void sub_179a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a8c0ULL || rel >= 0x179a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a900 size=144 callers=5 calls=4
   calls: sub_17883c0, sub_1788560, sub_17893e0, sub_17894b0
*/
void sub_179a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a900ULL || rel >= 0x179a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a990 size=32 callers=2 calls=0
*/
void sub_179a990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a990ULL || rel >= 0x179a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a9b0 size=48 callers=1 calls=0
*/
void sub_179a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a9b0ULL || rel >= 0x179a9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a9e0 size=16 callers=1 calls=0
*/
void sub_179a9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a9e0ULL || rel >= 0x179a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179a9f0 size=16 callers=1 calls=0
*/
void sub_179a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a9f0ULL || rel >= 0x179aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179aa00 size=96 callers=0 calls=0
*/
void sub_179aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179aa00ULL || rel >= 0x179aa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179aa60 size=16 callers=4 calls=0
*/
void sub_179aa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179aa60ULL || rel >= 0x179aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179aa70 size=176 callers=3 calls=1
   calls: sub_179cd30
*/
void sub_179aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179aa70ULL || rel >= 0x179ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179ab20 size=80 callers=2 calls=0
*/
void sub_179ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ab20ULL || rel >= 0x179ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179ab70 size=240 callers=1 calls=1
   calls: sub_179cd10
*/
void sub_179ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ab70ULL || rel >= 0x179ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179ac60 size=96 callers=2 calls=1
   calls: sub_177c0f0
*/
void sub_179ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ac60ULL || rel >= 0x179acc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179acc0 size=96 callers=2 calls=1
   calls: sub_177c120
*/
void sub_179acc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179acc0ULL || rel >= 0x179ad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179ad20 size=1376 callers=1 calls=17
   calls: aVertex, sub_177a920, sub_177aa20, sub_177ab00, sub_1787320, sub_17873f0, sub_1787960, sub_178e500, sub_178f910, sub_178f930, sub_179b280, sub_179b4b0
   ... +5 more
*/
void sub_179ad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ad20ULL || rel >= 0x179b280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179b280 size=560 callers=1 calls=11
   calls: sub_1787320, sub_1787360, sub_1787960, sub_1787ac0, sub_1787bf0, sub_1787c10, sub_1787c60, sub_1789bc0, sub_1789bd0, sub_1789c10, sub_179ccf0
*/
void sub_179b280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179b280ULL || rel >= 0x179b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179b4b0 size=336 callers=2 calls=0
*/
void sub_179b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179b4b0ULL || rel >= 0x179b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179b600 size=832 callers=7 calls=2
   calls: sub_1787490, sub_17874c0
*/
void sub_179b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179b600ULL || rel >= 0x179b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179b940 size=320 callers=1 calls=3
   calls: sub_17874f0, sub_1787500, sub_178fb70
*/
void sub_179b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179b940ULL || rel >= 0x179ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179ba80 size=16 callers=11 calls=0
*/
void sub_179ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ba80ULL || rel >= 0x179ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179ba90 size=928 callers=3 calls=1
   calls: sub_179b4b0
*/
void sub_179ba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ba90ULL || rel >= 0x179be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179be30 size=32 callers=0 calls=0
*/
void sub_179be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179be30ULL || rel >= 0x179be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179be50 size=224 callers=1 calls=6
   calls: sub_1787a90, sub_1789be0, sub_178f8f0, sub_178fb50, sub_17b3ab0, sub_17b3ad0
*/
void sub_179be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179be50ULL || rel >= 0x179bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179bf30 size=128 callers=1 calls=3
   calls: sub_1787ab0, sub_178f900, sub_178fb60
*/
void sub_179bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179bf30ULL || rel >= 0x179bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179bfb0 size=1136 callers=1 calls=8
   calls: sub_1787bb0, sub_1789ca0, sub_178e5b0, sub_178f920, sub_178fb40, sub_178fd20, sub_179cd30, sub_17b3dd0
*/
void sub_179bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179bfb0ULL || rel >= 0x179c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179c420 size=1088 callers=1 calls=1
   calls: sub_177ae80
*/
void sub_179c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179c420ULL || rel >= 0x179c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179c860 size=128 callers=1 calls=1
   calls: sub_177aea0
*/
void sub_179c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179c860ULL || rel >= 0x179c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179c8e0 size=32 callers=8 calls=0
*/
void sub_179c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179c8e0ULL || rel >= 0x179c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179c900 size=16 callers=1 calls=0
*/
void sub_179c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179c900ULL || rel >= 0x179c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179c910 size=48 callers=1 calls=0
*/
void sub_179c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179c910ULL || rel >= 0x179c940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179c940 size=208 callers=1 calls=1
   calls: sub_179cd10
*/
void sub_179c940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179c940ULL || rel >= 0x179ca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179ca10 size=80 callers=1 calls=1
   calls: sub_179cd10
*/
void sub_179ca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ca10ULL || rel >= 0x179ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179ca60 size=112 callers=0 calls=1
   calls: sub_179cd30
*/
void sub_179ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ca60ULL || rel >= 0x179cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179cad0 size=128 callers=0 calls=1
   calls: sub_179cd30
*/
void sub_179cad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179cad0ULL || rel >= 0x179cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179cb50 size=160 callers=1 calls=1
   calls: sub_179cd30
*/
void sub_179cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179cb50ULL || rel >= 0x179cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179cbf0 size=32 callers=1 calls=0
*/
void sub_179cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179cbf0ULL || rel >= 0x179cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179cc10 size=96 callers=7 calls=0
*/
void sub_179cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179cc10ULL || rel >= 0x179cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179cc70 size=80 callers=4 calls=0
   ref: SDK MW+Nintendo+NintendoWare_Ui2d-7_3_2-Release
*/
void SDK_MW_Nintendo_NintendoWare_Ui2d_7_3_2_Release(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179cc70ULL || rel >= 0x179ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179ccc0 size=48 callers=0 calls=0
*/
void sub_179ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ccc0ULL || rel >= 0x179ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179ccf0 size=32 callers=13 calls=0
*/
void sub_179ccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ccf0ULL || rel >= 0x179cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179cd10 size=32 callers=68 calls=0
*/
void sub_179cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179cd10ULL || rel >= 0x179cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179cd30 size=32 callers=105 calls=0
*/
void sub_179cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179cd30ULL || rel >= 0x179cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179cd50 size=64 callers=1 calls=0
*/
void sub_179cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179cd50ULL || rel >= 0x179cd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179cd90 size=48 callers=1 calls=0
*/
void sub_179cd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179cd90ULL || rel >= 0x179cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179cdc0 size=32 callers=0 calls=0
*/
void sub_179cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179cdc0ULL || rel >= 0x179cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179cde0 size=16 callers=0 calls=0
*/
void sub_179cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179cde0ULL || rel >= 0x179cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179cdf0 size=464 callers=2 calls=1
   calls: sub_179cb50
*/
void sub_179cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179cdf0ULL || rel >= 0x179cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179cfc0 size=368 callers=1 calls=1
   calls: sub_179d130
*/
void sub_179cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179cfc0ULL || rel >= 0x179d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179d130 size=320 callers=1 calls=2
   calls: sub_17a38b0, sub_17a3ad0
*/
void sub_179d130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179d130ULL || rel >= 0x179d270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179d270 size=928 callers=0 calls=1
   calls: sub_17ab080
*/
void sub_179d270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179d270ULL || rel >= 0x179d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179d610 size=736 callers=2 calls=0
*/
void sub_179d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179d610ULL || rel >= 0x179d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179d8f0 size=416 callers=1 calls=4
   calls: sub_1796bd0, sub_179da90, sub_17aa9f0, sub_17aaa70
*/
void sub_179d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179d8f0ULL || rel >= 0x179da90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179da90 size=560 callers=1 calls=4
   calls: sub_17a01d0, sub_17a03b0, sub_17a0500, sub_17a3160
*/
void sub_179da90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179da90ULL || rel >= 0x179dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179dcc0 size=1696 callers=0 calls=7
   calls: sub_179c940, sub_179cbf0, sub_179d610, sub_179d8f0, sub_179e390, sub_179f9e0, sub_17a3550
*/
void sub_179dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179dcc0ULL || rel >= 0x179e360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179e360 size=48 callers=7 calls=0
*/
void sub_179e360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179e360ULL || rel >= 0x179e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179e390 size=736 callers=1 calls=0
*/
void sub_179e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179e390ULL || rel >= 0x179e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179e670 size=16 callers=0 calls=0
*/
void sub_179e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179e670ULL || rel >= 0x179e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179e680 size=224 callers=0 calls=0
*/
void sub_179e680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179e680ULL || rel >= 0x179e760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179e760 size=128 callers=1 calls=1
   calls: sub_1794780
*/
void sub_179e760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179e760ULL || rel >= 0x179e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179e7e0 size=144 callers=0 calls=0
*/
void sub_179e7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179e7e0ULL || rel >= 0x179e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179e870 size=48 callers=0 calls=0
*/
void sub_179e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179e870ULL || rel >= 0x179e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179e8a0 size=16 callers=0 calls=0
*/
void sub_179e8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179e8a0ULL || rel >= 0x179e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179e8b0 size=96 callers=0 calls=0
*/
void sub_179e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179e8b0ULL || rel >= 0x179e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179e910 size=80 callers=0 calls=0
*/
void sub_179e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179e910ULL || rel >= 0x179e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179e960 size=1040 callers=0 calls=11
   calls: sub_1794780, sub_1796e70, sub_1796e90, sub_1796eb0, sub_1796ed0, sub_1796ef0, sub_1796f10, sub_1797000, sub_17971e0, sub_179cc10, sub_17b9100
*/
void sub_179e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179e960ULL || rel >= 0x179ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179ed70 size=128 callers=0 calls=1
   calls: sub_17ace50
*/
void sub_179ed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ed70ULL || rel >= 0x179edf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179edf0 size=304 callers=2 calls=4
   calls: sub_1789270, sub_17892a0, sub_179a750, sub_179edf0
*/
void sub_179edf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179edf0ULL || rel >= 0x179ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179ef20 size=304 callers=0 calls=1
   calls: sub_17ac650
*/
void sub_179ef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ef20ULL || rel >= 0x179f050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179f050 size=96 callers=0 calls=1
   calls: sub_179a750
*/
void sub_179f050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f050ULL || rel >= 0x179f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179f0b0 size=128 callers=0 calls=0
*/
void sub_179f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f0b0ULL || rel >= 0x179f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179f130 size=144 callers=0 calls=0
*/
void sub_179f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f130ULL || rel >= 0x179f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179f1c0 size=160 callers=0 calls=0
*/
void sub_179f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f1c0ULL || rel >= 0x179f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179f260 size=16 callers=0 calls=0
*/
void sub_179f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f260ULL || rel >= 0x179f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179f270 size=320 callers=1 calls=1
   calls: sub_179f270
*/
void sub_179f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f270ULL || rel >= 0x179f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179f3b0 size=96 callers=1 calls=0
*/
void sub_179f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f3b0ULL || rel >= 0x179f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179f410 size=192 callers=1 calls=1
   calls: sub_179f410
*/
void sub_179f410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f410ULL || rel >= 0x179f4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179f4d0 size=16 callers=1 calls=0
*/
void sub_179f4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f4d0ULL || rel >= 0x179f4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179f4e0 size=16 callers=7 calls=0
*/
void sub_179f4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f4e0ULL || rel >= 0x179f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179f4f0 size=944 callers=0 calls=9
   calls: sub_1791960, sub_17a35b0, sub_17a4350, sub_17aa4f0, sub_17b0560, sub_17b07a0, sub_17b2ff0, sub_17b4ad0, sub_17bb790
*/
void sub_179f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f4f0ULL || rel >= 0x179f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179f8a0 size=112 callers=0 calls=0
*/
void sub_179f8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f8a0ULL || rel >= 0x179f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179f910 size=208 callers=0 calls=0
   ref: %s.bflyt
*/
void unnamed_88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f910ULL || rel >= 0x179f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179f9e0 size=352 callers=1 calls=0
*/
void sub_179f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f9e0ULL || rel >= 0x179fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179fb40 size=176 callers=1 calls=1
   calls: sub_17a37b0
*/
void sub_179fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179fb40ULL || rel >= 0x179fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179fbf0 size=176 callers=2 calls=1
   calls: sub_17baf50
*/
void sub_179fbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179fbf0ULL || rel >= 0x179fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179fca0 size=432 callers=3 calls=2
   calls: sub_17a37b0, sub_17b9b80
*/
void sub_179fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179fca0ULL || rel >= 0x179fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179fe50 size=112 callers=2 calls=0
*/
void sub_179fe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179fe50ULL || rel >= 0x179fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0179fec0 size=320 callers=1 calls=1
   calls: sub_17b9b80
*/
void sub_179fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179fec0ULL || rel >= 0x17a0000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a0000 size=304 callers=2 calls=2
   calls: sub_17b9bf0, sub_17bb2e0
   ref: %s.bnvg
*/
void unnamed_89(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a0000ULL || rel >= 0x17a0130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a0130 size=16 callers=1 calls=0
*/
void sub_17a0130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a0130ULL || rel >= 0x17a0140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a0140 size=16 callers=1 calls=0
*/
void sub_17a0140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a0140ULL || rel >= 0x17a0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a0150 size=32 callers=1 calls=0
*/
void sub_17a0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a0150ULL || rel >= 0x17a0170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a0170 size=96 callers=0 calls=0
*/
void sub_17a0170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a0170ULL || rel >= 0x17a01d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a01d0 size=480 callers=1 calls=0
*/
void sub_17a01d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a01d0ULL || rel >= 0x17a03b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a03b0 size=336 callers=1 calls=5
   calls: sub_17a0a00, sub_17a0da0, sub_17a1120, sub_17a1350, sub_17a1750
*/
void sub_17a03b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a03b0ULL || rel >= 0x17a0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a0500 size=1280 callers=1 calls=0
*/
void sub_17a0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a0500ULL || rel >= 0x17a0a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a0a00 size=928 callers=1 calls=1
   calls: sub_17a1850
*/
void sub_17a0a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a0a00ULL || rel >= 0x17a0da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a0da0 size=896 callers=1 calls=2
   calls: sub_179c910, sub_179ca10
*/
void sub_17a0da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a0da0ULL || rel >= 0x17a1120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a1120 size=560 callers=1 calls=1
   calls: sub_17a1ed0
*/
void sub_17a1120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a1120ULL || rel >= 0x17a1350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a1350 size=1024 callers=1 calls=2
   calls: sub_17a2170, sub_17a2680
*/
void sub_17a1350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a1350ULL || rel >= 0x17a1750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a1750 size=256 callers=1 calls=1
   calls: sub_17b46e0
*/
void sub_17a1750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a1750ULL || rel >= 0x17a1850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a1850 size=1184 callers=2 calls=0
*/
void sub_17a1850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a1850ULL || rel >= 0x17a1cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a1cf0 size=480 callers=0 calls=0
*/
void sub_17a1cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a1cf0ULL || rel >= 0x17a1ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a1ed0 size=672 callers=1 calls=0
*/
void sub_17a1ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a1ed0ULL || rel >= 0x17a2170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2170 size=1296 callers=1 calls=0
*/
void sub_17a2170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2170ULL || rel >= 0x17a2680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2680 size=1632 callers=1 calls=0
*/
void sub_17a2680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2680ULL || rel >= 0x17a2ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2ce0 size=32 callers=0 calls=0
*/
void sub_17a2ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2ce0ULL || rel >= 0x17a2d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2d00 size=16 callers=0 calls=0
*/
void sub_17a2d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2d00ULL || rel >= 0x17a2d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2d10 size=16 callers=0 calls=0
*/
void sub_17a2d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2d10ULL || rel >= 0x17a2d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2d20 size=32 callers=0 calls=0
*/
void sub_17a2d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2d20ULL || rel >= 0x17a2d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2d40 size=16 callers=0 calls=0
*/
void sub_17a2d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2d40ULL || rel >= 0x17a2d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2d50 size=64 callers=0 calls=0
*/
void sub_17a2d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2d50ULL || rel >= 0x17a2d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2d90 size=32 callers=0 calls=0
*/
void sub_17a2d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2d90ULL || rel >= 0x17a2db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2db0 size=16 callers=0 calls=0
*/
void sub_17a2db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2db0ULL || rel >= 0x17a2dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2dc0 size=64 callers=0 calls=0
*/
void sub_17a2dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2dc0ULL || rel >= 0x17a2e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2e00 size=32 callers=0 calls=0
*/
void sub_17a2e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2e00ULL || rel >= 0x17a2e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2e20 size=16 callers=0 calls=0
*/
void sub_17a2e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2e20ULL || rel >= 0x17a2e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2e30 size=16 callers=0 calls=0
*/
void sub_17a2e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2e30ULL || rel >= 0x17a2e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2e40 size=32 callers=0 calls=0
*/
void sub_17a2e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2e40ULL || rel >= 0x17a2e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2e60 size=16 callers=0 calls=0
*/
void sub_17a2e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2e60ULL || rel >= 0x17a2e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2e70 size=176 callers=0 calls=0
*/
void sub_17a2e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2e70ULL || rel >= 0x17a2f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2f20 size=32 callers=0 calls=0
*/
void sub_17a2f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2f20ULL || rel >= 0x17a2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2f40 size=16 callers=0 calls=0
*/
void sub_17a2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2f40ULL || rel >= 0x17a2f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a2f50 size=304 callers=0 calls=0
*/
void sub_17a2f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a2f50ULL || rel >= 0x17a3080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3080 size=32 callers=0 calls=0
*/
void sub_17a3080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3080ULL || rel >= 0x17a30a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a30a0 size=16 callers=0 calls=0
*/
void sub_17a30a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a30a0ULL || rel >= 0x17a30b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a30b0 size=112 callers=0 calls=0
*/
void sub_17a30b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a30b0ULL || rel >= 0x17a3120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3120 size=32 callers=0 calls=0
*/
void sub_17a3120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3120ULL || rel >= 0x17a3140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3140 size=16 callers=0 calls=0
*/
void sub_17a3140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3140ULL || rel >= 0x17a3150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3150 size=16 callers=0 calls=0
*/
void sub_17a3150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3150ULL || rel >= 0x17a3160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3160 size=1008 callers=1 calls=0
*/
void sub_17a3160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3160ULL || rel >= 0x17a3550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3550 size=96 callers=1 calls=0
*/
void sub_17a3550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3550ULL || rel >= 0x17a35b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a35b0 size=64 callers=1 calls=1
   calls: sub_17aa4f0
*/
void sub_17a35b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a35b0ULL || rel >= 0x17a35f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a35f0 size=16 callers=0 calls=0
*/
void sub_17a35f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a35f0ULL || rel >= 0x17a3600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3600 size=48 callers=0 calls=1
   calls: sub_17a9e80
*/
void sub_17a3600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3600ULL || rel >= 0x17a3630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3630 size=368 callers=0 calls=3
   calls: sub_179a850, sub_17ab570, sub_17b9b40
*/
void sub_17a3630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3630ULL || rel >= 0x17a37a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a37a0 size=16 callers=0 calls=0
*/
void sub_17a37a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a37a0ULL || rel >= 0x17a37b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a37b0 size=160 callers=2 calls=4
   calls: sub_1790130, sub_1790df0, sub_1799fb0, sub_179cd10
*/
void sub_17a37b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a37b0ULL || rel >= 0x17a3850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3850 size=32 callers=0 calls=0
*/
void sub_17a3850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3850ULL || rel >= 0x17a3870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3870 size=64 callers=0 calls=1
   calls: sub_179a050
*/
void sub_17a3870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3870ULL || rel >= 0x17a38b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a38b0 size=208 callers=1 calls=0
*/
void sub_17a38b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a38b0ULL || rel >= 0x17a3980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3980 size=336 callers=1 calls=2
   calls: sub_1787610, sub_17b8a10
*/
void sub_17a3980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3980ULL || rel >= 0x17a3ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3ad0 size=112 callers=1 calls=0
*/
void sub_17a3ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3ad0ULL || rel >= 0x17a3b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3b40 size=112 callers=0 calls=1
   calls: sub_179cd30
*/
void sub_17a3b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3b40ULL || rel >= 0x17a3bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3bb0 size=400 callers=0 calls=9
   calls: sub_1788560, sub_1788660, sub_1788ef0, sub_179a780, sub_17a3980, sub_17a3d40, sub_17a40a0, sub_17ab3f0, sub_17ac3c0
*/
void sub_17a3bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3bb0ULL || rel >= 0x17a3d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a3d40 size=864 callers=1 calls=3
   calls: sub_17876b0, sub_17876c0, sub_1788d40
*/
void sub_17a3d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a3d40ULL || rel >= 0x17a40a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a40a0 size=304 callers=1 calls=2
   calls: sub_17876c0, sub_1788d40
*/
void sub_17a40a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a40a0ULL || rel >= 0x17a41d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a41d0 size=176 callers=0 calls=0
*/
void sub_17a41d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a41d0ULL || rel >= 0x17a4280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a4280 size=176 callers=0 calls=0
*/
void sub_17a4280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a4280ULL || rel >= 0x17a4330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a4330 size=16 callers=0 calls=0
*/
void sub_17a4330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a4330ULL || rel >= 0x17a4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a4340 size=16 callers=0 calls=0
*/
void sub_17a4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a4340ULL || rel >= 0x17a4350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a4350 size=64 callers=1 calls=1
   calls: sub_17aa4f0
*/
void sub_17a4350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a4350ULL || rel >= 0x17a4390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a4390 size=16 callers=0 calls=0
*/
void sub_17a4390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a4390ULL || rel >= 0x17a43a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a43a0 size=48 callers=0 calls=1
   calls: sub_17a9e80
*/
void sub_17a43a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a43a0ULL || rel >= 0x17a43d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a43d0 size=16 callers=0 calls=0
*/
void sub_17a43d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a43d0ULL || rel >= 0x17a43e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a43e0 size=176 callers=0 calls=0
*/
void sub_17a43e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a43e0ULL || rel >= 0x17a4490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a4490 size=3552 callers=5 calls=6
   calls: sub_179cd10, sub_17a5270, sub_17a54b0, sub_17a5750, sub_17a5820, sub_17b49f0
*/
void sub_17a4490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a4490ULL || rel >= 0x17a5270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a5270 size=576 callers=1 calls=3
   calls: sub_179cd10, sub_179cd30, sub_17a6830
*/
void sub_17a5270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a5270ULL || rel >= 0x17a54b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a54b0 size=672 callers=1 calls=7
   calls: sub_179ccf0, sub_179e360, sub_179fbf0, sub_17a5a50, sub_17b4a90, sub_17b4ab0, sub_17b8c10
*/
void sub_17a54b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a54b0ULL || rel >= 0x17a5750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a5750 size=208 callers=1 calls=5
   calls: sub_179f4e0, sub_17a5d70, sub_17a5e40, sub_17a60c0, sub_17b9050
*/
void sub_17a5750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a5750ULL || rel >= 0x17a5820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a5820 size=224 callers=1 calls=1
   calls: sub_17b98c0
*/
void sub_17a5820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a5820ULL || rel >= 0x17a5900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a5900 size=336 callers=0 calls=7
   calls: sub_178f8f0, sub_178f910, sub_178f930, sub_179b600, sub_179ba90, sub_179ccf0, sub_179cd10
*/
void sub_17a5900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a5900ULL || rel >= 0x17a5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a5a50 size=208 callers=1 calls=6
   calls: sub_179fb40, sub_179fe50, sub_17a0130, sub_17a0140, sub_17b9c90, sub_17b9d10
*/
void sub_17a5a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a5a50ULL || rel >= 0x17a5b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a5b20 size=592 callers=4 calls=4
   calls: sub_179e360, sub_179fec0, sub_17a0150, unnamed_89
*/
void sub_17a5b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a5b20ULL || rel >= 0x17a5d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a5d70 size=208 callers=1 calls=3
   calls: sub_1799f80, sub_179cd10, sub_179f4d0
*/
void sub_17a5d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a5d70ULL || rel >= 0x17a5e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a5e40 size=640 callers=1 calls=2
   calls: sub_179f4e0, sub_17b9050
*/
void sub_17a5e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a5e40ULL || rel >= 0x17a60c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a60c0 size=960 callers=1 calls=0
*/
void sub_17a60c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a60c0ULL || rel >= 0x17a6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a6480 size=224 callers=1 calls=5
   calls: sub_178f900, sub_178f920, sub_178fb40, sub_179ba90, sub_179cd30
*/
void sub_17a6480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a6480ULL || rel >= 0x17a6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a6560 size=160 callers=4 calls=2
   calls: sub_179ba80, sub_179ba90
*/
void sub_17a6560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a6560ULL || rel >= 0x17a6600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a6600 size=32 callers=0 calls=0
*/
void sub_17a6600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a6600ULL || rel >= 0x17a6620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a6620 size=16 callers=0 calls=0
*/
void sub_17a6620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a6620ULL || rel >= 0x17a6630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a6630 size=400 callers=1 calls=3
   calls: sub_179cd30, sub_17b4a70, sub_17b4a80
*/
void sub_17a6630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a6630ULL || rel >= 0x17a67c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a67c0 size=112 callers=4 calls=3
   calls: sub_179cd30, sub_17a6480, sub_17a6630
*/
void sub_17a67c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a67c0ULL || rel >= 0x17a6830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a6830 size=1568 callers=1 calls=0
*/
void sub_17a6830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a6830ULL || rel >= 0x17a6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a6e50 size=32 callers=0 calls=0
*/
void sub_17a6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a6e50ULL || rel >= 0x17a6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a6e70 size=32 callers=0 calls=0
*/
void sub_17a6e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a6e70ULL || rel >= 0x17a6e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a6e90 size=240 callers=2 calls=0
*/
void sub_17a6e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a6e90ULL || rel >= 0x17a6f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a6f80 size=1232 callers=0 calls=3
   calls: sub_179a990, sub_17a7470, sub_17a7900
*/
void sub_17a6f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a6f80ULL || rel >= 0x17a7450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a7450 size=32 callers=62 calls=0
*/
void sub_17a7450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a7450ULL || rel >= 0x17a7470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a7470 size=1168 callers=1 calls=1
   calls: sub_17a7ce0
*/
void sub_17a7470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a7470ULL || rel >= 0x17a7900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a7900 size=992 callers=1 calls=0
*/
void sub_17a7900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a7900ULL || rel >= 0x17a7ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a7ce0 size=2384 callers=1 calls=2
   calls: sub_17b49f0, sub_17b4a70
*/
void sub_17a7ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a7ce0ULL || rel >= 0x17a8630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a8630 size=320 callers=7 calls=7
   calls: sub_1789590, sub_178f1e0, sub_179a9e0, sub_179a9f0, sub_179c8e0, sub_17b3af0, sub_17b3ff0
   ref: uTexture3
*/
void uTexture3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a8630ULL || rel >= 0x17a8770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a8770 size=32 callers=2 calls=0
*/
void sub_17a8770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a8770ULL || rel >= 0x17a8790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a8790 size=1520 callers=0 calls=0
*/
void sub_17a8790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a8790ULL || rel >= 0x17a8d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a8d80 size=288 callers=0 calls=3
   calls: CUS_Vec3_3, sub_17a8ea0, sub_17a9050
*/
void sub_17a8d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a8d80ULL || rel >= 0x17a8ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a8ea0 size=432 callers=1 calls=0
*/
void sub_17a8ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a8ea0ULL || rel >= 0x17a9050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a9050 size=432 callers=1 calls=0
*/
void sub_17a9050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a9050ULL || rel >= 0x17a9200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a9200 size=1616 callers=1 calls=0
   ref: __CUS_Rgba_0
   ref: __CUS_Float_1
   ref: __CUS_Vec3_3
   ref: __CUS_Rgba_1
   ref: __CUS_Rgba_2
   ref: __CUS_Vec2_1
   ref: __CUS_Float_3
   ref: __CUS_Float_0
*/
void CUS_Vec3_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a9200ULL || rel >= 0x17a9850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a9850 size=432 callers=3 calls=0
*/
void sub_17a9850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a9850ULL || rel >= 0x17a9a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a9a00 size=416 callers=2 calls=3
   calls: sub_1788310, sub_1789690, sub_17a9ca0
*/
void sub_17a9a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a9a00ULL || rel >= 0x17a9ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a9ba0 size=128 callers=4 calls=1
   calls: sub_1789690
*/
void sub_17a9ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a9ba0ULL || rel >= 0x17a9c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a9c20 size=128 callers=3 calls=1
   calls: sub_1789690
*/
void sub_17a9c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a9c20ULL || rel >= 0x17a9ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a9ca0 size=256 callers=2 calls=1
   calls: sub_1789690
*/
void sub_17a9ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a9ca0ULL || rel >= 0x17a9da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a9da0 size=208 callers=3 calls=1
   calls: sub_1788310
*/
void sub_17a9da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a9da0ULL || rel >= 0x17a9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a9e70 size=16 callers=4 calls=0
*/
void sub_17a9e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a9e70ULL || rel >= 0x17a9e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a9e80 size=16 callers=8 calls=0
*/
void sub_17a9e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a9e80ULL || rel >= 0x17a9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a9e90 size=64 callers=2 calls=0
*/
void sub_17a9e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a9e90ULL || rel >= 0x17a9ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017a9ed0 size=1568 callers=0 calls=5
   calls: sub_179cd10, sub_17aa520, sub_17aa900, sub_17aaaf0, sub_17abc70
*/
void sub_17a9ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a9ed0ULL || rel >= 0x17aa4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017aa4f0 size=48 callers=7 calls=0
*/
void sub_17aa4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17aa4f0ULL || rel >= 0x17aa520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017aa520 size=992 callers=1 calls=0
*/
void sub_17aa520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17aa520ULL || rel >= 0x17aa900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017aa900 size=240 callers=1 calls=0
*/
void sub_17aa900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17aa900ULL || rel >= 0x17aa9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017aa9f0 size=128 callers=24 calls=0
*/
void sub_17aa9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17aa9f0ULL || rel >= 0x17aaa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017aaa70 size=128 callers=1 calls=1
   calls: sub_17abc70
*/
void sub_17aaa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17aaa70ULL || rel >= 0x17aaaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017aaaf0 size=384 callers=1 calls=5
   calls: sub_179cd10, sub_17abc70, sub_17ad4d0, sub_17ad520, sub_17af160
*/
void sub_17aaaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17aaaf0ULL || rel >= 0x17aac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017aac70 size=128 callers=9 calls=0
*/
void sub_17aac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17aac70ULL || rel >= 0x17aacf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017aacf0 size=16 callers=0 calls=0
*/
void sub_17aacf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17aacf0ULL || rel >= 0x17aad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017aad00 size=640 callers=3 calls=4
   calls: sub_179cd30, sub_179cdf0, sub_17aaf80, sub_17ae050
*/
void sub_17aad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17aad00ULL || rel >= 0x17aaf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017aaf80 size=256 callers=1 calls=2
   calls: sub_179cd30, sub_17ad080
*/
void sub_17aaf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17aaf80ULL || rel >= 0x17ab080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab080 size=64 callers=1 calls=0
*/
void sub_17ab080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab080ULL || rel >= 0x17ab0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab0c0 size=64 callers=0 calls=0
*/
void sub_17ab0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab0c0ULL || rel >= 0x17ab100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab100 size=64 callers=0 calls=0
*/
void sub_17ab100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab100ULL || rel >= 0x17ab140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab140 size=112 callers=15 calls=0
*/
void sub_17ab140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab140ULL || rel >= 0x17ab1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab1b0 size=16 callers=0 calls=0
*/
void sub_17ab1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab1b0ULL || rel >= 0x17ab1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab1c0 size=16 callers=0 calls=0
*/
void sub_17ab1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab1c0ULL || rel >= 0x17ab1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab1d0 size=32 callers=0 calls=0
*/
void sub_17ab1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab1d0ULL || rel >= 0x17ab1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab1f0 size=32 callers=0 calls=0
*/
void sub_17ab1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab1f0ULL || rel >= 0x17ab210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab210 size=16 callers=0 calls=0
*/
void sub_17ab210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab210ULL || rel >= 0x17ab220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab220 size=16 callers=0 calls=0
*/
void sub_17ab220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab220ULL || rel >= 0x17ab230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab230 size=192 callers=0 calls=0
*/
void sub_17ab230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab230ULL || rel >= 0x17ab2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab2f0 size=16 callers=0 calls=0
*/
void sub_17ab2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab2f0ULL || rel >= 0x17ab300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab300 size=224 callers=0 calls=0
*/
void sub_17ab300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab300ULL || rel >= 0x17ab3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab3e0 size=16 callers=0 calls=0
*/
void sub_17ab3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab3e0ULL || rel >= 0x17ab3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab3f0 size=224 callers=1 calls=0
*/
void sub_17ab3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab3f0ULL || rel >= 0x17ab4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab4d0 size=160 callers=1 calls=0
*/
void sub_17ab4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab4d0ULL || rel >= 0x17ab570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab570 size=672 callers=5 calls=2
   calls: sub_17ab810, sub_17ae190
*/
void sub_17ab570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab570ULL || rel >= 0x17ab810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ab810 size=1120 callers=2 calls=0
*/
void sub_17ab810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ab810ULL || rel >= 0x17abc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017abc70 size=480 callers=6 calls=4
   calls: sub_179cd10, sub_179cd30, sub_17abe50, sub_17abfc0
*/
void sub_17abc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17abc70ULL || rel >= 0x17abe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017abe50 size=368 callers=1 calls=1
   calls: sub_179cd10
*/
void sub_17abe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17abe50ULL || rel >= 0x17abfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017abfc0 size=768 callers=1 calls=1
   calls: sub_179cd10
*/
void sub_17abfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17abfc0ULL || rel >= 0x17ac2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac2c0 size=256 callers=1 calls=1
   calls: sub_17ae5c0
*/
void sub_17ac2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac2c0ULL || rel >= 0x17ac3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac3c0 size=112 callers=1 calls=0
*/
void sub_17ac3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac3c0ULL || rel >= 0x17ac430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac430 size=16 callers=0 calls=0
*/
void sub_17ac430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac430ULL || rel >= 0x17ac440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac440 size=80 callers=0 calls=0
*/
void sub_17ac440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac440ULL || rel >= 0x17ac490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac490 size=112 callers=0 calls=0
*/
void sub_17ac490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac490ULL || rel >= 0x17ac500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac500 size=144 callers=0 calls=0
*/
void sub_17ac500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac500ULL || rel >= 0x17ac590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac590 size=64 callers=0 calls=0
*/
void sub_17ac590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac590ULL || rel >= 0x17ac5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac5d0 size=128 callers=2 calls=2
   calls: sub_17ab810, sub_17ac5d0
*/
void sub_17ac5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac5d0ULL || rel >= 0x17ac650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac650 size=80 callers=1 calls=0
*/
void sub_17ac650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac650ULL || rel >= 0x17ac6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac6a0 size=80 callers=15 calls=0
*/
void sub_17ac6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac6a0ULL || rel >= 0x17ac6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac6f0 size=16 callers=0 calls=0
*/
void sub_17ac6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac6f0ULL || rel >= 0x17ac700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac700 size=32 callers=0 calls=0
*/
void sub_17ac700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac700ULL || rel >= 0x17ac720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac720 size=48 callers=23 calls=0
*/
void sub_17ac720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac720ULL || rel >= 0x17ac750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac750 size=64 callers=22 calls=0
*/
void sub_17ac750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac750ULL || rel >= 0x17ac790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac790 size=160 callers=36 calls=0
*/
void sub_17ac790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac790ULL || rel >= 0x17ac830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac830 size=160 callers=0 calls=0
*/
void sub_17ac830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac830ULL || rel >= 0x17ac8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac8d0 size=16 callers=0 calls=0
*/
void sub_17ac8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac8d0ULL || rel >= 0x17ac8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac8e0 size=224 callers=0 calls=0
*/
void sub_17ac8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac8e0ULL || rel >= 0x17ac9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac9c0 size=16 callers=0 calls=0
*/
void sub_17ac9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac9c0ULL || rel >= 0x17ac9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ac9d0 size=272 callers=3 calls=0
*/
void sub_17ac9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ac9d0ULL || rel >= 0x17acae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017acae0 size=224 callers=2 calls=0
*/
void sub_17acae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17acae0ULL || rel >= 0x17acbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017acbc0 size=608 callers=2 calls=2
   calls: sub_17a7450, sub_17b9b40
*/
void sub_17acbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17acbc0ULL || rel >= 0x17ace20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ace20 size=48 callers=5 calls=1
   calls: sub_179ba80
*/
void sub_17ace20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ace20ULL || rel >= 0x17ace50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ace50 size=80 callers=1 calls=0
*/
void sub_17ace50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ace50ULL || rel >= 0x17acea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017acea0 size=96 callers=6 calls=0
*/
void sub_17acea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17acea0ULL || rel >= 0x17acf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017acf00 size=96 callers=2 calls=0
*/
void sub_17acf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17acf00ULL || rel >= 0x17acf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017acf60 size=96 callers=2 calls=0
*/
void sub_17acf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17acf60ULL || rel >= 0x17acfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017acfc0 size=96 callers=2 calls=0
*/
void sub_17acfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17acfc0ULL || rel >= 0x17ad020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ad020 size=96 callers=0 calls=0
*/
void sub_17ad020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ad020ULL || rel >= 0x17ad080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ad080 size=672 callers=1 calls=3
   calls: sub_179cd30, sub_17ad320, sub_17ad400
*/
void sub_17ad080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ad080ULL || rel >= 0x17ad320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ad320 size=224 callers=1 calls=1
   calls: sub_179cd30
*/
void sub_17ad320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ad320ULL || rel >= 0x17ad400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ad400 size=208 callers=1 calls=1
   calls: sub_179cd30
*/
void sub_17ad400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ad400ULL || rel >= 0x17ad4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ad4d0 size=80 callers=1 calls=1
   calls: sub_17b49f0
*/
void sub_17ad4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ad4d0ULL || rel >= 0x17ad520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ad520 size=368 callers=1 calls=8
   calls: sub_179f4e0, sub_17aa9f0, sub_17ad690, sub_17ada00, sub_17adad0, sub_17b3ff0, sub_17b9050, uDropShadowBlur
*/
void sub_17ad520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ad520ULL || rel >= 0x17ad690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ad690 size=560 callers=1 calls=10
   calls: sub_179e360, sub_179f4e0, sub_179fbf0, sub_179fca0, sub_179fe50, sub_17b4a50, sub_17b4a90, sub_17b4ab0, sub_17b9050, unnamed_89
*/
void sub_17ad690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ad690ULL || rel >= 0x17ad8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ad8c0 size=320 callers=1 calls=9
   calls: sub_178f1e0, sub_179e360, sub_179f4e0, sub_179fca0, sub_17b3af0, sub_17b4a50, sub_17b4a90, sub_17b4ab0, sub_17b9050
   ref: uDropShadowBlur
*/
void uDropShadowBlur(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ad8c0ULL || rel >= 0x17ada00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ada00 size=208 callers=1 calls=3
   calls: sub_179f4e0, sub_17b3ff0, sub_17b9050
*/
void sub_17ada00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ada00ULL || rel >= 0x17adad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017adad0 size=1136 callers=1 calls=5
   calls: sub_1787610, sub_1790130, sub_1790df0, sub_179cd10, sub_17b8a10
*/
void sub_17adad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17adad0ULL || rel >= 0x17adf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017adf40 size=272 callers=1 calls=1
   calls: sub_179cd30
*/
void sub_17adf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17adf40ULL || rel >= 0x17ae050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ae050 size=320 callers=1 calls=2
   calls: sub_179cd30, sub_17adf40
*/
void sub_17ae050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ae050ULL || rel >= 0x17ae190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ae190 size=304 callers=1 calls=3
   calls: sub_17aa9f0, sub_17ae2c0, sub_17ae480
*/
void sub_17ae190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ae190ULL || rel >= 0x17ae2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ae2c0 size=448 callers=1 calls=5
   calls: sub_179a340, sub_17a6e90, sub_17ab140, sub_17af2b0, sub_17b9de0
*/
void sub_17ae2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ae2c0ULL || rel >= 0x17ae480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ae480 size=320 callers=1 calls=4
   calls: sub_179a340, sub_17ab140, sub_17afd30, sub_17b9de0
*/
void sub_17ae480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ae480ULL || rel >= 0x17ae5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ae5c0 size=544 callers=1 calls=9
   calls: sub_17880f0, sub_1789590, sub_1789690, sub_179c8e0, sub_17ae7e0, sub_17ae940, sub_17aed50, sub_17af4d0, sub_17b9f00
*/
void sub_17ae5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ae5c0ULL || rel >= 0x17ae7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ae7e0 size=352 callers=1 calls=9
   calls: sub_17880f0, sub_1788560, sub_1788660, sub_1788f20, sub_1789270, sub_17892a0, sub_1789690, sub_179a900, sub_17af4d0
*/
void sub_17ae7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ae7e0ULL || rel >= 0x17ae940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ae940 size=1040 callers=1 calls=5
   calls: sub_1788f20, sub_1789270, sub_17892a0, sub_179a900, sub_17b01d0
*/
void sub_17ae940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ae940ULL || rel >= 0x17aed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017aed50 size=1040 callers=1 calls=8
   calls: sub_17880f0, sub_1788310, sub_1789590, sub_1789690, sub_179ba80, sub_179c8e0, sub_17b3ff0, sub_17b9f00
*/
void sub_17aed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17aed50ULL || rel >= 0x17af160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017af160 size=336 callers=1 calls=1
   calls: sub_17b98c0
*/
void sub_17af160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17af160ULL || rel >= 0x17af2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017af2b0 size=544 callers=1 calls=3
   calls: sub_179a340, sub_17a6e90, sub_17b9b40
*/
void sub_17af2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17af2b0ULL || rel >= 0x17af4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017af4d0 size=368 callers=2 calls=6
   calls: sub_1788310, sub_1789590, sub_179ba80, sub_179c8e0, sub_17b3ff0, sub_17b9f00
*/
void sub_17af4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17af4d0ULL || rel >= 0x17af640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017af640 size=1104 callers=1 calls=0
*/
void sub_17af640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17af640ULL || rel >= 0x17afa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017afa90 size=672 callers=1 calls=3
   calls: sub_179a340, sub_17ab140, sub_17b9b40
*/
void sub_17afa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17afa90ULL || rel >= 0x17afd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017afd30 size=944 callers=3 calls=6
   calls: sub_179a340, sub_17ab140, sub_17af640, sub_17afa90, sub_17b00e0, sub_17b9b40
*/
void sub_17afd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17afd30ULL || rel >= 0x17b00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b00e0 size=240 callers=1 calls=1
   calls: sub_17b9de0
*/
void sub_17b00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b00e0ULL || rel >= 0x17b01d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b01d0 size=912 callers=3 calls=14
   calls: sub_17880f0, sub_1788310, sub_1788560, sub_1788660, sub_1788f20, sub_1789270, sub_17892a0, sub_1789590, sub_1789690, sub_179a900, sub_179ba80, sub_179c900
   ... +2 more
*/
void sub_17b01d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b01d0ULL || rel >= 0x17b0560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b0560 size=80 callers=1 calls=1
   calls: sub_17aa4f0
*/
void sub_17b0560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0560ULL || rel >= 0x17b05b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b05b0 size=16 callers=0 calls=0
*/
void sub_17b05b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b05b0ULL || rel >= 0x17b05c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b05c0 size=48 callers=0 calls=1
   calls: sub_17a9e80
*/
void sub_17b05c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b05c0ULL || rel >= 0x17b05f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b05f0 size=64 callers=0 calls=0
*/
void sub_17b05f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b05f0ULL || rel >= 0x17b0630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b0630 size=16 callers=0 calls=0
*/
void sub_17b0630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0630ULL || rel >= 0x17b0640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b0640 size=160 callers=0 calls=0
*/
void sub_17b0640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0640ULL || rel >= 0x17b06e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b06e0 size=16 callers=0 calls=0
*/
void sub_17b06e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b06e0ULL || rel >= 0x17b06f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b06f0 size=176 callers=0 calls=0
*/
void sub_17b06f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b06f0ULL || rel >= 0x17b07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b07a0 size=496 callers=1 calls=9
   calls: sub_179a0f0, sub_179a130, sub_179a250, sub_179a2d0, sub_179cd10, sub_17a4490, sub_17a5b20, sub_17aa4f0, sub_17b0990
*/
void sub_17b07a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b07a0ULL || rel >= 0x17b0990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b0990 size=576 callers=1 calls=8
   calls: sub_1791460, sub_1791470, sub_17914c0, sub_1791540, sub_179a2f0, sub_179cd10, sub_17b98c0, sub_17b9fb0
*/
void sub_17b0990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0990ULL || rel >= 0x17b0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b0bd0 size=240 callers=0 calls=6
   calls: sub_178f1e0, sub_17aa9f0, sub_17aac70, sub_17ac6a0, sub_17b3af0, sub_17b98c0
   ref: uProceduralShape
*/
void uProceduralShape(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0bd0ULL || rel >= 0x17b0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b0cc0 size=32 callers=0 calls=0
*/
void sub_17b0cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0cc0ULL || rel >= 0x17b0ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b0ce0 size=64 callers=0 calls=1
   calls: sub_17a9e80
*/
void sub_17b0ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0ce0ULL || rel >= 0x17b0d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b0d20 size=224 callers=0 calls=5
   calls: sub_1791410, sub_1791420, sub_179cd30, sub_17a67c0, sub_17aad00
*/
void sub_17b0d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0d20ULL || rel >= 0x17b0e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

