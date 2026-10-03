/* subsdk1 functions 00253c40..002a19b0 (12 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00253c40 size=320 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_253c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x253c40ULL || rel >= 0x253d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00253d80 size=480 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_253d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x253d80ULL || rel >= 0x253f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00253f60 size=432 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_253f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x253f60ULL || rel >= 0x254110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00254110 size=432 callers=0 calls=1
   calls: sub_234c80
*/
void sub_254110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x254110ULL || rel >= 0x2542c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002542c0 size=448 callers=0 calls=1
   calls: sub_235bb0
*/
void sub_2542c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2542c0ULL || rel >= 0x254480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00254480 size=480 callers=0 calls=1
   calls: sub_234040
*/
void sub_254480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x254480ULL || rel >= 0x254660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00254660 size=432 callers=0 calls=1
   calls: sub_234040
*/
void sub_254660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x254660ULL || rel >= 0x254810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00254810 size=464 callers=0 calls=1
   calls: sub_234c80
*/
void sub_254810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x254810ULL || rel >= 0x2549e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002549e0 size=512 callers=0 calls=1
   calls: sub_234040
*/
void sub_2549e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2549e0ULL || rel >= 0x254be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00254be0 size=464 callers=0 calls=1
   calls: sub_234040
*/
void sub_254be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x254be0ULL || rel >= 0x254db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00254db0 size=496 callers=0 calls=1
   calls: sub_234c80
*/
void sub_254db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x254db0ULL || rel >= 0x254fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00254fa0 size=512 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_254fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x254fa0ULL || rel >= 0x2551a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002551a0 size=464 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_2551a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2551a0ULL || rel >= 0x255370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00255370 size=464 callers=0 calls=1
   calls: sub_234c80
*/
void sub_255370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x255370ULL || rel >= 0x255540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00255540 size=480 callers=0 calls=1
   calls: sub_235bb0
*/
void sub_255540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x255540ULL || rel >= 0x255720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00255720 size=448 callers=0 calls=1
   calls: sub_234040
*/
void sub_255720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x255720ULL || rel >= 0x2558e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002558e0 size=400 callers=0 calls=1
   calls: sub_234040
*/
void sub_2558e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2558e0ULL || rel >= 0x255a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00255a70 size=432 callers=0 calls=1
   calls: sub_234c80
*/
void sub_255a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x255a70ULL || rel >= 0x255c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00255c20 size=480 callers=0 calls=1
   calls: sub_234040
*/
void sub_255c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x255c20ULL || rel >= 0x255e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00255e00 size=432 callers=0 calls=1
   calls: sub_234040
*/
void sub_255e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x255e00ULL || rel >= 0x255fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00255fb0 size=464 callers=0 calls=1
   calls: sub_234c80
*/
void sub_255fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x255fb0ULL || rel >= 0x256180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256180 size=240 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_256180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256180ULL || rel >= 0x256270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256270 size=448 callers=2 calls=1
   calls: sub_2370c0
*/
void sub_256270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256270ULL || rel >= 0x256430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256430 size=416 callers=2 calls=1
   calls: sub_2370c0
*/
void sub_256430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256430ULL || rel >= 0x2565d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002565d0 size=432 callers=2 calls=1
   calls: sub_235bb0
*/
void sub_2565d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2565d0ULL || rel >= 0x256780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256780 size=352 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_256780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256780ULL || rel >= 0x2568e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002568e0 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_2568e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2568e0ULL || rel >= 0x256a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256a00 size=304 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_256a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256a00ULL || rel >= 0x256b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256b30 size=288 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_256b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256b30ULL || rel >= 0x256c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256c50 size=288 callers=1 calls=1
   calls: sub_237ff0
*/
void sub_256c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256c50ULL || rel >= 0x256d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256d70 size=368 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_256d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256d70ULL || rel >= 0x256ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256ee0 size=304 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_256ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256ee0ULL || rel >= 0x257010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257010 size=336 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_257010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257010ULL || rel >= 0x257160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257160 size=352 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_257160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257160ULL || rel >= 0x2572c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002572c0 size=336 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_2572c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2572c0ULL || rel >= 0x257410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257410 size=336 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_257410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257410ULL || rel >= 0x257560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257560 size=336 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_257560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257560ULL || rel >= 0x2576b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002576b0 size=320 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_2576b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2576b0ULL || rel >= 0x2577f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002577f0 size=320 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_2577f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2577f0ULL || rel >= 0x257930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257930 size=208 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_257930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257930ULL || rel >= 0x257a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257a00 size=304 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_257a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257a00ULL || rel >= 0x257b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257b30 size=320 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_257b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257b30ULL || rel >= 0x257c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257c70 size=320 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_257c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257c70ULL || rel >= 0x257db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257db0 size=272 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_257db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257db0ULL || rel >= 0x257ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257ec0 size=304 callers=0 calls=1
   calls: sub_234040
*/
void sub_257ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257ec0ULL || rel >= 0x257ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257ff0 size=304 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_257ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257ff0ULL || rel >= 0x258120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258120 size=480 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_258120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258120ULL || rel >= 0x258300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258300 size=448 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_258300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258300ULL || rel >= 0x2584c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002584c0 size=432 callers=1 calls=1
   calls: sub_237ff0
*/
void sub_2584c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2584c0ULL || rel >= 0x258670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258670 size=432 callers=1 calls=1
   calls: sub_239b60
*/
void sub_258670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258670ULL || rel >= 0x258820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258820 size=400 callers=1 calls=1
   calls: sub_238c30
*/
void sub_258820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258820ULL || rel >= 0x2589b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002589b0 size=400 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_2589b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2589b0ULL || rel >= 0x258b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258b40 size=384 callers=1 calls=1
   calls: sub_235bb0
*/
void sub_258b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258b40ULL || rel >= 0x258cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258cc0 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_258cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258cc0ULL || rel >= 0x258de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258de0 size=320 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_258de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258de0ULL || rel >= 0x258f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258f20 size=272 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_258f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258f20ULL || rel >= 0x259030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259030 size=288 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_259030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259030ULL || rel >= 0x259150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259150 size=352 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_259150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259150ULL || rel >= 0x2592b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002592b0 size=336 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_2592b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2592b0ULL || rel >= 0x259400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259400 size=352 callers=0 calls=1
   calls: sub_234c80
*/
void sub_259400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259400ULL || rel >= 0x259560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259560 size=336 callers=0 calls=1
   calls: sub_234c80
*/
void sub_259560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259560ULL || rel >= 0x2596b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002596b0 size=336 callers=0 calls=1
   calls: sub_235bb0
*/
void sub_2596b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2596b0ULL || rel >= 0x259800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259800 size=368 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_259800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259800ULL || rel >= 0x259970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259970 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_259970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259970ULL || rel >= 0x259a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259a90 size=288 callers=0 calls=1
   calls: sub_234040
*/
void sub_259a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259a90ULL || rel >= 0x259bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259bb0 size=448 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_259bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259bb0ULL || rel >= 0x259d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259d70 size=368 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_259d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259d70ULL || rel >= 0x259ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259ee0 size=272 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_259ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259ee0ULL || rel >= 0x259ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259ff0 size=352 callers=1 calls=1
   calls: sub_234040
*/
void sub_259ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259ff0ULL || rel >= 0x25a150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a150 size=336 callers=1 calls=1
   calls: sub_234040
*/
void sub_25a150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a150ULL || rel >= 0x25a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a2a0 size=336 callers=1 calls=1
   calls: sub_234c80
*/
void sub_25a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a2a0ULL || rel >= 0x25a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a3f0 size=272 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a3f0ULL || rel >= 0x25a500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a500 size=240 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25a500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a500ULL || rel >= 0x25a5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a5f0 size=352 callers=1 calls=1
   calls: sub_234040
*/
void sub_25a5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a5f0ULL || rel >= 0x25a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a750 size=336 callers=1 calls=1
   calls: sub_234040
*/
void sub_25a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a750ULL || rel >= 0x25a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a8a0 size=336 callers=1 calls=1
   calls: sub_234c80
*/
void sub_25a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a8a0ULL || rel >= 0x25a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a9f0 size=368 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a9f0ULL || rel >= 0x25ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025ab60 size=368 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25ab60ULL || rel >= 0x25acd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025acd0 size=368 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25acd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25acd0ULL || rel >= 0x25ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025ae40 size=368 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25ae40ULL || rel >= 0x25afb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025afb0 size=432 callers=2 calls=1
   calls: sub_2370c0
*/
void sub_25afb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25afb0ULL || rel >= 0x25b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025b160 size=400 callers=2 calls=1
   calls: sub_2370c0
*/
void sub_25b160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25b160ULL || rel >= 0x25b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025b2f0 size=432 callers=0 calls=1
   calls: sub_234c80
*/
void sub_25b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25b2f0ULL || rel >= 0x25b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025b4a0 size=400 callers=0 calls=1
   calls: sub_234c80
*/
void sub_25b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25b4a0ULL || rel >= 0x25b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025b630 size=400 callers=2 calls=1
   calls: sub_235bb0
*/
void sub_25b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25b630ULL || rel >= 0x25b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025b7c0 size=432 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25b7c0ULL || rel >= 0x25b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025b970 size=432 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25b970ULL || rel >= 0x25bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025bb20 size=336 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25bb20ULL || rel >= 0x25bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025bc70 size=304 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25bc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25bc70ULL || rel >= 0x25bda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025bda0 size=560 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25bda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25bda0ULL || rel >= 0x25bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025bfd0 size=528 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25bfd0ULL || rel >= 0x25c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025c1e0 size=576 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25c1e0ULL || rel >= 0x25c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025c420 size=576 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25c420ULL || rel >= 0x25c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025c660 size=544 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25c660ULL || rel >= 0x25c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025c880 size=608 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25c880ULL || rel >= 0x25cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025cae0 size=528 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25cae0ULL || rel >= 0x25ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025ccf0 size=512 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25ccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25ccf0ULL || rel >= 0x25cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025cef0 size=560 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25cef0ULL || rel >= 0x25d120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d120 size=512 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25d120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d120ULL || rel >= 0x25d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d320 size=480 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d320ULL || rel >= 0x25d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d500 size=528 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d500ULL || rel >= 0x25d710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d710 size=528 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25d710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d710ULL || rel >= 0x25d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d920 size=496 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d920ULL || rel >= 0x25db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025db10 size=544 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25db10ULL || rel >= 0x25dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025dd30 size=496 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25dd30ULL || rel >= 0x25df20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025df20 size=464 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25df20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25df20ULL || rel >= 0x25e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e0f0 size=528 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e0f0ULL || rel >= 0x25e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e300 size=480 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e300ULL || rel >= 0x25e4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e4e0 size=448 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25e4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e4e0ULL || rel >= 0x25e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e6a0 size=496 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e6a0ULL || rel >= 0x25e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e890 size=592 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e890ULL || rel >= 0x25eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025eae0 size=608 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25eae0ULL || rel >= 0x25ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025ed40 size=560 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25ed40ULL || rel >= 0x25ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025ef70 size=640 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25ef70ULL || rel >= 0x25f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f1f0 size=608 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f1f0ULL || rel >= 0x25f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f450 size=624 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f450ULL || rel >= 0x25f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f6c0 size=576 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f6c0ULL || rel >= 0x25f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f900 size=656 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f900ULL || rel >= 0x25fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025fb90 size=592 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25fb90ULL || rel >= 0x25fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025fde0 size=576 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_25fde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25fde0ULL || rel >= 0x260020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260020 size=592 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_260020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260020ULL || rel >= 0x260270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260270 size=544 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_260270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260270ULL || rel >= 0x260490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260490 size=608 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_260490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260490ULL || rel >= 0x2606f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002606f0 size=592 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_2606f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2606f0ULL || rel >= 0x260940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260940 size=608 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_260940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260940ULL || rel >= 0x260ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260ba0 size=560 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_260ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260ba0ULL || rel >= 0x260dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260dd0 size=624 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_260dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260dd0ULL || rel >= 0x261040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261040 size=608 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_261040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261040ULL || rel >= 0x2612a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002612a0 size=560 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_2612a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2612a0ULL || rel >= 0x2614d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002614d0 size=640 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_2614d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2614d0ULL || rel >= 0x261750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261750 size=608 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_261750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261750ULL || rel >= 0x2619b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002619b0 size=624 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_2619b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2619b0ULL || rel >= 0x261c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261c20 size=576 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_261c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261c20ULL || rel >= 0x261e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261e60 size=656 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_261e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261e60ULL || rel >= 0x2620f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002620f0 size=448 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_2620f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2620f0ULL || rel >= 0x2622b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002622b0 size=464 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_2622b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2622b0ULL || rel >= 0x262480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00262480 size=416 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_262480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x262480ULL || rel >= 0x262620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00262620 size=496 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_262620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x262620ULL || rel >= 0x262810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00262810 size=544 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_262810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x262810ULL || rel >= 0x262a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00262a30 size=560 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_262a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x262a30ULL || rel >= 0x262c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00262c60 size=512 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_262c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x262c60ULL || rel >= 0x262e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00262e60 size=592 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_262e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x262e60ULL || rel >= 0x2630b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002630b0 size=416 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_2630b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2630b0ULL || rel >= 0x263250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263250 size=432 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_263250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263250ULL || rel >= 0x263400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263400 size=384 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_263400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263400ULL || rel >= 0x263580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263580 size=448 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_263580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263580ULL || rel >= 0x263740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263740 size=384 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_263740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263740ULL || rel >= 0x2638c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002638c0 size=352 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_2638c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2638c0ULL || rel >= 0x263a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263a20 size=384 callers=0 calls=1
   calls: sub_234c80
*/
void sub_263a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263a20ULL || rel >= 0x263ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263ba0 size=352 callers=0 calls=1
   calls: sub_234c80
*/
void sub_263ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263ba0ULL || rel >= 0x263d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263d00 size=352 callers=0 calls=1
   calls: sub_235bb0
*/
void sub_263d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263d00ULL || rel >= 0x263e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263e60 size=336 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_263e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263e60ULL || rel >= 0x263fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263fb0 size=304 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_263fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263fb0ULL || rel >= 0x2640e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002640e0 size=288 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_2640e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2640e0ULL || rel >= 0x264200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264200 size=288 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_264200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264200ULL || rel >= 0x264320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264320 size=256 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_264320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264320ULL || rel >= 0x264420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264420 size=304 callers=2 calls=6
   calls: sub_33310, sub_33910, sub_33960, sub_339b0, sub_339f0, sub_33a20
*/
void sub_264420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264420ULL || rel >= 0x264550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264550 size=208 callers=7 calls=4
   calls: sub_33580, sub_33910, sub_339b0, sub_33a20
*/
void sub_264550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264550ULL || rel >= 0x264620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264620 size=256 callers=0 calls=0
*/
void sub_264620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264620ULL || rel >= 0x264720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264720 size=32 callers=0 calls=0
*/
void sub_264720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264720ULL || rel >= 0x264740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264740 size=48 callers=1 calls=2
   calls: sub_27a440, sub_2a0d10
*/
void sub_264740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264740ULL || rel >= 0x264770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264770 size=400 callers=0 calls=0
   ref: @constant%d
*/
void constant_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264770ULL || rel >= 0x264900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264900 size=192 callers=7 calls=5
   calls: sub_33310, sub_33910, sub_339b0, sub_339f0, sub_33a20
*/
void sub_264900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264900ULL || rel >= 0x2649c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002649c0 size=224 callers=1 calls=6
   calls: sub_33140, sub_33310, sub_33910, sub_339b0, sub_339f0, sub_33a20
*/
void sub_2649c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2649c0ULL || rel >= 0x264aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264aa0 size=144 callers=3 calls=3
   calls: sub_33020, sub_33a20, sub_342b0
*/
void sub_264aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264aa0ULL || rel >= 0x264b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264b30 size=320 callers=4 calls=6
   calls: sub_33020, sub_33580, sub_33910, sub_339b0, sub_33a20, sub_34520
*/
void sub_264b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264b30ULL || rel >= 0x264c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264c70 size=144 callers=1 calls=3
   calls: sub_33020, sub_33a20, sub_34310
*/
void sub_264c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264c70ULL || rel >= 0x264d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264d00 size=320 callers=8 calls=6
   calls: sub_33020, sub_33580, sub_33910, sub_339b0, sub_33a20, sub_343d0
*/
void sub_264d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264d00ULL || rel >= 0x264e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264e40 size=320 callers=3 calls=6
   calls: sub_33020, sub_33580, sub_33910, sub_339b0, sub_33a20, sub_343e0
*/
void sub_264e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264e40ULL || rel >= 0x264f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264f80 size=64 callers=0 calls=1
   calls: sub_13d0
*/
void sub_264f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264f80ULL || rel >= 0x264fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264fc0 size=16 callers=1 calls=0
*/
void sub_264fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264fc0ULL || rel >= 0x264fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264fd0 size=1968 callers=1 calls=16
   calls: sub_264d00, sub_2716a0, sub_27bf50, sub_33020, sub_330f0, sub_33140, sub_33310, sub_33580, sub_33650, sub_33910, sub_33960, sub_339b0
   ... +4 more
*/
void sub_264fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264fd0ULL || rel >= 0x265780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00265780 size=16 callers=1 calls=0
*/
void sub_265780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x265780ULL || rel >= 0x265790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00265790 size=384 callers=4 calls=1
   calls: sub_271a00
*/
void sub_265790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x265790ULL || rel >= 0x265910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00265910 size=12928 callers=2 calls=54
   calls: sample_off, sub_1630, sub_1e40, sub_2060, sub_268b90, sub_270d20, sub_271bd0, sub_273530, sub_27a430, sub_27a500, sub_27a6b0, sub_27c0e0
   ... +42 more
   ref: vTableArr
   ref: bb-controlflow
   ref: vTable
   ref: thisTable
   ref: thisTableArr
   ref: %s[0..%d]
*/
void thisTableArr(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x265910ULL || rel >= 0x268b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00268b90 size=592 callers=2 calls=4
   calls: sub_2a0b70, sub_2a0cd0, sub_2a0e10, sub_2a1060
*/
void sub_268b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x268b90ULL || rel >= 0x268de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00268de0 size=8592 callers=2 calls=10
   calls: sub_1200, sub_2600, sub_265790, sub_271a00, sub_29f990, sub_29fae0, sub_29fc30, sub_29fd80, sub_29fed0, sub_2a0020
   ref: v[OPOS]
   ref: o[COLR0]
   ref: o[COLR2]
   ref: !!FP2.0
   ref: o[HPOS]
   ref: o[DEPTH]
   ref: parseasm.0.0
   ref: NVIDIA
*/
void vp40_optx(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x268de0ULL || rel >= 0x26af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026af70 size=23984 callers=1 calls=107
   calls: AddrStack, GMEM_d, SparsePredicateSym, bb_controlflow_2, sub_1630, sub_2060, sub_264d00, sub_2716a0, sub_271bd0, sub_2732d0, sub_273780, sub_273e10
   ... +95 more
   ref: sample_off
   ref: __atom_address_
   ref: texunit%d
   ref: sampler%d
*/
void sample_off(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26af70ULL || rel >= 0x270d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270d20 size=928 callers=1 calls=0
*/
void sub_270d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270d20ULL || rel >= 0x2710c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002710c0 size=1504 callers=1 calls=11
   calls: sub_268b90, sub_29cfc0, sub_29d280, sub_29d3d0, sub_29d3e0, sub_29d430, sub_29d470, sub_29d4f0, sub_2a0a20, sub_2a0af0, vp40_optx
*/
void sub_2710c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2710c0ULL || rel >= 0x2716a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002716a0 size=864 callers=2 calls=8
   calls: sub_264b30, sub_264d00, sub_264e40, sub_33020, sub_33a20, sub_342b0, sub_34310, sub_34370
*/
void sub_2716a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2716a0ULL || rel >= 0x271a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271a00 size=16 callers=2 calls=0
*/
void sub_271a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271a00ULL || rel >= 0x271a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271a10 size=16 callers=0 calls=0
*/
void sub_271a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271a10ULL || rel >= 0x271a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271a20 size=16 callers=0 calls=0
*/
void sub_271a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271a20ULL || rel >= 0x271a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271a30 size=16 callers=0 calls=0
*/
void sub_271a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271a30ULL || rel >= 0x271a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271a40 size=16 callers=0 calls=0
*/
void sub_271a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271a40ULL || rel >= 0x271a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271a50 size=16 callers=0 calls=0
*/
void sub_271a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271a50ULL || rel >= 0x271a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271a60 size=16 callers=0 calls=0
*/
void sub_271a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271a60ULL || rel >= 0x271a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271a70 size=16 callers=0 calls=0
*/
void sub_271a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271a70ULL || rel >= 0x271a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271a80 size=16 callers=0 calls=0
*/
void sub_271a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271a80ULL || rel >= 0x271a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271a90 size=16 callers=0 calls=0
*/
void sub_271a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271a90ULL || rel >= 0x271aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271aa0 size=16 callers=0 calls=0
*/
void sub_271aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271aa0ULL || rel >= 0x271ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271ab0 size=16 callers=0 calls=0
*/
void sub_271ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271ab0ULL || rel >= 0x271ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271ac0 size=16 callers=0 calls=0
*/
void sub_271ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271ac0ULL || rel >= 0x271ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271ad0 size=32 callers=0 calls=0
*/
void sub_271ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271ad0ULL || rel >= 0x271af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271af0 size=16 callers=0 calls=0
*/
void sub_271af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271af0ULL || rel >= 0x271b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271b00 size=16 callers=0 calls=0
*/
void sub_271b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271b00ULL || rel >= 0x271b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271b10 size=16 callers=0 calls=0
*/
void sub_271b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271b10ULL || rel >= 0x271b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271b20 size=176 callers=9 calls=7
   calls: sub_32f90, sub_32fc0, sub_33f20, sub_33f50, sub_33f70, sub_34230, sub_34250
   ref: bb-controlflow
*/
void bb_controlflow_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271b20ULL || rel >= 0x271bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271bd0 size=5888 callers=13 calls=31
   calls: sub_1630, sub_2060, sub_2732d0, sub_2733d0, sub_27af10, sub_27bdb0, sub_27c020, sub_27c330, sub_32f90, sub_32fc0, sub_32ff0, sub_33240
   ... +19 more
*/
void sub_271bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271bd0ULL || rel >= 0x2732d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002732d0 size=256 callers=2 calls=0
*/
void sub_2732d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2732d0ULL || rel >= 0x2733d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002733d0 size=352 callers=2 calls=12
   calls: sub_32f90, sub_33f10, sub_33f60, sub_341b0, sub_341c0, sub_34220, sub_34230, sub_34240, sub_34250, sub_34280, sub_34290, threadInWarpMask
*/
void sub_2733d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2733d0ULL || rel >= 0x273530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273530 size=592 callers=2 calls=11
   calls: sub_1630, sub_2060, sub_32fc0, sub_32ff0, sub_33f00, sub_33f20, sub_33f50, sub_33f70, sub_33ff0, sub_34070, sub_34080
*/
void sub_273530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273530ULL || rel >= 0x273780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273780 size=1680 callers=5 calls=16
   calls: AddrStack, o_COV, sub_277470, sub_2775c0, sub_277700, sub_277950, sub_278460, sub_27c330, sub_27c810, sub_33020, sub_339b0, sub_33a20
   ... +4 more
*/
void sub_273780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273780ULL || rel >= 0x273e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273e10 size=800 callers=2 calls=12
   calls: sub_275580, sub_27a4a0, sub_27be20, sub_33170, sub_33310, sub_333e0, sub_33580, sub_33650, sub_33910, sub_33a20, sub_33a30, sub_34530
*/
void sub_273e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273e10ULL || rel >= 0x274130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274130 size=5200 callers=32 calls=46
   calls: sub_1630, sub_2060, sub_264b30, sub_264d00, sub_264e40, sub_271bd0, sub_278040, sub_2788b0, sub_2789e0, sub_278e10, sub_278fb0, sub_279420
   ... +34 more
*/
void sub_274130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274130ULL || rel >= 0x275580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275580 size=400 callers=10 calls=6
   calls: sub_278040, sub_33310, sub_33910, sub_339f0, sub_33a20, sub_33a30
*/
void sub_275580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275580ULL || rel >= 0x275710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275710 size=464 callers=2 calls=10
   calls: sub_275580, sub_27a4a0, sub_27be20, sub_33170, sub_33580, sub_33910, sub_339f0, sub_33a20, sub_33a30, sub_34530
*/
void sub_275710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275710ULL || rel >= 0x2758e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002758e0 size=816 callers=2 calls=15
   calls: sub_271bd0, sub_275580, sub_33170, sub_33310, sub_33580, sub_33910, sub_33a20, sub_33a30, sub_33f10, sub_341b0, sub_34220, sub_34240
   ... +3 more
*/
void sub_2758e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2758e0ULL || rel >= 0x275c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275c10 size=336 callers=2 calls=8
   calls: sub_279500, sub_27a440, sub_27bf50, sub_33140, sub_33580, sub_33910, sub_339f0, sub_33a20
*/
void sub_275c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275c10ULL || rel >= 0x275d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275d60 size=368 callers=2 calls=10
   calls: sub_1630, sub_2060, sub_279420, sub_32f90, sub_34200, sub_34230, sub_34250, sub_34270, sub_34290, sub_342a0
   ref: SparsePredicateSym
*/
void SparsePredicateSym(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275d60ULL || rel >= 0x275ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275ed0 size=944 callers=18 calls=27
   calls: sub_1630, sub_2060, sub_278040, sub_2788b0, sub_27a670, sub_32f90, sub_32fc0, sub_330f0, sub_33140, sub_33310, sub_33910, sub_33960
   ... +15 more
*/
void sub_275ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275ed0ULL || rel >= 0x276280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276280 size=800 callers=1 calls=17
   calls: GMEM_d, sub_264d00, sub_279bc0, sub_27a440, sub_27be40, sub_27bf50, sub_33020, sub_33140, sub_33310, sub_33580, sub_33910, sub_339b0
   ... +5 more
*/
void sub_276280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276280ULL || rel >= 0x2765a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002765a0 size=832 callers=1 calls=24
   calls: GMEM_d, sub_264900, sub_274130, sub_279bc0, sub_27a440, sub_27a4a0, sub_27be40, sub_27bf50, sub_32f90, sub_330f0, sub_33140, sub_33580
   ... +12 more
*/
void sub_2765a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2765a0ULL || rel >= 0x2768e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002768e0 size=896 callers=1 calls=19
   calls: GMEM_d, sub_274130, sub_279bc0, sub_27a4a0, sub_27bf50, sub_27bff0, sub_32f90, sub_33580, sub_33650, sub_33910, sub_33a20, sub_33a30
   ... +7 more
*/
void sub_2768e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2768e0ULL || rel >= 0x276c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276c60 size=1520 callers=2 calls=27
   calls: sub_264900, sub_264d00, sub_274130, sub_279500, sub_27a440, sub_27a4a0, sub_27be40, sub_27bf50, sub_27bff0, sub_32f90, sub_33020, sub_33580
   ... +15 more
*/
void sub_276c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276c60ULL || rel >= 0x277250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277250 size=544 callers=2 calls=7
   calls: sub_275ed0, sub_278040, sub_27af40, sub_33020, sub_33a20, sub_342b0, threadInWarpMask
   ref: AddrStack
*/
void AddrStack(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277250ULL || rel >= 0x277470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277470 size=336 callers=2 calls=4
   calls: sub_275ed0, sub_278040, sub_27af90, threadInWarpMask
*/
void sub_277470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277470ULL || rel >= 0x2775c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002775c0 size=320 callers=2 calls=3
   calls: sub_275ed0, sub_278040, threadInWarpMask
*/
void sub_2775c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2775c0ULL || rel >= 0x277700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277700 size=592 callers=2 calls=3
   calls: sub_275ed0, sub_278040, threadInWarpMask
*/
void sub_277700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277700ULL || rel >= 0x277950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277950 size=544 callers=3 calls=2
   calls: sub_278220, sub_27c330
*/
void sub_277950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277950ULL || rel >= 0x277b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277b70 size=1232 callers=2 calls=2
   calls: sub_275ed0, sub_27a440
   ref: o[TEX3]
   ref: o[COLR0]
   ref: o[TEX2]
   ref: o[TEX1]
   ref: o[TEX0]
   ref: o[COLH0]
   ref: o[COV]
   ref: o[COLR1]
*/
void o_COV(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277b70ULL || rel >= 0x278040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278040 size=480 callers=17 calls=3
   calls: sub_27c2e0, sub_27c330, sub_27c3c0
*/
void sub_278040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278040ULL || rel >= 0x278220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278220 size=208 callers=3 calls=7
   calls: sub_278040, sub_2782f0, sub_32f90, sub_34200, sub_34230, sub_34250, sub_34290
*/
void sub_278220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278220ULL || rel >= 0x2782f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002782f0 size=336 callers=2 calls=10
   calls: sub_278040, sub_27c240, sub_32fc0, sub_33f00, sub_33f20, sub_33f50, sub_33f70, sub_33fa0, sub_33fc0, threadInWarpMask
*/
void sub_2782f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2782f0ULL || rel >= 0x278440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278440 size=32 callers=0 calls=0
*/
void sub_278440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278440ULL || rel >= 0x278460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278460 size=1104 callers=2 calls=10
   calls: sub_264b30, sub_275580, sub_2788b0, sub_33020, sub_33310, sub_33910, sub_339f0, sub_33a20, sub_342b0, sub_34310
*/
void sub_278460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278460ULL || rel >= 0x2788b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002788b0 size=304 callers=7 calls=10
   calls: sub_278040, sub_2782f0, sub_32f90, sub_33240, sub_33a20, sub_341c0, sub_34230, sub_34250, sub_34290, sub_34560
*/
void sub_2788b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2788b0ULL || rel >= 0x2789e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002789e0 size=1072 callers=2 calls=13
   calls: sub_271bd0, sub_278e10, sub_27bf50, sub_27c330, sub_33310, sub_33910, sub_33960, sub_339f0, sub_33a20, sub_33e80, sub_340a0, sub_34580
   ... +1 more
*/
void sub_2789e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2789e0ULL || rel >= 0x278e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278e10 size=416 callers=6 calls=11
   calls: sub_2790d0, sub_33240, sub_33580, sub_33910, sub_339b0, sub_339f0, sub_33a20, sub_34550, sub_34560, sub_34570, sub_34580
*/
void sub_278e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278e10ULL || rel >= 0x278fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278fb0 size=288 callers=3 calls=6
   calls: sub_33020, sub_33310, sub_33910, sub_33a20, sub_33a30, sub_34310
*/
void sub_278fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278fb0ULL || rel >= 0x2790d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002790d0 size=848 callers=4 calls=12
   calls: sub_274130, sub_2789e0, sub_27c330, sub_2a08b0, sub_33020, sub_33310, sub_33580, sub_33910, sub_33960, sub_33a20, sub_33a30, sub_34310
*/
void sub_2790d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2790d0ULL || rel >= 0x279420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279420 size=224 callers=6 calls=7
   calls: sub_32fc0, sub_33e90, sub_33f00, sub_33f20, sub_33f50, sub_33f70, sub_33fa0
*/
void sub_279420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279420ULL || rel >= 0x279500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279500 size=1392 callers=2 calls=18
   calls: sub_274130, sub_27a4a0, sub_27bf50, sub_32f90, sub_33020, sub_33240, sub_33580, sub_33910, sub_339f0, sub_33a20, sub_341c0, sub_34230
   ... +6 more
*/
void sub_279500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279500ULL || rel >= 0x279a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279a70 size=336 callers=4 calls=4
   calls: sub_1630, sub_2060, sub_279420, sub_3fa0
   ref: surf%d
*/
void surf_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279a70ULL || rel >= 0x279bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279bc0 size=624 callers=3 calls=9
   calls: sub_274130, sub_27a4a0, sub_27bf50, sub_2a1240, sub_2a1250, sub_2a13b0, sub_33310, sub_33910, sub_33a20
*/
void sub_279bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279bc0ULL || rel >= 0x279e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279e30 size=784 callers=4 calls=17
   calls: sub_1630, sub_2060, sub_279420, sub_32f90, sub_33240, sub_33580, sub_33910, sub_339f0, sub_33a20, sub_341c0, sub_34230, sub_34250
   ... +5 more
   ref: GMEM[%d]
*/
void GMEM_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279e30ULL || rel >= 0x27a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a140 size=80 callers=0 calls=0
*/
void sub_27a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a140ULL || rel >= 0x27a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a190 size=672 callers=12 calls=5
   calls: sub_2710c0, sub_27a430, sub_29cf70, sub_2a0a20, thisTableArr
*/
void sub_27a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a190ULL || rel >= 0x27a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a430 size=16 callers=29 calls=0
*/
void sub_27a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a430ULL || rel >= 0x27a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a440 size=48 callers=14 calls=0
*/
void sub_27a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a440ULL || rel >= 0x27a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a470 size=48 callers=8 calls=0
*/
void sub_27a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a470ULL || rel >= 0x27a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a4a0 size=32 callers=20 calls=0
*/
void sub_27a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a4a0ULL || rel >= 0x27a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a4c0 size=64 callers=7 calls=0
*/
void sub_27a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a4c0ULL || rel >= 0x27a500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a500 size=368 callers=2 calls=0
*/
void sub_27a500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a500ULL || rel >= 0x27a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a670 size=64 callers=3 calls=0
*/
void sub_27a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a670ULL || rel >= 0x27a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a6b0 size=2144 callers=2 calls=6
   calls: sub_27a4c0, sub_2a08e0, sub_2a0c60, sub_2a0cc0, sub_2a15d0, sub_2a15f0
*/
void sub_27a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a6b0ULL || rel >= 0x27af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027af10 size=48 callers=1 calls=0
*/
void sub_27af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27af10ULL || rel >= 0x27af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027af40 size=80 callers=3 calls=0
*/
void sub_27af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27af40ULL || rel >= 0x27af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027af90 size=16 callers=2 calls=0
*/
void sub_27af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27af90ULL || rel >= 0x27afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027afa0 size=3600 callers=30 calls=1
   calls: sub_3fa0
   ref: %s%s%s
   ref: clockhi
   ref: threadGTMask
   ref: _CENTROID
   ref: v[A+%d]
   ref: v[%d][A+%d]
   ref: vp[%d]
   ref: threadInWarp
*/
void threadInWarpMask(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27afa0ULL || rel >= 0x27bdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027bdb0 size=112 callers=1 calls=0
*/
void sub_27bdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27bdb0ULL || rel >= 0x27be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027be20 size=32 callers=18 calls=0
*/
void sub_27be20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27be20ULL || rel >= 0x27be40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027be40 size=272 callers=9 calls=0
*/
void sub_27be40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27be40ULL || rel >= 0x27bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027bf50 size=160 callers=45 calls=0
*/
void sub_27bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27bf50ULL || rel >= 0x27bff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027bff0 size=48 callers=6 calls=0
*/
void sub_27bff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27bff0ULL || rel >= 0x27c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c020 size=192 callers=1 calls=0
*/
void sub_27c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c020ULL || rel >= 0x27c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c0e0 size=112 callers=4 calls=0
*/
void sub_27c0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c0e0ULL || rel >= 0x27c150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c150 size=48 callers=5 calls=0
*/
void sub_27c150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c150ULL || rel >= 0x27c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c180 size=48 callers=2 calls=0
*/
void sub_27c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c180ULL || rel >= 0x27c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c1b0 size=48 callers=4 calls=0
*/
void sub_27c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c1b0ULL || rel >= 0x27c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c1e0 size=48 callers=2 calls=0
*/
void sub_27c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c1e0ULL || rel >= 0x27c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c210 size=48 callers=1 calls=0
*/
void sub_27c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c210ULL || rel >= 0x27c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c240 size=96 callers=9 calls=0
*/
void sub_27c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c240ULL || rel >= 0x27c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c2a0 size=64 callers=8 calls=0
*/
void sub_27c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c2a0ULL || rel >= 0x27c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c2e0 size=80 callers=8 calls=0
*/
void sub_27c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c2e0ULL || rel >= 0x27c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c330 size=144 callers=49 calls=0
*/
void sub_27c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c330ULL || rel >= 0x27c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c3c0 size=1104 callers=8 calls=0
*/
void sub_27c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c3c0ULL || rel >= 0x27c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c810 size=336 callers=9 calls=0
*/
void sub_27c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c810ULL || rel >= 0x27c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c960 size=304 callers=1 calls=1
   calls: sub_2880
*/
void sub_27c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c960ULL || rel >= 0x27ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ca90 size=752 callers=1 calls=3
   calls: sub_27cd80, sub_2880, threadInWarpMask
*/
void sub_27ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ca90ULL || rel >= 0x27cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027cd80 size=368 callers=3 calls=1
   calls: threadInWarpMask
*/
void sub_27cd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27cd80ULL || rel >= 0x27cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027cef0 size=304 callers=3 calls=0
   ref: FragmentOutput-%d
*/
void FragmentOutput_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27cef0ULL || rel >= 0x27d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d020 size=304 callers=1 calls=0
   ref: %s[%d][%d]
*/
void s_d_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d020ULL || rel >= 0x27d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d150 size=480 callers=2 calls=1
   calls: threadInWarpMask
*/
void sub_27d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d150ULL || rel >= 0x27d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d330 size=368 callers=1 calls=1
   calls: threadInWarpMask
*/
void sub_27d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d330ULL || rel >= 0x27d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d4a0 size=384 callers=1 calls=1
   calls: threadInWarpMask
*/
void sub_27d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d4a0ULL || rel >= 0x27d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d620 size=336 callers=1 calls=2
   calls: sub_27cd80, threadInWarpMask
*/
void sub_27d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d620ULL || rel >= 0x27d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d770 size=288 callers=3 calls=0
   ref: sreg_%d
*/
void sreg__d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d770ULL || rel >= 0x27d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d890 size=256 callers=1 calls=1
   calls: sub_2880
*/
void sub_27d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d890ULL || rel >= 0x27d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d990 size=608 callers=1 calls=2
   calls: sub_2a0cb0, threadInWarpMask
*/
void sub_27d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d990ULL || rel >= 0x27dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027dbf0 size=672 callers=1 calls=2
   calls: sub_27c240, sub_27c2a0
*/
void sub_27dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27dbf0ULL || rel >= 0x27de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027de90 size=352 callers=6 calls=4
   calls: sub_27c240, sub_27c2e0, sub_27c330, sub_27c3c0
*/
void sub_27de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27de90ULL || rel >= 0x27dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027dff0 size=320 callers=13 calls=4
   calls: sub_27c240, sub_27c2e0, sub_27c330, sub_27c3c0
*/
void sub_27dff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27dff0ULL || rel >= 0x27e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e130 size=320 callers=3 calls=4
   calls: sub_27c240, sub_27c2e0, sub_27c330, sub_27c3c0
*/
void sub_27e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e130ULL || rel >= 0x27e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e270 size=304 callers=1 calls=1
   calls: sub_2880
*/
void sub_27e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e270ULL || rel >= 0x27e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e3a0 size=704 callers=1 calls=1
   calls: sub_2880
*/
void sub_27e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e3a0ULL || rel >= 0x27e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e660 size=688 callers=1 calls=1
   calls: sub_2880
*/
void sub_27e660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e660ULL || rel >= 0x27e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e910 size=592 callers=1 calls=5
   calls: sub_27a670, sub_27c960, sub_27d890, sub_2880, sub_3670
*/
void sub_27e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e910ULL || rel >= 0x27eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027eb60 size=3552 callers=1 calls=17
   calls: sub_27a6b0, sub_27c0e0, sub_27c2a0, sub_27c2e0, sub_27c3c0, sub_27ca90, sub_27dbf0, sub_27e270, sub_27f940, sub_27ff60, sub_280340, sub_29ad00
   ... +5 more
   ref: func-dead
   ref: func-%d
*/
void func_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27eb60ULL || rel >= 0x27f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027f940 size=1568 callers=1 calls=15
   calls: sub_27c330, sub_27d620, sub_27de90, sub_27dff0, sub_27e130, sub_290970, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cb40, sub_29cc00, sub_29cc40
   ... +3 more
*/
void sub_27f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27f940ULL || rel >= 0x27ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ff60 size=384 callers=3 calls=2
   calls: FragmentOutput_d, sub_297670
*/
void sub_27ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ff60ULL || rel >= 0x2800e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002800e0 size=608 callers=1 calls=3
   calls: sub_27a430, sub_27a500, sub_29a330
   ref: virtualTable
   ref: rcThisTable
*/
void virtualTable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2800e0ULL || rel >= 0x280340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280340 size=1328 callers=1 calls=4
   calls: sub_27ff60, sub_280870, sub_2808a0, sub_29ad00
*/
void sub_280340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280340ULL || rel >= 0x280870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280870 size=48 callers=1 calls=0
*/
void sub_280870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280870ULL || rel >= 0x2808a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002808a0 size=320 callers=1 calls=2
   calls: sub_2a0cd0, sub_2a0d10
*/
void sub_2808a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2808a0ULL || rel >= 0x2809e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002809e0 size=272 callers=0 calls=4
   calls: sub_28c140, sub_28d4f0, sub_28d6a0, sub_293370
*/
void sub_2809e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2809e0ULL || rel >= 0x280af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280af0 size=816 callers=0 calls=13
   calls: sub_27a470, sub_27bf50, sub_27bff0, sub_28c140, sub_28cc00, sub_28d0c0, sub_28d1f0, sub_29ad00, sub_29ae10, sub_29cb40, sub_2a1240, sub_2a13b0
   ... +1 more
*/
void sub_280af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280af0ULL || rel >= 0x280e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280e20 size=320 callers=0 calls=5
   calls: sub_28c140, sub_28cc00, sub_28d4f0, sub_2916c0, sub_292160
*/
void sub_280e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280e20ULL || rel >= 0x280f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280f60 size=1440 callers=1 calls=11
   calls: sub_28c140, sub_28cc00, sub_28cd40, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_29ad00, sub_29ae10, sub_29cc00, sub_29cf10, sub_29cf40
*/
void sub_280f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280f60ULL || rel >= 0x281500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00281500 size=608 callers=0 calls=12
   calls: sub_28c140, sub_28cd40, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_28d6a0, sub_29ad00, sub_29ae10, sub_29cc00, sub_29cf10, sub_29cf40, sub_42840
*/
void sub_281500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x281500ULL || rel >= 0x281760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00281760 size=352 callers=0 calls=11
   calls: sub_28c140, sub_28cc00, sub_28cd40, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_28d6a0, sub_28db90, sub_29ad00, sub_29ae10, sub_29cc00
*/
void sub_281760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x281760ULL || rel >= 0x2818c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002818c0 size=528 callers=0 calls=10
   calls: sub_28c140, sub_28cc00, sub_28cd40, sub_28d0c0, sub_28d1f0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cf10, sub_29cf40
*/
void sub_2818c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2818c0ULL || rel >= 0x281ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00281ad0 size=192 callers=0 calls=3
   calls: sub_28d1f0, sub_29ad00, sub_42840
*/
void sub_281ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x281ad0ULL || rel >= 0x281b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00281b90 size=880 callers=0 calls=13
   calls: sub_28c140, sub_28cc00, sub_28cd40, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_29ce00, sub_29cf10
   ... +1 more
*/
void sub_281b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x281b90ULL || rel >= 0x281f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00281f00 size=1248 callers=0 calls=15
   calls: sub_28c140, sub_28cc00, sub_28cd40, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_2966a0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_29ccc0
   ... +3 more
*/
void sub_281f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x281f00ULL || rel >= 0x2823e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002823e0 size=384 callers=0 calls=8
   calls: sub_27be40, sub_28c140, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_29ad00, sub_29ae10, sub_42840
*/
void sub_2823e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2823e0ULL || rel >= 0x282560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00282560 size=1216 callers=0 calls=14
   calls: sub_27bf50, sub_28c140, sub_28cc00, sub_28ce80, sub_28d020, sub_28d0c0, sub_28d1f0, sub_28d380, sub_28d4f0, sub_2966a0, sub_29ad00, sub_29ae10
   ... +2 more
*/
void sub_282560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x282560ULL || rel >= 0x282a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00282a20 size=480 callers=0 calls=5
   calls: sub_27be20, sub_29ad00, sub_29ae10, sub_29c1a0, sub_2a0b30
*/
void sub_282a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x282a20ULL || rel >= 0x282c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00282c00 size=2080 callers=0 calls=19
   calls: sub_27a470, sub_27be40, sub_27c330, sub_27dff0, sub_28c140, sub_28cc00, sub_28d0c0, sub_28d4f0, sub_28f880, sub_298ec0, sub_29ad00, sub_29ae10
   ... +7 more
*/
void sub_282c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x282c00ULL || rel >= 0x283420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00283420 size=976 callers=0 calls=16
   calls: sub_27a470, sub_27be40, sub_28c140, sub_28cc00, sub_28d0c0, sub_28d1f0, sub_28d380, sub_28d4f0, sub_29ad00, sub_29ae10, sub_29c910, sub_29cc00
   ... +4 more
*/
void sub_283420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x283420ULL || rel >= 0x2837f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002837f0 size=2240 callers=0 calls=24
   calls: sub_27a470, sub_27be40, sub_27bf50, sub_28c140, sub_28cd40, sub_28ce80, sub_28d020, sub_28d0c0, sub_28d1f0, sub_28d380, sub_28d4f0, sub_28fcf0
   ... +12 more
*/
void sub_2837f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2837f0ULL || rel >= 0x2840b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002840b0 size=2096 callers=0 calls=14
   calls: sub_28c140, sub_28cc00, sub_28cd40, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_29ce00, sub_29cf10
   ... +2 more
*/
void sub_2840b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2840b0ULL || rel >= 0x2848e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002848e0 size=1296 callers=0 calls=11
   calls: sub_28c140, sub_28cc00, sub_28cd40, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_29cf10
*/
void sub_2848e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2848e0ULL || rel >= 0x284df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00284df0 size=768 callers=0 calls=12
   calls: sub_28c140, sub_28cc00, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_3af50, sub_3af80, sub_42840
*/
void sub_284df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x284df0ULL || rel >= 0x2850f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002850f0 size=1408 callers=0 calls=18
   calls: s_d_d_2, sub_27c330, sub_27dff0, sub_28c140, sub_28cc00, sub_28d0c0, sub_28d4f0, sub_290970, sub_290ac0, sub_2966a0, sub_298ec0, sub_29ad00
   ... +6 more
*/
void sub_2850f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2850f0ULL || rel >= 0x285670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00285670 size=1616 callers=0 calls=11
   calls: sub_28c140, sub_28cc00, sub_28cd40, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_29ad00, sub_29ae10, sub_29cc00, sub_29cf10, sub_29cf40
*/
void sub_285670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x285670ULL || rel >= 0x285cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00285cc0 size=1392 callers=0 calls=8
   calls: sub_28c140, sub_28cc00, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_29ad00, sub_29ae10, sub_29cc00
*/
void sub_285cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x285cc0ULL || rel >= 0x286230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00286230 size=1840 callers=0 calls=12
   calls: sub_28c140, sub_28cd40, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_29ce00, sub_29cf10, sub_29cf40
*/
void sub_286230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x286230ULL || rel >= 0x286960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00286960 size=1088 callers=0 calls=12
   calls: sreg__d, sub_28c140, sub_28cc00, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_29cc40, sub_42840
*/
void sub_286960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x286960ULL || rel >= 0x286da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00286da0 size=208 callers=0 calls=3
   calls: sub_28c140, sub_28d6a0, sub_2952f0
*/
void sub_286da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x286da0ULL || rel >= 0x286e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00286e70 size=816 callers=0 calls=12
   calls: sub_28c140, sub_28cc00, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_3af50, sub_3af80, sub_42840
*/
void sub_286e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x286e70ULL || rel >= 0x2871a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002871a0 size=2672 callers=0 calls=21
   calls: sub_27a470, sub_27be40, sub_27bf50, sub_27c330, sub_27dff0, sub_28c140, sub_28cc00, sub_28cd40, sub_28ce80, sub_28d0c0, sub_28d1f0, sub_28d380
   ... +9 more
*/
void sub_2871a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2871a0ULL || rel >= 0x287c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00287c10 size=3216 callers=2 calls=22
   calls: sub_27c150, sub_27c1b0, sub_28c140, sub_28cc00, sub_28cd40, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_28fcf0, sub_295ce0, sub_295e80, sub_296200
   ... +10 more
*/
void sub_287c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x287c10ULL || rel >= 0x2888a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002888a0 size=48 callers=0 calls=0
*/
void sub_2888a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2888a0ULL || rel >= 0x2888d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002888d0 size=480 callers=0 calls=6
   calls: sub_280f60, sub_287c10, sub_28c140, sub_28cc00, sub_2959f0, sub_2a08e0
*/
void sub_2888d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2888d0ULL || rel >= 0x288ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00288ab0 size=1168 callers=0 calls=14
   calls: sub_28c140, sub_28cc00, sub_28cd40, sub_28d0c0, sub_28d1f0, sub_28d380, sub_28d4f0, sub_295e80, sub_296460, sub_29ad00, sub_29ae10, sub_29cc00
   ... +2 more
*/
void sub_288ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x288ab0ULL || rel >= 0x288f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00288f40 size=1728 callers=0 calls=12
   calls: sub_28c140, sub_28cc00, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_290970, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_29cf10, sub_42840
*/
void sub_288f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x288f40ULL || rel >= 0x289600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00289600 size=1136 callers=0 calls=12
   calls: sub_28c140, sub_28cc00, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_290970, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_29cf10, sub_42840
*/
void sub_289600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x289600ULL || rel >= 0x289a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00289a70 size=1376 callers=0 calls=8
   calls: sub_28c140, sub_28cc00, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_29ad00, sub_29ae10, sub_29cc00
*/
void sub_289a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x289a70ULL || rel >= 0x289fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00289fd0 size=944 callers=0 calls=12
   calls: sub_28c140, sub_28cc00, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_3af50, sub_3af80, sub_42840
*/
void sub_289fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x289fd0ULL || rel >= 0x28a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028a380 size=192 callers=0 calls=2
   calls: sub_29ad00, sub_42840
*/
void sub_28a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28a380ULL || rel >= 0x28a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028a440 size=608 callers=0 calls=7
   calls: sub_27be20, sub_28dd80, sub_28df20, sub_29ad00, sub_29ae10, sub_29cbc0, sub_2a0c60
*/
void sub_28a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28a440ULL || rel >= 0x28a6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028a6a0 size=576 callers=0 calls=6
   calls: sub_27be20, sub_28df20, sub_29ad00, sub_29ae10, sub_29cbc0, sub_2a0c60
*/
void sub_28a6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28a6a0ULL || rel >= 0x28a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028a8e0 size=1200 callers=0 calls=9
   calls: sub_27be20, sub_28d1f0, sub_28df20, sub_29ad00, sub_29ae10, sub_29c1a0, sub_29ca80, sub_29cc00, sub_2a0c60
*/
void sub_28a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28a8e0ULL || rel >= 0x28ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ad90 size=1136 callers=0 calls=13
   calls: sub_27be20, sub_27c330, sub_27dff0, sub_28c140, sub_28d4f0, sub_28df20, sub_298ec0, sub_29ad00, sub_29ae10, sub_29c910, sub_29cac0, sub_29cc00
   ... +1 more
*/
void sub_28ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ad90ULL || rel >= 0x28b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028b200 size=1072 callers=0 calls=8
   calls: sub_27be20, sub_2880, sub_28dd80, sub_28df20, sub_29ad00, sub_29ae10, sub_29cbc0, sub_2a0c60
*/
void sub_28b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28b200ULL || rel >= 0x28b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028b630 size=1040 callers=0 calls=4
   calls: sub_28f270, sub_29ad00, sub_29ae10, sub_29cbc0
*/
void sub_28b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28b630ULL || rel >= 0x28ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ba40 size=1312 callers=0 calls=9
   calls: sub_27d150, sub_27e3a0, sub_27e660, sub_28fde0, sub_29ad00, sub_29ae10, sub_2a0cb0, sub_2a1230, sub_2a1240
*/
void sub_28ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ba40ULL || rel >= 0x28bf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028bf60 size=480 callers=0 calls=5
   calls: sub_27be20, sub_28df20, sub_29ad00, sub_29ae10, sub_2a0c60
*/
void sub_28bf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28bf60ULL || rel >= 0x28c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028c140 size=2752 callers=37 calls=11
   calls: sub_27c330, sub_28cc00, sub_28cd40, sub_290970, sub_297300, sub_297800, sub_2985f0, sub_2989f0, sub_298d20, sub_2990a0, sub_299a80
*/
void sub_28c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28c140ULL || rel >= 0x28cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028cc00 size=320 callers=50 calls=0
*/
void sub_28cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28cc00ULL || rel >= 0x28cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028cd40 size=320 callers=25 calls=0
*/
void sub_28cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28cd40ULL || rel >= 0x28ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ce80 size=416 callers=3 calls=4
   calls: sub_28d1f0, sub_29ad00, sub_29ae10, sub_29cc00
*/
void sub_28ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ce80ULL || rel >= 0x28d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d020 size=160 callers=5 calls=1
   calls: sub_27c330
*/
void sub_28d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d020ULL || rel >= 0x28d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d0c0 size=304 callers=101 calls=5
   calls: sub_28cc00, sub_28cd40, sub_28d020, sub_297300, sub_29cc00
*/
void sub_28d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d0c0ULL || rel >= 0x28d1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d1f0 size=400 callers=214 calls=6
   calls: sub_28cd40, sub_290970, sub_297300, sub_29cc00, sub_29cdd0, sub_2a0cb0
*/
void sub_28d1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d1f0ULL || rel >= 0x28d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d380 size=368 callers=7 calls=4
   calls: sub_28d0c0, sub_29ad00, sub_29ae10, sub_29cb40
*/
void sub_28d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d380ULL || rel >= 0x28d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d4f0 size=432 callers=31 calls=7
   calls: sub_27c330, sub_28cc00, sub_28cd40, sub_28d020, sub_297300, sub_297980, sub_298200
*/
void sub_28d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d4f0ULL || rel >= 0x28d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d6a0 size=1264 callers=4 calls=1
   calls: sub_2a0cb0
*/
void sub_28d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d6a0ULL || rel >= 0x28db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028db90 size=496 callers=1 calls=5
   calls: sub_28d1f0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00
*/
void sub_28db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28db90ULL || rel >= 0x28dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028dd80 size=416 callers=2 calls=8
   calls: sub_28d1f0, sub_29ad00, sub_29ae10, sub_29c1a0, sub_29cbc0, sub_29cc00, sub_29ce30, sub_42840
*/
void sub_28dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28dd80ULL || rel >= 0x28df20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028df20 size=928 callers=7 calls=8
   calls: sub_29ad00, sub_29ae10, sub_29c1a0, sub_29ca80, sub_29cbc0, sub_29cc00, sub_29ce30, sub_42840
*/
void sub_28df20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28df20ULL || rel >= 0x28e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e2c0 size=3408 callers=1 calls=9
   calls: sub_28cc00, sub_28cd40, sub_28d1f0, sub_28f010, sub_29ad00, sub_29ae10, sub_29cc00, sub_29cf10, sub_29cf40
*/
void sub_28e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e2c0ULL || rel >= 0x28f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f010 size=224 callers=22 calls=3
   calls: sub_28cc00, sub_29cf10, sub_42840
*/
void sub_28f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f010ULL || rel >= 0x28f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f0f0 size=144 callers=1 calls=5
   calls: sub_28cd40, sub_28d0c0, sub_29ad00, sub_29cb40, sub_3af50
*/
void sub_28f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f0f0ULL || rel >= 0x28f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f180 size=240 callers=0 calls=4
   calls: sub_2966a0, sub_2975b0, sub_29ccc0, sub_29cdd0
*/
void sub_28f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f180ULL || rel >= 0x28f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f270 size=1552 callers=1 calls=9
   calls: sub_29ad00, sub_29ae10, sub_29c910, sub_29cb40, sub_29cbc0, sub_29cc00, sub_29cc40, sub_29cf10, sub_42840
*/
void sub_28f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f270ULL || rel >= 0x28f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f880 size=1136 callers=1 calls=5
   calls: sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_42840
*/
void sub_28f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f880ULL || rel >= 0x28fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028fcf0 size=240 callers=4 calls=5
   calls: sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_3670
*/
void sub_28fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28fcf0ULL || rel >= 0x28fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028fde0 size=2960 callers=1 calls=19
   calls: sub_27c330, sub_27de90, sub_27dff0, sub_27e130, sub_28cc00, sub_28d1f0, sub_290970, sub_2966a0, sub_298ec0, sub_29ad00, sub_29ae10, sub_29cb40
   ... +7 more
*/
void sub_28fde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28fde0ULL || rel >= 0x290970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290970 size=336 callers=15 calls=0
*/
void sub_290970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290970ULL || rel >= 0x290ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290ac0 size=608 callers=12 calls=9
   calls: sub_27c330, sub_27de90, sub_27dff0, sub_298cd0, sub_298ec0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00
*/
void sub_290ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290ac0ULL || rel >= 0x290d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290d20 size=1104 callers=1 calls=9
   calls: sub_28d1f0, sub_28f010, sub_290970, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_29cf10, sub_42840
*/
void sub_290d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290d20ULL || rel >= 0x291170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00291170 size=1360 callers=1 calls=9
   calls: sub_28d1f0, sub_28f010, sub_290970, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_29cf10, sub_42840
*/
void sub_291170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x291170ULL || rel >= 0x2916c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002916c0 size=2720 callers=2 calls=15
   calls: sub_28cc00, sub_28cd40, sub_28d1f0, sub_28e2c0, sub_28f010, sub_290d20, sub_291170, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_29ccc0
   ... +3 more
*/
void sub_2916c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2916c0ULL || rel >= 0x292160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292160 size=400 callers=1 calls=5
   calls: sub_28cc00, sub_28d0c0, sub_29ad00, sub_29ae10, sub_29cc00
*/
void sub_292160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292160ULL || rel >= 0x2922f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002922f0 size=2576 callers=0 calls=17
   calls: sub_27a470, sub_27bf50, sub_27bff0, sub_27c330, sub_27dff0, sub_28c140, sub_28cc00, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_298ec0, sub_29ad00
   ... +5 more
*/
void sub_2922f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2922f0ULL || rel >= 0x292d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292d00 size=1648 callers=0 calls=12
   calls: sub_27a470, sub_27bf50, sub_27bff0, sub_28c140, sub_28d0c0, sub_28d1f0, sub_28d4f0, sub_28fcf0, sub_29ad00, sub_29ae10, sub_29cc00, sub_42840
*/
void sub_292d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292d00ULL || rel >= 0x293370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293370 size=7792 callers=4 calls=20
   calls: sreg__d, sub_28cc00, sub_28cd40, sub_28d020, sub_28d0c0, sub_28d1f0, sub_290970, sub_2951e0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00
   ... +8 more
*/
void sub_293370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293370ULL || rel >= 0x2951e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002951e0 size=272 callers=2 calls=6
   calls: sub_27be20, sub_28cc00, sub_2966a0, sub_29c1a0, sub_2a0cb0, sub_42840
*/
void sub_2951e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2951e0ULL || rel >= 0x2952f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002952f0 size=1584 callers=4 calls=13
   calls: sub_28cc00, sub_28cd40, sub_28d0c0, sub_28d1f0, sub_28f0f0, sub_295920, sub_29ad00, sub_29ae10, sub_29cc00, sub_29cdd0, sub_29cf10, sub_3af50
   ... +1 more
*/
void sub_2952f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2952f0ULL || rel >= 0x295920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295920 size=208 callers=1 calls=5
   calls: sub_28cd40, sub_28d0c0, sub_29ad00, sub_29cb40, sub_3af50
*/
void sub_295920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295920ULL || rel >= 0x2959f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002959f0 size=752 callers=1 calls=7
   calls: sub_28d1f0, sub_290970, sub_29ad00, sub_29ae10, sub_29cc00, sub_29cf10, sub_29cf40
*/
void sub_2959f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2959f0ULL || rel >= 0x295ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295ce0 size=416 callers=3 calls=5
   calls: sub_28d1f0, sub_290970, sub_29ad00, sub_29ae10, sub_29cc00
*/
void sub_295ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295ce0ULL || rel >= 0x295e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295e80 size=896 callers=2 calls=4
   calls: sub_28d1f0, sub_29cac0, sub_29cc90, sub_42840
*/
void sub_295e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295e80ULL || rel >= 0x296200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296200 size=368 callers=2 calls=1
   calls: sub_27c150
*/
void sub_296200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296200ULL || rel >= 0x296370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296370 size=240 callers=1 calls=5
   calls: sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_3670
*/
void sub_296370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296370ULL || rel >= 0x296460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296460 size=320 callers=2 calls=7
   calls: sub_28cc00, sub_28d0c0, sub_2951e0, sub_29ad00, sub_29ae10, sub_29cc00, sub_2a0cb0
*/
void sub_296460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296460ULL || rel >= 0x2965a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002965a0 size=256 callers=0 calls=4
   calls: sub_287c10, sub_28c140, sub_28cc00, sub_28d380
*/
void sub_2965a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2965a0ULL || rel >= 0x2966a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002966a0 size=2848 callers=12 calls=26
   calls: sreg__d, sub_27c330, sub_27cd80, sub_27d150, sub_27d330, sub_27d4a0, sub_27de90, sub_27dff0, sub_27e130, sub_290ac0, sub_2971c0, sub_29ad00
   ... +14 more
*/
void sub_2966a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2966a0ULL || rel >= 0x2971c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002971c0 size=320 callers=1 calls=0
*/
void sub_2971c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2971c0ULL || rel >= 0x297300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297300 size=288 callers=5 calls=1
   calls: sub_27a4c0
*/
void sub_297300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297300ULL || rel >= 0x297420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297420 size=400 callers=8 calls=8
   calls: sub_27be20, sub_28cc00, sub_2966a0, sub_2975b0, sub_29c1a0, sub_29cf10, sub_2a0cb0, sub_42840
*/
void sub_297420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297420ULL || rel >= 0x2975b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002975b0 size=192 callers=2 calls=0
*/
void sub_2975b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2975b0ULL || rel >= 0x297670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297670 size=400 callers=2 calls=9
   calls: sub_27de90, sub_27dff0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_29cc40, sub_2a0cb0, sub_42840
*/
void sub_297670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297670ULL || rel >= 0x297800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297800 size=384 callers=4 calls=2
   calls: sub_27a4c0, sub_2a0cb0
*/
void sub_297800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297800ULL || rel >= 0x297980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297980 size=464 callers=1 calls=2
   calls: sub_28cc00, sub_297b50
*/
void sub_297980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297980ULL || rel >= 0x297b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297b50 size=1712 callers=3 calls=7
   calls: sub_297420, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_29cf10, sub_42840
*/
void sub_297b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297b50ULL || rel >= 0x298200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00298200 size=1008 callers=1 calls=6
   calls: sub_28cc00, sub_28cd40, sub_297420, sub_29ad00, sub_29ae10, sub_29cc00
*/
void sub_298200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x298200ULL || rel >= 0x2985f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002985f0 size=1024 callers=4 calls=7
   calls: sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_29ccc0, sub_29cdd0, sub_29cf10
*/
void sub_2985f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2985f0ULL || rel >= 0x2989f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002989f0 size=736 callers=4 calls=7
   calls: sub_28d1f0, sub_29ad00, sub_29cc00, sub_29ccc0, sub_29cdd0, sub_29cf10, sub_42840
*/
void sub_2989f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2989f0ULL || rel >= 0x298cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00298cd0 size=80 callers=1 calls=0
*/
void sub_298cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x298cd0ULL || rel >= 0x298d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00298d20 size=416 callers=4 calls=4
   calls: sub_2966a0, sub_29ad00, sub_29cc00, sub_2a0cb0
*/
void sub_298d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x298d20ULL || rel >= 0x298ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00298ec0 size=480 callers=10 calls=5
   calls: sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_42840
*/
void sub_298ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x298ec0ULL || rel >= 0x2990a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002990a0 size=736 callers=4 calls=7
   calls: sub_27c330, sub_290ac0, sub_29ad00, sub_29cac0, sub_29cc00, sub_2a0cb0, sub_42840
*/
void sub_2990a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2990a0ULL || rel >= 0x299380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299380 size=1792 callers=0 calls=11
   calls: sub_27be20, sub_27c330, sub_28cc00, sub_290ac0, sub_29ad00, sub_29ae10, sub_29c1a0, sub_29cac0, sub_29cc00, sub_2a0cb0, sub_42840
*/
void sub_299380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299380ULL || rel >= 0x299a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299a80 size=1104 callers=4 calls=9
   calls: sub_27d990, sub_2966a0, sub_299ed0, sub_29ad00, sub_29ae10, sub_29cac0, sub_29cc00, sub_2a0cb0, sub_42840
*/
void sub_299a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299a80ULL || rel >= 0x299ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299ed0 size=416 callers=1 calls=3
   calls: sub_27c150, sub_27c1b0, sub_296200
*/
void sub_299ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299ed0ULL || rel >= 0x29a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a070 size=496 callers=3 calls=6
   calls: sub_297420, sub_29ad00, sub_29ae10, sub_29cc00, sub_42840, threadInWarpMask
*/
void sub_29a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a070ULL || rel >= 0x29a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a260 size=208 callers=0 calls=2
   calls: sub_28cc00, sub_29a070
*/
void sub_29a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a260ULL || rel >= 0x29a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a330 size=672 callers=1 calls=0
*/
void sub_29a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a330ULL || rel >= 0x29a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a5d0 size=1840 callers=2 calls=0
*/
void sub_29a5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a5d0ULL || rel >= 0x29ad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ad00 size=272 callers=299 calls=0
*/
void sub_29ad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ad00ULL || rel >= 0x29ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ae10 size=1216 callers=271 calls=7
   calls: sub_29b2d0, sub_29b420, sub_29b610, sub_29b860, sub_29bb70, sub_29bef0, sub_42840
*/
void sub_29ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ae10ULL || rel >= 0x29b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b2d0 size=336 callers=2 calls=0
*/
void sub_29b2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b2d0ULL || rel >= 0x29b420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b420 size=496 callers=1 calls=0
*/
void sub_29b420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b420ULL || rel >= 0x29b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b610 size=592 callers=1 calls=0
*/
void sub_29b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b610ULL || rel >= 0x29b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b860 size=784 callers=1 calls=0
*/
void sub_29b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b860ULL || rel >= 0x29bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029bb70 size=896 callers=1 calls=0
*/
void sub_29bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29bb70ULL || rel >= 0x29bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029bef0 size=688 callers=1 calls=0
*/
void sub_29bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29bef0ULL || rel >= 0x29c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029c1a0 size=64 callers=17 calls=1
   calls: sub_29c1e0
*/
void sub_29c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29c1a0ULL || rel >= 0x29c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029c1e0 size=1840 callers=9 calls=0
*/
void sub_29c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29c1e0ULL || rel >= 0x29c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029c910 size=128 callers=9 calls=1
   calls: sub_29c1e0
*/
void sub_29c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29c910ULL || rel >= 0x29c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029c990 size=240 callers=0 calls=0
*/
void sub_29c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29c990ULL || rel >= 0x29ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ca80 size=64 callers=3 calls=1
   calls: sub_29c1e0
*/
void sub_29ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ca80ULL || rel >= 0x29cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cac0 size=128 callers=103 calls=1
   calls: sub_29c1e0
*/
void sub_29cac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cac0ULL || rel >= 0x29cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cb40 size=128 callers=27 calls=1
   calls: sub_29c1e0
*/
void sub_29cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cb40ULL || rel >= 0x29cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cbc0 size=64 callers=20 calls=1
   calls: sub_29c1e0
*/
void sub_29cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cbc0ULL || rel >= 0x29cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cc00 size=64 callers=426 calls=1
   calls: sub_29c1e0
*/
void sub_29cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cc00ULL || rel >= 0x29cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cc40 size=80 callers=9 calls=1
   calls: sub_29c1e0
*/
void sub_29cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cc40ULL || rel >= 0x29cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cc90 size=48 callers=4 calls=1
   calls: sub_29c1e0
*/
void sub_29cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cc90ULL || rel >= 0x29ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ccc0 size=64 callers=6 calls=1
   calls: sub_29cd00
*/
void sub_29ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ccc0ULL || rel >= 0x29cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cd00 size=208 callers=4 calls=0
*/
void sub_29cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cd00ULL || rel >= 0x29cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cdd0 size=48 callers=7 calls=1
   calls: sub_29cd00
*/
void sub_29cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cdd0ULL || rel >= 0x29ce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ce00 size=48 callers=6 calls=1
   calls: sub_29cd00
*/
void sub_29ce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ce00ULL || rel >= 0x29ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ce30 size=64 callers=2 calls=1
   calls: sub_29cd00
*/
void sub_29ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ce30ULL || rel >= 0x29ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ce70 size=32 callers=1 calls=0
*/
void sub_29ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ce70ULL || rel >= 0x29ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ce90 size=32 callers=1 calls=0
*/
void sub_29ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ce90ULL || rel >= 0x29ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ceb0 size=32 callers=1 calls=0
*/
void sub_29ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ceb0ULL || rel >= 0x29ced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ced0 size=32 callers=1 calls=0
*/
void sub_29ced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ced0ULL || rel >= 0x29cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cef0 size=32 callers=1 calls=0
*/
void sub_29cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cef0ULL || rel >= 0x29cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cf10 size=48 callers=129 calls=0
*/
void sub_29cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cf10ULL || rel >= 0x29cf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cf40 size=48 callers=36 calls=0
*/
void sub_29cf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cf40ULL || rel >= 0x29cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cf70 size=80 callers=1 calls=1
   calls: sub_27a430
*/
void sub_29cf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cf70ULL || rel >= 0x29cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cfc0 size=288 callers=1 calls=7
   calls: func_d, sub_1678f0, sub_27e910, sub_29a5d0, sub_3670, sub_6eab0, sub_b7b00
*/
void sub_29cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cfc0ULL || rel >= 0x29d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d0e0 size=304 callers=0 calls=0
*/
void sub_29d0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d0e0ULL || rel >= 0x29d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d210 size=16 callers=0 calls=0
*/
void sub_29d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d210ULL || rel >= 0x29d220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d220 size=48 callers=0 calls=0
*/
void sub_29d220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d220ULL || rel >= 0x29d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d250 size=48 callers=0 calls=0
*/
void sub_29d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d250ULL || rel >= 0x29d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d280 size=320 callers=5 calls=1
   calls: sub_264fc0
*/
void sub_29d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d280ULL || rel >= 0x29d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d3c0 size=16 callers=0 calls=0
*/
void sub_29d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d3c0ULL || rel >= 0x29d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d3d0 size=16 callers=1 calls=0
*/
void sub_29d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d3d0ULL || rel >= 0x29d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d3e0 size=80 callers=1 calls=1
   calls: sub_29d280
*/
void sub_29d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d3e0ULL || rel >= 0x29d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d430 size=64 callers=1 calls=1
   calls: sub_29d280
*/
void sub_29d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d430ULL || rel >= 0x29d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d470 size=128 callers=1 calls=1
   calls: sub_29d280
*/
void sub_29d470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d470ULL || rel >= 0x29d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d4f0 size=96 callers=1 calls=1
   calls: sub_29d280
*/
void sub_29d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d4f0ULL || rel >= 0x29d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d550 size=32 callers=0 calls=1
   calls: sub_264740
*/
void sub_29d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d550ULL || rel >= 0x29d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d570 size=16 callers=0 calls=0
*/
void sub_29d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d570ULL || rel >= 0x29d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d580 size=32 callers=0 calls=0
*/
void sub_29d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d580ULL || rel >= 0x29d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d5a0 size=32 callers=0 calls=0
*/
void sub_29d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d5a0ULL || rel >= 0x29d5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d5c0 size=16 callers=0 calls=0
*/
void sub_29d5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d5c0ULL || rel >= 0x29d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d5d0 size=16 callers=0 calls=0
*/
void sub_29d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d5d0ULL || rel >= 0x29d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d5e0 size=16 callers=0 calls=0
*/
void sub_29d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d5e0ULL || rel >= 0x29d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d5f0 size=8112 callers=0 calls=35
   calls: sub_264420, sub_264550, sub_264900, sub_2649c0, sub_264aa0, sub_264c70, sub_264fd0, sub_27a430, sub_27a440, sub_27a4c0, sub_27a670, sub_27c150
   ... +23 more
*/
void sub_29d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d5f0ULL || rel >= 0x29f5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f5a0 size=16 callers=0 calls=0
*/
void sub_29f5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f5a0ULL || rel >= 0x29f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f5b0 size=32 callers=0 calls=0
*/
void sub_29f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f5b0ULL || rel >= 0x29f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f5d0 size=48 callers=0 calls=0
*/
void sub_29f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f5d0ULL || rel >= 0x29f600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f600 size=528 callers=0 calls=3
   calls: sub_27a430, sub_33a30, sub_d630
*/
void sub_29f600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f600ULL || rel >= 0x29f810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f810 size=192 callers=0 calls=2
   calls: sub_33a30, sub_d630
*/
void sub_29f810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f810ULL || rel >= 0x29f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f8d0 size=48 callers=0 calls=0
*/
void sub_29f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f8d0ULL || rel >= 0x29f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f900 size=144 callers=0 calls=1
   calls: sub_d630
*/
void sub_29f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f900ULL || rel >= 0x29f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f990 size=336 callers=1 calls=1
   calls: sub_27a430
*/
void sub_29f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f990ULL || rel >= 0x29fae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029fae0 size=336 callers=1 calls=1
   calls: sub_27a430
*/
void sub_29fae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29fae0ULL || rel >= 0x29fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029fc30 size=336 callers=1 calls=1
   calls: sub_27a430
*/
void sub_29fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29fc30ULL || rel >= 0x29fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029fd80 size=336 callers=1 calls=1
   calls: sub_27a430
*/
void sub_29fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29fd80ULL || rel >= 0x29fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029fed0 size=336 callers=1 calls=1
   calls: sub_27a430
*/
void sub_29fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29fed0ULL || rel >= 0x2a0020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0020 size=336 callers=1 calls=1
   calls: sub_27a430
*/
void sub_2a0020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0020ULL || rel >= 0x2a0170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0170 size=688 callers=2 calls=6
   calls: sub_33020, sub_33580, sub_33650, sub_33910, sub_33a20, sub_34370
*/
void sub_2a0170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0170ULL || rel >= 0x2a0420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0420 size=288 callers=1 calls=6
   calls: sub_33140, sub_33310, sub_33910, sub_339b0, sub_339f0, sub_33a20
*/
void sub_2a0420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0420ULL || rel >= 0x2a0540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0540 size=672 callers=2 calls=8
   calls: sub_33020, sub_33720, sub_33910, sub_33960, sub_339b0, sub_339f0, sub_33a20, sub_34370
*/
void sub_2a0540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0540ULL || rel >= 0x2a07e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a07e0 size=208 callers=2 calls=4
   calls: sub_265780, sub_33020, sub_33a20, sub_34370
*/
void sub_2a07e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a07e0ULL || rel >= 0x2a08b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a08b0 size=48 callers=2 calls=0
*/
void sub_2a08b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a08b0ULL || rel >= 0x2a08e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a08e0 size=48 callers=2 calls=0
*/
void sub_2a08e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a08e0ULL || rel >= 0x2a0910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0910 size=272 callers=72 calls=0
*/
void sub_2a0910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0910ULL || rel >= 0x2a0a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0a20 size=208 callers=5 calls=0
*/
void sub_2a0a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0a20ULL || rel >= 0x2a0af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0af0 size=64 callers=2 calls=0
*/
void sub_2a0af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0af0ULL || rel >= 0x2a0b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0b30 size=64 callers=4 calls=0
*/
void sub_2a0b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0b30ULL || rel >= 0x2a0b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0b70 size=64 callers=1 calls=0
*/
void sub_2a0b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0b70ULL || rel >= 0x2a0bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0bb0 size=176 callers=2 calls=0
*/
void sub_2a0bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0bb0ULL || rel >= 0x2a0c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0c60 size=80 callers=19 calls=1
   calls: sub_2a0bb0
*/
void sub_2a0c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0c60ULL || rel >= 0x2a0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0cb0 size=16 callers=37 calls=0
*/
void sub_2a0cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0cb0ULL || rel >= 0x2a0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0cc0 size=16 callers=20 calls=0
*/
void sub_2a0cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0cc0ULL || rel >= 0x2a0cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0cd0 size=64 callers=32 calls=0
*/
void sub_2a0cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0cd0ULL || rel >= 0x2a0d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0d10 size=256 callers=3 calls=0
*/
void sub_2a0d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0d10ULL || rel >= 0x2a0e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0e10 size=352 callers=1 calls=1
   calls: sub_2a0bb0
*/
void sub_2a0e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0e10ULL || rel >= 0x2a0f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0f70 size=240 callers=1 calls=0
*/
void sub_2a0f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0f70ULL || rel >= 0x2a1060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1060 size=464 callers=1 calls=0
*/
void sub_2a1060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1060ULL || rel >= 0x2a1230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1230 size=16 callers=10 calls=0
*/
void sub_2a1230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1230ULL || rel >= 0x2a1240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1240 size=16 callers=14 calls=0
*/
void sub_2a1240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1240ULL || rel >= 0x2a1250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1250 size=16 callers=6 calls=0
*/
void sub_2a1250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1250ULL || rel >= 0x2a1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1260 size=64 callers=33 calls=0
*/
void sub_2a1260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1260ULL || rel >= 0x2a12a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a12a0 size=64 callers=1 calls=0
*/
void sub_2a12a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a12a0ULL || rel >= 0x2a12e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a12e0 size=112 callers=3 calls=0
*/
void sub_2a12e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a12e0ULL || rel >= 0x2a1350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1350 size=96 callers=5 calls=0
*/
void sub_2a1350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1350ULL || rel >= 0x2a13b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a13b0 size=96 callers=10 calls=0
*/
void sub_2a13b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a13b0ULL || rel >= 0x2a1410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1410 size=96 callers=5 calls=0
*/
void sub_2a1410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1410ULL || rel >= 0x2a1470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1470 size=80 callers=1 calls=0
*/
void sub_2a1470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1470ULL || rel >= 0x2a14c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a14c0 size=224 callers=1 calls=0
*/
void sub_2a14c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a14c0ULL || rel >= 0x2a15a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a15a0 size=48 callers=2 calls=0
*/
void sub_2a15a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a15a0ULL || rel >= 0x2a15d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a15d0 size=32 callers=5 calls=0
*/
void sub_2a15d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a15d0ULL || rel >= 0x2a15f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a15f0 size=112 callers=6 calls=0
*/
void sub_2a15f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a15f0ULL || rel >= 0x2a1660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1660 size=48 callers=7 calls=0
*/
void sub_2a1660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1660ULL || rel >= 0x2a1690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1690 size=112 callers=3 calls=0
*/
void sub_2a1690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1690ULL || rel >= 0x2a1700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1700 size=64 callers=1 calls=0
*/
void sub_2a1700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1700ULL || rel >= 0x2a1740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1740 size=64 callers=1 calls=0
*/
void sub_2a1740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1740ULL || rel >= 0x2a1780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1780 size=64 callers=6 calls=0
*/
void sub_2a1780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1780ULL || rel >= 0x2a17c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a17c0 size=96 callers=2 calls=0
*/
void sub_2a17c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a17c0ULL || rel >= 0x2a1820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1820 size=96 callers=3 calls=0
*/
void sub_2a1820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1820ULL || rel >= 0x2a1880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1880 size=160 callers=2 calls=0
*/
void sub_2a1880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1880ULL || rel >= 0x2a1920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1920 size=144 callers=1 calls=0
*/
void sub_2a1920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1920ULL || rel >= 0x2a19b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a19b0 size=1168 callers=1 calls=0
*/
void sub_2a19b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a19b0ULL || rel >= 0x2a1e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

