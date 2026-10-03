/* main functions 006fb760..0071c760 (48 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 006fb760 size=544 callers=2 calls=0
*/
void sub_6fb760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fb760ULL || rel >= 0x6fb980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fb980 size=816 callers=1 calls=5
   calls: gflnet3_message_lite, sub_6fbcb0, sub_70b380, sub_c70, sub_ce0
*/
void sub_6fb980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fb980ULL || rel >= 0x6fbcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fbcb0 size=272 callers=1 calls=3
   calls: sub_7555f0, sub_c70, sub_ce0
*/
void sub_6fbcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fbcb0ULL || rel >= 0x6fbdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fbdc0 size=816 callers=1 calls=5
   calls: gflnet3_message_lite, sub_6fc0f0, sub_70b380, sub_c70, sub_ce0
*/
void sub_6fbdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fbdc0ULL || rel >= 0x6fc0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fc0f0 size=272 callers=1 calls=3
   calls: sub_756580, sub_c70, sub_ce0
*/
void sub_6fc0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fc0f0ULL || rel >= 0x6fc200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fc200 size=816 callers=1 calls=5
   calls: gflnet3_message_lite, sub_6fc530, sub_70b380, sub_c70, sub_ce0
*/
void sub_6fc200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fc200ULL || rel >= 0x6fc530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fc530 size=272 callers=1 calls=3
   calls: sub_756e60, sub_c70, sub_ce0
*/
void sub_6fc530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fc530ULL || rel >= 0x6fc640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fc640 size=816 callers=1 calls=5
   calls: gflnet3_message_lite, sub_6fc970, sub_70b380, sub_c70, sub_ce0
*/
void sub_6fc640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fc640ULL || rel >= 0x6fc970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fc970 size=272 callers=1 calls=3
   calls: sub_757920, sub_c70, sub_ce0
*/
void sub_6fc970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fc970ULL || rel >= 0x6fca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fca80 size=816 callers=1 calls=5
   calls: gflnet3_message_lite, sub_6fcdb0, sub_70b380, sub_c70, sub_ce0
*/
void sub_6fca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fca80ULL || rel >= 0x6fcdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fcdb0 size=272 callers=1 calls=3
   calls: sub_7582f0, sub_c70, sub_ce0
*/
void sub_6fcdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fcdb0ULL || rel >= 0x6fcec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fcec0 size=816 callers=1 calls=5
   calls: gflnet3_message_lite, sub_6fd1f0, sub_70b380, sub_c70, sub_ce0
*/
void sub_6fcec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fcec0ULL || rel >= 0x6fd1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fd1f0 size=272 callers=1 calls=3
   calls: sub_758cc0, sub_c70, sub_ce0
*/
void sub_6fd1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fd1f0ULL || rel >= 0x6fd300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fd300 size=272 callers=1 calls=0
*/
void sub_6fd300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fd300ULL || rel >= 0x6fd410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fd410 size=304 callers=2 calls=0
*/
void sub_6fd410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fd410ULL || rel >= 0x6fd540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fd540 size=304 callers=1 calls=0
*/
void sub_6fd540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fd540ULL || rel >= 0x6fd670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fd670 size=272 callers=3 calls=0
*/
void sub_6fd670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fd670ULL || rel >= 0x6fd780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fd780 size=336 callers=1 calls=0
*/
void sub_6fd780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fd780ULL || rel >= 0x6fd8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fd8d0 size=976 callers=1 calls=3
   calls: sub_6f7360, sub_c70, sub_ce0
*/
void sub_6fd8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fd8d0ULL || rel >= 0x6fdca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fdca0 size=736 callers=1 calls=0
*/
void sub_6fdca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fdca0ULL || rel >= 0x6fdf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fdf80 size=208 callers=1 calls=2
   calls: sub_6fdca0, sub_c70
*/
void sub_6fdf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fdf80ULL || rel >= 0x6fe050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fe050 size=576 callers=2 calls=0
*/
void sub_6fe050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fe050ULL || rel >= 0x6fe290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fe290 size=48 callers=6 calls=0
*/
void sub_6fe290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fe290ULL || rel >= 0x6fe2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fe2c0 size=208 callers=1 calls=0
*/
void sub_6fe2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fe2c0ULL || rel >= 0x6fe390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fe390 size=224 callers=31 calls=0
*/
void sub_6fe390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fe390ULL || rel >= 0x6fe470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fe470 size=432 callers=3 calls=0
   ref: 0001020304050607080910111213141516171819202122232425262728293031323334353637383940414243444546474849
*/
void f_000102030405060708091011121314151617181920212223242526(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fe470ULL || rel >= 0x6fe620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fe620 size=48 callers=2 calls=1
   calls: f_000102030405060708091011121314151617181920212223242526
*/
void sub_6fe620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fe620ULL || rel >= 0x6fe650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fe650 size=272 callers=2 calls=2
   calls: f_000102030405060708091011121314151617181920212223242526, f_000102030405060708091011121314151617181920212223242526_2
   ref: 0001020304050607080910111213141516171819202122232425262728293031323334353637383940414243444546474849
*/
void f_000102030405060708091011121314151617181920212223242526_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fe650ULL || rel >= 0x6fe760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fe760 size=368 callers=4 calls=1
   calls: sub_c70
*/
void sub_6fe760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fe760ULL || rel >= 0x6fe8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fe8d0 size=208 callers=1 calls=2
   calls: f_000102030405060708091011121314151617181920212223242526, sub_c70
*/
void sub_6fe8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fe8d0ULL || rel >= 0x6fe9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fe9a0 size=368 callers=2 calls=1
   calls: sub_c70
*/
void sub_6fe9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fe9a0ULL || rel >= 0x6feb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006feb10 size=208 callers=2 calls=2
   calls: f_000102030405060708091011121314151617181920212223242526_2, sub_c70
*/
void sub_6feb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6feb10ULL || rel >= 0x6febe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006febe0 size=368 callers=1 calls=2
   calls: sub_6fef30, sub_c70
*/
void sub_6febe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6febe0ULL || rel >= 0x6fed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fed50 size=176 callers=1 calls=2
   calls: sub_6fee00, sub_c70
*/
void sub_6fed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fed50ULL || rel >= 0x6fee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fee00 size=304 callers=1 calls=1
   calls: sub_6fef30
*/
void sub_6fee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fee00ULL || rel >= 0x6fef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fef30 size=272 callers=2 calls=0
*/
void sub_6fef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fef30ULL || rel >= 0x6ff040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ff040 size=96 callers=1 calls=2
   calls: sub_6ff0a0, sub_ce0
*/
void sub_6ff040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ff040ULL || rel >= 0x6ff0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ff0a0 size=688 callers=1 calls=1
   calls: sub_ce0
*/
void sub_6ff0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ff0a0ULL || rel >= 0x6ff350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ff350 size=80 callers=2 calls=0
   ref: 0123456789abcdef
*/
void f_0123456789abcdef(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ff350ULL || rel >= 0x6ff3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ff3a0 size=160 callers=2 calls=0
*/
void sub_6ff3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ff3a0ULL || rel >= 0x6ff440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ff440 size=16 callers=5 calls=0
*/
void sub_6ff440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ff440ULL || rel >= 0x6ff450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ff450 size=1696 callers=222 calls=5
   calls: gflnet3_common_2, gflnet3_common_3, sub_7007d0, sub_c70, sub_ce0
   ref: This program requires version 
   ref:  of the Protocol Buffer runtime library, which is not compatible with the installed version (
   ref: %d.%d.%d
   ref: .  Please update your library.  If you compiled the program yourself, make sure that your headers ar
   ref: This program was compiled against version 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/stubs/commo
   ref:  of the Protocol Buffer runtime library, but the installed version is 
   ref: ).  Contact the program author for an update.  If you compiled the program yourself, make sure that 
*/
void gflnet3_common(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ff450ULL || rel >= 0x6ffaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ffaf0 size=48 callers=587 calls=0
*/
void sub_6ffaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ffaf0ULL || rel >= 0x6ffb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ffb20 size=64 callers=62 calls=0
*/
void sub_6ffb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ffb20ULL || rel >= 0x6ffb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ffb60 size=16 callers=298 calls=0
*/
void sub_6ffb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ffb60ULL || rel >= 0x6ffb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ffb70 size=96 callers=0 calls=0
   ref: [libprotobuf %s %s:%d] %s
*/
void libprotobuf_s_s_d_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ffb70ULL || rel >= 0x6ffbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ffbd0 size=80 callers=0 calls=1
   calls: sub_ce0
*/
void sub_6ffbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ffbd0ULL || rel >= 0x6ffc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ffc20 size=80 callers=0 calls=1
   calls: sub_c70
*/
void sub_6ffc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ffc20ULL || rel >= 0x6ffc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ffc70 size=368 callers=138 calls=5
   calls: gflnet3_common_2, gflnet3_common_3, sub_7007d0, sub_c70, sub_ce0
*/
void sub_6ffc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ffc70ULL || rel >= 0x6ffde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ffde0 size=80 callers=24 calls=0
*/
void sub_6ffde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ffde0ULL || rel >= 0x6ffe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ffe30 size=32 callers=303 calls=0
*/
void sub_6ffe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ffe30ULL || rel >= 0x6ffe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ffe50 size=32 callers=298 calls=0
*/
void sub_6ffe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ffe50ULL || rel >= 0x6ffe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ffe70 size=224 callers=2 calls=3
   calls: gflnet3_common_2, gflnet3_common_3, sub_7007d0
*/
void sub_6ffe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ffe70ULL || rel >= 0x6fff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fff50 size=16 callers=343 calls=0
*/
void sub_6fff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fff50ULL || rel >= 0x6fff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fff60 size=16 callers=0 calls=0
*/
void sub_6fff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fff60ULL || rel >= 0x6fff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fff70 size=48 callers=3 calls=1
   calls: sub_c70
*/
void sub_6fff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fff70ULL || rel >= 0x6fffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fffa0 size=64 callers=6 calls=0
*/
void sub_6fffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fffa0ULL || rel >= 0x6fffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fffe0 size=160 callers=20 calls=2
   calls: sub_6ffe70, sub_ce0
   ref: pthread_mutex_lock: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/stubs/commo
*/
void gflnet3_common_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fffe0ULL || rel >= 0x700080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700080 size=160 callers=22 calls=2
   calls: sub_6ffe70, sub_ce0
   ref: pthread_mutex_unlock: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/stubs/commo
*/
void gflnet3_common_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700080ULL || rel >= 0x700120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700120 size=16 callers=3 calls=0
*/
void sub_700120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700120ULL || rel >= 0x700130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700130 size=16 callers=1 calls=0
*/
void sub_700130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700130ULL || rel >= 0x700140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700140 size=96 callers=0 calls=1
   calls: sub_c70
*/
void sub_700140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700140ULL || rel >= 0x7001a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007001a0 size=80 callers=0 calls=0
*/
void sub_7001a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7001a0ULL || rel >= 0x7001f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007001f0 size=64 callers=0 calls=1
   calls: sub_ce0
*/
void sub_7001f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7001f0ULL || rel >= 0x700230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700230 size=80 callers=0 calls=1
   calls: sub_ce0
*/
void sub_700230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700230ULL || rel >= 0x700280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700280 size=352 callers=0 calls=0
*/
void sub_700280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700280ULL || rel >= 0x7003e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007003e0 size=32 callers=0 calls=0
*/
void sub_7003e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7003e0ULL || rel >= 0x700400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700400 size=96 callers=0 calls=0
*/
void sub_700400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700400ULL || rel >= 0x700460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700460 size=112 callers=0 calls=0
*/
void sub_700460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700460ULL || rel >= 0x7004d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007004d0 size=416 callers=0 calls=0
*/
void sub_7004d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7004d0ULL || rel >= 0x700670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700670 size=352 callers=0 calls=1
   calls: sub_c70
*/
void sub_700670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700670ULL || rel >= 0x7007d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007007d0 size=128 callers=346 calls=0
*/
void sub_7007d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7007d0ULL || rel >= 0x700850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700850 size=272 callers=0 calls=1
   calls: sub_700960
*/
void sub_700850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700850ULL || rel >= 0x700960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700960 size=368 callers=1 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_700960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700960ULL || rel >= 0x700ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700ad0 size=32 callers=0 calls=0
*/
void sub_700ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700ad0ULL || rel >= 0x700af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700af0 size=144 callers=0 calls=1
   calls: sub_1c0
*/
void sub_700af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700af0ULL || rel >= 0x700b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700b80 size=496 callers=1 calls=2
   calls: sub_6a54a0, sub_c70
*/
void sub_700b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700b80ULL || rel >= 0x700d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700d70 size=512 callers=1 calls=3
   calls: sub_6a54a0, sub_c70, sub_ce0
*/
void sub_700d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700d70ULL || rel >= 0x700f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700f70 size=16 callers=2 calls=0
*/
void sub_700f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700f70ULL || rel >= 0x700f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700f80 size=16 callers=1 calls=0
*/
void sub_700f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700f80ULL || rel >= 0x700f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700f90 size=16 callers=1 calls=0
*/
void sub_700f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700f90ULL || rel >= 0x700fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00700fa0 size=288 callers=1 calls=5
   calls: Interpreting_non_ascii_codepoint_d, Message_missing_required_fields, sub_740780, sub_740790, sub_740880
*/
void sub_700fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x700fa0ULL || rel >= 0x7010c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007010c0 size=480 callers=1 calls=5
   calls: gflnet3_text_format, gflnet3_text_format_5, sub_6ff440, sub_716dd0, sub_ce0
   ref: Message missing required fields: 
*/
void Message_missing_required_fields(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7010c0ULL || rel >= 0x7012a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007012a0 size=112 callers=1 calls=3
   calls: sub_700fa0, sub_70d160, sub_70d190
*/
void sub_7012a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7012a0ULL || rel >= 0x701310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00701310 size=304 callers=21 calls=6
   calls: sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50
   ref: Error parsing text-format 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format
*/
void gflnet3_text_format(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701310ULL || rel >= 0x701440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00701440 size=16 callers=0 calls=0
*/
void sub_701440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701440ULL || rel >= 0x701450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00701450 size=96 callers=0 calls=0
*/
void sub_701450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701450ULL || rel >= 0x7014b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007014b0 size=16 callers=0 calls=0
*/
void sub_7014b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7014b0ULL || rel >= 0x7014c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007014c0 size=16 callers=0 calls=0
*/
void sub_7014c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7014c0ULL || rel >= 0x7014d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007014d0 size=16 callers=0 calls=0
*/
void sub_7014d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7014d0ULL || rel >= 0x7014e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007014e0 size=16 callers=0 calls=0
*/
void sub_7014e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7014e0ULL || rel >= 0x7014f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007014f0 size=16 callers=0 calls=0
*/
void sub_7014f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7014f0ULL || rel >= 0x701500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00701500 size=16 callers=0 calls=0
*/
void sub_701500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701500ULL || rel >= 0x701510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00701510 size=96 callers=0 calls=1
   calls: sub_6fe050
*/
void sub_701510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701510ULL || rel >= 0x701570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00701570 size=16 callers=0 calls=0
*/
void sub_701570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701570ULL || rel >= 0x701580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00701580 size=16 callers=0 calls=0
*/
void sub_701580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701580ULL || rel >= 0x701590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00701590 size=304 callers=0 calls=1
   calls: sub_6ff3a0
*/
void sub_701590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701590ULL || rel >= 0x7016c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007016c0 size=64 callers=0 calls=0
*/
void sub_7016c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7016c0ULL || rel >= 0x701700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00701700 size=48 callers=0 calls=0
*/
void sub_701700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701700ULL || rel >= 0x701730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00701730 size=96 callers=1 calls=1
   calls: sub_c70
*/
void sub_701730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701730ULL || rel >= 0x701790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00701790 size=224 callers=1 calls=1
   calls: sub_7081f0
*/
void sub_701790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701790ULL || rel >= 0x701870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00701870 size=432 callers=2 calls=5
   calls: gflnet3_text_format_2, sub_701a20, sub_702960, sub_708350, sub_ce0
*/
void sub_701870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701870ULL || rel >= 0x701a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00701a20 size=2400 callers=3 calls=11
   calls: f_0123456789abcdef, gflnet3_text_format_3, sub_6fe050, sub_6fe760, sub_6feb10, sub_701a20, sub_708240, sub_70e0c0, sub_70ef70, sub_c70, sub_ce0
*/
void sub_701a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701a20ULL || rel >= 0x702380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00702380 size=1312 callers=1 calls=17
   calls: gflnet3_message_lite, gflnet3_text_format_3, sub_6e21b0, sub_6ff3a0, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_701870, sub_708240, sub_716310
   ... +5 more
   ref: : failed to parse contents
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format
   ref: Proto type 
   ref:  not found
*/
void gflnet3_text_format_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x702380ULL || rel >= 0x7028a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007028a0 size=192 callers=4 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:  Outdent() without matching Indent().
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format
*/
void gflnet3_text_format_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7028a0ULL || rel >= 0x702960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00702960 size=1680 callers=1 calls=9
   calls: gflnet3_text_format_3, sub_6e3840, sub_701870, sub_703d20, sub_708240, sub_7099c0, sub_c70, sub_ce0, truncated
*/
void sub_702960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x702960ULL || rel >= 0x702ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00702ff0 size=272 callers=2 calls=4
   calls: sub_70d5f0, sub_70d610, sub_ce0, truncated
*/
void sub_702ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x702ff0ULL || rel >= 0x703100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00703100 size=2832 callers=3 calls=4
   calls: sub_6e2c20, sub_708240, sub_70def0, sub_ce0
   ref: ...<truncated>...
*/
void truncated(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x703100ULL || rel >= 0x703c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00703c10 size=272 callers=0 calls=3
   calls: sub_703d20, sub_708240, truncated
*/
void sub_703c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x703c10ULL || rel >= 0x703d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00703d20 size=432 callers=2 calls=3
   calls: sub_6fe760, sub_708240, sub_ce0
*/
void sub_703d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x703d20ULL || rel >= 0x703ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00703ed0 size=304 callers=1 calls=3
   calls: sub_702ff0, sub_7081f0, sub_c70
*/
void sub_703ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x703ed0ULL || rel >= 0x704000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00704000 size=48 callers=0 calls=1
   calls: sub_740780
*/
void sub_704000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x704000ULL || rel >= 0x704030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00704030 size=16 callers=0 calls=0
*/
void sub_704030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x704030ULL || rel >= 0x704040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00704040 size=16 callers=0 calls=0
*/
void sub_704040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x704040ULL || rel >= 0x704050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00704050 size=304 callers=3 calls=6
   calls: sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format
   ref: Warning parsing text-format 
*/
void gflnet3_text_format_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x704050ULL || rel >= 0x704180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00704180 size=4736 callers=3 calls=25
   calls: Expected, Expected_identifier_got, Interpreting_non_ascii_codepoint_d, TextFormat_Parser_for_Any_supports_only_type_googleapis, Value_of_type, gflnet3_text_format, gflnet3_text_format_4, gflnet3_text_format_6, infinity, sub_6e28a0, sub_6e29b0, sub_6e2a10
   ... +13 more
   ref: Message type "
   ref: " is specified along with field "
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format
   ref: text format contains deprecated field "
   ref: Extension "
   ref: ", another member of oneof "
   ref: CHECK failed: allow_unknown_field_: 
   ref: " is specified multiple times.
*/
void gflnet3_text_format_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x704180ULL || rel >= 0x705400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00705400 size=1072 callers=1 calls=6
   calls: Expected, Expected_identifier_got, gflnet3_text_format, sub_6ead90, sub_705d30, sub_ce0
   ref: TextFormat::Parser for Any supports only type.googleapis.com and type.googleprod.com, but found "
*/
void TextFormat_Parser_for_Any_supports_only_type_googleapis(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x705400ULL || rel >= 0x705830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00705830 size=480 callers=11 calls=3
   calls: Interpreting_non_ascii_codepoint_d, gflnet3_text_format, sub_ce0
   ref: ", found "
   ref: Expected "
*/
void Expected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x705830ULL || rel >= 0x705a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00705a10 size=560 callers=1 calls=10
   calls: gflnet3_message_lite_5, gflnet3_text_format, sub_6e21b0, sub_707460, sub_707580, sub_70b180, sub_716310, sub_716370, sub_716480, sub_ce0
   ref: Value of type "
   ref: " stored in google.protobuf.Any.
   ref: " stored in google.protobuf.Any has missing required fields
   ref: Could not find type "
*/
void Value_of_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x705a10ULL || rel >= 0x705c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00705c40 size=240 callers=6 calls=1
   calls: sub_c70
*/
void sub_705c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x705c40ULL || rel >= 0x705d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00705d30 size=416 callers=3 calls=3
   calls: Expected_identifier_got, Interpreting_non_ascii_codepoint_d, sub_ce0
*/
void sub_705d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x705d30ULL || rel >= 0x705ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00705ed0 size=192 callers=9 calls=3
   calls: Interpreting_non_ascii_codepoint_d, gflnet3_text_format, sub_ce0
   ref: Expected identifier, got: 
*/
void Expected_identifier_got(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x705ed0ULL || rel >= 0x705f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00705f90 size=1376 callers=3 calls=6
   calls: Expected, Interpreting_non_ascii_codepoint_d, gflnet3_text_format, infinity, sub_7064f0, sub_ce0
   ref: Invalid float number: 
   ref: infinity
*/
void infinity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x705f90ULL || rel >= 0x7064f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007064f0 size=432 callers=3 calls=4
   calls: Expected, sub_707460, sub_707730, sub_ce0
*/
void sub_7064f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7064f0ULL || rel >= 0x7066a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007066a0 size=336 callers=2 calls=4
   calls: sub_700d70, sub_707460, sub_707580, sub_ce0
*/
void sub_7066a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7066a0ULL || rel >= 0x7067f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007067f0 size=3184 callers=2 calls=16
   calls: Expected_identifier_got, Expected_string_got, Integer_out_of_range, Interpreting_non_ascii_codepoint_d, gflnet3_text_format, gflnet3_text_format_4, infinity_2, sub_6e2bf0, sub_6e2c20, sub_6fe9a0, sub_6ffaf0, sub_6ffb60
   ... +4 more
   ref: Expected integer or identifier, got: 
   ref: Unknown enumeration value of "
   ref: Reached an unintended state: CPPTYPE_MESSAGE
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format
   ref: Invalid value for boolean field "
   ref: " for field "
   ref: ". Value: "
*/
void gflnet3_text_format_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7067f0ULL || rel >= 0x707460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00707460 size=288 callers=3 calls=3
   calls: Expected, Interpreting_non_ascii_codepoint_d, sub_ce0
*/
void sub_707460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x707460ULL || rel >= 0x707580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00707580 size=432 callers=3 calls=1
   calls: gflnet3_text_format_5
*/
void sub_707580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x707580ULL || rel >= 0x707730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00707730 size=992 callers=2 calls=7
   calls: Expected, Expected_identifier_got, Interpreting_non_ascii_codepoint_d, infinity, sub_705d30, sub_7064f0, sub_ce0
*/
void sub_707730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x707730ULL || rel >= 0x707b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00707b10 size=288 callers=9 calls=4
   calls: Interpreting_non_ascii_codepoint_d, gflnet3_text_format, sub_741e50, sub_ce0
   ref: Integer out of range (
   ref: Expected integer, got: 
*/
void Integer_out_of_range(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x707b10ULL || rel >= 0x707c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00707c30 size=800 callers=2 calls=5
   calls: Integer_out_of_range_2, Interpreting_non_ascii_codepoint_d, gflnet3_text_format, gflnet3_tokenizer, sub_ce0
   ref: Expected double, got: 
   ref: infinity
*/
void infinity_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x707c30ULL || rel >= 0x707f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00707f50 size=224 callers=1 calls=4
   calls: Interpreting_non_ascii_codepoint_d, gflnet3_text_format, gflnet3_tokenizer_2, sub_ce0
   ref: Expected string, got: 
*/
void Expected_string_got(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x707f50ULL || rel >= 0x708030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00708030 size=448 callers=1 calls=4
   calls: Interpreting_non_ascii_codepoint_d, gflnet3_text_format, sub_741e50, sub_ce0
   ref: Integer out of range (
   ref: Expect a decimal number, got: 
   ref: Expected integer, got: 
*/
void Integer_out_of_range_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x708030ULL || rel >= 0x7081f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007081f0 size=64 callers=5 calls=1
   calls: sub_7081f0
*/
void sub_7081f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7081f0ULL || rel >= 0x708230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00708230 size=16 callers=0 calls=0
*/
void sub_708230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x708230ULL || rel >= 0x708240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00708240 size=272 callers=67 calls=1
   calls: sub_708240
*/
void sub_708240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x708240ULL || rel >= 0x708350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00708350 size=3040 callers=3 calls=4
   calls: sub_708350, sub_708f30, sub_7093b0, sub_709650
*/
void sub_708350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x708350ULL || rel >= 0x708f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00708f30 size=640 callers=5 calls=0
*/
void sub_708f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x708f30ULL || rel >= 0x7091b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007091b0 size=512 callers=2 calls=1
   calls: sub_708f30
*/
void sub_7091b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7091b0ULL || rel >= 0x7093b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007093b0 size=672 callers=2 calls=1
   calls: sub_7091b0
*/
void sub_7093b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7093b0ULL || rel >= 0x709650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00709650 size=880 callers=2 calls=3
   calls: sub_708f30, sub_7091b0, sub_7093b0
*/
void sub_709650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x709650ULL || rel >= 0x7099c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007099c0 size=752 callers=6 calls=3
   calls: gflnet3_text_format_7, sub_7099c0, sub_709fa0
*/
void sub_7099c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7099c0ULL || rel >= 0x709cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00709cb0 size=752 callers=12 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format
   ref: Invalid key for map field.
*/
void gflnet3_text_format_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x709cb0ULL || rel >= 0x709fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00709fa0 size=752 callers=2 calls=2
   calls: gflnet3_text_format_7, sub_7099c0
*/
void sub_709fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x709fa0ULL || rel >= 0x70a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070a290 size=1312 callers=2 calls=2
   calls: gflnet3_text_format_7, sub_70a290
*/
void sub_70a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70a290ULL || rel >= 0x70a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070a7b0 size=688 callers=0 calls=1
   calls: gflnet3_text_format_7
*/
void sub_70a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70a7b0ULL || rel >= 0x70aa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070aa60 size=32 callers=1 calls=0
*/
void sub_70aa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70aa60ULL || rel >= 0x70aa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070aa80 size=512 callers=9 calls=6
   calls: gflnet3_coded_stream, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_ce0
   ref: " because it is missing required fields: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message_lit
   ref:  message of type "
   ref: Can't 
*/
void gflnet3_message_lite(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70aa80ULL || rel >= 0x70ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070ac80 size=192 callers=1 calls=1
   calls: gflnet3_coded_stream
*/
void sub_70ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70ac80ULL || rel >= 0x70ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070ad40 size=480 callers=22 calls=6
   calls: gflnet3_coded_stream, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_ce0
   ref: " because it is missing required fields: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message_lit
   ref:  message of type "
   ref: Can't 
*/
void gflnet3_message_lite_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70ad40ULL || rel >= 0x70af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070af20 size=208 callers=0 calls=8
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_70c6c0, sub_70c750, sub_70d3f0, sub_70d420
   ref: CHECK failed: !coded_out.HadError(): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message_lit
*/
void gflnet3_message_lite_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70af20ULL || rel >= 0x70aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070aff0 size=400 callers=2 calls=6
   calls: sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_ce0
   ref: CHECK failed: (byte_size_before_serialization) == (byte_size_after_serialization): 
   ref:  was modified concurrently during serialization.
   ref: Byte size calculation and serialization were inconsistent.  This may indicate a bug in protocol buff
   ref: This shouldn't be called if all the sizes are equal.
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message_lit
   ref: CHECK failed: (bytes_produced_by_serialization) == (byte_size_before_serialization): 
*/
void gflnet3_message_lite_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70aff0ULL || rel >= 0x70b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b180 size=16 callers=1 calls=0
*/
void sub_70b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b180ULL || rel >= 0x70b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b190 size=304 callers=3 calls=5
   calls: gflnet3_message_lite_4, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message_lit
   ref: Error computing ByteSize (possible overflow?).
*/
void gflnet3_message_lite_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b190ULL || rel >= 0x70b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b2c0 size=32 callers=1 calls=0
*/
void sub_70b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b2c0ULL || rel >= 0x70b2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b2e0 size=160 callers=20 calls=1
   calls: gflnet3_message_lite_4
*/
void sub_70b2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b2e0ULL || rel >= 0x70b380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b380 size=96 callers=10 calls=1
   calls: gflnet3_message_lite_5
*/
void sub_70b380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b380ULL || rel >= 0x70b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b3e0 size=16 callers=2 calls=0
*/
void sub_70b3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b3e0ULL || rel >= 0x70b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b3f0 size=32 callers=0 calls=0
*/
void sub_70b3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b3f0ULL || rel >= 0x70b410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b410 size=32 callers=0 calls=0
*/
void sub_70b410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b410ULL || rel >= 0x70b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b430 size=224 callers=6 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50
   ref: The total number of bytes read was 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/coded_st
*/
void gflnet3_coded_stream(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b430ULL || rel >= 0x70b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b510 size=128 callers=7 calls=0
*/
void sub_70b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b510ULL || rel >= 0x70b590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b590 size=80 callers=7 calls=0
*/
void sub_70b590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b590ULL || rel >= 0x70b5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b5e0 size=144 callers=162 calls=0
*/
void sub_70b5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b5e0ULL || rel >= 0x70b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b670 size=224 callers=33 calls=1
   calls: sub_70c190
*/
void sub_70b670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b670ULL || rel >= 0x70b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b750 size=112 callers=80 calls=0
*/
void sub_70b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b750ULL || rel >= 0x70b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b7c0 size=96 callers=33 calls=0
*/
void sub_70b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b7c0ULL || rel >= 0x70b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b820 size=64 callers=68 calls=0
*/
void sub_70b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b820ULL || rel >= 0x70b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b860 size=208 callers=1 calls=0
*/
void sub_70b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b860ULL || rel >= 0x70b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070b930 size=640 callers=7 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50
   ref: Reading dangerously large protocol message.  If the message turns out to be larger than 
   ref:  bytes, parsing will be halted for security reasons.  To increase the limit (or to disable these war
   ref:  bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesL
   ref: CHECK failed: (buffer_size) >= (0): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/coded_st
   ref: A protocol message was rejected because it was too big (more than 
*/
void gflnet3_coded_stream_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70b930ULL || rel >= 0x70bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070bbb0 size=208 callers=2 calls=0
*/
void sub_70bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70bbb0ULL || rel >= 0x70bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070bc80 size=320 callers=0 calls=1
   calls: gflnet3_coded_stream_2
*/
void sub_70bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70bc80ULL || rel >= 0x70bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070bdc0 size=240 callers=22 calls=1
   calls: gflnet3_coded_stream_2
*/
void sub_70bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70bdc0ULL || rel >= 0x70beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070beb0 size=240 callers=15 calls=1
   calls: gflnet3_coded_stream_2
*/
void sub_70beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70beb0ULL || rel >= 0x70bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070bfa0 size=496 callers=67 calls=1
   calls: gflnet3_coded_stream_2
*/
void sub_70bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70bfa0ULL || rel >= 0x70c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070c190 size=336 callers=129 calls=1
   calls: sub_70bfa0
*/
void sub_70c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70c190ULL || rel >= 0x70c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070c2e0 size=416 callers=86 calls=1
   calls: sub_70bfa0
*/
void sub_70c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70c2e0ULL || rel >= 0x70c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070c480 size=576 callers=128 calls=2
   calls: gflnet3_coded_stream_2, sub_70bfa0
*/
void sub_70c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70c480ULL || rel >= 0x70c6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070c6c0 size=144 callers=3 calls=0
*/
void sub_70c6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70c6c0ULL || rel >= 0x70c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070c750 size=80 callers=3 calls=0
*/
void sub_70c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70c750ULL || rel >= 0x70c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070c7a0 size=224 callers=6 calls=0
*/
void sub_70c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70c7a0ULL || rel >= 0x70c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070c880 size=224 callers=3 calls=0
*/
void sub_70c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70c880ULL || rel >= 0x70c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070c960 size=256 callers=5 calls=0
*/
void sub_70c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70c960ULL || rel >= 0x70ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070ca60 size=256 callers=5 calls=0
*/
void sub_70ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70ca60ULL || rel >= 0x70cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070cb60 size=288 callers=69 calls=0
*/
void sub_70cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70cb60ULL || rel >= 0x70cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070cc80 size=608 callers=11 calls=0
*/
void sub_70cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70cc80ULL || rel >= 0x70cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070cee0 size=288 callers=68 calls=0
*/
void sub_70cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70cee0ULL || rel >= 0x70d000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d000 size=64 callers=283 calls=0
*/
void sub_70d000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d000ULL || rel >= 0x70d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d040 size=144 callers=25 calls=0
*/
void sub_70d040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d040ULL || rel >= 0x70d0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d0d0 size=144 callers=42 calls=0
*/
void sub_70d0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d0d0ULL || rel >= 0x70d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d160 size=48 callers=3 calls=0
*/
void sub_70d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d160ULL || rel >= 0x70d190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d190 size=16 callers=4 calls=0
*/
void sub_70d190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d190ULL || rel >= 0x70d1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d1a0 size=48 callers=0 calls=1
   calls: sub_70d9f0
*/
void sub_70d1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d1a0ULL || rel >= 0x70d1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d1d0 size=96 callers=0 calls=0
*/
void sub_70d1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d1d0ULL || rel >= 0x70d230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d230 size=288 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/zero_cop
   ref: CHECK failed: (count) <= (last_returned_size_): 
   ref: BackUp() can only be called after a successful Next().
   ref: CHECK failed: (last_returned_size_) > (0): 
   ref: CHECK failed: (count) >= (0): 
*/
void gflnet3_zero_copy_stream_impl_lite(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d230ULL || rel >= 0x70d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d350 size=144 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/zero_cop
   ref: CHECK failed: (count) >= (0): 
*/
void gflnet3_zero_copy_stream_impl_lite_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d350ULL || rel >= 0x70d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d3e0 size=16 callers=0 calls=0
*/
void sub_70d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d3e0ULL || rel >= 0x70d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d3f0 size=48 callers=1 calls=0
*/
void sub_70d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d3f0ULL || rel >= 0x70d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d420 size=16 callers=1 calls=0
*/
void sub_70d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d420ULL || rel >= 0x70d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d430 size=48 callers=0 calls=1
   calls: sub_70da00
*/
void sub_70d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d430ULL || rel >= 0x70d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d460 size=96 callers=0 calls=0
*/
void sub_70d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d460ULL || rel >= 0x70d4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d4c0 size=288 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/zero_cop
   ref: CHECK failed: (count) <= (last_returned_size_): 
   ref: BackUp() can only be called after a successful Next().
   ref: CHECK failed: (last_returned_size_) > (0): 
   ref: CHECK failed: (count) >= (0): 
*/
void gflnet3_zero_copy_stream_impl_lite_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d4c0ULL || rel >= 0x70d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d5e0 size=16 callers=0 calls=0
*/
void sub_70d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d5e0ULL || rel >= 0x70d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d5f0 size=32 callers=3 calls=0
*/
void sub_70d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d5f0ULL || rel >= 0x70d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d610 size=16 callers=3 calls=0
*/
void sub_70d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d610ULL || rel >= 0x70d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d620 size=48 callers=0 calls=1
   calls: sub_70da00
*/
void sub_70d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d620ULL || rel >= 0x70d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d650 size=432 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/zero_cop
   ref: StringOutputStream.
   ref: Cannot allocate buffer larger than kint32max for 
   ref: CHECK failed: target_ != NULL: 
*/
void gflnet3_zero_copy_stream_impl_lite_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d650ULL || rel >= 0x70d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d800 size=336 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/zero_cop
   ref: CHECK failed: (count) <= (target_->size()): 
   ref: CHECK failed: (count) >= (0): 
   ref: CHECK failed: target_ != NULL: 
*/
void gflnet3_zero_copy_stream_impl_lite_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d800ULL || rel >= 0x70d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d950 size=144 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/zero_cop
   ref: CHECK failed: target_ != NULL: 
*/
void gflnet3_zero_copy_stream_impl_lite_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d950ULL || rel >= 0x70d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d9e0 size=16 callers=0 calls=0
*/
void sub_70d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d9e0ULL || rel >= 0x70d9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070d9f0 size=16 callers=1 calls=0
*/
void sub_70d9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d9f0ULL || rel >= 0x70da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070da00 size=16 callers=2 calls=0
*/
void sub_70da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70da00ULL || rel >= 0x70da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070da10 size=96 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: This ZeroCopyOutputStream doesn't support aliasing. Reaching here usually means a ZeroCopyOutputStre
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/zero_cop
*/
void gflnet3_zero_copy_stream(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70da10ULL || rel >= 0x70da70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070da70 size=256 callers=53 calls=1
   calls: sub_70dc50
*/
void sub_70da70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70da70ULL || rel >= 0x70db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070db70 size=224 callers=107 calls=0
*/
void sub_70db70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70db70ULL || rel >= 0x70dc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070dc50 size=384 callers=1 calls=2
   calls: gflnet3_common_2, gflnet3_common_3
*/
void sub_70dc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70dc50ULL || rel >= 0x70ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070ddd0 size=288 callers=2 calls=0
*/
void sub_70ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70ddd0ULL || rel >= 0x70def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070def0 size=176 callers=4 calls=1
   calls: sub_70ddd0
*/
void sub_70def0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70def0ULL || rel >= 0x70dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070dfa0 size=128 callers=1 calls=1
   calls: sub_70ddd0
*/
void sub_70dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70dfa0ULL || rel >= 0x70e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070e020 size=112 callers=28 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_70e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e020ULL || rel >= 0x70e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070e090 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_70e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e090ULL || rel >= 0x70e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070e0c0 size=208 callers=235 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_70e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e0c0ULL || rel >= 0x70e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070e190 size=480 callers=2 calls=3
   calls: sub_70e190, sub_c70, sub_ce0
*/
void sub_70e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e190ULL || rel >= 0x70e370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070e370 size=496 callers=5 calls=3
   calls: sub_70e190, sub_c70, sub_ce0
*/
void sub_70e370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e370ULL || rel >= 0x70e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070e560 size=480 callers=1 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_70e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e560ULL || rel >= 0x70e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070e740 size=192 callers=2 calls=2
   calls: sub_70e740, sub_714f90
*/
void sub_70e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e740ULL || rel >= 0x70e800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070e800 size=336 callers=9 calls=1
   calls: sub_c70
*/
void sub_70e800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e800ULL || rel >= 0x70e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070e950 size=336 callers=2 calls=1
   calls: sub_c70
*/
void sub_70e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70e950ULL || rel >= 0x70eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070eaa0 size=336 callers=2 calls=1
   calls: sub_c70
*/
void sub_70eaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70eaa0ULL || rel >= 0x70ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070ebf0 size=336 callers=5 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_70ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70ebf0ULL || rel >= 0x70ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070ed40 size=336 callers=3 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_70ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70ed40ULL || rel >= 0x70ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070ee90 size=224 callers=1 calls=5
   calls: gflnet3_coded_stream, gflnet3_coded_stream_2, sub_70e0c0, sub_70e560, sub_70f420
*/
void sub_70ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70ee90ULL || rel >= 0x70ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070ef70 size=80 callers=3 calls=3
   calls: sub_70d160, sub_70d190, sub_70ee90
*/
void sub_70ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70ef70ULL || rel >= 0x70efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070efc0 size=224 callers=1 calls=1
   calls: sub_70cb60
*/
void sub_70efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70efc0ULL || rel >= 0x70f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070f0a0 size=80 callers=0 calls=1
   calls: sub_70e0c0
*/
void sub_70f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70f0a0ULL || rel >= 0x70f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070f0f0 size=32 callers=0 calls=0
*/
void sub_70f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70f0f0ULL || rel >= 0x70f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070f110 size=624 callers=47 calls=13
   calls: sub_70b860, sub_70bbb0, sub_70bdc0, sub_70beb0, sub_70bfa0, sub_70c190, sub_70c480, sub_70e800, sub_70e950, sub_70eaa0, sub_70ebf0, sub_70ed40
   ... +1 more
*/
void sub_70f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70f110ULL || rel >= 0x70f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070f380 size=160 callers=0 calls=2
   calls: sub_70c480, sub_70f110
*/
void sub_70f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70f380ULL || rel >= 0x70f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070f420 size=160 callers=1 calls=2
   calls: sub_70c480, sub_70f110
*/
void sub_70f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70f420ULL || rel >= 0x70f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070f4c0 size=16 callers=0 calls=0
*/
void sub_70f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70f4c0ULL || rel >= 0x70f4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070f4d0 size=1248 callers=3 calls=7
   calls: sub_70c7a0, sub_70c880, sub_70c960, sub_70ca60, sub_70cb60, sub_70cc80, sub_70f4d0
*/
void sub_70f4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70f4d0ULL || rel >= 0x70f9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070f9b0 size=592 callers=1 calls=3
   calls: sub_70cee0, sub_70d0d0, sub_70f9b0
*/
void sub_70f9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70f9b0ULL || rel >= 0x70fc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070fc00 size=560 callers=1 calls=2
   calls: sub_70cb60, sub_70efc0
*/
void sub_70fc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70fc00ULL || rel >= 0x70fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0070fe30 size=544 callers=34 calls=3
   calls: sub_70d000, sub_70d040, sub_70fe30
*/
void sub_70fe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70fe30ULL || rel >= 0x710050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00710050 size=560 callers=0 calls=7
   calls: sub_6e24a0, sub_6e28a0, sub_6e3210, sub_70c480, sub_70f110, sub_710280, sub_710660
*/
void sub_710050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x710050ULL || rel >= 0x710280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00710280 size=992 callers=1 calls=16
   calls: gflnet3_coded_stream, gflnet3_coded_stream_2, gflnet3_wire_format, sub_70bbb0, sub_70c190, sub_70c480, sub_70c6c0, sub_70c750, sub_70c7a0, sub_70cb60, sub_70d160, sub_70d190
   ... +4 more
*/
void sub_710280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x710280ULL || rel >= 0x710660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00710660 size=4304 callers=1 calls=15
   calls: gflnet3_wire_format_lite_5, sub_6e2c20, sub_70b510, sub_70b590, sub_70b5e0, sub_70b750, sub_70b820, sub_70bdc0, sub_70beb0, sub_70bfa0, sub_70c190, sub_70c2e0
   ... +3 more
*/
void sub_710660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x710660ULL || rel >= 0x711730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00711730 size=448 callers=2 calls=8
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_70b5e0, sub_70c190, sub_70c2e0, sub_70ebf0
   ref: Extensions of MessageSets must be optional messages.
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/wire_format
*/
void gflnet3_wire_format(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x711730ULL || rel >= 0x7118f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007118f0 size=368 callers=0 calls=8
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_70f4d0, sub_70fc00, sub_711a60, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/wire_format
   ref: : Protocol message serialized to a size different from what was originally expected.  Perhaps it was
   ref: CHECK failed: (output->ByteCount()) == (expected_endpoint): 
*/
void gflnet3_wire_format_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7118f0ULL || rel >= 0x711a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00711a60 size=3264 callers=1 calls=26
   calls: gflnet3_wire_format_lite, gflnet3_wire_format_lite_3, gflnet3_wire_format_lite_5, sub_6e8450, sub_70c960, sub_70ca60, sub_70cb60, sub_70cc80, sub_7129a0, sub_713690, sub_7137c0, sub_713860
   ... +14 more
*/
void sub_711a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x711a60ULL || rel >= 0x712720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00712720 size=640 callers=0 calls=1
   calls: sub_70cb60
*/
void sub_712720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x712720ULL || rel >= 0x7129a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007129a0 size=1776 callers=2 calls=3
   calls: sub_70d000, sub_70d040, sub_ce0
*/
void sub_7129a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7129a0ULL || rel >= 0x713090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713090 size=496 callers=1 calls=4
   calls: sub_70d000, sub_70fe30, sub_713280, sub_ce0
*/
void sub_713090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713090ULL || rel >= 0x713280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713280 size=480 callers=1 calls=3
   calls: sub_6e8450, sub_70d000, sub_7129a0
*/
void sub_713280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713280ULL || rel >= 0x713460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713460 size=16 callers=0 calls=0
*/
void sub_713460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713460ULL || rel >= 0x713470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713470 size=16 callers=0 calls=0
*/
void sub_713470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713470ULL || rel >= 0x713480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713480 size=528 callers=97 calls=6
   calls: sub_70bdc0, sub_70beb0, sub_70bfa0, sub_70c190, sub_70c480, sub_713480
*/
void sub_713480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713480ULL || rel >= 0x713690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713690 size=304 callers=22 calls=1
   calls: sub_70cb60
*/
void sub_713690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713690ULL || rel >= 0x7137c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007137c0 size=160 callers=3 calls=1
   calls: sub_70cb60
*/
void sub_7137c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7137c0ULL || rel >= 0x713860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713860 size=272 callers=36 calls=1
   calls: sub_70cb60
*/
void sub_713860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713860ULL || rel >= 0x713970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713970 size=160 callers=12 calls=1
   calls: sub_70cb60
*/
void sub_713970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713970ULL || rel >= 0x713a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713a10 size=288 callers=2 calls=1
   calls: sub_70cb60
*/
void sub_713a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713a10ULL || rel >= 0x713b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713b30 size=160 callers=2 calls=1
   calls: sub_70cb60
*/
void sub_713b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713b30ULL || rel >= 0x713bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713bd0 size=160 callers=2 calls=1
   calls: sub_70cb60
*/
void sub_713bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713bd0ULL || rel >= 0x713c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713c70 size=160 callers=2 calls=1
   calls: sub_70cb60
*/
void sub_713c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713c70ULL || rel >= 0x713d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713d10 size=160 callers=2 calls=1
   calls: sub_70cb60
*/
void sub_713d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713d10ULL || rel >= 0x713db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713db0 size=160 callers=2 calls=1
   calls: sub_70cb60
*/
void sub_713db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713db0ULL || rel >= 0x713e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713e50 size=176 callers=7 calls=1
   calls: sub_70cb60
*/
void sub_713e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713e50ULL || rel >= 0x713f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713f00 size=176 callers=3 calls=1
   calls: sub_70cb60
*/
void sub_713f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713f00ULL || rel >= 0x713fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00713fb0 size=224 callers=29 calls=1
   calls: sub_70cb60
*/
void sub_713fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x713fb0ULL || rel >= 0x714090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00714090 size=304 callers=18 calls=1
   calls: sub_70cb60
*/
void sub_714090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x714090ULL || rel >= 0x7141c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007141c0 size=416 callers=5 calls=6
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_70c7a0, sub_70cb60
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/wire_format
   ref: CHECK failed: (value.size()) <= (kint32max): 
*/
void gflnet3_wire_format_lite(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7141c0ULL || rel >= 0x714360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00714360 size=448 callers=27 calls=7
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_70c7a0, sub_70c880, sub_70cb60
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/wire_format
   ref: CHECK failed: (value.size()) <= (kint32max): 
*/
void gflnet3_wire_format_lite_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x714360ULL || rel >= 0x714520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00714520 size=416 callers=2 calls=6
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_70c7a0, sub_70cb60
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/wire_format
   ref: CHECK failed: (value.size()) <= (kint32max): 
*/
void gflnet3_wire_format_lite_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x714520ULL || rel >= 0x7146c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007146c0 size=448 callers=7 calls=7
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_70c7a0, sub_70c880, sub_70cb60
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/wire_format
   ref: CHECK failed: (value.size()) <= (kint32max): 
*/
void gflnet3_wire_format_lite_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7146c0ULL || rel >= 0x714880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00714880 size=320 callers=2 calls=1
   calls: sub_70cb60
*/
void sub_714880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x714880ULL || rel >= 0x7149c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007149c0 size=304 callers=2 calls=1
   calls: sub_70cb60
*/
void sub_7149c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7149c0ULL || rel >= 0x714af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00714af0 size=416 callers=91 calls=1
   calls: sub_70cb60
*/
void sub_714af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x714af0ULL || rel >= 0x714c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00714c90 size=272 callers=64 calls=1
   calls: sub_70c190
*/
void sub_714c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x714c90ULL || rel >= 0x714da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00714da0 size=352 callers=2 calls=8
   calls: sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_70def0, sub_715270, sub_ce0
   ref:  a protocol 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/wire_format
   ref: parsing
   ref: buffer. Use the 'bytes' type if you intend to send raw 
   ref:  contains invalid 
   ref: serializing
   ref: UTF-8 data when 
   ref: String field
*/
void gflnet3_wire_format_lite_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x714da0ULL || rel >= 0x714f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00714f00 size=80 callers=0 calls=1
   calls: sub_ce0
*/
void sub_714f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x714f00ULL || rel >= 0x714f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00714f50 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_714f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x714f50ULL || rel >= 0x714f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00714f90 size=64 callers=5 calls=0
*/
void sub_714f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x714f90ULL || rel >= 0x714fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00714fd0 size=128 callers=319 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
   ref: CHECK failed: false: 
*/
void gflnet3_generated_message_util(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x714fd0ULL || rel >= 0x715050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00715050 size=544 callers=1 calls=0
*/
void sub_715050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x715050ULL || rel >= 0x715270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00715270 size=256 callers=1 calls=1
   calls: sub_715050
*/
void sub_715270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x715270ULL || rel >= 0x715370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00715370 size=512 callers=2 calls=4
   calls: gflnet3_dynamic_message, sub_6e3840, sub_71ca00, sub_723ff0
*/
void sub_715370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x715370ULL || rel >= 0x715570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00715570 size=1728 callers=3 calls=14
   calls: gflnet3_dynamic_message_2, sub_6e1390, sub_6e3840, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_715370, sub_7164d0, sub_7166f0, sub_7171a0, sub_72de70
   ... +2 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/dynamic_mes
   ref: Can't get here.
*/
void gflnet3_dynamic_message(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x715570ULL || rel >= 0x715c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00715c30 size=1152 callers=1 calls=4
   calls: sub_6e3840, sub_70e0c0, sub_724010, sub_ce0
*/
void sub_715c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x715c30ULL || rel >= 0x7160b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007160b0 size=48 callers=0 calls=1
   calls: sub_715c30
*/
void sub_7160b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7160b0ULL || rel >= 0x7160e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007160e0 size=320 callers=1 calls=5
   calls: gflnet3_dynamic_message, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/dynamic_mes
   ref: CHECK failed: is_prototype(): 
*/
void gflnet3_dynamic_message_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7160e0ULL || rel >= 0x716220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716220 size=96 callers=0 calls=2
   calls: sub_715370, sub_c70
*/
void sub_716220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716220ULL || rel >= 0x716280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716280 size=64 callers=0 calls=1
   calls: sub_7162c0
*/
void sub_716280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716280ULL || rel >= 0x7162c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007162c0 size=32 callers=4 calls=0
*/
void sub_7162c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7162c0ULL || rel >= 0x7162e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007162e0 size=16 callers=0 calls=0
*/
void sub_7162e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7162e0ULL || rel >= 0x7162f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007162f0 size=16 callers=0 calls=0
*/
void sub_7162f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7162f0ULL || rel >= 0x716300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716300 size=16 callers=0 calls=0
*/
void sub_716300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716300ULL || rel >= 0x716310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716310 size=96 callers=3 calls=1
   calls: sub_c70
*/
void sub_716310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716310ULL || rel >= 0x716370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716370 size=224 callers=4 calls=2
   calls: sub_6fffa0, sub_ce0
*/
void sub_716370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716370ULL || rel >= 0x716450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716450 size=48 callers=0 calls=1
   calls: sub_716370
*/
void sub_716450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716450ULL || rel >= 0x716480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716480 size=80 callers=3 calls=3
   calls: gflnet3_common_2, gflnet3_common_3, gflnet3_dynamic_message
*/
void sub_716480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716480ULL || rel >= 0x7164d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007164d0 size=544 callers=1 calls=2
   calls: sub_716820, sub_c70
*/
void sub_7164d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7164d0ULL || rel >= 0x7166f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007166f0 size=288 callers=1 calls=0
*/
void sub_7166f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7166f0ULL || rel >= 0x716810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716810 size=16 callers=0 calls=0
*/
void sub_716810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716810ULL || rel >= 0x716820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716820 size=272 callers=1 calls=0
*/
void sub_716820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716820ULL || rel >= 0x716930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716930 size=640 callers=0 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_716930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716930ULL || rel >= 0x716bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716bb0 size=224 callers=0 calls=6
   calls: gflnet3_reflection_ops, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message.cc
   ref: CHECK failed: (from.GetDescriptor()) == (descriptor): 
   ref: , from: 
   ref: : Tried to merge from a message with a different type.  to: 
*/
void gflnet3_message(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716bb0ULL || rel >= 0x716c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716c90 size=16 callers=0 calls=0
*/
void sub_716c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716c90ULL || rel >= 0x716ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716ca0 size=224 callers=0 calls=6
   calls: sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_722e70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message.cc
   ref: CHECK failed: (from.GetDescriptor()) == (descriptor): 
   ref: : Tried to copy from a message with a different type. to: 
   ref: , from: 
*/
void gflnet3_message_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716ca0ULL || rel >= 0x716d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716d80 size=48 callers=0 calls=0
*/
void sub_716d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716d80ULL || rel >= 0x716db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716db0 size=16 callers=0 calls=0
*/
void sub_716db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716db0ULL || rel >= 0x716dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716dc0 size=16 callers=0 calls=0
*/
void sub_716dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716dc0ULL || rel >= 0x716dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716dd0 size=64 callers=1 calls=2
   calls: sub_723ae0, sub_ce0
*/
void sub_716dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716dd0ULL || rel >= 0x716e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716e10 size=288 callers=0 calls=3
   calls: sub_6ff440, sub_723ae0, sub_ce0
*/
void sub_716e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716e10ULL || rel >= 0x716f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716f30 size=16 callers=0 calls=0
*/
void sub_716f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716f30ULL || rel >= 0x716f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716f40 size=16 callers=0 calls=0
*/
void sub_716f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716f40ULL || rel >= 0x716f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716f50 size=64 callers=0 calls=0
*/
void sub_716f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716f50ULL || rel >= 0x716f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716f90 size=64 callers=0 calls=1
   calls: sub_713090
*/
void sub_716f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716f90ULL || rel >= 0x716fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00716fd0 size=64 callers=0 calls=0
*/
void sub_716fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x716fd0ULL || rel >= 0x717010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00717010 size=16 callers=1 calls=0
*/
void sub_717010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x717010ULL || rel >= 0x717020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00717020 size=368 callers=2 calls=3
   calls: sub_6e2a10, sub_c70, sub_ce0
*/
void sub_717020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x717020ULL || rel >= 0x717190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00717190 size=16 callers=0 calls=0
*/
void sub_717190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x717190ULL || rel >= 0x7171a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007171a0 size=112 callers=3 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_7171a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7171a0ULL || rel >= 0x717210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00717210 size=208 callers=222 calls=7
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_6fff50, sub_7007d0, sub_7186c0
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message.cc
   ref: File is already registered: 
*/
void gflnet3_message_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x717210ULL || rel >= 0x7172e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007172e0 size=224 callers=121 calls=9
   calls: sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_6fff50, sub_700120, sub_7007d0, sub_718930
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message.cc
   ref: Type is already registered: 
*/
void gflnet3_message_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7172e0ULL || rel >= 0x7173c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007173c0 size=1264 callers=0 calls=7
   calls: sub_6e3840, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_6fff50, sub_7007d0
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message.cc
   ref: Should not reach here.
   ref: CHECK failed: field->is_repeated(): 
*/
void gflnet3_message_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7173c0ULL || rel >= 0x7178b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007178b0 size=16 callers=5 calls=0
*/
void sub_7178b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7178b0ULL || rel >= 0x7178c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007178c0 size=16 callers=2 calls=0
*/
void sub_7178c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7178c0ULL || rel >= 0x7178d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007178d0 size=16 callers=2 calls=0
*/
void sub_7178d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7178d0ULL || rel >= 0x7178e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007178e0 size=96 callers=0 calls=2
   calls: sub_6fff70, sub_c70
*/
void sub_7178e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7178e0ULL || rel >= 0x717940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00717940 size=32 callers=0 calls=0
*/
void sub_717940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x717940ULL || rel >= 0x717960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00717960 size=144 callers=0 calls=2
   calls: sub_6fffa0, sub_ce0
*/
void sub_717960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x717960ULL || rel >= 0x7179f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007179f0 size=144 callers=0 calls=2
   calls: sub_6fffa0, sub_ce0
*/
void sub_7179f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7179f0ULL || rel >= 0x717a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00717a80 size=992 callers=0 calls=9
   calls: gflnet3_common_2, gflnet3_common_3, sub_6e1390, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_718590
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message.cc
   ref: registered: 
   ref: Type appears to be in generated pool but wasn't 
   ref: File appears to be in generated pool but wasn't registered: 
*/
void gflnet3_message_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x717a80ULL || rel >= 0x717e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00717e60 size=272 callers=1 calls=0
*/
void sub_717e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x717e60ULL || rel >= 0x717f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00717f70 size=656 callers=0 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_717f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x717f70ULL || rel >= 0x718200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718200 size=272 callers=1 calls=0
*/
void sub_718200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718200ULL || rel >= 0x718310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718310 size=640 callers=0 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_718310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718310ULL || rel >= 0x718590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718590 size=304 callers=1 calls=0
*/
void sub_718590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718590ULL || rel >= 0x7186c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007186c0 size=624 callers=1 calls=2
   calls: sub_717e60, sub_c70
*/
void sub_7186c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7186c0ULL || rel >= 0x718930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718930 size=560 callers=1 calls=2
   calls: sub_718200, sub_c70
*/
void sub_718930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718930ULL || rel >= 0x718b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718b60 size=352 callers=0 calls=0
*/
void sub_718b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718b60ULL || rel >= 0x718cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718cc0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_718cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718cc0ULL || rel >= 0x718d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718d00 size=16 callers=0 calls=0
*/
void sub_718d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718d00ULL || rel >= 0x718d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718d10 size=16 callers=0 calls=0
*/
void sub_718d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718d10ULL || rel >= 0x718d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718d20 size=16 callers=0 calls=0
*/
void sub_718d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718d20ULL || rel >= 0x718d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718d30 size=32 callers=0 calls=0
*/
void sub_718d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718d30ULL || rel >= 0x718d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718d50 size=16 callers=0 calls=0
*/
void sub_718d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718d50ULL || rel >= 0x718d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718d60 size=64 callers=0 calls=0
*/
void sub_718d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718d60ULL || rel >= 0x718da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718da0 size=96 callers=0 calls=1
   calls: sub_6f67b0
*/
void sub_718da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718da0ULL || rel >= 0x718e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718e00 size=16 callers=0 calls=0
*/
void sub_718e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718e00ULL || rel >= 0x718e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718e10 size=48 callers=0 calls=0
*/
void sub_718e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718e10ULL || rel >= 0x718e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718e40 size=128 callers=0 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_718f60
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/reflection_
   ref: CHECK failed: this == other_mutator: 
*/
void gflnet3_reflection_internal(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718e40ULL || rel >= 0x718ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718ec0 size=16 callers=0 calls=0
*/
void sub_718ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718ec0ULL || rel >= 0x718ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718ed0 size=32 callers=0 calls=0
*/
void sub_718ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718ed0ULL || rel >= 0x718ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718ef0 size=16 callers=0 calls=0
*/
void sub_718ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718ef0ULL || rel >= 0x718f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718f00 size=16 callers=0 calls=0
*/
void sub_718f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718f00ULL || rel >= 0x718f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718f10 size=16 callers=0 calls=0
*/
void sub_718f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718f10ULL || rel >= 0x718f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718f20 size=16 callers=0 calls=0
*/
void sub_718f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718f20ULL || rel >= 0x718f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718f30 size=16 callers=0 calls=0
*/
void sub_718f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718f30ULL || rel >= 0x718f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718f40 size=16 callers=0 calls=0
*/
void sub_718f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718f40ULL || rel >= 0x718f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718f50 size=16 callers=0 calls=0
*/
void sub_718f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718f50ULL || rel >= 0x718f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00718f60 size=320 callers=1 calls=2
   calls: gflnet3_repeated_field, sub_70db70
*/
void sub_718f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x718f60ULL || rel >= 0x7190a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007190a0 size=208 callers=10 calls=5
   calls: sub_6f67b0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: CHECK failed: (&other) != (this): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/repeated_fi
*/
void gflnet3_repeated_field(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7190a0ULL || rel >= 0x719170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719170 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_719170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719170ULL || rel >= 0x7191b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007191b0 size=16 callers=0 calls=0
*/
void sub_7191b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7191b0ULL || rel >= 0x7191c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007191c0 size=16 callers=0 calls=0
*/
void sub_7191c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7191c0ULL || rel >= 0x7191d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007191d0 size=16 callers=0 calls=0
*/
void sub_7191d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7191d0ULL || rel >= 0x7191e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007191e0 size=16 callers=0 calls=0
*/
void sub_7191e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7191e0ULL || rel >= 0x7191f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007191f0 size=32 callers=0 calls=0
*/
void sub_7191f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7191f0ULL || rel >= 0x719210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719210 size=16 callers=0 calls=0
*/
void sub_719210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719210ULL || rel >= 0x719220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719220 size=64 callers=0 calls=0
*/
void sub_719220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719220ULL || rel >= 0x719260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719260 size=96 callers=0 calls=1
   calls: sub_7193a0
*/
void sub_719260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719260ULL || rel >= 0x7192c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007192c0 size=16 callers=0 calls=0
*/
void sub_7192c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7192c0ULL || rel >= 0x7192d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007192d0 size=48 callers=0 calls=0
*/
void sub_7192d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7192d0ULL || rel >= 0x719300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719300 size=128 callers=0 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_7194d0
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/reflection_
   ref: CHECK failed: this == other_mutator: 
*/
void gflnet3_reflection_internal_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719300ULL || rel >= 0x719380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719380 size=16 callers=0 calls=0
*/
void sub_719380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719380ULL || rel >= 0x719390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719390 size=16 callers=0 calls=0
*/
void sub_719390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719390ULL || rel >= 0x7193a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007193a0 size=304 callers=4 calls=1
   calls: sub_70db70
*/
void sub_7193a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7193a0ULL || rel >= 0x7194d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007194d0 size=320 callers=1 calls=2
   calls: gflnet3_repeated_field_2, sub_70db70
*/
void sub_7194d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7194d0ULL || rel >= 0x719610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719610 size=208 callers=2 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_7193a0
   ref: CHECK failed: (&other) != (this): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/repeated_fi
*/
void gflnet3_repeated_field_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719610ULL || rel >= 0x7196e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007196e0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_7196e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7196e0ULL || rel >= 0x719720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719720 size=16 callers=0 calls=0
*/
void sub_719720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719720ULL || rel >= 0x719730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719730 size=16 callers=0 calls=0
*/
void sub_719730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719730ULL || rel >= 0x719740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719740 size=16 callers=0 calls=0
*/
void sub_719740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719740ULL || rel >= 0x719750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719750 size=32 callers=0 calls=0
*/
void sub_719750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719750ULL || rel >= 0x719770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719770 size=16 callers=0 calls=0
*/
void sub_719770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719770ULL || rel >= 0x719780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719780 size=64 callers=0 calls=0
*/
void sub_719780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719780ULL || rel >= 0x7197c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007197c0 size=96 callers=0 calls=1
   calls: sub_719900
*/
void sub_7197c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7197c0ULL || rel >= 0x719820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719820 size=16 callers=0 calls=0
*/
void sub_719820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719820ULL || rel >= 0x719830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719830 size=48 callers=0 calls=0
*/
void sub_719830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719830ULL || rel >= 0x719860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719860 size=128 callers=0 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_719a30
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/reflection_
   ref: CHECK failed: this == other_mutator: 
*/
void gflnet3_reflection_internal_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719860ULL || rel >= 0x7198e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007198e0 size=16 callers=0 calls=0
*/
void sub_7198e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7198e0ULL || rel >= 0x7198f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007198f0 size=16 callers=0 calls=0
*/
void sub_7198f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7198f0ULL || rel >= 0x719900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719900 size=304 callers=4 calls=1
   calls: sub_70db70
*/
void sub_719900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719900ULL || rel >= 0x719a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719a30 size=320 callers=1 calls=2
   calls: gflnet3_repeated_field_3, sub_70db70
*/
void sub_719a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719a30ULL || rel >= 0x719b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719b70 size=208 callers=2 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_719900
   ref: CHECK failed: (&other) != (this): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/repeated_fi
*/
void gflnet3_repeated_field_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719b70ULL || rel >= 0x719c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719c40 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_719c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719c40ULL || rel >= 0x719c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719c80 size=16 callers=0 calls=0
*/
void sub_719c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719c80ULL || rel >= 0x719c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719c90 size=16 callers=0 calls=0
*/
void sub_719c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719c90ULL || rel >= 0x719ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719ca0 size=16 callers=0 calls=0
*/
void sub_719ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719ca0ULL || rel >= 0x719cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719cb0 size=32 callers=0 calls=0
*/
void sub_719cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719cb0ULL || rel >= 0x719cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719cd0 size=16 callers=0 calls=0
*/
void sub_719cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719cd0ULL || rel >= 0x719ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719ce0 size=64 callers=0 calls=0
*/
void sub_719ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719ce0ULL || rel >= 0x719d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719d20 size=96 callers=0 calls=1
   calls: sub_719e60
*/
void sub_719d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719d20ULL || rel >= 0x719d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719d80 size=16 callers=0 calls=0
*/
void sub_719d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719d80ULL || rel >= 0x719d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719d90 size=48 callers=0 calls=0
*/
void sub_719d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719d90ULL || rel >= 0x719dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719dc0 size=128 callers=0 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_719f90
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/reflection_
   ref: CHECK failed: this == other_mutator: 
*/
void gflnet3_reflection_internal_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719dc0ULL || rel >= 0x719e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719e40 size=16 callers=0 calls=0
*/
void sub_719e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719e40ULL || rel >= 0x719e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719e50 size=16 callers=0 calls=0
*/
void sub_719e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719e50ULL || rel >= 0x719e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719e60 size=304 callers=4 calls=1
   calls: sub_70db70
*/
void sub_719e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719e60ULL || rel >= 0x719f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00719f90 size=320 callers=1 calls=2
   calls: gflnet3_repeated_field_4, sub_70db70
*/
void sub_719f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x719f90ULL || rel >= 0x71a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a0d0 size=208 callers=2 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_719e60
   ref: CHECK failed: (&other) != (this): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/repeated_fi
*/
void gflnet3_repeated_field_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a0d0ULL || rel >= 0x71a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a1a0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_71a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a1a0ULL || rel >= 0x71a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a1e0 size=16 callers=0 calls=0
*/
void sub_71a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a1e0ULL || rel >= 0x71a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a1f0 size=16 callers=0 calls=0
*/
void sub_71a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a1f0ULL || rel >= 0x71a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a200 size=16 callers=0 calls=0
*/
void sub_71a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a200ULL || rel >= 0x71a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a210 size=32 callers=0 calls=0
*/
void sub_71a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a210ULL || rel >= 0x71a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a230 size=16 callers=0 calls=0
*/
void sub_71a230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a230ULL || rel >= 0x71a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a240 size=64 callers=0 calls=0
*/
void sub_71a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a240ULL || rel >= 0x71a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a280 size=112 callers=0 calls=1
   calls: sub_71a3d0
*/
void sub_71a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a280ULL || rel >= 0x71a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a2f0 size=16 callers=0 calls=0
*/
void sub_71a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a2f0ULL || rel >= 0x71a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a300 size=48 callers=0 calls=0
*/
void sub_71a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a300ULL || rel >= 0x71a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a330 size=128 callers=0 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_71a500
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/reflection_
   ref: CHECK failed: this == other_mutator: 
*/
void gflnet3_reflection_internal_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a330ULL || rel >= 0x71a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a3b0 size=16 callers=0 calls=0
*/
void sub_71a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a3b0ULL || rel >= 0x71a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a3c0 size=16 callers=0 calls=0
*/
void sub_71a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a3c0ULL || rel >= 0x71a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a3d0 size=304 callers=4 calls=1
   calls: sub_70db70
*/
void sub_71a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a3d0ULL || rel >= 0x71a500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a500 size=320 callers=1 calls=2
   calls: gflnet3_repeated_field_5, sub_70db70
*/
void sub_71a500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a500ULL || rel >= 0x71a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a640 size=208 callers=2 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_71a3d0
   ref: CHECK failed: (&other) != (this): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/repeated_fi
*/
void gflnet3_repeated_field_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a640ULL || rel >= 0x71a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a710 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_71a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a710ULL || rel >= 0x71a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a750 size=16 callers=0 calls=0
*/
void sub_71a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a750ULL || rel >= 0x71a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a760 size=16 callers=0 calls=0
*/
void sub_71a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a760ULL || rel >= 0x71a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a770 size=16 callers=0 calls=0
*/
void sub_71a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a770ULL || rel >= 0x71a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a780 size=32 callers=0 calls=0
*/
void sub_71a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a780ULL || rel >= 0x71a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a7a0 size=16 callers=0 calls=0
*/
void sub_71a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a7a0ULL || rel >= 0x71a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a7b0 size=64 callers=0 calls=0
*/
void sub_71a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a7b0ULL || rel >= 0x71a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a7f0 size=112 callers=0 calls=1
   calls: sub_71a940
*/
void sub_71a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a7f0ULL || rel >= 0x71a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a860 size=16 callers=0 calls=0
*/
void sub_71a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a860ULL || rel >= 0x71a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a870 size=48 callers=0 calls=0
*/
void sub_71a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a870ULL || rel >= 0x71a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a8a0 size=128 callers=0 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_71aa70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/reflection_
   ref: CHECK failed: this == other_mutator: 
*/
void gflnet3_reflection_internal_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a8a0ULL || rel >= 0x71a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a920 size=16 callers=0 calls=0
*/
void sub_71a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a920ULL || rel >= 0x71a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a930 size=16 callers=0 calls=0
*/
void sub_71a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a930ULL || rel >= 0x71a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071a940 size=304 callers=4 calls=1
   calls: sub_70db70
*/
void sub_71a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71a940ULL || rel >= 0x71aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071aa70 size=320 callers=1 calls=2
   calls: gflnet3_repeated_field_6, sub_70db70
*/
void sub_71aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71aa70ULL || rel >= 0x71abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071abb0 size=208 callers=2 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_71a940
   ref: CHECK failed: (&other) != (this): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/repeated_fi
*/
void gflnet3_repeated_field_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71abb0ULL || rel >= 0x71ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071ac80 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_71ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71ac80ULL || rel >= 0x71acc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071acc0 size=16 callers=0 calls=0
*/
void sub_71acc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71acc0ULL || rel >= 0x71acd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071acd0 size=16 callers=0 calls=0
*/
void sub_71acd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71acd0ULL || rel >= 0x71ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071ace0 size=16 callers=0 calls=0
*/
void sub_71ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71ace0ULL || rel >= 0x71acf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071acf0 size=32 callers=0 calls=0
*/
void sub_71acf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71acf0ULL || rel >= 0x71ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071ad10 size=16 callers=0 calls=0
*/
void sub_71ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71ad10ULL || rel >= 0x71ad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071ad20 size=64 callers=0 calls=0
*/
void sub_71ad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71ad20ULL || rel >= 0x71ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071ad60 size=96 callers=0 calls=1
   calls: sub_71aea0
*/
void sub_71ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71ad60ULL || rel >= 0x71adc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071adc0 size=16 callers=0 calls=0
*/
void sub_71adc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71adc0ULL || rel >= 0x71add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071add0 size=48 callers=0 calls=0
*/
void sub_71add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71add0ULL || rel >= 0x71ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071ae00 size=128 callers=0 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_71afc0
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/reflection_
   ref: CHECK failed: this == other_mutator: 
*/
void gflnet3_reflection_internal_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71ae00ULL || rel >= 0x71ae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071ae80 size=16 callers=0 calls=0
*/
void sub_71ae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71ae80ULL || rel >= 0x71ae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071ae90 size=16 callers=0 calls=0
*/
void sub_71ae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71ae90ULL || rel >= 0x71aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071aea0 size=288 callers=4 calls=1
   calls: sub_70db70
*/
void sub_71aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71aea0ULL || rel >= 0x71afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071afc0 size=320 callers=1 calls=2
   calls: gflnet3_repeated_field_7, sub_70db70
*/
void sub_71afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71afc0ULL || rel >= 0x71b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b100 size=192 callers=2 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_71aea0
   ref: CHECK failed: (&other) != (this): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/repeated_fi
*/
void gflnet3_repeated_field_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b100ULL || rel >= 0x71b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b1c0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_71b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b1c0ULL || rel >= 0x71b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b200 size=16 callers=0 calls=0
*/
void sub_71b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b200ULL || rel >= 0x71b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b210 size=16 callers=0 calls=0
*/
void sub_71b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b210ULL || rel >= 0x71b220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b220 size=16 callers=0 calls=0
*/
void sub_71b220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b220ULL || rel >= 0x71b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b230 size=32 callers=0 calls=0
*/
void sub_71b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b230ULL || rel >= 0x71b250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b250 size=96 callers=0 calls=0
*/
void sub_71b250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b250ULL || rel >= 0x71b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b2b0 size=32 callers=0 calls=0
*/
void sub_71b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b2b0ULL || rel >= 0x71b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b2d0 size=224 callers=0 calls=0
*/
void sub_71b2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b2d0ULL || rel >= 0x71b3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b3b0 size=64 callers=0 calls=0
*/
void sub_71b3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b3b0ULL || rel >= 0x71b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b3f0 size=48 callers=0 calls=0
*/
void sub_71b3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b3f0ULL || rel >= 0x71b420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b420 size=688 callers=0 calls=2
   calls: sub_71b940, sub_ce0
*/
void sub_71b420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b420ULL || rel >= 0x71b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b6d0 size=32 callers=0 calls=1
   calls: sub_c70
*/
void sub_71b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b6d0ULL || rel >= 0x71b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b6f0 size=16 callers=0 calls=0
*/
void sub_71b6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b6f0ULL || rel >= 0x71b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b700 size=16 callers=0 calls=0
*/
void sub_71b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b700ULL || rel >= 0x71b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b710 size=240 callers=0 calls=5
   calls: sub_70da70, sub_70db70, sub_71b800, sub_c70, sub_ce0
*/
void sub_71b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b710ULL || rel >= 0x71b800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b800 size=32 callers=1 calls=0
*/
void sub_71b800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b800ULL || rel >= 0x71b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b820 size=224 callers=0 calls=2
   calls: sub_722e50, sub_ce0
*/
void sub_71b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b820ULL || rel >= 0x71b900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b900 size=64 callers=0 calls=1
   calls: sub_ce0
*/
void sub_71b900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b900ULL || rel >= 0x71b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071b940 size=368 callers=1 calls=2
   calls: sub_71bab0, sub_ce0
*/
void sub_71b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71b940ULL || rel >= 0x71bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071bab0 size=384 callers=5 calls=4
   calls: sub_70da70, sub_70db70, sub_722d70, sub_c70
*/
void sub_71bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71bab0ULL || rel >= 0x71bc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071bc30 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_71bc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71bc30ULL || rel >= 0x71bc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071bc70 size=16 callers=0 calls=0
*/
void sub_71bc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71bc70ULL || rel >= 0x71bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071bc80 size=48 callers=0 calls=1
   calls: sub_71c7a0
*/
void sub_71bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71bc80ULL || rel >= 0x71bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071bcb0 size=32 callers=0 calls=1
   calls: sub_71c7a0
*/
void sub_71bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71bcb0ULL || rel >= 0x71bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071bcd0 size=80 callers=0 calls=1
   calls: sub_71c7a0
*/
void sub_71bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71bcd0ULL || rel >= 0x71bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071bd20 size=96 callers=0 calls=1
   calls: sub_71c810
*/
void sub_71bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71bd20ULL || rel >= 0x71bd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071bd80 size=80 callers=0 calls=1
   calls: sub_71c810
*/
void sub_71bd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71bd80ULL || rel >= 0x71bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071bdd0 size=272 callers=0 calls=1
   calls: sub_71c810
*/
void sub_71bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71bdd0ULL || rel >= 0x71bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071bee0 size=64 callers=0 calls=1
   calls: sub_71c810
*/
void sub_71bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71bee0ULL || rel >= 0x71bf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071bf20 size=80 callers=0 calls=1
   calls: sub_71c810
*/
void sub_71bf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71bf20ULL || rel >= 0x71bf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071bf70 size=240 callers=0 calls=6
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_71c1e0, sub_71c810
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/reflection_
   ref: CHECK failed: this == other_mutator: 
*/
void gflnet3_reflection_internal_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71bf70ULL || rel >= 0x71c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c060 size=16 callers=0 calls=0
*/
void sub_71c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c060ULL || rel >= 0x71c070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c070 size=16 callers=0 calls=0
*/
void sub_71c070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c070ULL || rel >= 0x71c080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c080 size=16 callers=0 calls=0
*/
void sub_71c080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c080ULL || rel >= 0x71c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c090 size=304 callers=1 calls=4
   calls: sub_7162c0, sub_7178b0, sub_71c1c0, sub_722e50
*/
void sub_71c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c090ULL || rel >= 0x71c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c1c0 size=32 callers=7 calls=0
*/
void sub_71c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c1c0ULL || rel >= 0x71c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c1e0 size=288 callers=2 calls=1
   calls: sub_71c300
*/
void sub_71c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c1e0ULL || rel >= 0x71c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c300 size=272 callers=2 calls=3
   calls: sub_7178b0, sub_71c1c0, sub_722d70
*/
void sub_71c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c300ULL || rel >= 0x71c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c410 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_71c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c410ULL || rel >= 0x71c450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c450 size=16 callers=0 calls=0
*/
void sub_71c450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c450ULL || rel >= 0x71c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c460 size=16 callers=0 calls=0
*/
void sub_71c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c460ULL || rel >= 0x71c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c470 size=16 callers=0 calls=0
*/
void sub_71c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c470ULL || rel >= 0x71c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c480 size=32 callers=0 calls=0
*/
void sub_71c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c480ULL || rel >= 0x71c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c4a0 size=96 callers=0 calls=0
*/
void sub_71c4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c4a0ULL || rel >= 0x71c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c500 size=32 callers=0 calls=0
*/
void sub_71c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c500ULL || rel >= 0x71c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c520 size=256 callers=0 calls=0
*/
void sub_71c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c520ULL || rel >= 0x71c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c620 size=48 callers=0 calls=0
*/
void sub_71c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c620ULL || rel >= 0x71c650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c650 size=48 callers=0 calls=0
*/
void sub_71c650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c650ULL || rel >= 0x71c680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c680 size=208 callers=0 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_71c1e0
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/reflection_
   ref: CHECK failed: this == other_mutator: 
*/
void gflnet3_reflection_internal_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c680ULL || rel >= 0x71c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c750 size=16 callers=0 calls=0
*/
void sub_71c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c750ULL || rel >= 0x71c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c760 size=16 callers=0 calls=0
*/
void sub_71c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c760ULL || rel >= 0x71c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

