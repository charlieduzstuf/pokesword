/* main functions 003694d0..0038cca0 (21 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 003694d0 size=64 callers=1 calls=0
*/
void sub_3694d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3694d0ULL || rel >= 0x369510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369510 size=160 callers=0 calls=5
   calls: sub_362360, sub_36a5e0, sub_3cd300, sub_3cd470, sub_3d45c0
*/
void sub_369510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369510ULL || rel >= 0x3695b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003695b0 size=160 callers=0 calls=5
   calls: sub_362360, sub_36a5e0, sub_3cd300, sub_3cd470, sub_3d45c0
*/
void sub_3695b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3695b0ULL || rel >= 0x369650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369650 size=160 callers=0 calls=5
   calls: sub_362360, sub_36a5e0, sub_3cd300, sub_3cd470, sub_3d45c0
*/
void sub_369650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369650ULL || rel >= 0x3696f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003696f0 size=176 callers=0 calls=5
   calls: sub_362360, sub_36a5e0, sub_3cd300, sub_3cd470, sub_3d45c0
*/
void sub_3696f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3696f0ULL || rel >= 0x3697a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003697a0 size=368 callers=1 calls=3
   calls: sub_3046a0, sub_3cd230, sub_3d4550
*/
void sub_3697a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3697a0ULL || rel >= 0x369910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369910 size=16 callers=10 calls=0
*/
void sub_369910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369910ULL || rel >= 0x369920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369920 size=16 callers=8 calls=0
*/
void sub_369920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369920ULL || rel >= 0x369930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369930 size=16 callers=7 calls=0
*/
void sub_369930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369930ULL || rel >= 0x369940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369940 size=16 callers=0 calls=0
*/
void sub_369940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369940ULL || rel >= 0x369950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369950 size=16 callers=0 calls=0
*/
void sub_369950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369950ULL || rel >= 0x369960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369960 size=16 callers=0 calls=0
*/
void sub_369960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369960ULL || rel >= 0x369970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369970 size=16 callers=0 calls=0
*/
void sub_369970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369970ULL || rel >= 0x369980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369980 size=16 callers=0 calls=0
*/
void sub_369980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369980ULL || rel >= 0x369990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369990 size=16 callers=0 calls=0
*/
void sub_369990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369990ULL || rel >= 0x3699a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003699a0 size=16 callers=0 calls=0
*/
void sub_3699a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3699a0ULL || rel >= 0x3699b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003699b0 size=16 callers=0 calls=0
*/
void sub_3699b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3699b0ULL || rel >= 0x3699c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003699c0 size=32 callers=0 calls=0
*/
void sub_3699c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3699c0ULL || rel >= 0x3699e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003699e0 size=32 callers=0 calls=0
*/
void sub_3699e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3699e0ULL || rel >= 0x369a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369a00 size=32 callers=0 calls=0
*/
void sub_369a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369a00ULL || rel >= 0x369a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369a20 size=32 callers=0 calls=0
*/
void sub_369a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369a20ULL || rel >= 0x369a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369a40 size=16 callers=0 calls=0
*/
void sub_369a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369a40ULL || rel >= 0x369a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369a50 size=16 callers=0 calls=0
*/
void sub_369a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369a50ULL || rel >= 0x369a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369a60 size=16 callers=0 calls=0
*/
void sub_369a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369a60ULL || rel >= 0x369a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369a70 size=16 callers=0 calls=0
*/
void sub_369a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369a70ULL || rel >= 0x369a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369a80 size=16 callers=0 calls=0
*/
void sub_369a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369a80ULL || rel >= 0x369a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369a90 size=16 callers=0 calls=0
*/
void sub_369a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369a90ULL || rel >= 0x369aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369aa0 size=16 callers=0 calls=0
*/
void sub_369aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369aa0ULL || rel >= 0x369ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369ab0 size=16 callers=0 calls=0
*/
void sub_369ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369ab0ULL || rel >= 0x369ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369ac0 size=48 callers=0 calls=0
*/
void sub_369ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369ac0ULL || rel >= 0x369af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369af0 size=48 callers=0 calls=0
*/
void sub_369af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369af0ULL || rel >= 0x369b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369b20 size=16 callers=0 calls=0
*/
void sub_369b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369b20ULL || rel >= 0x369b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369b30 size=16 callers=0 calls=0
*/
void sub_369b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369b30ULL || rel >= 0x369b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369b40 size=176 callers=0 calls=2
   calls: sub_361400, sub_384340
*/
void sub_369b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369b40ULL || rel >= 0x369bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369bf0 size=16 callers=0 calls=0
*/
void sub_369bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369bf0ULL || rel >= 0x369c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369c00 size=16 callers=0 calls=0
*/
void sub_369c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369c00ULL || rel >= 0x369c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369c10 size=16 callers=0 calls=0
*/
void sub_369c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369c10ULL || rel >= 0x369c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369c20 size=16 callers=0 calls=0
*/
void sub_369c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369c20ULL || rel >= 0x369c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369c30 size=16 callers=0 calls=0
*/
void sub_369c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369c30ULL || rel >= 0x369c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369c40 size=16 callers=0 calls=0
*/
void sub_369c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369c40ULL || rel >= 0x369c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369c50 size=96 callers=0 calls=0
*/
void sub_369c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369c50ULL || rel >= 0x369cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369cb0 size=32 callers=0 calls=0
*/
void sub_369cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369cb0ULL || rel >= 0x369cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369cd0 size=32 callers=0 calls=0
*/
void sub_369cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369cd0ULL || rel >= 0x369cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369cf0 size=32 callers=0 calls=0
*/
void sub_369cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369cf0ULL || rel >= 0x369d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369d10 size=112 callers=0 calls=0
*/
void sub_369d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369d10ULL || rel >= 0x369d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369d80 size=192 callers=0 calls=3
   calls: sub_304740, sub_36a200, sub_3d08c0
*/
void sub_369d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369d80ULL || rel >= 0x369e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369e40 size=208 callers=0 calls=3
   calls: sub_304740, sub_36a200, sub_3d0a00
*/
void sub_369e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369e40ULL || rel >= 0x369f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369f10 size=224 callers=0 calls=6
   calls: sub_304740, sub_32c040, sub_32df00, sub_34fe30, sub_36a200, sub_3d0a00
*/
void sub_369f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369f10ULL || rel >= 0x369ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369ff0 size=240 callers=0 calls=6
   calls: sub_304740, sub_32c040, sub_32df00, sub_34ff30, sub_36a200, sub_3d0a00
*/
void sub_369ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369ff0ULL || rel >= 0x36a0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a0e0 size=32 callers=0 calls=0
*/
void sub_36a0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a0e0ULL || rel >= 0x36a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a100 size=192 callers=0 calls=0
*/
void sub_36a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a100ULL || rel >= 0x36a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a1c0 size=48 callers=0 calls=0
*/
void sub_36a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a1c0ULL || rel >= 0x36a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a1f0 size=16 callers=0 calls=0
*/
void sub_36a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a1f0ULL || rel >= 0x36a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a200 size=816 callers=4 calls=2
   calls: sub_3046a0, sub_304740
*/
void sub_36a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a200ULL || rel >= 0x36a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a530 size=176 callers=1 calls=2
   calls: sub_3046a0, sub_304740
*/
void sub_36a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a530ULL || rel >= 0x36a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a5e0 size=64 callers=5 calls=1
   calls: sub_304740
*/
void sub_36a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a5e0ULL || rel >= 0x36a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a620 size=32 callers=0 calls=0
*/
void sub_36a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a620ULL || rel >= 0x36a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a640 size=112 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_36a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a640ULL || rel >= 0x36a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a6b0 size=368 callers=0 calls=3
   calls: sub_3047c0, sub_373fd0, sub_39c9e0
*/
void sub_36a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a6b0ULL || rel >= 0x36a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a820 size=416 callers=2 calls=3
   calls: sub_3045e0, sub_335420, sub_363510
*/
void sub_36a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a820ULL || rel >= 0x36a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a9c0 size=32 callers=0 calls=0
*/
void sub_36a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a9c0ULL || rel >= 0x36a9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a9e0 size=16 callers=0 calls=0
*/
void sub_36a9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a9e0ULL || rel >= 0x36a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036a9f0 size=512 callers=0 calls=2
   calls: sub_3045e0, sub_39b150
*/
void sub_36a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36a9f0ULL || rel >= 0x36abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036abf0 size=368 callers=1 calls=1
   calls: sub_36f050
*/
void sub_36abf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36abf0ULL || rel >= 0x36ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ad60 size=816 callers=2 calls=10
   calls: sub_3047c0, sub_36b090, sub_36b160, sub_372630, sub_374660, sub_377500, sub_3795c0, sub_379760, sub_379c60, sub_3a5660
*/
void sub_36ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ad60ULL || rel >= 0x36b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b090 size=208 callers=1 calls=2
   calls: sub_36fa70, sub_36ffc0
*/
void sub_36b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b090ULL || rel >= 0x36b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b160 size=320 callers=1 calls=2
   calls: sub_36e680, sub_371870
*/
void sub_36b160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b160ULL || rel >= 0x36b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b2a0 size=176 callers=1 calls=1
   calls: sub_372630
*/
void sub_36b2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b2a0ULL || rel >= 0x36b350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b350 size=464 callers=1 calls=1
   calls: sub_36d790
*/
void sub_36b350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b350ULL || rel >= 0x36b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b520 size=368 callers=0 calls=3
   calls: sub_3045e0, sub_3739b0, sub_373c10
*/
void sub_36b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b520ULL || rel >= 0x36b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b690 size=144 callers=1 calls=0
*/
void sub_36b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b690ULL || rel >= 0x36b720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b720 size=512 callers=1 calls=1
   calls: sub_36b350
*/
void sub_36b720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b720ULL || rel >= 0x36b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b920 size=96 callers=1 calls=1
   calls: sub_36e2a0
*/
void sub_36b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b920ULL || rel >= 0x36b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036b980 size=2928 callers=0 calls=2
   calls: sub_36c4f0, sub_39d140
*/
void sub_36b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36b980ULL || rel >= 0x36c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036c4f0 size=656 callers=1 calls=0
*/
void sub_36c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36c4f0ULL || rel >= 0x36c780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036c780 size=48 callers=0 calls=0
*/
void sub_36c780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36c780ULL || rel >= 0x36c7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036c7b0 size=2848 callers=0 calls=1
   calls: sub_39d140
*/
void sub_36c7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36c7b0ULL || rel >= 0x36d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d2d0 size=208 callers=0 calls=0
*/
void sub_36d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d2d0ULL || rel >= 0x36d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d3a0 size=96 callers=0 calls=0
*/
void sub_36d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d3a0ULL || rel >= 0x36d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d400 size=288 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_36d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d400ULL || rel >= 0x36d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d520 size=48 callers=0 calls=1
   calls: sub_36d560
*/
void sub_36d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d520ULL || rel >= 0x36d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d550 size=16 callers=0 calls=0
*/
void sub_36d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d550ULL || rel >= 0x36d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d560 size=480 callers=2 calls=6
   calls: sub_3047c0, sub_363530, sub_36e2a0, sub_36e680, sub_378ab0, sub_39b740
*/
void sub_36d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d560ULL || rel >= 0x36d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d740 size=48 callers=0 calls=1
   calls: sub_36d560
*/
void sub_36d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d740ULL || rel >= 0x36d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d770 size=16 callers=0 calls=0
*/
void sub_36d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d770ULL || rel >= 0x36d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d780 size=16 callers=0 calls=0
*/
void sub_36d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d780ULL || rel >= 0x36d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d790 size=496 callers=1 calls=0
*/
void sub_36d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d790ULL || rel >= 0x36d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036d980 size=464 callers=0 calls=0
*/
void sub_36d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36d980ULL || rel >= 0x36db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036db50 size=144 callers=0 calls=0
*/
void sub_36db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36db50ULL || rel >= 0x36dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036dbe0 size=336 callers=0 calls=0
*/
void sub_36dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36dbe0ULL || rel >= 0x36dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036dd30 size=336 callers=0 calls=0
*/
void sub_36dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36dd30ULL || rel >= 0x36de80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036de80 size=640 callers=0 calls=0
*/
void sub_36de80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36de80ULL || rel >= 0x36e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e100 size=400 callers=0 calls=0
*/
void sub_36e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e100ULL || rel >= 0x36e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e290 size=16 callers=0 calls=0
*/
void sub_36e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e290ULL || rel >= 0x36e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e2a0 size=480 callers=2 calls=3
   calls: sub_3047c0, sub_36e480, sub_36e680
*/
void sub_36e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e2a0ULL || rel >= 0x36e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e480 size=512 callers=1 calls=3
   calls: sub_3047c0, sub_36e7c0, sub_36eba0
*/
void sub_36e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e480ULL || rel >= 0x36e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e680 size=320 callers=5 calls=2
   calls: sub_3047c0, sub_36eba0
*/
void sub_36e680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e680ULL || rel >= 0x36e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e7c0 size=480 callers=1 calls=3
   calls: sub_3047c0, sub_36e9a0, sub_36eba0
*/
void sub_36e7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e7c0ULL || rel >= 0x36e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036e9a0 size=512 callers=1 calls=2
   calls: sub_3047c0, sub_36ecf0
*/
void sub_36e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36e9a0ULL || rel >= 0x36eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036eba0 size=336 callers=8 calls=1
   calls: sub_3047c0
*/
void sub_36eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36eba0ULL || rel >= 0x36ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ecf0 size=864 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_36ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ecf0ULL || rel >= 0x36f050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036f050 size=896 callers=1 calls=1
   calls: sub_36f3d0
*/
void sub_36f050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36f050ULL || rel >= 0x36f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036f3d0 size=896 callers=3 calls=1
   calls: sub_36f750
*/
void sub_36f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36f3d0ULL || rel >= 0x36f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036f750 size=800 callers=3 calls=0
*/
void sub_36f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36f750ULL || rel >= 0x36fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036fa70 size=336 callers=1 calls=2
   calls: sub_36fbc0, sub_36fd80
*/
void sub_36fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36fa70ULL || rel >= 0x36fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036fbc0 size=448 callers=1 calls=2
   calls: sub_3047c0, sub_36fd80
*/
void sub_36fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36fbc0ULL || rel >= 0x36fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036fd80 size=512 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_36fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36fd80ULL || rel >= 0x36ff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ff80 size=16 callers=0 calls=0
*/
void sub_36ff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ff80ULL || rel >= 0x36ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ff90 size=32 callers=0 calls=0
*/
void sub_36ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ff90ULL || rel >= 0x36ffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ffb0 size=16 callers=0 calls=0
*/
void sub_36ffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ffb0ULL || rel >= 0x36ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0036ffc0 size=336 callers=1 calls=2
   calls: sub_3701f0, sub_3703b0
*/
void sub_36ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x36ffc0ULL || rel >= 0x370110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370110 size=224 callers=0 calls=4
   calls: sub_3705f0, sub_370b40, sub_371090, sub_371530
*/
void sub_370110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370110ULL || rel >= 0x3701f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003701f0 size=448 callers=1 calls=2
   calls: sub_3047c0, sub_3703b0
*/
void sub_3701f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3701f0ULL || rel >= 0x3703b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003703b0 size=512 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3703b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3703b0ULL || rel >= 0x3705b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003705b0 size=32 callers=0 calls=0
*/
void sub_3705b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3705b0ULL || rel >= 0x3705d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003705d0 size=16 callers=0 calls=0
*/
void sub_3705d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3705d0ULL || rel >= 0x3705e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003705e0 size=16 callers=0 calls=0
*/
void sub_3705e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3705e0ULL || rel >= 0x3705f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003705f0 size=336 callers=1 calls=2
   calls: sub_370740, sub_370900
*/
void sub_3705f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3705f0ULL || rel >= 0x370740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370740 size=448 callers=1 calls=2
   calls: sub_3047c0, sub_370900
*/
void sub_370740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370740ULL || rel >= 0x370900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370900 size=512 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_370900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370900ULL || rel >= 0x370b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370b00 size=16 callers=0 calls=0
*/
void sub_370b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370b00ULL || rel >= 0x370b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370b10 size=32 callers=0 calls=0
*/
void sub_370b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370b10ULL || rel >= 0x370b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370b30 size=16 callers=0 calls=0
*/
void sub_370b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370b30ULL || rel >= 0x370b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370b40 size=336 callers=1 calls=2
   calls: sub_370c90, sub_370e50
*/
void sub_370b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370b40ULL || rel >= 0x370c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370c90 size=448 callers=1 calls=2
   calls: sub_3047c0, sub_370e50
*/
void sub_370c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370c90ULL || rel >= 0x370e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00370e50 size=512 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_370e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x370e50ULL || rel >= 0x371050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00371050 size=32 callers=0 calls=0
*/
void sub_371050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x371050ULL || rel >= 0x371070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00371070 size=16 callers=0 calls=0
*/
void sub_371070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x371070ULL || rel >= 0x371080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00371080 size=16 callers=0 calls=0
*/
void sub_371080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x371080ULL || rel >= 0x371090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00371090 size=336 callers=1 calls=2
   calls: sub_3711e0, sub_371350
*/
void sub_371090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x371090ULL || rel >= 0x3711e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003711e0 size=368 callers=1 calls=2
   calls: sub_3047c0, sub_371350
*/
void sub_3711e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3711e0ULL || rel >= 0x371350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00371350 size=416 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_371350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x371350ULL || rel >= 0x3714f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003714f0 size=32 callers=0 calls=0
*/
void sub_3714f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3714f0ULL || rel >= 0x371510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00371510 size=16 callers=0 calls=0
*/
void sub_371510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x371510ULL || rel >= 0x371520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00371520 size=16 callers=0 calls=0
*/
void sub_371520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x371520ULL || rel >= 0x371530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00371530 size=832 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_371530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x371530ULL || rel >= 0x371870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00371870 size=352 callers=1 calls=2
   calls: sub_3047c0, sub_371b40
*/
void sub_371870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x371870ULL || rel >= 0x3719d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003719d0 size=368 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3719d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3719d0ULL || rel >= 0x371b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00371b40 size=288 callers=1 calls=2
   calls: sub_36eba0, sub_371dd0
*/
void sub_371b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x371b40ULL || rel >= 0x371c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00371c60 size=368 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_371c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x371c60ULL || rel >= 0x371dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00371dd0 size=320 callers=1 calls=2
   calls: sub_3047c0, sub_372080
*/
void sub_371dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x371dd0ULL || rel >= 0x371f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00371f10 size=368 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_371f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x371f10ULL || rel >= 0x372080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00372080 size=720 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_372080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x372080ULL || rel >= 0x372350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00372350 size=368 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_372350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x372350ULL || rel >= 0x3724c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003724c0 size=368 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3724c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3724c0ULL || rel >= 0x372630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00372630 size=704 callers=2 calls=4
   calls: sub_3047c0, sub_36e680, sub_3719d0, sub_3728f0
*/
void sub_372630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x372630ULL || rel >= 0x3728f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003728f0 size=880 callers=2 calls=4
   calls: sub_3047c0, sub_36eba0, sub_371c60, sub_372c60
*/
void sub_3728f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3728f0ULL || rel >= 0x372c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00372c60 size=704 callers=2 calls=4
   calls: sub_3047c0, sub_36eba0, sub_371f10, sub_372f20
*/
void sub_372c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x372c60ULL || rel >= 0x372f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00372f20 size=944 callers=2 calls=3
   calls: sub_3047c0, sub_372350, sub_3732d0
*/
void sub_372f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x372f20ULL || rel >= 0x3732d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003732d0 size=752 callers=2 calls=3
   calls: sub_3047c0, sub_3724c0, sub_3735c0
*/
void sub_3732d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3732d0ULL || rel >= 0x3735c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003735c0 size=912 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_3735c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3735c0ULL || rel >= 0x373950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373950 size=96 callers=0 calls=0
*/
void sub_373950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373950ULL || rel >= 0x3739b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003739b0 size=64 callers=2 calls=0
*/
void sub_3739b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3739b0ULL || rel >= 0x3739f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003739f0 size=528 callers=5 calls=9
   calls: sub_3047c0, sub_339930, sub_33ac80, sub_341c90, sub_36b690, sub_379730, sub_382ac0, sub_38c050, sub_3c47b0
*/
void sub_3739f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3739f0ULL || rel >= 0x373c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373c00 size=16 callers=0 calls=0
*/
void sub_373c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373c00ULL || rel >= 0x373c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373c10 size=512 callers=2 calls=3
   calls: sub_3739f0, sub_373e10, sub_3c4790
*/
void sub_373c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373c10ULL || rel >= 0x373e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373e10 size=384 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_373e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373e10ULL || rel >= 0x373f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373f90 size=64 callers=1 calls=0
*/
void sub_373f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373f90ULL || rel >= 0x373fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00373fd0 size=80 callers=2 calls=0
*/
void sub_373fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x373fd0ULL || rel >= 0x374020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374020 size=288 callers=0 calls=0
*/
void sub_374020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374020ULL || rel >= 0x374140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374140 size=416 callers=0 calls=0
*/
void sub_374140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374140ULL || rel >= 0x3742e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003742e0 size=80 callers=0 calls=0
*/
void sub_3742e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3742e0ULL || rel >= 0x374330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374330 size=64 callers=0 calls=0
*/
void sub_374330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374330ULL || rel >= 0x374370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374370 size=64 callers=0 calls=0
*/
void sub_374370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374370ULL || rel >= 0x3743b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003743b0 size=64 callers=0 calls=1
   calls: sub_3739f0
*/
void sub_3743b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3743b0ULL || rel >= 0x3743f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003743f0 size=16 callers=0 calls=0
*/
void sub_3743f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3743f0ULL || rel >= 0x374400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374400 size=16 callers=0 calls=0
*/
void sub_374400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374400ULL || rel >= 0x374410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374410 size=32 callers=0 calls=0
*/
void sub_374410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374410ULL || rel >= 0x374430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374430 size=64 callers=0 calls=1
   calls: sub_3739f0
*/
void sub_374430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374430ULL || rel >= 0x374470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374470 size=16 callers=0 calls=0
*/
void sub_374470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374470ULL || rel >= 0x374480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374480 size=480 callers=2 calls=3
   calls: sub_304740, sub_3047c0, sub_3739f0
*/
void sub_374480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374480ULL || rel >= 0x374660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374660 size=64 callers=1 calls=0
*/
void sub_374660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374660ULL || rel >= 0x3746a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003746a0 size=608 callers=1 calls=8
   calls: sub_374900, sub_374ad0, sub_374dd0, sub_374ed0, sub_374fd0, sub_375130, sub_375290, sub_375380
*/
void sub_3746a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3746a0ULL || rel >= 0x374900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374900 size=464 callers=1 calls=5
   calls: sub_3045e0, sub_3046a0, sub_304740, sub_3047c0, sub_375590
*/
void sub_374900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374900ULL || rel >= 0x374ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374ad0 size=768 callers=1 calls=4
   calls: sub_3045e0, sub_3046a0, sub_304740, sub_3047c0
*/
void sub_374ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374ad0ULL || rel >= 0x374dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374dd0 size=256 callers=1 calls=2
   calls: sub_304740, sub_3047c0
*/
void sub_374dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374dd0ULL || rel >= 0x374ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374ed0 size=256 callers=1 calls=2
   calls: sub_304740, sub_3047c0
*/
void sub_374ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374ed0ULL || rel >= 0x374fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00374fd0 size=352 callers=1 calls=2
   calls: sub_3046a0, sub_304740
*/
void sub_374fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x374fd0ULL || rel >= 0x375130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00375130 size=352 callers=1 calls=2
   calls: sub_3046a0, sub_304740
*/
void sub_375130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x375130ULL || rel >= 0x375290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00375290 size=240 callers=1 calls=3
   calls: sub_3046a0, sub_304740, sub_3757c0
*/
void sub_375290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x375290ULL || rel >= 0x375380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00375380 size=272 callers=1 calls=4
   calls: sub_3046a0, sub_304740, sub_376790, sub_376b40
*/
void sub_375380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x375380ULL || rel >= 0x375490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00375490 size=256 callers=0 calls=3
   calls: sub_3047c0, sub_3739f0, sub_373fd0
*/
void sub_375490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x375490ULL || rel >= 0x375590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00375590 size=560 callers=1 calls=0
*/
void sub_375590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x375590ULL || rel >= 0x3757c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003757c0 size=400 callers=1 calls=1
   calls: sub_375950
*/
void sub_3757c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3757c0ULL || rel >= 0x375950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00375950 size=3648 callers=2 calls=0
*/
void sub_375950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x375950ULL || rel >= 0x376790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00376790 size=944 callers=1 calls=0
*/
void sub_376790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x376790ULL || rel >= 0x376b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00376b40 size=2496 callers=1 calls=0
*/
void sub_376b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x376b40ULL || rel >= 0x377500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377500 size=112 callers=1 calls=0
*/
void sub_377500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377500ULL || rel >= 0x377570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377570 size=16 callers=1 calls=0
*/
void sub_377570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377570ULL || rel >= 0x377580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377580 size=16 callers=1 calls=0
*/
void sub_377580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377580ULL || rel >= 0x377590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377590 size=96 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_377590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377590ULL || rel >= 0x3775f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003775f0 size=128 callers=1 calls=2
   calls: sub_3047c0, sub_374480
*/
void sub_3775f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3775f0ULL || rel >= 0x377670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377670 size=80 callers=1 calls=2
   calls: sub_3047c0, sub_374480
*/
void sub_377670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377670ULL || rel >= 0x3776c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003776c0 size=368 callers=3 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3776c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3776c0ULL || rel >= 0x377830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377830 size=256 callers=2 calls=2
   calls: sub_36ad60, sub_377930
*/
void sub_377830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377830ULL || rel >= 0x377930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377930 size=256 callers=8 calls=2
   calls: sub_36ad60, sub_377930
*/
void sub_377930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377930ULL || rel >= 0x377a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377a30 size=944 callers=1 calls=4
   calls: sub_3045e0, sub_3047c0, sub_378ac0, sub_378d40
*/
void sub_377a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377a30ULL || rel >= 0x377de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00377de0 size=1600 callers=3 calls=1
   calls: sub_3047c0
*/
void sub_377de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x377de0ULL || rel >= 0x378420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378420 size=208 callers=5 calls=1
   calls: sub_36b720
*/
void sub_378420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378420ULL || rel >= 0x3784f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003784f0 size=224 callers=3 calls=2
   calls: sub_3785d0, sub_39da60
*/
void sub_3784f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3784f0ULL || rel >= 0x3785d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003785d0 size=864 callers=1 calls=0
*/
void sub_3785d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3785d0ULL || rel >= 0x378930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378930 size=208 callers=1 calls=2
   calls: sub_36b920, sub_3746a0
*/
void sub_378930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378930ULL || rel >= 0x378a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378a00 size=176 callers=1 calls=1
   calls: sub_36b2a0
*/
void sub_378a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378a00ULL || rel >= 0x378ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378ab0 size=16 callers=1 calls=0
*/
void sub_378ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378ab0ULL || rel >= 0x378ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378ac0 size=640 callers=6 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_378ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378ac0ULL || rel >= 0x378d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00378d40 size=928 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_378d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x378d40ULL || rel >= 0x3790e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003790e0 size=208 callers=12 calls=1
   calls: sub_3047c0
*/
void sub_3790e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3790e0ULL || rel >= 0x3791b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003791b0 size=256 callers=0 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3792b0
*/
void sub_3791b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3791b0ULL || rel >= 0x3792b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003792b0 size=336 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3792b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3792b0ULL || rel >= 0x379400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379400 size=64 callers=0 calls=0
*/
void sub_379400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379400ULL || rel >= 0x379440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379440 size=384 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_379440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379440ULL || rel >= 0x3795c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003795c0 size=368 callers=1 calls=3
   calls: sub_3045e0, sub_366460, sub_382ed0
*/
void sub_3795c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3795c0ULL || rel >= 0x379730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379730 size=48 callers=1 calls=0
*/
void sub_379730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379730ULL || rel >= 0x379760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379760 size=64 callers=2 calls=1
   calls: sub_373f90
*/
void sub_379760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379760ULL || rel >= 0x3797a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003797a0 size=80 callers=1 calls=0
*/
void sub_3797a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3797a0ULL || rel >= 0x3797f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003797f0 size=48 callers=1 calls=0
*/
void sub_3797f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3797f0ULL || rel >= 0x379820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379820 size=160 callers=1 calls=0
*/
void sub_379820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379820ULL || rel >= 0x3798c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003798c0 size=32 callers=2 calls=0
*/
void sub_3798c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3798c0ULL || rel >= 0x3798e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003798e0 size=288 callers=1 calls=0
*/
void sub_3798e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3798e0ULL || rel >= 0x379a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379a00 size=112 callers=1 calls=0
*/
void sub_379a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379a00ULL || rel >= 0x379a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379a70 size=144 callers=1 calls=0
*/
void sub_379a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379a70ULL || rel >= 0x379b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379b00 size=80 callers=1 calls=1
   calls: sub_3792b0
*/
void sub_379b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379b00ULL || rel >= 0x379b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379b50 size=16 callers=3 calls=0
*/
void sub_379b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379b50ULL || rel >= 0x379b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379b60 size=128 callers=8 calls=2
   calls: sub_3047c0, sub_379440
*/
void sub_379b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379b60ULL || rel >= 0x379be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379be0 size=128 callers=2 calls=2
   calls: sub_3047c0, sub_379440
*/
void sub_379be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379be0ULL || rel >= 0x379c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379c60 size=192 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_379c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379c60ULL || rel >= 0x379d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379d20 size=144 callers=2 calls=3
   calls: sub_35b5c0, sub_35b5d0, sub_379fe0
*/
void sub_379d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379d20ULL || rel >= 0x379db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379db0 size=80 callers=2 calls=0
*/
void sub_379db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379db0ULL || rel >= 0x379e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379e00 size=96 callers=6 calls=3
   calls: sub_35b5d0, sub_3790e0, sub_38acc0
*/
void sub_379e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379e00ULL || rel >= 0x379e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379e60 size=80 callers=2 calls=1
   calls: sub_365e90
*/
void sub_379e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379e60ULL || rel >= 0x379eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379eb0 size=48 callers=4 calls=0
*/
void sub_379eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379eb0ULL || rel >= 0x379ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379ee0 size=48 callers=0 calls=0
*/
void sub_379ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379ee0ULL || rel >= 0x379f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379f10 size=16 callers=0 calls=0
*/
void sub_379f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379f10ULL || rel >= 0x379f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379f20 size=16 callers=0 calls=0
*/
void sub_379f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379f20ULL || rel >= 0x379f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379f30 size=16 callers=0 calls=0
*/
void sub_379f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379f30ULL || rel >= 0x379f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379f40 size=96 callers=2 calls=1
   calls: sub_3820f0
*/
void sub_379f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379f40ULL || rel >= 0x379fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379fa0 size=64 callers=3 calls=1
   calls: sub_3047c0
*/
void sub_379fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379fa0ULL || rel >= 0x379fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00379fe0 size=640 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_379fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x379fe0ULL || rel >= 0x37a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037a260 size=512 callers=7 calls=2
   calls: sub_35b5c0, sub_35b5d0
*/
void sub_37a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37a260ULL || rel >= 0x37a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037a460 size=448 callers=3 calls=1
   calls: sub_35b5d0
*/
void sub_37a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37a460ULL || rel >= 0x37a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037a620 size=432 callers=2 calls=6
   calls: sub_35b310, sub_35b580, sub_35b5c0, sub_35b5d0, sub_379fe0, sub_37a8f0
*/
void sub_37a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37a620ULL || rel >= 0x37a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037a7d0 size=288 callers=2 calls=6
   calls: sub_35b5d0, sub_3790e0, sub_37a260, sub_37fbd0, sub_38acb0, sub_38acc0
*/
void sub_37a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37a7d0ULL || rel >= 0x37a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037a8f0 size=208 callers=2 calls=5
   calls: sub_3045e0, sub_3047c0, sub_35b310, sub_35b330, sub_35b3a0
*/
void sub_37a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37a8f0ULL || rel >= 0x37a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037a9c0 size=32 callers=0 calls=0
*/
void sub_37a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37a9c0ULL || rel >= 0x37a9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037a9e0 size=16 callers=0 calls=0
*/
void sub_37a9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37a9e0ULL || rel >= 0x37a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037a9f0 size=16 callers=0 calls=0
*/
void sub_37a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37a9f0ULL || rel >= 0x37aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037aa00 size=16 callers=0 calls=0
*/
void sub_37aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37aa00ULL || rel >= 0x37aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037aa10 size=16 callers=0 calls=0
*/
void sub_37aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37aa10ULL || rel >= 0x37aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037aa20 size=16 callers=0 calls=0
*/
void sub_37aa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37aa20ULL || rel >= 0x37aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037aa30 size=16 callers=0 calls=0
*/
void sub_37aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37aa30ULL || rel >= 0x37aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037aa40 size=16 callers=0 calls=0
*/
void sub_37aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37aa40ULL || rel >= 0x37aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037aa50 size=16 callers=0 calls=0
*/
void sub_37aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37aa50ULL || rel >= 0x37aa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037aa60 size=64 callers=0 calls=1
   calls: sub_334a30
*/
void sub_37aa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37aa60ULL || rel >= 0x37aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037aaa0 size=16 callers=0 calls=0
*/
void sub_37aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37aaa0ULL || rel >= 0x37aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037aab0 size=288 callers=1 calls=5
   calls: sub_304740, sub_3047c0, sub_358190, sub_3624a0, sub_37abd0
*/
void sub_37aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37aab0ULL || rel >= 0x37abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037abd0 size=336 callers=1 calls=3
   calls: sub_304740, sub_3047c0, sub_3a86a0
*/
void sub_37abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37abd0ULL || rel >= 0x37ad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ad20 size=48 callers=0 calls=1
   calls: sub_37aab0
*/
void sub_37ad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ad20ULL || rel >= 0x37ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ad50 size=352 callers=1 calls=7
   calls: sub_3045e0, sub_3047c0, sub_37d6b0, sub_3c6930, sub_3c73f0, sub_3d15d0, sub_3d4310
*/
void sub_37ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ad50ULL || rel >= 0x37aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037aeb0 size=160 callers=1 calls=3
   calls: sub_3047c0, sub_37d6b0, sub_3d4310
*/
void sub_37aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37aeb0ULL || rel >= 0x37af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037af50 size=16 callers=5 calls=0
*/
void sub_37af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37af50ULL || rel >= 0x37af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037af60 size=240 callers=3 calls=3
   calls: sub_3045e0, sub_3046a0, sub_357ea0
*/
void sub_37af60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37af60ULL || rel >= 0x37b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037b050 size=144 callers=1 calls=1
   calls: sub_3a5920
*/
void sub_37b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37b050ULL || rel >= 0x37b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037b0e0 size=128 callers=1 calls=1
   calls: sub_358530
*/
void sub_37b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37b0e0ULL || rel >= 0x37b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037b160 size=640 callers=3 calls=5
   calls: sub_3045e0, sub_304740, sub_3047c0, sub_3a8040, sub_3b10f0
*/
void sub_37b160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37b160ULL || rel >= 0x37b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037b3e0 size=144 callers=0 calls=1
   calls: sub_3b1560
*/
void sub_37b3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37b3e0ULL || rel >= 0x37b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037b470 size=736 callers=14 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3a8040
*/
void sub_37b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37b470ULL || rel >= 0x37b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037b750 size=448 callers=2 calls=3
   calls: sub_304740, sub_37df50, sub_3a8700
*/
void sub_37b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37b750ULL || rel >= 0x37b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037b910 size=240 callers=1 calls=4
   calls: sub_3045e0, sub_3624a0, sub_37ba00, sub_3a5b20
*/
void sub_37b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37b910ULL || rel >= 0x37ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ba00 size=1264 callers=2 calls=6
   calls: sub_32ee10, sub_35f210, sub_361750, sub_361900, sub_3624a0, sub_3624e0
*/
void sub_37ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ba00ULL || rel >= 0x37bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037bef0 size=800 callers=0 calls=8
   calls: sub_3045e0, sub_3047c0, sub_3624a0, sub_37b160, sub_37c2d0, sub_3a5b20, sub_3b10c0, sub_673320
   ref: AK Suspended
*/
void AK_Suspended(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37bef0ULL || rel >= 0x37c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c210 size=192 callers=0 calls=1
   calls: sub_334a30
*/
void sub_37c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c210ULL || rel >= 0x37c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c2d0 size=384 callers=3 calls=4
   calls: sub_3045e0, sub_3624a0, sub_3a5b20, sub_3c5b10
*/
void sub_37c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c2d0ULL || rel >= 0x37c450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c450 size=544 callers=1 calls=4
   calls: sub_304740, sub_3047c0, sub_32ee10, sub_6733a0
*/
void sub_37c450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c450ULL || rel >= 0x37c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037c670 size=1920 callers=1 calls=12
   calls: sub_3045e0, sub_3046a0, sub_304740, sub_3047c0, sub_3624a0, sub_37af60, sub_37b160, sub_37ba00, sub_37d940, sub_3a5b20, sub_3b10c0, sub_3c5b10
*/
void sub_37c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37c670ULL || rel >= 0x37cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037cdf0 size=16 callers=0 calls=0
*/
void sub_37cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37cdf0ULL || rel >= 0x37ce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ce00 size=1120 callers=1 calls=9
   calls: sub_3045e0, sub_32ee10, sub_32efa0, sub_334a30, sub_3624a0, sub_37b910, sub_37c2d0, sub_3a5b20, sub_3c5b10
*/
void sub_37ce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ce00ULL || rel >= 0x37d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d260 size=304 callers=1 calls=3
   calls: sub_332930, sub_37c670, sub_37d3e0
*/
void sub_37d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d260ULL || rel >= 0x37d390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d390 size=80 callers=3 calls=0
*/
void sub_37d390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d390ULL || rel >= 0x37d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d3e0 size=432 callers=2 calls=4
   calls: sub_3047c0, sub_32ee10, sub_37d940, sub_3c5b10
*/
void sub_37d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d3e0ULL || rel >= 0x37d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d590 size=176 callers=1 calls=1
   calls: sub_332930
*/
void sub_37d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d590ULL || rel >= 0x37d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d640 size=112 callers=3 calls=0
*/
void sub_37d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d640ULL || rel >= 0x37d6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d6b0 size=656 callers=25 calls=0
*/
void sub_37d6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d6b0ULL || rel >= 0x37d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037d940 size=464 callers=3 calls=2
   calls: sub_3046a0, sub_304740
*/
void sub_37d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37d940ULL || rel >= 0x37db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037db10 size=384 callers=1 calls=2
   calls: sub_3045e0, sub_37af60
*/
void sub_37db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37db10ULL || rel >= 0x37dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037dc90 size=176 callers=1 calls=3
   calls: sub_304740, sub_3047c0, sub_358190
*/
void sub_37dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37dc90ULL || rel >= 0x37dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037dd40 size=112 callers=1 calls=1
   calls: sub_358590
*/
void sub_37dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37dd40ULL || rel >= 0x37ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ddb0 size=384 callers=1 calls=4
   calls: sub_32efa0, sub_334a30, sub_33cc40, sub_37ce00
*/
void sub_37ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ddb0ULL || rel >= 0x37df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037df30 size=16 callers=0 calls=0
*/
void sub_37df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37df30ULL || rel >= 0x37df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037df40 size=16 callers=0 calls=0
*/
void sub_37df40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37df40ULL || rel >= 0x37df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037df50 size=304 callers=1 calls=3
   calls: sub_3045e0, sub_304740, sub_3047c0
*/
void sub_37df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37df50ULL || rel >= 0x37e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e080 size=96 callers=4 calls=1
   calls: sub_381ca0
*/
void sub_37e080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e080ULL || rel >= 0x37e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e0e0 size=176 callers=2 calls=2
   calls: sub_3047c0, sub_3887a0
*/
void sub_37e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e0e0ULL || rel >= 0x37e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e190 size=16 callers=0 calls=0
*/
void sub_37e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e190ULL || rel >= 0x37e1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e1a0 size=16 callers=0 calls=0
*/
void sub_37e1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e1a0ULL || rel >= 0x37e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e1b0 size=16 callers=0 calls=0
*/
void sub_37e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e1b0ULL || rel >= 0x37e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e1c0 size=400 callers=0 calls=3
   calls: sub_3045e0, sub_3047c0, sub_384780
*/
void sub_37e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e1c0ULL || rel >= 0x37e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e350 size=384 callers=0 calls=3
   calls: sub_3045e0, sub_3047c0, sub_384c70
*/
void sub_37e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e350ULL || rel >= 0x37e4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037e4d0 size=2400 callers=1 calls=7
   calls: sub_352bd0, sub_366670, sub_3776c0, sub_383a90, sub_3840e0, sub_384140, sub_39d140
*/
void sub_37e4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37e4d0ULL || rel >= 0x37ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ee30 size=160 callers=0 calls=0
*/
void sub_37ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ee30ULL || rel >= 0x37eed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037eed0 size=112 callers=0 calls=0
*/
void sub_37eed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37eed0ULL || rel >= 0x37ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ef40 size=224 callers=0 calls=0
*/
void sub_37ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ef40ULL || rel >= 0x37f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037f020 size=96 callers=0 calls=0
*/
void sub_37f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37f020ULL || rel >= 0x37f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037f080 size=416 callers=2 calls=9
   calls: sub_341ba0, sub_341c80, sub_35b580, sub_35b5d0, sub_3790e0, sub_37f220, sub_37f340, sub_37f4b0, sub_388120
*/
void sub_37f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37f080ULL || rel >= 0x37f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037f220 size=208 callers=2 calls=7
   calls: sub_33e830, sub_3414e0, sub_341b30, sub_341b70, sub_341b80, sub_341cb0, sub_341cd0
*/
void sub_37f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37f220ULL || rel >= 0x37f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037f2f0 size=80 callers=5 calls=2
   calls: sub_37f4b0, sub_388120
*/
void sub_37f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37f2f0ULL || rel >= 0x37f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037f340 size=368 callers=2 calls=8
   calls: sub_3045e0, sub_3047c0, sub_331150, sub_3382d0, sub_33c6d0, sub_3419a0, sub_341a10, sub_341a80
*/
void sub_37f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37f340ULL || rel >= 0x37f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037f4b0 size=144 callers=4 calls=0
*/
void sub_37f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37f4b0ULL || rel >= 0x37f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037f540 size=32 callers=1 calls=1
   calls: sub_37f4b0
*/
void sub_37f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37f540ULL || rel >= 0x37f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037f560 size=1536 callers=17 calls=3
   calls: sub_37f560, sub_39d140, sub_3b33a0
*/
void sub_37f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37f560ULL || rel >= 0x37fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037fb60 size=112 callers=0 calls=2
   calls: sub_366400, sub_382e00
*/
void sub_37fb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37fb60ULL || rel >= 0x37fbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037fbd0 size=880 callers=3 calls=12
   calls: sub_341ba0, sub_341c80, sub_35b330, sub_35b5d0, sub_37a260, sub_37f220, sub_37f340, sub_37f4b0, sub_388120, sub_392c80, sub_393270, sub_393280
*/
void sub_37fbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37fbd0ULL || rel >= 0x37ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ff40 size=112 callers=0 calls=1
   calls: sub_382c40
*/
void sub_37ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ff40ULL || rel >= 0x37ffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0037ffb0 size=304 callers=0 calls=1
   calls: sub_3045e0
*/
void sub_37ffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x37ffb0ULL || rel >= 0x3800e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003800e0 size=464 callers=0 calls=3
   calls: sub_383520, sub_383640, sub_383740
*/
void sub_3800e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3800e0ULL || rel >= 0x3802b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003802b0 size=64 callers=7 calls=0
*/
void sub_3802b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3802b0ULL || rel >= 0x3802f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003802f0 size=352 callers=0 calls=4
   calls: sub_3825f0, sub_3844a0, sub_3845d0, sub_384630
*/
void sub_3802f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3802f0ULL || rel >= 0x380450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380450 size=432 callers=0 calls=1
   calls: sub_385e80
*/
void sub_380450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380450ULL || rel >= 0x380600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380600 size=464 callers=0 calls=0
*/
void sub_380600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380600ULL || rel >= 0x3807d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003807d0 size=432 callers=3 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3807d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3807d0ULL || rel >= 0x380980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380980 size=272 callers=3 calls=0
*/
void sub_380980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380980ULL || rel >= 0x380a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380a90 size=400 callers=0 calls=3
   calls: sub_387510, sub_3877c0, sub_387fb0
*/
void sub_380a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380a90ULL || rel >= 0x380c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380c20 size=208 callers=0 calls=3
   calls: sub_387770, sub_387d70, sub_388010
*/
void sub_380c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380c20ULL || rel >= 0x380cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380cf0 size=112 callers=0 calls=0
*/
void sub_380cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380cf0ULL || rel >= 0x380d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380d60 size=112 callers=3 calls=1
   calls: sub_355bd0
*/
void sub_380d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380d60ULL || rel >= 0x380dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380dd0 size=512 callers=16 calls=2
   calls: sub_352bd0, sub_37f080
*/
void sub_380dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380dd0ULL || rel >= 0x380fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380fd0 size=32 callers=1 calls=0
*/
void sub_380fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380fd0ULL || rel >= 0x380ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00380ff0 size=16 callers=0 calls=0
*/
void sub_380ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x380ff0ULL || rel >= 0x381000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381000 size=16 callers=0 calls=0
*/
void sub_381000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381000ULL || rel >= 0x381010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381010 size=32 callers=0 calls=0
*/
void sub_381010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381010ULL || rel >= 0x381030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381030 size=304 callers=2 calls=4
   calls: sub_388a80, sub_39dd10, sub_3a40f0, sub_3a4250
*/
void sub_381030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381030ULL || rel >= 0x381160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381160 size=128 callers=2 calls=2
   calls: sub_3811e0, sub_3c0010
*/
void sub_381160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381160ULL || rel >= 0x3811e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003811e0 size=864 callers=3 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3811e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3811e0ULL || rel >= 0x381540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381540 size=448 callers=3 calls=1
   calls: sub_3c0340
*/
void sub_381540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381540ULL || rel >= 0x381700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381700 size=80 callers=3 calls=1
   calls: sub_381750
*/
void sub_381700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381700ULL || rel >= 0x381750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381750 size=1088 callers=1 calls=0
*/
void sub_381750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381750ULL || rel >= 0x381b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381b90 size=272 callers=1 calls=3
   calls: sub_38dfb0, sub_38e050, sub_38e370
*/
void sub_381b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381b90ULL || rel >= 0x381ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381ca0 size=160 callers=3 calls=3
   calls: sub_363510, sub_389080, sub_3a45f0
*/
void sub_381ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381ca0ULL || rel >= 0x381d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381d40 size=512 callers=0 calls=8
   calls: sub_3047c0, sub_362f20, sub_3633e0, sub_381f40, sub_3890c0, sub_3a4610, sub_3a46f0, sub_3a6550
*/
void sub_381d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381d40ULL || rel >= 0x381f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00381f40 size=384 callers=6 calls=3
   calls: sub_3047c0, sub_381f40, sub_388f00
*/
void sub_381f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x381f40ULL || rel >= 0x3820c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003820c0 size=16 callers=0 calls=0
*/
void sub_3820c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3820c0ULL || rel >= 0x3820d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003820d0 size=16 callers=0 calls=0
*/
void sub_3820d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3820d0ULL || rel >= 0x3820e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003820e0 size=16 callers=0 calls=0
*/
void sub_3820e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3820e0ULL || rel >= 0x3820f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003820f0 size=192 callers=10 calls=2
   calls: sub_3352c0, sub_335420
*/
void sub_3820f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3820f0ULL || rel >= 0x3821b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003821b0 size=96 callers=0 calls=1
   calls: sub_3352b0
*/
void sub_3821b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3821b0ULL || rel >= 0x382210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382210 size=352 callers=0 calls=4
   calls: sub_3047c0, sub_3352b0, sub_3352c0, sub_382370
*/
void sub_382210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382210ULL || rel >= 0x382370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382370 size=208 callers=1 calls=1
   calls: sub_381f40
*/
void sub_382370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382370ULL || rel >= 0x382440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382440 size=16 callers=0 calls=0
*/
void sub_382440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382440ULL || rel >= 0x382450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382450 size=144 callers=0 calls=1
   calls: sub_3c5b10
*/
void sub_382450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382450ULL || rel >= 0x3824e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003824e0 size=272 callers=0 calls=2
   calls: sub_382630, sub_382740
*/
void sub_3824e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3824e0ULL || rel >= 0x3825f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003825f0 size=64 callers=2 calls=0
*/
void sub_3825f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3825f0ULL || rel >= 0x382630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382630 size=272 callers=1 calls=0
*/
void sub_382630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382630ULL || rel >= 0x382740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382740 size=416 callers=1 calls=0
*/
void sub_382740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382740ULL || rel >= 0x3828e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003828e0 size=400 callers=1 calls=2
   calls: sub_3047c0, sub_3a6550
*/
void sub_3828e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3828e0ULL || rel >= 0x382a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382a70 size=16 callers=0 calls=0
*/
void sub_382a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382a70ULL || rel >= 0x382a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382a80 size=16 callers=0 calls=0
*/
void sub_382a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382a80ULL || rel >= 0x382a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382a90 size=32 callers=0 calls=0
*/
void sub_382a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382a90ULL || rel >= 0x382ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382ab0 size=16 callers=0 calls=0
*/
void sub_382ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382ab0ULL || rel >= 0x382ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382ac0 size=80 callers=4 calls=0
*/
void sub_382ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382ac0ULL || rel >= 0x382b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382b10 size=80 callers=2 calls=0
*/
void sub_382b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382b10ULL || rel >= 0x382b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382b60 size=80 callers=2 calls=0
*/
void sub_382b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382b60ULL || rel >= 0x382bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382bb0 size=144 callers=0 calls=0
*/
void sub_382bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382bb0ULL || rel >= 0x382c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382c40 size=112 callers=4 calls=0
*/
void sub_382c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382c40ULL || rel >= 0x382cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382cb0 size=48 callers=0 calls=0
*/
void sub_382cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382cb0ULL || rel >= 0x382ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382ce0 size=32 callers=1 calls=0
*/
void sub_382ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382ce0ULL || rel >= 0x382d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382d00 size=128 callers=7 calls=1
   calls: sub_3351b0
*/
void sub_382d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382d00ULL || rel >= 0x382d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382d80 size=128 callers=17 calls=1
   calls: sub_3351b0
*/
void sub_382d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382d80ULL || rel >= 0x382e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382e00 size=208 callers=1 calls=1
   calls: sub_377930
*/
void sub_382e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382e00ULL || rel >= 0x382ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382ed0 size=144 callers=1 calls=1
   calls: sub_3a5480
*/
void sub_382ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382ed0ULL || rel >= 0x382f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00382f60 size=608 callers=6 calls=5
   calls: sub_3045e0, sub_381030, sub_382f60, sub_39d140, sub_3a4450
*/
void sub_382f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x382f60ULL || rel >= 0x3831c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003831c0 size=592 callers=0 calls=3
   calls: sub_3a4eb0, sub_3a65f0, sub_3bdd90
*/
void sub_3831c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3831c0ULL || rel >= 0x383410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383410 size=272 callers=0 calls=2
   calls: sub_3a65f0, sub_3bdd90
*/
void sub_383410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383410ULL || rel >= 0x383520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383520 size=288 callers=3 calls=1
   calls: sub_3045e0
*/
void sub_383520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383520ULL || rel >= 0x383640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383640 size=256 callers=3 calls=1
   calls: sub_3045e0
*/
void sub_383640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383640ULL || rel >= 0x383740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383740 size=272 callers=2 calls=1
   calls: sub_3045e0
*/
void sub_383740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383740ULL || rel >= 0x383850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383850 size=512 callers=1 calls=0
*/
void sub_383850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383850ULL || rel >= 0x383a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383a50 size=64 callers=4 calls=0
*/
void sub_383a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383a50ULL || rel >= 0x383a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383a90 size=1072 callers=2 calls=1
   calls: sub_383ec0
*/
void sub_383a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383a90ULL || rel >= 0x383ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00383ec0 size=544 callers=3 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_383ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x383ec0ULL || rel >= 0x3840e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003840e0 size=96 callers=1 calls=1
   calls: sub_352bd0
*/
void sub_3840e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3840e0ULL || rel >= 0x384140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00384140 size=512 callers=1 calls=2
   calls: sub_39d140, sub_3b33a0
*/
void sub_384140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x384140ULL || rel >= 0x384340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00384340 size=352 callers=1 calls=0
*/
void sub_384340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x384340ULL || rel >= 0x3844a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003844a0 size=304 callers=2 calls=1
   calls: sub_3811e0
*/
void sub_3844a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3844a0ULL || rel >= 0x3845d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003845d0 size=96 callers=2 calls=0
*/
void sub_3845d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3845d0ULL || rel >= 0x384630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00384630 size=32 callers=1 calls=0
*/
void sub_384630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x384630ULL || rel >= 0x384650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00384650 size=304 callers=3 calls=2
   calls: sub_352bd0, sub_384650
*/
void sub_384650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x384650ULL || rel >= 0x384780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00384780 size=1264 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_384780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x384780ULL || rel >= 0x384c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00384c70 size=432 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_384c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x384c70ULL || rel >= 0x384e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00384e20 size=80 callers=0 calls=0
*/
void sub_384e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x384e20ULL || rel >= 0x384e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00384e70 size=16 callers=1 calls=0
*/
void sub_384e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x384e70ULL || rel >= 0x384e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00384e80 size=704 callers=2 calls=4
   calls: sub_3045e0, sub_362e50, sub_363000, sub_3631e0
*/
void sub_384e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x384e80ULL || rel >= 0x385140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00385140 size=736 callers=0 calls=1
   calls: sub_3045e0
*/
void sub_385140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x385140ULL || rel >= 0x385420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00385420 size=16 callers=0 calls=0
*/
void sub_385420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x385420ULL || rel >= 0x385430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00385430 size=928 callers=7 calls=2
   calls: sub_3351b0, sub_384e80
*/
void sub_385430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x385430ULL || rel >= 0x3857d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003857d0 size=1168 callers=0 calls=6
   calls: sub_3045e0, sub_3047c0, sub_385c60, sub_395ed0, sub_399350, sub_3a6550
*/
void sub_3857d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3857d0ULL || rel >= 0x385c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00385c60 size=544 callers=4 calls=5
   calls: sub_3045e0, sub_3046a0, sub_304740, sub_3047c0, sub_395b30
*/
void sub_385c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x385c60ULL || rel >= 0x385e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00385e80 size=592 callers=10 calls=2
   calls: sub_39d140, sub_3b33a0
*/
void sub_385e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x385e80ULL || rel >= 0x3860d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003860d0 size=112 callers=0 calls=0
*/
void sub_3860d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3860d0ULL || rel >= 0x386140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00386140 size=400 callers=0 calls=0
*/
void sub_386140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x386140ULL || rel >= 0x3862d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003862d0 size=304 callers=0 calls=1
   calls: sub_399350
*/
void sub_3862d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3862d0ULL || rel >= 0x386400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00386400 size=16 callers=1 calls=0
*/
void sub_386400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x386400ULL || rel >= 0x386410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00386410 size=288 callers=1 calls=1
   calls: sub_3a4a70
*/
void sub_386410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x386410ULL || rel >= 0x386530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00386530 size=1184 callers=4 calls=6
   calls: sub_3536a0, sub_3869d0, sub_388a80, sub_39dd10, sub_3a40f0, sub_3a4250
*/
void sub_386530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x386530ULL || rel >= 0x3869d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003869d0 size=496 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3869d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3869d0ULL || rel >= 0x386bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00386bc0 size=1616 callers=3 calls=2
   calls: sub_39dfc0, sub_3a4250
*/
void sub_386bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x386bc0ULL || rel >= 0x387210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00387210 size=176 callers=0 calls=2
   calls: sub_356720, sub_3b36d0
*/
void sub_387210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x387210ULL || rel >= 0x3872c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003872c0 size=176 callers=0 calls=1
   calls: sub_382f60
*/
void sub_3872c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3872c0ULL || rel >= 0x387370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00387370 size=80 callers=1 calls=1
   calls: sub_382f60
*/
void sub_387370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x387370ULL || rel >= 0x3873c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003873c0 size=224 callers=0 calls=1
   calls: sub_381f40
*/
void sub_3873c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3873c0ULL || rel >= 0x3874a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003874a0 size=112 callers=1 calls=0
*/
void sub_3874a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3874a0ULL || rel >= 0x387510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00387510 size=608 callers=2 calls=5
   calls: sub_3045e0, sub_3047c0, sub_382f60, sub_39d140, sub_3bf6a0
*/
void sub_387510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x387510ULL || rel >= 0x387770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00387770 size=80 callers=2 calls=0
*/
void sub_387770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x387770ULL || rel >= 0x3877c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003877c0 size=880 callers=1 calls=5
   calls: sub_3045e0, sub_3047c0, sub_387b30, sub_39d140, sub_3bf6a0
*/
void sub_3877c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3877c0ULL || rel >= 0x387b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00387b30 size=576 callers=1 calls=4
   calls: sub_3045e0, sub_3047c0, sub_381030, sub_3a4450
*/
void sub_387b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x387b30ULL || rel >= 0x387d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00387d70 size=576 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_387d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x387d70ULL || rel >= 0x387fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00387fb0 size=96 callers=2 calls=1
   calls: sub_382f60
*/
void sub_387fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x387fb0ULL || rel >= 0x388010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388010 size=112 callers=2 calls=0
*/
void sub_388010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388010ULL || rel >= 0x388080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388080 size=160 callers=1 calls=0
*/
void sub_388080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388080ULL || rel >= 0x388120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388120 size=32 callers=3 calls=0
*/
void sub_388120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388120ULL || rel >= 0x388140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388140 size=48 callers=0 calls=0
*/
void sub_388140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388140ULL || rel >= 0x388170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388170 size=512 callers=1 calls=1
   calls: sub_39d140
*/
void sub_388170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388170ULL || rel >= 0x388370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388370 size=1072 callers=0 calls=2
   calls: sub_39d140, sub_3b33a0
*/
void sub_388370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388370ULL || rel >= 0x3887a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003887a0 size=16 callers=1 calls=0
*/
void sub_3887a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3887a0ULL || rel >= 0x3887b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003887b0 size=32 callers=7 calls=0
*/
void sub_3887b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3887b0ULL || rel >= 0x3887d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003887d0 size=272 callers=4 calls=3
   calls: sub_3045e0, sub_362e50, sub_39d140
*/
void sub_3887d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3887d0ULL || rel >= 0x3888e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003888e0 size=112 callers=2 calls=1
   calls: sub_388170
*/
void sub_3888e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3888e0ULL || rel >= 0x388950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388950 size=304 callers=0 calls=0
*/
void sub_388950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388950ULL || rel >= 0x388a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388a80 size=448 callers=6 calls=3
   calls: sub_388c40, sub_388d70, sub_3a4130
*/
void sub_388a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388a80ULL || rel >= 0x388c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388c40 size=304 callers=1 calls=1
   calls: sub_388d70
*/
void sub_388c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388c40ULL || rel >= 0x388d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388d70 size=240 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_388d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388d70ULL || rel >= 0x388e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388e60 size=16 callers=0 calls=0
*/
void sub_388e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388e60ULL || rel >= 0x388e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388e70 size=48 callers=0 calls=1
   calls: sub_3a44a0
*/
void sub_388e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388e70ULL || rel >= 0x388ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388ea0 size=32 callers=0 calls=0
*/
void sub_388ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388ea0ULL || rel >= 0x388ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388ec0 size=16 callers=0 calls=0
*/
void sub_388ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388ec0ULL || rel >= 0x388ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388ed0 size=16 callers=0 calls=0
*/
void sub_388ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388ed0ULL || rel >= 0x388ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388ee0 size=16 callers=0 calls=0
*/
void sub_388ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388ee0ULL || rel >= 0x388ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388ef0 size=16 callers=0 calls=0
*/
void sub_388ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388ef0ULL || rel >= 0x388f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388f00 size=176 callers=1 calls=3
   calls: sub_3047c0, sub_3a44a0, sub_3a45b0
*/
void sub_388f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388f00ULL || rel >= 0x388fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00388fb0 size=208 callers=0 calls=0
*/
void sub_388fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x388fb0ULL || rel >= 0x389080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389080 size=64 callers=1 calls=1
   calls: sub_3b1ca0
*/
void sub_389080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389080ULL || rel >= 0x3890c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003890c0 size=192 callers=2 calls=3
   calls: sub_3047c0, sub_3b2860, sub_3b3970
*/
void sub_3890c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3890c0ULL || rel >= 0x389180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389180 size=48 callers=0 calls=1
   calls: sub_3890c0
*/
void sub_389180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389180ULL || rel >= 0x3891b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003891b0 size=96 callers=0 calls=1
   calls: sub_3045e0
*/
void sub_3891b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3891b0ULL || rel >= 0x389210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389210 size=240 callers=1 calls=1
   calls: sub_3b1ce0
*/
void sub_389210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389210ULL || rel >= 0x389300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389300 size=48 callers=0 calls=0
*/
void sub_389300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389300ULL || rel >= 0x389330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389330 size=128 callers=0 calls=1
   calls: sub_3b33d0
*/
void sub_389330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389330ULL || rel >= 0x3893b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003893b0 size=16 callers=0 calls=0
*/
void sub_3893b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3893b0ULL || rel >= 0x3893c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003893c0 size=16 callers=0 calls=0
*/
void sub_3893c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3893c0ULL || rel >= 0x3893d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003893d0 size=208 callers=0 calls=0
*/
void sub_3893d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3893d0ULL || rel >= 0x3894a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003894a0 size=48 callers=0 calls=1
   calls: sub_3a43c0
*/
void sub_3894a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3894a0ULL || rel >= 0x3894d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003894d0 size=112 callers=0 calls=0
*/
void sub_3894d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3894d0ULL || rel >= 0x389540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389540 size=80 callers=1 calls=0
*/
void sub_389540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389540ULL || rel >= 0x389590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389590 size=112 callers=5 calls=1
   calls: sub_3047c0
*/
void sub_389590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389590ULL || rel >= 0x389600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389600 size=208 callers=4 calls=1
   calls: sub_3047c0
*/
void sub_389600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389600ULL || rel >= 0x3896d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003896d0 size=816 callers=1 calls=0
*/
void sub_3896d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3896d0ULL || rel >= 0x389a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389a00 size=96 callers=1 calls=0
*/
void sub_389a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389a00ULL || rel >= 0x389a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389a60 size=16 callers=1 calls=0
*/
void sub_389a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389a60ULL || rel >= 0x389a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389a70 size=64 callers=1 calls=0
*/
void sub_389a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389a70ULL || rel >= 0x389ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389ab0 size=544 callers=0 calls=1
   calls: sub_389cd0
*/
void sub_389ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389ab0ULL || rel >= 0x389cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389cd0 size=496 callers=2 calls=0
*/
void sub_389cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389cd0ULL || rel >= 0x389ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389ec0 size=16 callers=2 calls=0
*/
void sub_389ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389ec0ULL || rel >= 0x389ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389ed0 size=176 callers=2 calls=0
*/
void sub_389ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389ed0ULL || rel >= 0x389f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00389f80 size=704 callers=0 calls=2
   calls: sub_3047c0, sub_38a240
*/
void sub_389f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x389f80ULL || rel >= 0x38a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a240 size=336 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_38a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a240ULL || rel >= 0x38a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a390 size=16 callers=2 calls=0
*/
void sub_38a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a390ULL || rel >= 0x38a3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a3a0 size=16 callers=0 calls=0
*/
void sub_38a3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a3a0ULL || rel >= 0x38a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a3b0 size=16 callers=2 calls=0
*/
void sub_38a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a3b0ULL || rel >= 0x38a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a3c0 size=96 callers=1 calls=1
   calls: sub_38a420
*/
void sub_38a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a3c0ULL || rel >= 0x38a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a420 size=720 callers=2 calls=3
   calls: sub_3045e0, sub_3047c0, sub_32c180
*/
void sub_38a420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a420ULL || rel >= 0x38a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a6f0 size=16 callers=1 calls=0
*/
void sub_38a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a6f0ULL || rel >= 0x38a700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a700 size=16 callers=1 calls=0
*/
void sub_38a700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a700ULL || rel >= 0x38a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a710 size=96 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_38a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a710ULL || rel >= 0x38a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a770 size=176 callers=1 calls=3
   calls: sub_3047c0, sub_389590, sub_389600
*/
void sub_38a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a770ULL || rel >= 0x38a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a820 size=160 callers=1 calls=4
   calls: sub_3045e0, sub_3047c0, sub_389540, sub_389590
*/
void sub_38a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a820ULL || rel >= 0x38a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a8c0 size=192 callers=1 calls=3
   calls: sub_3047c0, sub_389590, sub_389600
*/
void sub_38a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a8c0ULL || rel >= 0x38a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038a980 size=480 callers=3 calls=3
   calls: sub_3045e0, sub_3047c0, sub_389ed0
*/
void sub_38a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38a980ULL || rel >= 0x38ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ab60 size=336 callers=2 calls=3
   calls: sub_3047c0, sub_389590, sub_389600
*/
void sub_38ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ab60ULL || rel >= 0x38acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038acb0 size=16 callers=2 calls=0
*/
void sub_38acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38acb0ULL || rel >= 0x38acc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038acc0 size=240 callers=4 calls=3
   calls: sub_3047c0, sub_389590, sub_389600
*/
void sub_38acc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38acc0ULL || rel >= 0x38adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038adb0 size=32 callers=0 calls=0
*/
void sub_38adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38adb0ULL || rel >= 0x38add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038add0 size=384 callers=3 calls=4
   calls: sub_3047c0, sub_3896d0, sub_389a00, sub_389cd0
*/
void sub_38add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38add0ULL || rel >= 0x38af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038af50 size=80 callers=0 calls=1
   calls: sub_389a60
*/
void sub_38af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38af50ULL || rel >= 0x38afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038afa0 size=80 callers=0 calls=1
   calls: sub_389a70
*/
void sub_38afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38afa0ULL || rel >= 0x38aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038aff0 size=112 callers=1 calls=1
   calls: sub_389ed0
*/
void sub_38aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38aff0ULL || rel >= 0x38b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b060 size=928 callers=3 calls=6
   calls: sub_3045e0, sub_34e5d0, sub_37f2f0, sub_39ebc0, sub_3a56f0, sub_3c4790
*/
void sub_38b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b060ULL || rel >= 0x38b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b400 size=448 callers=1 calls=6
   calls: sub_3045e0, sub_3047c0, sub_34f240, sub_381160, sub_38fae0, sub_3a7eb0
*/
void sub_38b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b400ULL || rel >= 0x38b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b5c0 size=16 callers=0 calls=0
*/
void sub_38b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b5c0ULL || rel >= 0x38b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b5d0 size=128 callers=5 calls=3
   calls: sub_3047c0, sub_331150, sub_3a5700
*/
void sub_38b5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b5d0ULL || rel >= 0x38b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b650 size=128 callers=0 calls=3
   calls: sub_3047c0, sub_331150, sub_3a5700
*/
void sub_38b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b650ULL || rel >= 0x38b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b6d0 size=144 callers=0 calls=4
   calls: sub_3047c0, sub_331150, sub_34e6e0, sub_3a5700
*/
void sub_38b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b6d0ULL || rel >= 0x38b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b760 size=144 callers=0 calls=4
   calls: sub_3047c0, sub_331150, sub_34e6e0, sub_3a5700
*/
void sub_38b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b760ULL || rel >= 0x38b7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038b7f0 size=832 callers=0 calls=11
   calls: sub_3047c0, sub_34e7b0, sub_381540, sub_381f40, sub_38d060, sub_38fb90, sub_3a5710, sub_3a7bb0, sub_3a7f20, sub_3be1a0, sub_3c47b0
*/
void sub_38b7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38b7f0ULL || rel >= 0x38bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038bb30 size=224 callers=1 calls=2
   calls: sub_381540, sub_38d060
*/
void sub_38bb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38bb30ULL || rel >= 0x38bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038bc10 size=16 callers=0 calls=0
*/
void sub_38bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38bc10ULL || rel >= 0x38bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038bc20 size=480 callers=1 calls=3
   calls: sub_3045e0, sub_3047c0, sub_381160
*/
void sub_38bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38bc20ULL || rel >= 0x38be00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038be00 size=96 callers=2 calls=1
   calls: sub_3a7a60
*/
void sub_38be00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38be00ULL || rel >= 0x38be60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038be60 size=496 callers=1 calls=0
*/
void sub_38be60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38be60ULL || rel >= 0x38c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c050 size=336 callers=10 calls=1
   calls: sub_3bd790
*/
void sub_38c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c050ULL || rel >= 0x38c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c1a0 size=128 callers=1 calls=0
*/
void sub_38c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c1a0ULL || rel >= 0x38c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c220 size=208 callers=1 calls=0
*/
void sub_38c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c220ULL || rel >= 0x38c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c2f0 size=288 callers=2 calls=5
   calls: sub_3514b0, sub_3680c0, sub_3797a0, sub_38c410, sub_3be230
*/
void sub_38c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c2f0ULL || rel >= 0x38c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c410 size=384 callers=1 calls=1
   calls: sub_3bdd90
*/
void sub_38c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c410ULL || rel >= 0x38c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c590 size=368 callers=0 calls=4
   calls: sub_3047c0, sub_3887b0, sub_38ab60, sub_3be1a0
*/
void sub_38c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c590ULL || rel >= 0x38c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c700 size=160 callers=0 calls=3
   calls: sub_3514b0, sub_3680c0, sub_3be230
*/
void sub_38c700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c700ULL || rel >= 0x38c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c7a0 size=144 callers=0 calls=3
   calls: sub_3514b0, sub_3680c0, sub_3797f0
*/
void sub_38c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c7a0ULL || rel >= 0x38c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c830 size=32 callers=1 calls=0
*/
void sub_38c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c830ULL || rel >= 0x38c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c850 size=112 callers=0 calls=0
*/
void sub_38c850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c850ULL || rel >= 0x38c8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c8c0 size=64 callers=0 calls=0
*/
void sub_38c8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c8c0ULL || rel >= 0x38c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038c900 size=352 callers=0 calls=1
   calls: sub_381700
*/
void sub_38c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38c900ULL || rel >= 0x38ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ca60 size=16 callers=0 calls=0
*/
void sub_38ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ca60ULL || rel >= 0x38ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ca70 size=64 callers=4 calls=1
   calls: sub_38cab0
*/
void sub_38ca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ca70ULL || rel >= 0x38cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038cab0 size=496 callers=2 calls=1
   calls: sub_383ec0
*/
void sub_38cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38cab0ULL || rel >= 0x38cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038cca0 size=256 callers=2 calls=1
   calls: sub_383ec0
*/
void sub_38cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38cca0ULL || rel >= 0x38cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

