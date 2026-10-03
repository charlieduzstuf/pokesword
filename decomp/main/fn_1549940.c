/* main functions 01549940..01571450 (182 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01549940 size=640 callers=2 calls=8
   calls: sub_1549bc0, sub_154ab00, sub_154ab20, sub_154ab80, sub_154b940, sub_154bfe0, sub_154c0c0, sub_154da40
   ref: =stdin
   ref: cannot %s %s: %s
   ref: reopen
*/
void reopen(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549940ULL || rel >= 0x1549bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549bc0 size=272 callers=2 calls=0
*/
void sub_1549bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549bc0ULL || rel >= 0x1549cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549cd0 size=128 callers=0 calls=0
*/
void sub_1549cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549cd0ULL || rel >= 0x1549d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549d50 size=48 callers=3 calls=1
   calls: sub_154da40
*/
void sub_1549d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549d50ULL || rel >= 0x1549d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549d80 size=32 callers=0 calls=0
*/
void sub_1549d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549d80ULL || rel >= 0x1549da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549da0 size=144 callers=91 calls=5
   calls: sub_154ab20, sub_154ab80, sub_154bfe0, sub_154c7a0, sub_154cb00
*/
void sub_1549da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549da0ULL || rel >= 0x1549e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549e30 size=192 callers=1 calls=8
   calls: sub_154aac0, sub_154ab20, sub_154ab80, sub_154ae60, sub_154bfe0, sub_154c7a0, sub_154cb00, sub_154d7f0
*/
void sub_1549e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549e30ULL || rel >= 0x1549ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549ef0 size=112 callers=6 calls=4
   calls: sub_154ab20, sub_154b750, sub_154deb0, unnamed_54
   ref: object length is not an integer
*/
void object_length_is_not_an_integer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549ef0ULL || rel >= 0x1549f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01549f60 size=560 callers=4 calls=18
   calls: sub_1549e30, sub_154ab20, sub_154ab80, sub_154ae60, sub_154af10, sub_154aff0, sub_154b0c0, sub_154b270, sub_154b640, sub_154b750, sub_154b860, sub_154b940
   ... +6 more
   ref: __tostring
   ref: %s: %p
   ref: '__tostring' must return a string
   ref: __name
*/
void tostring(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1549f60ULL || rel >= 0x154a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154a190 size=256 callers=25 calls=5
   calls: sub_154a8c0, sub_154ae60, sub_154c170, sub_154cfd0, unnamed_54
   ref: too many upvalues
   ref: stack overflow (%s)
*/
void too_many_upvalues(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154a190ULL || rel >= 0x154a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154a290 size=160 callers=2 calls=6
   calls: sub_154aac0, sub_154ab20, sub_154ae60, sub_154c4f0, sub_154ca50, sub_154cfd0
*/
void sub_154a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154a290ULL || rel >= 0x154a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154a330 size=368 callers=1 calls=11
   calls: sub_154aac0, sub_154ab20, sub_154ab80, sub_154ae60, sub_154b860, sub_154bfe0, sub_154c170, sub_154c4f0, sub_154ca50, sub_154cfd0, sub_154d7f0
   ref: _LOADED
*/
void LOADED_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154a330ULL || rel >= 0x154a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154a4a0 size=464 callers=4 calls=7
   calls: LUABOX, sub_154ab20, sub_154ab80, sub_154b940, sub_154bc50, sub_154bf60, sub_154df80
*/
void sub_154a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154a4a0ULL || rel >= 0x154a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154a670 size=192 callers=9 calls=2
   calls: sub_154aaa0, unnamed_54
   ref: multiple Lua VMs detected
   ref: core and library have incompatible numeric types
   ref: version mismatch: app. needs %f, Lua core provides %f
*/
void core_and_library_have_incompatible_numeric_types(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154a670ULL || rel >= 0x154a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154a730 size=304 callers=2 calls=9
   calls: sub_154a730, sub_154ab20, sub_154ab80, sub_154af10, sub_154b320, sub_154bf00, sub_154bfe0, sub_154dd20, sub_154de00
*/
void sub_154a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154a730ULL || rel >= 0x154a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154a860 size=96 callers=0 calls=2
   calls: sub_154bc50, sub_154df80
*/
void sub_154a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154a860ULL || rel >= 0x154a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154a8c0 size=224 callers=11 calls=1
   calls: sub_1550840
*/
void sub_154a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154a8c0ULL || rel >= 0x154a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154a9a0 size=16 callers=0 calls=0
*/
void sub_154a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154a9a0ULL || rel >= 0x154a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154a9b0 size=224 callers=47 calls=0
*/
void sub_154a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154a9b0ULL || rel >= 0x154aa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154aa90 size=16 callers=1 calls=0
*/
void sub_154aa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154aa90ULL || rel >= 0x154aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154aaa0 size=32 callers=3 calls=0
*/
void sub_154aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154aaa0ULL || rel >= 0x154aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154aac0 size=64 callers=32 calls=0
*/
void sub_154aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154aac0ULL || rel >= 0x154ab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154ab00 size=32 callers=166 calls=0
*/
void sub_154ab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154ab00ULL || rel >= 0x154ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154ab20 size=96 callers=466 calls=0
*/
void sub_154ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154ab20ULL || rel >= 0x154ab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154ab80 size=336 callers=47 calls=0
*/
void sub_154ab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154ab80ULL || rel >= 0x154acd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154acd0 size=400 callers=4 calls=0
*/
void sub_154acd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154acd0ULL || rel >= 0x154ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154ae60 size=176 callers=129 calls=0
*/
void sub_154ae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154ae60ULL || rel >= 0x154af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154af10 size=224 callers=148 calls=0
*/
void sub_154af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154af10ULL || rel >= 0x154aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154aff0 size=32 callers=14 calls=0
*/
void sub_154aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154aff0ULL || rel >= 0x154b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154b010 size=176 callers=3 calls=0
*/
void sub_154b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154b010ULL || rel >= 0x154b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154b0c0 size=208 callers=20 calls=0
*/
void sub_154b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154b0c0ULL || rel >= 0x154b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154b190 size=224 callers=2 calls=1
   calls: sub_1557030
*/
void sub_154b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154b190ULL || rel >= 0x154b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154b270 size=176 callers=6 calls=0
*/
void sub_154b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154b270ULL || rel >= 0x154b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154b320 size=352 callers=36 calls=0
*/
void sub_154b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154b320ULL || rel >= 0x154b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154b480 size=384 callers=7 calls=0
*/
void sub_154b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154b480ULL || rel >= 0x154b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154b600 size=64 callers=2 calls=1
   calls: sub_1555740
*/
void sub_154b600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154b600ULL || rel >= 0x154b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154b640 size=272 callers=35 calls=1
   calls: sub_1557030
*/
void sub_154b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154b640ULL || rel >= 0x154b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154b750 size=272 callers=35 calls=1
   calls: sub_1557110
*/
void sub_154b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154b750ULL || rel >= 0x154b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154b860 size=224 callers=16 calls=0
*/
void sub_154b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154b860ULL || rel >= 0x154b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154b940 size=528 callers=94 calls=2
   calls: f_0123456789, sub_154f870
*/
void sub_154b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154b940ULL || rel >= 0x154bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154bb50 size=256 callers=3 calls=1
   calls: sub_15550a0
*/
void sub_154bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154bb50ULL || rel >= 0x154bc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154bc50 size=256 callers=527 calls=0
*/
void sub_154bc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154bc50ULL || rel >= 0x154bd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154bd50 size=208 callers=9 calls=0
*/
void sub_154bd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154bd50ULL || rel >= 0x154be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154be20 size=224 callers=3 calls=0
*/
void sub_154be20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154be20ULL || rel >= 0x154bf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154bf00 size=32 callers=400 calls=0
*/
void sub_154bf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154bf00ULL || rel >= 0x154bf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154bf20 size=32 callers=47 calls=0
*/
void sub_154bf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154bf20ULL || rel >= 0x154bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154bf40 size=32 callers=141 calls=0
*/
void sub_154bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154bf40ULL || rel >= 0x154bf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154bf60 size=128 callers=38 calls=3
   calls: sub_154f870, sub_1556680, sub_15568f0
*/
void sub_154bf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154bf60ULL || rel >= 0x154bfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154bfe0 size=128 callers=64 calls=2
   calls: sub_154f870, sub_15568f0
*/
void sub_154bfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154bfe0ULL || rel >= 0x154c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154c060 size=96 callers=1 calls=2
   calls: null, sub_154f870
*/
void sub_154c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154c060ULL || rel >= 0x154c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154c0c0 size=176 callers=25 calls=2
   calls: null, sub_154f870
*/
void sub_154c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154c0c0ULL || rel >= 0x154c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154c170 size=240 callers=321 calls=1
   calls: sub_1552870
*/
void sub_154c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154c170ULL || rel >= 0x154c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154c260 size=48 callers=45 calls=0
*/
void sub_154c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154c260ULL || rel >= 0x154c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154c290 size=32 callers=325 calls=0
*/
void sub_154c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154c290ULL || rel >= 0x154c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154c2b0 size=48 callers=4 calls=0
*/
void sub_154c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154c2b0ULL || rel >= 0x154c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154c2e0 size=208 callers=6 calls=4
   calls: index_chain_too_long_possible_loop, sub_1554d30, sub_1554e00, sub_15568f0
*/
void sub_154c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154c2e0ULL || rel >= 0x154c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154c3b0 size=320 callers=9 calls=2
   calls: index_chain_too_long_possible_loop, sub_1554ed0
*/
void sub_154c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154c3b0ULL || rel >= 0x154c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154c4f0 size=336 callers=70 calls=3
   calls: index_chain_too_long_possible_loop, sub_1554e00, sub_15568f0
*/
void sub_154c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154c4f0ULL || rel >= 0x154c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154c640 size=352 callers=21 calls=2
   calls: index_chain_too_long_possible_loop, sub_1554d30
*/
void sub_154c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154c640ULL || rel >= 0x154c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154c7a0 size=224 callers=20 calls=1
   calls: sub_1554ed0
*/
void sub_154c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154c7a0ULL || rel >= 0x154c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154c880 size=224 callers=45 calls=1
   calls: sub_1554d30
*/
void sub_154c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154c880ULL || rel >= 0x154c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154c960 size=240 callers=4 calls=1
   calls: sub_1554ed0
*/
void sub_154c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154c960ULL || rel >= 0x154ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154ca50 size=176 callers=68 calls=2
   calls: sub_1554720, table_overflow
*/
void sub_154ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154ca50ULL || rel >= 0x154cb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154cb00 size=320 callers=31 calls=0
*/
void sub_154cb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154cb00ULL || rel >= 0x154cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154cc40 size=208 callers=1 calls=0
*/
void sub_154cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154cc40ULL || rel >= 0x154cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154cd10 size=64 callers=6 calls=1
   calls: sub_1554d30
*/
void sub_154cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154cd10ULL || rel >= 0x154cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154cd50 size=256 callers=0 calls=4
   calls: newindex_chain_too_long_possible_loop, sub_154e8b0, sub_1554e00, sub_15568f0
*/
void sub_154cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154cd50ULL || rel >= 0x154ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154ce50 size=384 callers=2 calls=3
   calls: newindex_chain_too_long_possible_loop, sub_154e8b0, sub_1554ed0
*/
void sub_154ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154ce50ULL || rel >= 0x154cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154cfd0 size=160 callers=180 calls=0
*/
void sub_154cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154cfd0ULL || rel >= 0x154d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154d070 size=416 callers=19 calls=3
   calls: newindex_chain_too_long_possible_loop, sub_154e8b0, sub_1554d30
*/
void sub_154d070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154d070ULL || rel >= 0x154d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154d210 size=288 callers=2 calls=2
   calls: sub_154e8b0, sub_1554690
*/
void sub_154d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154d210ULL || rel >= 0x154d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154d330 size=256 callers=7 calls=2
   calls: sub_154e8b0, sub_15545d0
*/
void sub_154d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154d330ULL || rel >= 0x154d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154d430 size=288 callers=2 calls=2
   calls: sub_154e8b0, sub_1554690
*/
void sub_154d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154d430ULL || rel >= 0x154d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154d550 size=400 callers=24 calls=2
   calls: sub_154e760, sub_154e9b0
*/
void sub_154d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154d550ULL || rel >= 0x154d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154d6e0 size=272 callers=1 calls=1
   calls: sub_154e760
*/
void sub_154d6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154d6e0ULL || rel >= 0x154d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154d7f0 size=144 callers=10 calls=2
   calls: C_stack_overflow, C_stack_overflow_2
*/
void sub_154d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154d7f0ULL || rel >= 0x154d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154d880 size=432 callers=5 calls=2
   calls: C_stack_overflow, error_in_error_handling_3
*/
void sub_154d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154d880ULL || rel >= 0x154da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154da30 size=16 callers=0 calls=0
*/
void sub_154da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154da30ULL || rel >= 0x154da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154da40 size=208 callers=3 calls=4
   calls: sub_154e8d0, sub_1551e50, sub_1554d30, sub_155dad0
*/
void sub_154da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154da40ULL || rel >= 0x154db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154db10 size=48 callers=1 calls=0
*/
void sub_154db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154db10ULL || rel >= 0x154db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154db40 size=16 callers=2 calls=0
*/
void sub_154db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154db40ULL || rel >= 0x154db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154db50 size=448 callers=2 calls=3
   calls: sub_154f870, sub_154f9e0, sub_1552050
*/
void sub_154db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154db50ULL || rel >= 0x154dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154dd10 size=16 callers=1 calls=1
   calls: sub_1553b90
*/
void sub_154dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154dd10ULL || rel >= 0x154dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154dd20 size=224 callers=3 calls=1
   calls: invalid_key_to_next
*/
void sub_154dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154dd20ULL || rel >= 0x154de00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154de00 size=176 callers=6 calls=2
   calls: string_length_overflow, sub_1556680
*/
void sub_154de00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154de00ULL || rel >= 0x154deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154deb0 size=208 callers=1 calls=1
   calls: get_length_of
*/
void sub_154deb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154deb0ULL || rel >= 0x154df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154df80 size=32 callers=5 calls=0
*/
void sub_154df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154df80ULL || rel >= 0x154dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154dfa0 size=96 callers=26 calls=2
   calls: sub_154f870, sub_15569c0
*/
void sub_154dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154dfa0ULL || rel >= 0x154e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154e000 size=416 callers=4 calls=0
   ref: (*no name)
*/
void no_name_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154e000ULL || rel >= 0x154e1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154e1a0 size=560 callers=3 calls=2
   calls: sub_154e760, sub_154e8d0
   ref: (*no name)
*/
void no_name_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154e1a0ULL || rel >= 0x154e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154e3d0 size=448 callers=1 calls=0
*/
void sub_154e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154e3d0ULL || rel >= 0x154e590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154e590 size=464 callers=1 calls=1
   calls: sub_154e980
*/
void sub_154e590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154e590ULL || rel >= 0x154e760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154e760 size=48 callers=7 calls=0
*/
void sub_154e760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154e760ULL || rel >= 0x154e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154e790 size=288 callers=44 calls=1
   calls: sub_154e790
*/
void sub_154e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154e790ULL || rel >= 0x154e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154e8b0 size=32 callers=11 calls=0
*/
void sub_154e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154e8b0ULL || rel >= 0x154e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154e8d0 size=48 callers=4 calls=0
*/
void sub_154e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154e8d0ULL || rel >= 0x154e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154e900 size=48 callers=25 calls=0
*/
void sub_154e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154e900ULL || rel >= 0x154e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154e930 size=80 callers=8 calls=1
   calls: sub_1552d70
*/
void sub_154e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154e930ULL || rel >= 0x154e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154e980 size=48 callers=1 calls=0
*/
void sub_154e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154e980ULL || rel >= 0x154e9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154e9b0 size=224 callers=1 calls=2
   calls: sub_154eb60, sub_1556a90
*/
void sub_154e9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154e9b0ULL || rel >= 0x154ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154ea90 size=208 callers=1 calls=2
   calls: no_message, sub_154eb60
*/
void sub_154ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154ea90ULL || rel >= 0x154eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154eb60 size=448 callers=8 calls=5
   calls: sub_1552470, sub_1552b40, sub_1552d70, sub_1554760, sub_15568a0
*/
void sub_154eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154eb60ULL || rel >= 0x154ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154ed20 size=2896 callers=5 calls=8
   calls: no_message, sub_154e790, sub_154eb60, sub_154fd00, sub_1550440, sub_1550560, sub_15562c0, sub_1556440
*/
void sub_154ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154ed20ULL || rel >= 0x154f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154f870 size=368 callers=18 calls=3
   calls: no_message, sub_154ed20, sub_1552050
*/
void sub_154f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154f870ULL || rel >= 0x154f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154f9e0 size=384 callers=3 calls=2
   calls: sub_154eb60, sub_154ed20
*/
void sub_154f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154f9e0ULL || rel >= 0x154fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154fb60 size=400 callers=3 calls=4
   calls: error_in_error_handling, error_in_error_handling_3, sub_1555fd0, sub_1556af0
   ref: no message
   ref: error in __gc metamethod (%s)
*/
void no_message(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154fb60ULL || rel >= 0x154fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154fcf0 size=16 callers=0 calls=0
*/
void sub_154fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154fcf0ULL || rel >= 0x154fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0154fd00 size=1856 callers=7 calls=4
   calls: sub_154e790, sub_1550560, sub_1550ab0, sub_1556a90
*/
void sub_154fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154fd00ULL || rel >= 0x1550440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01550440 size=288 callers=2 calls=1
   calls: sub_154e790
*/
void sub_1550440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1550440ULL || rel >= 0x1550560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01550560 size=496 callers=3 calls=1
   calls: sub_154e790
*/
void sub_1550560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1550560ULL || rel >= 0x1550750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01550750 size=240 callers=16 calls=2
   calls: error_in_error_handling, sub_1556680
   ref: error in error handling
*/
void error_in_error_handling(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1550750ULL || rel >= 0x1550840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01550840 size=128 callers=5 calls=0
*/
void sub_1550840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1550840ULL || rel >= 0x15508c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015508c0 size=352 callers=11 calls=1
   calls: sub_1552d70
*/
void sub_15508c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15508c0ULL || rel >= 0x1550a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01550a20 size=144 callers=2 calls=3
   calls: error_in_error_handling, s_d_s, sub_15508c0
   ref: stack overflow
*/
void stack_overflow_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1550a20ULL || rel >= 0x1550ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01550ab0 size=208 callers=1 calls=2
   calls: sub_15520d0, sub_1552130
*/
void sub_1550ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1550ab0ULL || rel >= 0x1550b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01550b80 size=176 callers=7 calls=3
   calls: error_in_error_handling, s_d_s, sub_15508c0
   ref: stack overflow
*/
void stack_overflow_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1550b80ULL || rel >= 0x1550c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01550c30 size=304 callers=5 calls=3
   calls: error_in_error_handling, s_d_s, sub_15508c0
   ref: stack overflow
*/
void stack_overflow_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1550c30ULL || rel >= 0x1550d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01550d60 size=784 callers=5 calls=1
   calls: stack_overflow_5
*/
void sub_1550d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1550d60ULL || rel >= 0x1551070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01551070 size=1312 callers=5 calls=9
   calls: attempt_to_s_a_s_value_s, error_in_error_handling, s_d_s, stack_overflow_5, sub_154f870, sub_15508c0, sub_1550d60, sub_1552080, sub_1556af0
   ref: stack overflow
*/
void stack_overflow_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1551070ULL || rel >= 0x1551590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01551590 size=128 callers=5 calls=4
   calls: attempt_to_divide_by_zero_2, error_in_error_handling, s_d_s, stack_overflow_6
   ref: C stack overflow
*/
void C_stack_overflow(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1551590ULL || rel >= 0x1551610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01551610 size=160 callers=4 calls=4
   calls: attempt_to_divide_by_zero_2, error_in_error_handling, s_d_s, stack_overflow_6
   ref: C stack overflow
*/
void C_stack_overflow_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1551610ULL || rel >= 0x15516b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015516b0 size=848 callers=1 calls=7
   calls: sub_1550840, sub_15508c0, sub_15520d0, sub_1552130, sub_1552a60, sub_1556680, sub_15568f0
   ref: C stack overflow
   ref: cannot resume dead coroutine
   ref: error in error handling
   ref: cannot resume non-suspended coroutine
*/
void error_in_error_handling_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15516b0ULL || rel >= 0x1551a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01551a00 size=208 callers=0 calls=3
   calls: attempt_to_divide_by_zero_2, stack_overflow_6, sub_1550d60
*/
void sub_1551a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1551a00ULL || rel >= 0x1551ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01551ad0 size=352 callers=0 calls=3
   calls: attempt_to_divide_by_zero_2, sub_1550d60, sub_15582f0
*/
void sub_1551ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1551ad0ULL || rel >= 0x1551c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01551c30 size=16 callers=1 calls=0
*/
void sub_1551c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1551c30ULL || rel >= 0x1551c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01551c40 size=144 callers=0 calls=2
   calls: error_in_error_handling, s_d_s
   ref: attempt to yield from outside a coroutine
   ref: attempt to yield across a C-call boundary
*/
void attempt_to_yield_from_outside_a_coroutine(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1551c40ULL || rel >= 0x1551cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01551cd0 size=384 callers=3 calls=6
   calls: sub_1550840, sub_15508c0, sub_15520d0, sub_1552130, sub_1552a60, sub_1556680
   ref: error in error handling
*/
void error_in_error_handling_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1551cd0ULL || rel >= 0x1551e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01551e50 size=240 callers=1 calls=2
   calls: error_in_error_handling_3, sub_1552d70
*/
void sub_1551e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1551e50ULL || rel >= 0x1551f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01551f40 size=272 callers=0 calls=5
   calls: error_in_error_handling, lua_Integer, sub_1555fd0, sub_155da70, sub_155e6a0
   ref: attempt to load a %s chunk (mode is '%s')
   ref: binary
*/
void binary(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1551f40ULL || rel >= 0x1552050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552050 size=48 callers=4 calls=0
*/
void sub_1552050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552050ULL || rel >= 0x1552080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552080 size=80 callers=2 calls=1
   calls: sub_1552d70
*/
void sub_1552080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552080ULL || rel >= 0x15520d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015520d0 size=96 callers=3 calls=1
   calls: sub_1552d70
*/
void sub_15520d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15520d0ULL || rel >= 0x1552130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552130 size=128 callers=3 calls=1
   calls: sub_1552d70
*/
void sub_1552130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552130ULL || rel >= 0x15521b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015521b0 size=256 callers=2 calls=3
   calls: sub_154f870, sub_15522b0, sub_1552d70
*/
void sub_15521b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15521b0ULL || rel >= 0x15522b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015522b0 size=448 callers=2 calls=1
   calls: sub_1552d70
*/
void sub_15522b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15522b0ULL || rel >= 0x1552470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552470 size=192 callers=1 calls=2
   calls: sub_1552a60, sub_1552d70
*/
void sub_1552470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552470ULL || rel >= 0x1552530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552530 size=384 callers=1 calls=3
   calls: sub_1550840, sub_1552790, sub_1556210
*/
void sub_1552530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552530ULL || rel >= 0x15526b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015526b0 size=224 callers=0 calls=8
   calls: function, not_enough_memory, sub_154aaa0, sub_15522b0, sub_15545d0, sub_1554720, sub_1556a20, table_overflow
*/
void sub_15526b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15526b0ULL || rel >= 0x1552790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552790 size=208 callers=1 calls=3
   calls: sub_154ea90, sub_1552a60, sub_1552d70
*/
void sub_1552790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552790ULL || rel >= 0x1552860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552860 size=16 callers=3 calls=0
*/
void sub_1552860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552860ULL || rel >= 0x1552870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552870 size=64 callers=1 calls=1
   calls: sub_154e930
*/
void sub_1552870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552870ULL || rel >= 0x15528b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015528b0 size=112 callers=3 calls=1
   calls: sub_154e930
*/
void sub_15528b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15528b0ULL || rel >= 0x1552920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552920 size=128 callers=0 calls=1
   calls: sub_1552d70
*/
void sub_1552920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552920ULL || rel >= 0x15529a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015529a0 size=192 callers=1 calls=1
   calls: sub_1552d70
*/
void sub_15529a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15529a0ULL || rel >= 0x1552a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552a60 size=144 callers=9 calls=2
   calls: sub_154e8d0, sub_1552d70
*/
void sub_1552a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552a60ULL || rel >= 0x1552af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552af0 size=80 callers=4 calls=1
   calls: sub_154e930
*/
void sub_1552af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552af0ULL || rel >= 0x1552b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552b40 size=192 callers=1 calls=1
   calls: sub_1552d70
*/
void sub_1552b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552b40ULL || rel >= 0x1552c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552c00 size=96 callers=5 calls=0
*/
void sub_1552c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552c00ULL || rel >= 0x1552c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552c60 size=272 callers=10 calls=3
   calls: error_in_error_handling, s_d_s, sub_154f9e0
   ref: too many %s (limit is %d)
*/
void too_many_s_limit_is_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552c60ULL || rel >= 0x1552d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552d70 size=160 callers=86 calls=2
   calls: error_in_error_handling, sub_154f9e0
*/
void sub_1552d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552d70ULL || rel >= 0x1552e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552e10 size=32 callers=2 calls=1
   calls: s_d_s
   ref: memory allocation error: block too big
*/
void memory_allocation_error_block_too_big(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552e10ULL || rel >= 0x1552e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552e30 size=80 callers=1 calls=0
*/
void sub_1552e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552e30ULL || rel >= 0x1552e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552e80 size=16 callers=1 calls=0
*/
void sub_1552e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552e80ULL || rel >= 0x1552e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552e90 size=16 callers=1 calls=0
*/
void sub_1552e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552e90ULL || rel >= 0x1552ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552ea0 size=16 callers=1 calls=0
*/
void sub_1552ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552ea0ULL || rel >= 0x1552eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552eb0 size=80 callers=11 calls=0
*/
void sub_1552eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552eb0ULL || rel >= 0x1552f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01552f00 size=464 callers=2 calls=1
   calls: sub_1552c00
   ref: (*temporary)
   ref: (*vararg)
*/
void vararg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1552f00ULL || rel >= 0x15530d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015530d0 size=400 callers=1 calls=1
   calls: sub_1552c00
   ref: (*temporary)
   ref: (*vararg)
*/
void vararg_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15530d0ULL || rel >= 0x1553260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01553260 size=1184 callers=6 calls=4
   calls: constant, string, sub_15545d0, sub_1554720
   ref: for iterator
   ref: metamethod
*/
void metamethod(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1553260ULL || rel >= 0x1553700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01553700 size=80 callers=7 calls=3
   calls: name_2, s_d_s, upvalue
   ref: attempt to %s a %s value%s
*/
void attempt_to_s_a_s_value_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1553700ULL || rel >= 0x1553750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01553750 size=256 callers=29 calls=4
   calls: null, string, sub_1553b90, sub_1555fd0
   ref: %s:%d: %s
*/
void s_d_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1553750ULL || rel >= 0x1553850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01553850 size=336 callers=2 calls=2
   calls: constant, sub_1555fd0
   ref: upvalue
   ref:  (%s '%s')
*/
void upvalue(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1553850ULL || rel >= 0x15539a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015539a0 size=48 callers=1 calls=1
   calls: attempt_to_s_a_s_value_s
   ref: concatenate
*/
void concatenate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15539a0ULL || rel >= 0x15539d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015539d0 size=112 callers=2 calls=2
   calls: attempt_to_s_a_s_value_s, sub_1557030
*/
void sub_15539d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15539d0ULL || rel >= 0x1553a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01553a40 size=112 callers=1 calls=3
   calls: s_d_s, sub_1557110, upvalue
   ref: number%s has no integer representation
*/
void number_s_has_no_integer_representation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1553a40ULL || rel >= 0x1553ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01553ab0 size=112 callers=2 calls=2
   calls: name_2, s_d_s
   ref: attempt to compare two %s values
   ref: attempt to compare %s with %s
*/
void attempt_to_compare_s_with_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1553ab0ULL || rel >= 0x1553b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01553b20 size=112 callers=1 calls=2
   calls: string, sub_1555fd0
   ref: %s:%d: %s
*/
void s_d_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1553b20ULL || rel >= 0x1553b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01553b90 size=96 callers=2 calls=2
   calls: C_stack_overflow_2, error_in_error_handling
*/
void sub_1553b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1553b90ULL || rel >= 0x1553bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01553bf0 size=384 callers=1 calls=2
   calls: error_in_error_handling, stack_overflow_5
*/
void sub_1553bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1553bf0ULL || rel >= 0x1553d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01553d70 size=912 callers=4 calls=2
   calls: constant, sub_1552c00
   ref: method
   ref: upvalue
   ref: global
   ref: constant
   ref: `qATPP\l<
*/
void constant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1553d70ULL || rel >= 0x1554100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01554100 size=416 callers=1 calls=3
   calls: s_d_s, sub_1554be0, sub_1557ab0
   ref: invalid key to 'next'
*/
void invalid_key_to_next(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1554100ULL || rel >= 0x15542a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015542a0 size=816 callers=4 calls=5
   calls: s_d_s, sub_1552d70, sub_1554ed0, sub_1555360, table_index_is_nil
   ref: table overflow
*/
void table_overflow(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15542a0ULL || rel >= 0x15545d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015545d0 size=192 callers=5 calls=1
   calls: table_index_is_nil
*/
void sub_15545d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15545d0ULL || rel >= 0x1554690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01554690 size=112 callers=7 calls=1
   calls: sub_1554ed0
*/
void sub_1554690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1554690ULL || rel >= 0x1554700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01554700 size=32 callers=1 calls=0
*/
void sub_1554700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1554700ULL || rel >= 0x1554720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01554720 size=64 callers=6 calls=1
   calls: sub_154e930
*/
void sub_1554720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1554720ULL || rel >= 0x1554760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01554760 size=112 callers=1 calls=1
   calls: sub_1552d70
*/
void sub_1554760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1554760ULL || rel >= 0x15547d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015547d0 size=1040 callers=5 calls=8
   calls: s_d_s, sub_154e8b0, sub_1554be0, sub_1554ed0, sub_1555360, sub_1557110, table_index_is_nil, table_overflow
   ref: table index is NaN
   ref: table index is nil
*/
void table_index_is_nil(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15547d0ULL || rel >= 0x1554be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01554be0 size=336 callers=5 calls=1
   calls: sub_1556250
*/
void sub_1554be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1554be0ULL || rel >= 0x1554d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01554d30 size=112 callers=6 calls=0
*/
void sub_1554d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1554d30ULL || rel >= 0x1554da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01554da0 size=96 callers=4 calls=0
*/
void sub_1554da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1554da0ULL || rel >= 0x1554e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01554e00 size=208 callers=4 calls=2
   calls: sub_1554be0, sub_1557ab0
*/
void sub_1554e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1554e00ULL || rel >= 0x1554ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01554ed0 size=464 callers=12 calls=3
   calls: sub_1554be0, sub_1557110, sub_1557ab0
*/
void sub_1554ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1554ed0ULL || rel >= 0x15550a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015550a0 size=560 callers=2 calls=0
*/
void sub_15550a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15550a0ULL || rel >= 0x15552d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015552d0 size=112 callers=2 calls=0
*/
void sub_15552d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15552d0ULL || rel >= 0x1555340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01555340 size=32 callers=2 calls=0
*/
void sub_1555340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1555340ULL || rel >= 0x1555360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01555360 size=80 callers=3 calls=0
*/
void sub_1555360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1555360ULL || rel >= 0x15553b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015553b0 size=704 callers=1 calls=4
   calls: perform_bitwise_operation_on, sub_1555670, sub_1557030, sub_1557110
*/
void sub_15553b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15553b0ULL || rel >= 0x1555670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01555670 size=160 callers=1 calls=0
*/
void sub_1555670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1555670ULL || rel >= 0x1555710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01555710 size=48 callers=4 calls=0
*/
void sub_1555710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1555710ULL || rel >= 0x1555740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01555740 size=704 callers=37 calls=0
*/
void sub_1555740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1555740ULL || rel >= 0x1555a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01555a00 size=128 callers=1 calls=0
*/
void sub_1555a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1555a00ULL || rel >= 0x1555a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01555a80 size=224 callers=5 calls=1
   calls: sub_1556680
   ref: -0123456789
*/
void f_0123456789(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1555a80ULL || rel >= 0x1555b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01555b60 size=1136 callers=4 calls=7
   calls: f_0123456789, s_d_s, stack_overflow_3, stack_overflow_4, string_length_overflow, sub_1555fd0, sub_1556680
   ref: invalid option '%%%c' to 'lua_pushfstring'
   ref: (null)
*/
void null(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1555b60ULL || rel >= 0x1555fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01555fd0 size=128 callers=27 calls=1
   calls: null
*/
void sub_1555fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1555fd0ULL || rel >= 0x1556050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556050 size=368 callers=3 calls=0
   ref: [string "
*/
void string(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556050ULL || rel >= 0x15561c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015561c0 size=80 callers=0 calls=0
*/
void sub_15561c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15561c0ULL || rel >= 0x1556210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556210 size=64 callers=1 calls=0
*/
void sub_1556210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556210ULL || rel >= 0x1556250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556250 size=112 callers=1 calls=0
*/
void sub_1556250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556250ULL || rel >= 0x15562c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015562c0 size=384 callers=3 calls=1
   calls: sub_1552d70
*/
void sub_15562c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15562c0ULL || rel >= 0x1556440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556440 size=80 callers=1 calls=0
*/
void sub_1556440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556440ULL || rel >= 0x1556490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556490 size=496 callers=1 calls=3
   calls: sub_154e900, sub_15562c0, sub_1556680
   ref: not enough memory
*/
void not_enough_memory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556490ULL || rel >= 0x1556680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556680 size=464 callers=20 calls=3
   calls: memory_allocation_error_block_too_big, sub_154e930, sub_15562c0
*/
void sub_1556680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556680ULL || rel >= 0x1556850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556850 size=80 callers=2 calls=1
   calls: sub_154e930
*/
void sub_1556850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556850ULL || rel >= 0x15568a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015568a0 size=80 callers=1 calls=0
*/
void sub_15568a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15568a0ULL || rel >= 0x15568f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015568f0 size=208 callers=33 calls=1
   calls: sub_1556680
*/
void sub_15568f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15568f0ULL || rel >= 0x15569c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015569c0 size=96 callers=1 calls=2
   calls: memory_allocation_error_block_too_big, sub_154e930
*/
void sub_15569c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15569c0ULL || rel >= 0x1556a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556a20 size=112 callers=1 calls=2
   calls: sub_154e900, sub_15568f0
*/
void sub_1556a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556a20ULL || rel >= 0x1556a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556a90 size=96 callers=8 calls=1
   calls: sub_1554da0
*/
void sub_1556a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556a90ULL || rel >= 0x1556af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556af0 size=128 callers=5 calls=0
*/
void sub_1556af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556af0ULL || rel >= 0x1556b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556b70 size=176 callers=3 calls=2
   calls: sub_1554da0, sub_15568f0
   ref: __name
*/
void name_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556b70ULL || rel >= 0x1556c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556c20 size=208 callers=1 calls=2
   calls: C_stack_overflow, C_stack_overflow_2
*/
void sub_1556c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556c20ULL || rel >= 0x1556cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556cf0 size=448 callers=2 calls=3
   calls: C_stack_overflow, C_stack_overflow_2, sub_1554da0
*/
void sub_1556cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556cf0ULL || rel >= 0x1556eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556eb0 size=272 callers=3 calls=5
   calls: concatenate, number_s_has_no_integer_representation, sub_15539d0, sub_1556cf0, sub_1557030
   ref: perform arithmetic on
   ref: perform bitwise operation on
*/
void perform_bitwise_operation_on(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556eb0ULL || rel >= 0x1556fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01556fc0 size=112 callers=3 calls=1
   calls: sub_1556cf0
*/
void sub_1556fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556fc0ULL || rel >= 0x1557030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01557030 size=224 callers=9 calls=1
   calls: sub_1555740
*/
void sub_1557030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1557030ULL || rel >= 0x1557110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01557110 size=272 callers=8 calls=1
   calls: sub_1555740
*/
void sub_1557110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1557110ULL || rel >= 0x1557220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01557220 size=336 callers=5 calls=5
   calls: attempt_to_s_a_s_value_s, s_d_s, sub_1554ed0, sub_1556a90, sub_1556af0
   ref: '__index' chain too long; possible loop
*/
void index_chain_too_long_possible_loop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1557220ULL || rel >= 0x1557370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01557370 size=512 callers=4 calls=7
   calls: attempt_to_s_a_s_value_s, s_d_s, sub_154e8b0, sub_1554ed0, sub_1556a90, sub_1556af0, table_index_is_nil
   ref: '__newindex' chain too long; possible loop
*/
void newindex_chain_too_long_possible_loop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1557370ULL || rel >= 0x1557570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01557570 size=640 callers=1 calls=2
   calls: attempt_to_compare_s_with_s, sub_1556fc0
*/
void sub_1557570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1557570ULL || rel >= 0x15577f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015577f0 size=704 callers=1 calls=2
   calls: attempt_to_compare_s_with_s, sub_1556fc0
*/
void sub_15577f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15577f0ULL || rel >= 0x1557ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01557ab0 size=880 callers=5 calls=3
   calls: sub_1555740, sub_1556a90, sub_1556c20
*/
void sub_1557ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1557ab0ULL || rel >= 0x1557e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01557e20 size=768 callers=4 calls=5
   calls: f_0123456789, perform_bitwise_operation_on, s_d_s, sub_1556680, sub_1556850
   ref: string length overflow
*/
void string_length_overflow(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1557e20ULL || rel >= 0x1558120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01558120 size=256 callers=2 calls=4
   calls: attempt_to_s_a_s_value_s, sub_15550a0, sub_1556a90, sub_1556af0
   ref: get length of
*/
void get_length_of(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1558120ULL || rel >= 0x1558220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01558220 size=80 callers=0 calls=1
   calls: s_d_s
   ref: attempt to divide by zero
*/
void attempt_to_divide_by_zero(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1558220ULL || rel >= 0x1558270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01558270 size=80 callers=0 calls=1
   calls: s_d_s
   ref: attempt to perform 'n%%0'
*/
void attempt_to_perform_n_0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1558270ULL || rel >= 0x15582c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015582c0 size=48 callers=0 calls=0
*/
void sub_15582c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15582c0ULL || rel >= 0x15582f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015582f0 size=400 callers=1 calls=1
   calls: string_length_overflow
*/
void sub_15582f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15582f0ULL || rel >= 0x1558480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01558480 size=10720 callers=4 calls=28
   calls: C_stack_overflow, get_length_of, index_chain_too_long_possible_loop, newindex_chain_too_long_possible_loop, perform_bitwise_operation_on, s_d_s, stack_overflow_3, stack_overflow_6, string_length_overflow, sub_154e8b0, sub_154e8d0, sub_154f870
   ... +16 more
   ref: 'for' step must be a number
   ref: attempt to perform 'n%%0'
   ref: 'for' limit must be a number
   ref: attempt to divide by zero
   ref: 'for' initial value must be a number
*/
void attempt_to_divide_by_zero_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1558480ULL || rel >= 0x155ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155ae60 size=944 callers=1 calls=3
   calls: sub_154e900, sub_1556680, sub_15568f0
   ref: repeat
   ref: return
   ref: elseif
   ref: function
*/
void function(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155ae60ULL || rel >= 0x155b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155b210 size=96 callers=15 calls=0
*/
void sub_155b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155b210ULL || rel >= 0x155b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155b270 size=16 callers=35 calls=1
   calls: lexical_element_too_long
*/
void sub_155b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155b270ULL || rel >= 0x155b280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155b280 size=320 callers=18 calls=5
   calls: error_in_error_handling, lexical_element_too_long, s_d_s_2, sub_1552d70, sub_1555fd0
   ref: %s near %s
   ref: lexical element too long
*/
void lexical_element_too_long(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155b280ULL || rel >= 0x155b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155b3c0 size=176 callers=7 calls=3
   calls: sub_154f870, sub_1554690, sub_1556680
*/
void sub_155b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155b3c0ULL || rel >= 0x155b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155b470 size=128 callers=1 calls=2
   calls: sub_1552d70, sub_1556680
*/
void sub_155b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155b470ULL || rel >= 0x155b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155b4f0 size=96 callers=71 calls=1
   calls: unfinished_string
*/
void sub_155b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155b4f0ULL || rel >= 0x155b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155b550 size=6448 callers=2 calls=11
   calls: chunk_has_too_many_lines, comment, lexical_element_too_long, lexical_element_too_long_2, sub_154f870, sub_1552d70, sub_1554690, sub_1555710, sub_1555a00, sub_1556680, sub_155da70
   ref: UTF-8 value too large
   ref: missing '}'
   ref: invalid escape sequence
   ref: lexical element too long
   ref: missing '{'
   ref: invalid long string delimiter
   ref: unfinished string
   ref: hexadecimal digit expected
*/
void unfinished_string(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155b550ULL || rel >= 0x155ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155ce80 size=48 callers=1 calls=1
   calls: unfinished_string
*/
void sub_155ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155ce80ULL || rel >= 0x155ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155ceb0 size=208 callers=6 calls=2
   calls: lexical_element_too_long, sub_155da70
   ref: chunk has too many lines
*/
void chunk_has_too_many_lines(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155ceb0ULL || rel >= 0x155cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155cf80 size=416 callers=4 calls=3
   calls: lexical_element_too_long, sub_1552d70, sub_155da70
   ref: lexical element too long
*/
void lexical_element_too_long_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155cf80ULL || rel >= 0x155d120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155d120 size=1184 callers=2 calls=9
   calls: chunk_has_too_many_lines, lexical_element_too_long, lexical_element_too_long_2, sub_154f870, sub_1552d70, sub_1554690, sub_1555fd0, sub_1556680, sub_155da70
   ref: lexical element too long
   ref: comment
   ref: unfinished long %s (starting at line %d)
   ref: string
*/
void comment(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155d120ULL || rel >= 0x155d5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155d5c0 size=1200 callers=0 calls=4
   calls: lexical_element_too_long, sub_1552d70, sub_1555740, sub_155da70
   ref: lexical element too long
   ref: malformed number
*/
void malformed_number(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155d5c0ULL || rel >= 0x155da70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155da70 size=96 callers=58 calls=0
*/
void sub_155da70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155da70ULL || rel >= 0x155dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155dad0 size=16 callers=1 calls=0
*/
void sub_155dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155dad0ULL || rel >= 0x155dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155dae0 size=160 callers=38 calls=0
*/
void sub_155dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155dae0ULL || rel >= 0x155db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155db80 size=864 callers=1 calls=7
   calls: s_s_precompiled_chunk, stack_overflow_4, sub_15528b0, sub_1552af0, sub_1555fd0, sub_155dae0, truncated_2
   ref: Instruction
   ref: lua_Number
   ref: corrupted
   ref: version mismatch in
   ref: endianness mismatch in
   ref: %s size mismatch in
   ref: size_t
   ref: float format mismatch in
*/
void lua_Integer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155db80ULL || rel >= 0x155dee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155dee0 size=1696 callers=2 calls=6
   calls: s_s_precompiled_chunk, sub_1552af0, sub_1552d70, sub_155dae0, truncated_2, truncated_3
   ref: truncated
*/
void truncated_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155dee0ULL || rel >= 0x155e580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155e580 size=64 callers=14 calls=2
   calls: error_in_error_handling, sub_1555fd0
   ref: %s: %s precompiled chunk
*/
void s_s_precompiled_chunk(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155e580ULL || rel >= 0x155e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155e5c0 size=224 callers=4 calls=4
   calls: s_s_precompiled_chunk, sub_1556680, sub_1556850, sub_155dae0
   ref: truncated
*/
void truncated_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155e5c0ULL || rel >= 0x155e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155e6a0 size=512 callers=1 calls=11
   calls: gotos, s_expected, stack_overflow_4, sub_15528b0, sub_1552af0, sub_1554720, sub_15568f0, sub_155b470, sub_155b4f0, sub_155e9d0, upvalues
*/
void sub_155e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155e6a0ULL || rel >= 0x155e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155e8a0 size=304 callers=2 calls=3
   calls: main_function, sub_154e760, too_many_s_limit_is_d
   ref: upvalues
*/
void upvalues(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155e8a0ULL || rel >= 0x155e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155e9d0 size=352 callers=2 calls=3
   calls: gotos_3, sub_1552d70, sub_1562180
*/
void sub_155e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155e9d0ULL || rel >= 0x155eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155eb30 size=128 callers=5 calls=2
   calls: sub_1555fd0, sub_155b270
   ref: too many %s (limit is %d) in %s
   ref: main function
   ref: function at line %d
*/
void main_function(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155eb30ULL || rel >= 0x155ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155ebb0 size=4208 callers=10 calls=41
   calls: C_levels, control_structure_too_long_2, control_structure_too_long_3, function_or_expression_needs_too_many_registers, function_or_expression_needs_too_many_registers_2, function_or_expression_needs_too_many_registers_3, function_or_expression_needs_too_many_registers_4, function_or_expression_needs_too_many_registers_5, functions, goto_s_at_line_d_jumps_into_the_scope_of_local_s, gotos, gotos_2
   ... +29 more
   ref: '=' or 'in' expected
   ref: (for index)
   ref: (for control)
   ref: label '%s' already defined on line %d
   ref: (for limit)
   ref: C levels
   ref: %s expected (to close %s at line %d)
   ref: (for generator)
*/
void gotos(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155ebb0ULL || rel >= 0x155fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155fc20 size=432 callers=2 calls=5
   calls: s_expected, sub_15568f0, sub_155b4f0, sub_15623e0, too_many_s_limit_is_d
   ref: labels/gotos
*/
void gotos_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155fc20ULL || rel >= 0x155fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155fdd0 size=512 callers=1 calls=11
   calls: C_levels, control_structure_too_long, control_structure_too_long_2, control_structure_too_long_3, control_structure_too_long_4, gotos, gotos_2, gotos_3, s_expected, sub_155b4f0, unnamed_59
*/
void sub_155fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155fdd0ULL || rel >= 0x155ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0155ffd0 size=832 callers=11 calls=7
   calls: control_structure_too_long_2, control_structure_too_long_3, goto_s_at_line_d_jumps_into_the_scope_of_local_s, s_at_line_d_not_inside_a_loop, sub_15568f0, sub_15623e0, too_many_s_limit_is_d
   ref: labels/gotos
*/
void gotos_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155ffd0ULL || rel >= 0x1560310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01560310 size=928 callers=22 calls=12
   calls: C_levels, function_or_expression_needs_too_many_registers_8, function_or_expression_needs_too_many_registers_9, functions, main_function, s_expected_to_close_s_at_line_d, sub_155b270, sub_155b4f0, sub_1562000, sub_1562730, unexpected_symbol, unnamed_60
   ref: C levels
   ref: cannot use '...' outside a vararg function
*/
void C_levels(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1560310ULL || rel >= 0x15606b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015606b0 size=736 callers=2 calls=13
   calls: C_levels, function_or_expression_needs_too_many_registers_3, function_or_expression_needs_too_many_registers_4, s_expected, sub_15552d0, sub_1555fd0, sub_155b210, sub_155b270, sub_155b4f0, sub_155ce80, sub_15610d0, sub_1562000
   ... +1 more
   ref: %s expected (to close %s at line %d)
*/
void s_expected_to_close_s_at_line_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15606b0ULL || rel >= 0x1560990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01560990 size=1136 callers=3 calls=15
   calls: function_or_expression_needs_too_many_registers_2, function_or_expression_needs_too_many_registers_4, gotos, local_variables, s_expected, sub_154e760, sub_1552af0, sub_1555fd0, sub_155b210, sub_155b270, sub_155b3c0, sub_155b4f0
   ... +3 more
   ref: %s expected (to close %s at line %d)
   ref: functions
   ref: <name> or '...' expected
*/
void functions(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1560990ULL || rel >= 0x1560e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01560e00 size=720 callers=3 calls=16
   calls: C_levels, function_arguments_expected, function_or_expression_needs_too_many_registers_4, function_or_expression_needs_too_many_registers_6, s_expected, sub_1555fd0, sub_155b210, sub_155b270, sub_155b4f0, sub_1561370, sub_15615f0, sub_1562730
   ... +4 more
   ref: unexpected symbol
   ref: %s expected (to close %s at line %d)
*/
void unexpected_symbol(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1560e00ULL || rel >= 0x15610d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015610d0 size=320 callers=1 calls=7
   calls: C_levels, s_expected, sub_155b4f0, sub_1562000, sub_1562730, sub_1563450, sub_1563470
*/
void sub_15610d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15610d0ULL || rel >= 0x1561210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01561210 size=352 callers=13 calls=3
   calls: main_function, sub_154e760, too_many_s_limit_is_d
   ref: local variables
*/
void local_variables(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1561210ULL || rel >= 0x1561370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01561370 size=160 callers=3 calls=5
   calls: s_expected, sub_155b4f0, sub_1562730, sub_1563430, sub_1563d70
*/
void sub_1561370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1561370ULL || rel >= 0x1561410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01561410 size=480 callers=1 calls=12
   calls: C_levels, function_or_expression_needs_too_many_registers_3, function_or_expression_needs_too_many_registers_4, s_expected, s_expected_to_close_s_at_line_d, sub_1555fd0, sub_155b210, sub_155b270, sub_155b4f0, sub_1562000, sub_1562730, sub_1564aa0
   ref: function arguments expected
   ref: %s expected (to close %s at line %d)
*/
void function_arguments_expected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1561410ULL || rel >= 0x15615f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015615f0 size=352 callers=5 calls=2
   calls: sub_15615f0, upvalues
*/
void sub_15615f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15615f0ULL || rel >= 0x1561750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01561750 size=96 callers=1 calls=2
   calls: sub_1555fd0, sub_15618d0
   ref: <%s> at line %d not inside a loop
   ref: no visible label '%s' for <goto> at line %d
*/
void s_at_line_d_not_inside_a_loop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1561750ULL || rel >= 0x15617b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015617b0 size=288 callers=3 calls=3
   calls: sub_1555fd0, sub_15618d0, unnamed_57
   ref: <goto %s> at line %d jumps into the scope of local '%s'
*/
void goto_s_at_line_d_jumps_into_the_scope_of_local_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15617b0ULL || rel >= 0x15618d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015618d0 size=16 callers=3 calls=1
   calls: sub_155b270
*/
void sub_15618d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15618d0ULL || rel >= 0x15618e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015618e0 size=64 callers=25 calls=3
   calls: sub_1555fd0, sub_155b210, sub_155b270
   ref: %s expected
*/
void s_expected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15618e0ULL || rel >= 0x1561920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01561920 size=816 callers=2 calls=11
   calls: control_structure_too_long_2, control_structure_too_long_3, function_or_expression_needs_too_many_registers_2, gotos, gotos_3, s_expected, sub_155b4f0, sub_1562000, sub_1562170, sub_1564aa0, unnamed_57
*/
void sub_1561920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1561920ULL || rel >= 0x1561c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01561c50 size=224 callers=3 calls=4
   calls: function_or_expression_needs_too_many_registers_2, function_or_expression_needs_too_many_registers_3, function_or_expression_needs_too_many_registers_4, sub_1561f70
*/
void sub_1561c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1561c50ULL || rel >= 0x1561d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01561d30 size=576 callers=2 calls=13
   calls: C_levels, function_or_expression_needs_too_many_registers_2, function_or_expression_needs_too_many_registers_4, main_function, s_expected, sub_155b270, sub_155b4f0, sub_1561c50, sub_1562000, sub_1562a00, sub_15635b0, syntax_error
   ... +1 more
   ref: C levels
   ref: syntax error
*/
void syntax_error(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1561d30ULL || rel >= 0x1561f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01561f70 size=144 callers=1 calls=0
*/
void sub_1561f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1561f70ULL || rel >= 0x1562000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562000 size=16 callers=6 calls=0
*/
void sub_1562000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562000ULL || rel >= 0x1562010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562010 size=144 callers=1 calls=1
   calls: sub_155b270
   ref: control structure too long
*/
void control_structure_too_long(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562010ULL || rel >= 0x15620a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015620a0 size=208 callers=6 calls=2
   calls: opcodes, sub_155b270
   ref: control structure too long
*/
void control_structure_too_long_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15620a0ULL || rel >= 0x1562170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562170 size=16 callers=4 calls=0
*/
void sub_1562170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562170ULL || rel >= 0x1562180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562180 size=32 callers=2 calls=0
*/
void sub_1562180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562180ULL || rel >= 0x15621a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015621a0 size=16 callers=3 calls=0
*/
void sub_15621a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15621a0ULL || rel >= 0x15621b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015621b0 size=160 callers=5 calls=1
   calls: sub_155b270
   ref: control structure too long
*/
void control_structure_too_long_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15621b0ULL || rel >= 0x1562250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562250 size=400 callers=4 calls=1
   calls: sub_155b270
   ref: control structure too long
   ref: `qATPP\l<
*/
void unnamed_57(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562250ULL || rel >= 0x15623e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015623e0 size=96 callers=5 calls=0
*/
void sub_15623e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15623e0ULL || rel >= 0x1562440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562440 size=480 callers=26 calls=2
   calls: sub_155b270, too_many_s_limit_is_d
   ref: control structure too long
   ref: opcodes
   ref: `qATPP\l<
*/
void opcodes(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562440ULL || rel >= 0x1562620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562620 size=128 callers=1 calls=1
   calls: opcodes
*/
void sub_1562620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562620ULL || rel >= 0x15626a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015626a0 size=64 callers=1 calls=1
   calls: sub_155b270
   ref: function or expression needs too many registers
*/
void function_or_expression_needs_too_many_registers(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15626a0ULL || rel >= 0x15626e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015626e0 size=80 callers=6 calls=1
   calls: sub_155b270
   ref: function or expression needs too many registers
*/
void function_or_expression_needs_too_many_registers_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15626e0ULL || rel >= 0x1562730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562730 size=64 callers=7 calls=1
   calls: constants
*/
void sub_1562730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562730ULL || rel >= 0x1562770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562770 size=400 callers=4 calls=4
   calls: sub_154e760, sub_1554690, sub_1557ab0, too_many_s_limit_is_d
   ref: constants
*/
void constants(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562770ULL || rel >= 0x1562900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562900 size=64 callers=1 calls=1
   calls: constants
*/
void sub_1562900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562900ULL || rel >= 0x1562940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562940 size=192 callers=4 calls=1
   calls: sub_155b270
   ref: function or expression needs too many registers
*/
void function_or_expression_needs_too_many_registers_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562940ULL || rel >= 0x1562a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562a00 size=112 callers=1 calls=0
*/
void sub_1562a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562a00ULL || rel >= 0x1562a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562a70 size=304 callers=14 calls=1
   calls: opcodes
*/
void sub_1562a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562a70ULL || rel >= 0x1562ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562ba0 size=160 callers=16 calls=2
   calls: sub_155b270, sub_1562a70
   ref: function or expression needs too many registers
*/
void function_or_expression_needs_too_many_registers_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562ba0ULL || rel >= 0x1562c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01562c40 size=1776 callers=3 calls=3
   calls: opcodes, sub_155b270, sub_1564b60
   ref: control structure too long
   ref: `qATPP\l<
*/
void unnamed_58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1562c40ULL || rel >= 0x1563330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01563330 size=256 callers=7 calls=3
   calls: sub_155b270, sub_1562a70, unnamed_58
   ref: function or expression needs too many registers
*/
void function_or_expression_needs_too_many_registers_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1563330ULL || rel >= 0x1563430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01563430 size=32 callers=2 calls=0
*/
void sub_1563430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1563430ULL || rel >= 0x1563450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01563450 size=32 callers=2 calls=0
*/
void sub_1563450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1563450ULL || rel >= 0x1563470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01563470 size=320 callers=8 calls=3
   calls: constants, function_or_expression_needs_too_many_registers_5, sub_1562a70
*/
void sub_1563470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1563470ULL || rel >= 0x15635b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015635b0 size=288 callers=2 calls=3
   calls: function_or_expression_needs_too_many_registers_5, opcodes, sub_1563470
*/
void sub_15635b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15635b0ULL || rel >= 0x15636d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015636d0 size=272 callers=1 calls=4
   calls: function_or_expression_needs_too_many_registers_5, opcodes, sub_155b270, sub_1563470
   ref: function or expression needs too many registers
*/
void function_or_expression_needs_too_many_registers_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15636d0ULL || rel >= 0x15637e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015637e0 size=464 callers=3 calls=3
   calls: function_or_expression_needs_too_many_registers_7, sub_155b270, sub_1562a70
   ref: control structure too long
   ref: `qATPP\l<
*/
void unnamed_59(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15637e0ULL || rel >= 0x15639b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015639b0 size=592 callers=2 calls=3
   calls: opcodes, sub_155b270, sub_1564b60
   ref: control structure too long
   ref: function or expression needs too many registers
*/
void function_or_expression_needs_too_many_registers_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15639b0ULL || rel >= 0x1563c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01563c00 size=368 callers=1 calls=3
   calls: function_or_expression_needs_too_many_registers_7, sub_155b270, sub_1562a70
   ref: control structure too long
*/
void control_structure_too_long_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1563c00ULL || rel >= 0x1563d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01563d70 size=80 callers=4 calls=1
   calls: sub_1563470
*/
void sub_1563d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1563d70ULL || rel >= 0x1563dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01563dc0 size=912 callers=1 calls=6
   calls: function_or_expression_needs_too_many_registers_5, opcodes, sub_155b270, sub_1562a70, sub_1564150, sub_1564b60
   ref: function or expression needs too many registers
   ref: `qATPP\l<
*/
void unnamed_60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1563dc0ULL || rel >= 0x1564150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01564150 size=416 callers=2 calls=2
   calls: sub_15553b0, sub_1557110
*/
void sub_1564150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1564150ULL || rel >= 0x15642f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015642f0 size=304 callers=1 calls=2
   calls: sub_155b270, sub_1562a70
   ref: function or expression needs too many registers
*/
void function_or_expression_needs_too_many_registers_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15642f0ULL || rel >= 0x1564420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01564420 size=1360 callers=1 calls=7
   calls: function_or_expression_needs_too_many_registers_5, opcodes, sub_155b270, sub_1562a70, sub_1563470, sub_1564150, unnamed_58
   ref: control structure too long
   ref: function or expression needs too many registers
*/
void function_or_expression_needs_too_many_registers_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1564420ULL || rel >= 0x1564970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01564970 size=304 callers=0 calls=2
   calls: opcodes, sub_1563470
*/
void sub_1564970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1564970ULL || rel >= 0x1564aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01564aa0 size=32 callers=4 calls=0
*/
void sub_1564aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1564aa0ULL || rel >= 0x1564ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01564ac0 size=160 callers=3 calls=1
   calls: opcodes
*/
void sub_1564ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1564ac0ULL || rel >= 0x1564b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01564b60 size=464 callers=3 calls=3
   calls: constants, opcodes, sub_1562a70
*/
void sub_1564b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1564b60ULL || rel >= 0x1564d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01564d30 size=576 callers=0 calls=1
   calls: sub_1564f70
*/
void sub_1564d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1564d30ULL || rel >= 0x1564f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01564f70 size=2240 callers=2 calls=1
   calls: sub_1564f70
*/
void sub_1564f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1564f70ULL || rel >= 0x1565830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01565830 size=144 callers=0 calls=5
   calls: sub_154ae60, sub_154bfe0, sub_154c880, sub_154cfd0, too_many_upvalues
   ref: Lua 5.3
   ref: _VERSION
*/
void VERSION(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1565830ULL || rel >= 0x15658c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015658c0 size=128 callers=0 calls=5
   calls: sub_154ab20, sub_154ab80, sub_154b860, sub_154bfe0, value_expected
   ref: assertion failed!
*/
void assertion_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15658c0ULL || rel >= 0x1565940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01565940 size=224 callers=0 calls=6
   calls: invalid_option_s, number_has_no_integer_representation_2, sub_154bf20, sub_154bf40, sub_154c260, sub_154db50
   ref: collect
*/
void collect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1565940ULL || rel >= 0x1565a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01565a20 size=144 callers=0 calls=5
   calls: reopen, sub_1548fe0, sub_154ab00, sub_154ab20, sub_154d7f0
*/
void sub_1565a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1565a20ULL || rel >= 0x1565ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01565ab0 size=128 callers=0 calls=6
   calls: number_has_no_integer_representation_2, sub_154ab20, sub_154ae60, sub_154af10, sub_154de00, unnamed_55
*/
void sub_1565ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1565ab0ULL || rel >= 0x1565b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01565b30 size=112 callers=0 calls=4
   calls: sub_1549da0, sub_154bf00, sub_154cb00, value_expected
   ref: __metatable
*/
void metatable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1565b30ULL || rel >= 0x1565ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01565ba0 size=48 callers=0 calls=1
   calls: sub_1566710
   ref: __ipairs
*/
void ipairs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1565ba0ULL || rel >= 0x1565bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01565bd0 size=240 callers=0 calls=8
   calls: no_name_3, reopen, sub_1548fe0, sub_154ab20, sub_154ab80, sub_154ae60, sub_154af10, sub_154bf00
*/
void sub_1565bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1565bd0ULL || rel >= 0x1565cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01565cc0 size=352 callers=0 calls=11
   calls: no_name_3, sub_1548fe0, sub_15490e0, sub_1549d50, sub_154ab20, sub_154ab80, sub_154ae60, sub_154af10, sub_154b940, sub_154bf00, sub_154da40
   ref: =(load)
*/
void load(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1565cc0ULL || rel >= 0x1565e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01565e20 size=112 callers=0 calls=4
   calls: sub_15490e0, sub_154ab20, sub_154bf00, sub_154dd20
*/
void sub_1565e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1565e20ULL || rel >= 0x1565e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01565e90 size=48 callers=0 calls=1
   calls: sub_1566710
   ref: __pairs
*/
void pairs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1565e90ULL || rel >= 0x1565ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01565ec0 size=160 callers=0 calls=6
   calls: sub_154ab00, sub_154ab80, sub_154ae60, sub_154c260, sub_154d880, value_expected
*/
void sub_1565ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1565ec0ULL || rel >= 0x1565f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01565f60 size=320 callers=0 calls=7
   calls: sub_154ab00, sub_154ab20, sub_154ae60, sub_154b940, sub_154c2e0, sub_154d7f0, unnamed_54
   ref: 'tostring' must return a string to 'print'
   ref: tostring
*/
void tostring_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1565f60ULL || rel >= 0x15660a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015660a0 size=80 callers=0 calls=3
   calls: sub_154b320, sub_154c260, value_expected
*/
void sub_15660a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15660a0ULL || rel >= 0x15660f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015660f0 size=96 callers=0 calls=4
   calls: method, sub_154af10, sub_154bb50, sub_154bf40
   ref: table or string expected
*/
void table_or_string_expected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15660f0ULL || rel >= 0x1566150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566150 size=80 callers=0 calls=4
   calls: sub_15490e0, sub_154ab20, sub_154c7a0, value_expected
*/
void sub_1566150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566150ULL || rel >= 0x15661a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015661a0 size=96 callers=0 calls=4
   calls: sub_15490e0, sub_154ab20, sub_154d210, value_expected
*/
void sub_15661a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15661a0ULL || rel >= 0x1566200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566200 size=208 callers=0 calls=6
   calls: method, number_has_no_integer_representation, sub_154ab00, sub_154af10, sub_154b940, sub_154bf40
   ref: index out of range
*/
void index_out_of_range(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566200ULL || rel >= 0x15662d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015662d0 size=176 callers=0 calls=6
   calls: method, sub_15490e0, sub_1549da0, sub_154ab20, sub_154af10, sub_154d550
   ref: nil or table expected
   ref: __metatable
   ref: cannot change a protected metatable
*/
void nil_or_table_expected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15662d0ULL || rel >= 0x1566380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566380 size=528 callers=0 calls=10
   calls: method, number_has_no_integer_representation, sub_15490e0, sub_154ab20, sub_154af10, sub_154b600, sub_154b940, sub_154bf00, sub_154bf40, value_expected
   ref: base out of range
*/
void base_out_of_range(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566380ULL || rel >= 0x1566590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566590 size=64 callers=0 calls=2
   calls: tostring, value_expected
*/
void sub_1566590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566590ULL || rel >= 0x15665d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015665d0 size=96 callers=0 calls=4
   calls: method, sub_154af10, sub_154aff0, sub_154bfe0
   ref: value expected
*/
void value_expected_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15665d0ULL || rel >= 0x1566630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566630 size=192 callers=0 calls=6
   calls: sub_15490e0, sub_154ab00, sub_154ab80, sub_154ae60, sub_154c260, sub_154d880
*/
void sub_1566630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566630ULL || rel >= 0x15666f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015666f0 size=32 callers=0 calls=1
   calls: sub_154ab00
*/
void sub_15666f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15666f0ULL || rel >= 0x1566710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566710 size=192 callers=2 calls=4
   calls: sub_1549da0, sub_154ae60, sub_154c170, value_expected
*/
void sub_1566710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566710ULL || rel >= 0x15667d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015667d0 size=96 callers=0 calls=3
   calls: number_has_no_integer_representation, sub_154bf40, sub_154c640
*/
void sub_15667d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15667d0ULL || rel >= 0x1566830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566830 size=224 callers=0 calls=8
   calls: stack_overflow_2, sub_154ab20, sub_154acd0, sub_154ae60, sub_154af10, sub_154b270, sub_154d7f0, unnamed_54
   ref: reader function must return a string
   ref: too many nested functions
*/
void too_many_nested_functions(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566830ULL || rel >= 0x1566910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566910 size=96 callers=0 calls=3
   calls: sub_154ab00, sub_154ae60, sub_154c260
*/
void sub_1566910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566910ULL || rel >= 0x1566970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566970 size=96 callers=0 calls=3
   calls: core_and_library_have_incompatible_numeric_types, sub_154ca50, too_many_upvalues
*/
void sub_1566970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566970ULL || rel >= 0x15669d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015669d0 size=96 callers=0 calls=4
   calls: sub_15490e0, sub_154a9b0, sub_154ae60, sub_15521b0
*/
void sub_15669d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15669d0ULL || rel >= 0x1566a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566a30 size=176 callers=0 calls=6
   calls: method, sub_154ab00, sub_154ab80, sub_154bd50, sub_154c260, too_many_results_to_resume
   ref: thread expected
*/
void thread_expected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566a30ULL || rel >= 0x1566ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566ae0 size=48 callers=0 calls=2
   calls: sub_154c260, sub_154c2b0
*/
void sub_1566ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566ae0ULL || rel >= 0x1566b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566b10 size=208 callers=0 calls=6
   calls: method, sub_154ab00, sub_154bd50, sub_154bfe0, sub_154db40, sub_1552eb0
   ref: suspended
   ref: thread expected
   ref: normal
   ref: running
*/
void suspended(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566b10ULL || rel >= 0x1566be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566be0 size=112 callers=0 calls=5
   calls: sub_15490e0, sub_154a9b0, sub_154ae60, sub_154c170, sub_15521b0
*/
void sub_1566be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566be0ULL || rel >= 0x1566c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566c50 size=48 callers=0 calls=1
   calls: sub_154ab00
*/
void sub_1566c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566c50ULL || rel >= 0x1566c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566c80 size=48 callers=0 calls=2
   calls: sub_154c260, sub_1551c30
*/
void sub_1566c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566c80ULL || rel >= 0x1566cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566cb0 size=256 callers=2 calls=7
   calls: error_in_error_handling_2, sub_154a8c0, sub_154a9b0, sub_154ab00, sub_154ab20, sub_154bfe0, sub_154db40
   ref: cannot resume dead coroutine
   ref: too many results to resume
   ref: too many arguments to resume
*/
void too_many_results_to_resume(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566cb0ULL || rel >= 0x1566db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566db0 size=160 callers=0 calls=7
   calls: sub_154ab00, sub_154ab80, sub_154af10, sub_154bd50, sub_154de00, too_many_results_to_resume, unnamed_55
*/
void sub_1566db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566db0ULL || rel >= 0x1566e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566e50 size=96 callers=0 calls=3
   calls: core_and_library_have_incompatible_numeric_types, sub_154ca50, too_many_upvalues
*/
void sub_1566e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566e50ULL || rel >= 0x1566eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01566eb0 size=384 callers=0 calls=4
   calls: sub_1549d50, sub_154ab20, sub_154b940, sub_154d880
   ref: =(debug command)
   ref: lua_debug> 
*/
void lua_debug(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1566eb0ULL || rel >= 0x1567030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01567030 size=96 callers=0 calls=3
   calls: sub_154af10, sub_154bf00, sub_154cc40
*/
void sub_1567030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1567030ULL || rel >= 0x1567090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01567090 size=400 callers=0 calls=16
   calls: sub_154a8c0, sub_154a9b0, sub_154ab20, sub_154ab80, sub_154af10, sub_154bd50, sub_154bf00, sub_154bf40, sub_154bfe0, sub_154c2b0, sub_154c7a0, sub_154c960
   ... +4 more
   ref: external hook
   ref: stack overflow
*/
void stack_overflow_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1567090ULL || rel >= 0x1567220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01567220 size=1056 callers=0 calls=19
   calls: metamethod, method, number_has_no_integer_representation, sub_1548fe0, sub_154a8c0, sub_154a9b0, sub_154ab80, sub_154ae60, sub_154af10, sub_154bd50, sub_154bf00, sub_154bf40
   ... +7 more
   ref: nparams
   ref: isvararg
   ref: flnStu
   ref: source
   ref: currentline
   ref: activelines
   ref: linedefined
   ref: invalid option
*/
void lastlinedefined(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1567220ULL || rel >= 0x1567640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01567640 size=368 callers=0 calls=13
   calls: method, number_has_no_integer_representation, sub_154a8c0, sub_154a9b0, sub_154ab80, sub_154ae60, sub_154af10, sub_154bd50, sub_154bf00, sub_154bfe0, sub_1552eb0, unnamed_54
   ... +1 more
   ref: stack overflow
   ref: level out of range
*/
void stack_overflow_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1567640ULL || rel >= 0x15677b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015677b0 size=32 callers=0 calls=1
   calls: sub_154ae60
*/
void sub_15677b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15677b0ULL || rel >= 0x15677d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015677d0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154cb00, value_expected
*/
void sub_15677d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15677d0ULL || rel >= 0x1567820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01567820 size=112 callers=0 calls=5
   calls: no_name_2, number_has_no_integer_representation, sub_15490e0, sub_154ab80, sub_154bfe0
*/
void sub_1567820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1567820ULL || rel >= 0x1567890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01567890 size=304 callers=0 calls=6
   calls: method, no_name_2, number_has_no_integer_representation, sub_15490e0, sub_154b010, sub_154e590
   ref: invalid upvalue index
   ref: Lua function expected
*/
void invalid_upvalue_index(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1567890ULL || rel >= 0x15679c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015679c0 size=128 callers=0 calls=6
   calls: method, no_name_2, number_has_no_integer_representation, sub_15490e0, sub_154c290, sub_154e3d0
   ref: invalid upvalue index
*/
void invalid_upvalue_index_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15679c0ULL || rel >= 0x1567a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01567a40 size=80 callers=0 calls=4
   calls: sub_15490e0, sub_154ab20, sub_154d6e0, value_expected
*/
void sub_1567a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1567a40ULL || rel >= 0x1567a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01567a90 size=576 callers=0 calls=19
   calls: number_has_no_integer_representation_2, sub_1549080, sub_15490e0, sub_154a8c0, sub_154a9b0, sub_154ab20, sub_154ae60, sub_154af10, sub_154bd50, sub_154bfe0, sub_154c2b0, sub_154c960
   ... +7 more
   ref: __mode
   ref: stack overflow
*/
void stack_overflow_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1567a90ULL || rel >= 0x1567cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01567cd0 size=320 callers=0 calls=12
   calls: method, number_has_no_integer_representation, sub_154a8c0, sub_154a9b0, sub_154ab20, sub_154af10, sub_154bd50, sub_154bfe0, sub_1552eb0, unnamed_54, value_expected, vararg_2
   ref: stack overflow
   ref: level out of range
*/
void stack_overflow_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1567cd0ULL || rel >= 0x1567e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01567e10 size=96 callers=0 calls=4
   calls: method, sub_154ab20, sub_154af10, sub_154d550
   ref: nil or table expected
*/
void nil_or_table_expected_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1567e10ULL || rel >= 0x1567e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01567e70 size=144 callers=0 calls=6
   calls: no_name_3, number_has_no_integer_representation, sub_15490e0, sub_154ab80, sub_154bfe0, value_expected
*/
void sub_1567e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1567e70ULL || rel >= 0x1567f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01567f00 size=208 callers=0 calls=6
   calls: number_has_no_integer_representation_2, stack_overflow, sub_154ae60, sub_154af10, sub_154b940, sub_154bd50
*/
void sub_1567f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1567f00ULL || rel >= 0x1567fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01567fd0 size=176 callers=0 calls=6
   calls: sub_154bf00, sub_154bf40, sub_154bfe0, sub_154c2b0, sub_154c7a0, sub_154c960
*/
void sub_1567fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1567fd0ULL || rel >= 0x1568080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01568080 size=480 callers=0 calls=9
   calls: core_and_library_have_incompatible_numeric_types, name, sub_1548c70, sub_154ab20, sub_154ae60, sub_154ca50, sub_154cfd0, sub_154dfa0, too_many_upvalues
   ref: stdout
   ref: _IO_output
   ref: __index
   ref: _IO_input
   ref: stderr
*/
void IO_output(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1568080ULL || rel >= 0x1568260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01568260 size=160 callers=0 calls=4
   calls: sub_1548d40, sub_154af10, sub_154c4f0, unnamed_54
   ref: _IO_output
   ref: attempt to use a closed file
*/
void IO_output_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1568260ULL || rel >= 0x1568300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01568300 size=128 callers=0 calls=3
   calls: sub_154bc50, sub_154c4f0, unnamed_54
   ref: _IO_output
   ref: standard %s file is closed
*/
void IO_output_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1568300ULL || rel >= 0x1568380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01568380 size=48 callers=0 calls=1
   calls: attempt_to_use_a_closed_file
   ref: _IO_input
*/
void IO_input(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1568380ULL || rel >= 0x15683b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015683b0 size=528 callers=0 calls=16
   calls: method, sub_1548c70, sub_1548d40, sub_1549080, sub_154ab00, sub_154ab20, sub_154ab80, sub_154acd0, sub_154af10, sub_154bf00, sub_154bf40, sub_154c170
   ... +4 more
   ref: attempt to use a closed file
   ref: _IO_input
   ref: cannot open file '%s' (%s)
   ref: too many arguments
*/
void IO_input_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15683b0ULL || rel >= 0x15685c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015685c0 size=304 callers=0 calls=5
   calls: method, sub_1548c70, sub_1548fe0, sub_1549080, sub_154dfa0
   ref: invalid mode
*/
void invalid_mode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15685c0ULL || rel >= 0x15686f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015686f0 size=48 callers=0 calls=1
   calls: attempt_to_use_a_closed_file
   ref: _IO_output
*/
void IO_output_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15686f0ULL || rel >= 0x1568720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01568720 size=112 callers=0 calls=3
   calls: sub_154bc50, sub_154c4f0, unnamed_54
   ref: _IO_input
   ref: standard %s file is closed
*/
void IO_input_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1568720ULL || rel >= 0x1568790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01568790 size=128 callers=0 calls=4
   calls: sub_1548cb0, sub_154bf00, sub_154bfe0, value_expected
   ref: closed file
*/
void closed_file(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1568790ULL || rel >= 0x1568810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01568810 size=112 callers=0 calls=3
   calls: sub_154bc50, sub_154c4f0, unnamed_54
   ref: _IO_output
   ref: standard %s file is closed
*/
void IO_output_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1568810ULL || rel >= 0x1568880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01568880 size=304 callers=2 calls=8
   calls: sub_1548c70, sub_1548d40, sub_154ae60, sub_154af10, sub_154b940, sub_154cfd0, sub_154dfa0, unnamed_54
   ref: attempt to use a closed file
   ref: cannot open file '%s' (%s)
*/
void attempt_to_use_a_closed_file(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1568880ULL || rel >= 0x15689b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015689b0 size=80 callers=0 calls=1
   calls: sub_1548d40
*/
void sub_15689b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15689b0ULL || rel >= 0x1568a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01568a00 size=384 callers=0 calls=9
   calls: stack_overflow_2, sub_1548d40, sub_154ab20, sub_154ae60, sub_154b750, sub_154b860, sub_154b940, sub_154bc50, too_many_arguments_2
   ref: too many arguments
   ref: file is already closed
*/
void too_many_arguments(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1568a00ULL || rel >= 0x1568b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01568b80 size=1936 callers=1 calls=15
   calls: LUABOX, method, number_has_no_integer_representation, stack_overflow_2, sub_1549080, sub_1549630, sub_15497a0, sub_154ab00, sub_154ab20, sub_154af10, sub_154b600, sub_154bf00
   ... +3 more
   ref: invalid format
   ref: too many arguments
*/
void too_many_arguments_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1568b80ULL || rel >= 0x1569310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569310 size=336 callers=3 calls=4
   calls: LUABOX, sub_1549630, sub_15497a0, sub_154bb50
*/
void sub_1569310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569310ULL || rel >= 0x1569460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569460 size=320 callers=0 calls=7
   calls: sub_1549080, sub_154ab00, sub_154af10, sub_154b0c0, sub_154b640, sub_154b750, unnamed_56
*/
void sub_1569460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569460ULL || rel >= 0x15695a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015695a0 size=96 callers=0 calls=2
   calls: sub_1548d40, unnamed_54
   ref: attempt to use a closed file
*/
void attempt_to_use_a_closed_file_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15695a0ULL || rel >= 0x1569600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569600 size=192 callers=0 calls=8
   calls: method, sub_1548d40, sub_154ab00, sub_154ab80, sub_154bf40, sub_154c170, sub_154c260, unnamed_54
   ref: attempt to use a closed file
   ref: too many arguments
*/
void too_many_arguments_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569600ULL || rel >= 0x15696c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015696c0 size=96 callers=0 calls=2
   calls: sub_1548d40, unnamed_54
   ref: attempt to use a closed file
*/
void attempt_to_use_a_closed_file_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15696c0ULL || rel >= 0x1569720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569720 size=224 callers=0 calls=5
   calls: invalid_option_s, number_has_no_integer_representation_2, sub_1548d40, sub_154bf40, unnamed_54
   ref: attempt to use a closed file
*/
void attempt_to_use_a_closed_file_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569720ULL || rel >= 0x1569800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569800 size=176 callers=0 calls=4
   calls: invalid_option_s, number_has_no_integer_representation_2, sub_1548d40, unnamed_54
   ref: attempt to use a closed file
*/
void attempt_to_use_a_closed_file_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569800ULL || rel >= 0x15698b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015698b0 size=112 callers=0 calls=3
   calls: sub_1548d40, sub_154ae60, unnamed_54
   ref: attempt to use a closed file
*/
void attempt_to_use_a_closed_file_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15698b0ULL || rel >= 0x1569920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569920 size=112 callers=0 calls=1
   calls: sub_1548d40
*/
void sub_1569920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569920ULL || rel >= 0x1569990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569990 size=112 callers=0 calls=3
   calls: sub_1548d40, sub_154bfe0, sub_154c0c0
   ref: file (closed)
   ref: file (%p)
*/
void file_p(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569990ULL || rel >= 0x1569a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569a00 size=96 callers=0 calls=3
   calls: sub_1548d40, sub_154bf00, sub_154bfe0
   ref: cannot close standard file
*/
void cannot_close_standard_file(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569a00ULL || rel >= 0x1569a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569a60 size=224 callers=0 calls=6
   calls: core_and_library_have_incompatible_numeric_types, sub_154bf20, sub_154bf40, sub_154ca50, sub_154cfd0, too_many_upvalues
   ref: mininteger
   ref: maxinteger
*/
void mininteger(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569a60ULL || rel >= 0x1569b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569b40 size=112 callers=0 calls=5
   calls: sub_1549190, sub_154b0c0, sub_154b750, sub_154bf20, sub_154bf40
*/
void sub_1569b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569b40ULL || rel >= 0x1569bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569bb0 size=64 callers=0 calls=2
   calls: sub_1549190, sub_154bf20
*/
void sub_1569bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569bb0ULL || rel >= 0x1569bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569bf0 size=64 callers=0 calls=2
   calls: sub_1549190, sub_154bf20
*/
void sub_1569bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569bf0ULL || rel >= 0x1569c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569c30 size=96 callers=0 calls=3
   calls: sub_1549190, sub_15491f0, sub_154bf20
*/
void sub_1569c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569c30ULL || rel >= 0x1569c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569c90 size=160 callers=0 calls=5
   calls: sub_1549190, sub_154ab20, sub_154b0c0, sub_154bf20, sub_154bf40
*/
void sub_1569c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569c90ULL || rel >= 0x1569d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569d30 size=64 callers=0 calls=2
   calls: sub_1549190, sub_154bf20
*/
void sub_1569d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569d30ULL || rel >= 0x1569d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569d70 size=64 callers=0 calls=2
   calls: sub_1549190, sub_154bf20
*/
void sub_1569d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569d70ULL || rel >= 0x1569db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569db0 size=64 callers=0 calls=2
   calls: sub_1549190, sub_154bf20
*/
void sub_1569db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569db0ULL || rel >= 0x1569df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569df0 size=112 callers=0 calls=4
   calls: sub_154b750, sub_154bf00, sub_154bf40, value_expected
*/
void sub_1569df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569df0ULL || rel >= 0x1569e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569e60 size=160 callers=0 calls=5
   calls: sub_1549190, sub_154ab20, sub_154b0c0, sub_154bf20, sub_154bf40
*/
void sub_1569e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569e60ULL || rel >= 0x1569f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569f00 size=224 callers=0 calls=6
   calls: method, sub_1549190, sub_154b0c0, sub_154b750, sub_154bf20, sub_154bf40
*/
void sub_1569f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569f00ULL || rel >= 0x1569fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01569fe0 size=80 callers=0 calls=2
   calls: number_has_no_integer_representation, sub_154c260
*/
void sub_1569fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1569fe0ULL || rel >= 0x156a030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a030 size=192 callers=0 calls=3
   calls: sub_1549190, sub_154af10, sub_154bf20
*/
void sub_156a030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a030ULL || rel >= 0x156a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a0f0 size=176 callers=0 calls=4
   calls: method, sub_154ab00, sub_154ae60, sub_154b480
   ref: value expected
*/
void value_expected_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a0f0ULL || rel >= 0x156a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a1a0 size=176 callers=0 calls=4
   calls: method, sub_154ab00, sub_154ae60, sub_154b480
   ref: value expected
*/
void value_expected_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a1a0ULL || rel >= 0x156a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a250 size=192 callers=0 calls=5
   calls: sub_1549190, sub_154ab20, sub_154b0c0, sub_154bf20, sub_154bf40
*/
void sub_156a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a250ULL || rel >= 0x156a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a310 size=64 callers=0 calls=2
   calls: sub_1549190, sub_154bf20
*/
void sub_156a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a310ULL || rel >= 0x156a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a350 size=288 callers=0 calls=5
   calls: method, number_has_no_integer_representation, sub_154ab00, sub_154bf20, sub_154bf40
   ref: interval is empty
   ref: wrong number of arguments
   ref: interval too large
*/
void wrong_number_of_arguments(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a350ULL || rel >= 0x156a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a470 size=48 callers=0 calls=1
   calls: sub_1549190
*/
void sub_156a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a470ULL || rel >= 0x156a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a4a0 size=64 callers=0 calls=2
   calls: sub_1549190, sub_154bf20
*/
void sub_156a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a4a0ULL || rel >= 0x156a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a4e0 size=80 callers=0 calls=2
   calls: sub_1549190, sub_154bf20
*/
void sub_156a4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a4e0ULL || rel >= 0x156a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a530 size=64 callers=0 calls=2
   calls: sub_1549190, sub_154bf20
*/
void sub_156a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a530ULL || rel >= 0x156a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a570 size=128 callers=0 calls=5
   calls: sub_154af10, sub_154b0c0, sub_154bf00, sub_154bfe0, value_expected
   ref: integer
*/
void integer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a570ULL || rel >= 0x156a5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a5f0 size=64 callers=0 calls=2
   calls: sub_1549190, sub_154bf20
*/
void sub_156a5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a5f0ULL || rel >= 0x156a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a630 size=64 callers=0 calls=2
   calls: sub_1549190, sub_154bf20
*/
void sub_156a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a630ULL || rel >= 0x156a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a670 size=64 callers=0 calls=2
   calls: sub_1549190, sub_154bf20
*/
void sub_156a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a670ULL || rel >= 0x156a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a6b0 size=96 callers=0 calls=2
   calls: sub_1549190, sub_154bf20
*/
void sub_156a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a6b0ULL || rel >= 0x156a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a710 size=80 callers=0 calls=3
   calls: sub_1549190, sub_154bf20, sub_154bf40
*/
void sub_156a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a710ULL || rel >= 0x156a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a760 size=80 callers=0 calls=3
   calls: number_has_no_integer_representation, sub_1549190, sub_154bf20
*/
void sub_156a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a760ULL || rel >= 0x156a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a7b0 size=64 callers=0 calls=2
   calls: sub_1549190, sub_154bf20
*/
void sub_156a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a7b0ULL || rel >= 0x156a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a7f0 size=96 callers=0 calls=3
   calls: core_and_library_have_incompatible_numeric_types, sub_154ca50, too_many_upvalues
*/
void sub_156a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a7f0ULL || rel >= 0x156a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a850 size=64 callers=0 calls=1
   calls: sub_154bf20
*/
void sub_156a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a850ULL || rel >= 0x156a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156a890 size=672 callers=0 calls=14
   calls: LUA_NOENV, core_and_library_have_incompatible_numeric_types, sub_154a290, sub_154ab20, sub_154ae60, sub_154bfe0, sub_154c170, sub_154c880, sub_154ca50, sub_154cfd0, sub_154d330, sub_154d430
   ... +2 more
   ref: /usr/local/share/lua/5.3/?.lua;/usr/local/share/lua/5.3/?/init.lua;/usr/local/lib/lua/5.3/?.lua;/usr
   ref: preload
   ref: config
   ref: LUA_PATH
   ref: _PRELOAD
   ref: loaded
   ref: _LOADED
   ref: searchers
*/
void searchers(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156a890ULL || rel >= 0x156ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156ab30 size=288 callers=2 calls=8
   calls: sub_154a4a0, sub_154ab20, sub_154ab80, sub_154b860, sub_154bfe0, sub_154c0c0, sub_154c4f0, sub_154cfd0
   ref: LUA_NOENV
*/
void LUA_NOENV(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156ab30ULL || rel >= 0x156ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156ac50 size=112 callers=0 calls=4
   calls: object_length_is_not_an_integer, sub_154ab20, sub_154bc50, sub_154c880
*/
void sub_156ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156ac50ULL || rel >= 0x156acc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156acc0 size=288 callers=0 calls=9
   calls: sub_1549080, sub_154ab20, sub_154ab80, sub_154bc50, sub_154bf00, sub_154bfe0, sub_154c260, sub_154c4f0, sub_154c960
   ref: absent
   ref: dynamic libraries not enabled; check your Lua installation
*/
void absent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156acc0ULL || rel >= 0x156ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156ade0 size=176 callers=0 calls=5
   calls: sub_1548fe0, sub_1549080, sub_154ab80, sub_154bf00, sub_156ae90
*/
void sub_156ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156ade0ULL || rel >= 0x156ae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156ae90 size=400 callers=4 calls=9
   calls: sub_1549630, sub_15496e0, sub_15497a0, sub_154a4a0, sub_154ab20, sub_154ab80, sub_154b940, sub_154bf60, sub_154c0c0
*/
void sub_156ae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156ae90ULL || rel >= 0x156b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156b020 size=128 callers=0 calls=3
   calls: sub_1549080, sub_154c0c0, sub_154c4f0
   ref: _PRELOAD
*/
void PRELOAD(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156b020ULL || rel >= 0x156b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156b0a0 size=192 callers=0 calls=5
   calls: sub_1549080, sub_154b940, sub_154c4f0, sub_156ae90, unnamed_54
   ref: 'package.%s' must be a string
*/
void package_s_must_be_a_string(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156b0a0ULL || rel >= 0x156b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156b160 size=192 callers=0 calls=5
   calls: sub_1549080, sub_154b940, sub_154c4f0, sub_156ae90, unnamed_54
   ref: 'package.%s' must be a string
*/
void package_s_must_be_a_string_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156b160ULL || rel >= 0x156b220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156b220 size=240 callers=0 calls=6
   calls: sub_1549080, sub_154b940, sub_154bf60, sub_154c4f0, sub_156ae90, unnamed_54
   ref: 'package.%s' must be a string
*/
void package_s_must_be_a_string_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156b220ULL || rel >= 0x156b310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156b310 size=576 callers=0 calls=18
   calls: sub_1549080, sub_1549630, sub_15496e0, sub_15497a0, sub_154ab20, sub_154ab80, sub_154ae60, sub_154af10, sub_154b270, sub_154b860, sub_154b940, sub_154bfe0
   ... +6 more
   ref: module '%s' not found:%s
   ref: _LOADED
   ref: 'package.searchers' must be a table
   ref: searchers
*/
void searchers_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156b310ULL || rel >= 0x156b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156b550 size=208 callers=0 calls=8
   calls: core_and_library_have_incompatible_numeric_types, sub_154ab20, sub_154ae60, sub_154bfe0, sub_154ca50, sub_154cfd0, sub_154d550, too_many_upvalues
   ref: __index
*/
void index(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156b550ULL || rel >= 0x156b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156b620 size=288 callers=0 calls=5
   calls: number_has_no_integer_representation_2, stack_overflow_2, sub_1549080, sub_154bf40, unnamed_54
   ref: string slice too long
*/
void string_slice_too_long(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156b620ULL || rel >= 0x156b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156b740 size=224 callers=0 calls=5
   calls: method, number_has_no_integer_representation, sub_15496d0, sub_15497c0, sub_154ab00
   ref: value out of range
*/
void value_out_of_range(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156b740ULL || rel >= 0x156b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156b820 size=176 callers=0 calls=7
   calls: sub_15490e0, sub_1549630, sub_15497a0, sub_154ab20, sub_154b860, sub_154db10, unnamed_54
   ref: unable to dump given function
*/
void unable_to_dump_given_function(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156b820ULL || rel >= 0x156b8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156b8d0 size=16 callers=0 calls=0
*/
void sub_156b8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156b8d0ULL || rel >= 0x156b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156b8e0 size=1856 callers=0 calls=18
   calls: LUABOX, method, number_has_no_integer_representation, sub_1549080, sub_1549190, sub_15495d0, sub_1549630, sub_15496e0, sub_15497a0, sub_154ab00, sub_154ab20, sub_154af10
   ... +6 more
   ref: value has no literal form
   ref: string contains zeros
   ref: invalid format (width or precision too long)
   ref: invalid format (repeated flags)
   ref: invalid option '%%%c' to 'format'
   ref: no value
   ref: 0x%llx
*/
void value_has_no_literal_form(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156b8e0ULL || rel >= 0x156c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156c020 size=176 callers=0 calls=4
   calls: sub_1549080, sub_154ab20, sub_154c170, sub_154dfa0
*/
void sub_156c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156c020ULL || rel >= 0x156c0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156c0d0 size=1296 callers=0 calls=25
   calls: LUABOX, method, number_has_no_integer_representation_2, stack_overflow_2, sub_1549080, sub_1549580, sub_1549630, sub_15496e0, sub_15497a0, sub_154ab20, sub_154ab80, sub_154ae60
   ... +13 more
   ref: too many captures
   ref: invalid replacement value (a %s)
   ref: unfinished capture
   ref: string/function/table expected
   ref: invalid use of '%c' in replacement string
*/
void table_expected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156c0d0ULL || rel >= 0x156c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156c5e0 size=64 callers=0 calls=2
   calls: sub_1549080, sub_154bf40
*/
void sub_156c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156c5e0ULL || rel >= 0x156c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156c620 size=160 callers=0 calls=3
   calls: sub_1549080, sub_15496d0, sub_15497c0
*/
void sub_156c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156c620ULL || rel >= 0x156c6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156c6c0 size=16 callers=0 calls=0
*/
void sub_156c6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156c6c0ULL || rel >= 0x156c6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156c6d0 size=336 callers=0 calls=7
   calls: number_has_no_integer_representation, sub_1548fe0, sub_1549080, sub_15496d0, sub_15497c0, sub_154bfe0, unnamed_54
   ref: resulting string too large
*/
void resulting_string_too_large(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156c6d0ULL || rel >= 0x156c820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156c820 size=144 callers=0 calls=3
   calls: sub_1549080, sub_15496d0, sub_15497c0
*/
void sub_156c820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156c820ULL || rel >= 0x156c8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156c8b0 size=224 callers=0 calls=5
   calls: number_has_no_integer_representation, number_has_no_integer_representation_2, sub_1549080, sub_154bf60, sub_154bfe0
*/
void sub_156c8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156c8b0ULL || rel >= 0x156c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156c990 size=160 callers=0 calls=3
   calls: sub_1549080, sub_15496d0, sub_15497c0
*/
void sub_156c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156c990ULL || rel >= 0x156ca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156ca30 size=2464 callers=0 calls=10
   calls: LUABOX, format_asks_for_alignment_not_power_of_2, method, number_has_no_integer_representation, sub_1549080, sub_1549190, sub_1549580, sub_1549630, sub_15497a0, sub_154bf00
   ref: string contains zeros
   ref: integer overflow
   ref: string longer than given size
   ref: unsigned overflow
   ref: string length does not fit in given size
*/
void unsigned_overflow(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156ca30ULL || rel >= 0x156d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156d3d0 size=288 callers=0 calls=4
   calls: format_asks_for_alignment_not_power_of_2, method, sub_1549080, sub_154bf40
   ref: variable-length format
   ref: format result too large
*/
void format_result_too_large(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156d3d0ULL || rel >= 0x156d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156d4f0 size=960 callers=0 calls=9
   calls: d_byte_integer_does_not_fit_into_Lua_Integer, format_asks_for_alignment_not_power_of_2, method, number_has_no_integer_representation_2, stack_overflow_2, sub_1549080, sub_154bf20, sub_154bf40, sub_154bf60
   ref: initial position out of string
   ref: too many results
   ref: data string too short
*/
void too_many_results(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156d4f0ULL || rel >= 0x156d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156d8b0 size=32 callers=0 calls=1
   calls: sub_1549580
*/
void sub_156d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156d8b0ULL || rel >= 0x156d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156d8d0 size=816 callers=0 calls=8
   calls: number_has_no_integer_representation_2, stack_overflow_2, sub_1549080, sub_154b860, sub_154bf00, sub_154bf40, too_many_captures_2, unfinished_capture
   ref: too many captures
   ref: ^$*+?.([%-
*/
void too_many_captures(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156d8d0ULL || rel >= 0x156dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156dc00 size=2880 callers=11 calls=3
   calls: sub_156e740, too_many_captures_2, unnamed_54
   ref: malformed pattern (missing ']')
   ref: too many captures
   ref: missing '[' after '%%f' in pattern
   ref: malformed pattern (missing arguments to '%%b')
   ref: pattern too complex
   ref: invalid capture index %%%d
   ref: invalid pattern capture
   ref: malformed pattern (ends with '%%')
*/
void too_many_captures_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156dc00ULL || rel >= 0x156e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156e740 size=272 callers=8 calls=0
*/
void sub_156e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156e740ULL || rel >= 0x156e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156e850 size=224 callers=5 calls=1
   calls: unnamed_54
   ref: unfinished capture
   ref: invalid capture index %%%d
*/
void unfinished_capture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156e850ULL || rel >= 0x156e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156e930 size=240 callers=0 calls=4
   calls: stack_overflow_2, sub_154bc50, too_many_captures_2, unfinished_capture
   ref: too many captures
*/
void too_many_captures_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156e930ULL || rel >= 0x156ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156ea20 size=256 callers=3 calls=2
   calls: invalid_format_option_c, method
   ref: invalid next option for option 'X'
   ref: format asks for alignment not power of 2
*/
void format_asks_for_alignment_not_power_of_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156ea20ULL || rel >= 0x156eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156eb20 size=1088 callers=2 calls=1
   calls: unnamed_54
   ref: missing size for format option 'c'
   ref: integral size (%d) out of limits [1,%d]
   ref: invalid format option '%c'
*/
void invalid_format_option_c(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156eb20ULL || rel >= 0x156ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156ef60 size=400 callers=2 calls=1
   calls: unnamed_54
   ref: %d-byte integer does not fit into Lua Integer
*/
void d_byte_integer_does_not_fit_into_Lua_Integer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156ef60ULL || rel >= 0x156f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156f0f0 size=96 callers=0 calls=3
   calls: core_and_library_have_incompatible_numeric_types, sub_154ca50, too_many_upvalues
*/
void sub_156f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156f0f0ULL || rel >= 0x156f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156f150 size=416 callers=0 calls=13
   calls: newindex_137, number_has_no_integer_representation_2, object_length_is_not_an_integer, sub_1548fe0, sub_1549580, sub_1549630, sub_15496e0, sub_15497a0, sub_154af10, sub_154aff0, sub_154b270, sub_154c640
   ... +1 more
   ref: invalid value (%s) at index %d in table for 'concat'
*/
void invalid_value_s_at_index_d_in_table_for_concat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156f150ULL || rel >= 0x156f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156f2f0 size=256 callers=0 calls=7
   calls: method, newindex_137, number_has_no_integer_representation, object_length_is_not_an_integer, sub_154ab00, sub_154c640, sub_154d070
   ref: position out of bounds
   ref: wrong number of arguments to 'insert'
*/
void position_out_of_bounds(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156f2f0ULL || rel >= 0x156f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156f3f0 size=160 callers=0 calls=6
   calls: sub_154ab00, sub_154ab80, sub_154bf40, sub_154ca50, sub_154cfd0, sub_154d070
*/
void sub_156f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156f3f0ULL || rel >= 0x156f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156f490 size=256 callers=0 calls=6
   calls: number_has_no_integer_representation, number_has_no_integer_representation_2, object_length_is_not_an_integer, sub_154a8c0, sub_154af10, sub_154c640
   ref: too many results to unpack
*/
void too_many_results_to_unpack(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156f490ULL || rel >= 0x156f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156f590 size=240 callers=0 calls=7
   calls: method, newindex_137, number_has_no_integer_representation_2, object_length_is_not_an_integer, sub_154bf00, sub_154c640, sub_154d070
   ref: position out of bounds
*/
void position_out_of_bounds_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156f590ULL || rel >= 0x156f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156f680 size=608 callers=0 calls=12
   calls: method, number_has_no_integer_representation, sub_15490e0, sub_154ab20, sub_154ae60, sub_154af10, sub_154b480, sub_154bfe0, sub_154c640, sub_154c7a0, sub_154cb00, sub_154d070
   ref: destination wrap around
   ref: too many elements to move
   ref: __index
   ref: __newindex
*/
void too_many_elements_to_move(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156f680ULL || rel >= 0x156f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156f8e0 size=176 callers=0 calls=7
   calls: invalid_order_function_for_sorting, method, newindex_137, object_length_is_not_an_integer, sub_15490e0, sub_154ab20, sub_154af10
   ref: array too big
*/
void array_too_big(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156f8e0ULL || rel >= 0x156f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156f990 size=272 callers=4 calls=4
   calls: sub_154af10, sub_154bfe0, sub_154c7a0, sub_154cb00
   ref: __index
   ref: __newindex
*/
void newindex_137(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156f990ULL || rel >= 0x156faa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156faa0 size=1088 callers=3 calls=7
   calls: invalid_order_function_for_sorting, sub_154ab20, sub_154ae60, sub_154c640, sub_154d070, sub_156fee0, unnamed_54
   ref: invalid order function for sorting
*/
void invalid_order_function_for_sorting(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156faa0ULL || rel >= 0x156fee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156fee0 size=192 callers=7 calls=5
   calls: sub_154ab20, sub_154ae60, sub_154af10, sub_154b860, sub_154d7f0
*/
void sub_156fee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156fee0ULL || rel >= 0x156ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0156ffa0 size=128 callers=0 calls=5
   calls: core_and_library_have_incompatible_numeric_types, sub_154bf60, sub_154ca50, sub_154cfd0, too_many_upvalues
   ref: charpattern
*/
void charpattern(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156ffa0ULL || rel >= 0x1570020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570020 size=464 callers=0 calls=7
   calls: method, number_has_no_integer_representation, number_has_no_integer_representation_2, sub_1549080, sub_154bf00, sub_154bf40, unnamed_54
   ref: initial position is a continuation byte
   ref: position out of range
*/
void position_out_of_range(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570020ULL || rel >= 0x15701f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015701f0 size=528 callers=0 calls=6
   calls: method, number_has_no_integer_representation_2, stack_overflow_2, sub_1549080, sub_154bf40, unnamed_54
   ref: out of range
   ref: invalid UTF-8 code
   ref: string slice too long
*/
void string_slice_too_long_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15701f0ULL || rel >= 0x1570400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570400 size=288 callers=0 calls=7
   calls: method, number_has_no_integer_representation, sub_1549630, sub_15496e0, sub_15497a0, sub_154ab00, sub_154c0c0
   ref: value out of range
*/
void value_out_of_range_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570400ULL || rel >= 0x1570520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570520 size=496 callers=0 calls=5
   calls: method, number_has_no_integer_representation_2, sub_1549080, sub_154bf00, sub_154bf40
   ref: final position out of string
   ref: initial position out of string
*/
void initial_position_out_of_string(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570520ULL || rel >= 0x1570710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570710 size=96 callers=0 calls=4
   calls: sub_1549080, sub_154ae60, sub_154bf40, sub_154c170
*/
void sub_1570710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570710ULL || rel >= 0x1570770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570770 size=400 callers=0 calls=4
   calls: sub_1549080, sub_154b750, sub_154bf40, unnamed_54
   ref: invalid UTF-8 code
*/
void invalid_UTF_8_code(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570770ULL || rel >= 0x1570900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570900 size=16 callers=1 calls=0
*/
void sub_1570900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570900ULL || rel >= 0x1570910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570910 size=272 callers=0 calls=4
   calls: sub_15c8aa0, sub_15c8ad0, sub_162cec0, sub_1630760
*/
void sub_1570910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570910ULL || rel >= 0x1570a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570a20 size=528 callers=0 calls=2
   calls: sub_162d000, sub_16307d0
*/
void sub_1570a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570a20ULL || rel >= 0x1570c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570c30 size=208 callers=0 calls=5
   calls: sub_15b6dc0, sub_15bab00, sub_15bb6c0, sub_162fa40, sub_1630750
*/
void sub_1570c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570c30ULL || rel >= 0x1570d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570d00 size=64 callers=0 calls=0
   ref: AuthenticationInfo
*/
void AuthenticationInfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570d00ULL || rel >= 0x1570d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570d40 size=32 callers=0 calls=0
   ref: AuthenticationInfo
*/
void AuthenticationInfo_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570d40ULL || rel >= 0x1570d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570d60 size=16 callers=0 calls=0
*/
void sub_1570d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570d60ULL || rel >= 0x1570d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570d70 size=16 callers=0 calls=0
*/
void sub_1570d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570d70ULL || rel >= 0x1570d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570d80 size=80 callers=0 calls=1
   calls: sub_15bc5d0
   ref: AuthenticationInfo
*/
void AuthenticationInfo_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570d80ULL || rel >= 0x1570dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570dd0 size=112 callers=0 calls=2
   calls: sub_15ceec0, sub_162d880
*/
void sub_1570dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570dd0ULL || rel >= 0x1570e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570e40 size=16 callers=0 calls=0
*/
void sub_1570e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570e40ULL || rel >= 0x1570e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570e50 size=80 callers=0 calls=2
   calls: sub_15bc310, sub_1638210
*/
void sub_1570e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570e50ULL || rel >= 0x1570ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570ea0 size=48 callers=0 calls=1
   calls: sub_162d880
*/
void sub_1570ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570ea0ULL || rel >= 0x1570ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570ed0 size=128 callers=0 calls=3
   calls: sub_15ceec0, sub_15cefa0, sub_162d880
*/
void sub_1570ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570ed0ULL || rel >= 0x1570f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01570f50 size=272 callers=0 calls=3
   calls: sub_15b9340, sub_15bbf10, sub_162ce30
*/
void sub_1570f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1570f50ULL || rel >= 0x1571060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571060 size=144 callers=0 calls=1
   calls: sub_15b9390
*/
void sub_1571060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571060ULL || rel >= 0x15710f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015710f0 size=32 callers=0 calls=0
*/
void sub_15710f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15710f0ULL || rel >= 0x1571110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571110 size=16 callers=0 calls=0
*/
void sub_1571110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571110ULL || rel >= 0x1571120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571120 size=16 callers=0 calls=0
*/
void sub_1571120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571120ULL || rel >= 0x1571130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571130 size=144 callers=0 calls=0
*/
void sub_1571130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571130ULL || rel >= 0x15711c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015711c0 size=224 callers=0 calls=3
   calls: sub_15cee20, sub_15cef80, sub_162ce30
   ref: eyJhbGciOiJSUzI1NiIsImprdSI6Imh0dHBzOi8vZTAzYTk3ODE5Yzk3MTFlNTk1MTBkODIwYTUyZjI5OGEtc2IuYmFhcy5uaW50
*/
void eyJhbGciOiJSUzI1NiIsImprdSI6Imh0dHBzOi8vZTAzYTk3ODE5Yzk3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15711c0ULL || rel >= 0x15712a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015712a0 size=176 callers=2 calls=2
   calls: InstanceTable_134, InstanceTable_375
   ref: SDK MW+Nintendo+NEX_DS-4_6_8
*/
void SDK_MW_Nintendo_NEX_DS_4_6_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15712a0ULL || rel >= 0x1571350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571350 size=64 callers=0 calls=1
   calls: sub_1638220
*/
void sub_1571350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571350ULL || rel >= 0x1571390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571390 size=64 callers=0 calls=1
   calls: sub_1638220
*/
void sub_1571390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571390ULL || rel >= 0x15713d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 015713d0 size=64 callers=0 calls=1
   calls: sub_1638220
*/
void sub_15713d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15713d0ULL || rel >= 0x1571410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571410 size=64 callers=0 calls=1
   calls: sub_1638220
*/
void sub_1571410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571410ULL || rel >= 0x1571450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01571450 size=80 callers=0 calls=2
   calls: InstanceTable_376, sub_1638220
*/
void sub_1571450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1571450ULL || rel >= 0x15714a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

