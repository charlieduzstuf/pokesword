/* subsdk0 functions 0028d5e0..002c6000 (18 of 20). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0028d5e0 size=352 callers=2 calls=0
*/
void sub_28d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d5e0ULL || rel >= 0x28d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d740 size=608 callers=5 calls=1
   calls: sub_28d3c0
*/
void sub_28d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d740ULL || rel >= 0x28d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d9a0 size=688 callers=14 calls=1
   calls: sub_28d3c0
*/
void sub_28d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d9a0ULL || rel >= 0x28dc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028dc50 size=320 callers=1 calls=1
   calls: sub_28d9a0
*/
void sub_28dc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28dc50ULL || rel >= 0x28dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028dd90 size=224 callers=1 calls=1
   calls: sub_28dc50
   ref: NVNVRMSURFACENV
*/
void NVNVRMSURFACENV_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28dd90ULL || rel >= 0x28de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028de70 size=160 callers=1 calls=0
   ref: NVNVRMSURFACENV
*/
void NVNVRMSURFACENV_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28de70ULL || rel >= 0x28df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028df10 size=560 callers=5 calls=1
   calls: sub_28d740
*/
void sub_28df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28df10ULL || rel >= 0x28e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e140 size=64 callers=6 calls=0
*/
void sub_28e140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e140ULL || rel >= 0x28e180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e180 size=448 callers=1 calls=1
   calls: sub_28df10
*/
void sub_28e180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e180ULL || rel >= 0x28e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e340 size=96 callers=3 calls=1
   calls: sub_2af330
*/
void sub_28e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e340ULL || rel >= 0x28e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e3a0 size=32 callers=7 calls=0
*/
void sub_28e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e3a0ULL || rel >= 0x28e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e3c0 size=160 callers=2 calls=1
   calls: sub_2aeff0
*/
void sub_28e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e3c0ULL || rel >= 0x28e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e460 size=848 callers=3 calls=0
*/
void sub_28e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e460ULL || rel >= 0x28e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e7b0 size=208 callers=1 calls=1
   calls: sub_28e460
*/
void sub_28e7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e7b0ULL || rel >= 0x28e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e880 size=416 callers=2 calls=1
   calls: sub_28e460
*/
void sub_28e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e880ULL || rel >= 0x28ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ea20 size=64 callers=10 calls=0
*/
void sub_28ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ea20ULL || rel >= 0x28ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ea60 size=1824 callers=1 calls=0
*/
void sub_28ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ea60ULL || rel >= 0x28f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f180 size=192 callers=3 calls=0
*/
void sub_28f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f180ULL || rel >= 0x28f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f240 size=624 callers=3 calls=3
   calls: sub_27df20, sub_27df60, sub_28ea60
*/
void sub_28f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f240ULL || rel >= 0x28f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f4b0 size=496 callers=6 calls=2
   calls: sub_27df20, sub_27df60
*/
void sub_28f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f4b0ULL || rel >= 0x28f6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f6a0 size=1632 callers=1 calls=2
   calls: sub_27df20, sub_27df60
*/
void sub_28f6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f6a0ULL || rel >= 0x28fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028fd00 size=608 callers=6 calls=0
*/
void sub_28fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28fd00ULL || rel >= 0x28ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ff60 size=16 callers=3 calls=0
*/
void sub_28ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ff60ULL || rel >= 0x28ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ff70 size=32 callers=2 calls=0
*/
void sub_28ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ff70ULL || rel >= 0x28ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ff90 size=16 callers=1 calls=0
*/
void sub_28ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ff90ULL || rel >= 0x28ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ffa0 size=48 callers=2 calls=0
*/
void sub_28ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ffa0ULL || rel >= 0x28ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ffd0 size=48 callers=3 calls=0
*/
void sub_28ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ffd0ULL || rel >= 0x290000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290000 size=480 callers=8 calls=3
   calls: octet_stream_2, sub_2713c0, sub_2713f0
*/
void sub_290000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290000ULL || rel >= 0x2901e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002901e0 size=464 callers=4 calls=3
   calls: octet_stream_2, sub_2713c0, sub_2713f0
*/
void sub_2901e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2901e0ULL || rel >= 0x2903b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002903b0 size=272 callers=0 calls=0
*/
void sub_2903b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2903b0ULL || rel >= 0x2904c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002904c0 size=272 callers=0 calls=0
*/
void sub_2904c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2904c0ULL || rel >= 0x2905d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002905d0 size=288 callers=0 calls=2
   calls: octet_stream_2, sub_290000
   ref: BlockADTSDec
   ref: OMX.Nvidia.adts.decoder
   ref: audio_decoder.adts
*/
void BlockADTSDec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2905d0ULL || rel >= 0x2906f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002906f0 size=288 callers=0 calls=2
   calls: octet_stream_2, sub_290000
   ref: OMX.Nvidia.bsac.decoder
   ref: audio_decoder.bsac
   ref: BlockBSACDec
*/
void BlockBSACDec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2906f0ULL || rel >= 0x290810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290810 size=144 callers=0 calls=2
   calls: octet_stream_2, sub_290000
   ref: audio_decoder.wav
   ref: BlockWavDec
   ref: OMX.Nvidia.wav.decoder
*/
void BlockWavDec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290810ULL || rel >= 0x2908a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002908a0 size=272 callers=0 calls=2
   calls: octet_stream_2, sub_290000
   ref: WMAPRODec
   ref: OMX.Nvidia.wmapro.decoder
   ref: audio_decoder.wmapro
*/
void WMAPRODec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2908a0ULL || rel >= 0x2909b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002909b0 size=272 callers=0 calls=2
   calls: octet_stream_2, sub_290000
   ref: WMALSLDec
   ref: audio_decoder.wmalossless
   ref: OMX.Nvidia.wmalossless.decoder
*/
void WMALSLDec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2909b0ULL || rel >= 0x290ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290ac0 size=144 callers=0 calls=2
   calls: octet_stream_2, sub_290000
   ref: OMX.Nvidia.vorbis.decoder
   ref: audio_decoder.vorbis
   ref: BlockOGGDec
*/
void BlockOGGDec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290ac0ULL || rel >= 0x290b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290b50 size=256 callers=0 calls=2
   calls: octet_stream_2, sub_290000
   ref: BlockAMRDec
   ref: audio_decoder.amrnb
   ref: OMX.Nvidia.amr.decoder
*/
void BlockAMRDec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290b50ULL || rel >= 0x290c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290c50 size=256 callers=0 calls=2
   calls: octet_stream_2, sub_290000
   ref: OMX.Nvidia.amrwb.decoder
   ref: BlockAMRWBDec
   ref: audio_decoder.amrwb
*/
void BlockAMRWBDec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290c50ULL || rel >= 0x290d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290d50 size=48 callers=0 calls=0
*/
void sub_290d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290d50ULL || rel >= 0x290d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290d80 size=48 callers=0 calls=0
*/
void sub_290d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290d80ULL || rel >= 0x290db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290db0 size=2864 callers=0 calls=2
   calls: sub_272d20, sub_2ae4d0
*/
void sub_290db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290db0ULL || rel >= 0x2918e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002918e0 size=2368 callers=0 calls=2
   calls: sub_272d20, sub_2ae4d0
*/
void sub_2918e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2918e0ULL || rel >= 0x292220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292220 size=416 callers=0 calls=0
*/
void sub_292220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292220ULL || rel >= 0x2923c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002923c0 size=336 callers=0 calls=0
*/
void sub_2923c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2923c0ULL || rel >= 0x292510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292510 size=160 callers=0 calls=0
*/
void sub_292510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292510ULL || rel >= 0x2925b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002925b0 size=80 callers=0 calls=0
*/
void sub_2925b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2925b0ULL || rel >= 0x292600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292600 size=416 callers=0 calls=2
   calls: sub_27ee90, sub_27eec0
*/
void sub_292600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292600ULL || rel >= 0x2927a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002927a0 size=304 callers=0 calls=1
   calls: sub_2a7060
*/
void sub_2927a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2927a0ULL || rel >= 0x2928d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002928d0 size=608 callers=0 calls=7
   calls: Total_packets_d, sub_2775c0, sub_277720, sub_277f50, sub_27ef70, sub_281990, sub_293070
*/
void sub_2928d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2928d0ULL || rel >= 0x292b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292b30 size=192 callers=0 calls=3
   calls: sub_2775c0, sub_277720, sub_2a70c0
*/
void sub_292b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292b30ULL || rel >= 0x292bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292bf0 size=64 callers=0 calls=1
   calls: sub_273c50
*/
void sub_292bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292bf0ULL || rel >= 0x292c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292c30 size=256 callers=0 calls=4
   calls: sub_273c50, sub_2aa400, sub_2aaf20, sub_2ab7d0
*/
void sub_292c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292c30ULL || rel >= 0x292d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292d30 size=112 callers=0 calls=2
   calls: Total_packets_d, sub_273e00
*/
void sub_292d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292d30ULL || rel >= 0x292da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292da0 size=112 callers=0 calls=2
   calls: Total_packets_d_2, sub_273e00
*/
void sub_292da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292da0ULL || rel >= 0x292e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292e10 size=32 callers=0 calls=0
*/
void sub_292e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292e10ULL || rel >= 0x292e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292e30 size=32 callers=0 calls=0
*/
void sub_292e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292e30ULL || rel >= 0x292e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292e50 size=192 callers=0 calls=2
   calls: sub_279780, sub_281990
*/
void sub_292e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292e50ULL || rel >= 0x292f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292f10 size=64 callers=0 calls=0
*/
void sub_292f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292f10ULL || rel >= 0x292f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292f50 size=128 callers=0 calls=2
   calls: sub_277250, sub_27ef60
*/
void sub_292f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292f50ULL || rel >= 0x292fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292fd0 size=128 callers=0 calls=2
   calls: sub_277250, sub_2a70b0
*/
void sub_292fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292fd0ULL || rel >= 0x293050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293050 size=16 callers=0 calls=0
*/
void sub_293050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293050ULL || rel >= 0x293060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293060 size=16 callers=0 calls=0
*/
void sub_293060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293060ULL || rel >= 0x293070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293070 size=416 callers=1 calls=3
   calls: sub_27fb70, sub_280880, sub_281260
*/
void sub_293070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293070ULL || rel >= 0x293210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293210 size=80 callers=0 calls=1
   calls: sub_293260
   ref: audio_decoder.ac3
   ref: OMX.Nvidia.ac3.bypass.decoder
*/
void audio_decoder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293210ULL || rel >= 0x293260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293260 size=480 callers=3 calls=3
   calls: octet_stream_2, sub_2713c0, sub_2713f0
*/
void sub_293260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293260ULL || rel >= 0x293440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293440 size=80 callers=0 calls=1
   calls: sub_293260
   ref: audio_decoder.dts
   ref: OMX.Nvidia.dts.bypass.decoder
*/
void audio_decoder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293440ULL || rel >= 0x293490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293490 size=80 callers=0 calls=1
   calls: sub_293260
   ref: OMX.Nvidia.eac3.bypass.decoder
   ref: audio_decoder.x-eac3
*/
void audio_decoder_x_eac3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293490ULL || rel >= 0x2934e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002934e0 size=48 callers=0 calls=0
*/
void sub_2934e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2934e0ULL || rel >= 0x293510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293510 size=464 callers=0 calls=1
   calls: sub_272d20
*/
void sub_293510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293510ULL || rel >= 0x2936e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002936e0 size=256 callers=0 calls=0
   ref: audio_decoder.dts
   ref: audio_decoder.dtshd
   ref: audio_decoder.ac3
   ref: audio_decoder.truehd
*/
void audio_decoder_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2936e0ULL || rel >= 0x2937e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002937e0 size=80 callers=0 calls=0
*/
void sub_2937e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2937e0ULL || rel >= 0x293830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293830 size=128 callers=0 calls=0
*/
void sub_293830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293830ULL || rel >= 0x2938b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002938b0 size=512 callers=0 calls=5
   calls: sub_274db0, sub_2775c0, sub_277f50, sub_28c7e0, sub_28cd00
*/
void sub_2938b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2938b0ULL || rel >= 0x293ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293ab0 size=64 callers=0 calls=1
   calls: sub_273c50
*/
void sub_293ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293ab0ULL || rel >= 0x293af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293af0 size=32 callers=0 calls=0
*/
void sub_293af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293af0ULL || rel >= 0x293b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293b10 size=32 callers=0 calls=0
*/
void sub_293b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293b10ULL || rel >= 0x293b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293b30 size=16 callers=0 calls=0
*/
void sub_293b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293b30ULL || rel >= 0x293b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293b40 size=1056 callers=0 calls=4
   calls: octet_stream_3, sub_2713f0, sub_2765a0, sub_28ff60
   ref: iv_renderer.argb8888.overlay
   ref: iv_renderer.hdmi.yuv420
   ref: iv_renderer.argb8888
   ref: iv_renderer.crt.yuv420
   ref: iv_renderer.tvout.yuv420
   ref: iv_renderer.rgb565
   ref: OMX.Nvidia.video.render
   ref: iv_renderer.yuv.overlay
*/
void iv_renderer_rgb565(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293b40ULL || rel >= 0x293f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293f60 size=16 callers=0 calls=0
*/
void sub_293f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293f60ULL || rel >= 0x293f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293f70 size=16 callers=0 calls=0
*/
void sub_293f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293f70ULL || rel >= 0x293f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293f80 size=16 callers=0 calls=0
*/
void sub_293f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293f80ULL || rel >= 0x293f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293f90 size=16 callers=0 calls=0
*/
void sub_293f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293f90ULL || rel >= 0x293fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293fa0 size=16 callers=0 calls=0
*/
void sub_293fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293fa0ULL || rel >= 0x293fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293fb0 size=16 callers=0 calls=0
*/
void sub_293fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293fb0ULL || rel >= 0x293fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293fc0 size=16 callers=0 calls=0
*/
void sub_293fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293fc0ULL || rel >= 0x293fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293fd0 size=16 callers=0 calls=0
*/
void sub_293fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293fd0ULL || rel >= 0x293fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293fe0 size=16 callers=0 calls=0
*/
void sub_293fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293fe0ULL || rel >= 0x293ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293ff0 size=16 callers=0 calls=0
*/
void sub_293ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293ff0ULL || rel >= 0x294000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294000 size=1504 callers=0 calls=4
   calls: sub_27e280, sub_28e340, sub_28ff60, sub_2945e0
*/
void sub_294000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294000ULL || rel >= 0x2945e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002945e0 size=432 callers=2 calls=0
*/
void sub_2945e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2945e0ULL || rel >= 0x294790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294790 size=48 callers=0 calls=0
*/
void sub_294790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294790ULL || rel >= 0x2947c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002947c0 size=176 callers=0 calls=2
   calls: sub_277720, sub_294a90
*/
void sub_2947c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2947c0ULL || rel >= 0x294870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294870 size=368 callers=0 calls=3
   calls: sub_2775c0, sub_28e3a0, sub_295130
*/
void sub_294870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294870ULL || rel >= 0x2949e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002949e0 size=64 callers=0 calls=1
   calls: sub_2797c0
*/
void sub_2949e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2949e0ULL || rel >= 0x294a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294a20 size=112 callers=0 calls=3
   calls: sub_2775c0, sub_28e3a0, sub_295130
*/
void sub_294a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294a20ULL || rel >= 0x294a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294a90 size=1696 callers=2 calls=12
   calls: Frame_d_s, sub_274db0, sub_2775c0, sub_27e0e0, sub_28df10, sub_28e3a0, sub_28e460, sub_28f180, sub_2945e0, sub_295130, sub_295350, sub_295850
*/
void sub_294a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294a90ULL || rel >= 0x295130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295130 size=544 callers=3 calls=2
   calls: sub_28d380, sub_28ea20
*/
void sub_295130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295130ULL || rel >= 0x295350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295350 size=656 callers=2 calls=4
   calls: Frame_d_s, sub_28e3a0, sub_28e3c0, sub_2ae640
*/
void sub_295350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295350ULL || rel >= 0x2955e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002955e0 size=624 callers=2 calls=3
   calls: sub_28ea20, sub_29c020, sub_29c030
   ref: Frame %d: %s
*/
void Frame_d_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2955e0ULL || rel >= 0x295850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295850 size=432 callers=1 calls=0
*/
void sub_295850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295850ULL || rel >= 0x295a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295a00 size=48 callers=0 calls=0
*/
void sub_295a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295a00ULL || rel >= 0x295a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295a30 size=1360 callers=0 calls=0
*/
void sub_295a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295a30ULL || rel >= 0x295f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295f80 size=2352 callers=0 calls=12
   calls: sub_274db0, sub_2775c0, sub_277720, sub_277f40, sub_2796b0, sub_28d380, sub_28e180, sub_28ff70, sub_28ff90, sub_294a90, sub_295350, sub_2ae640
*/
void sub_295f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295f80ULL || rel >= 0x2968b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002968b0 size=1200 callers=0 calls=6
   calls: sub_273e00, sub_27e0a0, sub_27e290, sub_28e140, sub_28e340, sub_28ff70
   ref: starvation notifications = %d
   ref: Average FPS (walltime): %f
   ref: Total display time (walltime): %f
   ref: attempted frames = %d
   ref: very late frames > 80ms = %d
   ref: Lowest average real FPS: %f
   ref: Highest instantaneous jitter: %f uSec
   ref: Average FPS (display): %f
*/
void dropped_frames_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2968b0ULL || rel >= 0x296d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296d60 size=336 callers=0 calls=5
   calls: sub_273c50, sub_2797a0, sub_27dfe0, sub_27e280, sub_28ff60
   ref: frame delivery
   ref: VidRender.txt
*/
void frame_delivery(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296d60ULL || rel >= 0x296eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296eb0 size=112 callers=0 calls=1
   calls: sub_2775c0
*/
void sub_296eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296eb0ULL || rel >= 0x296f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296f20 size=384 callers=0 calls=3
   calls: octet_stream_3, sub_2713f0, sub_2765a0
   ref: OMX.Nvidia.render.loopback
   ref: iv_renderer.loopback
*/
void iv_renderer_loopback(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296f20ULL || rel >= 0x2970a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002970a0 size=48 callers=0 calls=0
*/
void sub_2970a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2970a0ULL || rel >= 0x2970d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002970d0 size=16 callers=0 calls=0
*/
void sub_2970d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2970d0ULL || rel >= 0x2970e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002970e0 size=16 callers=0 calls=0
*/
void sub_2970e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2970e0ULL || rel >= 0x2970f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002970f0 size=16 callers=0 calls=0
*/
void sub_2970f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2970f0ULL || rel >= 0x297100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297100 size=16 callers=0 calls=0
*/
void sub_297100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297100ULL || rel >= 0x297110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297110 size=16 callers=0 calls=0
*/
void sub_297110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297110ULL || rel >= 0x297120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297120 size=16 callers=0 calls=0
*/
void sub_297120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297120ULL || rel >= 0x297130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297130 size=336 callers=0 calls=3
   calls: sub_274db0, sub_2775c0, sub_277720
*/
void sub_297130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297130ULL || rel >= 0x297280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297280 size=16 callers=0 calls=0
*/
void sub_297280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297280ULL || rel >= 0x297290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297290 size=16 callers=0 calls=0
*/
void sub_297290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297290ULL || rel >= 0x2972a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002972a0 size=16 callers=0 calls=0
*/
void sub_2972a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2972a0ULL || rel >= 0x2972b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002972b0 size=48 callers=0 calls=0
*/
void sub_2972b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2972b0ULL || rel >= 0x2972e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002972e0 size=48 callers=0 calls=0
*/
void sub_2972e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2972e0ULL || rel >= 0x297310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297310 size=400 callers=0 calls=1
   calls: sub_272d20
*/
void sub_297310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297310ULL || rel >= 0x2974a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002974a0 size=496 callers=0 calls=1
   calls: sub_272d20
*/
void sub_2974a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2974a0ULL || rel >= 0x297690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297690 size=624 callers=0 calls=1
   calls: sub_273480
*/
void sub_297690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297690ULL || rel >= 0x297900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297900 size=976 callers=0 calls=1
   calls: sub_273480
*/
void sub_297900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297900ULL || rel >= 0x297cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297cd0 size=352 callers=0 calls=0
*/
void sub_297cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297cd0ULL || rel >= 0x297e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297e30 size=352 callers=0 calls=0
*/
void sub_297e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297e30ULL || rel >= 0x297f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297f90 size=2416 callers=0 calls=2
   calls: sub_27ee90, sub_29a210
*/
void sub_297f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297f90ULL || rel >= 0x298900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00298900 size=2240 callers=0 calls=2
   calls: sub_29a300, sub_2a7060
*/
void sub_298900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x298900ULL || rel >= 0x2991c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002991c0 size=608 callers=0 calls=2
   calls: sub_277720, sub_27ef70
*/
void sub_2991c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2991c0ULL || rel >= 0x299420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299420 size=416 callers=0 calls=2
   calls: sub_277720, sub_2a70c0
*/
void sub_299420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299420ULL || rel >= 0x2995c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002995c0 size=640 callers=0 calls=5
   calls: sub_273c50, sub_27fb70, sub_280880, sub_281260, sub_29a210
*/
void sub_2995c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2995c0ULL || rel >= 0x299840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299840 size=640 callers=0 calls=5
   calls: sub_273c50, sub_29a300, sub_2aa400, sub_2aaf20, sub_2ab7d0
*/
void sub_299840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299840ULL || rel >= 0x299ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299ac0 size=96 callers=0 calls=1
   calls: Total_packets_d
*/
void sub_299ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299ac0ULL || rel >= 0x299b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299b20 size=96 callers=0 calls=1
   calls: Total_packets_d_2
*/
void sub_299b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299b20ULL || rel >= 0x299b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299b80 size=32 callers=0 calls=0
*/
void sub_299b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299b80ULL || rel >= 0x299ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299ba0 size=32 callers=0 calls=0
*/
void sub_299ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299ba0ULL || rel >= 0x299bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299bc0 size=48 callers=0 calls=0
*/
void sub_299bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299bc0ULL || rel >= 0x299bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299bf0 size=48 callers=0 calls=0
*/
void sub_299bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299bf0ULL || rel >= 0x299c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299c20 size=128 callers=0 calls=2
   calls: sub_277250, sub_27ef60
*/
void sub_299c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299c20ULL || rel >= 0x299ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299ca0 size=128 callers=0 calls=2
   calls: sub_277250, sub_2a70b0
*/
void sub_299ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299ca0ULL || rel >= 0x299d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299d20 size=16 callers=0 calls=0
*/
void sub_299d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299d20ULL || rel >= 0x299d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299d30 size=16 callers=0 calls=0
*/
void sub_299d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299d30ULL || rel >= 0x299d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299d40 size=368 callers=0 calls=1
   calls: sub_280880
*/
void sub_299d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299d40ULL || rel >= 0x299eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299eb0 size=464 callers=0 calls=2
   calls: sub_2aaf20, sub_2ac000
*/
void sub_299eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299eb0ULL || rel >= 0x29a080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a080 size=208 callers=0 calls=2
   calls: sub_27df20, sub_27df60
*/
void sub_29a080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a080ULL || rel >= 0x29a150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a150 size=16 callers=0 calls=0
*/
void sub_29a150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a150ULL || rel >= 0x29a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a160 size=144 callers=0 calls=0
*/
void sub_29a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a160ULL || rel >= 0x29a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a1f0 size=32 callers=0 calls=0
*/
void sub_29a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a1f0ULL || rel >= 0x29a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a210 size=240 callers=2 calls=0
*/
void sub_29a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a210ULL || rel >= 0x29a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a300 size=416 callers=2 calls=0
*/
void sub_29a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a300ULL || rel >= 0x29a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a4a0 size=448 callers=4 calls=3
   calls: octet_stream_2, sub_2713c0, sub_2713f0
*/
void sub_29a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a4a0ULL || rel >= 0x29a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a660 size=272 callers=0 calls=2
   calls: octet_stream_2, sub_29a4a0
   ref: OMX.Nvidia.amr.encoder
   ref: audio_encoder.amrnb
   ref: BlockAmrnbEnc
*/
void BlockAmrnbEnc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a660ULL || rel >= 0x29a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a770 size=272 callers=0 calls=2
   calls: octet_stream_2, sub_29a4a0
   ref: OMX.Nvidia.amrwb.encoder
   ref: BlockAmrwbEnc
   ref: audio_encoder.amrwb
*/
void BlockAmrwbEnc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a770ULL || rel >= 0x29a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a880 size=144 callers=0 calls=2
   calls: octet_stream_2, sub_29a4a0
   ref: OMX.Nvidia.ilbc.encoder
   ref: BlockilbcEnc
   ref: audio_encoder.ilbc
*/
void BlockilbcEnc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a880ULL || rel >= 0x29a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a910 size=272 callers=0 calls=2
   calls: octet_stream_2, sub_29a4a0
   ref: audio_encoder.wav
   ref: OMX.Nvidia.wav.encoder
   ref: BlockAmrwbEnc
*/
void BlockAmrwbEnc_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a910ULL || rel >= 0x29aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029aa20 size=48 callers=0 calls=0
*/
void sub_29aa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29aa20ULL || rel >= 0x29aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029aa50 size=48 callers=0 calls=0
*/
void sub_29aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29aa50ULL || rel >= 0x29aa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029aa80 size=256 callers=0 calls=0
*/
void sub_29aa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29aa80ULL || rel >= 0x29ab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ab80 size=208 callers=0 calls=0
*/
void sub_29ab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ab80ULL || rel >= 0x29ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ac50 size=336 callers=0 calls=1
   calls: octet_stream_2
*/
void sub_29ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ac50ULL || rel >= 0x29ada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ada0 size=272 callers=0 calls=1
   calls: octet_stream_2
*/
void sub_29ada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ada0ULL || rel >= 0x29aeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029aeb0 size=96 callers=0 calls=0
*/
void sub_29aeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29aeb0ULL || rel >= 0x29af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029af10 size=16 callers=0 calls=0
*/
void sub_29af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29af10ULL || rel >= 0x29af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029af20 size=64 callers=0 calls=1
   calls: sub_27ee90
*/
void sub_29af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29af20ULL || rel >= 0x29af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029af60 size=64 callers=0 calls=1
   calls: sub_2a7060
*/
void sub_29af60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29af60ULL || rel >= 0x29afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029afa0 size=192 callers=0 calls=2
   calls: sub_277720, sub_27ef70
*/
void sub_29afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29afa0ULL || rel >= 0x29b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b060 size=144 callers=0 calls=2
   calls: sub_277720, sub_2a70c0
*/
void sub_29b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b060ULL || rel >= 0x29b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b0f0 size=1072 callers=0 calls=4
   calls: sub_273c50, sub_27fb70, sub_280880, sub_281260
*/
void sub_29b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b0f0ULL || rel >= 0x29b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b520 size=368 callers=0 calls=4
   calls: sub_273c50, sub_2aa400, sub_2aaf20, sub_2ab7d0
*/
void sub_29b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b520ULL || rel >= 0x29b690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b690 size=112 callers=0 calls=2
   calls: Total_packets_d, sub_273e00
*/
void sub_29b690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b690ULL || rel >= 0x29b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b700 size=112 callers=0 calls=2
   calls: Total_packets_d_2, sub_273e00
*/
void sub_29b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b700ULL || rel >= 0x29b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b770 size=32 callers=0 calls=0
*/
void sub_29b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b770ULL || rel >= 0x29b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b790 size=32 callers=0 calls=0
*/
void sub_29b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b790ULL || rel >= 0x29b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b7b0 size=48 callers=0 calls=0
*/
void sub_29b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b7b0ULL || rel >= 0x29b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b7e0 size=48 callers=0 calls=0
*/
void sub_29b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b7e0ULL || rel >= 0x29b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b810 size=128 callers=0 calls=2
   calls: sub_277250, sub_27ef60
*/
void sub_29b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b810ULL || rel >= 0x29b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b890 size=128 callers=0 calls=2
   calls: sub_277250, sub_2a70b0
*/
void sub_29b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b890ULL || rel >= 0x29b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b910 size=16 callers=0 calls=0
*/
void sub_29b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b910ULL || rel >= 0x29b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b920 size=16 callers=0 calls=0
*/
void sub_29b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b920ULL || rel >= 0x29b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b930 size=272 callers=0 calls=2
   calls: octet_stream_3, sub_2713f0
   ref: OMX.Nvidia.video.extractor
*/
void OMX_Nvidia_video_extractor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b930ULL || rel >= 0x29ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ba40 size=48 callers=0 calls=0
*/
void sub_29ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ba40ULL || rel >= 0x29ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ba70 size=32 callers=0 calls=0
*/
void sub_29ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ba70ULL || rel >= 0x29ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ba90 size=32 callers=0 calls=0
*/
void sub_29ba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ba90ULL || rel >= 0x29bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029bab0 size=176 callers=0 calls=0
*/
void sub_29bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29bab0ULL || rel >= 0x29bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029bb60 size=48 callers=0 calls=0
*/
void sub_29bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29bb60ULL || rel >= 0x29bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029bb90 size=944 callers=0 calls=7
   calls: sub_274db0, sub_2775c0, sub_277720, sub_28df10, sub_28e140, sub_28e7b0, sub_28ea20
*/
void sub_29bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29bb90ULL || rel >= 0x29bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029bf40 size=128 callers=0 calls=1
   calls: sub_28e140
*/
void sub_29bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29bf40ULL || rel >= 0x29bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029bfc0 size=96 callers=0 calls=0
*/
void sub_29bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29bfc0ULL || rel >= 0x29c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029c020 size=16 callers=1 calls=0
*/
void sub_29c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29c020ULL || rel >= 0x29c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029c030 size=64 callers=1 calls=0
*/
void sub_29c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29c030ULL || rel >= 0x29c070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029c070 size=1232 callers=0 calls=3
   calls: sub_2b0210, sub_2b0240, sub_2b0d30
*/
void sub_29c070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29c070ULL || rel >= 0x29c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029c540 size=1056 callers=0 calls=3
   calls: sub_2b0210, sub_2b0240, sub_2b0d30
*/
void sub_29c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29c540ULL || rel >= 0x29c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029c960 size=112 callers=0 calls=1
   calls: sub_29c9d0
   ref: OMX.Nvidia.asf.read
   ref: BlockASFParser
   ref: container_demuxer.asf
*/
void BlockASFParser(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29c960ULL || rel >= 0x29c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029c9d0 size=528 callers=7 calls=4
   calls: octet_stream_2, octet_stream_3, sub_2713f0, sub_276580
*/
void sub_29c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29c9d0ULL || rel >= 0x29cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cbe0 size=112 callers=0 calls=1
   calls: sub_29c9d0
   ref: container_demuxer.mkv
   ref: BlockMKVParser
   ref: OMX.Nvidia.mkv.read
*/
void BlockMKVParser(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cbe0ULL || rel >= 0x29cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cc50 size=112 callers=0 calls=1
   calls: sub_29c9d0
   ref: container_demuxer.3gp
   ref: OMX.Nvidia.mp4.read
   ref: Block3GPParser
*/
void Block3GPParser(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cc50ULL || rel >= 0x29ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ccc0 size=112 callers=0 calls=1
   calls: sub_29c9d0
   ref: OMX.Nvidia.avi.read
   ref: container_demuxer.avi
   ref: BlockAVIParser
*/
void BlockAVIParser(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ccc0ULL || rel >= 0x29cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cd30 size=112 callers=0 calls=1
   calls: sub_29c9d0
   ref: container_demuxer.wav
   ref: OMX.Nvidia.wav.read
   ref: BlockWAVParser
*/
void BlockWAVParser(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cd30ULL || rel >= 0x29cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cda0 size=112 callers=0 calls=1
   calls: sub_29c9d0
   ref: container_demuxer.aac
   ref: OMX.Nvidia.aac.read
   ref: BlockAACParser
*/
void BlockAACParser(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cda0ULL || rel >= 0x29ce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ce10 size=112 callers=0 calls=1
   calls: sub_29c9d0
   ref: container_demuxer.all
   ref: OMX.Nvidia.reader
   ref: SuperParser
*/
void SuperParser(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ce10ULL || rel >= 0x29ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ce80 size=144 callers=0 calls=1
   calls: Total_packets_d
*/
void sub_29ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ce80ULL || rel >= 0x29cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cf10 size=512 callers=0 calls=0
*/
void sub_29cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cf10ULL || rel >= 0x29d110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d110 size=480 callers=0 calls=1
   calls: sub_29db10
*/
void sub_29d110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d110ULL || rel >= 0x29d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d2f0 size=896 callers=0 calls=0
*/
void sub_29d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d2f0ULL || rel >= 0x29d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d670 size=608 callers=0 calls=2
   calls: sub_27ee90, sub_27eee0
*/
void sub_29d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d670ULL || rel >= 0x29d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d8d0 size=16 callers=0 calls=0
*/
void sub_29d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d8d0ULL || rel >= 0x29d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d8e0 size=352 callers=0 calls=2
   calls: sub_273c50, sub_281260
*/
void sub_29d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d8e0ULL || rel >= 0x29da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029da40 size=96 callers=0 calls=1
   calls: Total_packets_d
*/
void sub_29da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29da40ULL || rel >= 0x29daa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029daa0 size=48 callers=0 calls=0
*/
void sub_29daa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29daa0ULL || rel >= 0x29dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029dad0 size=48 callers=0 calls=0
*/
void sub_29dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29dad0ULL || rel >= 0x29db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029db00 size=16 callers=0 calls=0
*/
void sub_29db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29db00ULL || rel >= 0x29db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029db10 size=272 callers=2 calls=0
*/
void sub_29db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29db10ULL || rel >= 0x29dc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029dc20 size=1040 callers=1 calls=1
   calls: Total_packets_d
*/
void sub_29dc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29dc20ULL || rel >= 0x29e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e030 size=208 callers=0 calls=4
   calls: Total_packets_d, sub_27fb70, sub_29db10, sub_29dc20
*/
void sub_29e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e030ULL || rel >= 0x29e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e100 size=336 callers=1 calls=1
   calls: sub_28d290
*/
void sub_29e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e100ULL || rel >= 0x29e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e250 size=80 callers=1 calls=0
*/
void sub_29e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e250ULL || rel >= 0x29e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e2a0 size=576 callers=3 calls=2
   calls: sub_28d290, sub_28ea20
*/
void sub_29e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e2a0ULL || rel >= 0x29e4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e4e0 size=480 callers=2 calls=2
   calls: sub_28d290, sub_28ea20
*/
void sub_29e4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e4e0ULL || rel >= 0x29e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e6c0 size=16 callers=1 calls=0
*/
void sub_29e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e6c0ULL || rel >= 0x29e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e6d0 size=16 callers=1 calls=0
*/
void sub_29e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e6d0ULL || rel >= 0x29e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e6e0 size=608 callers=0 calls=3
   calls: octet_stream_2, sub_2713c0, sub_2713f0
   ref: BlockAACEnc
   ref: audio_encoder.aac
   ref: OMX.Nvidia.aac.encoder
*/
void BlockAACEnc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e6e0ULL || rel >= 0x29e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e940 size=496 callers=0 calls=4
   calls: octet_stream_3, octet_stream_4, sub_2713f0, sub_276580
   ref: BlockSuperJpgDec
   ref: OMX.Nvidia.jpeg.decoder
   ref: image_decoder.jpeg
*/
void BlockSuperJpgDec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e940ULL || rel >= 0x29eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029eb30 size=48 callers=0 calls=0
*/
void sub_29eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29eb30ULL || rel >= 0x29eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029eb60 size=384 callers=0 calls=1
   calls: sub_272d20
*/
void sub_29eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29eb60ULL || rel >= 0x29ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ece0 size=224 callers=0 calls=1
   calls: sub_2af540
*/
void sub_29ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ece0ULL || rel >= 0x29edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029edc0 size=768 callers=0 calls=0
*/
void sub_29edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29edc0ULL || rel >= 0x29f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f0c0 size=192 callers=0 calls=1
   calls: sub_2a7060
*/
void sub_29f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f0c0ULL || rel >= 0x29f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f180 size=240 callers=0 calls=2
   calls: sub_277720, sub_2a70c0
*/
void sub_29f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f180ULL || rel >= 0x29f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f270 size=272 callers=0 calls=5
   calls: sub_273c50, sub_2aa400, sub_2aa920, sub_2aaf20, sub_2ab7d0
*/
void sub_29f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f270ULL || rel >= 0x29f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f380 size=96 callers=0 calls=1
   calls: Total_packets_d_2
*/
void sub_29f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f380ULL || rel >= 0x29f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f3e0 size=32 callers=0 calls=0
*/
void sub_29f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f3e0ULL || rel >= 0x29f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f400 size=48 callers=0 calls=0
*/
void sub_29f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f400ULL || rel >= 0x29f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f430 size=128 callers=0 calls=2
   calls: sub_277250, sub_2a70b0
*/
void sub_29f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f430ULL || rel >= 0x29f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f4b0 size=16 callers=0 calls=0
*/
void sub_29f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f4b0ULL || rel >= 0x29f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f4c0 size=48 callers=0 calls=1
   calls: sub_2adca0
*/
void sub_29f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f4c0ULL || rel >= 0x29f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f4f0 size=528 callers=0 calls=3
   calls: octet_stream_3, octet_stream_4, sub_2713f0
   ref: image_encoder.jpeg
   ref: OMX.Nvidia.jpeg.encoder
   ref: BlockJpgEnc
*/
void BlockJpgEnc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f4f0ULL || rel >= 0x29f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f700 size=240 callers=0 calls=2
   calls: octet_stream_2, sub_2901e0
   ref: BlockMP3Dec
   ref: audio_decoder.mp2
   ref: OMX.Nvidia.mp2.decoder
*/
void BlockMP3Dec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f700ULL || rel >= 0x29f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f7f0 size=240 callers=0 calls=2
   calls: octet_stream_2, sub_2901e0
   ref: OMX.Nvidia.mp3.decoder
   ref: BlockMP3Dec
   ref: audio_decoder.mp3
*/
void BlockMP3Dec_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f7f0ULL || rel >= 0x29f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f8e0 size=304 callers=0 calls=2
   calls: octet_stream_2, sub_2901e0
   ref: audio_decoder.aac
   ref: OMX.Nvidia.eaacp.decoder
   ref: BlockAACDec
   ref: audio_decoder.aac.secure
   ref: audio_decoder.eaacplus
*/
void BlockAACDec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f8e0ULL || rel >= 0x29fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029fa10 size=256 callers=0 calls=2
   calls: octet_stream_2, sub_2901e0
   ref: audio_decoder.wma
   ref: OMX.Nvidia.wma.decoder
   ref: BlockWMADec
*/
void BlockWMADec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29fa10ULL || rel >= 0x29fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029fb10 size=656 callers=8 calls=3
   calls: octet_stream_3, sub_2713f0, sub_276580
*/
void sub_29fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29fb10ULL || rel >= 0x29fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029fda0 size=256 callers=1 calls=3
   calls: octet_stream_3, sub_276580, sub_29fb10
   ref: video_decoder.hevc
   ref: BlockH265Dec
   ref: OMX.Nvidia.h265.decode
*/
void BlockH265Dec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29fda0ULL || rel >= 0x29fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029fea0 size=80 callers=0 calls=1
   calls: BlockH265Dec
   ref: OMX.Nvidia.h265.decode.low.latency
*/
void OMX_Nvidia_h265_decode_low_latency(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29fea0ULL || rel >= 0x29fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029fef0 size=256 callers=1 calls=3
   calls: octet_stream_3, sub_276580, sub_29fb10
   ref: video_decoder.avc
   ref: OMX.Nvidia.h264.decode
   ref: BlockH264Dec
*/
void BlockH264Dec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29fef0ULL || rel >= 0x29fff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029fff0 size=80 callers=0 calls=1
   calls: BlockH264Dec
   ref: OMX.Nvidia.h264.decode.low.latency
*/
void OMX_Nvidia_h264_decode_low_latency(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29fff0ULL || rel >= 0x2a0040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0040 size=256 callers=0 calls=3
   calls: octet_stream_3, sub_276580, sub_29fb10
   ref: OMX.Nvidia.h264ext.decode
   ref: video_decoder.avc
   ref: BlockH264Dec
*/
void BlockH264Dec_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0040ULL || rel >= 0x2a0140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0140 size=256 callers=1 calls=3
   calls: octet_stream_3, sub_276580, sub_29fb10
   ref: video_decoder.vc1
   ref: video_decoder.wmv
   ref: BlockVc1Dec
   ref: OMX.Nvidia.vc1.decode
*/
void BlockVc1Dec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0140ULL || rel >= 0x2a0240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0240 size=112 callers=0 calls=1
   calls: BlockVc1Dec
   ref: video_decoder.vc1
   ref: OMX.Nvidia.vc1.decode.secure
   ref: video_decoder.vc1.secure
*/
void video_decoder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0240ULL || rel >= 0x2a02b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a02b0 size=288 callers=0 calls=3
   calls: octet_stream_3, sub_276580, sub_29fb10
   ref: video_decoder.vpx
   ref: OMX.Nvidia.vp8.decode
   ref: video_decoder.vp8
   ref: BlockVP8Dec
*/
void BlockVP8Dec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a02b0ULL || rel >= 0x2a03d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a03d0 size=288 callers=0 calls=3
   calls: octet_stream_3, sub_276580, sub_29fb10
   ref: video_decoder.vpx
   ref: video_decoder.vp9
   ref: OMX.Nvidia.vp9.decode
   ref: BlockVP9Dec
*/
void BlockVP9Dec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a03d0ULL || rel >= 0x2a04f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a04f0 size=256 callers=0 calls=3
   calls: octet_stream_3, sub_276580, sub_29fb10
   ref: video_decoder.mpeg2
   ref: BlockMpeg2Dec
   ref: OMX.Nvidia.mpeg2v.decode
*/
void BlockMpeg2Dec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a04f0ULL || rel >= 0x2a05f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a05f0 size=160 callers=0 calls=3
   calls: octet_stream_3, sub_276580, sub_29fb10
   ref: video_decoder.mjpeg
   ref: OMX.Nvidia.mjpeg.decoder
   ref: BlockMJpgDec
*/
void BlockMJpgDec(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a05f0ULL || rel >= 0x2a0690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0690 size=64 callers=0 calls=1
   calls: Total_packets_d_2
*/
void sub_2a0690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0690ULL || rel >= 0x2a06d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a06d0 size=2416 callers=0 calls=3
   calls: sub_272d20, sub_2aa400, sub_2ae400
   ref: OMX.Nvidia.h263.decode
*/
void OMX_Nvidia_h263_decode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a06d0ULL || rel >= 0x2a1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1040 size=1712 callers=0 calls=1
   calls: sub_2af540
*/
void sub_2a1040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1040ULL || rel >= 0x2a16f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a16f0 size=1296 callers=0 calls=0
*/
void sub_2a16f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a16f0ULL || rel >= 0x2a1c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1c00 size=960 callers=0 calls=1
   calls: sub_2a7060
*/
void sub_2a1c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1c00ULL || rel >= 0x2a1fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1fc0 size=384 callers=0 calls=2
   calls: sub_277720, sub_2a70c0
*/
void sub_2a1fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1fc0ULL || rel >= 0x2a2140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a2140 size=1344 callers=0 calls=5
   calls: sub_273c50, sub_2aa400, sub_2aa920, sub_2aaf20, sub_2ab7d0
   ref: OMX.Nvidia.h264.decode.secure
   ref: OMX.Nvidia.h265.decode.low.latency
   ref: OMX.Nvidia.h265.decode.secure
   ref: OMX.Nvidia.h264.decode
   ref: OMX.Nvidia.h265.decode
   ref: OMX.Nvidia.h264.decode.low.latency
*/
void OMX_Nvidia_h265_decode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a2140ULL || rel >= 0x2a2680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a2680 size=64 callers=0 calls=1
   calls: Total_packets_d_2
*/
void sub_2a2680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a2680ULL || rel >= 0x2a26c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a26c0 size=224 callers=0 calls=1
   calls: sub_2acea0
*/
void sub_2a26c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a26c0ULL || rel >= 0x2a27a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a27a0 size=48 callers=0 calls=0
*/
void sub_2a27a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a27a0ULL || rel >= 0x2a27d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a27d0 size=128 callers=0 calls=2
   calls: sub_277250, sub_2a70b0
*/
void sub_2a27d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a27d0ULL || rel >= 0x2a2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a2850 size=112 callers=0 calls=1
   calls: sub_2abbd0
*/
void sub_2a2850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a2850ULL || rel >= 0x2a28c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a28c0 size=16 callers=0 calls=0
*/
void sub_2a28c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a28c0ULL || rel >= 0x2a28d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a28d0 size=48 callers=0 calls=1
   calls: sub_2adca0
*/
void sub_2a28d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a28d0ULL || rel >= 0x2a2900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a2900 size=32 callers=0 calls=0
*/
void sub_2a2900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a2900ULL || rel >= 0x2a2920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a2920 size=304 callers=0 calls=2
   calls: enctune, octet_stream_3
   ref: BlockHevcEnc
   ref: video_encoder.hevc
   ref: OMX.Nvidia.h265.encoder
*/
void BlockHevcEnc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a2920ULL || rel >= 0x2a2a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a2a50 size=800 callers=2 calls=2
   calls: octet_stream_3, sub_2713f0
   ref: /system/etc/enctune.conf
*/
void enctune(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a2a50ULL || rel >= 0x2a2d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a2d70 size=320 callers=0 calls=2
   calls: enctune, octet_stream_3
   ref: OMX.Nvidia.h264.encoder
   ref: BlockAvcEnc
   ref: video_encoder.avc
*/
void BlockAvcEnc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a2d70ULL || rel >= 0x2a2eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a2eb0 size=112 callers=0 calls=1
   calls: Total_packets_d_2
*/
void sub_2a2eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a2eb0ULL || rel >= 0x2a2f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a2f20 size=2512 callers=0 calls=3
   calls: sub_272d20, sub_2aa400, sub_2ae400
*/
void sub_2a2f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a2f20ULL || rel >= 0x2a38f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a38f0 size=4048 callers=0 calls=4
   calls: sub_273480, sub_2a6a60, sub_2aa400, sub_2ae400
*/
void sub_2a38f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a38f0ULL || rel >= 0x2a48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a48c0 size=880 callers=0 calls=0
*/
void sub_2a48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a48c0ULL || rel >= 0x2a4c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4c30 size=1776 callers=0 calls=4
   calls: sub_27df20, sub_27df60, sub_2a6c30, sub_2a7060
*/
void sub_2a4c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4c30ULL || rel >= 0x2a5320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5320 size=208 callers=0 calls=2
   calls: sub_277720, sub_2a70c0
*/
void sub_2a5320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5320ULL || rel >= 0x2a53f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a53f0 size=5376 callers=0 calls=8
   calls: sub_270450, sub_270460, sub_270470, sub_273c50, sub_2a6c30, sub_2aa400, sub_2aaf20, sub_2ab7d0
   ref: BMinQP
   ref: BMaxQP
   ref: SliceLevelEncode
   ref: packettype
   ref: medium
   ref: UseConstrainedBP
   ref: BInitQP
   ref: IMinQP
*/
void InsertSPSPPSAtIDR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a53f0ULL || rel >= 0x2a68f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a68f0 size=96 callers=0 calls=1
   calls: Total_packets_d_2
*/
void sub_2a68f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a68f0ULL || rel >= 0x2a6950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6950 size=32 callers=0 calls=0
*/
void sub_2a6950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6950ULL || rel >= 0x2a6970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6970 size=48 callers=0 calls=0
*/
void sub_2a6970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6970ULL || rel >= 0x2a69a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a69a0 size=128 callers=0 calls=2
   calls: sub_277250, sub_2a70b0
*/
void sub_2a69a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a69a0ULL || rel >= 0x2a6a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6a20 size=16 callers=0 calls=0
*/
void sub_2a6a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6a20ULL || rel >= 0x2a6a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6a30 size=48 callers=0 calls=0
*/
void sub_2a6a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6a30ULL || rel >= 0x2a6a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6a60 size=464 callers=2 calls=0
*/
void sub_2a6a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6a60ULL || rel >= 0x2a6c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6c30 size=880 callers=3 calls=1
   calls: sub_2a6a60
*/
void sub_2a6c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6c30ULL || rel >= 0x2a6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6fa0 size=16 callers=0 calls=0
*/
void sub_2a6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6fa0ULL || rel >= 0x2a6fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6fb0 size=16 callers=0 calls=0
*/
void sub_2a6fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6fb0ULL || rel >= 0x2a6fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6fc0 size=16 callers=0 calls=0
*/
void sub_2a6fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6fc0ULL || rel >= 0x2a6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6fd0 size=16 callers=0 calls=0
*/
void sub_2a6fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6fd0ULL || rel >= 0x2a6fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6fe0 size=16 callers=0 calls=0
*/
void sub_2a6fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6fe0ULL || rel >= 0x2a6ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6ff0 size=16 callers=0 calls=0
*/
void sub_2a6ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6ff0ULL || rel >= 0x2a7000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7000 size=16 callers=0 calls=0
*/
void sub_2a7000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7000ULL || rel >= 0x2a7010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7010 size=16 callers=0 calls=0
*/
void sub_2a7010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7010ULL || rel >= 0x2a7020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7020 size=16 callers=0 calls=0
*/
void sub_2a7020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7020ULL || rel >= 0x2a7030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7030 size=16 callers=0 calls=0
*/
void sub_2a7030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7030ULL || rel >= 0x2a7040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7040 size=16 callers=0 calls=0
*/
void sub_2a7040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7040ULL || rel >= 0x2a7050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7050 size=16 callers=0 calls=0
*/
void sub_2a7050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7050ULL || rel >= 0x2a7060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7060 size=80 callers=6 calls=0
*/
void sub_2a7060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7060ULL || rel >= 0x2a70b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a70b0 size=16 callers=6 calls=0
*/
void sub_2a70b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a70b0ULL || rel >= 0x2a70c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a70c0 size=592 callers=7 calls=3
   calls: PLAYREADYCTR, sub_27ee40, sub_2a7310
*/
void sub_2a70c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a70c0ULL || rel >= 0x2a7310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7310 size=6208 callers=1 calls=11
   calls: sub_274db0, sub_277720, sub_277f50, sub_27ee40, sub_28f180, sub_28f240, sub_28f4b0, sub_28ffd0, sub_29e2a0, sub_2af9b0, sub_2afd80
*/
void sub_2a7310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7310ULL || rel >= 0x2a8b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a8b50 size=6320 callers=2 calls=15
   calls: sub_2775c0, sub_27df20, sub_27df60, sub_27ee40, sub_28e880, sub_28f180, sub_28f4b0, sub_28f6a0, sub_28ffa0, sub_29e4e0, sub_2ab540, sub_2ac100
   ... +3 more
   ref: WIDEVINE
   ref: VUDUCTR
   ref: PLAYREADYCTR
   ref: WIDEVINECTR
*/
void PLAYREADYCTR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a8b50ULL || rel >= 0x2aa400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aa400 size=832 callers=13 calls=0
*/
void sub_2aa400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aa400ULL || rel >= 0x2aa740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aa740 size=480 callers=0 calls=3
   calls: sub_274db0, sub_27ee40, sub_28fd00
*/
void sub_2aa740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aa740ULL || rel >= 0x2aa920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aa920 size=32 callers=2 calls=0
*/
void sub_2aa920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aa920ULL || rel >= 0x2aa940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aa940 size=1504 callers=0 calls=7
   calls: PLAYREADYCTR, sub_2775c0, sub_277720, sub_27df20, sub_27df60, sub_27ee40, sub_283b90
*/
void sub_2aa940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aa940ULL || rel >= 0x2aaf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aaf20 size=1568 callers=8 calls=6
   calls: sub_27dea0, sub_28d590, sub_28d5c0, sub_28d5e0, sub_28d9a0, sub_2ab540
*/
void sub_2aaf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aaf20ULL || rel >= 0x2ab540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ab540 size=304 callers=5 calls=5
   calls: sub_28d590, sub_28d5c0, sub_28d5e0, sub_28d740, sub_28d9a0
*/
void sub_2ab540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ab540ULL || rel >= 0x2ab670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ab670 size=352 callers=0 calls=2
   calls: sub_27ee40, sub_283b90
*/
void sub_2ab670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ab670ULL || rel >= 0x2ab7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ab7d0 size=784 callers=6 calls=2
   calls: sub_27dea0, sub_27ee40
*/
void sub_2ab7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ab7d0ULL || rel >= 0x2abae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002abae0 size=240 callers=0 calls=1
   calls: sub_2af990
*/
void sub_2abae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2abae0ULL || rel >= 0x2abbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002abbd0 size=880 callers=1 calls=5
   calls: sub_2775c0, sub_27df20, sub_27df60, sub_27ee40, sub_2abf40
*/
void sub_2abbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2abbd0ULL || rel >= 0x2abf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002abf40 size=192 callers=5 calls=1
   calls: sub_2af990
*/
void sub_2abf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2abf40ULL || rel >= 0x2ac000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac000 size=256 callers=4 calls=1
   calls: sub_2ac100
*/
void sub_2ac000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac000ULL || rel >= 0x2ac100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac100 size=240 callers=7 calls=1
   calls: sub_28d390
*/
void sub_2ac100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac100ULL || rel >= 0x2ac1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac1f0 size=704 callers=0 calls=2
   calls: sub_2775c0, sub_2abf40
*/
void sub_2ac1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac1f0ULL || rel >= 0x2ac4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac4b0 size=912 callers=8 calls=5
   calls: sub_2abf40, sub_2ac000, sub_2ac100, sub_2ac840, sub_2acda0
   ref: Average FPS (walltime): %f
   ref: Total display time (walltime): %f
   ref: Total decoding time (walltime): %f
   ref: Total packets: %d
*/
void Total_packets_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac4b0ULL || rel >= 0x2ac840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac840 size=1376 callers=2 calls=1
   calls: sub_2afc70
*/
void sub_2ac840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac840ULL || rel >= 0x2acda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002acda0 size=256 callers=2 calls=1
   calls: sub_27dfa0
*/
void sub_2acda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2acda0ULL || rel >= 0x2acea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002acea0 size=3584 callers=1 calls=3
   calls: sub_27ee40, sub_2af6c0, sub_2af990
*/
void sub_2acea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2acea0ULL || rel >= 0x2adca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002adca0 size=1440 callers=2 calls=6
   calls: sub_27df20, sub_27df60, sub_27ee40, sub_2abf40, sub_2ac000, sub_2ae240
*/
void sub_2adca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2adca0ULL || rel >= 0x2ae240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae240 size=448 callers=3 calls=3
   calls: sub_274db0, sub_2ab540, sub_2ac100
*/
void sub_2ae240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae240ULL || rel >= 0x2ae400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae400 size=208 callers=10 calls=0
*/
void sub_2ae400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae400ULL || rel >= 0x2ae4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae4d0 size=368 callers=14 calls=0
*/
void sub_2ae4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae4d0ULL || rel >= 0x2ae640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae640 size=16 callers=2 calls=0
*/
void sub_2ae640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae640ULL || rel >= 0x2ae650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae650 size=192 callers=1 calls=3
   calls: sub_27df20, sub_27df60, sub_2ae710
*/
void sub_2ae650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae650ULL || rel >= 0x2ae710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae710 size=624 callers=3 calls=2
   calls: sub_28d240, sub_2af360
*/
void sub_2ae710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae710ULL || rel >= 0x2ae980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae980 size=384 callers=1 calls=1
   calls: sub_27e530
*/
void sub_2ae980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae980ULL || rel >= 0x2aeb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aeb00 size=496 callers=1 calls=6
   calls: sub_28d290, sub_28d310, sub_28d320, sub_28d330, sub_28ea20, sub_2af3f0
*/
void sub_2aeb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aeb00ULL || rel >= 0x2aecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aecf0 size=448 callers=2 calls=6
   calls: sub_28d290, sub_28d310, sub_28d320, sub_28d330, sub_28ea20, sub_2af3f0
*/
void sub_2aecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aecf0ULL || rel >= 0x2aeeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aeeb0 size=320 callers=0 calls=4
   calls: NvxRenderSurfaceToOverlayANW, sub_28d3c0, sub_28df10, sub_28e140
*/
void sub_2aeeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aeeb0ULL || rel >= 0x2aeff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aeff0 size=80 callers=1 calls=1
   calls: NvxRenderSurfaceToOverlayANW
*/
void sub_2aeff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aeff0ULL || rel >= 0x2af040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af040 size=752 callers=2 calls=5
   calls: sub_28d240, sub_28d290, sub_28d310, sub_28d320, sub_28ea20
   ref: NvxRenderSurfaceToOverlayANW
*/
void NvxRenderSurfaceToOverlayANW(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af040ULL || rel >= 0x2af330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af330 size=48 callers=1 calls=1
   calls: sub_28e140
*/
void sub_2af330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af330ULL || rel >= 0x2af360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af360 size=144 callers=2 calls=0
*/
void sub_2af360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af360ULL || rel >= 0x2af3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af3f0 size=192 callers=5 calls=0
*/
void sub_2af3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af3f0ULL || rel >= 0x2af4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af4b0 size=112 callers=1 calls=1
   calls: sub_28d240
*/
void sub_2af4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af4b0ULL || rel >= 0x2af520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af520 size=32 callers=1 calls=0
*/
void sub_2af520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af520ULL || rel >= 0x2af540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af540 size=144 callers=2 calls=0
*/
void sub_2af540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af540ULL || rel >= 0x2af5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af5d0 size=48 callers=0 calls=0
*/
void sub_2af5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af5d0ULL || rel >= 0x2af600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af600 size=192 callers=1 calls=3
   calls: sub_27df20, sub_27df60, sub_2af6c0
*/
void sub_2af600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af600ULL || rel >= 0x2af6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af6c0 size=720 callers=3 calls=1
   calls: sub_2af3f0
*/
void sub_2af6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af6c0ULL || rel >= 0x2af990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af990 size=16 callers=3 calls=0
*/
void sub_2af990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af990ULL || rel >= 0x2af9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af9a0 size=16 callers=1 calls=0
*/
void sub_2af9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af9a0ULL || rel >= 0x2af9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af9b0 size=704 callers=1 calls=3
   calls: sub_27e530, sub_2af4b0, sub_2af520
*/
void sub_2af9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af9b0ULL || rel >= 0x2afc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002afc70 size=208 callers=1 calls=2
   calls: sub_27df20, sub_27df60
*/
void sub_2afc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2afc70ULL || rel >= 0x2afd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002afd40 size=64 callers=0 calls=0
*/
void sub_2afd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2afd40ULL || rel >= 0x2afd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002afd80 size=496 callers=1 calls=6
   calls: sub_28d290, sub_28d310, sub_28d320, sub_28d330, sub_28ea20, sub_2af3f0
*/
void sub_2afd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2afd80ULL || rel >= 0x2aff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aff70 size=576 callers=2 calls=7
   calls: sub_28d240, sub_28d290, sub_28d310, sub_28d320, sub_28ea20, sub_2af360, sub_2af3f0
*/
void sub_2aff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aff70ULL || rel >= 0x2b01b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b01b0 size=96 callers=0 calls=0
*/
void sub_2b01b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b01b0ULL || rel >= 0x2b0210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b0210 size=48 callers=2 calls=0
*/
void sub_2b0210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b0210ULL || rel >= 0x2b0240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b0240 size=256 callers=4 calls=1
   calls: sub_2b0340
*/
void sub_2b0240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b0240ULL || rel >= 0x2b0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b0340 size=2544 callers=4 calls=0
*/
void sub_2b0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b0340ULL || rel >= 0x2b0d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b0d30 size=192 callers=2 calls=1
   calls: sub_2b0340
*/
void sub_2b0d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b0d30ULL || rel >= 0x2b0df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b0df0 size=368 callers=0 calls=1
   calls: sub_2b3050
*/
void sub_2b0df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b0df0ULL || rel >= 0x2b0f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b0f60 size=208 callers=0 calls=1
   calls: sub_2b3ca0
*/
void sub_2b0f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b0f60ULL || rel >= 0x2b1030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b1030 size=80 callers=3 calls=0
*/
void sub_2b1030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b1030ULL || rel >= 0x2b1080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b1080 size=144 callers=0 calls=0
*/
void sub_2b1080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b1080ULL || rel >= 0x2b1110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b1110 size=48 callers=0 calls=0
*/
void sub_2b1110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b1110ULL || rel >= 0x2b1140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b1140 size=16 callers=0 calls=0
*/
void sub_2b1140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b1140ULL || rel >= 0x2b1150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b1150 size=48 callers=0 calls=0
*/
void sub_2b1150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b1150ULL || rel >= 0x2b1180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b1180 size=544 callers=1 calls=0
*/
void sub_2b1180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b1180ULL || rel >= 0x2b13a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b13a0 size=448 callers=0 calls=2
   calls: sub_2b4d10, sub_2b4d40
*/
void sub_2b13a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b13a0ULL || rel >= 0x2b1560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b1560 size=32 callers=0 calls=0
*/
void sub_2b1560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b1560ULL || rel >= 0x2b1580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b1580 size=48 callers=0 calls=0
*/
void sub_2b1580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b1580ULL || rel >= 0x2b15b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b15b0 size=64 callers=0 calls=0
*/
void sub_2b15b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b15b0ULL || rel >= 0x2b15f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b15f0 size=208 callers=7 calls=0
   ref: %snvddk2d_dump%05d
*/
void snvddk2d_dump_05d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b15f0ULL || rel >= 0x2b16c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b16c0 size=240 callers=0 calls=1
   calls: sub_2b3ca0
*/
void sub_2b16c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b16c0ULL || rel >= 0x2b17b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b17b0 size=144 callers=0 calls=1
   calls: sub_2b3ca0
*/
void sub_2b17b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b17b0ULL || rel >= 0x2b1840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b1840 size=48 callers=0 calls=0
*/
void sub_2b1840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b1840ULL || rel >= 0x2b1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b1870 size=5728 callers=0 calls=7
   calls: snvddk2d_dump_05d, sub_2b2ed0, sub_2b3100, sub_2b36d0, sub_2b7b80, sub_2b7bb0, sub_2b7c90
   ref: palette
   ref: coverage
*/
void coverage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b1870ULL || rel >= 0x2b2ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b2ed0 size=384 callers=4 calls=0
*/
void sub_2b2ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b2ed0ULL || rel >= 0x2b3050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3050 size=176 callers=1 calls=0
*/
void sub_2b3050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3050ULL || rel >= 0x2b3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3100 size=48 callers=2 calls=0
*/
void sub_2b3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3100ULL || rel >= 0x2b3130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3130 size=1440 callers=0 calls=0
*/
void sub_2b3130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3130ULL || rel >= 0x2b36d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b36d0 size=48 callers=2 calls=0
*/
void sub_2b36d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b36d0ULL || rel >= 0x2b3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3700 size=1440 callers=0 calls=0
*/
void sub_2b3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3700ULL || rel >= 0x2b3ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3ca0 size=80 callers=6 calls=0
*/
void sub_2b3ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3ca0ULL || rel >= 0x2b3cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3cf0 size=160 callers=0 calls=1
   calls: sub_2b3d90
*/
void sub_2b3cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3cf0ULL || rel >= 0x2b3d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3d90 size=304 callers=2 calls=0
*/
void sub_2b3d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3d90ULL || rel >= 0x2b3ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3ec0 size=256 callers=0 calls=0
*/
void sub_2b3ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3ec0ULL || rel >= 0x2b3fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3fc0 size=288 callers=1 calls=2
   calls: sub_2b1030, sub_2b3ca0
*/
void sub_2b3fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3fc0ULL || rel >= 0x2b40e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b40e0 size=640 callers=5 calls=2
   calls: sub_2b1030, sub_2b3ca0
*/
void sub_2b40e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b40e0ULL || rel >= 0x2b4360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b4360 size=352 callers=0 calls=0
*/
void sub_2b4360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b4360ULL || rel >= 0x2b44c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b44c0 size=64 callers=0 calls=1
   calls: sub_2b3fc0
*/
void sub_2b44c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b44c0ULL || rel >= 0x2b4500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b4500 size=368 callers=0 calls=0
*/
void sub_2b4500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b4500ULL || rel >= 0x2b4670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b4670 size=16 callers=0 calls=0
*/
void sub_2b4670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b4670ULL || rel >= 0x2b4680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b4680 size=32 callers=0 calls=0
*/
void sub_2b4680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b4680ULL || rel >= 0x2b46a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b46a0 size=64 callers=0 calls=0
*/
void sub_2b46a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b46a0ULL || rel >= 0x2b46e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b46e0 size=272 callers=0 calls=1
   calls: sub_2b40e0
*/
void sub_2b46e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b46e0ULL || rel >= 0x2b47f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b47f0 size=256 callers=2 calls=1
   calls: sub_2b40e0
*/
void sub_2b47f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b47f0ULL || rel >= 0x2b48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b48f0 size=96 callers=0 calls=1
   calls: sub_2b4950
*/
void sub_2b48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b48f0ULL || rel >= 0x2b4950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b4950 size=960 callers=4 calls=2
   calls: sub_2b1030, sub_2b1180
*/
void sub_2b4950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b4950ULL || rel >= 0x2b4d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b4d10 size=48 callers=1 calls=0
*/
void sub_2b4d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b4d10ULL || rel >= 0x2b4d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b4d40 size=144 callers=1 calls=0
*/
void sub_2b4d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b4d40ULL || rel >= 0x2b4dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b4dd0 size=80 callers=0 calls=0
*/
void sub_2b4dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b4dd0ULL || rel >= 0x2b4e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b4e20 size=16 callers=0 calls=0
*/
void sub_2b4e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b4e20ULL || rel >= 0x2b4e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b4e30 size=1664 callers=0 calls=0
*/
void sub_2b4e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b4e30ULL || rel >= 0x2b54b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b54b0 size=304 callers=0 calls=2
   calls: sub_2b40e0, sub_2b4950
*/
void sub_2b54b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b54b0ULL || rel >= 0x2b55e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b55e0 size=96 callers=4 calls=0
*/
void sub_2b55e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b55e0ULL || rel >= 0x2b5640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b5640 size=464 callers=5 calls=0
*/
void sub_2b5640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b5640ULL || rel >= 0x2b5810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b5810 size=560 callers=6 calls=0
*/
void sub_2b5810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b5810ULL || rel >= 0x2b5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b5a40 size=4096 callers=2 calls=0
*/
void sub_2b5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b5a40ULL || rel >= 0x2b6a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b6a40 size=640 callers=2 calls=2
   calls: sub_2b55e0, sub_2b5810
*/
void sub_2b6a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b6a40ULL || rel >= 0x2b6cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b6cc0 size=656 callers=1 calls=3
   calls: sub_2b55e0, sub_2b5640, sub_2b5810
*/
void sub_2b6cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b6cc0ULL || rel >= 0x2b6f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b6f50 size=1296 callers=1 calls=5
   calls: sub_2b5a40, sub_2b6a40, sub_2b6cc0, sub_2b7460, sub_2b79b0
*/
void sub_2b6f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b6f50ULL || rel >= 0x2b7460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7460 size=1360 callers=1 calls=0
*/
void sub_2b7460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7460ULL || rel >= 0x2b79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b79b0 size=464 callers=4 calls=0
*/
void sub_2b79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b79b0ULL || rel >= 0x2b7b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7b80 size=48 callers=5 calls=0
*/
void sub_2b7b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7b80ULL || rel >= 0x2b7bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7bb0 size=48 callers=1 calls=0
*/
void sub_2b7bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7bb0ULL || rel >= 0x2b7be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7be0 size=64 callers=0 calls=0
*/
void sub_2b7be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7be0ULL || rel >= 0x2b7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7c20 size=96 callers=0 calls=0
*/
void sub_2b7c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7c20ULL || rel >= 0x2b7c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7c80 size=16 callers=0 calls=0
*/
void sub_2b7c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7c80ULL || rel >= 0x2b7c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7c90 size=48 callers=1 calls=0
*/
void sub_2b7c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7c90ULL || rel >= 0x2b7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7cc0 size=48 callers=0 calls=0
*/
void sub_2b7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7cc0ULL || rel >= 0x2b7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7cf0 size=16 callers=0 calls=0
*/
void sub_2b7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7cf0ULL || rel >= 0x2b7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7d00 size=16 callers=0 calls=0
*/
void sub_2b7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7d00ULL || rel >= 0x2b7d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7d10 size=128 callers=0 calls=0
*/
void sub_2b7d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7d10ULL || rel >= 0x2b7d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7d90 size=64 callers=0 calls=0
*/
void sub_2b7d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7d90ULL || rel >= 0x2b7dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7dd0 size=16 callers=0 calls=0
   ref: hw_vic
*/
void hw_vic(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7dd0ULL || rel >= 0x2b7de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7de0 size=16 callers=0 calls=0
   ref: VIC hardware backend
*/
void VIC_hardware_backend(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7de0ULL || rel >= 0x2b7df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7df0 size=1440 callers=0 calls=3
   calls: sub_2b47f0, sub_2b4950, sub_2b6f50
*/
void sub_2b7df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7df0ULL || rel >= 0x2b8390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b8390 size=16 callers=0 calls=0
*/
void sub_2b8390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b8390ULL || rel >= 0x2b83a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b83a0 size=16 callers=0 calls=0
*/
void sub_2b83a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b83a0ULL || rel >= 0x2b83b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b83b0 size=32 callers=0 calls=0
*/
void sub_2b83b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b83b0ULL || rel >= 0x2b83d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b83d0 size=32 callers=0 calls=0
*/
void sub_2b83d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b83d0ULL || rel >= 0x2b83f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b83f0 size=576 callers=0 calls=0
*/
void sub_2b83f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b83f0ULL || rel >= 0x2b8630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b8630 size=176 callers=0 calls=1
   calls: sub_2b86e0
*/
void sub_2b8630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b8630ULL || rel >= 0x2b86e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b86e0 size=608 callers=2 calls=0
*/
void sub_2b86e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b86e0ULL || rel >= 0x2b8940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b8940 size=672 callers=0 calls=1
   calls: sub_2b86e0
*/
void sub_2b8940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b8940ULL || rel >= 0x2b8be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b8be0 size=1392 callers=0 calls=1
   calls: sub_2b9150
*/
void sub_2b8be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b8be0ULL || rel >= 0x2b9150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b9150 size=992 callers=2 calls=0
*/
void sub_2b9150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b9150ULL || rel >= 0x2b9530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b9530 size=272 callers=0 calls=0
*/
void sub_2b9530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b9530ULL || rel >= 0x2b9640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b9640 size=736 callers=0 calls=0
*/
void sub_2b9640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b9640ULL || rel >= 0x2b9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b9920 size=368 callers=0 calls=0
*/
void sub_2b9920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b9920ULL || rel >= 0x2b9a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b9a90 size=32 callers=0 calls=0
*/
void sub_2b9a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b9a90ULL || rel >= 0x2b9ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b9ab0 size=208 callers=0 calls=0
*/
void sub_2b9ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b9ab0ULL || rel >= 0x2b9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b9b80 size=576 callers=0 calls=0
*/
void sub_2b9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b9b80ULL || rel >= 0x2b9dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b9dc0 size=16 callers=0 calls=0
*/
void sub_2b9dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b9dc0ULL || rel >= 0x2b9dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b9dd0 size=848 callers=0 calls=0
*/
void sub_2b9dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b9dd0ULL || rel >= 0x2ba120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ba120 size=16 callers=0 calls=0
*/
void sub_2ba120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ba120ULL || rel >= 0x2ba130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ba130 size=96 callers=0 calls=0
*/
void sub_2ba130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ba130ULL || rel >= 0x2ba190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ba190 size=176 callers=0 calls=0
*/
void sub_2ba190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ba190ULL || rel >= 0x2ba240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ba240 size=144 callers=0 calls=0
*/
void sub_2ba240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ba240ULL || rel >= 0x2ba2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ba2d0 size=144 callers=0 calls=0
*/
void sub_2ba2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ba2d0ULL || rel >= 0x2ba360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ba360 size=768 callers=0 calls=0
*/
void sub_2ba360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ba360ULL || rel >= 0x2ba660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ba660 size=880 callers=0 calls=0
*/
void sub_2ba660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ba660ULL || rel >= 0x2ba9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ba9d0 size=16 callers=0 calls=0
*/
void sub_2ba9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ba9d0ULL || rel >= 0x2ba9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ba9e0 size=144 callers=0 calls=0
*/
void sub_2ba9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ba9e0ULL || rel >= 0x2baa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002baa70 size=16 callers=0 calls=0
*/
void sub_2baa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2baa70ULL || rel >= 0x2baa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002baa80 size=16 callers=0 calls=0
*/
void sub_2baa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2baa80ULL || rel >= 0x2baa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002baa90 size=624 callers=0 calls=0
*/
void sub_2baa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2baa90ULL || rel >= 0x2bad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bad00 size=32 callers=0 calls=0
*/
void sub_2bad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bad00ULL || rel >= 0x2bad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bad20 size=64 callers=0 calls=0
*/
void sub_2bad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bad20ULL || rel >= 0x2bad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bad60 size=1152 callers=0 calls=0
*/
void sub_2bad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bad60ULL || rel >= 0x2bb1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb1e0 size=16 callers=0 calls=0
*/
void sub_2bb1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb1e0ULL || rel >= 0x2bb1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb1f0 size=16 callers=0 calls=0
*/
void sub_2bb1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb1f0ULL || rel >= 0x2bb200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb200 size=16 callers=0 calls=0
*/
void sub_2bb200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb200ULL || rel >= 0x2bb210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb210 size=16 callers=0 calls=0
*/
void sub_2bb210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb210ULL || rel >= 0x2bb220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb220 size=16 callers=0 calls=0
*/
void sub_2bb220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb220ULL || rel >= 0x2bb230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb230 size=16 callers=0 calls=0
*/
void sub_2bb230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb230ULL || rel >= 0x2bb240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb240 size=16 callers=0 calls=0
*/
void sub_2bb240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb240ULL || rel >= 0x2bb250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb250 size=16 callers=0 calls=0
*/
void sub_2bb250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb250ULL || rel >= 0x2bb260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb260 size=16 callers=0 calls=0
*/
void sub_2bb260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb260ULL || rel >= 0x2bb270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb270 size=592 callers=0 calls=1
   calls: sub_2bb540
*/
void sub_2bb270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb270ULL || rel >= 0x2bb4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb4c0 size=128 callers=0 calls=1
   calls: sub_2bbad0
*/
void sub_2bb4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb4c0ULL || rel >= 0x2bb540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb540 size=272 callers=1 calls=0
*/
void sub_2bb540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb540ULL || rel >= 0x2bb650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb650 size=688 callers=0 calls=0
*/
void sub_2bb650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb650ULL || rel >= 0x2bb900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb900 size=240 callers=0 calls=0
*/
void sub_2bb900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb900ULL || rel >= 0x2bb9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb9f0 size=192 callers=0 calls=0
*/
void sub_2bb9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb9f0ULL || rel >= 0x2bbab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bbab0 size=16 callers=0 calls=0
*/
void sub_2bbab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bbab0ULL || rel >= 0x2bbac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bbac0 size=16 callers=0 calls=0
*/
void sub_2bbac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bbac0ULL || rel >= 0x2bbad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bbad0 size=1872 callers=1 calls=0
*/
void sub_2bbad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bbad0ULL || rel >= 0x2bc220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc220 size=2048 callers=1 calls=3
   calls: sub_2bd7b0, sub_2bd8c0, sub_2c00e0
*/
void sub_2bc220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc220ULL || rel >= 0x2bca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bca20 size=512 callers=0 calls=0
*/
void sub_2bca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bca20ULL || rel >= 0x2bcc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcc20 size=160 callers=0 calls=1
   calls: sub_2bc220
*/
void sub_2bcc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcc20ULL || rel >= 0x2bccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bccc0 size=256 callers=0 calls=0
*/
void sub_2bccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bccc0ULL || rel >= 0x2bcdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcdc0 size=912 callers=0 calls=0
*/
void sub_2bcdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcdc0ULL || rel >= 0x2bd150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd150 size=1392 callers=0 calls=0
*/
void sub_2bd150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd150ULL || rel >= 0x2bd6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd6c0 size=224 callers=0 calls=0
*/
void sub_2bd6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd6c0ULL || rel >= 0x2bd7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd7a0 size=16 callers=0 calls=0
*/
void sub_2bd7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd7a0ULL || rel >= 0x2bd7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd7b0 size=272 callers=2 calls=0
*/
void sub_2bd7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd7b0ULL || rel >= 0x2bd8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd8c0 size=8832 callers=1 calls=2
   calls: sub_2bfb40, sub_2bfe60
*/
void sub_2bd8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd8c0ULL || rel >= 0x2bfb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bfb40 size=800 callers=2 calls=1
   calls: sub_2bfe60
*/
void sub_2bfb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bfb40ULL || rel >= 0x2bfe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bfe60 size=640 callers=2 calls=0
*/
void sub_2bfe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bfe60ULL || rel >= 0x2c00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c00e0 size=112 callers=1 calls=1
   calls: sub_2bfb40
*/
void sub_2c00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c00e0ULL || rel >= 0x2c0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c0150 size=32 callers=0 calls=0
*/
void sub_2c0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c0150ULL || rel >= 0x2c0170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c0170 size=80 callers=0 calls=0
*/
void sub_2c0170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c0170ULL || rel >= 0x2c01c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c01c0 size=720 callers=1 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: TVMRInit ++
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: frameWidth = %d, frameHeight = %d 
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: TVMRInit Success
   ref: TVMRInit
   ref: NvMMTVMRDeinterlaceThread
   ref: NvMMTVMRMVCDeinterlaceThread
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: deinterlaceType = %d
*/
void NvMMTVMRMVCDeinterlaceThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c01c0ULL || rel >= 0x2c0490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c0490 size=2384 callers=0 calls=5
   calls: Deinterlace1stField, Deinterlace2ndField, NVMMLITE_TVMRDEC_2, NVMMLITE_TVMRDEC_4, sub_2c24a0
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: DeinterlaceThread is created 
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: DeintInputDisplayQueueSema Done 
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: Closing Deinterlace Thread 
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: Unblock all input queue buffers: %d
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: DeintInputQueue NumEntriesInput = %d 
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: Aborting DeinterlaceThread
   ref: DeinterlaceThread
*/
void DeinterlaceThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c0490ULL || rel >= 0x2c0de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c0de0 size=624 callers=0 calls=4
   calls: NVMMLITE_TVMRDEC_4, TVMRCombine_MVCViews_Interlaced, sub_2c3210, sub_2d12a0
   ref: NVMMLITE_TVMRDEC
   ref: DeinterlaceMVCStitchThread
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: MVCAbortDoneSema Signalled
   ref: %lld: %s, <%s:%d> MVC Stitch Thread is created ***************** 
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: EnQ : TVMRFrameBufferDeintQueue 
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: TVMRCombine_MVCViews_Interlaced
*/
void DeinterlaceMVCStitchThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c0de0ULL || rel >= 0x2c1050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c1050 size=448 callers=2 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: TVMRClose End
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: TVMRClose ++
   ref: TVMRClose
*/
void NVMMLITE_TVMRDEC(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c1050ULL || rel >= 0x2c1210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c1210 size=512 callers=1 calls=4
   calls: NVMMLITE_TVMRDEC_4, TVMRStitchMvcViews, sub_2c3210, sub_2d12a0
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: OUT TS : %lld 
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: Filled output buffer : FrameSent = %d, BufferID = %d 
   ref: TVMRCombine_MVCViews_Interlaced
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: EnQ : TVMRFrameBufferDeintQueue 
*/
void TVMRCombine_MVCViews_Interlaced(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c1210ULL || rel >= 0x2c1410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c1410 size=1104 callers=1 calls=8
   calls: NVMMLITE_TVMRDEC_3, NVMMLITE_TVMRDEC_4, TVMRConvertToPitchLinear, sub_2c24a0, sub_2c3210, sub_2c32b0, sub_2d1300, sub_2d1340
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: EnQ in MVC Queue
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: OUT TS : %lld 
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: Filled output buffer : FrameSent = %d, BufferID = %d 
   ref: DeinterlaceFrame
*/
void NVMMLITE_TVMRDEC_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c1410ULL || rel >= 0x2c1860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c1860 size=560 callers=2 calls=4
   calls: NVMMLITE_TVMRDEC_3, NVMMLITE_TVMRDEC_4, sub_2c3210, sub_2c32b0
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: OUT TS : %lld 
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: Filled output buffer : FrameSent = %d, BufferID = %d 
   ref: Deinterlace1stField
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: Sent of MVCStitching. BufferID = %d 
*/
void Deinterlace1stField(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c1860ULL || rel >= 0x2c1a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c1a90 size=608 callers=1 calls=4
   calls: NVMMLITE_TVMRDEC_3, NVMMLITE_TVMRDEC_4, sub_2c3210, sub_2c32b0
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: OUT TS : %lld 
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: Filled output buffer : FrameSent = %d, BufferID = %d 
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: Sent of MVCStitching. BufferID = %d 
   ref: Deinterlace2ndField
*/
void Deinterlace2ndField(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c1a90ULL || rel >= 0x2c1cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c1cf0 size=1664 callers=4 calls=4
   calls: NVMMLITE_TVMRDEC_4, sub_2c24a0, sub_2d1300, sub_2d1340
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: Free Node Available
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: ++
   ref: Deinterlace
*/
void NVMMLITE_TVMRDEC_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c1cf0ULL || rel >= 0x2c2370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c2370 size=304 callers=290 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: NVMMLITE_TVMRDEC
   ref: LogPrintf
   ref: %lld: %s, <%s:%d> cctx = %d
*/
void NVMMLITE_TVMRDEC_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c2370ULL || rel >= 0x2c24a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c24a0 size=96 callers=9 calls=0
*/
void sub_2c24a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c24a0ULL || rel >= 0x2c2500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c2500 size=544 callers=2 calls=0
*/
void sub_2c2500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c2500ULL || rel >= 0x2c2720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c2720 size=1648 callers=1 calls=0
*/
void sub_2c2720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c2720ULL || rel >= 0x2c2d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c2d90 size=1152 callers=2 calls=3
   calls: NVMMLITE_TVMRDEC_4, NvMMTVMRMVCDeinterlaceThread, sub_2c2720
   ref: %lld: %s, <%s:%d> Unable to allocate the memory for the Output Surfaces!
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> Unable to allocate the memory for the Output buffer structure !
   ref: %lld: %s, <%s:%d> Unable to allocate the memory for the Motion Vector structure !
   ref: InterlaceBufferAlloc
   ref: %lld: %s, <%s:%d> Unable to create NVMM surface fences !
   ref: %lld: %s, <%s:%d> InterlaceBufferAlloc !!!!!!!!!!!!!!!!!!!!! 
*/
void InterlaceBufferAlloc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c2d90ULL || rel >= 0x2c3210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3210 size=160 callers=7 calls=0
*/
void sub_2c3210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3210ULL || rel >= 0x2c32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c32b0 size=96 callers=5 calls=0
*/
void sub_2c32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c32b0ULL || rel >= 0x2c3310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3310 size=8560 callers=0 calls=5
   calls: InterlaceBufferAlloc, NVMMLITE_TVMRDEC, NVMMLITE_TVMRDEC_4, sub_2c2500, sub_2d6260
   ref: %lld: %s, <%s:%d> BitDepthLuma = %d, BitDepthChroma = %d 
   ref: %lld: %s, <%s:%d> failed to create reference frame %d!
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  Wait for all buffers of display queue to return Done
   ref: %lld: %s, <%s:%d>  Sending stream info to client
   ref: NvRmSurfaceLayout_Tiled
   ref: %lld: %s, <%s:%d>  ++
   ref: %lld: %s, <%s:%d> NvMMDecTVMRDestroyParserBeginSeq failed [0x%x]
*/
void NvRmSurfaceLayout_Tiled(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3310ULL || rel >= 0x2c5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c5480 size=1344 callers=1 calls=0
*/
void sub_2c5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c5480ULL || rel >= 0x2c59c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c59c0 size=368 callers=1 calls=0
*/
void sub_2c59c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c59c0ULL || rel >= 0x2c5b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c5b30 size=656 callers=2 calls=1
   calls: sub_2c59c0
*/
void sub_2c5b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c5b30ULL || rel >= 0x2c5dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c5dc0 size=304 callers=1 calls=0
*/
void sub_2c5dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c5dc0ULL || rel >= 0x2c5ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c5ef0 size=272 callers=1 calls=0
*/
void sub_2c5ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c5ef0ULL || rel >= 0x2c6000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6000 size=304 callers=1 calls=0
*/
void sub_2c6000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6000ULL || rel >= 0x2c6130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

