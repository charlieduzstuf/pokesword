/* main functions 017dfcd0..017e8ee0 (204 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 017dfcd0 size=224 callers=1 calls=1
   calls: sub_17c03b0
*/
void sub_17dfcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dfcd0ULL || rel >= 0x17dfdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dfdb0 size=16 callers=1 calls=0
*/
void sub_17dfdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dfdb0ULL || rel >= 0x17dfdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dfdc0 size=16 callers=1 calls=0
*/
void sub_17dfdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dfdc0ULL || rel >= 0x17dfdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dfdd0 size=16 callers=1 calls=0
*/
void sub_17dfdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dfdd0ULL || rel >= 0x17dfde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dfde0 size=16 callers=1 calls=0
*/
void sub_17dfde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dfde0ULL || rel >= 0x17dfdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dfdf0 size=32 callers=0 calls=0
*/
void sub_17dfdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dfdf0ULL || rel >= 0x17dfe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dfe10 size=16 callers=0 calls=0
*/
void sub_17dfe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dfe10ULL || rel >= 0x17dfe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dfe20 size=96 callers=0 calls=1
   calls: sub_17ccbd0
*/
void sub_17dfe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dfe20ULL || rel >= 0x17dfe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dfe80 size=32 callers=0 calls=0
*/
void sub_17dfe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dfe80ULL || rel >= 0x17dfea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dfea0 size=2208 callers=3 calls=3
   calls: sub_17dfea0, sub_17e0740, sub_17e08f0
*/
void sub_17dfea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dfea0ULL || rel >= 0x17e0740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e0740 size=432 callers=4 calls=0
*/
void sub_17e0740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e0740ULL || rel >= 0x17e08f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e08f0 size=960 callers=2 calls=1
   calls: sub_17e0740
*/
void sub_17e08f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e08f0ULL || rel >= 0x17e0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e0cb0 size=1792 callers=3 calls=3
   calls: sub_17e0cb0, sub_17e15f0, sub_17e1920
*/
void sub_17e0cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e0cb0ULL || rel >= 0x17e13b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e13b0 size=576 callers=2 calls=0
*/
void sub_17e13b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e13b0ULL || rel >= 0x17e15f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e15f0 size=304 callers=2 calls=1
   calls: sub_17e13b0
*/
void sub_17e15f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e15f0ULL || rel >= 0x17e1720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e1720 size=512 callers=0 calls=0
*/
void sub_17e1720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e1720ULL || rel >= 0x17e1920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e1920 size=1168 callers=2 calls=2
   calls: sub_17e13b0, sub_17e15f0
*/
void sub_17e1920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e1920ULL || rel >= 0x17e1db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e1db0 size=1792 callers=3 calls=3
   calls: sub_17e1db0, sub_17e26f0, sub_17e2a20
*/
void sub_17e1db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e1db0ULL || rel >= 0x17e24b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e24b0 size=576 callers=2 calls=0
*/
void sub_17e24b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e24b0ULL || rel >= 0x17e26f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e26f0 size=304 callers=2 calls=1
   calls: sub_17e24b0
*/
void sub_17e26f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e26f0ULL || rel >= 0x17e2820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e2820 size=512 callers=0 calls=0
*/
void sub_17e2820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e2820ULL || rel >= 0x17e2a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e2a20 size=1168 callers=2 calls=2
   calls: sub_17e24b0, sub_17e26f0
*/
void sub_17e2a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e2a20ULL || rel >= 0x17e2eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e2eb0 size=1968 callers=3 calls=3
   calls: sub_17e2eb0, sub_17e3890, sub_17e3c20
*/
void sub_17e2eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e2eb0ULL || rel >= 0x17e3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e3660 size=560 callers=2 calls=0
*/
void sub_17e3660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e3660ULL || rel >= 0x17e3890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e3890 size=336 callers=2 calls=1
   calls: sub_17e3660
*/
void sub_17e3890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e3890ULL || rel >= 0x17e39e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e39e0 size=576 callers=0 calls=0
*/
void sub_17e39e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e39e0ULL || rel >= 0x17e3c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e3c20 size=1216 callers=2 calls=2
   calls: sub_17e3660, sub_17e3890
*/
void sub_17e3c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e3c20ULL || rel >= 0x17e40e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e40e0 size=1968 callers=3 calls=3
   calls: sub_17e40e0, sub_17e4ac0, sub_17e4e50
*/
void sub_17e40e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e40e0ULL || rel >= 0x17e4890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e4890 size=560 callers=2 calls=0
*/
void sub_17e4890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e4890ULL || rel >= 0x17e4ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e4ac0 size=336 callers=2 calls=1
   calls: sub_17e4890
*/
void sub_17e4ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e4ac0ULL || rel >= 0x17e4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e4c10 size=576 callers=0 calls=0
*/
void sub_17e4c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e4c10ULL || rel >= 0x17e4e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e4e50 size=1216 callers=2 calls=2
   calls: sub_17e4890, sub_17e4ac0
*/
void sub_17e4e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e4e50ULL || rel >= 0x17e5310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e5310 size=80 callers=1 calls=0
*/
void sub_17e5310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e5310ULL || rel >= 0x17e5360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e5360 size=16 callers=0 calls=0
*/
void sub_17e5360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e5360ULL || rel >= 0x17e5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e5370 size=48 callers=0 calls=1
   calls: sub_17e53b0
*/
void sub_17e5370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e5370ULL || rel >= 0x17e53a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e53a0 size=16 callers=0 calls=0
*/
void sub_17e53a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e53a0ULL || rel >= 0x17e53b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e53b0 size=1808 callers=1 calls=6
   calls: sub_1788500, sub_1789690, sub_17ccc00, sub_17d0580, sub_17d9370, unnamed_91
*/
void sub_17e53b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e53b0ULL || rel >= 0x17e5ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e5ac0 size=384 callers=0 calls=2
   calls: sub_17c9200, sub_17c9250
*/
void sub_17e5ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e5ac0ULL || rel >= 0x17e5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e5c40 size=96 callers=0 calls=0
*/
void sub_17e5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e5c40ULL || rel >= 0x17e5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e5ca0 size=80 callers=0 calls=1
   calls: sub_17e7e40
*/
void sub_17e5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e5ca0ULL || rel >= 0x17e5cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e5cf0 size=96 callers=0 calls=0
*/
void sub_17e5cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e5cf0ULL || rel >= 0x17e5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e5d50 size=16 callers=0 calls=0
*/
void sub_17e5d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e5d50ULL || rel >= 0x17e5d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e5d60 size=16 callers=0 calls=0
*/
void sub_17e5d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e5d60ULL || rel >= 0x17e5d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e5d70 size=256 callers=1 calls=1
   calls: sub_17ccae0
   ref: ConnectionStripeSystem is already initialized.
   ref: [ConnectedStripe] Memory Allocate Error!! : %d
*/
void ConnectedStripe_Memory_Allocate_Error_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e5d70ULL || rel >= 0x17e5e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e5e70 size=80 callers=1 calls=0
*/
void sub_17e5e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e5e70ULL || rel >= 0x17e5ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e5ec0 size=8064 callers=0 calls=5
   calls: Particle_sort_has_failed_More_buffer_size_is_needed, sub_17ccee0, sub_17cee80, sub_17e8ec0, sub_17e8ed0
*/
void sub_17e5ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e5ec0ULL || rel >= 0x17e7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e7e40 size=768 callers=1 calls=8
   calls: sub_1788030, sub_1788610, sub_1789690, sub_17ccc00, sub_17d89f0, sub_17e84c0, sub_17e8ee0, unnamed_91
*/
void sub_17e7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e7e40ULL || rel >= 0x17e8140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8140 size=288 callers=1 calls=5
   calls: sub_1787320, sub_1787960, sub_1787c60, sub_17ccb10, sub_17e8b60
*/
void sub_17e8140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8140ULL || rel >= 0x17e8260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8260 size=32 callers=1 calls=0
*/
void sub_17e8260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8260ULL || rel >= 0x17e8280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8280 size=112 callers=1 calls=2
   calls: sub_17ccb10, sub_17e8c90
*/
void sub_17e8280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8280ULL || rel >= 0x17e82f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e82f0 size=176 callers=1 calls=3
   calls: sub_1787bf0, sub_1787c10, sub_1787c20
*/
void sub_17e82f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e82f0ULL || rel >= 0x17e83a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e83a0 size=288 callers=8 calls=2
   calls: sub_17ccc00, sub_17ccc10
   ref: TemporaryBuffer Allocation Failed. Allocation size : %d Byte.
   ref: Current TemporaryBuffer Allocation : %d/%d.
*/
void unnamed_91(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e83a0ULL || rel >= 0x17e84c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e84c0 size=16 callers=7 calls=0
*/
void sub_17e84c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e84c0ULL || rel >= 0x17e84d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e84d0 size=96 callers=33 calls=1
   calls: sub_178f1e0
*/
void sub_17e84d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e84d0ULL || rel >= 0x17e8530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8530 size=1008 callers=1 calls=3
   calls: sub_17873f0, sub_178e4c0, sub_178e500
   ref: Texture Sampler Table Already Created.
*/
void Texture_Sampler_Table_Already_Created(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8530ULL || rel >= 0x17e8920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8920 size=160 callers=1 calls=1
   calls: sub_178e5b0
*/
void sub_17e8920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8920ULL || rel >= 0x17e89c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e89c0 size=48 callers=5 calls=0
*/
void sub_17e89c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e89c0ULL || rel >= 0x17e89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e89f0 size=128 callers=0 calls=0
*/
void sub_17e89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e89f0ULL || rel >= 0x17e8a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8a70 size=144 callers=0 calls=0
*/
void sub_17e8a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8a70ULL || rel >= 0x17e8b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8b00 size=96 callers=10 calls=1
   calls: sub_178f1e0
*/
void sub_17e8b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8b00ULL || rel >= 0x17e8b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8b60 size=304 callers=6 calls=7
   calls: sub_1787320, sub_1787360, sub_1787960, sub_1787ac0, sub_1789bc0, sub_1789bd0, sub_1789c10
*/
void sub_17e8b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8b60ULL || rel >= 0x17e8c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8c90 size=112 callers=4 calls=2
   calls: sub_1787bb0, sub_1789ca0
*/
void sub_17e8c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8c90ULL || rel >= 0x17e8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8d00 size=32 callers=1 calls=0
*/
void sub_17e8d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8d00ULL || rel >= 0x17e8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8d20 size=352 callers=0 calls=1
   calls: unnamed_90
*/
void sub_17e8d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8d20ULL || rel >= 0x17e8e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8e80 size=64 callers=1 calls=1
   calls: sub_17c9f80
*/
void sub_17e8e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8e80ULL || rel >= 0x17e8ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8ec0 size=16 callers=5 calls=0
*/
void sub_17e8ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8ec0ULL || rel >= 0x17e8ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8ed0 size=16 callers=3 calls=0
*/
void sub_17e8ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8ed0ULL || rel >= 0x17e8ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017e8ee0 size=13184 callers=3 calls=0
*/
void sub_17e8ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8ee0ULL || rel >= 0x17ec260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

