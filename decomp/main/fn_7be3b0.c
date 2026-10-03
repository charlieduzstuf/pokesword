/* main functions 007be3b0..007db850 (54 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 007be3b0 size=96 callers=0 calls=0
*/
void sub_7be3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be3b0ULL || rel >= 0x7be410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007be410 size=272 callers=1 calls=3
   calls: sub_672c10, sub_7be520, sub_c386f0
*/
void sub_7be410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be410ULL || rel >= 0x7be520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007be520 size=288 callers=2 calls=2
   calls: sub_7be640, sub_e7b660
*/
void sub_7be520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be520ULL || rel >= 0x7be640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007be640 size=224 callers=1 calls=3
   calls: sub_7be720, sub_7c2da0, sub_e7b5e0
*/
void sub_7be640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be640ULL || rel >= 0x7be720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007be720 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_7be720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be720ULL || rel >= 0x7be810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007be810 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_7be810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be810ULL || rel >= 0x7be890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007be890 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_7be890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7be890ULL || rel >= 0x7bea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bea00 size=96 callers=0 calls=1
   calls: sub_7bec20
*/
void sub_7bea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bea00ULL || rel >= 0x7bea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bea60 size=16 callers=0 calls=0
*/
void sub_7bea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bea60ULL || rel >= 0x7bea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bea70 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_7bea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bea70ULL || rel >= 0x7beb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007beb10 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_7beb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7beb10ULL || rel >= 0x7bebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bebd0 size=16 callers=0 calls=0
*/
void sub_7bebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bebd0ULL || rel >= 0x7bebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bebe0 size=16 callers=0 calls=0
*/
void sub_7bebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bebe0ULL || rel >= 0x7bebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bebf0 size=16 callers=0 calls=0
*/
void sub_7bebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bebf0ULL || rel >= 0x7bec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bec00 size=32 callers=0 calls=0
*/
void sub_7bec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bec00ULL || rel >= 0x7bec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bec20 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_7bec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bec20ULL || rel >= 0x7bed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bed00 size=224 callers=1 calls=1
   calls: sub_d63ca0
*/
void sub_7bed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bed00ULL || rel >= 0x7bede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bede0 size=240 callers=1 calls=2
   calls: sub_7beed0, sub_e7b660
*/
void sub_7bede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bede0ULL || rel >= 0x7beed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007beed0 size=224 callers=1 calls=3
   calls: sub_7befb0, sub_7c2da0, sub_e7b5e0
*/
void sub_7beed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7beed0ULL || rel >= 0x7befb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007befb0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_7befb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7befb0ULL || rel >= 0x7bf0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf0a0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_7bf0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf0a0ULL || rel >= 0x7bf120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf120 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_7bf120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf120ULL || rel >= 0x7bf290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf290 size=96 callers=0 calls=1
   calls: sub_7bf4b0
*/
void sub_7bf290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf290ULL || rel >= 0x7bf2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf2f0 size=16 callers=0 calls=0
*/
void sub_7bf2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf2f0ULL || rel >= 0x7bf300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf300 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_7bf300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf300ULL || rel >= 0x7bf3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf3a0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_7bf3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf3a0ULL || rel >= 0x7bf460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf460 size=16 callers=0 calls=0
*/
void sub_7bf460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf460ULL || rel >= 0x7bf470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf470 size=16 callers=0 calls=0
*/
void sub_7bf470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf470ULL || rel >= 0x7bf480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf480 size=16 callers=0 calls=0
*/
void sub_7bf480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf480ULL || rel >= 0x7bf490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf490 size=32 callers=0 calls=0
*/
void sub_7bf490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf490ULL || rel >= 0x7bf4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf4b0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_7bf4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf4b0ULL || rel >= 0x7bf590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf590 size=128 callers=0 calls=0
*/
void sub_7bf590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf590ULL || rel >= 0x7bf610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf610 size=192 callers=1 calls=0
*/
void sub_7bf610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf610ULL || rel >= 0x7bf6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf6d0 size=160 callers=8 calls=0
*/
void sub_7bf6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf6d0ULL || rel >= 0x7bf770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bf770 size=1424 callers=4 calls=11
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_67b990, sub_67bdb0, sub_67bfc0, sub_67cbd0, sub_67d080, sub_7bfd00, unnamed_47
   ref: common/monsname.dat
*/
void monsname(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bf770ULL || rel >= 0x7bfd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bfd00 size=336 callers=2 calls=0
*/
void sub_7bfd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bfd00ULL || rel >= 0x7bfe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bfe50 size=48 callers=0 calls=0
*/
void sub_7bfe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bfe50ULL || rel >= 0x7bfe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bfe80 size=16 callers=1 calls=0
*/
void sub_7bfe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bfe80ULL || rel >= 0x7bfe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bfe90 size=208 callers=0 calls=0
*/
void sub_7bfe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bfe90ULL || rel >= 0x7bff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007bff60 size=496 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_65d700, sub_65f110
*/
void sub_7bff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7bff60ULL || rel >= 0x7c0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c0150 size=272 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_7c0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c0150ULL || rel >= 0x7c0260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c0260 size=640 callers=0 calls=3
   calls: sub_5cf8f0, sub_65f110, sub_76a200
*/
void sub_7c0260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c0260ULL || rel >= 0x7c04e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c04e0 size=16 callers=0 calls=0
*/
void sub_7c04e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c04e0ULL || rel >= 0x7c04f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c04f0 size=144 callers=1 calls=4
   calls: item_hash_to_index, monsname_2, sub_76a200, sub_7c1c60
*/
void sub_7c04f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c04f0ULL || rel >= 0x7c0580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c0580 size=3776 callers=1 calls=4
   calls: sub_7697c0, sub_7c2280, sub_7c2d80, unnamed_47
   ref: common/monsname.dat
   ref: bin/pml/waza_oboe
   ref: bin/pml/evolution
   ref: bin/pml/item
   ref: bin/pml/tamagowaza
   ref: bin/pml/personal
   ref: bin/pml/waza
   ref: bin/pml/grow_table
*/
void monsname_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c0580ULL || rel >= 0x7c1440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c1440 size=1184 callers=1 calls=7
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_76a5c0, sub_7c1d40, sub_9b2290
   ref: bin/pml/item/item_hash_to_index.dat
*/
void item_hash_to_index(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c1440ULL || rel >= 0x7c18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c18e0 size=192 callers=1 calls=3
   calls: sub_5cf9c0, sub_785b40, sub_7c2110
*/
void sub_7c18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c18e0ULL || rel >= 0x7c19a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c19a0 size=336 callers=6 calls=0
*/
void sub_7c19a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c19a0ULL || rel >= 0x7c1af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c1af0 size=32 callers=1 calls=1
   calls: sub_7c2280
*/
void sub_7c1af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c1af0ULL || rel >= 0x7c1b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c1b10 size=16 callers=0 calls=0
*/
void sub_7c1b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c1b10ULL || rel >= 0x7c1b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c1b20 size=112 callers=0 calls=0
*/
void sub_7c1b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c1b20ULL || rel >= 0x7c1b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c1b90 size=16 callers=0 calls=0
*/
void sub_7c1b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c1b90ULL || rel >= 0x7c1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c1ba0 size=112 callers=0 calls=0
*/
void sub_7c1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c1ba0ULL || rel >= 0x7c1c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c1c10 size=16 callers=0 calls=0
*/
void sub_7c1c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c1c10ULL || rel >= 0x7c1c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c1c20 size=16 callers=0 calls=0
*/
void sub_7c1c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c1c20ULL || rel >= 0x7c1c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c1c30 size=16 callers=0 calls=0
*/
void sub_7c1c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c1c30ULL || rel >= 0x7c1c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c1c40 size=32 callers=0 calls=0
*/
void sub_7c1c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c1c40ULL || rel >= 0x7c1c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c1c60 size=224 callers=1 calls=1
   calls: sub_7c21f0
*/
void sub_7c1c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c1c60ULL || rel >= 0x7c1d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c1d40 size=272 callers=1 calls=0
*/
void sub_7c1d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c1d40ULL || rel >= 0x7c1e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c1e50 size=704 callers=0 calls=0
*/
void sub_7c1e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c1e50ULL || rel >= 0x7c2110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2110 size=224 callers=1 calls=1
   calls: sub_7859c0
*/
void sub_7c2110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2110ULL || rel >= 0x7c21f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c21f0 size=64 callers=2 calls=1
   calls: sub_782e10
*/
void sub_7c21f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c21f0ULL || rel >= 0x7c2230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2230 size=16 callers=0 calls=0
*/
void sub_7c2230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2230ULL || rel >= 0x7c2240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2240 size=16 callers=0 calls=0
*/
void sub_7c2240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2240ULL || rel >= 0x7c2250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2250 size=16 callers=0 calls=0
*/
void sub_7c2250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2250ULL || rel >= 0x7c2260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2260 size=16 callers=0 calls=0
*/
void sub_7c2260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2260ULL || rel >= 0x7c2270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2270 size=16 callers=0 calls=0
*/
void sub_7c2270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2270ULL || rel >= 0x7c2280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2280 size=32 callers=66 calls=0
*/
void sub_7c2280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2280ULL || rel >= 0x7c22a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c22a0 size=16 callers=2 calls=0
*/
void sub_7c22a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c22a0ULL || rel >= 0x7c22b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c22b0 size=64 callers=2 calls=0
*/
void sub_7c22b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c22b0ULL || rel >= 0x7c22f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c22f0 size=144 callers=5 calls=1
   calls: sub_130b6a0
*/
void sub_7c22f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c22f0ULL || rel >= 0x7c2380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2380 size=1168 callers=0 calls=20
   calls: T_save_00, common_scr_2, poke_memory_place, sub_1306cc0, sub_1308200, sub_13184b0, sub_13e3db0, sub_13e3e40, sub_13e52f0, sub_13e5390, sub_13e5480, sub_14e09e0
   ... +8 more
*/
void sub_7c2380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2380ULL || rel >= 0x7c2810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2810 size=704 callers=2 calls=1
   calls: sub_130b6a0
*/
void sub_7c2810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2810ULL || rel >= 0x7c2ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2ad0 size=16 callers=0 calls=0
*/
void sub_7c2ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2ad0ULL || rel >= 0x7c2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2ae0 size=16 callers=0 calls=0
*/
void sub_7c2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2ae0ULL || rel >= 0x7c2af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2af0 size=112 callers=37 calls=0
*/
void sub_7c2af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2af0ULL || rel >= 0x7c2b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2b60 size=48 callers=24 calls=0
*/
void sub_7c2b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2b60ULL || rel >= 0x7c2b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2b90 size=112 callers=2 calls=0
*/
void sub_7c2b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2b90ULL || rel >= 0x7c2c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2c00 size=16 callers=0 calls=0
*/
void sub_7c2c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2c00ULL || rel >= 0x7c2c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2c10 size=112 callers=0 calls=0
*/
void sub_7c2c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2c10ULL || rel >= 0x7c2c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2c80 size=16 callers=0 calls=0
*/
void sub_7c2c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2c80ULL || rel >= 0x7c2c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2c90 size=112 callers=0 calls=0
*/
void sub_7c2c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2c90ULL || rel >= 0x7c2d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2d00 size=128 callers=0 calls=0
*/
void sub_7c2d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2d00ULL || rel >= 0x7c2d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2d80 size=16 callers=28 calls=0
*/
void sub_7c2d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2d80ULL || rel >= 0x7c2d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2d90 size=16 callers=296 calls=0
*/
void sub_7c2d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2d90ULL || rel >= 0x7c2da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2da0 size=16 callers=1091 calls=0
*/
void sub_7c2da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2da0ULL || rel >= 0x7c2db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2db0 size=224 callers=482 calls=0
*/
void sub_7c2db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2db0ULL || rel >= 0x7c2e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c2e90 size=720 callers=1 calls=4
   calls: sub_11061d0, sub_892bd0, sub_8ce720, sub_8cf500
*/
void sub_7c2e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c2e90ULL || rel >= 0x7c3160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c3160 size=2144 callers=0 calls=4
   calls: sub_5e2bc0, sub_892be0, sub_8c9ec0, sub_8ce740
*/
void sub_7c3160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c3160ULL || rel >= 0x7c39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c39c0 size=176 callers=0 calls=0
*/
void sub_7c39c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c39c0ULL || rel >= 0x7c3a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c3a70 size=16 callers=0 calls=0
*/
void sub_7c3a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c3a70ULL || rel >= 0x7c3a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c3a80 size=16 callers=0 calls=0
*/
void sub_7c3a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c3a80ULL || rel >= 0x7c3a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c3a90 size=16 callers=0 calls=0
*/
void sub_7c3a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c3a90ULL || rel >= 0x7c3aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c3aa0 size=16 callers=0 calls=0
*/
void sub_7c3aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c3aa0ULL || rel >= 0x7c3ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c3ab0 size=3424 callers=1 calls=40
   calls: sub_104bf60, sub_104dbb0, sub_1106200, sub_1106320, sub_11063e0, sub_11069b0, sub_1106f30, sub_1357400, sub_1357420, sub_1357440, sub_1378870, sub_5dd790
   ... +28 more
   ref: g_table
   ref: fileName
*/
void fileName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c3ab0ULL || rel >= 0x7c4810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c4810 size=672 callers=3 calls=20
   calls: sub_104dbb0, sub_7cd750, sub_7cd7f0, sub_7d0ac0, sub_7d0ba0, sub_7d0bd0, sub_7faf80, sub_8946f0, sub_898ab0, sub_898ac0, sub_898b40, sub_898b50
   ... +8 more
*/
void sub_7c4810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c4810ULL || rel >= 0x7c4ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c4ab0 size=448 callers=1 calls=1
   calls: sub_7fd000
*/
void sub_7c4ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c4ab0ULL || rel >= 0x7c4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c4c70 size=16 callers=7 calls=0
*/
void sub_7c4c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c4c70ULL || rel >= 0x7c4c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c4c80 size=368 callers=1 calls=2
   calls: sub_1c0, sub_7cc8f0
*/
void sub_7c4c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c4c80ULL || rel >= 0x7c4df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c4df0 size=640 callers=1 calls=1
   calls: sub_783bd0
*/
void sub_7c4df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c4df0ULL || rel >= 0x7c5070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c5070 size=16 callers=4 calls=0
*/
void sub_7c5070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5070ULL || rel >= 0x7c5080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c5080 size=416 callers=1 calls=3
   calls: sub_7c4810, sub_7c5220, sub_8ad960
*/
void sub_7c5080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5080ULL || rel >= 0x7c5220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c5220 size=768 callers=1 calls=10
   calls: sub_104dbb0, sub_7c5540, sub_7c5770, sub_7d0ad0, sub_7fe360, sub_7ff6d0, sub_844510, sub_8c90b0, sub_8c9840, sub_8c9920
*/
void sub_7c5220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5220ULL || rel >= 0x7c5520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c5520 size=32 callers=0 calls=0
*/
void sub_7c5520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5520ULL || rel >= 0x7c5540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c5540 size=416 callers=1 calls=14
   calls: sub_7ed1a0, sub_7eef50, sub_7efee0, sub_7faf80, sub_7fc2e0, sub_7fc3c0, sub_7fc430, sub_7fe1d0, sub_7fe260, sub_7fe280, sub_7fe350, sub_7ff460
   ... +2 more
*/
void sub_7c5540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5540ULL || rel >= 0x7c56e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c56e0 size=32 callers=157 calls=0
*/
void sub_7c56e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c56e0ULL || rel >= 0x7c5700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c5700 size=112 callers=3 calls=0
*/
void sub_7c5700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5700ULL || rel >= 0x7c5770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c5770 size=320 callers=1 calls=2
   calls: sub_7faf80, sub_892ef0
*/
void sub_7c5770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5770ULL || rel >= 0x7c58b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c58b0 size=16 callers=20 calls=0
*/
void sub_7c58b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c58b0ULL || rel >= 0x7c58c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c58c0 size=80 callers=4 calls=1
   calls: sub_7faf80
*/
void sub_7c58c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c58c0ULL || rel >= 0x7c5910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c5910 size=32 callers=74 calls=0
*/
void sub_7c5910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5910ULL || rel >= 0x7c5930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c5930 size=592 callers=1 calls=14
   calls: sub_5e2bc0, sub_7c4810, sub_7c5b80, sub_7c5cb0, sub_7ec0c0, sub_7f7090, sub_894510, sub_8946b0, sub_8a8250, sub_8ad680, sub_8ad690, sub_8c9ec0
   ... +2 more
*/
void sub_7c5930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5930ULL || rel >= 0x7c5b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c5b80 size=304 callers=1 calls=0
*/
void sub_7c5b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5b80ULL || rel >= 0x7c5cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c5cb0 size=640 callers=1 calls=0
*/
void sub_7c5cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5cb0ULL || rel >= 0x7c5f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c5f30 size=912 callers=0 calls=15
   calls: sub_7847d0, sub_7c6cb0, sub_7c75b0, sub_7c7690, sub_7c7a10, sub_7c7ca0, sub_7c7df0, sub_7c7ec0, sub_7c9b60, sub_7d0a80, sub_7e3ba0, sub_892bf0
   ... +3 more
*/
void sub_7c5f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5f30ULL || rel >= 0x7c62c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c62c0 size=592 callers=0 calls=13
   calls: sub_7c6cb0, sub_7c75b0, sub_7c7690, sub_7c7a10, sub_7c7ca0, sub_7c7df0, sub_7c7ec0, sub_7c9b60, sub_7d0a80, sub_7e3ba0, sub_892bf0, sub_892e60
   ... +1 more
*/
void sub_7c62c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c62c0ULL || rel >= 0x7c6510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c6510 size=160 callers=0 calls=0
*/
void sub_7c6510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c6510ULL || rel >= 0x7c65b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c65b0 size=672 callers=0 calls=15
   calls: sub_7c75b0, sub_7c7690, sub_7c7ca0, sub_7c7df0, sub_7c7ec0, sub_7c8a60, sub_7c8c80, sub_7c9b60, sub_7d0a80, sub_7e3ba0, sub_7ed6f0, sub_7f30c0
   ... +3 more
*/
void sub_7c65b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c65b0ULL || rel >= 0x7c6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c6850 size=208 callers=0 calls=1
   calls: sub_7c9b60
*/
void sub_7c6850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c6850ULL || rel >= 0x7c6920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c6920 size=224 callers=0 calls=1
   calls: sub_7c9b60
*/
void sub_7c6920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c6920ULL || rel >= 0x7c6a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c6a00 size=272 callers=0 calls=1
   calls: sub_7c9b60
*/
void sub_7c6a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c6a00ULL || rel >= 0x7c6b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c6b10 size=416 callers=0 calls=0
*/
void sub_7c6b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c6b10ULL || rel >= 0x7c6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c6cb0 size=608 callers=2 calls=6
   calls: sub_136b4f0, sub_7c6f10, sub_7c7440, sub_7cca80, sub_7cd960, sub_7faf80
*/
void sub_7c6cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c6cb0ULL || rel >= 0x7c6f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c6f10 size=1328 callers=20 calls=5
   calls: sub_1453d80, sub_67b7e0, sub_67bdb0, sub_7ce130, sub_7ce140
*/
void sub_7c6f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c6f10ULL || rel >= 0x7c7440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c7440 size=368 callers=5 calls=5
   calls: sub_136b4f0, sub_7c6f10, sub_7cca80, sub_7cd960, sub_7fa500
*/
void sub_7c7440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c7440ULL || rel >= 0x7c75b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c75b0 size=224 callers=5 calls=2
   calls: sub_7d0ae0, sub_8ca2a0
*/
void sub_7c75b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c75b0ULL || rel >= 0x7c7690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c7690 size=560 callers=5 calls=1
   calls: sub_7c78c0
*/
void sub_7c7690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c7690ULL || rel >= 0x7c78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c78c0 size=320 callers=10 calls=8
   calls: sub_762930, sub_762940, sub_762d70, sub_764b40, sub_7670a0, sub_767950, sub_804810, sub_8ac010
*/
void sub_7c78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c78c0ULL || rel >= 0x7c7a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c7a00 size=16 callers=4 calls=0
*/
void sub_7c7a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c7a00ULL || rel >= 0x7c7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c7a10 size=656 callers=4 calls=2
   calls: sub_7c9ca0, sub_7fa500
*/
void sub_7c7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c7a10ULL || rel >= 0x7c7ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c7ca0 size=336 callers=39 calls=2
   calls: sub_7ecca0, sub_7fe1d0
*/
void sub_7c7ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c7ca0ULL || rel >= 0x7c7df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c7df0 size=208 callers=5 calls=4
   calls: sub_7c9ee0, sub_7c9f80, sub_7fe320, sub_7feb70
*/
void sub_7c7df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c7df0ULL || rel >= 0x7c7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c7ec0 size=1360 callers=5 calls=7
   calls: sub_894fa0, sub_8cd3f0, sub_8ce6b0, sub_8ce6c0, sub_8ce6e0, sub_8cf540, sub_8cf580
*/
void sub_7c7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c7ec0ULL || rel >= 0x7c8410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c8410 size=144 callers=0 calls=2
   calls: sub_7d0bf0, sub_7e3f40
*/
void sub_7c8410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c8410ULL || rel >= 0x7c84a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c84a0 size=16 callers=0 calls=0
*/
void sub_7c84a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c84a0ULL || rel >= 0x7c84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c84b0 size=80 callers=0 calls=2
   calls: sub_7c7a10, sub_7c9b60
*/
void sub_7c84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c84b0ULL || rel >= 0x7c8500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c8500 size=592 callers=0 calls=6
   calls: sub_136b4f0, sub_7c6f10, sub_7c7440, sub_7cca80, sub_7cd960, sub_7faf80
*/
void sub_7c8500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c8500ULL || rel >= 0x7c8750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c8750 size=176 callers=0 calls=2
   calls: sub_7c7ca0, sub_7faf80
*/
void sub_7c8750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c8750ULL || rel >= 0x7c8800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c8800 size=64 callers=0 calls=3
   calls: sub_7c7690, sub_7c7df0, sub_7c7ec0
*/
void sub_7c8800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c8800ULL || rel >= 0x7c8840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c8840 size=352 callers=0 calls=5
   calls: sub_7c75b0, sub_7d0a80, sub_7faf80, sub_892bf0, sub_892e60
*/
void sub_7c8840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c8840ULL || rel >= 0x7c89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c89a0 size=128 callers=0 calls=1
   calls: sub_892e60
*/
void sub_7c89a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c89a0ULL || rel >= 0x7c8a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c8a20 size=64 callers=0 calls=1
   calls: sub_7e3ba0
*/
void sub_7c8a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c8a20ULL || rel >= 0x7c8a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c8a60 size=544 callers=1 calls=1
   calls: sub_7c9ca0
*/
void sub_7c8a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c8a60ULL || rel >= 0x7c8c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c8c80 size=912 callers=1 calls=4
   calls: sub_136b4f0, sub_7c6f10, sub_7cca80, sub_7cd960
*/
void sub_7c8c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c8c80ULL || rel >= 0x7c9010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c9010 size=576 callers=0 calls=12
   calls: sub_894ca0, sub_894d10, sub_894f90, sub_894fa0, sub_894fd0, sub_894ff0, sub_8954d0, sub_895540, sub_895550, sub_8ad930, sub_8ad940, sub_8ad950
*/
void sub_7c9010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c9010ULL || rel >= 0x7c9250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c9250 size=1024 callers=0 calls=3
   calls: sub_7c7ca0, sub_7c9ca0, sub_7faf80
*/
void sub_7c9250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c9250ULL || rel >= 0x7c9650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c9650 size=528 callers=0 calls=6
   calls: sub_136b4f0, sub_7c6f10, sub_7cca80, sub_7cd960, sub_7facf0, sub_7fb740
*/
void sub_7c9650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c9650ULL || rel >= 0x7c9860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c9860 size=208 callers=0 calls=6
   calls: sub_7c7690, sub_7c7df0, sub_7c7ec0, sub_7d0a80, sub_892bf0, sub_894ca0
*/
void sub_7c9860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c9860ULL || rel >= 0x7c9930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c9930 size=128 callers=0 calls=3
   calls: sub_7ed6f0, sub_7f30c0, sub_7fe1d0
*/
void sub_7c9930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c9930ULL || rel >= 0x7c99b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c99b0 size=432 callers=0 calls=7
   calls: sub_7c75b0, sub_7e3ba0, sub_892e60, sub_894c30, sub_894ca0, sub_894fa0, sub_8954c0
*/
void sub_7c99b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c99b0ULL || rel >= 0x7c9b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c9b60 size=320 callers=16 calls=1
   calls: sub_7f9ac0
*/
void sub_7c9b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c9b60ULL || rel >= 0x7c9ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c9ca0 size=576 callers=26 calls=2
   calls: sub_7847d0, sub_7cd140
*/
void sub_7c9ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c9ca0ULL || rel >= 0x7c9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c9ee0 size=160 callers=2 calls=2
   calls: sub_7fe2b0, sub_803a70
*/
void sub_7c9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c9ee0ULL || rel >= 0x7c9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007c9f80 size=240 callers=2 calls=3
   calls: sub_7faf80, sub_7fe2d0, sub_800940
*/
void sub_7c9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c9f80ULL || rel >= 0x7ca070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca070 size=16 callers=3 calls=0
*/
void sub_7ca070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca070ULL || rel >= 0x7ca080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca080 size=32 callers=1 calls=0
*/
void sub_7ca080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca080ULL || rel >= 0x7ca0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca0a0 size=112 callers=1 calls=1
   calls: sub_7fa500
*/
void sub_7ca0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca0a0ULL || rel >= 0x7ca110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca110 size=64 callers=3 calls=0
*/
void sub_7ca110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca110ULL || rel >= 0x7ca150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca150 size=32 callers=0 calls=0
*/
void sub_7ca150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca150ULL || rel >= 0x7ca170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca170 size=32 callers=10 calls=0
*/
void sub_7ca170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca170ULL || rel >= 0x7ca190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca190 size=48 callers=5 calls=0
*/
void sub_7ca190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca190ULL || rel >= 0x7ca1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca1c0 size=16 callers=60 calls=0
*/
void sub_7ca1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca1c0ULL || rel >= 0x7ca1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca1d0 size=32 callers=3 calls=0
*/
void sub_7ca1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca1d0ULL || rel >= 0x7ca1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca1f0 size=384 callers=0 calls=8
   calls: sub_7ca470, sub_7ca500, sub_7d0b90, sub_7d0bf0, sub_7e3f40, sub_894ca0, sub_8954a0, sub_8a7a10
*/
void sub_7ca1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca1f0ULL || rel >= 0x7ca370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca370 size=256 callers=0 calls=7
   calls: sub_7ca470, sub_7ca8a0, sub_7d0b90, sub_7d0bf0, sub_894ca0, sub_8954a0, sub_8a7a10
*/
void sub_7ca370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca370ULL || rel >= 0x7ca470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca470 size=144 callers=2 calls=1
   calls: sub_7d0ac0
*/
void sub_7ca470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca470ULL || rel >= 0x7ca500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca500 size=912 callers=1 calls=7
   calls: sub_7d0ac0, sub_7d0b90, sub_7e3c80, sub_7faf80, sub_7fc170, sub_8954a0, sub_8a7a10
*/
void sub_7ca500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca500ULL || rel >= 0x7ca890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca890 size=16 callers=5 calls=0
*/
void sub_7ca890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca890ULL || rel >= 0x7ca8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca8a0 size=160 callers=1 calls=2
   calls: sub_7cfdd0, sub_894fa0
*/
void sub_7ca8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca8a0ULL || rel >= 0x7ca940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca940 size=160 callers=0 calls=5
   calls: sub_7d0b60, sub_7e3c10, sub_891d80, sub_8ce6b0, sub_8ce6e0
*/
void sub_7ca940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca940ULL || rel >= 0x7ca9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca9e0 size=16 callers=11 calls=0
*/
void sub_7ca9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca9e0ULL || rel >= 0x7ca9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ca9f0 size=16 callers=1 calls=0
*/
void sub_7ca9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca9f0ULL || rel >= 0x7caa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007caa00 size=16 callers=1 calls=0
*/
void sub_7caa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caa00ULL || rel >= 0x7caa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007caa10 size=16 callers=3 calls=0
*/
void sub_7caa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caa10ULL || rel >= 0x7caa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007caa20 size=16 callers=1 calls=0
*/
void sub_7caa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caa20ULL || rel >= 0x7caa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007caa30 size=64 callers=1 calls=0
*/
void sub_7caa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caa30ULL || rel >= 0x7caa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007caa70 size=64 callers=16 calls=0
*/
void sub_7caa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caa70ULL || rel >= 0x7caab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007caab0 size=64 callers=1 calls=0
*/
void sub_7caab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caab0ULL || rel >= 0x7caaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007caaf0 size=64 callers=2 calls=0
*/
void sub_7caaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caaf0ULL || rel >= 0x7cab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cab30 size=80 callers=0 calls=0
*/
void sub_7cab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cab30ULL || rel >= 0x7cab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cab80 size=64 callers=6 calls=0
*/
void sub_7cab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cab80ULL || rel >= 0x7cabc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cabc0 size=80 callers=2 calls=0
*/
void sub_7cabc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cabc0ULL || rel >= 0x7cac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cac10 size=32 callers=1 calls=0
*/
void sub_7cac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cac10ULL || rel >= 0x7cac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cac30 size=16 callers=1 calls=0
*/
void sub_7cac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cac30ULL || rel >= 0x7cac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cac40 size=64 callers=4 calls=1
   calls: sub_7fa500
*/
void sub_7cac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cac40ULL || rel >= 0x7cac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cac80 size=16 callers=34 calls=0
*/
void sub_7cac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cac80ULL || rel >= 0x7cac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cac90 size=32 callers=1 calls=0
*/
void sub_7cac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cac90ULL || rel >= 0x7cacb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cacb0 size=96 callers=4 calls=2
   calls: sub_7fa500, sub_7fbd00
*/
void sub_7cacb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cacb0ULL || rel >= 0x7cad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cad10 size=32 callers=4 calls=0
*/
void sub_7cad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cad10ULL || rel >= 0x7cad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cad30 size=32 callers=1 calls=0
*/
void sub_7cad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cad30ULL || rel >= 0x7cad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cad50 size=224 callers=1 calls=3
   calls: sub_7f9ac0, sub_7fa500, sub_7fa580
*/
void sub_7cad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cad50ULL || rel >= 0x7cae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cae30 size=160 callers=19 calls=1
   calls: sub_7f9ac0
*/
void sub_7cae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cae30ULL || rel >= 0x7caed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007caed0 size=64 callers=2 calls=0
*/
void sub_7caed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caed0ULL || rel >= 0x7caf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007caf10 size=48 callers=0 calls=0
*/
void sub_7caf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caf10ULL || rel >= 0x7caf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007caf40 size=16 callers=1 calls=0
*/
void sub_7caf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caf40ULL || rel >= 0x7caf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007caf50 size=16 callers=3 calls=0
*/
void sub_7caf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caf50ULL || rel >= 0x7caf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007caf60 size=16 callers=3 calls=0
*/
void sub_7caf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caf60ULL || rel >= 0x7caf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007caf70 size=16 callers=0 calls=0
*/
void sub_7caf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caf70ULL || rel >= 0x7caf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007caf80 size=32 callers=1 calls=0
*/
void sub_7caf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7caf80ULL || rel >= 0x7cafa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cafa0 size=32 callers=3 calls=0
*/
void sub_7cafa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cafa0ULL || rel >= 0x7cafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cafc0 size=32 callers=1 calls=0
*/
void sub_7cafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cafc0ULL || rel >= 0x7cafe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cafe0 size=80 callers=2 calls=1
   calls: sub_7eef40
*/
void sub_7cafe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cafe0ULL || rel >= 0x7cb030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb030 size=32 callers=2 calls=0
*/
void sub_7cb030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb030ULL || rel >= 0x7cb050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb050 size=32 callers=1 calls=0
*/
void sub_7cb050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb050ULL || rel >= 0x7cb070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb070 size=16 callers=3 calls=0
*/
void sub_7cb070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb070ULL || rel >= 0x7cb080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb080 size=304 callers=2 calls=8
   calls: sub_7ee6b0, sub_7ee6c0, sub_7ee800, sub_7eef40, sub_7ef330, sub_7f3350, sub_8048c0, sub_84b8d0
*/
void sub_7cb080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb080ULL || rel >= 0x7cb1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb1b0 size=48 callers=0 calls=1
   calls: sub_8048c0
*/
void sub_7cb1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb1b0ULL || rel >= 0x7cb1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb1e0 size=64 callers=3 calls=1
   calls: sub_7eef40
*/
void sub_7cb1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb1e0ULL || rel >= 0x7cb220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb220 size=160 callers=0 calls=4
   calls: sub_7ee6b0, sub_7ee800, sub_7eef40, sub_8048c0
*/
void sub_7cb220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb220ULL || rel >= 0x7cb2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb2c0 size=32 callers=22 calls=0
*/
void sub_7cb2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb2c0ULL || rel >= 0x7cb2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb2e0 size=32 callers=2 calls=0
*/
void sub_7cb2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb2e0ULL || rel >= 0x7cb300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb300 size=16 callers=0 calls=0
*/
void sub_7cb300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb300ULL || rel >= 0x7cb310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb310 size=16 callers=1 calls=0
*/
void sub_7cb310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb310ULL || rel >= 0x7cb320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb320 size=48 callers=4 calls=1
   calls: sub_7fa500
*/
void sub_7cb320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb320ULL || rel >= 0x7cb350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb350 size=16 callers=18 calls=0
*/
void sub_7cb350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb350ULL || rel >= 0x7cb360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb360 size=32 callers=3 calls=0
*/
void sub_7cb360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb360ULL || rel >= 0x7cb380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb380 size=16 callers=1 calls=0
*/
void sub_7cb380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb380ULL || rel >= 0x7cb390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb390 size=32 callers=0 calls=0
*/
void sub_7cb390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb390ULL || rel >= 0x7cb3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb3b0 size=32 callers=12 calls=0
*/
void sub_7cb3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb3b0ULL || rel >= 0x7cb3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb3d0 size=32 callers=3 calls=0
*/
void sub_7cb3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb3d0ULL || rel >= 0x7cb3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb3f0 size=32 callers=16 calls=0
*/
void sub_7cb3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb3f0ULL || rel >= 0x7cb410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb410 size=16 callers=4 calls=0
*/
void sub_7cb410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb410ULL || rel >= 0x7cb420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb420 size=112 callers=57 calls=3
   calls: sub_7c9b60, sub_7ed4d0, sub_8048c0
*/
void sub_7cb420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb420ULL || rel >= 0x7cb490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb490 size=32 callers=101 calls=1
   calls: sub_8048c0
*/
void sub_7cb490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb490ULL || rel >= 0x7cb4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb4b0 size=144 callers=7 calls=3
   calls: sub_7c9b60, sub_7ed4d0, sub_8048c0
*/
void sub_7cb4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb4b0ULL || rel >= 0x7cb540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb540 size=288 callers=28 calls=2
   calls: sub_7fa580, sub_7faa80
*/
void sub_7cb540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb540ULL || rel >= 0x7cb660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb660 size=48 callers=21 calls=1
   calls: sub_7f9ac0
*/
void sub_7cb660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb660ULL || rel >= 0x7cb690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb690 size=144 callers=5 calls=1
   calls: sub_7f9ac0
*/
void sub_7cb690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb690ULL || rel >= 0x7cb720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb720 size=128 callers=1 calls=1
   calls: sub_7fa500
*/
void sub_7cb720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb720ULL || rel >= 0x7cb7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb7a0 size=176 callers=12 calls=1
   calls: sub_7cb540
*/
void sub_7cb7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb7a0ULL || rel >= 0x7cb850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb850 size=16 callers=55 calls=0
*/
void sub_7cb850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb850ULL || rel >= 0x7cb860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb860 size=48 callers=1 calls=1
   calls: sub_7fb890
*/
void sub_7cb860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb860ULL || rel >= 0x7cb890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb890 size=48 callers=1 calls=1
   calls: sub_7fb890
*/
void sub_7cb890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb890ULL || rel >= 0x7cb8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb8c0 size=48 callers=12 calls=1
   calls: sub_7fbd00
*/
void sub_7cb8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb8c0ULL || rel >= 0x7cb8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb8f0 size=176 callers=4 calls=2
   calls: sub_1367510, sub_7f7ae0
*/
void sub_7cb8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb8f0ULL || rel >= 0x7cb9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb9a0 size=64 callers=5 calls=0
*/
void sub_7cb9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb9a0ULL || rel >= 0x7cb9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cb9e0 size=48 callers=1 calls=0
*/
void sub_7cb9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb9e0ULL || rel >= 0x7cba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cba10 size=192 callers=2 calls=3
   calls: sub_7e89e0, sub_7e8a00, sub_7f9ac0
*/
void sub_7cba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cba10ULL || rel >= 0x7cbad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbad0 size=80 callers=1 calls=2
   calls: sub_8048c0, sub_804920
*/
void sub_7cbad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbad0ULL || rel >= 0x7cbb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbb20 size=16 callers=2 calls=0
*/
void sub_7cbb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbb20ULL || rel >= 0x7cbb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbb30 size=16 callers=1 calls=0
*/
void sub_7cbb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbb30ULL || rel >= 0x7cbb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbb40 size=48 callers=10 calls=0
*/
void sub_7cbb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbb40ULL || rel >= 0x7cbb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbb70 size=176 callers=2 calls=2
   calls: sub_7fe360, sub_7ff6d0
*/
void sub_7cbb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbb70ULL || rel >= 0x7cbc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbc20 size=16 callers=1 calls=0
*/
void sub_7cbc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbc20ULL || rel >= 0x7cbc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbc30 size=32 callers=2 calls=0
*/
void sub_7cbc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbc30ULL || rel >= 0x7cbc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbc50 size=160 callers=1 calls=0
*/
void sub_7cbc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbc50ULL || rel >= 0x7cbcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbcf0 size=48 callers=2 calls=0
*/
void sub_7cbcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbcf0ULL || rel >= 0x7cbd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbd20 size=32 callers=0 calls=0
*/
void sub_7cbd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbd20ULL || rel >= 0x7cbd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbd40 size=176 callers=2 calls=2
   calls: sub_7f8540, sub_7fe1d0
*/
void sub_7cbd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbd40ULL || rel >= 0x7cbdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbdf0 size=224 callers=0 calls=5
   calls: sub_12f6970, sub_7ed1e0, sub_7ee6b0, sub_7ef320, sub_7fe1d0
*/
void sub_7cbdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbdf0ULL || rel >= 0x7cbed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbed0 size=80 callers=1 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_7cbed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbed0ULL || rel >= 0x7cbf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbf20 size=48 callers=8 calls=1
   calls: sub_7f9a10
*/
void sub_7cbf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbf20ULL || rel >= 0x7cbf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbf50 size=48 callers=2 calls=1
   calls: sub_7f9a10
*/
void sub_7cbf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbf50ULL || rel >= 0x7cbf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cbf80 size=128 callers=27 calls=2
   calls: sub_7fa500, sub_8048c0
*/
void sub_7cbf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbf80ULL || rel >= 0x7cc000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc000 size=48 callers=11 calls=1
   calls: sub_8048c0
*/
void sub_7cc000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc000ULL || rel >= 0x7cc030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc030 size=64 callers=2 calls=2
   calls: sub_7fa500, sub_8048c0
*/
void sub_7cc030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc030ULL || rel >= 0x7cc070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc070 size=16 callers=1 calls=0
*/
void sub_7cc070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc070ULL || rel >= 0x7cc080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc080 size=224 callers=0 calls=9
   calls: sub_7ee6b0, sub_7eef50, sub_7ef340, sub_7f1cf0, sub_7f9a10, sub_7fc2e0, sub_7fc430, sub_7fc450, sub_7fc5b0
*/
void sub_7cc080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc080ULL || rel >= 0x7cc160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc160 size=16 callers=1 calls=0
*/
void sub_7cc160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc160ULL || rel >= 0x7cc170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc170 size=64 callers=0 calls=0
*/
void sub_7cc170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc170ULL || rel >= 0x7cc1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc1b0 size=176 callers=9 calls=3
   calls: sub_7ee6b0, sub_7ee6c0, sub_8048c0
*/
void sub_7cc1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc1b0ULL || rel >= 0x7cc260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc260 size=160 callers=1 calls=5
   calls: sub_12f6970, sub_7ed1e0, sub_7ee6b0, sub_7ef320, sub_7fe1d0
*/
void sub_7cc260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc260ULL || rel >= 0x7cc300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc300 size=144 callers=1 calls=5
   calls: sub_12f6c20, sub_7ed1e0, sub_7ee6b0, sub_7ef320, sub_7fe1d0
*/
void sub_7cc300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc300ULL || rel >= 0x7cc390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc390 size=16 callers=1 calls=0
*/
void sub_7cc390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc390ULL || rel >= 0x7cc3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc3a0 size=32 callers=1 calls=0
*/
void sub_7cc3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc3a0ULL || rel >= 0x7cc3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc3c0 size=16 callers=2 calls=0
*/
void sub_7cc3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc3c0ULL || rel >= 0x7cc3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc3d0 size=48 callers=12 calls=0
*/
void sub_7cc3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc3d0ULL || rel >= 0x7cc400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc400 size=16 callers=2 calls=0
*/
void sub_7cc400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc400ULL || rel >= 0x7cc410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc410 size=48 callers=3 calls=0
*/
void sub_7cc410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc410ULL || rel >= 0x7cc440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc440 size=32 callers=1 calls=0
*/
void sub_7cc440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc440ULL || rel >= 0x7cc460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc460 size=112 callers=3 calls=1
   calls: sub_7d3a50
*/
void sub_7cc460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc460ULL || rel >= 0x7cc4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc4d0 size=208 callers=2 calls=2
   calls: sub_7d0c10, sub_7faf80
*/
void sub_7cc4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc4d0ULL || rel >= 0x7cc5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc5a0 size=464 callers=1 calls=6
   calls: sub_7c7a10, sub_7c7ca0, sub_7d0c20, sub_7f7080, sub_7faf80, sub_7fdf80
*/
void sub_7cc5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc5a0ULL || rel >= 0x7cc770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc770 size=208 callers=1 calls=2
   calls: sub_7d0c90, sub_7faf80
*/
void sub_7cc770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc770ULL || rel >= 0x7cc840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc840 size=80 callers=3 calls=1
   calls: sub_7faf80
*/
void sub_7cc840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc840ULL || rel >= 0x7cc890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc890 size=96 callers=2 calls=2
   calls: sub_7faf80, sub_8048c0
*/
void sub_7cc890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc890ULL || rel >= 0x7cc8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cc8f0 size=400 callers=4 calls=0
*/
void sub_7cc8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cc8f0ULL || rel >= 0x7cca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cca80 size=544 callers=7 calls=4
   calls: sub_136b520, sub_136b580, sub_1c0, sub_67b990
*/
void sub_7cca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cca80ULL || rel >= 0x7ccca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ccca0 size=128 callers=9 calls=2
   calls: sub_67bdc0, sub_7faf80
*/
void sub_7ccca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ccca0ULL || rel >= 0x7ccd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ccd20 size=64 callers=4 calls=0
*/
void sub_7ccd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ccd20ULL || rel >= 0x7ccd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ccd60 size=288 callers=1 calls=1
   calls: sub_7fa500
*/
void sub_7ccd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ccd60ULL || rel >= 0x7cce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cce80 size=80 callers=36 calls=1
   calls: sub_7fa500
*/
void sub_7cce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cce80ULL || rel >= 0x7cced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cced0 size=48 callers=1 calls=0
*/
void sub_7cced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cced0ULL || rel >= 0x7ccf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ccf00 size=48 callers=1 calls=0
*/
void sub_7ccf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ccf00ULL || rel >= 0x7ccf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ccf30 size=48 callers=5 calls=0
*/
void sub_7ccf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ccf30ULL || rel >= 0x7ccf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ccf60 size=32 callers=3 calls=0
*/
void sub_7ccf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ccf60ULL || rel >= 0x7ccf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ccf80 size=32 callers=2 calls=0
*/
void sub_7ccf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ccf80ULL || rel >= 0x7ccfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ccfa0 size=32 callers=0 calls=0
*/
void sub_7ccfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ccfa0ULL || rel >= 0x7ccfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ccfc0 size=32 callers=0 calls=0
*/
void sub_7ccfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ccfc0ULL || rel >= 0x7ccfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ccfe0 size=64 callers=0 calls=0
*/
void sub_7ccfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ccfe0ULL || rel >= 0x7cd020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd020 size=112 callers=1 calls=0
*/
void sub_7cd020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd020ULL || rel >= 0x7cd090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd090 size=48 callers=0 calls=0
*/
void sub_7cd090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd090ULL || rel >= 0x7cd0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd0c0 size=112 callers=7 calls=1
   calls: sub_7faf80
*/
void sub_7cd0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd0c0ULL || rel >= 0x7cd130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd130 size=16 callers=1 calls=0
*/
void sub_7cd130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd130ULL || rel >= 0x7cd140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd140 size=176 callers=4 calls=3
   calls: sub_762930, sub_762940, sub_762d70
*/
void sub_7cd140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd140ULL || rel >= 0x7cd1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd1f0 size=16 callers=6 calls=0
*/
void sub_7cd1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd1f0ULL || rel >= 0x7cd200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd200 size=32 callers=0 calls=0
*/
void sub_7cd200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd200ULL || rel >= 0x7cd220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd220 size=32 callers=9 calls=0
*/
void sub_7cd220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd220ULL || rel >= 0x7cd240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd240 size=32 callers=1 calls=0
*/
void sub_7cd240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd240ULL || rel >= 0x7cd260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd260 size=80 callers=1 calls=1
   calls: sub_7eef40
*/
void sub_7cd260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd260ULL || rel >= 0x7cd2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd2b0 size=96 callers=1 calls=1
   calls: sub_7f0500
*/
void sub_7cd2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd2b0ULL || rel >= 0x7cd310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd310 size=144 callers=5 calls=3
   calls: sub_7ecc90, sub_7f0e50, sub_7fe1d0
*/
void sub_7cd310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd310ULL || rel >= 0x7cd3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd3a0 size=144 callers=5 calls=3
   calls: sub_7ecc90, sub_7f0f30, sub_7fe1d0
*/
void sub_7cd3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd3a0ULL || rel >= 0x7cd430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd430 size=16 callers=1 calls=0
*/
void sub_7cd430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd430ULL || rel >= 0x7cd440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd440 size=96 callers=4 calls=2
   calls: sub_804840, sub_8048c0
*/
void sub_7cd440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd440ULL || rel >= 0x7cd4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd4a0 size=688 callers=1 calls=2
   calls: sub_7fbd00, sub_d0c0
*/
void sub_7cd4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd4a0ULL || rel >= 0x7cd750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd750 size=160 callers=2 calls=3
   calls: sub_7d0bb0, sub_7faf80, sub_8ac500
*/
void sub_7cd750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd750ULL || rel >= 0x7cd7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd7f0 size=192 callers=2 calls=4
   calls: sub_7d0bb0, sub_7faf80, sub_8ac350, sub_8ac420
*/
void sub_7cd7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd7f0ULL || rel >= 0x7cd8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd8b0 size=128 callers=1 calls=2
   calls: sub_804840, sub_8048c0
*/
void sub_7cd8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd8b0ULL || rel >= 0x7cd930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd930 size=16 callers=1 calls=0
*/
void sub_7cd930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd930ULL || rel >= 0x7cd940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd940 size=16 callers=1 calls=0
*/
void sub_7cd940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd940ULL || rel >= 0x7cd950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd950 size=16 callers=0 calls=0
*/
void sub_7cd950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd950ULL || rel >= 0x7cd960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cd960 size=224 callers=27 calls=1
   calls: sub_136af10
*/
void sub_7cd960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cd960ULL || rel >= 0x7cda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cda40 size=128 callers=0 calls=0
*/
void sub_7cda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cda40ULL || rel >= 0x7cdac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cdac0 size=1088 callers=2 calls=2
   calls: sub_1453a90, sub_67b990
*/
void sub_7cdac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cdac0ULL || rel >= 0x7cdf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cdf00 size=320 callers=0 calls=0
*/
void sub_7cdf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cdf00ULL || rel >= 0x7ce040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ce040 size=16 callers=0 calls=0
*/
void sub_7ce040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ce040ULL || rel >= 0x7ce050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ce050 size=16 callers=0 calls=0
*/
void sub_7ce050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ce050ULL || rel >= 0x7ce060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ce060 size=16 callers=0 calls=0
*/
void sub_7ce060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ce060ULL || rel >= 0x7ce070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ce070 size=192 callers=2 calls=7
   calls: sub_1453cb0, sub_1453cc0, sub_1453cd0, sub_1453e00, sub_1453e10, sub_1453e20, trainer_type__03d_2
*/
void sub_7ce070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ce070ULL || rel >= 0x7ce130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ce130 size=16 callers=1 calls=0
*/
void sub_7ce130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ce130ULL || rel >= 0x7ce140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ce140 size=16 callers=1 calls=0
*/
void sub_7ce140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ce140ULL || rel >= 0x7ce150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ce150 size=48 callers=1 calls=0
*/
void sub_7ce150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ce150ULL || rel >= 0x7ce180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ce180 size=64 callers=1 calls=1
   calls: trname_2
*/
void sub_7ce180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ce180ULL || rel >= 0x7ce1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ce1c0 size=48 callers=1 calls=1
   calls: sub_67be10
*/
void sub_7ce1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ce1c0ULL || rel >= 0x7ce1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ce1f0 size=48 callers=1 calls=1
   calls: sub_67be10
*/
void sub_7ce1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ce1f0ULL || rel >= 0x7ce220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ce220 size=4128 callers=1 calls=29
   calls: sub_783bd0, sub_7ca070, sub_7cac80, sub_7cb320, sub_7cb9e0, sub_7cc3c0, sub_7cc400, sub_7ccd20, sub_7ccd60, sub_7cd260, sub_7cf240, sub_7cf3a0
   ... +17 more
*/
void sub_7ce220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ce220ULL || rel >= 0x7cf240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cf240 size=352 callers=1 calls=2
   calls: sub_7dfde0, sub_8a82e0
*/
void sub_7cf240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cf240ULL || rel >= 0x7cf3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cf3a0 size=272 callers=1 calls=2
   calls: sub_7dfde0, sub_7e7c20
*/
void sub_7cf3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cf3a0ULL || rel >= 0x7cf4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cf4b0 size=1200 callers=0 calls=16
   calls: sub_7cc5a0, sub_7cfde0, sub_7d00c0, sub_891e00, sub_891ee0, sub_891f80, sub_892360, sub_8923e0, sub_892430, sub_892490, sub_8924a0, sub_8924b0
   ... +4 more
*/
void sub_7cf4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cf4b0ULL || rel >= 0x7cf960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cf960 size=1088 callers=0 calls=2
   calls: sub_7dfde0, sub_892b20
*/
void sub_7cf960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cf960ULL || rel >= 0x7cfda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cfda0 size=16 callers=0 calls=0
*/
void sub_7cfda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cfda0ULL || rel >= 0x7cfdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cfdb0 size=16 callers=0 calls=0
*/
void sub_7cfdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cfdb0ULL || rel >= 0x7cfdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cfdc0 size=16 callers=0 calls=0
*/
void sub_7cfdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cfdc0ULL || rel >= 0x7cfdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cfdd0 size=16 callers=5 calls=0
*/
void sub_7cfdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cfdd0ULL || rel >= 0x7cfde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007cfde0 size=736 callers=2 calls=1
   calls: sub_7cc4d0
*/
void sub_7cfde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cfde0ULL || rel >= 0x7d00c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d00c0 size=160 callers=3 calls=6
   calls: sub_891e00, sub_891ee0, sub_892360, sub_8923e0, sub_892430, sub_8a7d60
*/
void sub_7d00c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d00c0ULL || rel >= 0x7d0160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0160 size=736 callers=0 calls=4
   calls: sub_7cc770, sub_7cfde0, sub_7d00c0, sub_8a7c10
*/
void sub_7d0160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0160ULL || rel >= 0x7d0440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0440 size=960 callers=1 calls=9
   calls: sub_7d0800, sub_7d0960, sub_7eb350, sub_7eef50, sub_7ef4c0, sub_7f7990, sub_7f7ae0, sub_7f7b00, sub_7fc2f0
*/
void sub_7d0440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0440ULL || rel >= 0x7d0800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0800 size=352 callers=4 calls=3
   calls: sub_7f0c00, sub_7f12d0, sub_7f7ae0
*/
void sub_7d0800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0800ULL || rel >= 0x7d0960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0960 size=288 callers=4 calls=2
   calls: sub_7ef4c0, sub_7f7ae0
*/
void sub_7d0960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0960ULL || rel >= 0x7d0a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0a80 size=64 callers=21 calls=1
   calls: sub_892e60
*/
void sub_7d0a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0a80ULL || rel >= 0x7d0ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0ac0 size=16 callers=14 calls=0
*/
void sub_7d0ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0ac0ULL || rel >= 0x7d0ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0ad0 size=16 callers=1 calls=0
*/
void sub_7d0ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0ad0ULL || rel >= 0x7d0ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0ae0 size=96 callers=1 calls=0
*/
void sub_7d0ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0ae0ULL || rel >= 0x7d0b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0b40 size=32 callers=0 calls=0
*/
void sub_7d0b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0b40ULL || rel >= 0x7d0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0b60 size=32 callers=1 calls=0
*/
void sub_7d0b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0b60ULL || rel >= 0x7d0b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0b80 size=16 callers=2 calls=0
*/
void sub_7d0b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0b80ULL || rel >= 0x7d0b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0b90 size=16 callers=16 calls=0
*/
void sub_7d0b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0b90ULL || rel >= 0x7d0ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0ba0 size=16 callers=2 calls=0
*/
void sub_7d0ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0ba0ULL || rel >= 0x7d0bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0bb0 size=16 callers=5 calls=0
*/
void sub_7d0bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0bb0ULL || rel >= 0x7d0bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0bc0 size=16 callers=0 calls=0
*/
void sub_7d0bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0bc0ULL || rel >= 0x7d0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0bd0 size=32 callers=1 calls=0
*/
void sub_7d0bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0bd0ULL || rel >= 0x7d0bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0bf0 size=32 callers=15 calls=0
*/
void sub_7d0bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0bf0ULL || rel >= 0x7d0c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0c10 size=16 callers=4 calls=0
*/
void sub_7d0c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0c10ULL || rel >= 0x7d0c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0c20 size=112 callers=5 calls=2
   calls: sub_892c10, sub_8a7c00
*/
void sub_7d0c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0c20ULL || rel >= 0x7d0c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0c90 size=48 callers=4 calls=0
*/
void sub_7d0c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0c90ULL || rel >= 0x7d0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0cc0 size=720 callers=1 calls=8
   calls: sub_7c58b0, sub_7cb2c0, sub_7d3a60, sub_7d3bc0, sub_7fe1d0, sub_7fe320, sub_7feb80, sub_8ac350
*/
void sub_7d0cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0cc0ULL || rel >= 0x7d0f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0f90 size=80 callers=0 calls=3
   calls: sub_7ca070, sub_7cc3c0, sub_7cc400
*/
void sub_7d0f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0f90ULL || rel >= 0x7d0fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d0fe0 size=208 callers=0 calls=3
   calls: sub_7d0cc0, sub_7f7080, sub_892c20
*/
void sub_7d0fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d0fe0ULL || rel >= 0x7d10b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d10b0 size=800 callers=0 calls=13
   calls: sub_7c4c70, sub_7c56e0, sub_7ca1c0, sub_7d3cf0, sub_7d4020, sub_803ef0, sub_8a7e40, sub_8ac420, sub_8ac590, sub_8ac940, sub_8ac9e0, sub_8aca00
   ... +1 more
*/
void sub_7d10b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d10b0ULL || rel >= 0x7d13d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d13d0 size=960 callers=0 calls=29
   calls: sub_7ca1c0, sub_7cb2c0, sub_7cd440, sub_7d0440, sub_7d44c0, sub_7d4d80, sub_7d7050, sub_7d7750, sub_7d7870, sub_7ed6f0, sub_7ee6b0, sub_7ee6c0
   ... +17 more
*/
void sub_7d13d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d13d0ULL || rel >= 0x7d1790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d1790 size=1088 callers=0 calls=5
   calls: sub_850560, sub_892c60, sub_892ef0, sub_8aabb0, sub_8ac420
*/
void sub_7d1790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d1790ULL || rel >= 0x7d1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d1bd0 size=192 callers=0 calls=0
*/
void sub_7d1bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d1bd0ULL || rel >= 0x7d1c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d1c90 size=16 callers=0 calls=0
*/
void sub_7d1c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d1c90ULL || rel >= 0x7d1ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d1ca0 size=528 callers=0 calls=10
   calls: sub_7cae30, sub_7cb660, sub_7d76a0, sub_7d7cf0, sub_7d7dd0, sub_7d8680, sub_8504d0, sub_8504f0, sub_850560, sub_8a7ce0
*/
void sub_7d1ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d1ca0ULL || rel >= 0x7d1eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d1eb0 size=16 callers=0 calls=0
*/
void sub_7d1eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d1eb0ULL || rel >= 0x7d1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d1ec0 size=16 callers=0 calls=0
*/
void sub_7d1ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d1ec0ULL || rel >= 0x7d1ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d1ed0 size=608 callers=0 calls=12
   calls: sub_7cb2c0, sub_8504d0, sub_850560, sub_8a7ce0, sub_8a7fc0, sub_8a7fe0, sub_8a8030, sub_8a8110, sub_8a8120, sub_8aabb0, sub_8aabe0, sub_8aac00
*/
void sub_7d1ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d1ed0ULL || rel >= 0x7d2130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d2130 size=704 callers=0 calls=7
   calls: sub_7cbc30, sub_7e3e40, sub_8139e0, sub_813b30, sub_813b40, sub_8a7ce0, sub_8a7ea0
*/
void sub_7d2130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d2130ULL || rel >= 0x7d23f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d23f0 size=16 callers=0 calls=0
*/
void sub_7d23f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d23f0ULL || rel >= 0x7d2400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d2400 size=32 callers=0 calls=0
*/
void sub_7d2400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d2400ULL || rel >= 0x7d2420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d2420 size=208 callers=0 calls=5
   calls: sub_7e3d00, sub_892b30, sub_892bb0, sub_8a7ce0, sub_8ad9c0
*/
void sub_7d2420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d2420ULL || rel >= 0x7d24f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d24f0 size=1152 callers=0 calls=13
   calls: sub_7c56e0, sub_7c5700, sub_7cac10, sub_7cb850, sub_7cb8c0, sub_7cbc50, sub_7cbd40, sub_7cce80, sub_7ccf30, sub_7d8c00, sub_8a7ce0, sub_8aabb0
   ... +1 more
*/
void sub_7d24f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d24f0ULL || rel >= 0x7d2970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d2970 size=32 callers=0 calls=0
*/
void sub_7d2970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d2970ULL || rel >= 0x7d2990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d2990 size=16 callers=0 calls=0
*/
void sub_7d2990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d2990ULL || rel >= 0x7d29a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d29a0 size=32 callers=0 calls=0
*/
void sub_7d29a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d29a0ULL || rel >= 0x7d29c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d29c0 size=224 callers=0 calls=4
   calls: sub_7fe1d0, sub_8a8b40, sub_8a8bb0, sub_8a8bd0
*/
void sub_7d29c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d29c0ULL || rel >= 0x7d2aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d2aa0 size=384 callers=0 calls=4
   calls: sub_7c56e0, sub_7cbd40, sub_8aabb0, sub_8aabe0
*/
void sub_7d2aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d2aa0ULL || rel >= 0x7d2c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d2c20 size=48 callers=0 calls=0
*/
void sub_7d2c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d2c20ULL || rel >= 0x7d2c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d2c50 size=224 callers=0 calls=4
   calls: sub_7fe1d0, sub_8a8940, sub_8a89b0, sub_8a89d0
*/
void sub_7d2c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d2c50ULL || rel >= 0x7d2d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d2d30 size=16 callers=0 calls=0
*/
void sub_7d2d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d2d30ULL || rel >= 0x7d2d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d2d40 size=32 callers=0 calls=0
*/
void sub_7d2d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d2d40ULL || rel >= 0x7d2d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d2d60 size=336 callers=0 calls=4
   calls: sub_7cc3d0, sub_7d9130, sub_8aabb0, sub_8ac590
*/
void sub_7d2d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d2d60ULL || rel >= 0x7d2eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d2eb0 size=144 callers=0 calls=0
*/
void sub_7d2eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d2eb0ULL || rel >= 0x7d2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d2f40 size=160 callers=0 calls=0
*/
void sub_7d2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d2f40ULL || rel >= 0x7d2fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d2fe0 size=128 callers=0 calls=6
   calls: sub_892020, sub_892490, sub_8924a0, sub_8924b0, sub_8924c0, sub_8924d0
*/
void sub_7d2fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d2fe0ULL || rel >= 0x7d3060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d3060 size=96 callers=0 calls=2
   calls: sub_7ca070, sub_8ac1f0
*/
void sub_7d3060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d3060ULL || rel >= 0x7d30c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d30c0 size=496 callers=0 calls=5
   calls: sub_7c5910, sub_7cbc30, sub_7e3dc0, sub_8a7ce0, sub_8ac1f0
*/
void sub_7d30c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d30c0ULL || rel >= 0x7d32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d32b0 size=368 callers=0 calls=7
   calls: sub_7c56e0, sub_7cb1e0, sub_7cb540, sub_7cbb20, sub_7cd1f0, sub_7ed5e0, sub_7fe1d0
*/
void sub_7d32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d32b0ULL || rel >= 0x7d3420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d3420 size=400 callers=0 calls=5
   calls: sub_1367100, sub_7c56e0, sub_7cb070, sub_7f7b00, sub_84b9b0
*/
void sub_7d3420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d3420ULL || rel >= 0x7d35b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d35b0 size=864 callers=0 calls=13
   calls: sub_7c56e0, sub_7cb1e0, sub_7cb540, sub_7cb8f0, sub_7cba10, sub_7cbb40, sub_7e89c0, sub_7e89f0, sub_7e8a10, sub_7ed5e0, sub_7f3350, sub_7fe1d0
   ... +1 more
*/
void sub_7d35b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d35b0ULL || rel >= 0x7d3910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d3910 size=256 callers=0 calls=2
   calls: sub_7c56e0, sub_7cbb40
*/
void sub_7d3910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d3910ULL || rel >= 0x7d3a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d3a10 size=64 callers=0 calls=0
*/
void sub_7d3a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d3a10ULL || rel >= 0x7d3a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d3a50 size=16 callers=1 calls=0
*/
void sub_7d3a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d3a50ULL || rel >= 0x7d3a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d3a60 size=352 callers=1 calls=7
   calls: sub_7cb4b0, sub_7cc1b0, sub_7ed1c0, sub_7ee6b0, sub_7ef2b0, sub_7ef4c0, sub_7ef5d0
*/
void sub_7d3a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d3a60ULL || rel >= 0x7d3bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d3bc0 size=112 callers=2 calls=6
   calls: sub_7c4c70, sub_7ca1c0, sub_7cad10, sub_7ed1c0, sub_7eef50, sub_7fe1d0
*/
void sub_7d3bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d3bc0ULL || rel >= 0x7d3c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d3c30 size=192 callers=1 calls=6
   calls: sub_7c4c70, sub_7ca1c0, sub_7cad10, sub_7ed1c0, sub_7eef50, sub_7fe1d0
*/
void sub_7d3c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d3c30ULL || rel >= 0x7d3cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d3cf0 size=224 callers=2 calls=4
   calls: sub_7ca1c0, sub_7fc2f0, sub_8ac350, sub_8ac420
*/
void sub_7d3cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d3cf0ULL || rel >= 0x7d3dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d3dd0 size=240 callers=1 calls=6
   calls: sub_7cc1b0, sub_7ee6b0, sub_8aabb0, sub_8aabe0, sub_8aac00, sub_8c8d10
*/
void sub_7d3dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d3dd0ULL || rel >= 0x7d3ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d3ec0 size=352 callers=0 calls=9
   calls: sub_7ed560, sub_7ee6b0, sub_7fe1d0, sub_7fe320, sub_7feb80, sub_8a7f50, sub_8acbe0, sub_8acbf0, sub_8acc30
*/
void sub_7d3ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d3ec0ULL || rel >= 0x7d4020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d4020 size=240 callers=1 calls=3
   calls: sub_7caa70, sub_7d42a0, sub_7d4410
*/
void sub_7d4020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d4020ULL || rel >= 0x7d4110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d4110 size=400 callers=0 calls=8
   calls: sub_7cb2c0, sub_7d44c0, sub_7ed6f0, sub_7fe1d0, sub_850560, sub_8a7fc0, sub_8a7fe0, sub_8a8030
*/
void sub_7d4110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d4110ULL || rel >= 0x7d42a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d42a0 size=368 callers=1 calls=6
   calls: sub_7ccca0, sub_7ed1b0, sub_7efee0, sub_7fc450, sub_7fe1d0, sub_8ac6d0
*/
void sub_7d42a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d42a0ULL || rel >= 0x7d4410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d4410 size=176 callers=4 calls=7
   calls: sub_7ccca0, sub_7ed1b0, sub_7ef2b0, sub_7f0bb0, sub_7fc2f0, sub_7fc450, sub_7fe1d0
*/
void sub_7d4410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d4410ULL || rel >= 0x7d44c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d44c0 size=384 callers=6 calls=15
   calls: sub_7c56e0, sub_7ca1c0, sub_7cb490, sub_7ee6b0, sub_7ef2b0, sub_7ef4c0, sub_7ef750, sub_7f05a0, sub_7f2520, sub_7f2550, sub_7f89e0, sub_7fc2f0
   ... +3 more
*/
void sub_7d44c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d44c0ULL || rel >= 0x7d4640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d4640 size=464 callers=0 calls=7
   calls: sub_7d3dd0, sub_7d4f10, sub_7d5000, sub_7d5150, sub_7ee6b0, sub_8aabb0, sub_8aabe0
*/
void sub_7d4640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d4640ULL || rel >= 0x7d4810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d4810 size=624 callers=0 calls=5
   calls: sub_7cb2c0, sub_7d4a80, sub_7ed6f0, sub_7fe1d0, sub_850560
*/
void sub_7d4810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d4810ULL || rel >= 0x7d4a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d4a80 size=400 callers=1 calls=11
   calls: sub_7ca1c0, sub_7d44c0, sub_7d4d80, sub_7ee6b0, sub_7ee6c0, sub_7efef0, sub_7f8320, sub_7fc2f0, sub_7fe1d0, sub_82d9a0, sub_8503a0
*/
void sub_7d4a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d4a80ULL || rel >= 0x7d4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d4c10 size=368 callers=0 calls=3
   calls: sub_7c4c70, sub_7d7170, sub_8ac500
*/
void sub_7d4c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d4c10ULL || rel >= 0x7d4d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d4d80 size=400 callers=2 calls=5
   calls: sub_7d64a0, sub_7efe00, sub_7efef0, sub_7f0130, sub_82d9a0
*/
void sub_7d4d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d4d80ULL || rel >= 0x7d4f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d4f10 size=240 callers=1 calls=4
   calls: sub_7d44c0, sub_7ed6f0, sub_7fe1d0, sub_850560
*/
void sub_7d4f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d4f10ULL || rel >= 0x7d5000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d5000 size=336 callers=1 calls=8
   calls: sub_7c56e0, sub_7c58b0, sub_7ca1c0, sub_7cb070, sub_7f31a0, sub_7fc2f0, sub_803ef0, sub_84b9b0
*/
void sub_7d5000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d5000ULL || rel >= 0x7d5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d5150 size=720 callers=1 calls=12
   calls: sub_7cab80, sub_7cb850, sub_7cb9a0, sub_7d44c0, sub_7ed6f0, sub_7ef4c0, sub_7fe1d0, sub_850400, sub_850540, sub_850590, sub_8a80e0, sub_8ac590
*/
void sub_7d5150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d5150ULL || rel >= 0x7d5420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d5420 size=512 callers=0 calls=6
   calls: sub_7cb2c0, sub_7d44c0, sub_7d7050, sub_7ed6f0, sub_7fe1d0, sub_850560
*/
void sub_7d5420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d5420ULL || rel >= 0x7d5620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d5620 size=720 callers=0 calls=17
   calls: sub_7ca1c0, sub_7cb850, sub_7cb8f0, sub_7d72c0, sub_7ed1b0, sub_7ee6b0, sub_7f09e0, sub_7fc2f0, sub_7fc450, sub_7fe1d0, sub_8504a0, sub_8504d0
   ... +5 more
*/
void sub_7d5620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d5620ULL || rel >= 0x7d58f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d58f0 size=976 callers=0 calls=18
   calls: sub_7ca1c0, sub_7cb3b0, sub_7cb420, sub_7d6270, sub_7d63b0, sub_7d64a0, sub_7d6960, sub_7ee6b0, sub_7ee6c0, sub_7f8330, sub_7fe1d0, sub_82d9a0
   ... +6 more
*/
void sub_7d58f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d58f0ULL || rel >= 0x7d5cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d5cc0 size=880 callers=0 calls=16
   calls: sub_7c56e0, sub_7ca1c0, sub_7cb850, sub_7cb8f0, sub_7d6ac0, sub_7d6b90, sub_7ed1b0, sub_7ee6b0, sub_7f7ae0, sub_7f7b00, sub_7fc2f0, sub_7fc450
   ... +4 more
*/
void sub_7d5cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d5cc0ULL || rel >= 0x7d6030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d6030 size=576 callers=0 calls=7
   calls: sub_7cab80, sub_7d6db0, sub_7ee6b0, sub_850520, sub_8aabb0, sub_8aac00, sub_8ac590
*/
void sub_7d6030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d6030ULL || rel >= 0x7d6270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d6270 size=320 callers=1 calls=10
   calls: sub_786d90, sub_7d64a0, sub_7ee6b0, sub_7efe00, sub_7efef0, sub_7f0130, sub_7f09c0, sub_7f8320, sub_7fe1d0, sub_8503a0
*/
void sub_7d6270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d6270ULL || rel >= 0x7d63b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d63b0 size=240 callers=1 calls=8
   calls: sub_7cac80, sub_7f31a0, sub_7fe2d0, sub_800990, sub_800ba0, sub_800bf0, sub_800c00, sub_804060
*/
void sub_7d63b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d63b0ULL || rel >= 0x7d64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d64a0 size=1216 callers=4 calls=23
   calls: sub_780c30, sub_780c60, sub_780ec0, sub_786d90, sub_7eb3a0, sub_7ee6b0, sub_7ee6c0, sub_7eef50, sub_7ef4c0, sub_7ef710, sub_7ef750, sub_7f0500
   ... +11 more
*/
void sub_7d64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d64a0ULL || rel >= 0x7d6960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d6960 size=208 callers=1 calls=7
   calls: sub_7cb3f0, sub_7cb420, sub_7ee6b0, sub_7ef4c0, sub_7fe1d0, sub_8aabb0, sub_8aabe0
*/
void sub_7d6960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d6960ULL || rel >= 0x7d6a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d6a30 size=144 callers=1 calls=2
   calls: sub_7d72c0, sub_7f09e0
*/
void sub_7d6a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d6a30ULL || rel >= 0x7d6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d6ac0 size=208 callers=2 calls=8
   calls: sub_7c58b0, sub_7cac40, sub_7ed1b0, sub_7ef2b0, sub_7f0b70, sub_7fc2e0, sub_7fc450, sub_7fe1d0
*/
void sub_7d6ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d6ac0ULL || rel >= 0x7d6b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d6b90 size=432 callers=1 calls=11
   calls: sub_7c56e0, sub_7c58b0, sub_7ca1c0, sub_7caa10, sub_7d6ac0, sub_7d6d40, sub_7ed1b0, sub_7eef50, sub_7fc2f0, sub_7fe1d0, sub_8aabb0
*/
void sub_7d6b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d6b90ULL || rel >= 0x7d6d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d6d40 size=112 callers=1 calls=5
   calls: sub_7cb490, sub_7ee6b0, sub_7ef580, sub_804200, sub_804480
*/
void sub_7d6d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d6d40ULL || rel >= 0x7d6db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d6db0 size=416 callers=1 calls=9
   calls: sub_7c56e0, sub_7ca1c0, sub_7cab80, sub_7d6f50, sub_7ed5e0, sub_7eef40, sub_7fe1d0, sub_8aabb0, sub_8aabe0
*/
void sub_7d6db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d6db0ULL || rel >= 0x7d6f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d6f50 size=256 callers=1 calls=6
   calls: sub_7cb2c0, sub_7d72c0, sub_7eef50, sub_7ef2b0, sub_7f09e0, sub_7fc450
*/
void sub_7d6f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d6f50ULL || rel >= 0x7d7050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d7050 size=288 callers=2 calls=9
   calls: sub_780d70, sub_7ca170, sub_7ca1c0, sub_7fc2f0, sub_8503e0, sub_850400, sub_850420, sub_850440, sub_850460
*/
void sub_7d7050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d7050ULL || rel >= 0x7d7170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d7170 size=320 callers=1 calls=2
   calls: sub_7cb850, sub_7cb9a0
*/
void sub_7d7170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d7170ULL || rel >= 0x7d72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d72b0 size=16 callers=3 calls=0
*/
void sub_7d72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d72b0ULL || rel >= 0x7d72c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d72c0 size=512 callers=3 calls=13
   calls: sub_7ca1c0, sub_7ca890, sub_7cb420, sub_7d74c0, sub_7ed1e0, sub_7ee6b0, sub_7eef50, sub_7ef4c0, sub_7f0670, sub_7f8cf0, sub_7f98e0, sub_7fe1d0
   ... +1 more
*/
void sub_7d72c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d72c0ULL || rel >= 0x7d74c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d74c0 size=320 callers=1 calls=5
   calls: sub_7eef50, sub_7ef4c0, sub_7f0670, sub_7f09e0, sub_7ffe20
*/
void sub_7d74c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d74c0ULL || rel >= 0x7d7600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d7600 size=96 callers=1 calls=0
*/
void sub_7d7600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d7600ULL || rel >= 0x7d7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d7660 size=64 callers=1 calls=2
   calls: sub_7cb2c0, sub_7fc2f0
*/
void sub_7d7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d7660ULL || rel >= 0x7d76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d76a0 size=176 callers=1 calls=7
   calls: sub_7ca1c0, sub_7ca890, sub_7ecc90, sub_7f8c20, sub_7f8cf0, sub_7f98e0, sub_7fe1d0
*/
void sub_7d76a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d76a0ULL || rel >= 0x7d7750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d7750 size=288 callers=1 calls=11
   calls: sub_780ec0, sub_7c56e0, sub_7d7a80, sub_7d7be0, sub_7ed5e0, sub_7ed6f0, sub_7ee6b0, sub_7eef40, sub_7fc940, sub_7fe1d0, sub_8503a0
*/
void sub_7d7750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d7750ULL || rel >= 0x7d7870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d7870 size=320 callers=1 calls=10
   calls: sub_7d79b0, sub_7ee6b0, sub_7f8320, sub_7fc450, sub_7fe1d0, sub_8503a0, sub_8504a0, sub_8504d0, sub_850520, sub_850570
*/
void sub_7d7870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d7870ULL || rel >= 0x7d79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d79b0 size=208 callers=1 calls=7
   calls: sub_7cd440, sub_7ee6b0, sub_7ee800, sub_7efef0, sub_7f31a0, sub_803ef0, sub_8503a0
*/
void sub_7d79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d79b0ULL || rel >= 0x7d7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d7a80 size=352 callers=1 calls=4
   calls: sub_7ee6b0, sub_7efe00, sub_7efef0, sub_8a86e0
*/
void sub_7d7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d7a80ULL || rel >= 0x7d7be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d7be0 size=240 callers=1 calls=3
   calls: sub_7f8c20, sub_7fe350, sub_7ff460
*/
void sub_7d7be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d7be0ULL || rel >= 0x7d7cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d7cd0 size=32 callers=0 calls=2
   calls: sub_7fe350, sub_7ff460
*/
void sub_7d7cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d7cd0ULL || rel >= 0x7d7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d7cf0 size=224 callers=3 calls=6
   calls: sub_7ca1c0, sub_7cb2c0, sub_7ef580, sub_7f8340, sub_7fc2e0, sub_7fc450
*/
void sub_7d7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d7cf0ULL || rel >= 0x7d7dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d7dd0 size=896 callers=1 calls=19
   calls: sub_780d10, sub_780d40, sub_780ec0, sub_7c56e0, sub_7caa70, sub_7cd440, sub_7ee6b0, sub_7eef40, sub_7ef2b0, sub_7efe00, sub_7efef0, sub_7f0130
   ... +7 more
*/
void sub_7d7dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d7dd0ULL || rel >= 0x7d8150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d8150 size=368 callers=1 calls=6
   calls: sub_7cae30, sub_7cbf50, sub_7ef2b0, sub_7fc2e0, sub_7fc450, sub_8504d0
*/
void sub_7d8150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d8150ULL || rel >= 0x7d82c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d82c0 size=960 callers=0 calls=18
   calls: sub_7c4c70, sub_7cae30, sub_7cb2c0, sub_7cb660, sub_7d3cf0, sub_7d7cf0, sub_7d8150, sub_8504d0, sub_8504f0, sub_850560, sub_8a7ce0, sub_8a7fc0
   ... +6 more
*/
void sub_7d82c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d82c0ULL || rel >= 0x7d8680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d8680 size=736 callers=1 calls=2
   calls: sub_7fe230, sub_8017b0
*/
void sub_7d8680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d8680ULL || rel >= 0x7d8960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d8960 size=672 callers=0 calls=7
   calls: sub_7cb2e0, sub_7cb8c0, sub_7cbb40, sub_7cce80, sub_8a7ce0, sub_8aabb0, sub_8aabe0
*/
void sub_7d8960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d8960ULL || rel >= 0x7d8c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d8c00 size=256 callers=1 calls=5
   calls: sub_1453970, sub_7cb8c0, sub_7ccf60, sub_8aabb0, sub_8aabe0
*/
void sub_7d8c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d8c00ULL || rel >= 0x7d8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d8d00 size=784 callers=0 calls=5
   calls: sub_7cb8c0, sub_7cbb40, sub_7cce80, sub_7d9010, sub_8a7ce0
*/
void sub_7d8d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d8d00ULL || rel >= 0x7d9010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d9010 size=192 callers=2 calls=4
   calls: sub_67bdb0, sub_67c960, sub_7cb8c0, sub_7cd020
*/
void sub_7d9010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d9010ULL || rel >= 0x7d90d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d90d0 size=96 callers=1 calls=3
   calls: sub_7cb850, sub_8aabb0, sub_8aabe0
*/
void sub_7d90d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d90d0ULL || rel >= 0x7d9130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d9130 size=448 callers=1 calls=2
   calls: sub_7c5910, sub_7cce80
*/
void sub_7d9130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d9130ULL || rel >= 0x7d92f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d92f0 size=192 callers=0 calls=0
*/
void sub_7d92f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d92f0ULL || rel >= 0x7d93b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d93b0 size=384 callers=0 calls=0
*/
void sub_7d93b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d93b0ULL || rel >= 0x7d9530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d9530 size=192 callers=0 calls=0
*/
void sub_7d9530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d9530ULL || rel >= 0x7d95f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d95f0 size=384 callers=0 calls=0
*/
void sub_7d95f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d95f0ULL || rel >= 0x7d9770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d9770 size=384 callers=0 calls=7
   calls: sub_780c60, sub_7ca9e0, sub_7cb3f0, sub_7cb420, sub_7ed5e0, sub_7f8070, sub_7fe1d0
*/
void sub_7d9770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d9770ULL || rel >= 0x7d98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d98f0 size=608 callers=0 calls=2
   calls: sub_7df390, sub_7df960
*/
void sub_7d98f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d98f0ULL || rel >= 0x7d9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d9b50 size=160 callers=0 calls=2
   calls: sub_7cb4b0, sub_7fe1d0
*/
void sub_7d9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d9b50ULL || rel >= 0x7d9bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d9bf0 size=176 callers=0 calls=2
   calls: sub_7cb420, sub_7fe1d0
*/
void sub_7d9bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d9bf0ULL || rel >= 0x7d9ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d9ca0 size=368 callers=0 calls=0
*/
void sub_7d9ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d9ca0ULL || rel >= 0x7d9e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d9e10 size=128 callers=0 calls=0
*/
void sub_7d9e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d9e10ULL || rel >= 0x7d9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d9e90 size=160 callers=0 calls=3
   calls: sub_7cb420, sub_7cb540, sub_7fe1d0
*/
void sub_7d9e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d9e90ULL || rel >= 0x7d9f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007d9f30 size=240 callers=0 calls=3
   calls: sub_7cb420, sub_7cb540, sub_7fe1d0
*/
void sub_7d9f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d9f30ULL || rel >= 0x7da020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007da020 size=176 callers=0 calls=2
   calls: sub_7cb420, sub_7fe1d0
*/
void sub_7da020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7da020ULL || rel >= 0x7da0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007da0d0 size=176 callers=0 calls=2
   calls: sub_7cb420, sub_7fe1d0
*/
void sub_7da0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7da0d0ULL || rel >= 0x7da180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007da180 size=208 callers=0 calls=3
   calls: sub_7df730, sub_8aabb0, sub_8aabe0
*/
void sub_7da180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7da180ULL || rel >= 0x7da250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007da250 size=160 callers=0 calls=1
   calls: sub_7cb540
*/
void sub_7da250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7da250ULL || rel >= 0x7da2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007da2f0 size=720 callers=0 calls=19
   calls: sub_7c9b60, sub_7ca170, sub_7caa70, sub_7cb410, sub_7ccca0, sub_7d3bc0, sub_7df860, sub_7ed1b0, sub_7ed1c0, sub_7ee6b0, sub_7fc2f0, sub_7fe1d0
   ... +7 more
*/
void sub_7da2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7da2f0ULL || rel >= 0x7da5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007da5c0 size=272 callers=0 calls=4
   calls: sub_7ca9e0, sub_7cb420, sub_7cb540, sub_7fe1d0
*/
void sub_7da5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7da5c0ULL || rel >= 0x7da6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007da6d0 size=272 callers=0 calls=4
   calls: sub_7ca9e0, sub_7cb420, sub_7cb540, sub_7fe1d0
*/
void sub_7da6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7da6d0ULL || rel >= 0x7da7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007da7e0 size=384 callers=0 calls=2
   calls: sub_7e88f0, sub_817bf0
*/
void sub_7da7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7da7e0ULL || rel >= 0x7da960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007da960 size=256 callers=0 calls=0
*/
void sub_7da960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7da960ULL || rel >= 0x7daa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007daa60 size=32 callers=0 calls=2
   calls: sub_7e88f0, sub_817c40
*/
void sub_7daa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7daa60ULL || rel >= 0x7daa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007daa80 size=176 callers=0 calls=2
   calls: sub_7cb420, sub_7fe1d0
*/
void sub_7daa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7daa80ULL || rel >= 0x7dab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dab30 size=304 callers=0 calls=3
   calls: sub_7ca9e0, sub_7cb420, sub_7fe1d0
*/
void sub_7dab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dab30ULL || rel >= 0x7dac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dac60 size=368 callers=0 calls=3
   calls: sub_7ca9e0, sub_7cb420, sub_7fe1d0
*/
void sub_7dac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dac60ULL || rel >= 0x7dadd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dadd0 size=256 callers=0 calls=3
   calls: sub_7cb420, sub_7fe1d0, sub_8a8260
*/
void sub_7dadd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dadd0ULL || rel >= 0x7daed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007daed0 size=192 callers=0 calls=2
   calls: sub_7cb420, sub_7fe1d0
*/
void sub_7daed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7daed0ULL || rel >= 0x7daf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007daf90 size=80 callers=0 calls=2
   calls: sub_7e88f0, sub_816c00
*/
void sub_7daf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7daf90ULL || rel >= 0x7dafe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dafe0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_817860
*/
void sub_7dafe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dafe0ULL || rel >= 0x7db020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db020 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_816c80
*/
void sub_7db020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db020ULL || rel >= 0x7db050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db050 size=80 callers=0 calls=2
   calls: sub_7e88f0, sub_816cb0
*/
void sub_7db050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db050ULL || rel >= 0x7db0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db0a0 size=80 callers=0 calls=3
   calls: sub_7ecc90, sub_7f0290, sub_7fe1d0
*/
void sub_7db0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db0a0ULL || rel >= 0x7db0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db0f0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_816d00
*/
void sub_7db0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db0f0ULL || rel >= 0x7db130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db130 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_816d40
*/
void sub_7db130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db130ULL || rel >= 0x7db170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db170 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_816da0
*/
void sub_7db170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db170ULL || rel >= 0x7db1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db1b0 size=64 callers=0 calls=3
   calls: sub_7ecc90, sub_7f02d0, sub_7fe1d0
*/
void sub_7db1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db1b0ULL || rel >= 0x7db1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db1f0 size=64 callers=0 calls=3
   calls: sub_7ecc90, sub_7f0320, sub_7fe1d0
*/
void sub_7db1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db1f0ULL || rel >= 0x7db230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db230 size=64 callers=0 calls=3
   calls: sub_7ecc90, sub_7f0e50, sub_7fe1d0
*/
void sub_7db230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db230ULL || rel >= 0x7db270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db270 size=64 callers=0 calls=3
   calls: sub_7ecc90, sub_7f0f30, sub_7fe1d0
*/
void sub_7db270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db270ULL || rel >= 0x7db2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db2b0 size=144 callers=0 calls=2
   calls: sub_7e88f0, sub_817a80
*/
void sub_7db2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db2b0ULL || rel >= 0x7db340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db340 size=64 callers=0 calls=3
   calls: sub_7ecc90, sub_7f10b0, sub_7fe1d0
*/
void sub_7db340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db340ULL || rel >= 0x7db380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db380 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817a20
*/
void sub_7db380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db380ULL || rel >= 0x7db3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db3b0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817a50
*/
void sub_7db3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db3b0ULL || rel >= 0x7db3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db3e0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_817b70
*/
void sub_7db3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db3e0ULL || rel >= 0x7db420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db420 size=96 callers=0 calls=4
   calls: sub_7ecc90, sub_7f1490, sub_7f8bc0, sub_7fe1d0
*/
void sub_7db420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db420ULL || rel >= 0x7db480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db480 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_816eb0
*/
void sub_7db480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db480ULL || rel >= 0x7db4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db4b0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_816ee0
*/
void sub_7db4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db4b0ULL || rel >= 0x7db4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db4f0 size=192 callers=0 calls=9
   calls: sub_7cb490, sub_7cd0c0, sub_7e88f0, sub_7ed1a0, sub_7ee6b0, sub_7fc430, sub_7fe1d0, sub_816ff0, sub_8ac140
*/
void sub_7db4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db4f0ULL || rel >= 0x7db5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db5b0 size=80 callers=0 calls=2
   calls: sub_7e88f0, sub_8175a0
*/
void sub_7db5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db5b0ULL || rel >= 0x7db600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db600 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_8175f0
*/
void sub_7db600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db600ULL || rel >= 0x7db640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db640 size=80 callers=0 calls=2
   calls: sub_7e88f0, sub_817410
*/
void sub_7db640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db640ULL || rel >= 0x7db690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db690 size=80 callers=0 calls=2
   calls: sub_7e88f0, sub_817460
*/
void sub_7db690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db690ULL || rel >= 0x7db6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db6e0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_817910
*/
void sub_7db6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db6e0ULL || rel >= 0x7db720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db720 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_816e40
*/
void sub_7db720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db720ULL || rel >= 0x7db760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db760 size=112 callers=0 calls=2
   calls: sub_7e88f0, sub_817980
*/
void sub_7db760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db760ULL || rel >= 0x7db7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db7d0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_8169e0
*/
void sub_7db7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db7d0ULL || rel >= 0x7db810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db810 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_816a20
*/
void sub_7db810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db810ULL || rel >= 0x7db850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db850 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_816960
*/
void sub_7db850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db850ULL || rel >= 0x7db890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

