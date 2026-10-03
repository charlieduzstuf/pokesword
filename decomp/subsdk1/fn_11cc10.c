/* subsdk1 functions 0011cc10..00167fa0 (7 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0011cc10 size=80 callers=2 calls=0
*/
void sub_11cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cc10ULL || rel >= 0x11cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011cc60 size=80 callers=0 calls=0
*/
void sub_11cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cc60ULL || rel >= 0x11ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011ccb0 size=688 callers=0 calls=3
   calls: sub_3620, sub_650d0, sub_8b490
*/
void sub_11ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ccb0ULL || rel >= 0x11cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011cf60 size=352 callers=2 calls=0
*/
void sub_11cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11cf60ULL || rel >= 0x11d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011d0c0 size=544 callers=2 calls=5
   calls: sub_9a050, sub_a7310, sub_a7370, sub_a7940, sub_a79c0
*/
void sub_11d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d0c0ULL || rel >= 0x11d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011d2e0 size=96 callers=3 calls=1
   calls: sub_9a050
*/
void sub_11d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d2e0ULL || rel >= 0x11d340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011d340 size=64 callers=0 calls=1
   calls: sub_9a050
*/
void sub_11d340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d340ULL || rel >= 0x11d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011d380 size=32 callers=0 calls=0
*/
void sub_11d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d380ULL || rel >= 0x11d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011d3a0 size=48 callers=6 calls=0
*/
void sub_11d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d3a0ULL || rel >= 0x11d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011d3d0 size=352 callers=0 calls=3
   calls: sub_636f0, sub_b7e20, sub_b8b40
*/
void sub_11d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d3d0ULL || rel >= 0x11d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011d530 size=128 callers=0 calls=2
   calls: sub_636f0, sub_66820
*/
void sub_11d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d530ULL || rel >= 0x11d5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011d5b0 size=272 callers=0 calls=2
   calls: sub_b7e20, sub_b89a0
*/
void sub_11d5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d5b0ULL || rel >= 0x11d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011d6c0 size=336 callers=0 calls=2
   calls: sub_b7e20, sub_b89a0
*/
void sub_11d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d6c0ULL || rel >= 0x11d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011d810 size=32 callers=0 calls=0
*/
void sub_11d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d810ULL || rel >= 0x11d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011d830 size=96 callers=0 calls=0
*/
void sub_11d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d830ULL || rel >= 0x11d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011d890 size=224 callers=16 calls=0
*/
void sub_11d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d890ULL || rel >= 0x11d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011d970 size=960 callers=0 calls=0
*/
void sub_11d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11d970ULL || rel >= 0x11dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011dd30 size=336 callers=0 calls=1
   calls: sub_11a010
*/
void sub_11dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11dd30ULL || rel >= 0x11de80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011de80 size=192 callers=0 calls=1
   calls: sub_11d890
*/
void sub_11de80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11de80ULL || rel >= 0x11df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011df40 size=256 callers=0 calls=2
   calls: sub_9d320, sub_9d360
*/
void sub_11df40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11df40ULL || rel >= 0x11e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011e040 size=208 callers=1 calls=1
   calls: sub_9ca30
*/
void sub_11e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e040ULL || rel >= 0x11e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011e110 size=112 callers=0 calls=0
*/
void sub_11e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e110ULL || rel >= 0x11e180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011e180 size=128 callers=0 calls=0
*/
void sub_11e180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e180ULL || rel >= 0x11e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011e200 size=128 callers=0 calls=0
*/
void sub_11e200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e200ULL || rel >= 0x11e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011e280 size=272 callers=0 calls=0
*/
void sub_11e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e280ULL || rel >= 0x11e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011e390 size=352 callers=15 calls=0
*/
void sub_11e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e390ULL || rel >= 0x11e4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011e4f0 size=432 callers=1 calls=3
   calls: sub_11a010, sub_35f0, sub_66d40
*/
void sub_11e4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e4f0ULL || rel >= 0x11e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011e6a0 size=432 callers=0 calls=6
   calls: sub_11a010, sub_66d40, sub_7d430, sub_9b3e0, sub_9b4d0, sub_9d320
*/
void sub_11e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e6a0ULL || rel >= 0x11e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011e850 size=272 callers=0 calls=1
   calls: sub_9ca30
*/
void sub_11e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e850ULL || rel >= 0x11e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011e960 size=96 callers=0 calls=0
*/
void sub_11e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e960ULL || rel >= 0x11e9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011e9c0 size=336 callers=0 calls=3
   calls: sub_35320, sub_3af80, sub_9d2f0
*/
void sub_11e9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11e9c0ULL || rel >= 0x11eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011eb10 size=256 callers=0 calls=1
   calls: sub_9ca30
*/
void sub_11eb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11eb10ULL || rel >= 0x11ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011ec10 size=880 callers=2 calls=2
   calls: sub_66d40, sub_9a740
*/
void sub_11ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ec10ULL || rel >= 0x11ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011ef80 size=320 callers=0 calls=1
   calls: sub_679f0
*/
void sub_11ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ef80ULL || rel >= 0x11f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011f0c0 size=304 callers=0 calls=1
   calls: sub_9b3d0
*/
void sub_11f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f0c0ULL || rel >= 0x11f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011f1f0 size=32 callers=0 calls=0
*/
void sub_11f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f1f0ULL || rel >= 0x11f210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011f210 size=256 callers=0 calls=1
   calls: sub_9b3d0
*/
void sub_11f210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f210ULL || rel >= 0x11f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011f310 size=128 callers=0 calls=1
   calls: sub_9b3d0
*/
void sub_11f310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f310ULL || rel >= 0x11f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011f390 size=2768 callers=0 calls=2
   calls: sub_67940, sub_9c950
*/
void sub_11f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11f390ULL || rel >= 0x11fe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011fe60 size=384 callers=0 calls=0
*/
void sub_11fe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11fe60ULL || rel >= 0x11ffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0011ffe0 size=64 callers=2 calls=0
*/
void sub_11ffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11ffe0ULL || rel >= 0x120020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00120020 size=96 callers=0 calls=0
*/
void sub_120020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120020ULL || rel >= 0x120080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00120080 size=1072 callers=0 calls=1
   calls: sub_66d40
*/
void sub_120080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120080ULL || rel >= 0x1204b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001204b0 size=176 callers=0 calls=2
   calls: sub_63560, sub_636f0
*/
void sub_1204b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1204b0ULL || rel >= 0x120560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00120560 size=96 callers=0 calls=1
   calls: sub_35320
*/
void sub_120560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120560ULL || rel >= 0x1205c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001205c0 size=112 callers=0 calls=2
   calls: sub_621f0, sub_622d0
*/
void sub_1205c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1205c0ULL || rel >= 0x120630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00120630 size=576 callers=0 calls=1
   calls: sub_35320
*/
void sub_120630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120630ULL || rel >= 0x120870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00120870 size=752 callers=0 calls=3
   calls: sub_11e390, sub_9b3d0, sub_9c950
*/
void sub_120870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120870ULL || rel >= 0x120b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00120b60 size=976 callers=1 calls=0
*/
void sub_120b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120b60ULL || rel >= 0x120f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00120f30 size=1360 callers=0 calls=2
   calls: sub_120b60, sub_67940
*/
void sub_120f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x120f30ULL || rel >= 0x121480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00121480 size=1312 callers=0 calls=11
   calls: sub_11a010, sub_66cd0, sub_66d40, sub_66f90, sub_67ab0, sub_69e70, sub_9a240, sub_9a600, sub_9a610, sub_9b120, sub_9b3d0
*/
void sub_121480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121480ULL || rel >= 0x1219a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001219a0 size=432 callers=0 calls=2
   calls: sub_5be70, sub_9ca30
*/
void sub_1219a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1219a0ULL || rel >= 0x121b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00121b50 size=240 callers=0 calls=1
   calls: sub_121c40
*/
void sub_121b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121b50ULL || rel >= 0x121c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00121c40 size=272 callers=4 calls=0
*/
void sub_121c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121c40ULL || rel >= 0x121d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00121d50 size=304 callers=0 calls=0
*/
void sub_121d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121d50ULL || rel >= 0x121e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00121e80 size=240 callers=0 calls=0
*/
void sub_121e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121e80ULL || rel >= 0x121f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00121f70 size=400 callers=0 calls=2
   calls: sub_b7e20, sub_b89a0
*/
void sub_121f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x121f70ULL || rel >= 0x122100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00122100 size=816 callers=1 calls=0
*/
void sub_122100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122100ULL || rel >= 0x122430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00122430 size=16 callers=2 calls=0
*/
void sub_122430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122430ULL || rel >= 0x122440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00122440 size=2384 callers=0 calls=9
   calls: sub_9a050, sub_9b160, sub_a70d0, sub_a7110, sub_a7370, sub_a73d0, sub_a7800, sub_a7940, sub_a79c0
*/
void sub_122440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122440ULL || rel >= 0x122d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00122d90 size=400 callers=1 calls=7
   calls: sub_9b3e0, sub_9bed0, sub_a7850, sub_a7890, sub_a7a30, sub_a8030, sub_a8080
*/
void sub_122d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122d90ULL || rel >= 0x122f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00122f20 size=352 callers=1 calls=6
   calls: sub_9b3e0, sub_9bed0, sub_a7800, sub_a7850, sub_a8030, sub_a8080
*/
void sub_122f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x122f20ULL || rel >= 0x123080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00123080 size=608 callers=0 calls=9
   calls: sub_61e80, sub_66cd0, sub_9b3e0, sub_9c950, sub_9ca30, sub_9d420, sub_a70d0, sub_a7150, sub_a8030
*/
void sub_123080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123080ULL || rel >= 0x1232e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001232e0 size=32 callers=0 calls=0
*/
void sub_1232e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1232e0ULL || rel >= 0x123300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00123300 size=240 callers=0 calls=4
   calls: sub_9bed0, sub_a7370, sub_a73d0, sub_a7890
*/
void sub_123300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123300ULL || rel >= 0x1233f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001233f0 size=304 callers=0 calls=5
   calls: sub_3af80, sub_9bed0, sub_a7370, sub_a73d0, sub_a80d0
*/
void sub_1233f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1233f0ULL || rel >= 0x123520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00123520 size=368 callers=0 calls=3
   calls: sub_9c950, sub_9d2f0, sub_a73d0
*/
void sub_123520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123520ULL || rel >= 0x123690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00123690 size=64 callers=1 calls=0
*/
void sub_123690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123690ULL || rel >= 0x1236d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001236d0 size=64 callers=2 calls=1
   calls: sub_a92d0
*/
void sub_1236d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1236d0ULL || rel >= 0x123710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00123710 size=512 callers=1 calls=2
   calls: sub_63c30, sub_a92d0
*/
void sub_123710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123710ULL || rel >= 0x123910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00123910 size=240 callers=1 calls=2
   calls: sub_a92d0, sub_a9a30
*/
void sub_123910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123910ULL || rel >= 0x123a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00123a00 size=528 callers=3 calls=1
   calls: sub_9c270
*/
void sub_123a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123a00ULL || rel >= 0x123c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00123c10 size=48 callers=0 calls=0
*/
void sub_123c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c10ULL || rel >= 0x123c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00123c40 size=32 callers=0 calls=0
*/
void sub_123c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c40ULL || rel >= 0x123c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00123c60 size=16 callers=0 calls=0
*/
void sub_123c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c60ULL || rel >= 0x123c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00123c70 size=240 callers=1 calls=3
   calls: sub_65420, sub_67bc0, sub_a7090
*/
void sub_123c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123c70ULL || rel >= 0x123d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00123d60 size=240 callers=1 calls=3
   calls: sub_65420, sub_67c70, sub_a7090
*/
void sub_123d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123d60ULL || rel >= 0x123e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00123e50 size=7408 callers=0 calls=63
   calls: sub_11a010, sub_122d90, sub_122f20, sub_123710, sub_123a00, sub_123c70, sub_123d60, sub_125b40, sub_126040, sub_1913d0, sub_1931d0, sub_19e6f0
   ... +51 more
   ref: __rel_dyn_end
*/
void rel_dyn_end(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x123e50ULL || rel >= 0x125b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00125b40 size=1280 callers=2 calls=12
   calls: sub_3afa0, sub_3b010, sub_3b040, sub_66bc0, sub_9a050, sub_9b3e0, sub_9bed0, sub_9d420, sub_a7090, sub_a8080, sub_a85c0, sub_a92d0
*/
void sub_125b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x125b40ULL || rel >= 0x126040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00126040 size=1024 callers=1 calls=10
   calls: sub_3b040, sub_66bc0, sub_9b3e0, sub_9bed0, sub_9d420, sub_a70d0, sub_a7800, sub_a8030, sub_a85c0, sub_a92d0
*/
void sub_126040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126040ULL || rel >= 0x126440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00126440 size=512 callers=0 calls=8
   calls: sub_63580, sub_635b0, sub_635d0, sub_635f0, sub_9a610, sub_9ae80, sub_9bed0, sub_a8960
*/
void sub_126440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126440ULL || rel >= 0x126640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00126640 size=848 callers=2 calls=8
   calls: sub_67010, sub_9ae80, sub_9b0a0, sub_a7150, sub_a7800, sub_a7890, sub_a7a30, sub_a8560
*/
void sub_126640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126640ULL || rel >= 0x126990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00126990 size=528 callers=0 calls=4
   calls: sub_126640, sub_69ea0, sub_9a610, sub_a8960
*/
void sub_126990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126990ULL || rel >= 0x126ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00126ba0 size=592 callers=0 calls=6
   calls: sub_126640, sub_63670, sub_66cd0, sub_9a610, sub_9bed0, sub_a8960
*/
void sub_126ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126ba0ULL || rel >= 0x126df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00126df0 size=64 callers=0 calls=1
   calls: sub_63670
*/
void sub_126df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126df0ULL || rel >= 0x126e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00126e30 size=128 callers=3 calls=0
*/
void sub_126e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126e30ULL || rel >= 0x126eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00126eb0 size=80 callers=0 calls=0
*/
void sub_126eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126eb0ULL || rel >= 0x126f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00126f00 size=768 callers=19 calls=2
   calls: sub_127840, sub_1278e0
*/
void sub_126f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x126f00ULL || rel >= 0x127200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00127200 size=624 callers=1 calls=4
   calls: sub_126f00, sub_9b3e0, sub_9bed0, sub_a92d0
*/
void sub_127200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127200ULL || rel >= 0x127470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00127470 size=384 callers=1 calls=3
   calls: sub_126f00, sub_9bed0, sub_a92d0
*/
void sub_127470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127470ULL || rel >= 0x1275f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001275f0 size=592 callers=0 calls=0
*/
void sub_1275f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1275f0ULL || rel >= 0x127840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00127840 size=160 callers=1 calls=1
   calls: sub_66a80
*/
void sub_127840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127840ULL || rel >= 0x1278e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001278e0 size=336 callers=2 calls=0
*/
void sub_1278e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1278e0ULL || rel >= 0x127a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00127a30 size=368 callers=1 calls=0
*/
void sub_127a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127a30ULL || rel >= 0x127ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00127ba0 size=192 callers=1 calls=2
   calls: sub_127a30, sub_63560
*/
void sub_127ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127ba0ULL || rel >= 0x127c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00127c60 size=304 callers=1 calls=3
   calls: sub_126f00, sub_127ba0, sub_9b3d0
*/
void sub_127c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127c60ULL || rel >= 0x127d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00127d90 size=1216 callers=1 calls=9
   calls: sub_126f00, sub_127200, sub_127470, sub_35320, sub_9b3d0, sub_9b3e0, sub_a7800, sub_b7e20, sub_b89a0
*/
void sub_127d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x127d90ULL || rel >= 0x128250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00128250 size=624 callers=1 calls=5
   calls: sub_11a010, sub_126f00, sub_66a80, sub_66b60, sub_66d40
*/
void sub_128250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128250ULL || rel >= 0x1284c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001284c0 size=128 callers=1 calls=0
*/
void sub_1284c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1284c0ULL || rel >= 0x128540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00128540 size=112 callers=1 calls=2
   calls: sub_152820, sub_9ca30
*/
void sub_128540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128540ULL || rel >= 0x1285b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001285b0 size=368 callers=3 calls=2
   calls: sub_9bed0, sub_a8170
*/
void sub_1285b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1285b0ULL || rel >= 0x128720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00128720 size=608 callers=1 calls=4
   calls: sub_128980, sub_62240, sub_9bed0, sub_e7a30
*/
void sub_128720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128720ULL || rel >= 0x128980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00128980 size=1920 callers=1 calls=7
   calls: sub_9a050, sub_9b3e0, sub_a70d0, sub_a7850, sub_a9060, sub_a90d0, sub_a9390
*/
void sub_128980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x128980ULL || rel >= 0x129100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00129100 size=336 callers=5 calls=1
   calls: sub_9c950
*/
void sub_129100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129100ULL || rel >= 0x129250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00129250 size=448 callers=1 calls=2
   calls: sub_62a70, sub_9b3d0
*/
void sub_129250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129250ULL || rel >= 0x129410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00129410 size=240 callers=21 calls=0
*/
void sub_129410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129410ULL || rel >= 0x129500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00129500 size=336 callers=3 calls=3
   calls: sub_129650, sub_62a70, sub_9b3d0
*/
void sub_129500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129500ULL || rel >= 0x129650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00129650 size=384 callers=9 calls=6
   calls: sub_13d050, sub_35320, sub_62a70, sub_9b3d0, sub_9b3e0, sub_a5f80
*/
void sub_129650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x129650ULL || rel >= 0x1297d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001297d0 size=3040 callers=3 calls=22
   calls: sub_129250, sub_12a3b0, sub_3af80, sub_61d40, sub_62160, sub_621f0, sub_62a70, sub_9b3d0, sub_9b3e0, sub_9bed0, sub_9ca30, sub_a70d0
   ... +10 more
*/
void sub_1297d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1297d0ULL || rel >= 0x12a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012a3b0 size=96 callers=2 calls=0
*/
void sub_12a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a3b0ULL || rel >= 0x12a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012a410 size=96 callers=0 calls=0
*/
void sub_12a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a410ULL || rel >= 0x12a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012a470 size=432 callers=2 calls=3
   calls: sub_62470, sub_9b3e0, sub_9b4d0
*/
void sub_12a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a470ULL || rel >= 0x12a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012a620 size=368 callers=2 calls=4
   calls: sub_7d430, sub_9b3e0, sub_9b4d0, sub_a92d0
*/
void sub_12a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a620ULL || rel >= 0x12a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012a790 size=560 callers=3 calls=5
   calls: sub_12a620, sub_12ab10, sub_67010, sub_9ae80, sub_9bed0
*/
void sub_12a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a790ULL || rel >= 0x12a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012a9c0 size=336 callers=1 calls=3
   calls: sub_12ab10, sub_67010, sub_9b3d0
*/
void sub_12a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12a9c0ULL || rel >= 0x12ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012ab10 size=256 callers=2 calls=1
   calls: sub_a92d0
*/
void sub_12ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ab10ULL || rel >= 0x12ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012ac10 size=544 callers=1 calls=9
   calls: sub_12a790, sub_12a9c0, sub_64060, sub_68ce0, sub_68db0, sub_68e10, sub_9a740, sub_e79b0, sub_e7ad0
*/
void sub_12ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ac10ULL || rel >= 0x12ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012ae30 size=384 callers=5 calls=1
   calls: sub_12ae30
*/
void sub_12ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ae30ULL || rel >= 0x12afb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012afb0 size=1216 callers=0 calls=4
   calls: sub_9b3d0, sub_9ca30, sub_9d2f0, sub_9d430
*/
void sub_12afb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12afb0ULL || rel >= 0x12b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012b470 size=608 callers=0 calls=4
   calls: sub_9b3d0, sub_9ca30, sub_9d2f0, sub_9d430
*/
void sub_12b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b470ULL || rel >= 0x12b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012b6d0 size=2288 callers=1 calls=8
   calls: sub_12bfc0, sub_12c2e0, sub_12c5f0, sub_3afa0, sub_62050, sub_64060, sub_9b3d0, sub_b8aa0
*/
void sub_12b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12b6d0ULL || rel >= 0x12bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012bfc0 size=800 callers=2 calls=0
*/
void sub_12bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12bfc0ULL || rel >= 0x12c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012c2e0 size=784 callers=1 calls=4
   calls: sub_9b3d0, sub_9b3e0, sub_9bed0, sub_a7850
*/
void sub_12c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c2e0ULL || rel >= 0x12c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012c5f0 size=320 callers=1 calls=4
   calls: sub_620d0, sub_9b3e0, sub_9bed0, sub_a7090
*/
void sub_12c5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c5f0ULL || rel >= 0x12c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012c730 size=864 callers=2 calls=9
   calls: sub_35320, sub_3afa0, sub_3afc0, sub_9b3d0, sub_9bed0, sub_9ca30, sub_9d2f0, sub_a7370, sub_e7a30
*/
void sub_12c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12c730ULL || rel >= 0x12ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012ca90 size=304 callers=1 calls=3
   calls: sub_62240, sub_9ca30, sub_e7a30
*/
void sub_12ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ca90ULL || rel >= 0x12cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012cbc0 size=624 callers=0 calls=8
   calls: sub_35320, sub_3b000, sub_61e80, sub_61f80, sub_66f40, sub_9b3d0, sub_a7800, sub_e79b0
*/
void sub_12cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12cbc0ULL || rel >= 0x12ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012ce30 size=1200 callers=0 calls=8
   calls: sub_35320, sub_3b000, sub_61f80, sub_66f40, sub_9b3d0, sub_9b4d0, sub_a7800, sub_e7a30
*/
void sub_12ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ce30ULL || rel >= 0x12d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012d2e0 size=272 callers=2 calls=3
   calls: sub_35320, sub_3b000, sub_b8aa0
*/
void sub_12d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d2e0ULL || rel >= 0x12d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012d3f0 size=2832 callers=3 calls=9
   calls: sub_35320, sub_3b000, sub_66f40, sub_67010, sub_9b3d0, sub_9b500, sub_a7800, sub_a8030, sub_e7a30
*/
void sub_12d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12d3f0ULL || rel >= 0x12df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012df00 size=160 callers=0 calls=1
   calls: sub_66c70
*/
void sub_12df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12df00ULL || rel >= 0x12dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012dfa0 size=64 callers=0 calls=0
*/
void sub_12dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dfa0ULL || rel >= 0x12dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012dfe0 size=304 callers=3 calls=3
   calls: sub_3b630, sub_62050, sub_9c950
*/
void sub_12dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12dfe0ULL || rel >= 0x12e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012e110 size=160 callers=0 calls=2
   calls: sub_5b1b0, sub_9ba20
*/
void sub_12e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e110ULL || rel >= 0x12e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012e1b0 size=160 callers=0 calls=2
   calls: sub_5b4a0, sub_9ba20
*/
void sub_12e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e1b0ULL || rel >= 0x12e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012e250 size=432 callers=0 calls=4
   calls: sub_5b1b0, sub_5b4a0, sub_9b3d0, sub_9b3e0
*/
void sub_12e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e250ULL || rel >= 0x12e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012e400 size=496 callers=2 calls=4
   calls: sub_9a050, sub_9bed0, sub_9c950, sub_a9df0
*/
void sub_12e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e400ULL || rel >= 0x12e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012e5f0 size=864 callers=2 calls=2
   calls: sub_9b3d0, sub_e7a30
*/
void sub_12e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e5f0ULL || rel >= 0x12e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012e950 size=144 callers=1 calls=3
   calls: sub_12e9e0, sub_9bed0, sub_a92d0
*/
void sub_12e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e950ULL || rel >= 0x12e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012e9e0 size=544 callers=2 calls=2
   calls: sub_9b3d0, sub_e7a30
*/
void sub_12e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12e9e0ULL || rel >= 0x12ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012ec00 size=112 callers=8 calls=0
*/
void sub_12ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec00ULL || rel >= 0x12ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012ec70 size=688 callers=1 calls=8
   calls: sub_9b3d0, sub_9b3e0, sub_9bed0, sub_9ca30, sub_9d420, sub_9d430, sub_a8080, sub_e7a30
*/
void sub_12ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ec70ULL || rel >= 0x12ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012ef20 size=272 callers=2 calls=2
   calls: sub_9bed0, sub_a7090
*/
void sub_12ef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12ef20ULL || rel >= 0x12f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012f030 size=1120 callers=2 calls=6
   calls: sub_620d0, sub_9ba20, sub_9bed0, sub_a7370, sub_a8080, sub_e7a30
*/
void sub_12f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f030ULL || rel >= 0x12f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012f490 size=256 callers=0 calls=7
   calls: sub_12f590, sub_12f9e0, sub_64060, sub_68ce0, sub_68db0, sub_b8aa0, sub_e7ad0
*/
void sub_12f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f490ULL || rel >= 0x12f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012f590 size=1104 callers=6 calls=12
   calls: sub_671b0, sub_7ca40, sub_7cb10, sub_7cbc0, sub_7ccb0, sub_7cdb0, sub_7ceb0, sub_7d430, sub_9bed0, sub_9d2f0, sub_a9800, sub_e7a30
*/
void sub_12f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f590ULL || rel >= 0x12f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012f9e0 size=256 callers=2 calls=2
   calls: sub_66d40, sub_a5f80
*/
void sub_12f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12f9e0ULL || rel >= 0x12fae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0012fae0 size=17232 callers=0 calls=91
   calls: sub_11a010, sub_127c60, sub_127d90, sub_128250, sub_128720, sub_12ae30, sub_12b6d0, sub_12c730, sub_12d2e0, sub_12e400, sub_12e5f0, sub_12e950
   ... +79 more
*/
void sub_12fae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x12fae0ULL || rel >= 0x133e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133e30 size=448 callers=3 calls=4
   calls: sub_68290, sub_9bed0, sub_a7090, sub_e7a30
*/
void sub_133e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133e30ULL || rel >= 0x133ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00133ff0 size=640 callers=2 calls=6
   calls: sub_9b3d0, sub_9b4d0, sub_9bed0, sub_9ca30, sub_a7090, sub_e7a30
*/
void sub_133ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x133ff0ULL || rel >= 0x134270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134270 size=800 callers=8 calls=4
   calls: sub_671b0, sub_7d430, sub_9ca30, sub_e7a30
*/
void sub_134270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134270ULL || rel >= 0x134590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134590 size=368 callers=2 calls=3
   calls: sub_9bed0, sub_9ca30, sub_a7090
*/
void sub_134590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134590ULL || rel >= 0x134700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134700 size=304 callers=4 calls=3
   calls: sub_9ca30, sub_9d2f0, sub_e7a30
*/
void sub_134700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134700ULL || rel >= 0x134830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134830 size=1680 callers=2 calls=12
   calls: sub_152820, sub_35320, sub_3af50, sub_62240, sub_68260, sub_9bed0, sub_9ca30, sub_9d2f0, sub_a5f80, sub_a7090, sub_a8080, sub_e7a30
*/
void sub_134830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134830ULL || rel >= 0x134ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134ec0 size=272 callers=2 calls=4
   calls: sub_671b0, sub_7d430, sub_a5f80, sub_e7a30
*/
void sub_134ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134ec0ULL || rel >= 0x134fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00134fd0 size=1120 callers=3 calls=5
   calls: sub_152820, sub_9bed0, sub_9ca30, sub_a8270, sub_e7a30
*/
void sub_134fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x134fd0ULL || rel >= 0x135430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135430 size=368 callers=2 calls=1
   calls: sub_e7a30
*/
void sub_135430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135430ULL || rel >= 0x1355a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001355a0 size=416 callers=2 calls=5
   calls: sub_9b3d0, sub_9b3e0, sub_9bed0, sub_a7850, sub_e7a30
*/
void sub_1355a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1355a0ULL || rel >= 0x135740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135740 size=336 callers=2 calls=4
   calls: sub_9b3d0, sub_9bed0, sub_a8080, sub_e7a30
*/
void sub_135740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135740ULL || rel >= 0x135890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135890 size=80 callers=0 calls=0
*/
void sub_135890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135890ULL || rel >= 0x1358e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001358e0 size=96 callers=0 calls=1
   calls: sub_9d2f0
*/
void sub_1358e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1358e0ULL || rel >= 0x135940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135940 size=48 callers=0 calls=0
*/
void sub_135940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135940ULL || rel >= 0x135970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135970 size=176 callers=0 calls=1
   calls: sub_9d2f0
*/
void sub_135970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135970ULL || rel >= 0x135a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135a20 size=704 callers=0 calls=0
*/
void sub_135a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135a20ULL || rel >= 0x135ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135ce0 size=192 callers=1 calls=1
   calls: sub_135da0
*/
void sub_135ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135ce0ULL || rel >= 0x135da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135da0 size=544 callers=3 calls=1
   calls: sub_e7a30
*/
void sub_135da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135da0ULL || rel >= 0x135fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00135fc0 size=736 callers=1 calls=8
   calls: sub_35320, sub_3b0a0, sub_62240, sub_65420, sub_9bed0, sub_a92d0, sub_a9df0, sub_e7a30
*/
void sub_135fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x135fc0ULL || rel >= 0x1362a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001362a0 size=1136 callers=1 calls=2
   calls: sub_9b3d0, sub_e7a30
*/
void sub_1362a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1362a0ULL || rel >= 0x136710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00136710 size=14576 callers=0 calls=53
   calls: sub_11a4a0, sub_11e390, sub_129500, sub_1297d0, sub_12ac10, sub_12d3f0, sub_12f030, sub_12f590, sub_134fd0, sub_135ce0, sub_135fc0, sub_1362a0
   ... +41 more
*/
void sub_136710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x136710ULL || rel >= 0x13a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a000 size=672 callers=2 calls=11
   calls: sub_1431a0, sub_1433e0, sub_1436e0, sub_35320, sub_624d0, sub_9b3e0, sub_9b4d0, sub_9bed0, sub_a7800, sub_a8030, sub_a92d0
*/
void sub_13a000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a000ULL || rel >= 0x13a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a2a0 size=1392 callers=2 calls=8
   calls: sub_142c50, sub_142f90, sub_35320, sub_61f80, sub_624d0, sub_9bed0, sub_a8f90, sub_a9140
*/
void sub_13a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a2a0ULL || rel >= 0x13a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a810 size=304 callers=2 calls=3
   calls: sub_13a940, sub_62240, sub_9bed0
*/
void sub_13a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a810ULL || rel >= 0x13a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013a940 size=1744 callers=4 calls=6
   calls: sub_13a940, sub_68ce0, sub_9a050, sub_a8270, sub_a9df0, sub_e7a30
*/
void sub_13a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a940ULL || rel >= 0x13b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b010 size=1008 callers=2 calls=8
   calls: sub_35320, sub_61f80, sub_9b3e0, sub_9bed0, sub_9d2f0, sub_9d420, sub_a8080, sub_e7a30
*/
void sub_13b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b010ULL || rel >= 0x13b400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b400 size=928 callers=2 calls=6
   calls: sub_12dfe0, sub_3b630, sub_3b680, sub_9bed0, sub_a7850, sub_e7a30
*/
void sub_13b400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b400ULL || rel >= 0x13b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013b7a0 size=704 callers=1 calls=3
   calls: sub_129100, sub_9c950, sub_9ca30
*/
void sub_13b7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7a0ULL || rel >= 0x13ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ba60 size=304 callers=1 calls=1
   calls: sub_681c0
*/
void sub_13ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ba60ULL || rel >= 0x13bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013bb90 size=1040 callers=1 calls=6
   calls: sub_121c40, sub_129100, sub_13b7a0, sub_66d40, sub_69610, sub_9d2f0
*/
void sub_13bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bb90ULL || rel >= 0x13bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013bfa0 size=336 callers=0 calls=2
   calls: sub_9bed0, sub_a7730
*/
void sub_13bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bfa0ULL || rel >= 0x13c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013c0f0 size=496 callers=1 calls=5
   calls: sub_13ba60, sub_9bed0, sub_9ca30, sub_9d2f0, sub_a7090
*/
void sub_13c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c0f0ULL || rel >= 0x13c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013c2e0 size=352 callers=1 calls=4
   calls: sub_129100, sub_9bed0, sub_9c950, sub_a7430
*/
void sub_13c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c2e0ULL || rel >= 0x13c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013c440 size=2896 callers=0 calls=36
   calls: sub_12f590, sub_133e30, sub_133ff0, sub_134590, sub_13bb90, sub_13c0f0, sub_13c2e0, sub_620d0, sub_62240, sub_64060, sub_66d40, sub_67010
   ... +24 more
*/
void sub_13c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13c440ULL || rel >= 0x13cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013cf90 size=112 callers=0 calls=0
*/
void sub_13cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13cf90ULL || rel >= 0x13d000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d000 size=80 callers=0 calls=0
*/
void sub_13d000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d000ULL || rel >= 0x13d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d050 size=240 callers=23 calls=4
   calls: sub_9b3d0, sub_9b500, sub_9ca30, sub_9d2f0
*/
void sub_13d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d050ULL || rel >= 0x13d140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d140 size=512 callers=1 calls=6
   calls: sub_1630, sub_2060, sub_2880, sub_3670, sub_39620, sub_3fa0
*/
void sub_13d140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d140ULL || rel >= 0x13d340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d340 size=368 callers=0 calls=4
   calls: sub_13d140, sub_2880, sub_3fa0, sub_9adb0
   ref: %s.const%d.%d.%d
*/
void s_const_d_d_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d340ULL || rel >= 0x13d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d4b0 size=128 callers=31 calls=2
   calls: sub_13d530, sub_9d2f0
*/
void sub_13d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d4b0ULL || rel >= 0x13d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d530 size=368 callers=1 calls=5
   calls: sub_1189d0, sub_118c70, sub_9b3d0, sub_9b500, sub_9d320
*/
void sub_13d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d530ULL || rel >= 0x13d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d6a0 size=64 callers=0 calls=0
*/
void sub_13d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6a0ULL || rel >= 0x13d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d6e0 size=64 callers=0 calls=0
*/
void sub_13d6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d6e0ULL || rel >= 0x13d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d720 size=32 callers=0 calls=0
*/
void sub_13d720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d720ULL || rel >= 0x13d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d740 size=176 callers=0 calls=2
   calls: sub_66d40, sub_9d320
*/
void sub_13d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d740ULL || rel >= 0x13d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d7f0 size=384 callers=0 calls=2
   calls: sub_121c40, sub_13d970
*/
void sub_13d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d7f0ULL || rel >= 0x13d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013d970 size=896 callers=2 calls=0
*/
void sub_13d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13d970ULL || rel >= 0x13dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013dcf0 size=96 callers=1 calls=0
*/
void sub_13dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dcf0ULL || rel >= 0x13dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013dd50 size=800 callers=0 calls=4
   calls: sub_121c40, sub_68ce0, sub_9bed0, sub_a92d0
*/
void sub_13dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dd50ULL || rel >= 0x13e070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013e070 size=752 callers=1 calls=5
   calls: sub_122100, sub_9b0a0, sub_a7110, sub_a7890, sub_a7a30
*/
void sub_13e070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e070ULL || rel >= 0x13e360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013e360 size=160 callers=0 calls=1
   calls: sub_9b3d0
*/
void sub_13e360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e360ULL || rel >= 0x13e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013e400 size=224 callers=0 calls=3
   calls: sub_3550, sub_b8aa0, sub_ff5c0
   ref: SurfaceVectorizer
*/
void SurfaceVectorizer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e400ULL || rel >= 0x13e4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013e4e0 size=256 callers=0 calls=4
   calls: sub_3550, sub_b8aa0, sub_b8cd0, sub_ff5c0
   ref: LateVectorization
*/
void LateVectorization(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4e0ULL || rel >= 0x13e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013e5e0 size=304 callers=2 calls=2
   calls: sub_91bc0, sub_92590
*/
void sub_13e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e5e0ULL || rel >= 0x13e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013e710 size=912 callers=2 calls=2
   calls: sub_9a050, sub_a8030
*/
void sub_13e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e710ULL || rel >= 0x13eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013eaa0 size=5104 callers=1 calls=11
   calls: sub_13e5e0, sub_13e710, sub_35f0, sub_64060, sub_66d40, sub_679f0, sub_68ce0, sub_9bed0, sub_a7090, sub_a9df0, sub_e7820
*/
void sub_13eaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eaa0ULL || rel >= 0x13fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013fe90 size=144 callers=1 calls=1
   calls: sub_13d970
*/
void sub_13fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13fe90ULL || rel >= 0x13ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ff20 size=176 callers=1 calls=0
*/
void sub_13ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ff20ULL || rel >= 0x13ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0013ffd0 size=208 callers=1 calls=0
*/
void sub_13ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ffd0ULL || rel >= 0x1400a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001400a0 size=1248 callers=1 calls=5
   calls: sub_66a80, sub_66b60, sub_9a050, sub_9bed0, sub_a92d0
*/
void sub_1400a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1400a0ULL || rel >= 0x140580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00140580 size=1424 callers=2 calls=3
   calls: sub_126f00, sub_e7820, sub_e7a30
*/
void sub_140580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140580ULL || rel >= 0x140b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00140b10 size=1824 callers=2 calls=8
   calls: sub_9af80, sub_9b920, sub_a7110, sub_a7150, sub_a73d0, sub_a7940, sub_a8030, sub_a92d0
*/
void sub_140b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x140b10ULL || rel >= 0x141230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00141230 size=480 callers=2 calls=2
   calls: sub_140b10, sub_9bed0
*/
void sub_141230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141230ULL || rel >= 0x141410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00141410 size=448 callers=2 calls=4
   calls: sub_140b10, sub_141230, sub_55190, sub_9bed0
*/
void sub_141410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141410ULL || rel >= 0x1415d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001415d0 size=192 callers=2 calls=1
   calls: sub_9b3d0
*/
void sub_1415d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1415d0ULL || rel >= 0x141690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00141690 size=528 callers=1 calls=0
*/
void sub_141690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141690ULL || rel >= 0x1418a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001418a0 size=272 callers=2 calls=2
   calls: sub_35320, sub_9b3d0
*/
void sub_1418a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1418a0ULL || rel >= 0x1419b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001419b0 size=1040 callers=2 calls=4
   calls: sub_126f00, sub_141690, sub_1418a0, sub_9b3d0
*/
void sub_1419b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1419b0ULL || rel >= 0x141dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00141dc0 size=368 callers=2 calls=3
   calls: sub_140580, sub_141230, sub_141410
*/
void sub_141dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141dc0ULL || rel >= 0x141f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00141f30 size=432 callers=4 calls=3
   calls: sub_141f30, sub_9bed0, sub_a8a50
*/
void sub_141f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x141f30ULL || rel >= 0x1420e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001420e0 size=864 callers=0 calls=3
   calls: sub_11a010, sub_141f30, sub_9a250
*/
void sub_1420e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1420e0ULL || rel >= 0x142440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142440 size=352 callers=1 calls=3
   calls: sub_141f30, sub_66d40, sub_9d320
*/
void sub_142440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142440ULL || rel >= 0x1425a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001425a0 size=1712 callers=1 calls=10
   calls: sub_16ecd0, sub_66d40, sub_9a600, sub_9adb0, sub_9b3e0, sub_9bed0, sub_9ca30, sub_a7800, sub_a7b70, sub_a92d0
*/
void sub_1425a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1425a0ULL || rel >= 0x142c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142c50 size=832 callers=2 calls=3
   calls: sub_61f80, sub_624d0, sub_e7a30
*/
void sub_142c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142c50ULL || rel >= 0x142f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00142f90 size=528 callers=1 calls=2
   calls: sub_61f80, sub_620d0
*/
void sub_142f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x142f90ULL || rel >= 0x1431a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001431a0 size=576 callers=2 calls=4
   calls: sub_9b3d0, sub_9b500, sub_9ca30, sub_e7a30
*/
void sub_1431a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1431a0ULL || rel >= 0x1433e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001433e0 size=528 callers=2 calls=3
   calls: sub_1435f0, sub_3b000, sub_e7a30
*/
void sub_1433e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1433e0ULL || rel >= 0x1435f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001435f0 size=240 callers=1 calls=3
   calls: sub_9b3d0, sub_9b500, sub_9ca30
*/
void sub_1435f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1435f0ULL || rel >= 0x1436e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001436e0 size=1056 callers=2 calls=5
   calls: sub_68260, sub_9b3d0, sub_9b500, sub_9ca30, sub_e7a30
*/
void sub_1436e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1436e0ULL || rel >= 0x143b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00143b00 size=352 callers=1 calls=1
   calls: sub_9d760
*/
void sub_143b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143b00ULL || rel >= 0x143c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00143c60 size=1104 callers=2 calls=4
   calls: sub_11e390, sub_66d40, sub_9b3d0, sub_e7a30
*/
void sub_143c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x143c60ULL || rel >= 0x1440b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001440b0 size=1424 callers=2 calls=8
   calls: sub_11e390, sub_143b00, sub_143c60, sub_66d40, sub_9b3d0, sub_9b3e0, sub_9bed0, sub_a92d0
*/
void sub_1440b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1440b0ULL || rel >= 0x144640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144640 size=912 callers=2 calls=2
   calls: sub_9a740, sub_e7a30
*/
void sub_144640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144640ULL || rel >= 0x1449d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001449d0 size=336 callers=1 calls=3
   calls: sub_144b20, sub_91bc0, sub_92590
*/
void sub_1449d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1449d0ULL || rel >= 0x144b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144b20 size=512 callers=1 calls=6
   calls: sub_144d20, sub_9a050, sub_9bed0, sub_9ca30, sub_a70d0, sub_a92d0
*/
void sub_144b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144b20ULL || rel >= 0x144d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144d20 size=512 callers=1 calls=2
   calls: sub_9ca30, sub_a70d0
*/
void sub_144d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144d20ULL || rel >= 0x144f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00144f20 size=304 callers=2 calls=3
   calls: sub_144f20, sub_91bc0, sub_92590
*/
void sub_144f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x144f20ULL || rel >= 0x145050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145050 size=192 callers=1 calls=3
   calls: sub_144640, sub_38b0, sub_92590
*/
void sub_145050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145050ULL || rel >= 0x145110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145110 size=400 callers=1 calls=0
*/
void sub_145110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145110ULL || rel >= 0x1452a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001452a0 size=720 callers=1 calls=6
   calls: sub_144640, sub_144f20, sub_145110, sub_38b0, sub_91bc0, sub_92590
*/
void sub_1452a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1452a0ULL || rel >= 0x145570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145570 size=480 callers=1 calls=1
   calls: sub_1449d0
*/
void sub_145570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145570ULL || rel >= 0x145750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00145750 size=8384 callers=0 calls=74
   calls: sub_101c80, sub_1285b0, sub_129500, sub_129650, sub_1297d0, sub_12ca90, sub_12d3f0, sub_12ef20, sub_12f590, sub_133e30, sub_134fd0, sub_13a000
   ... +62 more
*/
void sub_145750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x145750ULL || rel >= 0x147810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147810 size=704 callers=2 calls=5
   calls: sub_9b3d0, sub_9b3e0, sub_9bed0, sub_a8170, sub_aa750
*/
void sub_147810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147810ULL || rel >= 0x147ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147ad0 size=320 callers=2 calls=3
   calls: sub_9bed0, sub_9ca30, sub_a7850
*/
void sub_147ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147ad0ULL || rel >= 0x147c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147c10 size=832 callers=2 calls=9
   calls: sub_3afa0, sub_3b010, sub_3b040, sub_9b3d0, sub_9bed0, sub_9ca30, sub_9d430, sub_a7370, sub_e7a30
*/
void sub_147c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147c10ULL || rel >= 0x147f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00147f50 size=368 callers=3 calls=3
   calls: sub_9bed0, sub_9ca30, sub_a7850
*/
void sub_147f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x147f50ULL || rel >= 0x1480c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001480c0 size=528 callers=2 calls=6
   calls: sub_3af80, sub_3afa0, sub_9bed0, sub_9ca30, sub_9d2f0, sub_a7df0
*/
void sub_1480c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1480c0ULL || rel >= 0x1482d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001482d0 size=560 callers=2 calls=8
   calls: sub_3afa0, sub_3afc0, sub_9b3e0, sub_9bed0, sub_9ca30, sub_9d2f0, sub_9d420, sub_a8080
*/
void sub_1482d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1482d0ULL || rel >= 0x148500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148500 size=864 callers=1 calls=7
   calls: sub_3af80, sub_9b3d0, sub_9bed0, sub_9ca30, sub_9d2f0, sub_a7370, sub_e7a30
*/
void sub_148500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148500ULL || rel >= 0x148860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148860 size=1696 callers=1 calls=9
   calls: sub_148f00, sub_69350, sub_9b3d0, sub_9bed0, sub_a70d0, sub_a7110, sub_a8030, sub_a8210, sub_e7a30
*/
void sub_148860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148860ULL || rel >= 0x148f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00148f00 size=304 callers=3 calls=2
   calls: sub_69350, sub_9b3d0
*/
void sub_148f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x148f00ULL || rel >= 0x149030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149030 size=432 callers=2 calls=1
   calls: sub_9b3d0
*/
void sub_149030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149030ULL || rel >= 0x1491e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001491e0 size=304 callers=1 calls=1
   calls: sub_38b0
*/
void sub_1491e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1491e0ULL || rel >= 0x149310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149310 size=800 callers=2 calls=3
   calls: sub_65420, sub_9bed0, sub_a92d0
*/
void sub_149310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149310ULL || rel >= 0x149630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149630 size=352 callers=1 calls=3
   calls: sub_149030, sub_1491e0, sub_149310
*/
void sub_149630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149630ULL || rel >= 0x149790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149790 size=1200 callers=1 calls=8
   calls: sub_149c40, sub_35320, sub_3b0a0, sub_62240, sub_9bed0, sub_a8030, sub_a92d0, sub_e7a30
*/
void sub_149790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149790ULL || rel >= 0x149c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149c40 size=592 callers=1 calls=1
   calls: sub_1531d0
*/
void sub_149c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149c40ULL || rel >= 0x149e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00149e90 size=768 callers=1 calls=0
*/
void sub_149e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x149e90ULL || rel >= 0x14a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a190 size=912 callers=1 calls=10
   calls: sub_148f00, sub_149e90, sub_86e00, sub_88b40, sub_8c830, sub_9b3e0, sub_9bed0, sub_a7090, sub_a9800, sub_a98f0
*/
void sub_14a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a190ULL || rel >= 0x14a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014a520 size=4032 callers=0 calls=28
   calls: sub_12f590, sub_134830, sub_148860, sub_149630, sub_149790, sub_14a190, sub_1530e0, sub_3550, sub_38b0, sub_64060, sub_68ce0, sub_68db0
   ... +16 more
*/
void sub_14a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14a520ULL || rel >= 0x14b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b4e0 size=160 callers=0 calls=2
   calls: sub_147f50, sub_b8aa0
*/
void sub_14b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b4e0ULL || rel >= 0x14b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b580 size=448 callers=1 calls=0
*/
void sub_14b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b580ULL || rel >= 0x14b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b740 size=544 callers=1 calls=0
*/
void sub_14b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b740ULL || rel >= 0x14b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014b960 size=176 callers=3 calls=0
*/
void sub_14b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14b960ULL || rel >= 0x14ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014ba10 size=512 callers=10 calls=1
   calls: sub_14b960
*/
void sub_14ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ba10ULL || rel >= 0x14bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014bc10 size=1536 callers=0 calls=4
   calls: sub_14b740, sub_14ba10, sub_3550, sub_38d0
*/
void sub_14bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14bc10ULL || rel >= 0x14c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c210 size=576 callers=0 calls=2
   calls: sub_12a3b0, sub_162a10
*/
void sub_14c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c210ULL || rel >= 0x14c450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c450 size=96 callers=0 calls=0
*/
void sub_14c450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c450ULL || rel >= 0x14c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c4b0 size=1264 callers=0 calls=5
   calls: sub_11e4f0, sub_63610, sub_63640, sub_9bed0, sub_c2020
*/
void sub_14c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c4b0ULL || rel >= 0x14c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014c9a0 size=128 callers=0 calls=3
   calls: sub_1f59f0, sub_1f7ef0, sub_3550
*/
void sub_14c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14c9a0ULL || rel >= 0x14ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014ca20 size=96 callers=0 calls=3
   calls: sub_1f59f0, sub_1f7110, sub_3550
*/
void sub_14ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ca20ULL || rel >= 0x14ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014ca80 size=96 callers=1 calls=3
   calls: sub_1f59f0, sub_1f80f0, sub_3550
*/
void sub_14ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ca80ULL || rel >= 0x14cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014cae0 size=288 callers=2 calls=1
   calls: sub_a7110
*/
void sub_14cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cae0ULL || rel >= 0x14cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014cc00 size=384 callers=2 calls=5
   calls: sub_11ec10, sub_66820, sub_9bed0, sub_9c1c0, sub_a92d0
*/
void sub_14cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cc00ULL || rel >= 0x14cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014cd80 size=752 callers=2 calls=4
   calls: sub_11ec10, sub_14cc00, sub_9bed0, sub_a92d0
*/
void sub_14cd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14cd80ULL || rel >= 0x14d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d070 size=896 callers=3 calls=5
   calls: sub_14cc00, sub_14cd80, sub_3d210, sub_88b40, sub_a9a30
*/
void sub_14d070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d070ULL || rel >= 0x14d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d3f0 size=512 callers=2 calls=2
   calls: sub_88b40, sub_9a740
*/
void sub_14d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d3f0ULL || rel >= 0x14d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d5f0 size=48 callers=0 calls=0
*/
void sub_14d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d5f0ULL || rel >= 0x14d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d620 size=64 callers=0 calls=0
*/
void sub_14d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d620ULL || rel >= 0x14d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d660 size=16 callers=0 calls=0
*/
void sub_14d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d660ULL || rel >= 0x14d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d670 size=128 callers=0 calls=0
*/
void sub_14d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d670ULL || rel >= 0x14d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d6f0 size=640 callers=0 calls=11
   calls: sub_117930, sub_14cae0, sub_14d070, sub_14d3f0, sub_1f59f0, sub_1f5a10, sub_3550, sub_66820, sub_8c550, sub_b7e20, sub_c0270
*/
void sub_14d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d6f0ULL || rel >= 0x14d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014d970 size=1440 callers=2 calls=2
   calls: sub_66cd0, sub_9b3d0
*/
void sub_14d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14d970ULL || rel >= 0x14df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014df10 size=368 callers=1 calls=3
   calls: sub_9a050, sub_a7800, sub_a86a0
*/
void sub_14df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14df10ULL || rel >= 0x14e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014e080 size=368 callers=4 calls=6
   calls: sub_14df10, sub_63610, sub_63640, sub_63c30, sub_9bed0, sub_a95d0
*/
void sub_14e080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e080ULL || rel >= 0x14e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014e1f0 size=1920 callers=0 calls=19
   calls: sub_14e080, sub_14e970, sub_63c30, sub_8f0c0, sub_9a050, sub_9b3e0, sub_9ba20, sub_a7150, sub_a73d0, sub_a7800, sub_a7850, sub_a7890
   ... +7 more
*/
void sub_14e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1f0ULL || rel >= 0x14e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014e970 size=592 callers=2 calls=8
   calls: sub_14f220, sub_620d0, sub_9a050, sub_9b3e0, sub_a7890, sub_a8030, sub_a81c0, sub_a92e0
*/
void sub_14e970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e970ULL || rel >= 0x14ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014ebc0 size=528 callers=2 calls=8
   calls: sub_14e080, sub_63c30, sub_9a050, sub_9b3e0, sub_a7150, sub_a7850, sub_a80d0, sub_a92e0
*/
void sub_14ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ebc0ULL || rel >= 0x14edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014edd0 size=1104 callers=0 calls=9
   calls: sub_14e080, sub_9a050, sub_9b3e0, sub_a7090, sub_a70d0, sub_a7150, sub_a7850, sub_a80d0, sub_a92e0
*/
void sub_14edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14edd0ULL || rel >= 0x14f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f220 size=304 callers=1 calls=4
   calls: sub_a6e70, sub_a82d0, sub_a9a30, sub_a9df0
*/
void sub_14f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f220ULL || rel >= 0x14f350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f350 size=240 callers=2 calls=3
   calls: sub_9b3e0, sub_a80d0, sub_a81c0
*/
void sub_14f350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f350ULL || rel >= 0x14f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f440 size=1168 callers=0 calls=10
   calls: sub_14e080, sub_9a050, sub_9b3e0, sub_a70d0, sub_a7150, sub_a7890, sub_a80d0, sub_a92d0, sub_a9340, sub_a9900
*/
void sub_14f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f440ULL || rel >= 0x14f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0014f8d0 size=2368 callers=1 calls=10
   calls: sub_14d970, sub_14e970, sub_14ebc0, sub_14f350, sub_63610, sub_63640, sub_63c30, sub_88b40, sub_8aa10, sub_8f0c0
*/
void sub_14f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f8d0ULL || rel >= 0x150210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150210 size=272 callers=0 calls=5
   calls: sub_14f8d0, sub_86e00, sub_b7e20, sub_b89a0, sub_b8aa0
*/
void sub_150210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150210ULL || rel >= 0x150320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00150320 size=928 callers=1 calls=13
   calls: sub_9adb0, sub_9ae80, sub_9b3e0, sub_9b4d0, sub_9d420, sub_a70d0, sub_a7150, sub_a7800, sub_a7890, sub_a8030, sub_a80d0, sub_a81c0
   ... +1 more
*/
void sub_150320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x150320ULL || rel >= 0x1506c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001506c0 size=2416 callers=0 calls=17
   calls: sub_150320, sub_3ce70, sub_3d090, sub_3d2f0, sub_3d570, sub_3d960, sub_3da60, sub_3db80, sub_66820, sub_88b40, sub_8aa10, sub_8c830
   ... +5 more
*/
void sub_1506c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1506c0ULL || rel >= 0x151030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151030 size=176 callers=2 calls=3
   calls: sub_9b3e0, sub_a6e70, sub_a8170
*/
void sub_151030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151030ULL || rel >= 0x1510e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001510e0 size=288 callers=0 calls=3
   calls: sub_9b3e0, sub_a6e70, sub_a8170
*/
void sub_1510e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1510e0ULL || rel >= 0x151200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151200 size=192 callers=0 calls=2
   calls: sub_1789d0, sub_a92d0
*/
void sub_151200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151200ULL || rel >= 0x1512c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001512c0 size=96 callers=0 calls=0
*/
void sub_1512c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1512c0ULL || rel >= 0x151320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151320 size=640 callers=0 calls=4
   calls: sub_1789d0, sub_68110, sub_a7050, sub_a9a30
*/
void sub_151320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151320ULL || rel >= 0x1515a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001515a0 size=1168 callers=0 calls=9
   calls: sub_11d890, sub_63670, sub_64060, sub_9a740, sub_9b3d0, sub_9bed0, sub_b7e20, sub_b89a0, sub_b8aa0
*/
void sub_1515a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1515a0ULL || rel >= 0x151a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151a30 size=128 callers=0 calls=2
   calls: sub_12f9e0, sub_b8aa0
*/
void sub_151a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151a30ULL || rel >= 0x151ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151ab0 size=96 callers=1 calls=1
   calls: sub_3cf40
*/
void sub_151ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ab0ULL || rel >= 0x151b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151b10 size=64 callers=0 calls=0
*/
void sub_151b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151b10ULL || rel >= 0x151b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151b50 size=16 callers=0 calls=0
*/
void sub_151b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151b50ULL || rel >= 0x151b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151b60 size=368 callers=0 calls=0
*/
void sub_151b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151b60ULL || rel >= 0x151cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151cd0 size=112 callers=0 calls=0
*/
void sub_151cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151cd0ULL || rel >= 0x151d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151d40 size=160 callers=0 calls=0
*/
void sub_151d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151d40ULL || rel >= 0x151de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151de0 size=128 callers=0 calls=0
*/
void sub_151de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151de0ULL || rel >= 0x151e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151e60 size=144 callers=0 calls=0
*/
void sub_151e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151e60ULL || rel >= 0x151ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151ef0 size=128 callers=0 calls=0
*/
void sub_151ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151ef0ULL || rel >= 0x151f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00151f70 size=304 callers=0 calls=1
   calls: sub_62a70
*/
void sub_151f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x151f70ULL || rel >= 0x1520a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001520a0 size=16 callers=0 calls=0
*/
void sub_1520a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520a0ULL || rel >= 0x1520b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001520b0 size=16 callers=0 calls=0
*/
void sub_1520b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520b0ULL || rel >= 0x1520c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001520c0 size=16 callers=0 calls=0
*/
void sub_1520c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520c0ULL || rel >= 0x1520d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001520d0 size=16 callers=0 calls=0
*/
void sub_1520d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520d0ULL || rel >= 0x1520e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001520e0 size=16 callers=0 calls=0
*/
void sub_1520e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520e0ULL || rel >= 0x1520f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001520f0 size=48 callers=0 calls=0
*/
void sub_1520f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1520f0ULL || rel >= 0x152120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152120 size=16 callers=0 calls=0
*/
void sub_152120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152120ULL || rel >= 0x152130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152130 size=208 callers=0 calls=0
*/
void sub_152130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152130ULL || rel >= 0x152200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152200 size=16 callers=0 calls=0
*/
void sub_152200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152200ULL || rel >= 0x152210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152210 size=64 callers=0 calls=0
*/
void sub_152210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152210ULL || rel >= 0x152250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152250 size=16 callers=0 calls=0
*/
void sub_152250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152250ULL || rel >= 0x152260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152260 size=16 callers=0 calls=0
*/
void sub_152260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152260ULL || rel >= 0x152270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152270 size=16 callers=0 calls=0
*/
void sub_152270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152270ULL || rel >= 0x152280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152280 size=16 callers=0 calls=0
*/
void sub_152280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152280ULL || rel >= 0x152290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152290 size=16 callers=0 calls=0
*/
void sub_152290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152290ULL || rel >= 0x1522a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001522a0 size=16 callers=0 calls=0
*/
void sub_1522a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522a0ULL || rel >= 0x1522b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001522b0 size=16 callers=0 calls=0
*/
void sub_1522b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522b0ULL || rel >= 0x1522c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001522c0 size=16 callers=0 calls=0
*/
void sub_1522c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522c0ULL || rel >= 0x1522d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001522d0 size=16 callers=0 calls=0
*/
void sub_1522d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522d0ULL || rel >= 0x1522e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001522e0 size=16 callers=0 calls=0
*/
void sub_1522e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522e0ULL || rel >= 0x1522f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001522f0 size=16 callers=0 calls=0
*/
void sub_1522f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1522f0ULL || rel >= 0x152300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152300 size=16 callers=0 calls=0
*/
void sub_152300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152300ULL || rel >= 0x152310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152310 size=16 callers=0 calls=0
*/
void sub_152310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152310ULL || rel >= 0x152320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152320 size=16 callers=0 calls=0
*/
void sub_152320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152320ULL || rel >= 0x152330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152330 size=16 callers=0 calls=0
*/
void sub_152330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152330ULL || rel >= 0x152340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152340 size=16 callers=0 calls=0
*/
void sub_152340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152340ULL || rel >= 0x152350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152350 size=16 callers=0 calls=0
*/
void sub_152350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152350ULL || rel >= 0x152360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152360 size=16 callers=0 calls=0
*/
void sub_152360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152360ULL || rel >= 0x152370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152370 size=16 callers=0 calls=0
*/
void sub_152370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152370ULL || rel >= 0x152380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152380 size=16 callers=0 calls=0
*/
void sub_152380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152380ULL || rel >= 0x152390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152390 size=16 callers=0 calls=0
*/
void sub_152390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152390ULL || rel >= 0x1523a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001523a0 size=16 callers=0 calls=0
*/
void sub_1523a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1523a0ULL || rel >= 0x1523b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001523b0 size=16 callers=0 calls=0
*/
void sub_1523b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1523b0ULL || rel >= 0x1523c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001523c0 size=16 callers=0 calls=0
*/
void sub_1523c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1523c0ULL || rel >= 0x1523d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001523d0 size=64 callers=0 calls=0
*/
void sub_1523d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1523d0ULL || rel >= 0x152410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152410 size=48 callers=0 calls=0
*/
void sub_152410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152410ULL || rel >= 0x152440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152440 size=16 callers=0 calls=0
*/
void sub_152440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152440ULL || rel >= 0x152450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152450 size=16 callers=0 calls=0
*/
void sub_152450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152450ULL || rel >= 0x152460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152460 size=80 callers=0 calls=0
*/
void sub_152460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152460ULL || rel >= 0x1524b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001524b0 size=80 callers=0 calls=0
*/
void sub_1524b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1524b0ULL || rel >= 0x152500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152500 size=128 callers=0 calls=0
*/
void sub_152500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152500ULL || rel >= 0x152580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152580 size=128 callers=0 calls=0
*/
void sub_152580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152580ULL || rel >= 0x152600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152600 size=16 callers=0 calls=0
*/
void sub_152600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152600ULL || rel >= 0x152610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152610 size=64 callers=0 calls=0
*/
void sub_152610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152610ULL || rel >= 0x152650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152650 size=16 callers=0 calls=0
*/
void sub_152650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152650ULL || rel >= 0x152660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152660 size=48 callers=0 calls=0
*/
void sub_152660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152660ULL || rel >= 0x152690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152690 size=80 callers=0 calls=0
*/
void sub_152690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152690ULL || rel >= 0x1526e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001526e0 size=160 callers=0 calls=0
*/
void sub_1526e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1526e0ULL || rel >= 0x152780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152780 size=160 callers=0 calls=0
*/
void sub_152780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152780ULL || rel >= 0x152820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152820 size=368 callers=18 calls=3
   calls: sub_62050, sub_9b3d0, sub_9b500
*/
void sub_152820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152820ULL || rel >= 0x152990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152990 size=320 callers=2 calls=0
*/
void sub_152990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152990ULL || rel >= 0x152ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152ad0 size=384 callers=0 calls=2
   calls: sub_152990, sub_9b3d0
*/
void sub_152ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152ad0ULL || rel >= 0x152c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152c50 size=208 callers=2 calls=3
   calls: sub_9a050, sub_a7890, sub_a92d0
*/
void sub_152c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152c50ULL || rel >= 0x152d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152d20 size=64 callers=0 calls=0
*/
void sub_152d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152d20ULL || rel >= 0x152d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152d60 size=48 callers=0 calls=0
*/
void sub_152d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152d60ULL || rel >= 0x152d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152d90 size=16 callers=0 calls=0
*/
void sub_152d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152d90ULL || rel >= 0x152da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152da0 size=64 callers=0 calls=0
*/
void sub_152da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152da0ULL || rel >= 0x152de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152de0 size=96 callers=0 calls=0
*/
void sub_152de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152de0ULL || rel >= 0x152e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152e40 size=80 callers=0 calls=0
*/
void sub_152e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152e40ULL || rel >= 0x152e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152e90 size=64 callers=0 calls=0
*/
void sub_152e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152e90ULL || rel >= 0x152ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152ed0 size=96 callers=0 calls=0
*/
void sub_152ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152ed0ULL || rel >= 0x152f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152f30 size=176 callers=0 calls=0
*/
void sub_152f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152f30ULL || rel >= 0x152fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00152fe0 size=192 callers=0 calls=0
*/
void sub_152fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x152fe0ULL || rel >= 0x1530a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001530a0 size=64 callers=0 calls=0
*/
void sub_1530a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530a0ULL || rel >= 0x1530e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001530e0 size=240 callers=2 calls=1
   calls: sub_69540
*/
void sub_1530e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1530e0ULL || rel >= 0x1531d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001531d0 size=624 callers=1 calls=0
*/
void sub_1531d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1531d0ULL || rel >= 0x153440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00153440 size=64 callers=1 calls=1
   calls: sub_6fb70
*/
void sub_153440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153440ULL || rel >= 0x153480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00153480 size=48 callers=0 calls=0
*/
void sub_153480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153480ULL || rel >= 0x1534b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001534b0 size=640 callers=4 calls=1
   calls: sub_153730
*/
void sub_1534b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1534b0ULL || rel >= 0x153730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00153730 size=304 callers=3 calls=0
*/
void sub_153730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153730ULL || rel >= 0x153860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00153860 size=288 callers=1 calls=5
   calls: sub_1534b0, sub_701e0, sub_703f0, sub_70570, sub_a92d0
*/
void sub_153860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153860ULL || rel >= 0x153980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00153980 size=384 callers=1 calls=8
   calls: sub_151030, sub_1534b0, sub_6fc10, sub_701e0, sub_703f0, sub_70570, sub_9a1e0, sub_a92d0
*/
void sub_153980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153980ULL || rel >= 0x153b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00153b00 size=384 callers=1 calls=6
   calls: sub_1534b0, sub_6fc10, sub_701e0, sub_703f0, sub_a70d0, sub_a92d0
*/
void sub_153b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153b00ULL || rel >= 0x153c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00153c80 size=608 callers=1 calls=9
   calls: sub_151030, sub_1534b0, sub_153730, sub_6fc10, sub_701e0, sub_703f0, sub_70570, sub_9a1e0, sub_a92d0
*/
void sub_153c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153c80ULL || rel >= 0x153ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00153ee0 size=432 callers=1 calls=6
   calls: sub_3b000, sub_703f0, sub_754c0, sub_9b3e0, sub_a7b70, sub_a8030
*/
void sub_153ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x153ee0ULL || rel >= 0x154090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00154090 size=480 callers=0 calls=5
   calls: sub_1189d0, sub_2060, sub_3fa0, sub_70a60, sub_f080
   ref: Constant register limit exceeded; more than %d constant registers needed to compile program
*/
void Constant_register_limit_exceeded_more_than_d_constant_re(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154090ULL || rel >= 0x154270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00154270 size=208 callers=0 calls=1
   calls: sub_9b1a0
*/
void sub_154270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154270ULL || rel >= 0x154340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00154340 size=272 callers=4 calls=2
   calls: sub_153ee0, sub_703f0
*/
void sub_154340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154340ULL || rel >= 0x154450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00154450 size=288 callers=1 calls=5
   calls: sub_9b3e0, sub_9b920, sub_a7370, sub_a7800, sub_a8030
*/
void sub_154450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154450ULL || rel >= 0x154570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00154570 size=416 callers=1 calls=5
   calls: sub_154450, sub_9b3e0, sub_a7150, sub_a7800, sub_a8030
*/
void sub_154570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154570ULL || rel >= 0x154710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00154710 size=384 callers=1 calls=3
   calls: sub_11cf60, sub_154570, sub_a92d0
*/
void sub_154710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154710ULL || rel >= 0x154890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00154890 size=80 callers=0 calls=0
*/
void sub_154890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154890ULL || rel >= 0x1548e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001548e0 size=16 callers=0 calls=0
*/
void sub_1548e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548e0ULL || rel >= 0x1548f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001548f0 size=16 callers=0 calls=0
*/
void sub_1548f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1548f0ULL || rel >= 0x154900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00154900 size=80 callers=0 calls=0
*/
void sub_154900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154900ULL || rel >= 0x154950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00154950 size=3424 callers=0 calls=16
   calls: sub_11cb80, sub_11cb90, sub_11cbc0, sub_11cc10, sub_153730, sub_154340, sub_154710, sub_701e0, sub_703f0, sub_72630, sub_9a1e0, sub_9b3d0
   ... +4 more
*/
void sub_154950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x154950ULL || rel >= 0x1556b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001556b0 size=128 callers=0 calls=3
   calls: sub_3af50, sub_6fc10, sub_6fc30
*/
void sub_1556b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1556b0ULL || rel >= 0x155730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00155730 size=80 callers=0 calls=1
   calls: sub_3af50
*/
void sub_155730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155730ULL || rel >= 0x155780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00155780 size=112 callers=0 calls=0
*/
void sub_155780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155780ULL || rel >= 0x1557f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001557f0 size=112 callers=0 calls=0
*/
void sub_1557f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1557f0ULL || rel >= 0x155860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00155860 size=48 callers=0 calls=0
*/
void sub_155860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155860ULL || rel >= 0x155890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00155890 size=16 callers=0 calls=0
*/
void sub_155890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155890ULL || rel >= 0x1558a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001558a0 size=16 callers=0 calls=0
*/
void sub_1558a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1558a0ULL || rel >= 0x1558b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001558b0 size=80 callers=0 calls=0
*/
void sub_1558b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1558b0ULL || rel >= 0x155900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00155900 size=48 callers=0 calls=0
*/
void sub_155900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155900ULL || rel >= 0x155930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00155930 size=16 callers=0 calls=0
*/
void sub_155930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155930ULL || rel >= 0x155940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00155940 size=64 callers=0 calls=0
*/
void sub_155940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155940ULL || rel >= 0x155980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00155980 size=48 callers=0 calls=0
*/
void sub_155980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155980ULL || rel >= 0x1559b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001559b0 size=624 callers=0 calls=5
   calls: sub_13dcf0, sub_9a050, sub_a7800, sub_a7890, sub_a92d0
*/
void sub_1559b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1559b0ULL || rel >= 0x155c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00155c20 size=272 callers=1 calls=3
   calls: sub_703f0, sub_70570, sub_a92d0
*/
void sub_155c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155c20ULL || rel >= 0x155d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00155d30 size=992 callers=1 calls=3
   calls: sub_703f0, sub_70570, sub_a92d0
*/
void sub_155d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x155d30ULL || rel >= 0x156110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00156110 size=256 callers=1 calls=3
   calls: sub_703f0, sub_70570, sub_a92d0
*/
void sub_156110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156110ULL || rel >= 0x156210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00156210 size=12064 callers=0 calls=39
   calls: sub_11d0c0, sub_11d2e0, sub_123690, sub_1236d0, sub_153860, sub_153980, sub_153b00, sub_153c80, sub_155c20, sub_155d30, sub_156110, sub_310a0
   ... +27 more
*/
void sub_156210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x156210ULL || rel >= 0x159130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159130 size=64 callers=1 calls=0
*/
void sub_159130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159130ULL || rel >= 0x159170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159170 size=128 callers=1 calls=0
*/
void sub_159170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159170ULL || rel >= 0x1591f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001591f0 size=144 callers=1 calls=0
*/
void sub_1591f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1591f0ULL || rel >= 0x159280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159280 size=144 callers=1 calls=0
*/
void sub_159280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159280ULL || rel >= 0x159310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159310 size=96 callers=1 calls=0
*/
void sub_159310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159310ULL || rel >= 0x159370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159370 size=16 callers=0 calls=0
*/
void sub_159370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159370ULL || rel >= 0x159380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159380 size=2064 callers=0 calls=22
   calls: sub_11d2e0, sub_126f00, sub_159170, sub_1591f0, sub_159280, sub_61f10, sub_66a80, sub_66b60, sub_66cd0, sub_9a050, sub_9af80, sub_9b3e0
   ... +10 more
*/
void sub_159380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159380ULL || rel >= 0x159b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159b90 size=16 callers=0 calls=0
*/
void sub_159b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159b90ULL || rel >= 0x159ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159ba0 size=16 callers=0 calls=0
*/
void sub_159ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159ba0ULL || rel >= 0x159bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159bb0 size=16 callers=0 calls=0
*/
void sub_159bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159bb0ULL || rel >= 0x159bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159bc0 size=16 callers=0 calls=0
*/
void sub_159bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159bc0ULL || rel >= 0x159bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159bd0 size=16 callers=0 calls=0
*/
void sub_159bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159bd0ULL || rel >= 0x159be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159be0 size=16 callers=0 calls=0
*/
void sub_159be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159be0ULL || rel >= 0x159bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159bf0 size=64 callers=0 calls=0
*/
void sub_159bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159bf0ULL || rel >= 0x159c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159c30 size=16 callers=0 calls=0
*/
void sub_159c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c30ULL || rel >= 0x159c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159c40 size=16 callers=0 calls=0
*/
void sub_159c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c40ULL || rel >= 0x159c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159c50 size=192 callers=1 calls=1
   calls: sub_a9a30
*/
void sub_159c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159c50ULL || rel >= 0x159d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159d10 size=560 callers=1 calls=6
   calls: sub_9b3d0, sub_9b3e0, sub_9d420, sub_a7090, sub_a7850, sub_a8080
*/
void sub_159d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159d10ULL || rel >= 0x159f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00159f40 size=304 callers=1 calls=3
   calls: sub_a7090, sub_a8080, sub_a82d0
*/
void sub_159f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x159f40ULL || rel >= 0x15a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015a070 size=464 callers=1 calls=6
   calls: sub_9b3e0, sub_9d420, sub_a7050, sub_a7090, sub_a7850, sub_a8080
*/
void sub_15a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a070ULL || rel >= 0x15a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015a240 size=800 callers=4 calls=6
   calls: sub_9b3e0, sub_9d420, sub_a7850, sub_a7890, sub_a8080, sub_a8170
*/
void sub_15a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a240ULL || rel >= 0x15a560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015a560 size=896 callers=1 calls=7
   calls: sub_15a240, sub_9b3e0, sub_9d420, sub_a7850, sub_a7890, sub_a8080, sub_a8170
*/
void sub_15a560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a560ULL || rel >= 0x15a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015a8e0 size=480 callers=1 calls=10
   calls: sub_159c50, sub_159d10, sub_159f40, sub_15a070, sub_15a560, sub_9bed0, sub_a7090, sub_a7890, sub_a8080, sub_a82d0
*/
void sub_15a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15a8e0ULL || rel >= 0x15aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015aac0 size=208 callers=0 calls=3
   calls: sub_9a050, sub_9b3e0, sub_a92e0
*/
void sub_15aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15aac0ULL || rel >= 0x15ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015ab90 size=304 callers=0 calls=1
   calls: sub_9a740
*/
void sub_15ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ab90ULL || rel >= 0x15acc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015acc0 size=1200 callers=1 calls=2
   calls: sub_688c0, sub_9d2f0
*/
void sub_15acc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15acc0ULL || rel >= 0x15b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015b170 size=240 callers=1 calls=0
*/
void sub_15b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b170ULL || rel >= 0x15b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015b260 size=384 callers=0 calls=4
   calls: sub_3b0a0, sub_620d0, sub_9a050, sub_a8080
*/
void sub_15b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b260ULL || rel >= 0x15b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015b3e0 size=192 callers=0 calls=1
   calls: sub_a7800
*/
void sub_15b3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b3e0ULL || rel >= 0x15b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015b4a0 size=6832 callers=0 calls=72
   calls: sub_116d70, sub_117470, sub_12a790, sub_15a8e0, sub_15acc0, sub_15b170, sub_15cf50, sub_15d420, sub_15d8f0, sub_164180, sub_1643d0, sub_1645b0
   ... +60 more
*/
void sub_15b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15b4a0ULL || rel >= 0x15cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015cf50 size=1232 callers=2 calls=15
   calls: sub_1643d0, sub_1645b0, sub_1647f0, sub_164a20, sub_164d00, sub_165000, sub_165250, sub_1655f0, sub_9a050, sub_9b3e0, sub_9bed0, sub_a7800
   ... +3 more
*/
void sub_15cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15cf50ULL || rel >= 0x15d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015d420 size=1232 callers=1 calls=15
   calls: sub_9adb0, sub_9ae80, sub_9b3e0, sub_a7090, sub_a70d0, sub_a7150, sub_a7800, sub_a7890, sub_a7a30, sub_a8030, sub_a80d0, sub_a81c0
   ... +3 more
*/
void sub_15d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d420ULL || rel >= 0x15d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015d8f0 size=2944 callers=1 calls=21
   calls: sub_68090, sub_9adb0, sub_9ae80, sub_9b3e0, sub_9b4d0, sub_9d420, sub_a7090, sub_a70d0, sub_a7110, sub_a7150, sub_a7800, sub_a7890
   ... +9 more
*/
void sub_15d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15d8f0ULL || rel >= 0x15e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015e470 size=288 callers=1 calls=3
   calls: sub_3af80, sub_9bed0, sub_a92d0
*/
void sub_15e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e470ULL || rel >= 0x15e590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015e590 size=608 callers=0 calls=8
   calls: sub_9b3e0, sub_9bed0, sub_a7090, sub_a7150, sub_a7850, sub_a7a30, sub_a8030, sub_a8110
*/
void sub_15e590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e590ULL || rel >= 0x15e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015e7f0 size=1008 callers=1 calls=12
   calls: sub_15ebe0, sub_61f80, sub_62240, sub_66f90, sub_9b4d0, sub_9bed0, sub_a7050, sub_a7800, sub_a8030, sub_a82d0, sub_a86a0, sub_a9a30
*/
void sub_15e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15e7f0ULL || rel >= 0x15ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015ebe0 size=1440 callers=2 calls=12
   calls: sub_61f80, sub_62240, sub_9b4d0, sub_9bed0, sub_9ca30, sub_a7090, sub_a7800, sub_a8030, sub_a82d0, sub_a86a0, sub_a8780, sub_a9a30
*/
void sub_15ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ebe0ULL || rel >= 0x15f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015f180 size=2896 callers=0 calls=22
   calls: sub_11cc10, sub_129100, sub_14ca80, sub_15e470, sub_15e7f0, sub_15ebe0, sub_3af50, sub_636f0, sub_67010, sub_9a050, sub_9b3e0, sub_9bed0
   ... +10 more
*/
void sub_15f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15f180ULL || rel >= 0x15fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015fcd0 size=272 callers=1 calls=4
   calls: sub_64060, sub_66820, sub_68ce0, sub_68db0
*/
void sub_15fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fcd0ULL || rel >= 0x15fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015fde0 size=416 callers=0 calls=3
   calls: sub_86310, sub_9bed0, sub_a7090
*/
void sub_15fde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15fde0ULL || rel >= 0x15ff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0015ff80 size=3904 callers=1 calls=19
   calls: sub_1178d0, sub_11ffe0, sub_126e30, sub_1659f0, sub_3550, sub_3af50, sub_66820, sub_67c70, sub_697e0, sub_69900, sub_86110, sub_86310
   ... +7 more
*/
void sub_15ff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x15ff80ULL || rel >= 0x160ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00160ec0 size=176 callers=5 calls=1
   calls: sub_9b120
*/
void sub_160ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160ec0ULL || rel >= 0x160f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00160f70 size=240 callers=3 calls=2
   calls: sub_67010, sub_a70d0
*/
void sub_160f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x160f70ULL || rel >= 0x161060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00161060 size=608 callers=0 calls=9
   calls: sub_12a620, sub_159310, sub_620d0, sub_9af80, sub_a7110, sub_a7890, sub_a7a30, sub_a8030, sub_a80d0
*/
void sub_161060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x161060ULL || rel >= 0x1612c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001612c0 size=304 callers=2 calls=2
   calls: sub_9b0a0, sub_a7a30
*/
void sub_1612c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1612c0ULL || rel >= 0x1613f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001613f0 size=928 callers=0 calls=9
   calls: sub_160f70, sub_1612c0, sub_9b120, sub_a6e70, sub_a7050, sub_a8320, sub_a9900, sub_a9a30, sub_a9df0
*/
void sub_1613f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1613f0ULL || rel >= 0x161790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00161790 size=752 callers=0 calls=5
   calls: sub_9b3e0, sub_9d420, sub_a73d0, sub_a7800, sub_a8080
*/
void sub_161790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x161790ULL || rel >= 0x161a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00161a80 size=816 callers=0 calls=12
   calls: sub_3af50, sub_3b040, sub_66bc0, sub_9a050, sub_9bed0, sub_a7050, sub_a7090, sub_a8030, sub_a82d0, sub_a8490, sub_a86a0, sub_a9a30
*/
void sub_161a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x161a80ULL || rel >= 0x161db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00161db0 size=800 callers=0 calls=12
   calls: sub_3af50, sub_3b040, sub_66bc0, sub_9a050, sub_9bed0, sub_a7090, sub_a70d0, sub_a8030, sub_a82d0, sub_a8490, sub_a86a0, sub_a9a30
*/
void sub_161db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x161db0ULL || rel >= 0x1620d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001620d0 size=2352 callers=0 calls=18
   calls: sub_160f70, sub_3b000, sub_620d0, sub_9a050, sub_9bed0, sub_a7090, sub_a7110, sub_a7150, sub_a7850, sub_a7a30, sub_a7cb0, sub_a8080
   ... +6 more
*/
void sub_1620d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1620d0ULL || rel >= 0x162a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00162a00 size=16 callers=0 calls=0
*/
void sub_162a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162a00ULL || rel >= 0x162a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00162a10 size=48 callers=1 calls=0
*/
void sub_162a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162a10ULL || rel >= 0x162a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00162a40 size=16 callers=1 calls=0
*/
void sub_162a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162a40ULL || rel >= 0x162a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00162a50 size=48 callers=2 calls=0
*/
void sub_162a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162a50ULL || rel >= 0x162a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00162a80 size=80 callers=1 calls=0
*/
void sub_162a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162a80ULL || rel >= 0x162ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00162ad0 size=48 callers=1 calls=0
*/
void sub_162ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162ad0ULL || rel >= 0x162b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00162b00 size=3184 callers=0 calls=14
   calls: sub_122430, sub_163770, sub_163930, sub_35320, sub_3af50, sub_3b0a0, sub_3b0c0, sub_620d0, sub_9a050, sub_a7800, sub_a8030, sub_a8210
   ... +2 more
*/
void sub_162b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x162b00ULL || rel >= 0x163770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00163770 size=448 callers=1 calls=6
   calls: sub_35320, sub_3b0a0, sub_620d0, sub_9b3e0, sub_9c950, sub_a8030
*/
void sub_163770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163770ULL || rel >= 0x163930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00163930 size=592 callers=14 calls=6
   calls: sub_163930, sub_9a050, sub_9b3e0, sub_9ba20, sub_9c410, sub_a70d0
*/
void sub_163930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163930ULL || rel >= 0x163b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00163b80 size=896 callers=1 calls=5
   calls: sub_1284c0, sub_163930, sub_9bed0, sub_a5f80, sub_a7090
*/
void sub_163b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163b80ULL || rel >= 0x163f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00163f00 size=640 callers=0 calls=5
   calls: sub_68960, sub_9a050, sub_9b4d0, sub_a7850, sub_a8080
*/
void sub_163f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x163f00ULL || rel >= 0x164180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00164180 size=592 callers=29 calls=5
   calls: sub_16ecd0, sub_66d40, sub_9adb0, sub_9b0a0, sub_a85c0
*/
void sub_164180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164180ULL || rel >= 0x1643d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001643d0 size=480 callers=3 calls=5
   calls: sub_164180, sub_9a050, sub_a70d0, sub_a8030, sub_a92d0
*/
void sub_1643d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1643d0ULL || rel >= 0x1645b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001645b0 size=576 callers=4 calls=6
   calls: sub_164180, sub_9a050, sub_9b3e0, sub_a7800, sub_a8030, sub_a92d0
*/
void sub_1645b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1645b0ULL || rel >= 0x1647f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001647f0 size=560 callers=3 calls=5
   calls: sub_164180, sub_1645b0, sub_9a050, sub_a7800, sub_a92d0
*/
void sub_1647f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1647f0ULL || rel >= 0x164a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00164a20 size=736 callers=4 calls=4
   calls: sub_164180, sub_9a050, sub_a8030, sub_a92d0
*/
void sub_164a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164a20ULL || rel >= 0x164d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00164d00 size=768 callers=3 calls=4
   calls: sub_164180, sub_9a050, sub_a8030, sub_a92d0
*/
void sub_164d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x164d00ULL || rel >= 0x165000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00165000 size=592 callers=3 calls=6
   calls: sub_164180, sub_164a20, sub_9a050, sub_a70d0, sub_a7800, sub_a92d0
*/
void sub_165000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165000ULL || rel >= 0x165250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00165250 size=928 callers=3 calls=4
   calls: sub_164180, sub_9a050, sub_a8030, sub_a92d0
*/
void sub_165250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165250ULL || rel >= 0x1655f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001655f0 size=1024 callers=2 calls=8
   calls: sub_164180, sub_9a050, sub_9b3e0, sub_a8110, sub_a8210, sub_a82d0, sub_a92d0, sub_a9a30
*/
void sub_1655f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1655f0ULL || rel >= 0x1659f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001659f0 size=320 callers=2 calls=4
   calls: sub_9b3e0, sub_a8170, sub_a9560, sub_aa750
*/
void sub_1659f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1659f0ULL || rel >= 0x165b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00165b30 size=32 callers=0 calls=0
*/
void sub_165b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b30ULL || rel >= 0x165b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00165b50 size=112 callers=0 calls=0
*/
void sub_165b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165b50ULL || rel >= 0x165bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00165bc0 size=2208 callers=0 calls=12
   calls: sub_166460, sub_9a710, sub_9ab10, sub_9b3e0, sub_9bed0, sub_9ca30, sub_a7090, sub_a7110, sub_a7150, sub_a7800, sub_a7850, sub_a8080
*/
void sub_165bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x165bc0ULL || rel >= 0x166460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00166460 size=224 callers=3 calls=2
   calls: sub_9b3d0, sub_a7800
*/
void sub_166460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166460ULL || rel >= 0x166540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00166540 size=48 callers=0 calls=0
*/
void sub_166540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166540ULL || rel >= 0x166570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00166570 size=48 callers=0 calls=0
*/
void sub_166570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166570ULL || rel >= 0x1665a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001665a0 size=256 callers=0 calls=1
   calls: sub_14b580
*/
void sub_1665a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1665a0ULL || rel >= 0x1666a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001666a0 size=80 callers=0 calls=0
*/
void sub_1666a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1666a0ULL || rel >= 0x1666f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001666f0 size=272 callers=1 calls=1
   calls: sub_9b3d0
*/
void sub_1666f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1666f0ULL || rel >= 0x166800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00166800 size=960 callers=0 calls=8
   calls: sub_1666f0, sub_166bc0, sub_66820, sub_68ce0, sub_9bed0, sub_a8080, sub_a92d0, sub_b8aa0
*/
void sub_166800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166800ULL || rel >= 0x166bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00166bc0 size=400 callers=1 calls=6
   calls: sub_166eb0, sub_3ce70, sub_9a050, sub_9b3e0, sub_a7800, sub_a8030
*/
void sub_166bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166bc0ULL || rel >= 0x166d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00166d50 size=352 callers=1 calls=2
   calls: sub_3d090, sub_88b40
*/
void sub_166d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166d50ULL || rel >= 0x166eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00166eb0 size=272 callers=1 calls=8
   calls: sub_166d50, sub_3ce70, sub_3ceb0, sub_3cf60, sub_3d2f0, sub_3d960, sub_3db80, sub_8aa10
*/
void sub_166eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166eb0ULL || rel >= 0x166fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00166fc0 size=16 callers=0 calls=0
*/
void sub_166fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166fc0ULL || rel >= 0x166fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00166fd0 size=96 callers=0 calls=3
   calls: sub_2026d0, sub_203160, sub_b8aa0
*/
void sub_166fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x166fd0ULL || rel >= 0x167030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00167030 size=240 callers=0 calls=1
   calls: sub_11b4f0
*/
void sub_167030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167030ULL || rel >= 0x167120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00167120 size=288 callers=0 calls=1
   calls: sub_9b3d0
*/
void sub_167120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167120ULL || rel >= 0x167240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00167240 size=704 callers=0 calls=7
   calls: sub_66cd0, sub_9b3e0, sub_9bed0, sub_a70d0, sub_a7800, sub_a7850, sub_a8960
*/
void sub_167240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167240ULL || rel >= 0x167500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00167500 size=96 callers=0 calls=0
*/
void sub_167500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167500ULL || rel >= 0x167560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00167560 size=16 callers=0 calls=0
*/
void sub_167560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167560ULL || rel >= 0x167570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00167570 size=96 callers=0 calls=2
   calls: sub_b7e20, sub_b89a0
*/
void sub_167570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167570ULL || rel >= 0x1675d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001675d0 size=688 callers=1 calls=1
   calls: sub_9a870
*/
void sub_1675d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1675d0ULL || rel >= 0x167880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00167880 size=64 callers=0 calls=1
   calls: sub_1675d0
*/
void sub_167880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167880ULL || rel >= 0x1678c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001678c0 size=32 callers=0 calls=0
*/
void sub_1678c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678c0ULL || rel >= 0x1678e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001678e0 size=16 callers=0 calls=0
*/
void sub_1678e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678e0ULL || rel >= 0x1678f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001678f0 size=1712 callers=2 calls=22
   calls: immConst, sub_11a7a0, sub_153440, sub_179400, sub_1c85c0, sub_1c8eb0, sub_1c9200, sub_1c9840, sub_1c9d60, sub_1ca080, sub_35f0, sub_3670
   ... +10 more
*/
void sub_1678f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1678f0ULL || rel >= 0x167fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00167fa0 size=112 callers=0 calls=3
   calls: sub_1678f0, sub_6d8f0, sub_b89a0
*/
void sub_167fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x167fa0ULL || rel >= 0x168010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

