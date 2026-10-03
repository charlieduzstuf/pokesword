/* subsdk0 functions 0025d280..0028d5c0 (17 of 20). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0025d280 size=128 callers=0 calls=1
   calls: sub_25c9e0
*/
void sub_25d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d280ULL || rel >= 0x25d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d300 size=256 callers=0 calls=3
   calls: sub_25d510, sub_25d7e0, sub_25e3e0
*/
void sub_25d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d300ULL || rel >= 0x25d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d400 size=208 callers=0 calls=0
*/
void sub_25d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d400ULL || rel >= 0x25d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d4d0 size=64 callers=0 calls=0
*/
void sub_25d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d4d0ULL || rel >= 0x25d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d510 size=16 callers=1 calls=0
*/
void sub_25d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d510ULL || rel >= 0x25d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d520 size=16 callers=0 calls=0
*/
void sub_25d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d520ULL || rel >= 0x25d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d530 size=240 callers=0 calls=0
*/
void sub_25d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d530ULL || rel >= 0x25d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d620 size=64 callers=0 calls=0
*/
void sub_25d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d620ULL || rel >= 0x25d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d660 size=48 callers=0 calls=0
*/
void sub_25d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d660ULL || rel >= 0x25d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d690 size=32 callers=0 calls=0
*/
void sub_25d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d690ULL || rel >= 0x25d6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d6b0 size=64 callers=0 calls=0
*/
void sub_25d6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d6b0ULL || rel >= 0x25d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d6f0 size=64 callers=0 calls=0
*/
void sub_25d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d6f0ULL || rel >= 0x25d730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d730 size=32 callers=0 calls=0
*/
void sub_25d730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d730ULL || rel >= 0x25d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d750 size=16 callers=0 calls=0
*/
void sub_25d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d750ULL || rel >= 0x25d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d760 size=16 callers=0 calls=0
*/
void sub_25d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d760ULL || rel >= 0x25d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d770 size=96 callers=0 calls=0
*/
void sub_25d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d770ULL || rel >= 0x25d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d7d0 size=16 callers=0 calls=0
*/
void sub_25d7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d7d0ULL || rel >= 0x25d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d7e0 size=16 callers=1 calls=0
*/
void sub_25d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d7e0ULL || rel >= 0x25d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d7f0 size=16 callers=0 calls=0
*/
void sub_25d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d7f0ULL || rel >= 0x25d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d800 size=464 callers=0 calls=0
   ref: audio/x-ms-wax
   ref: video/x-ms-wvx
   ref: cyworld.com
   ref: last.fm
*/
void x_ms_wvx(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d800ULL || rel >= 0x25d9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d9d0 size=64 callers=0 calls=0
*/
void sub_25d9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d9d0ULL || rel >= 0x25da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025da10 size=256 callers=0 calls=0
*/
void sub_25da10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25da10ULL || rel >= 0x25db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025db10 size=16 callers=0 calls=0
*/
void sub_25db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25db10ULL || rel >= 0x25db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025db20 size=1024 callers=0 calls=1
   calls: sub_25e260
*/
void sub_25db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25db20ULL || rel >= 0x25df20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025df20 size=16 callers=0 calls=0
*/
void sub_25df20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25df20ULL || rel >= 0x25df30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025df30 size=32 callers=0 calls=0
*/
void sub_25df30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25df30ULL || rel >= 0x25df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025df50 size=16 callers=0 calls=0
*/
void sub_25df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25df50ULL || rel >= 0x25df60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025df60 size=496 callers=0 calls=0
   ref: video/3gpp
   ref: audio/wav
   ref: audio/3gpp
   ref: video/x-ms-asf
   ref: audio/x-ms-wax
   ref: audio/ogg
   ref: audio/x-ms-wma
   ref: video/mp4
*/
void x_msvideo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25df60ULL || rel >= 0x25e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e150 size=256 callers=0 calls=0
*/
void sub_25e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e150ULL || rel >= 0x25e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e250 size=16 callers=0 calls=0
*/
void sub_25e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e250ULL || rel >= 0x25e260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e260 size=384 callers=2 calls=0
*/
void sub_25e260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e260ULL || rel >= 0x25e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e3e0 size=16 callers=1 calls=0
*/
void sub_25e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e3e0ULL || rel >= 0x25e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e3f0 size=16 callers=0 calls=0
*/
void sub_25e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e3f0ULL || rel >= 0x25e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e400 size=512 callers=0 calls=8
   calls: WMServer, application, f_1_2, f_1_3, sub_2633a0, sub_263420, sub_263430, sub_263500
*/
void sub_25e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e400ULL || rel >= 0x25e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e600 size=112 callers=0 calls=3
   calls: f_1_3, sub_263420, sub_263500
*/
void sub_25e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e600ULL || rel >= 0x25e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e670 size=512 callers=1 calls=8
   calls: WMServer, f_1_0_200_OK, f_1_0_200_OK_2, f_1_2, f_1_3, sub_263430, sub_263500, sub_266aa0
*/
void sub_25e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e670ULL || rel >= 0x25e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e870 size=32 callers=0 calls=0
*/
void sub_25e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e870ULL || rel >= 0x25e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e890 size=2032 callers=0 calls=8
   calls: WMServer, f_1_0_200_OK, f_1_2, f_1_3, sub_25e670, sub_263430, sub_263500, sub_266610
*/
void sub_25e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e890ULL || rel >= 0x25f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f080 size=16 callers=0 calls=0
*/
void sub_25f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f080ULL || rel >= 0x25f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f090 size=16 callers=0 calls=0
*/
void sub_25f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f090ULL || rel >= 0x25f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f0a0 size=16 callers=0 calls=0
*/
void sub_25f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f0a0ULL || rel >= 0x25f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f0b0 size=16 callers=0 calls=0
*/
void sub_25f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f0b0ULL || rel >= 0x25f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f0c0 size=464 callers=0 calls=1
   calls: sub_267490
*/
void sub_25f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f0c0ULL || rel >= 0x25f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f290 size=32 callers=0 calls=1
   calls: f_1_0_200_OK_2
*/
void sub_25f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f290ULL || rel >= 0x25f2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f2b0 size=528 callers=0 calls=1
   calls: sub_260350
*/
void sub_25f2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f2b0ULL || rel >= 0x25f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f4c0 size=560 callers=0 calls=2
   calls: sub_260350, sub_2671c0
*/
void sub_25f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f4c0ULL || rel >= 0x25f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f6f0 size=112 callers=1 calls=0
*/
void sub_25f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f6f0ULL || rel >= 0x25f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f760 size=80 callers=1 calls=0
*/
void sub_25f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f760ULL || rel >= 0x25f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f7b0 size=192 callers=1 calls=0
*/
void sub_25f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f7b0ULL || rel >= 0x25f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f870 size=80 callers=3 calls=0
*/
void sub_25f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f870ULL || rel >= 0x25f8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f8c0 size=320 callers=2 calls=1
   calls: sub_2637d0
*/
void sub_25f8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f8c0ULL || rel >= 0x25fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025fa00 size=832 callers=1 calls=0
*/
void sub_25fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25fa00ULL || rel >= 0x25fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025fd40 size=800 callers=2 calls=3
   calls: sub_263720, sub_2671c0, sub_2672f0
*/
void sub_25fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25fd40ULL || rel >= 0x260060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260060 size=752 callers=1 calls=2
   calls: sub_2637d0, sub_265cc0
   ref: MP4A-LATM
   ref: AMR-WB
   ref: MPEG4-GENERIC
   ref: X-ASF-PF
   ref: MP4V-ES
*/
void AMR_WB_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260060ULL || rel >= 0x260350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260350 size=64 callers=14 calls=0
*/
void sub_260350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260350ULL || rel >= 0x260390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260390 size=2304 callers=1 calls=1
   calls: sub_260c90
*/
void sub_260390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260390ULL || rel >= 0x260c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260c90 size=1760 callers=1 calls=0
*/
void sub_260c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260c90ULL || rel >= 0x261370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261370 size=1616 callers=0 calls=2
   calls: sub_260350, sub_2671c0
*/
void sub_261370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261370ULL || rel >= 0x2619c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002619c0 size=304 callers=0 calls=1
   calls: sub_260350
*/
void sub_2619c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2619c0ULL || rel >= 0x261af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261af0 size=192 callers=0 calls=1
   calls: sub_260350
*/
void sub_261af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261af0ULL || rel >= 0x261bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261bb0 size=512 callers=0 calls=1
   calls: sub_260350
*/
void sub_261bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261bb0ULL || rel >= 0x261db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261db0 size=1392 callers=0 calls=1
   calls: sub_263840
   ref: sprop-init-buf-time=
   ref: max-fs=
   ref: parameter-add=
   ref: deint-buf-cap=
   ref: sprop-interleaving-depth=
   ref: max-dpb=
   ref: max-rcmd-nalu-size=
   ref: max-br=
*/
void max_fs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261db0ULL || rel >= 0x262320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00262320 size=2736 callers=0 calls=3
   calls: sub_260350, sub_262dd0, sub_2671c0
*/
void sub_262320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x262320ULL || rel >= 0x262dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00262dd0 size=1488 callers=3 calls=4
   calls: sub_260350, sub_2672f0, sub_267300, sub_2673b0
*/
void sub_262dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x262dd0ULL || rel >= 0x2633a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002633a0 size=128 callers=1 calls=0
*/
void sub_2633a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2633a0ULL || rel >= 0x263420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263420 size=16 callers=2 calls=0
*/
void sub_263420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263420ULL || rel >= 0x263430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263430 size=208 callers=5 calls=0
*/
void sub_263430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263430ULL || rel >= 0x263500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263500 size=544 callers=5 calls=2
   calls: sub_25f8c0, sub_263720
*/
void sub_263500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263500ULL || rel >= 0x263720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263720 size=176 callers=6 calls=0
*/
void sub_263720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263720ULL || rel >= 0x2637d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002637d0 size=112 callers=2 calls=0
*/
void sub_2637d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2637d0ULL || rel >= 0x263840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263840 size=1104 callers=3 calls=0
*/
void sub_263840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263840ULL || rel >= 0x263c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263c90 size=4000 callers=2 calls=4
   calls: AMR_WB_2, sub_25f6f0, sub_260390, sub_263840
   ref: range:
   ref: maxps:
   ref: video 
   ref: data:application/vnd.ms.wms-hdr.asfv1;base64,
   ref: indexdeltalength=
   ref: object=
   ref: control:
   ref: bitrate=
*/
void application(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263c90ULL || rel >= 0x264c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264c30 size=1296 callers=3 calls=4
   calls: application, f_1_3, sub_263430, sub_263500
   ref: Content-Base: 
   ref: CSeq: 
   ref: Content-Location: 
   ref: User-Agent: 
   ref: DESCRIBE %s RTSP/1.0
   ref: Content-Length: 
   ref: DESCRIBE %s RTSP/1.0
   ref: Location: 
*/
void f_1_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264c30ULL || rel >= 0x265140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00265140 size=576 callers=5 calls=1
   calls: sub_25f8c0
   ref: Session: %s
   ref: TEARDOWN %s RTSP/1.0
   ref: User-Agent: %s
*/
void f_1_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x265140ULL || rel >= 0x265380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00265380 size=2368 callers=3 calls=3
   calls: sub_25f760, sub_25f7b0, sub_25f870
   ref: WMServer
   ref: SETUP %s RTSP/1.0
   ref: Server: 
   ref: Session: %s
   ref: Transport: 
   ref: Session: 
   ref: server_port=
   ref: User-Agent: %s
*/
void WMServer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x265380ULL || rel >= 0x265cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00265cc0 size=144 callers=1 calls=0
*/
void sub_265cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x265cc0ULL || rel >= 0x265d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00265d50 size=1712 callers=2 calls=0
   ref: Range: 
   ref: rtptime=
   ref: PLAY %s RTSP/1.0
   ref: Session: %s
   ref: RTP-Info:
   ref: Range: npt=%0.3f-
   ref: User-Agent: %s
   ref: RTSP/1.0 200 OK
*/
void f_1_0_200_OK(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x265d50ULL || rel >= 0x266400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00266400 size=528 callers=2 calls=0
   ref: PAUSE %s RTSP/1.0
   ref: Session: %s
   ref: User-Agent: %s
   ref: RTSP/1.0 200 OK
*/
void f_1_0_200_OK_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x266400ULL || rel >= 0x266610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00266610 size=272 callers=1 calls=1
   calls: sub_266720
*/
void sub_266610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x266610ULL || rel >= 0x266720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00266720 size=896 callers=1 calls=0
*/
void sub_266720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x266720ULL || rel >= 0x266aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00266aa0 size=384 callers=1 calls=2
   calls: sub_263720, sub_2671c0
*/
void sub_266aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x266aa0ULL || rel >= 0x266c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00266c20 size=928 callers=0 calls=4
   calls: f_1_0_200_OK_3, sub_25fa00, sub_25fd40, sub_2671c0
*/
void sub_266c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x266c20ULL || rel >= 0x266fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00266fc0 size=512 callers=1 calls=0
   ref: Session: %s
   ref: OPTIONS %s RTSP/1.0
   ref: User-Agent: %s
   ref: RTSP/1.0 200 OK
*/
void f_1_0_200_OK_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x266fc0ULL || rel >= 0x2671c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002671c0 size=304 callers=11 calls=0
*/
void sub_2671c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2671c0ULL || rel >= 0x2672f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002672f0 size=16 callers=2 calls=0
*/
void sub_2672f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2672f0ULL || rel >= 0x267300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267300 size=176 callers=6 calls=0
*/
void sub_267300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267300ULL || rel >= 0x2673b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002673b0 size=224 callers=2 calls=0
*/
void sub_2673b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2673b0ULL || rel >= 0x267490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267490 size=384 callers=1 calls=0
*/
void sub_267490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267490ULL || rel >= 0x267610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267610 size=256 callers=0 calls=0
*/
void sub_267610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267610ULL || rel >= 0x267710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267710 size=64 callers=0 calls=0
*/
void sub_267710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267710ULL || rel >= 0x267750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267750 size=608 callers=0 calls=0
*/
void sub_267750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267750ULL || rel >= 0x2679b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002679b0 size=288 callers=0 calls=0
*/
void sub_2679b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2679b0ULL || rel >= 0x267ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267ad0 size=96 callers=0 calls=0
*/
void sub_267ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267ad0ULL || rel >= 0x267b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267b30 size=96 callers=0 calls=0
*/
void sub_267b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267b30ULL || rel >= 0x267b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267b90 size=640 callers=0 calls=0
*/
void sub_267b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267b90ULL || rel >= 0x267e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267e10 size=64 callers=0 calls=0
*/
void sub_267e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267e10ULL || rel >= 0x267e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267e50 size=3456 callers=0 calls=1
   calls: sub_268bd0
   ref: theora
   ref: #!AMR-WB
*/
void theora(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267e50ULL || rel >= 0x268bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00268bd0 size=1904 callers=2 calls=1
   calls: sub_268bd0
*/
void sub_268bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x268bd0ULL || rel >= 0x269340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269340 size=400 callers=0 calls=1
   calls: s_s
   ref: nvlog.%d.level
   ref: NV_LOG_LEVEL
*/
void NV_LOG_LEVEL(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269340ULL || rel >= 0x2694d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002694d0 size=176 callers=0 calls=0
   ref: nvlog.%d.level
   ref: nvlog.level
*/
void nvlog(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2694d0ULL || rel >= 0x269580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269580 size=752 callers=0 calls=0
*/
void sub_269580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269580ULL || rel >= 0x269870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269870 size=32 callers=0 calls=0
*/
void sub_269870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269870ULL || rel >= 0x269890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269890 size=1024 callers=0 calls=0
*/
void sub_269890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269890ULL || rel >= 0x269c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269c90 size=128 callers=0 calls=0
*/
void sub_269c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269c90ULL || rel >= 0x269d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269d10 size=96 callers=0 calls=0
*/
void sub_269d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269d10ULL || rel >= 0x269d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269d70 size=304 callers=0 calls=0
*/
void sub_269d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269d70ULL || rel >= 0x269ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269ea0 size=144 callers=0 calls=0
*/
void sub_269ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269ea0ULL || rel >= 0x269f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269f30 size=192 callers=0 calls=0
*/
void sub_269f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269f30ULL || rel >= 0x269ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269ff0 size=176 callers=0 calls=0
*/
void sub_269ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269ff0ULL || rel >= 0x26a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a0a0 size=1168 callers=0 calls=0
*/
void sub_26a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a0a0ULL || rel >= 0x26a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a530 size=64 callers=0 calls=0
*/
void sub_26a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a530ULL || rel >= 0x26a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a570 size=352 callers=0 calls=1
   calls: sub_26a6d0
*/
void sub_26a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a570ULL || rel >= 0x26a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a6d0 size=240 callers=4 calls=0
*/
void sub_26a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a6d0ULL || rel >= 0x26a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a7c0 size=80 callers=0 calls=0
*/
void sub_26a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a7c0ULL || rel >= 0x26a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a810 size=240 callers=0 calls=1
   calls: sub_26a6d0
*/
void sub_26a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a810ULL || rel >= 0x26a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a900 size=192 callers=0 calls=1
   calls: sub_26a6d0
*/
void sub_26a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a900ULL || rel >= 0x26a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a9c0 size=80 callers=0 calls=1
   calls: sub_26a6d0
*/
void sub_26a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a9c0ULL || rel >= 0x26aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026aa10 size=64 callers=0 calls=0
*/
void sub_26aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26aa10ULL || rel >= 0x26aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026aa50 size=32 callers=0 calls=0
*/
void sub_26aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26aa50ULL || rel >= 0x26aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026aa70 size=32 callers=0 calls=0
*/
void sub_26aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26aa70ULL || rel >= 0x26aa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026aa90 size=208 callers=0 calls=0
*/
void sub_26aa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26aa90ULL || rel >= 0x26ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ab60 size=176 callers=0 calls=0
*/
void sub_26ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ab60ULL || rel >= 0x26ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ac10 size=160 callers=0 calls=0
*/
void sub_26ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ac10ULL || rel >= 0x26acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026acb0 size=128 callers=0 calls=0
*/
void sub_26acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26acb0ULL || rel >= 0x26ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ad30 size=176 callers=0 calls=0
*/
void sub_26ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ad30ULL || rel >= 0x26ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ade0 size=64 callers=0 calls=0
*/
void sub_26ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ade0ULL || rel >= 0x26ae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ae20 size=32 callers=0 calls=0
*/
void sub_26ae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ae20ULL || rel >= 0x26ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ae40 size=176 callers=0 calls=0
*/
void sub_26ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ae40ULL || rel >= 0x26aef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026aef0 size=528 callers=0 calls=0
   ref: NV_CK_HEADER
*/
void NV_CK_HEADER(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26aef0ULL || rel >= 0x26b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026b100 size=192 callers=0 calls=0
*/
void sub_26b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26b100ULL || rel >= 0x26b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026b1c0 size=192 callers=0 calls=0
*/
void sub_26b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26b1c0ULL || rel >= 0x26b280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026b280 size=160 callers=0 calls=0
*/
void sub_26b280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26b280ULL || rel >= 0x26b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026b320 size=576 callers=2 calls=0
*/
void sub_26b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26b320ULL || rel >= 0x26b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026b560 size=2240 callers=0 calls=0
   ref: GET %s HTTP/1.1
   ref: transfer-encoding: 
   ref: video/x-ms-asf
   ref: audio/x-ms-wax
   ref: Accept: * /*
   ref: content-type: 
   ref: location: 
   ref: GET %s HTTP/1.0
*/
void chunked(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26b560ULL || rel >= 0x26be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026be20 size=16 callers=0 calls=0
*/
void sub_26be20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26be20ULL || rel >= 0x26be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026be30 size=1344 callers=0 calls=0
   ref: POST %s HTTP/1.1
   ref: content-type: 
   ref: location: 
   ref: content-length: 
   ref: audio/mpeg
   ref: icy-metaint:
*/
void mpeg_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26be30ULL || rel >= 0x26c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c370 size=448 callers=0 calls=1
   calls: sub_26b320
*/
void sub_26c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c370ULL || rel >= 0x26c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c530 size=448 callers=0 calls=1
   calls: sub_26b320
*/
void sub_26c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c530ULL || rel >= 0x26c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c6f0 size=160 callers=0 calls=0
*/
void sub_26c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c6f0ULL || rel >= 0x26c790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c790 size=48 callers=0 calls=0
*/
void sub_26c790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c790ULL || rel >= 0x26c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c7c0 size=160 callers=0 calls=0
*/
void sub_26c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c7c0ULL || rel >= 0x26c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c860 size=48 callers=0 calls=0
*/
void sub_26c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c860ULL || rel >= 0x26c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c890 size=16 callers=0 calls=0
*/
void sub_26c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c890ULL || rel >= 0x26c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c8a0 size=48 callers=0 calls=0
*/
void sub_26c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c8a0ULL || rel >= 0x26c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c8d0 size=48 callers=0 calls=0
*/
void sub_26c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c8d0ULL || rel >= 0x26c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c900 size=96 callers=0 calls=0
*/
void sub_26c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c900ULL || rel >= 0x26c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c960 size=80 callers=0 calls=0
*/
void sub_26c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c960ULL || rel >= 0x26c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c9b0 size=32 callers=0 calls=0
*/
void sub_26c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c9b0ULL || rel >= 0x26c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c9d0 size=32 callers=0 calls=0
*/
void sub_26c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c9d0ULL || rel >= 0x26c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c9f0 size=48 callers=0 calls=0
*/
void sub_26c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c9f0ULL || rel >= 0x26ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ca20 size=80 callers=0 calls=0
*/
void sub_26ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ca20ULL || rel >= 0x26ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ca70 size=176 callers=0 calls=0
*/
void sub_26ca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ca70ULL || rel >= 0x26cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026cb20 size=48 callers=0 calls=0
*/
void sub_26cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26cb20ULL || rel >= 0x26cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026cb50 size=112 callers=0 calls=0
*/
void sub_26cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26cb50ULL || rel >= 0x26cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026cbc0 size=80 callers=0 calls=0
*/
void sub_26cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26cbc0ULL || rel >= 0x26cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026cc10 size=112 callers=0 calls=0
*/
void sub_26cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26cc10ULL || rel >= 0x26cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026cc80 size=112 callers=0 calls=0
*/
void sub_26cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26cc80ULL || rel >= 0x26ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ccf0 size=80 callers=0 calls=0
*/
void sub_26ccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ccf0ULL || rel >= 0x26cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026cd40 size=48 callers=0 calls=0
*/
void sub_26cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26cd40ULL || rel >= 0x26cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026cd70 size=48 callers=0 calls=0
*/
void sub_26cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26cd70ULL || rel >= 0x26cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026cda0 size=48 callers=0 calls=0
*/
void sub_26cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26cda0ULL || rel >= 0x26cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026cdd0 size=48 callers=0 calls=0
*/
void sub_26cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26cdd0ULL || rel >= 0x26ce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ce00 size=48 callers=0 calls=0
*/
void sub_26ce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ce00ULL || rel >= 0x26ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ce30 size=48 callers=0 calls=0
*/
void sub_26ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ce30ULL || rel >= 0x26ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ce60 size=48 callers=0 calls=0
*/
void sub_26ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ce60ULL || rel >= 0x26ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ce90 size=32 callers=0 calls=0
*/
void sub_26ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ce90ULL || rel >= 0x26ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ceb0 size=496 callers=0 calls=0
*/
void sub_26ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ceb0ULL || rel >= 0x26d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d0a0 size=128 callers=0 calls=0
*/
void sub_26d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d0a0ULL || rel >= 0x26d120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d120 size=176 callers=0 calls=0
*/
void sub_26d120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d120ULL || rel >= 0x26d1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d1d0 size=64 callers=0 calls=0
*/
void sub_26d1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d1d0ULL || rel >= 0x26d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d210 size=16 callers=0 calls=0
*/
void sub_26d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d210ULL || rel >= 0x26d220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d220 size=32 callers=0 calls=0
*/
void sub_26d220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d220ULL || rel >= 0x26d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d240 size=128 callers=0 calls=0
*/
void sub_26d240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d240ULL || rel >= 0x26d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d2c0 size=16 callers=0 calls=0
*/
void sub_26d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d2c0ULL || rel >= 0x26d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d2d0 size=32 callers=0 calls=0
*/
void sub_26d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d2d0ULL || rel >= 0x26d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d2f0 size=32 callers=0 calls=0
*/
void sub_26d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d2f0ULL || rel >= 0x26d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d310 size=16 callers=0 calls=0
*/
void sub_26d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d310ULL || rel >= 0x26d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d320 size=48 callers=0 calls=0
*/
void sub_26d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d320ULL || rel >= 0x26d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d350 size=32 callers=0 calls=0
*/
void sub_26d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d350ULL || rel >= 0x26d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d370 size=32 callers=0 calls=0
*/
void sub_26d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d370ULL || rel >= 0x26d390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d390 size=32 callers=0 calls=0
*/
void sub_26d390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d390ULL || rel >= 0x26d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d3b0 size=320 callers=0 calls=0
*/
void sub_26d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d3b0ULL || rel >= 0x26d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d4f0 size=144 callers=0 calls=0
*/
void sub_26d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d4f0ULL || rel >= 0x26d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d580 size=272 callers=0 calls=0
*/
void sub_26d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d580ULL || rel >= 0x26d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d690 size=96 callers=0 calls=0
*/
void sub_26d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d690ULL || rel >= 0x26d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d6f0 size=96 callers=0 calls=0
*/
void sub_26d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d6f0ULL || rel >= 0x26d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d750 size=432 callers=0 calls=0
*/
void sub_26d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d750ULL || rel >= 0x26d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d900 size=416 callers=0 calls=0
*/
void sub_26d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d900ULL || rel >= 0x26daa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026daa0 size=112 callers=0 calls=0
*/
void sub_26daa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26daa0ULL || rel >= 0x26db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026db10 size=16 callers=0 calls=0
*/
void sub_26db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26db10ULL || rel >= 0x26db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026db20 size=128 callers=0 calls=0
*/
void sub_26db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26db20ULL || rel >= 0x26dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026dba0 size=464 callers=0 calls=0
   ref: Video Input, 
   ref: %d, %u
   ref: SendBuffer, 
   ref: EncAAC, 
   ref: UnknownEvent, 
   ref: StartProcessing, 
   ref: Video Output, 
   ref: 3GP Video, 
*/
void d_u(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26dba0ULL || rel >= 0x26dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026dd70 size=16 callers=0 calls=0
*/
void sub_26dd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26dd70ULL || rel >= 0x26dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026dd80 size=192 callers=0 calls=0
*/
void sub_26dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26dd80ULL || rel >= 0x26de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026de40 size=96 callers=0 calls=0
*/
void sub_26de40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26de40ULL || rel >= 0x26dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026dea0 size=112 callers=0 calls=0
*/
void sub_26dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26dea0ULL || rel >= 0x26df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026df10 size=112 callers=0 calls=0
*/
void sub_26df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26df10ULL || rel >= 0x26df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026df80 size=176 callers=1 calls=0
   ref: %s%s :: 
*/
void s_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26df80ULL || rel >= 0x26e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e030 size=16 callers=0 calls=0
*/
void sub_26e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e030ULL || rel >= 0x26e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e040 size=16 callers=0 calls=0
*/
void sub_26e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e040ULL || rel >= 0x26e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e050 size=16 callers=0 calls=0
*/
void sub_26e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e050ULL || rel >= 0x26e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e060 size=16 callers=0 calls=0
*/
void sub_26e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e060ULL || rel >= 0x26e070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e070 size=16 callers=0 calls=0
*/
void sub_26e070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e070ULL || rel >= 0x26e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e080 size=16 callers=0 calls=0
*/
void sub_26e080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e080ULL || rel >= 0x26e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e090 size=16 callers=0 calls=0
*/
void sub_26e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e090ULL || rel >= 0x26e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e0a0 size=16 callers=0 calls=0
*/
void sub_26e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e0a0ULL || rel >= 0x26e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e0b0 size=16 callers=0 calls=0
*/
void sub_26e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e0b0ULL || rel >= 0x26e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e0c0 size=16 callers=0 calls=0
*/
void sub_26e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e0c0ULL || rel >= 0x26e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e0d0 size=16 callers=0 calls=0
*/
void sub_26e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e0d0ULL || rel >= 0x26e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e0e0 size=16 callers=0 calls=0
*/
void sub_26e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e0e0ULL || rel >= 0x26e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e0f0 size=16 callers=0 calls=0
*/
void sub_26e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e0f0ULL || rel >= 0x26e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e100 size=16 callers=0 calls=0
*/
void sub_26e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e100ULL || rel >= 0x26e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e110 size=1232 callers=0 calls=0
   ref: libnvmmlite_audio
   ref: libnvmmlite_image
   ref: libnvmmlite_msaudio
   ref: libnvmmlite_video
*/
void libnvmmlite_msaudio(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e110ULL || rel >= 0x26e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e5e0 size=112 callers=0 calls=0
*/
void sub_26e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e5e0ULL || rel >= 0x26e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e650 size=96 callers=0 calls=0
*/
void sub_26e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e650ULL || rel >= 0x26e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e6b0 size=128 callers=0 calls=0
*/
void sub_26e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e6b0ULL || rel >= 0x26e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e730 size=96 callers=0 calls=0
*/
void sub_26e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e730ULL || rel >= 0x26e790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e790 size=144 callers=0 calls=0
*/
void sub_26e790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e790ULL || rel >= 0x26e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e820 size=32 callers=0 calls=0
*/
void sub_26e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e820ULL || rel >= 0x26e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e840 size=80 callers=0 calls=0
*/
void sub_26e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e840ULL || rel >= 0x26e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e890 size=128 callers=0 calls=0
*/
void sub_26e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e890ULL || rel >= 0x26e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e910 size=16 callers=0 calls=0
*/
void sub_26e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e910ULL || rel >= 0x26e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e920 size=96 callers=0 calls=0
*/
void sub_26e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e920ULL || rel >= 0x26e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e980 size=96 callers=0 calls=0
*/
void sub_26e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e980ULL || rel >= 0x26e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e9e0 size=32 callers=0 calls=0
*/
void sub_26e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e9e0ULL || rel >= 0x26ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ea00 size=48 callers=0 calls=0
*/
void sub_26ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ea00ULL || rel >= 0x26ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ea30 size=48 callers=0 calls=0
*/
void sub_26ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ea30ULL || rel >= 0x26ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ea60 size=32 callers=0 calls=0
*/
void sub_26ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ea60ULL || rel >= 0x26ea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ea80 size=48 callers=0 calls=0
*/
void sub_26ea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ea80ULL || rel >= 0x26eab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026eab0 size=144 callers=0 calls=0
*/
void sub_26eab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26eab0ULL || rel >= 0x26eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026eb40 size=16 callers=0 calls=0
*/
void sub_26eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26eb40ULL || rel >= 0x26eb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026eb50 size=16 callers=0 calls=0
*/
void sub_26eb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26eb50ULL || rel >= 0x26eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026eb60 size=16 callers=0 calls=0
*/
void sub_26eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26eb60ULL || rel >= 0x26eb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026eb70 size=16 callers=0 calls=0
*/
void sub_26eb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26eb70ULL || rel >= 0x26eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026eb80 size=144 callers=0 calls=0
*/
void sub_26eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26eb80ULL || rel >= 0x26ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ec10 size=144 callers=0 calls=0
*/
void sub_26ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ec10ULL || rel >= 0x26eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026eca0 size=496 callers=0 calls=0
*/
void sub_26eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26eca0ULL || rel >= 0x26ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ee90 size=128 callers=0 calls=0
*/
void sub_26ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ee90ULL || rel >= 0x26ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ef10 size=432 callers=0 calls=0
*/
void sub_26ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ef10ULL || rel >= 0x26f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026f0c0 size=416 callers=0 calls=0
*/
void sub_26f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26f0c0ULL || rel >= 0x26f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026f260 size=480 callers=0 calls=0
*/
void sub_26f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26f260ULL || rel >= 0x26f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026f440 size=128 callers=0 calls=0
*/
void sub_26f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26f440ULL || rel >= 0x26f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026f4c0 size=944 callers=0 calls=0
*/
void sub_26f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26f4c0ULL || rel >= 0x26f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026f870 size=16 callers=0 calls=0
*/
void sub_26f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26f870ULL || rel >= 0x26f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026f880 size=128 callers=0 calls=0
*/
void sub_26f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26f880ULL || rel >= 0x26f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026f900 size=32 callers=0 calls=0
*/
void sub_26f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26f900ULL || rel >= 0x26f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026f920 size=272 callers=0 calls=0
*/
void sub_26f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26f920ULL || rel >= 0x26fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026fa30 size=80 callers=0 calls=0
*/
void sub_26fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26fa30ULL || rel >= 0x26fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026fa80 size=272 callers=0 calls=0
*/
void sub_26fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26fa80ULL || rel >= 0x26fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026fb90 size=304 callers=0 calls=0
*/
void sub_26fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26fb90ULL || rel >= 0x26fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026fcc0 size=96 callers=0 calls=0
*/
void sub_26fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26fcc0ULL || rel >= 0x26fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026fd20 size=144 callers=0 calls=0
*/
void sub_26fd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26fd20ULL || rel >= 0x26fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026fdb0 size=48 callers=0 calls=0
*/
void sub_26fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26fdb0ULL || rel >= 0x26fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026fde0 size=96 callers=0 calls=0
*/
void sub_26fde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26fde0ULL || rel >= 0x26fe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026fe40 size=112 callers=0 calls=0
*/
void sub_26fe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26fe40ULL || rel >= 0x26feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026feb0 size=272 callers=0 calls=1
   calls: sub_270010
*/
void sub_26feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26feb0ULL || rel >= 0x26ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ffc0 size=80 callers=0 calls=1
   calls: sub_270010
*/
void sub_26ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ffc0ULL || rel >= 0x270010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270010 size=304 callers=3 calls=0
*/
void sub_270010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270010ULL || rel >= 0x270140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270140 size=176 callers=0 calls=0
*/
void sub_270140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270140ULL || rel >= 0x2701f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002701f0 size=48 callers=0 calls=0
*/
void sub_2701f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2701f0ULL || rel >= 0x270220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270220 size=32 callers=0 calls=0
*/
void sub_270220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270220ULL || rel >= 0x270240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270240 size=48 callers=0 calls=0
*/
void sub_270240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270240ULL || rel >= 0x270270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270270 size=32 callers=0 calls=0
*/
void sub_270270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270270ULL || rel >= 0x270290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270290 size=32 callers=0 calls=0
*/
void sub_270290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270290ULL || rel >= 0x2702b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002702b0 size=32 callers=0 calls=0
*/
void sub_2702b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2702b0ULL || rel >= 0x2702d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002702d0 size=16 callers=0 calls=0
*/
void sub_2702d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2702d0ULL || rel >= 0x2702e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002702e0 size=16 callers=0 calls=0
*/
void sub_2702e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2702e0ULL || rel >= 0x2702f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002702f0 size=272 callers=0 calls=0
*/
void sub_2702f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2702f0ULL || rel >= 0x270400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270400 size=80 callers=0 calls=0
*/
void sub_270400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270400ULL || rel >= 0x270450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270450 size=16 callers=3 calls=0
*/
void sub_270450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270450ULL || rel >= 0x270460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270460 size=16 callers=5 calls=0
*/
void sub_270460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270460ULL || rel >= 0x270470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270470 size=16 callers=5 calls=0
*/
void sub_270470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270470ULL || rel >= 0x270480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270480 size=640 callers=0 calls=1
   calls: sub_2713b0
*/
void sub_270480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270480ULL || rel >= 0x270700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270700 size=352 callers=0 calls=0
*/
void sub_270700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270700ULL || rel >= 0x270860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270860 size=384 callers=0 calls=2
   calls: enable, sub_28d180
   ref: NvxTrace.ini
*/
void NvxTrace(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270860ULL || rel >= 0x2709e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002709e0 size=432 callers=0 calls=1
   calls: sub_28d1c0
*/
void sub_2709e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2709e0ULL || rel >= 0x270b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270b90 size=176 callers=0 calls=0
*/
void sub_270b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270b90ULL || rel >= 0x270c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270c40 size=496 callers=0 calls=0
*/
void sub_270c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270c40ULL || rel >= 0x270e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270e30 size=272 callers=0 calls=0
*/
void sub_270e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270e30ULL || rel >= 0x270f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270f40 size=240 callers=0 calls=0
*/
void sub_270f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270f40ULL || rel >= 0x271030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271030 size=32 callers=0 calls=0
*/
void sub_271030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271030ULL || rel >= 0x271050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271050 size=448 callers=0 calls=0
*/
void sub_271050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271050ULL || rel >= 0x271210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271210 size=272 callers=0 calls=0
*/
void sub_271210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271210ULL || rel >= 0x271320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271320 size=16 callers=0 calls=0
*/
void sub_271320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271320ULL || rel >= 0x271330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271330 size=16 callers=0 calls=0
*/
void sub_271330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271330ULL || rel >= 0x271340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271340 size=112 callers=0 calls=0
*/
void sub_271340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271340ULL || rel >= 0x2713b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002713b0 size=16 callers=2 calls=0
*/
void sub_2713b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2713b0ULL || rel >= 0x2713c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002713c0 size=48 callers=5 calls=0
*/
void sub_2713c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2713c0ULL || rel >= 0x2713f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002713f0 size=1120 callers=31 calls=6
   calls: NvMMNvxRunWorkerThread, sub_275790, sub_275840, sub_27dea0, sub_27df20, sub_27df60
*/
void sub_2713f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2713f0ULL || rel >= 0x271850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271850 size=128 callers=0 calls=0
*/
void sub_271850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271850ULL || rel >= 0x2718d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002718d0 size=288 callers=0 calls=1
   calls: sub_27ee40
*/
void sub_2718d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2718d0ULL || rel >= 0x2719f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002719f0 size=64 callers=0 calls=0
*/
void sub_2719f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2719f0ULL || rel >= 0x271a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271a30 size=240 callers=0 calls=0
*/
void sub_271a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271a30ULL || rel >= 0x271b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271b20 size=64 callers=0 calls=0
*/
void sub_271b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271b20ULL || rel >= 0x271b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271b60 size=336 callers=0 calls=4
   calls: sub_27df20, sub_27df60, sub_27eab0, sub_27ee40
*/
void sub_271b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271b60ULL || rel >= 0x271cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271cb0 size=80 callers=0 calls=0
*/
void sub_271cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271cb0ULL || rel >= 0x271d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271d00 size=48 callers=0 calls=0
*/
void sub_271d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271d00ULL || rel >= 0x271d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271d30 size=1104 callers=0 calls=3
   calls: sub_277010, sub_28d140, sub_28d160
*/
void sub_271d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271d30ULL || rel >= 0x272180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272180 size=64 callers=0 calls=1
   calls: NVNVRMSURFACENV
*/
void sub_272180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272180ULL || rel >= 0x2721c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002721c0 size=544 callers=0 calls=4
   calls: NVNVRMSURFACENV_2, sub_274b90, sub_276800, sub_27ee40
*/
void sub_2721c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2721c0ULL || rel >= 0x2723e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002723e0 size=896 callers=0 calls=7
   calls: NVNVRMSURFACENV_3, sub_2769e0, sub_2779b0, sub_27df20, sub_27df60, sub_27ee40, sub_29e250
*/
void sub_2723e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2723e0ULL || rel >= 0x272760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272760 size=368 callers=0 calls=5
   calls: sub_276c60, sub_277250, sub_27df20, sub_27df60, sub_27ee40
*/
void sub_272760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272760ULL || rel >= 0x2728d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002728d0 size=368 callers=0 calls=5
   calls: sub_276c60, sub_277430, sub_27df20, sub_27df60, sub_27ee40
*/
void sub_2728d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2728d0ULL || rel >= 0x272a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272a40 size=512 callers=0 calls=8
   calls: sub_274ea0, sub_275800, sub_277010, sub_27df20, sub_27df60, sub_27dfa0, sub_27e6a0, sub_29e6d0
*/
void sub_272a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272a40ULL || rel >= 0x272c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272c40 size=128 callers=0 calls=1
   calls: sub_29e6c0
*/
void sub_272c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272c40ULL || rel >= 0x272cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272cc0 size=96 callers=0 calls=0
*/
void sub_272cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272cc0ULL || rel >= 0x272d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272d20 size=1888 callers=9 calls=0
*/
void sub_272d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272d20ULL || rel >= 0x273480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273480 size=1424 callers=4 calls=1
   calls: sub_27ee40
*/
void sub_273480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273480ULL || rel >= 0x273a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273a10 size=16 callers=1 calls=0
*/
void sub_273a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273a10ULL || rel >= 0x273a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273a20 size=16 callers=1 calls=0
*/
void sub_273a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273a20ULL || rel >= 0x273a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273a30 size=112 callers=0 calls=0
*/
void sub_273a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273a30ULL || rel >= 0x273aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273aa0 size=432 callers=0 calls=0
*/
void sub_273aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273aa0ULL || rel >= 0x273c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273c50 size=432 callers=15 calls=3
   calls: sub_2759a0, sub_28d140, sub_28d160
*/
void sub_273c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273c50ULL || rel >= 0x273e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273e00 size=160 callers=7 calls=3
   calls: sub_276350, sub_28d140, sub_28d160
*/
void sub_273e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273e00ULL || rel >= 0x273ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273ea0 size=192 callers=0 calls=1
   calls: sub_2760f0
*/
void sub_273ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273ea0ULL || rel >= 0x273f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273f60 size=224 callers=0 calls=1
   calls: sub_276210
*/
void sub_273f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273f60ULL || rel >= 0x274040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274040 size=2256 callers=0 calls=10
   calls: sub_274ea0, sub_277720, sub_277f40, sub_278080, sub_2781b0, sub_2784e0, sub_2786d0, sub_278760, sub_27df20, sub_27df60
*/
void sub_274040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274040ULL || rel >= 0x274910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274910 size=640 callers=1 calls=2
   calls: sub_274b90, sub_276800
   ref: NVNVRMSURFACENV
*/
void NVNVRMSURFACENV(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274910ULL || rel >= 0x274b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274b90 size=544 callers=2 calls=1
   calls: sub_29e100
*/
void sub_274b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274b90ULL || rel >= 0x274db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274db0 size=64 callers=35 calls=0
*/
void sub_274db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274db0ULL || rel >= 0x274df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274df0 size=176 callers=1 calls=0
*/
void sub_274df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274df0ULL || rel >= 0x274ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274ea0 size=1808 callers=4 calls=10
   calls: sub_276a30, sub_276bb0, sub_276cc0, sub_277010, sub_277390, sub_2779b0, sub_278570, sub_27e4f0, sub_28d140, sub_28d160
*/
void sub_274ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274ea0ULL || rel >= 0x2755b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002755b0 size=80 callers=0 calls=0
*/
void sub_2755b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2755b0ULL || rel >= 0x275600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275600 size=176 callers=0 calls=2
   calls: sub_27eab0, sub_27ee40
*/
void sub_275600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275600ULL || rel >= 0x2756b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002756b0 size=128 callers=0 calls=2
   calls: sub_27df20, sub_27df60
*/
void sub_2756b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2756b0ULL || rel >= 0x275730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275730 size=96 callers=0 calls=2
   calls: sub_27df20, sub_27df60
*/
void sub_275730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275730ULL || rel >= 0x275790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275790 size=112 callers=1 calls=1
   calls: sub_27dea0
*/
void sub_275790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275790ULL || rel >= 0x275800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275800 size=64 callers=1 calls=1
   calls: sub_27dfa0
*/
void sub_275800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275800ULL || rel >= 0x275840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275840 size=352 callers=4 calls=2
   calls: sub_27df20, sub_27df60
*/
void sub_275840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275840ULL || rel >= 0x2759a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002759a0 size=336 callers=1 calls=3
   calls: sub_275af0, sub_27df20, sub_27df60
*/
void sub_2759a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2759a0ULL || rel >= 0x275af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275af0 size=1536 callers=3 calls=2
   calls: sub_27df20, sub_27df60
*/
void sub_275af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275af0ULL || rel >= 0x2760f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002760f0 size=288 callers=1 calls=3
   calls: sub_275af0, sub_27df20, sub_27df60
*/
void sub_2760f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2760f0ULL || rel >= 0x276210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276210 size=320 callers=1 calls=3
   calls: sub_275af0, sub_27df20, sub_27df60
*/
void sub_276210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276210ULL || rel >= 0x276350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276350 size=560 callers=1 calls=2
   calls: sub_27df20, sub_27df60
*/
void sub_276350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276350ULL || rel >= 0x276580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276580 size=32 callers=13 calls=0
*/
void sub_276580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276580ULL || rel >= 0x2765a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002765a0 size=112 callers=14 calls=0
*/
void sub_2765a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2765a0ULL || rel >= 0x276610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276610 size=160 callers=35 calls=0
   ref: application/octet-stream
*/
void octet_stream_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276610ULL || rel >= 0x2766b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002766b0 size=176 callers=28 calls=0
   ref: application/octet-stream
*/
void octet_stream_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2766b0ULL || rel >= 0x276760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276760 size=160 callers=6 calls=0
   ref: application/octet-stream
*/
void octet_stream_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276760ULL || rel >= 0x276800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276800 size=480 callers=3 calls=4
   calls: sub_2787b0, sub_27df20, sub_27df60, sub_27e320
*/
void sub_276800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276800ULL || rel >= 0x2769e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002769e0 size=80 callers=2 calls=0
*/
void sub_2769e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2769e0ULL || rel >= 0x276a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276a30 size=384 callers=1 calls=0
*/
void sub_276a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276a30ULL || rel >= 0x276bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276bb0 size=176 callers=1 calls=0
*/
void sub_276bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276bb0ULL || rel >= 0x276c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276c60 size=96 callers=2 calls=0
*/
void sub_276c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276c60ULL || rel >= 0x276cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276cc0 size=848 callers=3 calls=3
   calls: sub_276800, sub_276cc0, sub_27e3d0
*/
void sub_276cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276cc0ULL || rel >= 0x277010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277010 size=576 callers=7 calls=3
   calls: sub_27df20, sub_27df60, sub_27e390
*/
void sub_277010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277010ULL || rel >= 0x277250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277250 size=320 callers=10 calls=0
*/
void sub_277250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277250ULL || rel >= 0x277390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277390 size=160 callers=1 calls=0
*/
void sub_277390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277390ULL || rel >= 0x277430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277430 size=400 callers=2 calls=4
   calls: sub_2775c0, sub_27df20, sub_27df60, sub_27e3d0
*/
void sub_277430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277430ULL || rel >= 0x2775c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002775c0 size=352 callers=41 calls=2
   calls: sub_277430, sub_277840
*/
void sub_2775c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2775c0ULL || rel >= 0x277720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277720 size=288 callers=47 calls=4
   calls: sub_27df20, sub_27df60, sub_27e470, sub_27e4f0
*/
void sub_277720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277720ULL || rel >= 0x277840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277840 size=368 callers=2 calls=1
   calls: sub_274db0
*/
void sub_277840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277840ULL || rel >= 0x2779b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002779b0 size=1424 callers=4 calls=9
   calls: sub_2775c0, sub_277720, sub_277f50, sub_278080, sub_27df20, sub_27df60, sub_27e3d0, sub_27e470, sub_27e4f0
*/
void sub_2779b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2779b0ULL || rel >= 0x277f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277f40 size=16 callers=2 calls=0
*/
void sub_277f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277f40ULL || rel >= 0x277f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277f50 size=304 callers=21 calls=1
   calls: sub_277840
*/
void sub_277f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277f50ULL || rel >= 0x278080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278080 size=304 callers=3 calls=0
*/
void sub_278080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278080ULL || rel >= 0x2781b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002781b0 size=736 callers=1 calls=3
   calls: sub_278080, sub_27e3d0, sub_27e470
*/
void sub_2781b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2781b0ULL || rel >= 0x278490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278490 size=80 callers=2 calls=0
*/
void sub_278490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278490ULL || rel >= 0x2784e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002784e0 size=144 callers=1 calls=2
   calls: sub_277010, sub_2779b0
*/
void sub_2784e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2784e0ULL || rel >= 0x278570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278570 size=352 callers=2 calls=0
*/
void sub_278570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278570ULL || rel >= 0x2786d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002786d0 size=144 callers=1 calls=2
   calls: sub_276cc0, sub_278570
*/
void sub_2786d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2786d0ULL || rel >= 0x278760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278760 size=80 callers=1 calls=0
*/
void sub_278760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278760ULL || rel >= 0x2787b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002787b0 size=272 callers=2 calls=1
   calls: sub_2787b0
*/
void sub_2787b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2787b0ULL || rel >= 0x2788c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002788c0 size=352 callers=0 calls=1
   calls: sub_2713f0
*/
void sub_2788c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2788c0ULL || rel >= 0x278a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278a20 size=96 callers=0 calls=0
*/
void sub_278a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278a20ULL || rel >= 0x278a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278a80 size=944 callers=0 calls=2
   calls: sub_274df0, sub_277720
*/
void sub_278a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278a80ULL || rel >= 0x278e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278e30 size=208 callers=0 calls=1
   calls: sub_272d20
*/
void sub_278e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278e30ULL || rel >= 0x278f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278f00 size=208 callers=0 calls=1
   calls: sub_273480
*/
void sub_278f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278f00ULL || rel >= 0x278fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278fd0 size=160 callers=0 calls=1
   calls: sub_273a10
*/
void sub_278fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278fd0ULL || rel >= 0x279070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279070 size=160 callers=0 calls=1
   calls: sub_273a20
*/
void sub_279070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279070ULL || rel >= 0x279110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279110 size=64 callers=0 calls=0
*/
void sub_279110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279110ULL || rel >= 0x279150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279150 size=64 callers=0 calls=0
*/
void sub_279150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279150ULL || rel >= 0x279190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279190 size=144 callers=0 calls=0
*/
void sub_279190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279190ULL || rel >= 0x279220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279220 size=48 callers=0 calls=0
*/
void sub_279220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279220ULL || rel >= 0x279250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279250 size=64 callers=0 calls=0
*/
void sub_279250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279250ULL || rel >= 0x279290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279290 size=48 callers=0 calls=0
*/
void sub_279290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279290ULL || rel >= 0x2792c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002792c0 size=80 callers=0 calls=0
*/
void sub_2792c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2792c0ULL || rel >= 0x279310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279310 size=496 callers=0 calls=4
   calls: octet_stream_2, octet_stream_3, octet_stream_4, sub_2765a0
*/
void sub_279310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279310ULL || rel >= 0x279500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279500 size=80 callers=0 calls=1
   calls: sub_2775c0
*/
void sub_279500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279500ULL || rel >= 0x279550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279550 size=80 callers=0 calls=1
   calls: sub_277f50
*/
void sub_279550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279550ULL || rel >= 0x2795a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002795a0 size=80 callers=0 calls=1
   calls: sub_278490
*/
void sub_2795a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2795a0ULL || rel >= 0x2795f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002795f0 size=192 callers=0 calls=1
   calls: sub_279750
*/
void sub_2795f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2795f0ULL || rel >= 0x2796b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002796b0 size=160 callers=2 calls=0
*/
void sub_2796b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2796b0ULL || rel >= 0x279750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279750 size=48 callers=1 calls=0
*/
void sub_279750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279750ULL || rel >= 0x279780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279780 size=32 callers=1 calls=0
*/
void sub_279780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279780ULL || rel >= 0x2797a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002797a0 size=32 callers=1 calls=0
*/
void sub_2797a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2797a0ULL || rel >= 0x2797c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002797c0 size=32 callers=1 calls=0
*/
void sub_2797c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2797c0ULL || rel >= 0x2797e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002797e0 size=656 callers=0 calls=3
   calls: sub_2713f0, sub_2765a0, sub_27dea0
   ref: clock.binary
   ref: OMX.Nvidia.clock.component
*/
void clock_binary(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2797e0ULL || rel >= 0x279a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279a70 size=64 callers=0 calls=1
   calls: sub_27dfa0
*/
void sub_279a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279a70ULL || rel >= 0x279ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279ab0 size=256 callers=0 calls=2
   calls: sub_27df20, sub_27df60
*/
void sub_279ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279ab0ULL || rel >= 0x279bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279bb0 size=688 callers=0 calls=5
   calls: sub_27a0f0, sub_27a340, sub_27df20, sub_27df60, sub_27ee40
*/
void sub_279bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279bb0ULL || rel >= 0x279e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279e60 size=592 callers=0 calls=4
   calls: sub_277f50, sub_27a0f0, sub_27df20, sub_27df60
*/
void sub_279e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279e60ULL || rel >= 0x27a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a0b0 size=64 callers=0 calls=0
*/
void sub_27a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a0b0ULL || rel >= 0x27a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a0f0 size=592 callers=2 calls=1
   calls: sub_27a340
*/
void sub_27a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a0f0ULL || rel >= 0x27a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a340 size=640 callers=2 calls=1
   calls: sub_277f50
*/
void sub_27a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a340ULL || rel >= 0x27a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a5c0 size=512 callers=0 calls=3
   calls: octet_stream_2, octet_stream_3, sub_2713f0
   ref: OMX.Nvidia.mp4.write
   ref: container_muxer.3gp
   ref: data/test.out
*/
void test(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a5c0ULL || rel >= 0x27a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a7c0 size=80 callers=0 calls=0
*/
void sub_27a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a7c0ULL || rel >= 0x27a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a810 size=32 callers=0 calls=0
*/
void sub_27a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a810ULL || rel >= 0x27a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a830 size=1584 callers=0 calls=0
*/
void sub_27a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a830ULL || rel >= 0x27ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ae60 size=368 callers=0 calls=0
*/
void sub_27ae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ae60ULL || rel >= 0x27afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027afd0 size=240 callers=0 calls=0
*/
void sub_27afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27afd0ULL || rel >= 0x27b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027b0c0 size=256 callers=0 calls=2
   calls: sub_277720, sub_27ef70
*/
void sub_27b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27b0c0ULL || rel >= 0x27b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027b1c0 size=1296 callers=0 calls=4
   calls: sub_273c50, sub_27fb70, sub_280410, sub_280880
   ref: 3gpWriter
*/
void f_3gpWriter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27b1c0ULL || rel >= 0x27b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027b6d0 size=144 callers=0 calls=2
   calls: Total_packets_d, sub_273e00
*/
void sub_27b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27b6d0ULL || rel >= 0x27b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027b760 size=48 callers=0 calls=0
*/
void sub_27b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27b760ULL || rel >= 0x27b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027b790 size=112 callers=0 calls=0
*/
void sub_27b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27b790ULL || rel >= 0x27b800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027b800 size=448 callers=0 calls=4
   calls: octet_stream_3, sub_2713f0, sub_276580, sub_2765a0
   ref: OMX.Nvidia.video.scheduler
   ref: video_scheduler.binary
*/
void video_scheduler_binary(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27b800ULL || rel >= 0x27b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027b9c0 size=48 callers=0 calls=0
*/
void sub_27b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27b9c0ULL || rel >= 0x27b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027b9f0 size=1072 callers=0 calls=7
   calls: sub_2775c0, sub_277720, sub_277f50, sub_278490, sub_2796b0, sub_28f240, sub_29e2a0
*/
void sub_27b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27b9f0ULL || rel >= 0x27be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027be20 size=32 callers=0 calls=0
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

/* 0027be40 size=64 callers=0 calls=0
*/
void sub_27be40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27be40ULL || rel >= 0x27be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027be80 size=48 callers=0 calls=0
*/
void sub_27be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27be80ULL || rel >= 0x27beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027beb0 size=144 callers=0 calls=3
   calls: sub_2713f0, sub_2765a0, test_2
   ref: OMX.Nvidia.raw.read
   ref: raw_reader.binary
*/
void raw_reader_binary(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27beb0ULL || rel >= 0x27bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027bf40 size=288 callers=6 calls=0
   ref: test.mp3
*/
void test_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27bf40ULL || rel >= 0x27c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c060 size=320 callers=8 calls=0
   ref: test.out
*/
void test_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c060ULL || rel >= 0x27c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c1a0 size=144 callers=0 calls=3
   calls: octet_stream_2, sub_2713f0, test_2
   ref: OMX.Nvidia.audio.read
   ref: audio_reader.binary
*/
void audio_reader_binary(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c1a0ULL || rel >= 0x27c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c230 size=144 callers=0 calls=3
   calls: octet_stream_4, sub_2713f0, test_2
   ref: OMX.Nvidia.image.read
   ref: image_reader.binary
*/
void image_reader_binary(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c230ULL || rel >= 0x27c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c2c0 size=144 callers=0 calls=3
   calls: octet_stream_3, sub_2713f0, test_2
   ref: video_reader.binary
   ref: OMX.Nvidia.video.read
*/
void video_reader_binary(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c2c0ULL || rel >= 0x27c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c350 size=144 callers=0 calls=3
   calls: octet_stream_3, sub_2713f0, test_2
   ref: video_reader.binary
   ref: OMX.Nvidia.video.read.large
*/
void video_reader_binary_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c350ULL || rel >= 0x27c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c3e0 size=160 callers=0 calls=3
   calls: octet_stream_3, sub_2713f0, test_2
   ref: video_reader.binary
   ref: OMX.Nvidia.vidhdr.read
*/
void video_reader_binary_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c3e0ULL || rel >= 0x27c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c480 size=64 callers=0 calls=0
*/
void sub_27c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c480ULL || rel >= 0x27c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c4c0 size=224 callers=0 calls=0
*/
void sub_27c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c4c0ULL || rel >= 0x27c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c5a0 size=608 callers=0 calls=2
   calls: sub_277720, sub_277f50
*/
void sub_27c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c5a0ULL || rel >= 0x27c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c800 size=128 callers=0 calls=1
   calls: sub_273c50
*/
void sub_27c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c800ULL || rel >= 0x27c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c880 size=64 callers=0 calls=0
*/
void sub_27c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c880ULL || rel >= 0x27c8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c8c0 size=96 callers=0 calls=0
*/
void sub_27c8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c8c0ULL || rel >= 0x27c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c920 size=48 callers=0 calls=0
*/
void sub_27c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c920ULL || rel >= 0x27c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c950 size=96 callers=0 calls=0
*/
void sub_27c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c950ULL || rel >= 0x27c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c9b0 size=144 callers=0 calls=3
   calls: sub_2713f0, sub_2765a0, test_3
   ref: raw_writer.binary
   ref: OMX.Nvidia.raw.write
*/
void raw_writer_binary(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c9b0ULL || rel >= 0x27ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ca40 size=144 callers=0 calls=3
   calls: octet_stream_2, sub_2713f0, test_3
   ref: OMX.Nvidia.audio.write
   ref: audio_writer.binary
*/
void audio_writer_binary(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ca40ULL || rel >= 0x27cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027cad0 size=144 callers=0 calls=3
   calls: octet_stream_2, sub_2713f0, test_3
   ref: OMX.Nvidia.wav.write
   ref: wav_writer.binary
*/
void wav_writer_binary(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27cad0ULL || rel >= 0x27cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027cb60 size=144 callers=0 calls=3
   calls: octet_stream_2, sub_2713f0, test_3
   ref: OMX.Nvidia.amr.write
   ref: amr_writer.binary
*/
void amr_writer_binary(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27cb60ULL || rel >= 0x27cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027cbf0 size=144 callers=0 calls=3
   calls: octet_stream_4, sub_2713f0, test_3
   ref: OMX.Nvidia.image.write
   ref: image_writer.binary
*/
void image_writer_binary(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27cbf0ULL || rel >= 0x27cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027cc80 size=144 callers=0 calls=3
   calls: octet_stream_4, sub_2713f0, test_3
   ref: OMX.Nvidia.imagesequence.write
   ref: image_writer.binary
*/
void image_writer_binary_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27cc80ULL || rel >= 0x27cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027cd10 size=144 callers=0 calls=3
   calls: octet_stream_3, sub_2713f0, test_3
   ref: video_writer.binary
   ref: OMX.Nvidia.video.write
*/
void video_writer_binary(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27cd10ULL || rel >= 0x27cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027cda0 size=160 callers=0 calls=3
   calls: octet_stream_3, sub_2713f0, test_3
   ref: video_writer.binary
   ref: OMX.Nvidia.vidhdr.write
*/
void video_writer_binary_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27cda0ULL || rel >= 0x27ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ce40 size=64 callers=0 calls=0
*/
void sub_27ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ce40ULL || rel >= 0x27ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ce80 size=304 callers=0 calls=0
*/
void sub_27ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ce80ULL || rel >= 0x27cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027cfb0 size=112 callers=0 calls=0
*/
void sub_27cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27cfb0ULL || rel >= 0x27d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d020 size=960 callers=0 calls=3
   calls: sub_274db0, sub_2775c0, sub_277720
   ref: %s%08d%s
*/
void s_08d_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d020ULL || rel >= 0x27d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d3e0 size=128 callers=0 calls=1
   calls: sub_273c50
*/
void sub_27d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d3e0ULL || rel >= 0x27d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d460 size=320 callers=0 calls=1
   calls: sub_273e00
*/
void sub_27d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d460ULL || rel >= 0x27d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d5a0 size=48 callers=0 calls=0
*/
void sub_27d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d5a0ULL || rel >= 0x27d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d5d0 size=80 callers=0 calls=1
   calls: sub_270460
*/
void sub_27d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d5d0ULL || rel >= 0x27d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d620 size=272 callers=1 calls=0
   ref: AllTypes
   ref: Warning
   ref: CallGraph
   ref: Buffer
   ref: Worker
*/
void CallGraph(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d620ULL || rel >= 0x27d730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d730 size=1904 callers=1 calls=4
   calls: CallGraph, sub_270450, sub_270460, sub_270470
   ref: enable
   ref: defaultout.log
*/
void enable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d730ULL || rel >= 0x27dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027dea0 size=128 callers=14 calls=0
*/
void sub_27dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27dea0ULL || rel >= 0x27df20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027df20 size=64 callers=79 calls=0
*/
void sub_27df20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27df20ULL || rel >= 0x27df60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027df60 size=64 callers=105 calls=0
*/
void sub_27df60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27df60ULL || rel >= 0x27dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027dfa0 size=64 callers=13 calls=0
*/
void sub_27dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27dfa0ULL || rel >= 0x27dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027dfe0 size=192 callers=1 calls=0
*/
void sub_27dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27dfe0ULL || rel >= 0x27e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e0a0 size=64 callers=1 calls=0
*/
void sub_27e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e0a0ULL || rel >= 0x27e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e0e0 size=416 callers=1 calls=0
*/
void sub_27e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e0e0ULL || rel >= 0x27e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e280 size=16 callers=2 calls=0
*/
void sub_27e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e280ULL || rel >= 0x27e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e290 size=144 callers=2 calls=0
*/
void sub_27e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e290ULL || rel >= 0x27e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e320 size=112 callers=1 calls=0
*/
void sub_27e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e320ULL || rel >= 0x27e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e390 size=64 callers=1 calls=0
*/
void sub_27e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e390ULL || rel >= 0x27e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e3d0 size=160 callers=7 calls=0
*/
void sub_27e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e3d0ULL || rel >= 0x27e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e470 size=128 callers=4 calls=0
*/
void sub_27e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e470ULL || rel >= 0x27e4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e4f0 size=64 callers=3 calls=0
*/
void sub_27e4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e4f0ULL || rel >= 0x27e530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e530 size=208 callers=2 calls=0
*/
void sub_27e530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e530ULL || rel >= 0x27e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e600 size=160 callers=1 calls=4
   calls: sub_27df20, sub_27df60, sub_27dfa0, sub_27e6a0
*/
void sub_27e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e600ULL || rel >= 0x27e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e6a0 size=336 callers=2 calls=2
   calls: sub_27df20, sub_27df60
*/
void sub_27e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e6a0ULL || rel >= 0x27e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e7f0 size=704 callers=0 calls=2
   calls: sub_27df20, sub_27df60
*/
void sub_27e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e7f0ULL || rel >= 0x27eab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027eab0 size=160 callers=2 calls=0
*/
void sub_27eab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27eab0ULL || rel >= 0x27eb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027eb50 size=64 callers=0 calls=0
*/
void sub_27eb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27eb50ULL || rel >= 0x27eb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027eb90 size=384 callers=1 calls=3
   calls: sub_27dea0, sub_27df20, sub_27df60
   ref: NvMMNvxRunWorkerThread
*/
void NvMMNvxRunWorkerThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27eb90ULL || rel >= 0x27ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ed10 size=304 callers=0 calls=0
*/
void sub_27ed10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ed10ULL || rel >= 0x27ee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ee40 size=80 callers=31 calls=0
*/
void sub_27ee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ee40ULL || rel >= 0x27ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ee90 size=48 callers=4 calls=0
*/
void sub_27ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ee90ULL || rel >= 0x27eec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027eec0 size=32 callers=1 calls=0
*/
void sub_27eec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27eec0ULL || rel >= 0x27eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027eee0 size=128 callers=1 calls=0
*/
void sub_27eee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27eee0ULL || rel >= 0x27ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ef60 size=16 callers=3 calls=0
*/
void sub_27ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ef60ULL || rel >= 0x27ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ef70 size=320 callers=6 calls=0
*/
void sub_27ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ef70ULL || rel >= 0x27f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027f0b0 size=2752 callers=1 calls=9
   calls: sub_2775c0, sub_27df20, sub_27df60, sub_28d390, sub_28e880, sub_28f4b0, sub_28ffa0, sub_29e4e0, sub_2aecf0
*/
void sub_27f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27f0b0ULL || rel >= 0x27fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027fb70 size=1616 callers=5 calls=0
*/
void sub_27fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27fb70ULL || rel >= 0x2801c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002801c0 size=592 callers=0 calls=2
   calls: sub_274db0, sub_28fd00
*/
void sub_2801c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2801c0ULL || rel >= 0x280410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280410 size=16 callers=1 calls=0
*/
void sub_280410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280410ULL || rel >= 0x280420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280420 size=1120 callers=0 calls=7
   calls: image_decoder, sub_2775c0, sub_277720, sub_27df20, sub_27df60, sub_27ee40, sub_27f0b0
*/
void sub_280420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280420ULL || rel >= 0x280880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280880 size=1520 callers=7 calls=4
   calls: sub_27dea0, sub_280e70, sub_28d740, sub_28d9a0
*/
void sub_280880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280880ULL || rel >= 0x280e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280e70 size=336 callers=2 calls=0
*/
void sub_280e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280e70ULL || rel >= 0x280fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280fc0 size=672 callers=0 calls=6
   calls: image_decoder, sub_277720, sub_277f50, sub_27df20, sub_27df60, sub_2846d0
*/
void sub_280fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280fc0ULL || rel >= 0x281260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00281260 size=896 callers=5 calls=2
   calls: sub_27dea0, sub_280e70
*/
void sub_281260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x281260ULL || rel >= 0x2815e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002815e0 size=944 callers=0 calls=3
   calls: sub_2775c0, sub_27df20, sub_27df60
*/
void sub_2815e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2815e0ULL || rel >= 0x281990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00281990 size=816 callers=2 calls=1
   calls: sub_2775c0
*/
void sub_281990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x281990ULL || rel >= 0x281cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00281cc0 size=2096 callers=10 calls=2
   calls: sub_27dfa0, sub_2824f0
   ref: Average FPS (walltime): %f
   ref: Total display time (walltime): %f
   ref: Total decoding time (walltime): %f
   ref: Total packets: %d
*/
void Total_packets_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x281cc0ULL || rel >= 0x2824f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002824f0 size=1392 callers=2 calls=1
   calls: sub_28d390
*/
void sub_2824f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2824f0ULL || rel >= 0x282a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00282a60 size=4400 callers=2 calls=6
   calls: sub_274db0, sub_286c00, sub_28d390, sub_28d9a0, sub_28fd00, sub_2ae650
   ref: image_decoder.jpeg
*/
void image_decoder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x282a60ULL || rel >= 0x283b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00283b90 size=2880 callers=2 calls=7
   calls: sub_274db0, sub_27ee40, sub_28fd00, sub_2ab540, sub_2ac100, sub_2ae240, sub_2af600
*/
void sub_283b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x283b90ULL || rel >= 0x2846d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002846d0 size=3088 callers=3 calls=11
   calls: sub_274db0, sub_277720, sub_277f50, sub_27df20, sub_27df60, sub_28f240, sub_28f4b0, sub_28ffd0, sub_29e2a0, sub_2ae980, sub_2aeb00
*/
void sub_2846d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2846d0ULL || rel >= 0x2852e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002852e0 size=3392 callers=0 calls=2
   calls: sub_27ee40, sub_2ae710
*/
void sub_2852e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2852e0ULL || rel >= 0x286020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00286020 size=3040 callers=0 calls=5
   calls: sub_277720, sub_277f50, sub_27df20, sub_27df60, sub_2846d0
*/
void sub_286020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x286020ULL || rel >= 0x286c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00286c00 size=912 callers=1 calls=4
   calls: sub_274db0, sub_28d390, sub_28d740, sub_28d9a0
*/
void sub_286c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x286c00ULL || rel >= 0x286f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00286f90 size=19472 callers=1 calls=1
   calls: sub_28bba0
*/
void sub_286f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x286f90ULL || rel >= 0x28bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028bba0 size=704 callers=26 calls=0
*/
void sub_28bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28bba0ULL || rel >= 0x28be60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028be60 size=2432 callers=0 calls=2
   calls: sub_286f90, sub_28bba0
*/
void sub_28be60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28be60ULL || rel >= 0x28c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028c7e0 size=1312 callers=1 calls=0
*/
void sub_28c7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28c7e0ULL || rel >= 0x28cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028cd00 size=1088 callers=1 calls=0
*/
void sub_28cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28cd00ULL || rel >= 0x28d140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d140 size=32 callers=7 calls=0
*/
void sub_28d140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d140ULL || rel >= 0x28d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d160 size=32 callers=9 calls=0
*/
void sub_28d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d160ULL || rel >= 0x28d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d180 size=64 callers=1 calls=1
   calls: sub_27dea0
*/
void sub_28d180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d180ULL || rel >= 0x28d1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d1c0 size=128 callers=1 calls=2
   calls: sub_27dfa0, sub_27e600
*/
void sub_28d1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d1c0ULL || rel >= 0x28d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d240 size=80 callers=4 calls=0
*/
void sub_28d240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d240ULL || rel >= 0x28d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d290 size=128 callers=10 calls=0
*/
void sub_28d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d290ULL || rel >= 0x28d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d310 size=16 callers=5 calls=0
*/
void sub_28d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d310ULL || rel >= 0x28d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d320 size=16 callers=5 calls=0
*/
void sub_28d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d320ULL || rel >= 0x28d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d330 size=80 callers=3 calls=0
*/
void sub_28d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d330ULL || rel >= 0x28d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d380 size=16 callers=2 calls=0
*/
void sub_28d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d380ULL || rel >= 0x28d390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d390 size=48 callers=25 calls=0
*/
void sub_28d390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d390ULL || rel >= 0x28d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d3c0 size=464 callers=3 calls=0
*/
void sub_28d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d3c0ULL || rel >= 0x28d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d590 size=48 callers=2 calls=0
*/
void sub_28d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d590ULL || rel >= 0x28d5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d5c0 size=32 callers=2 calls=0
*/
void sub_28d5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d5c0ULL || rel >= 0x28d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

