/* main functions 013a7bd0..013be870 (166 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 013a7bd0 size=224 callers=1 calls=1
   calls: sub_67ed70
*/
void sub_13a7bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7bd0ULL || rel >= 0x13a7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7cb0 size=224 callers=1 calls=1
   calls: sub_13a7d90
*/
void sub_13a7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7cb0ULL || rel >= 0x13a7d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7d90 size=320 callers=2 calls=1
   calls: sub_65d700
*/
void sub_13a7d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7d90ULL || rel >= 0x13a7ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7ed0 size=256 callers=1 calls=13
   calls: CueYesNo, EffectWait, FObjACWait, FObjSetMouth, FObjSetVisibility, FObjStartEyeLookAtPosition, FadeWait, LicenseCardEvent, PfxDofWait, SoundWait, StateSetTrigger, YesNoWin
   ... +1 more
*/
void sub_13a7ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7ed0ULL || rel >= 0x13a7fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7fd0 size=16 callers=1 calls=0
*/
void sub_13a7fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7fd0ULL || rel >= 0x13a7fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a7fe0 size=288 callers=131 calls=1
   calls: sub_13a8730
*/
void sub_13a7fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a7fe0ULL || rel >= 0x13a8100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a8100 size=144 callers=88 calls=1
   calls: sub_e91fe0
*/
void sub_13a8100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a8100ULL || rel >= 0x13a8190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a8190 size=32 callers=2 calls=0
*/
void sub_13a8190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a8190ULL || rel >= 0x13a81b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a81b0 size=80 callers=9 calls=2
   calls: sub_66c710, sub_66efe0
*/
void sub_13a81b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a81b0ULL || rel >= 0x13a8200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a8200 size=112 callers=86 calls=1
   calls: sub_13a3400
*/
void sub_13a8200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a8200ULL || rel >= 0x13a8270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a8270 size=688 callers=5 calls=2
   calls: sub_680c80, sub_680e70
   ref: IsAboveFadeLayer
   ref: IsNoWait
   ref: IsBlockDisplay
   ref: IsUseExtraMsg
   ref: IsUseZoneMessage
*/
void IsUseZoneMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a8270ULL || rel >= 0x13a8520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a8520 size=480 callers=0 calls=0
*/
void sub_13a8520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a8520ULL || rel >= 0x13a8700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a8700 size=16 callers=0 calls=0
*/
void sub_13a8700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a8700ULL || rel >= 0x13a8710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a8710 size=16 callers=0 calls=0
*/
void sub_13a8710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a8710ULL || rel >= 0x13a8720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a8720 size=16 callers=0 calls=0
*/
void sub_13a8720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a8720ULL || rel >= 0x13a8730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a8730 size=912 callers=1 calls=1
   calls: sub_13a8ac0
*/
void sub_13a8730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a8730ULL || rel >= 0x13a8ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a8ac0 size=624 callers=1 calls=0
*/
void sub_13a8ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a8ac0ULL || rel >= 0x13a8d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a8d30 size=832 callers=1 calls=1
   calls: sub_13a7fe0
   ref: Fade/FadeOutFrame
   ref: Fade/FadeInFrame
   ref: Fade/FadeWait
   ref: Fade/FadeOut
   ref: Fade/FadeIn
*/
void FadeWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a8d30ULL || rel >= 0x13a9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a9070 size=416 callers=0 calls=4
   calls: sub_13a8200, sub_66c570, sub_680c80, sub_680f00
   ref: FrameType
   ref: CS_FadeIn
   ref: FadeType
*/
void FrameType(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a9070ULL || rel >= 0x13a9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a9210 size=16 callers=0 calls=0
*/
void sub_13a9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a9210ULL || rel >= 0x13a9220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a9220 size=16 callers=0 calls=0
*/
void sub_13a9220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a9220ULL || rel >= 0x13a9230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a9230 size=16 callers=0 calls=0
*/
void sub_13a9230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a9230ULL || rel >= 0x13a9240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a9240 size=640 callers=0 calls=6
   calls: sub_13a8200, sub_66c4e0, sub_66c570, sub_680c80, sub_680e70, sub_680f00
   ref: FrameType
   ref: SEPlay
   ref: CaptureFlag
   ref: CS_FadeOut
   ref: FadeType
*/
void CaptureFlag(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a9240ULL || rel >= 0x13a94c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a94c0 size=16 callers=0 calls=0
*/
void sub_13a94c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a94c0ULL || rel >= 0x13a94d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a94d0 size=16 callers=0 calls=0
*/
void sub_13a94d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a94d0ULL || rel >= 0x13a94e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a94e0 size=16 callers=0 calls=0
*/
void sub_13a94e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a94e0ULL || rel >= 0x13a94f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a94f0 size=384 callers=0 calls=6
   calls: sub_13a8200, sub_66c4e0, sub_66c570, sub_680c80, sub_680d80, sub_680f00
   ref: CS_FadeInFrame
   ref: FadeType
*/
void CS_FadeInFrame(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a94f0ULL || rel >= 0x13a9670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a9670 size=16 callers=0 calls=0
*/
void sub_13a9670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a9670ULL || rel >= 0x13a9680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a9680 size=16 callers=0 calls=0
*/
void sub_13a9680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a9680ULL || rel >= 0x13a9690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a9690 size=16 callers=0 calls=0
*/
void sub_13a9690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a9690ULL || rel >= 0x13a96a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a96a0 size=608 callers=0 calls=7
   calls: sub_13a8200, sub_66c4e0, sub_66c570, sub_680c80, sub_680d80, sub_680e70, sub_680f00
   ref: SEPlay
   ref: CaptureFlag
   ref: CS_FadeOutFrame
   ref: FadeType
*/
void CS_FadeOutFrame(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a96a0ULL || rel >= 0x13a9900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a9900 size=16 callers=0 calls=0
*/
void sub_13a9900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a9900ULL || rel >= 0x13a9910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a9910 size=16 callers=0 calls=0
*/
void sub_13a9910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a9910ULL || rel >= 0x13a9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a9920 size=16 callers=0 calls=0
*/
void sub_13a9920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a9920ULL || rel >= 0x13a9930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a9930 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_FadeWait
*/
void CS_FadeWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a9930ULL || rel >= 0x13a99b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a99b0 size=16 callers=0 calls=0
*/
void sub_13a99b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a99b0ULL || rel >= 0x13a99c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a99c0 size=16 callers=0 calls=0
*/
void sub_13a99c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a99c0ULL || rel >= 0x13a99d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a99d0 size=16 callers=0 calls=0
*/
void sub_13a99d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a99d0ULL || rel >= 0x13a99e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a99e0 size=1008 callers=1 calls=1
   calls: sub_13a7fe0
   ref: Item/ItemEventWithMotion
   ref: Item/LicenseCardEvent
   ref: Item/ItemEventUnique
   ref: Item/ItemEvent
*/
void LicenseCardEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a99e0ULL || rel >= 0x13a9dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013a9dd0 size=624 callers=0 calls=4
   calls: sub_66c4e0, sub_680c80, sub_680d80, sub_680e70
   ref: ItemNo
   ref: IsPlayME
   ref: IsForceOpenDesc
*/
void IsForceOpenDesc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13a9dd0ULL || rel >= 0x13aa040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa040 size=16 callers=0 calls=0
*/
void sub_13aa040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa040ULL || rel >= 0x13aa050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa050 size=16 callers=0 calls=0
*/
void sub_13aa050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa050ULL || rel >= 0x13aa060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa060 size=16 callers=0 calls=0
*/
void sub_13aa060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa060ULL || rel >= 0x13aa070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa070 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_ItemEvent
*/
void CS_ItemEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa070ULL || rel >= 0x13aa0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa0f0 size=16 callers=0 calls=0
*/
void sub_13aa0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa0f0ULL || rel >= 0x13aa100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa100 size=16 callers=0 calls=0
*/
void sub_13aa100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa100ULL || rel >= 0x13aa110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa110 size=16 callers=0 calls=0
*/
void sub_13aa110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa110ULL || rel >= 0x13aa120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa120 size=768 callers=0 calls=5
   calls: sub_66c4e0, sub_680c80, sub_680d80, sub_680e70, sub_680f00
   ref: ItemNo
   ref: IsPlayME
   ref: IsForceOpenDesc
   ref: MessageLabel
*/
void IsForceOpenDesc_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa120ULL || rel >= 0x13aa420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa420 size=16 callers=0 calls=0
*/
void sub_13aa420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa420ULL || rel >= 0x13aa430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa430 size=16 callers=0 calls=0
*/
void sub_13aa430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa430ULL || rel >= 0x13aa440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa440 size=16 callers=0 calls=0
*/
void sub_13aa440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa440ULL || rel >= 0x13aa450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa450 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_ItemEventUnique
*/
void CS_ItemEventUnique(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa450ULL || rel >= 0x13aa4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa4d0 size=16 callers=0 calls=0
*/
void sub_13aa4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa4d0ULL || rel >= 0x13aa4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa4e0 size=16 callers=0 calls=0
*/
void sub_13aa4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa4e0ULL || rel >= 0x13aa4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa4f0 size=16 callers=0 calls=0
*/
void sub_13aa4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa4f0ULL || rel >= 0x13aa500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa500 size=912 callers=0 calls=6
   calls: sub_13a8100, sub_66c4e0, sub_680be0, sub_680c80, sub_680d80, sub_680e70
   ref: IsPlayPass
   ref: IsPlayGet
   ref: ItemNo
   ref: IsPlayME
   ref: IsForceOpenDesc
*/
void IsForceOpenDesc_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa500ULL || rel >= 0x13aa890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa890 size=16 callers=0 calls=0
*/
void sub_13aa890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa890ULL || rel >= 0x13aa8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa8a0 size=16 callers=0 calls=0
*/
void sub_13aa8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa8a0ULL || rel >= 0x13aa8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa8b0 size=16 callers=0 calls=0
*/
void sub_13aa8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa8b0ULL || rel >= 0x13aa8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa8c0 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_ItemEventWithMotion
*/
void CS_ItemEventWithMotion(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa8c0ULL || rel >= 0x13aa940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa940 size=16 callers=0 calls=0
*/
void sub_13aa940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa940ULL || rel >= 0x13aa950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa950 size=16 callers=0 calls=0
*/
void sub_13aa950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa950ULL || rel >= 0x13aa960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa960 size=16 callers=0 calls=0
*/
void sub_13aa960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa960ULL || rel >= 0x13aa970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aa970 size=480 callers=0 calls=7
   calls: sub_13a8100, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680e70, sub_680f00
   ref: CardId
   ref: CardCharaNameMsgId
   ref: IsRare
*/
void CardCharaNameMsgId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aa970ULL || rel >= 0x13aab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aab50 size=16 callers=0 calls=0
*/
void sub_13aab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aab50ULL || rel >= 0x13aab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aab60 size=16 callers=0 calls=0
*/
void sub_13aab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aab60ULL || rel >= 0x13aab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aab70 size=16 callers=0 calls=0
*/
void sub_13aab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aab70ULL || rel >= 0x13aab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aab80 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_LicenseCardEvent
*/
void CS_LicenseCardEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aab80ULL || rel >= 0x13aac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aac00 size=16 callers=0 calls=0
*/
void sub_13aac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aac00ULL || rel >= 0x13aac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aac10 size=16 callers=0 calls=0
*/
void sub_13aac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aac10ULL || rel >= 0x13aac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aac20 size=16 callers=0 calls=0
*/
void sub_13aac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aac20ULL || rel >= 0x13aac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aac30 size=768 callers=0 calls=1
   calls: sub_13a7fe0
   ref: Other/FieldPlacementSelectParamSet
   ref: Other/TimeWait
   ref: Other/FieldPlacementSelectParamReset
   ref: Other/PlaceNameDisp
*/
void TimeWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aac30ULL || rel >= 0x13aaf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aaf30 size=160 callers=0 calls=3
   calls: sub_66c4e0, sub_680c80, sub_680d80
*/
void sub_13aaf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aaf30ULL || rel >= 0x13aafd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aafd0 size=16 callers=0 calls=0
*/
void sub_13aafd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aafd0ULL || rel >= 0x13aafe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aafe0 size=16 callers=0 calls=0
*/
void sub_13aafe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aafe0ULL || rel >= 0x13aaff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aaff0 size=16 callers=0 calls=0
*/
void sub_13aaff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aaff0ULL || rel >= 0x13ab000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab000 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_TimeWait
*/
void CS_TimeWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab000ULL || rel >= 0x13ab080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab080 size=16 callers=0 calls=0
*/
void sub_13ab080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab080ULL || rel >= 0x13ab090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab090 size=16 callers=0 calls=0
*/
void sub_13ab090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab090ULL || rel >= 0x13ab0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab0a0 size=16 callers=0 calls=0
*/
void sub_13ab0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab0a0ULL || rel >= 0x13ab0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab0b0 size=112 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_PlaceNameDisp
*/
void CS_PlaceNameDisp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab0b0ULL || rel >= 0x13ab120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab120 size=16 callers=0 calls=0
*/
void sub_13ab120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab120ULL || rel >= 0x13ab130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab130 size=16 callers=0 calls=0
*/
void sub_13ab130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab130ULL || rel >= 0x13ab140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab140 size=16 callers=0 calls=0
*/
void sub_13ab140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab140ULL || rel >= 0x13ab150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab150 size=480 callers=0 calls=4
   calls: sub_13a8200, sub_66c4e0, sub_680c80, sub_680e00
   ref: CS_FieldPlacementSelectParamSet
*/
void CS_FieldPlacementSelectParamSet(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab150ULL || rel >= 0x13ab330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab330 size=16 callers=0 calls=0
*/
void sub_13ab330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab330ULL || rel >= 0x13ab340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab340 size=16 callers=0 calls=0
*/
void sub_13ab340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab340ULL || rel >= 0x13ab350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab350 size=16 callers=0 calls=0
*/
void sub_13ab350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab350ULL || rel >= 0x13ab360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab360 size=112 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_FieldPlacementSelectParamReset
*/
void CS_FieldPlacementSelectParamReset(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab360ULL || rel >= 0x13ab3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab3d0 size=16 callers=0 calls=0
*/
void sub_13ab3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab3d0ULL || rel >= 0x13ab3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab3e0 size=16 callers=0 calls=0
*/
void sub_13ab3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab3e0ULL || rel >= 0x13ab3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab3f0 size=16 callers=0 calls=0
*/
void sub_13ab3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab3f0ULL || rel >= 0x13ab400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab400 size=1408 callers=1 calls=1
   calls: sub_13a7fe0
   ref: Sound/SoundWait
   ref: Sound/SoundPostTrigger
   ref: Sound/SoundPostEvent
   ref: Sound/SoundPlayPokeVoiceFromObject
   ref: Sound/SoundSetState
   ref: Sound/SoundSetSwitch
   ref: Sound/SoundSetRTPC
   ref: Sound/SoundPlayPokeVoice
*/
void SoundWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab400ULL || rel >= 0x13ab980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ab980 size=192 callers=0 calls=4
   calls: sub_13a81b0, sub_13aeed0, sub_680c80, sub_680f00
   ref: EventName
*/
void EventName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ab980ULL || rel >= 0x13aba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aba40 size=16 callers=0 calls=0
*/
void sub_13aba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aba40ULL || rel >= 0x13aba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aba50 size=16 callers=0 calls=0
*/
void sub_13aba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aba50ULL || rel >= 0x13aba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aba60 size=16 callers=0 calls=0
*/
void sub_13aba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aba60ULL || rel >= 0x13aba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aba70 size=32 callers=0 calls=0
*/
void sub_13aba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aba70ULL || rel >= 0x13aba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aba90 size=16 callers=0 calls=0
*/
void sub_13aba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aba90ULL || rel >= 0x13abaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abaa0 size=16 callers=0 calls=0
*/
void sub_13abaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abaa0ULL || rel >= 0x13abab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abab0 size=16 callers=0 calls=0
*/
void sub_13abab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abab0ULL || rel >= 0x13abac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abac0 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_SoundWait
*/
void CS_SoundWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abac0ULL || rel >= 0x13abb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abb40 size=16 callers=0 calls=0
*/
void sub_13abb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abb40ULL || rel >= 0x13abb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abb50 size=16 callers=0 calls=0
*/
void sub_13abb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abb50ULL || rel >= 0x13abb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abb60 size=16 callers=0 calls=0
*/
void sub_13abb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abb60ULL || rel >= 0x13abb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abb70 size=352 callers=0 calls=5
   calls: sub_13a8190, sub_13a81b0, sub_13af040, sub_680c80, sub_680f00
   ref: SwitchName
   ref: SwitchGroup
*/
void SwitchGroup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abb70ULL || rel >= 0x13abcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abcd0 size=16 callers=0 calls=0
*/
void sub_13abcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abcd0ULL || rel >= 0x13abce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abce0 size=16 callers=0 calls=0
*/
void sub_13abce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abce0ULL || rel >= 0x13abcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abcf0 size=16 callers=0 calls=0
*/
void sub_13abcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abcf0ULL || rel >= 0x13abd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abd00 size=400 callers=0 calls=6
   calls: sub_13a81b0, sub_13af240, sub_680c80, sub_680d80, sub_680e00, sub_680f00
   ref: RTPCGroup
   ref: InterpolationMs
*/
void InterpolationMs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abd00ULL || rel >= 0x13abe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abe90 size=16 callers=0 calls=0
*/
void sub_13abe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abe90ULL || rel >= 0x13abea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abea0 size=16 callers=0 calls=0
*/
void sub_13abea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abea0ULL || rel >= 0x13abeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abeb0 size=16 callers=0 calls=0
*/
void sub_13abeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abeb0ULL || rel >= 0x13abec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abec0 size=192 callers=0 calls=4
   calls: sub_13a81b0, sub_13af380, sub_680c80, sub_680f00
   ref: TriggerName
*/
void TriggerName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abec0ULL || rel >= 0x13abf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abf80 size=16 callers=0 calls=0
*/
void sub_13abf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abf80ULL || rel >= 0x13abf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abf90 size=16 callers=0 calls=0
*/
void sub_13abf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abf90ULL || rel >= 0x13abfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abfa0 size=16 callers=0 calls=0
*/
void sub_13abfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abfa0ULL || rel >= 0x13abfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013abfb0 size=352 callers=0 calls=5
   calls: sub_13a8190, sub_13a81b0, sub_13af490, sub_680c80, sub_680f00
   ref: StateGroup
   ref: StateName
*/
void StateGroup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13abfb0ULL || rel >= 0x13ac110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac110 size=16 callers=0 calls=0
*/
void sub_13ac110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac110ULL || rel >= 0x13ac120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac120 size=16 callers=0 calls=0
*/
void sub_13ac120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac120ULL || rel >= 0x13ac130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac130 size=16 callers=0 calls=0
*/
void sub_13ac130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac130ULL || rel >= 0x13ac140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac140 size=464 callers=0 calls=4
   calls: sub_13af690, sub_680c80, sub_680d80, sub_680e70
   ref: MonsNo
   ref: FormNo
*/
void MonsNo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac140ULL || rel >= 0x13ac310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac310 size=16 callers=0 calls=0
*/
void sub_13ac310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac310ULL || rel >= 0x13ac320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac320 size=16 callers=0 calls=0
*/
void sub_13ac320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac320ULL || rel >= 0x13ac330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac330 size=16 callers=0 calls=0
*/
void sub_13ac330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac330ULL || rel >= 0x13ac340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac340 size=288 callers=0 calls=6
   calls: Set_State_Event_Off, sub_13a8100, sub_680be0, sub_680c80, sub_680d80, sub_680e70
*/
void sub_13ac340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac340ULL || rel >= 0x13ac460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac460 size=16 callers=0 calls=0
*/
void sub_13ac460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac460ULL || rel >= 0x13ac470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac470 size=16 callers=0 calls=0
*/
void sub_13ac470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac470ULL || rel >= 0x13ac480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac480 size=16 callers=0 calls=0
*/
void sub_13ac480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac480ULL || rel >= 0x13ac490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac490 size=16 callers=1 calls=0
*/
void sub_13ac490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac490ULL || rel >= 0x13ac4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac4a0 size=96 callers=0 calls=1
   calls: sub_13fa740
*/
void sub_13ac4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac4a0ULL || rel >= 0x13ac500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac500 size=32 callers=0 calls=0
*/
void sub_13ac500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac500ULL || rel >= 0x13ac520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac520 size=32 callers=0 calls=0
*/
void sub_13ac520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac520ULL || rel >= 0x13ac540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac540 size=16 callers=0 calls=0
*/
void sub_13ac540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac540ULL || rel >= 0x13ac550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac550 size=48 callers=0 calls=1
   calls: sub_13faa90
*/
void sub_13ac550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac550ULL || rel >= 0x13ac580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac580 size=160 callers=0 calls=1
   calls: sub_1400490
*/
void sub_13ac580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac580ULL || rel >= 0x13ac620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac620 size=128 callers=0 calls=0
*/
void sub_13ac620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac620ULL || rel >= 0x13ac6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac6a0 size=192 callers=0 calls=1
   calls: sub_1400540
*/
void sub_13ac6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac6a0ULL || rel >= 0x13ac760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac760 size=16 callers=0 calls=0
*/
void sub_13ac760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac760ULL || rel >= 0x13ac770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac770 size=256 callers=0 calls=2
   calls: sub_1406370, sub_66efd0
*/
void sub_13ac770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac770ULL || rel >= 0x13ac870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac870 size=256 callers=0 calls=2
   calls: sub_1409980, sub_66efd0
*/
void sub_13ac870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac870ULL || rel >= 0x13ac970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ac970 size=256 callers=0 calls=2
   calls: sub_1403380, sub_66efd0
*/
void sub_13ac970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ac970ULL || rel >= 0x13aca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aca70 size=16 callers=0 calls=0
*/
void sub_13aca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aca70ULL || rel >= 0x13aca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aca80 size=176 callers=0 calls=2
   calls: sub_66efe0, sub_66f050
*/
void sub_13aca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aca80ULL || rel >= 0x13acb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013acb30 size=208 callers=0 calls=0
*/
void sub_13acb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13acb30ULL || rel >= 0x13acc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013acc00 size=112 callers=0 calls=2
   calls: sub_66c710, sub_66efe0
*/
void sub_13acc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13acc00ULL || rel >= 0x13acc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013acc70 size=512 callers=0 calls=6
   calls: sub_13b13b0, sub_5cff50, sub_5e6770, sub_66c710, sub_66efe0, sub_66f050
*/
void sub_13acc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13acc70ULL || rel >= 0x13ace70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ace70 size=592 callers=0 calls=8
   calls: sub_1c0, sub_5cfaf0, sub_5cff50, sub_5e6770, sub_5e7a30, sub_66efe0, sub_66f050, sub_d25c50
*/
void sub_13ace70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ace70ULL || rel >= 0x13ad0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad0c0 size=32 callers=0 calls=1
   calls: sub_7c2d80
*/
void sub_13ad0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad0c0ULL || rel >= 0x13ad0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad0e0 size=32 callers=0 calls=1
   calls: sub_7c2280
*/
void sub_13ad0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad0e0ULL || rel >= 0x13ad100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad100 size=128 callers=0 calls=1
   calls: sub_136b580
*/
void sub_13ad100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad100ULL || rel >= 0x13ad180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad180 size=16 callers=0 calls=0
*/
void sub_13ad180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad180ULL || rel >= 0x13ad190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad190 size=128 callers=0 calls=1
   calls: sub_136b690
*/
void sub_13ad190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad190ULL || rel >= 0x13ad210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad210 size=144 callers=0 calls=2
   calls: sub_13b14c0, sub_66efd0
*/
void sub_13ad210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad210ULL || rel >= 0x13ad2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad2a0 size=112 callers=0 calls=2
   calls: sub_136b780, sub_b70820
*/
void sub_13ad2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad2a0ULL || rel >= 0x13ad310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad310 size=128 callers=0 calls=0
*/
void sub_13ad310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad310ULL || rel >= 0x13ad390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad390 size=112 callers=0 calls=1
   calls: sub_136b780
*/
void sub_13ad390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad390ULL || rel >= 0x13ad400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad400 size=144 callers=0 calls=2
   calls: sub_136b780, sub_b6fb70
*/
void sub_13ad400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad400ULL || rel >= 0x13ad490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad490 size=288 callers=0 calls=4
   calls: sub_136b780, sub_66efe0, sub_66f050, sub_b6fb70
*/
void sub_13ad490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad490ULL || rel >= 0x13ad5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad5b0 size=144 callers=0 calls=2
   calls: sub_136b780, sub_b6ff20
*/
void sub_13ad5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad5b0ULL || rel >= 0x13ad640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad640 size=144 callers=0 calls=2
   calls: sub_136b780, sub_b70440
*/
void sub_13ad640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad640ULL || rel >= 0x13ad6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad6d0 size=256 callers=0 calls=3
   calls: sub_136b780, sub_66efe0, sub_66f050
*/
void sub_13ad6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad6d0ULL || rel >= 0x13ad7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad7d0 size=144 callers=0 calls=1
   calls: sub_136b740
*/
void sub_13ad7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad7d0ULL || rel >= 0x13ad860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad860 size=176 callers=0 calls=1
   calls: sub_135a1a0
*/
void sub_13ad860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad860ULL || rel >= 0x13ad910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad910 size=176 callers=0 calls=1
   calls: sub_135a2d0
*/
void sub_13ad910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad910ULL || rel >= 0x13ad9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ad9c0 size=176 callers=0 calls=1
   calls: sub_135a3c0
*/
void sub_13ad9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ad9c0ULL || rel >= 0x13ada70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ada70 size=224 callers=0 calls=2
   calls: sub_135a1a0, sub_d1df20
*/
void sub_13ada70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ada70ULL || rel >= 0x13adb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013adb50 size=224 callers=0 calls=2
   calls: sub_135a2d0, sub_d1df20
*/
void sub_13adb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13adb50ULL || rel >= 0x13adc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013adc30 size=224 callers=0 calls=2
   calls: sub_135a3c0, sub_d1df20
*/
void sub_13adc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13adc30ULL || rel >= 0x13add10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013add10 size=176 callers=0 calls=1
   calls: sub_135a760
*/
void sub_13add10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13add10ULL || rel >= 0x13addc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013addc0 size=176 callers=0 calls=1
   calls: sub_135a4b0
*/
void sub_13addc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13addc0ULL || rel >= 0x13ade70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ade70 size=176 callers=0 calls=1
   calls: sub_135a5a0
*/
void sub_13ade70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ade70ULL || rel >= 0x13adf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013adf20 size=896 callers=0 calls=1
   calls: sub_c43ed0
*/
void sub_13adf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13adf20ULL || rel >= 0x13ae2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae2a0 size=1040 callers=0 calls=1
   calls: sub_c44410
*/
void sub_13ae2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae2a0ULL || rel >= 0x13ae6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae6b0 size=96 callers=0 calls=1
   calls: sub_c44310
*/
void sub_13ae6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae6b0ULL || rel >= 0x13ae710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae710 size=96 callers=0 calls=1
   calls: sub_c44210
*/
void sub_13ae710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae710ULL || rel >= 0x13ae770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae770 size=80 callers=0 calls=1
   calls: sub_c44730
*/
void sub_13ae770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae770ULL || rel >= 0x13ae7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae7c0 size=48 callers=0 calls=1
   calls: sub_c443a0
*/
void sub_13ae7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae7c0ULL || rel >= 0x13ae7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae7f0 size=48 callers=0 calls=1
   calls: sub_c442a0
*/
void sub_13ae7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae7f0ULL || rel >= 0x13ae820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae820 size=16 callers=0 calls=0
*/
void sub_13ae820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae820ULL || rel >= 0x13ae830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae830 size=16 callers=0 calls=0
*/
void sub_13ae830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae830ULL || rel >= 0x13ae840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae840 size=16 callers=0 calls=0
*/
void sub_13ae840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae840ULL || rel >= 0x13ae850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae850 size=16 callers=0 calls=0
*/
void sub_13ae850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae850ULL || rel >= 0x13ae860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae860 size=16 callers=0 calls=0
*/
void sub_13ae860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae860ULL || rel >= 0x13ae870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae870 size=16 callers=0 calls=0
*/
void sub_13ae870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae870ULL || rel >= 0x13ae880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae880 size=16 callers=0 calls=0
*/
void sub_13ae880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae880ULL || rel >= 0x13ae890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae890 size=16 callers=0 calls=0
*/
void sub_13ae890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae890ULL || rel >= 0x13ae8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae8a0 size=16 callers=0 calls=0
*/
void sub_13ae8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae8a0ULL || rel >= 0x13ae8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae8b0 size=16 callers=0 calls=0
*/
void sub_13ae8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae8b0ULL || rel >= 0x13ae8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae8c0 size=16 callers=0 calls=0
*/
void sub_13ae8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae8c0ULL || rel >= 0x13ae8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae8d0 size=16 callers=0 calls=0
*/
void sub_13ae8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae8d0ULL || rel >= 0x13ae8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae8e0 size=16 callers=0 calls=0
*/
void sub_13ae8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae8e0ULL || rel >= 0x13ae8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae8f0 size=16 callers=0 calls=0
*/
void sub_13ae8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae8f0ULL || rel >= 0x13ae900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae900 size=16 callers=0 calls=0
*/
void sub_13ae900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae900ULL || rel >= 0x13ae910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ae910 size=704 callers=0 calls=10
   calls: sub_13faad0, sub_1c0, sub_5cfaf0, sub_5e6770, sub_5e7a30, sub_66efd0, sub_c60e50, sub_c60ed0, sub_d7eea0, sub_d7f3c0
*/
void sub_13ae910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ae910ULL || rel >= 0x13aebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aebd0 size=224 callers=0 calls=2
   calls: sub_c60e50, sub_e909f0
*/
void sub_13aebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aebd0ULL || rel >= 0x13aecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aecb0 size=176 callers=0 calls=3
   calls: sub_14dfb80, sub_d25c50, sub_e90930
*/
void sub_13aecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aecb0ULL || rel >= 0x13aed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aed60 size=128 callers=0 calls=0
*/
void sub_13aed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aed60ULL || rel >= 0x13aede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aede0 size=112 callers=0 calls=0
*/
void sub_13aede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aede0ULL || rel >= 0x13aee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aee50 size=32 callers=0 calls=1
   calls: sub_136e810
*/
void sub_13aee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aee50ULL || rel >= 0x13aee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aee70 size=32 callers=0 calls=1
   calls: sub_136e780
*/
void sub_13aee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aee70ULL || rel >= 0x13aee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aee90 size=32 callers=0 calls=1
   calls: sub_136e8b0
*/
void sub_13aee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aee90ULL || rel >= 0x13aeeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aeeb0 size=32 callers=0 calls=1
   calls: sub_136e710
*/
void sub_13aeeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aeeb0ULL || rel >= 0x13aeed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aeed0 size=304 callers=1 calls=6
   calls: sub_5cfaf0, sub_5cff50, sub_5e6770, sub_66efe0, sub_66f050, sub_794330
*/
void sub_13aeed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aeed0ULL || rel >= 0x13af000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013af000 size=64 callers=0 calls=1
   calls: sub_791db0
*/
void sub_13af000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13af000ULL || rel >= 0x13af040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013af040 size=512 callers=1 calls=6
   calls: sub_5cfaf0, sub_5cff50, sub_5e6770, sub_66efe0, sub_66f050, sub_794220
*/
void sub_13af040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13af040ULL || rel >= 0x13af240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013af240 size=320 callers=1 calls=6
   calls: sub_5cfaf0, sub_5cff50, sub_5e6770, sub_66efe0, sub_66f050, sub_794310
*/
void sub_13af240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13af240ULL || rel >= 0x13af380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013af380 size=272 callers=1 calls=6
   calls: sub_5cfaf0, sub_5cff50, sub_5e6770, sub_66efe0, sub_66f050, sub_794470
*/
void sub_13af380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13af380ULL || rel >= 0x13af490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013af490 size=512 callers=1 calls=6
   calls: sub_5cfaf0, sub_5cff50, sub_5e6770, sub_66efe0, sub_66f050, sub_794490
*/
void sub_13af490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13af490ULL || rel >= 0x13af690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013af690 size=80 callers=1 calls=1
   calls: Play_PV_EV__03d__02d__02d
*/
void sub_13af690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13af690ULL || rel >= 0x13af6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013af6e0 size=432 callers=1 calls=8
   calls: Play_PV_EV__03d__02d__02d, Play_PV__03d__02d__02d, sub_13b1ba0, sub_794330, sub_986bc0, sub_b843f0, sub_d4fb90, sub_d4fba0
   ref: Set_State_Event_Off
*/
void Set_State_Event_Off(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13af6e0ULL || rel >= 0x13af890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013af890 size=432 callers=0 calls=7
   calls: sub_5cfaf0, sub_5cff50, sub_5e6770, sub_66efe0, sub_66f050, sub_793ea0, sub_794040
*/
void sub_13af890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13af890ULL || rel >= 0x13afa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013afa40 size=656 callers=0 calls=9
   calls: sub_13b1c90, sub_5cfaf0, sub_5cff50, sub_5e6770, sub_66efe0, sub_66f050, sub_793ea0, sub_794040, sub_986bc0
*/
void sub_13afa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13afa40ULL || rel >= 0x13afcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013afcd0 size=320 callers=0 calls=4
   calls: sub_135f4b0, sub_969be0, sub_ce17c0, sub_d25c50
*/
void sub_13afcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13afcd0ULL || rel >= 0x13afe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013afe10 size=256 callers=0 calls=3
   calls: sub_135f4b0, sub_969be0, sub_ce1940
*/
void sub_13afe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13afe10ULL || rel >= 0x13aff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aff10 size=80 callers=0 calls=2
   calls: sub_137f6b0, sub_137f800
*/
void sub_13aff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aff10ULL || rel >= 0x13aff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013aff60 size=96 callers=0 calls=3
   calls: sub_137f870, sub_137f950, sub_137f9c0
*/
void sub_13aff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13aff60ULL || rel >= 0x13affc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013affc0 size=176 callers=0 calls=1
   calls: sub_1362190
*/
void sub_13affc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13affc0ULL || rel >= 0x13b0070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0070 size=160 callers=0 calls=1
   calls: sub_1362210
*/
void sub_13b0070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0070ULL || rel >= 0x13b0110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0110 size=32 callers=0 calls=1
   calls: sub_eaf6b0
*/
void sub_13b0110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0110ULL || rel >= 0x13b0130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0130 size=16 callers=0 calls=0
*/
void sub_13b0130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0130ULL || rel >= 0x13b0140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0140 size=128 callers=0 calls=1
   calls: sub_137b9a0
*/
void sub_13b0140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0140ULL || rel >= 0x13b01c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b01c0 size=48 callers=0 calls=1
   calls: sub_136d3c0
*/
void sub_13b01c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b01c0ULL || rel >= 0x13b01f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b01f0 size=48 callers=0 calls=1
   calls: sub_136d1a0
*/
void sub_13b01f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b01f0ULL || rel >= 0x13b0220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0220 size=128 callers=0 calls=1
   calls: sub_1357610
*/
void sub_13b0220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0220ULL || rel >= 0x13b02a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b02a0 size=48 callers=0 calls=1
   calls: sub_eeb2b0
*/
void sub_13b02a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b02a0ULL || rel >= 0x13b02d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b02d0 size=176 callers=0 calls=2
   calls: sub_ed2ed0, sub_ee7830
*/
void sub_13b02d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b02d0ULL || rel >= 0x13b0380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0380 size=384 callers=0 calls=7
   calls: sub_13b15e0, sub_13b2260, sub_13b2320, sub_5cff50, sub_5e6770, sub_66efe0, sub_66f050
*/
void sub_13b0380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0380ULL || rel >= 0x13b0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0500 size=272 callers=0 calls=5
   calls: sub_13b17e0, sub_5cff50, sub_5e6770, sub_66efe0, sub_66f050
*/
void sub_13b0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0500ULL || rel >= 0x13b0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0610 size=48 callers=0 calls=1
   calls: sub_ce08f0
*/
void sub_13b0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0610ULL || rel >= 0x13b0640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0640 size=144 callers=0 calls=1
   calls: sub_13b19d0
*/
void sub_13b0640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0640ULL || rel >= 0x13b06d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b06d0 size=192 callers=0 calls=1
   calls: sub_ca4370
*/
void sub_13b06d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b06d0ULL || rel >= 0x13b0790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0790 size=128 callers=0 calls=1
   calls: sub_ca42d0
*/
void sub_13b0790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0790ULL || rel >= 0x13b0810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0810 size=176 callers=0 calls=0
*/
void sub_13b0810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0810ULL || rel >= 0x13b08c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b08c0 size=144 callers=0 calls=1
   calls: sub_134c550
*/
void sub_13b08c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b08c0ULL || rel >= 0x13b0950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0950 size=144 callers=0 calls=1
   calls: sub_134c6e0
*/
void sub_13b0950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0950ULL || rel >= 0x13b09e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b09e0 size=16 callers=0 calls=0
*/
void sub_13b09e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b09e0ULL || rel >= 0x13b09f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b09f0 size=128 callers=0 calls=1
   calls: sub_134c8e0
*/
void sub_13b09f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b09f0ULL || rel >= 0x13b0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0a70 size=128 callers=0 calls=1
   calls: sub_134c970
*/
void sub_13b0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0a70ULL || rel >= 0x13b0af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0af0 size=128 callers=0 calls=1
   calls: sub_134c7a0
*/
void sub_13b0af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0af0ULL || rel >= 0x13b0b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0b70 size=144 callers=0 calls=1
   calls: sub_134c880
*/
void sub_13b0b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0b70ULL || rel >= 0x13b0c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0c00 size=144 callers=0 calls=1
   calls: sub_134c8a0
*/
void sub_13b0c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0c00ULL || rel >= 0x13b0c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0c90 size=128 callers=0 calls=1
   calls: sub_134c8c0
*/
void sub_13b0c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0c90ULL || rel >= 0x13b0d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0d10 size=176 callers=0 calls=1
   calls: sub_ca43b0
*/
void sub_13b0d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0d10ULL || rel >= 0x13b0dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0dc0 size=192 callers=0 calls=1
   calls: sub_ca45b0
*/
void sub_13b0dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0dc0ULL || rel >= 0x13b0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0e80 size=192 callers=0 calls=1
   calls: sub_ca49c0
*/
void sub_13b0e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0e80ULL || rel >= 0x13b0f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0f40 size=176 callers=0 calls=1
   calls: mes_tower_tr__03d_00
*/
void sub_13b0f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0f40ULL || rel >= 0x13b0ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b0ff0 size=176 callers=0 calls=1
   calls: KNOCKOUT_BATTLEHOUSEBOSS
*/
void sub_13b0ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b0ff0ULL || rel >= 0x13b10a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b10a0 size=176 callers=0 calls=1
   calls: sub_ca4e10
*/
void sub_13b10a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b10a0ULL || rel >= 0x13b1150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b1150 size=192 callers=0 calls=1
   calls: sub_ca4e20
*/
void sub_13b1150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b1150ULL || rel >= 0x13b1210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b1210 size=192 callers=49 calls=4
   calls: sub_5cff50, sub_5e6770, sub_66efe0, sub_66f050
*/
void sub_13b1210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b1210ULL || rel >= 0x13b12d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b12d0 size=160 callers=20 calls=2
   calls: sub_66efe0, sub_66f050
*/
void sub_13b12d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b12d0ULL || rel >= 0x13b1370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b1370 size=64 callers=1 calls=2
   calls: sub_66c710, sub_66efe0
*/
void sub_13b1370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b1370ULL || rel >= 0x13b13b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b13b0 size=272 callers=1 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_13b13b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b13b0ULL || rel >= 0x13b14c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b14c0 size=288 callers=1 calls=3
   calls: sub_13b1ac0, sub_c38350, sub_e9db40
*/
void sub_13b14c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b14c0ULL || rel >= 0x13b15e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b15e0 size=512 callers=2 calls=1
   calls: sub_13b2120
*/
void sub_13b15e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b15e0ULL || rel >= 0x13b17e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b17e0 size=496 callers=2 calls=2
   calls: sub_13b2310, sub_13b2330
*/
void sub_13b17e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b17e0ULL || rel >= 0x13b19d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b19d0 size=240 callers=1 calls=1
   calls: sub_ca3dd0
*/
void sub_13b19d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b19d0ULL || rel >= 0x13b1ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b1ac0 size=224 callers=1 calls=1
   calls: sub_da2de0
*/
void sub_13b1ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b1ac0ULL || rel >= 0x13b1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b1ba0 size=240 callers=16 calls=1
   calls: sub_13b1c90
*/
void sub_13b1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b1ba0ULL || rel >= 0x13b1c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b1c90 size=304 callers=32 calls=1
   calls: sub_967240
*/
void sub_13b1c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b1c90ULL || rel >= 0x13b1dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b1dc0 size=544 callers=0 calls=0
*/
void sub_13b1dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b1dc0ULL || rel >= 0x13b1fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b1fe0 size=16 callers=0 calls=0
*/
void sub_13b1fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b1fe0ULL || rel >= 0x13b1ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b1ff0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_13b1ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b1ff0ULL || rel >= 0x13b2030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2030 size=32 callers=0 calls=0
*/
void sub_13b2030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2030ULL || rel >= 0x13b2050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2050 size=16 callers=0 calls=0
*/
void sub_13b2050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2050ULL || rel >= 0x13b2060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2060 size=16 callers=0 calls=0
*/
void sub_13b2060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2060ULL || rel >= 0x13b2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2070 size=32 callers=0 calls=0
*/
void sub_13b2070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2070ULL || rel >= 0x13b2090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2090 size=16 callers=0 calls=0
*/
void sub_13b2090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2090ULL || rel >= 0x13b20a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b20a0 size=128 callers=0 calls=0
*/
void sub_13b20a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b20a0ULL || rel >= 0x13b2120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2120 size=112 callers=8 calls=1
   calls: sub_5e2350
*/
void sub_13b2120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2120ULL || rel >= 0x13b2190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2190 size=96 callers=0 calls=0
*/
void sub_13b2190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2190ULL || rel >= 0x13b21f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b21f0 size=64 callers=0 calls=0
*/
void sub_13b21f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b21f0ULL || rel >= 0x13b2230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2230 size=16 callers=0 calls=0
*/
void sub_13b2230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2230ULL || rel >= 0x13b2240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2240 size=16 callers=0 calls=0
*/
void sub_13b2240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2240ULL || rel >= 0x13b2250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2250 size=16 callers=0 calls=0
*/
void sub_13b2250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2250ULL || rel >= 0x13b2260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2260 size=176 callers=2 calls=1
   calls: sub_13b2930
*/
void sub_13b2260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2260ULL || rel >= 0x13b2310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2310 size=16 callers=11 calls=0
*/
void sub_13b2310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2310ULL || rel >= 0x13b2320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2320 size=16 callers=9 calls=0
*/
void sub_13b2320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2320ULL || rel >= 0x13b2330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2330 size=16 callers=13 calls=0
*/
void sub_13b2330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2330ULL || rel >= 0x13b2340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2340 size=208 callers=0 calls=0
*/
void sub_13b2340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2340ULL || rel >= 0x13b2410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2410 size=208 callers=0 calls=0
*/
void sub_13b2410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2410ULL || rel >= 0x13b24e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b24e0 size=240 callers=0 calls=0
*/
void sub_13b24e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b24e0ULL || rel >= 0x13b25d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b25d0 size=208 callers=0 calls=0
*/
void sub_13b25d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b25d0ULL || rel >= 0x13b26a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b26a0 size=208 callers=0 calls=0
*/
void sub_13b26a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b26a0ULL || rel >= 0x13b2770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2770 size=16 callers=0 calls=0
*/
void sub_13b2770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2770ULL || rel >= 0x13b2780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2780 size=16 callers=0 calls=0
*/
void sub_13b2780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2780ULL || rel >= 0x13b2790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2790 size=208 callers=0 calls=0
*/
void sub_13b2790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2790ULL || rel >= 0x13b2860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2860 size=208 callers=0 calls=0
*/
void sub_13b2860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2860ULL || rel >= 0x13b2930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2930 size=352 callers=1 calls=0
*/
void sub_13b2930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2930ULL || rel >= 0x13b2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2a90 size=1296 callers=18 calls=0
*/
void sub_13b2a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2a90ULL || rel >= 0x13b2fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b2fa0 size=5280 callers=1 calls=1
   calls: sub_13a7fe0
   ref: Camera/PfxDofStart
   ref: Camera/EvCameraShakeInZ
   ref: Camera/EvCameraHandShakeEnd
   ref: Camera/EvCameraMoveDistChrEasy
   ref: Camera/EvCameraMoveDistRateChrEasy
   ref: Camera/EvCameraMoveDistRateChrEasyPair
   ref: Camera/EvCameraShakeEndAll
   ref: Camera/EvCameraShakeInY
*/
void PfxDofWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b2fa0ULL || rel >= 0x13b4440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4440 size=16 callers=0 calls=0
*/
void sub_13b4440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4440ULL || rel >= 0x13b4450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4450 size=16 callers=0 calls=0
*/
void sub_13b4450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4450ULL || rel >= 0x13b4460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4460 size=16 callers=0 calls=0
*/
void sub_13b4460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4460ULL || rel >= 0x13b4470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4470 size=16 callers=0 calls=0
*/
void sub_13b4470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4470ULL || rel >= 0x13b4480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4480 size=304 callers=0 calls=5
   calls: sub_13b2a90, sub_13b9200, sub_680c80, sub_680d80, sub_680f00
*/
void sub_13b4480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4480ULL || rel >= 0x13b45b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b45b0 size=16 callers=0 calls=0
*/
void sub_13b45b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b45b0ULL || rel >= 0x13b45c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b45c0 size=16 callers=0 calls=0
*/
void sub_13b45c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b45c0ULL || rel >= 0x13b45d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b45d0 size=16 callers=0 calls=0
*/
void sub_13b45d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b45d0ULL || rel >= 0x13b45e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b45e0 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_EvCameraWait
*/
void CS_EvCameraWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b45e0ULL || rel >= 0x13b4660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4660 size=16 callers=0 calls=0
*/
void sub_13b4660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4660ULL || rel >= 0x13b4670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4670 size=16 callers=0 calls=0
*/
void sub_13b4670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4670ULL || rel >= 0x13b4680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4680 size=16 callers=0 calls=0
*/
void sub_13b4680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4680ULL || rel >= 0x13b4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4690 size=768 callers=0 calls=7
   calls: sub_13b2a90, sub_13b9290, sub_680c80, sub_680d80, sub_680e00, sub_680f00, sub_680ff0
   ref: LookAt
*/
void LookAt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4690ULL || rel >= 0x13b4990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4990 size=16 callers=0 calls=0
*/
void sub_13b4990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4990ULL || rel >= 0x13b49a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b49a0 size=16 callers=0 calls=0
*/
void sub_13b49a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b49a0ULL || rel >= 0x13b49b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b49b0 size=16 callers=0 calls=0
*/
void sub_13b49b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b49b0ULL || rel >= 0x13b49c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b49c0 size=544 callers=0 calls=7
   calls: sub_13b2a90, sub_13b9440, sub_680c80, sub_680d80, sub_680e00, sub_680f00, sub_680ff0
   ref: Offset
   ref: DistanceRate
*/
void DistanceRate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b49c0ULL || rel >= 0x13b4be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4be0 size=16 callers=0 calls=0
*/
void sub_13b4be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4be0ULL || rel >= 0x13b4bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4bf0 size=16 callers=0 calls=0
*/
void sub_13b4bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4bf0ULL || rel >= 0x13b4c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4c00 size=16 callers=0 calls=0
*/
void sub_13b4c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4c00ULL || rel >= 0x13b4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4c10 size=544 callers=0 calls=7
   calls: sub_13b2a90, sub_13b9440, sub_680c80, sub_680d80, sub_680e00, sub_680f00, sub_680ff0
   ref: LookAt
   ref: DistanceRate
*/
void DistanceRate_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4c10ULL || rel >= 0x13b4e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4e30 size=16 callers=0 calls=0
*/
void sub_13b4e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4e30ULL || rel >= 0x13b4e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4e40 size=16 callers=0 calls=0
*/
void sub_13b4e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4e40ULL || rel >= 0x13b4e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4e50 size=16 callers=0 calls=0
*/
void sub_13b4e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4e50ULL || rel >= 0x13b4e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b4e60 size=640 callers=0 calls=7
   calls: sub_13a8100, sub_13b2a90, sub_13b96c0, sub_680c80, sub_680d80, sub_680e00, sub_680f00
   ref: LookAtHeight
   ref: DistanceRate
*/
void LookAtHeight(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b4e60ULL || rel >= 0x13b50e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b50e0 size=16 callers=0 calls=0
*/
void sub_13b50e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b50e0ULL || rel >= 0x13b50f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b50f0 size=16 callers=0 calls=0
*/
void sub_13b50f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b50f0ULL || rel >= 0x13b5100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5100 size=16 callers=0 calls=0
*/
void sub_13b5100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5100ULL || rel >= 0x13b5110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5110 size=864 callers=0 calls=8
   calls: sub_13a8100, sub_13b2a90, sub_13b9570, sub_680c80, sub_680d80, sub_680e00, sub_680f00, sub_d1fe70
   ref: LookAtHeight
   ref: DistanceRate
   ref: ChrId2
   ref: ChrId1
*/
void LookAtHeight_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5110ULL || rel >= 0x13b5470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5470 size=16 callers=0 calls=0
*/
void sub_13b5470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5470ULL || rel >= 0x13b5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5480 size=16 callers=0 calls=0
*/
void sub_13b5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5480ULL || rel >= 0x13b5490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5490 size=16 callers=0 calls=0
*/
void sub_13b5490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5490ULL || rel >= 0x13b54a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b54a0 size=656 callers=0 calls=7
   calls: sub_13b2a90, sub_13b9800, sub_680c80, sub_680d80, sub_680e00, sub_680f00, sub_680ff0
   ref: LookAt
   ref: Distance
*/
void Distance(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b54a0ULL || rel >= 0x13b5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5730 size=16 callers=0 calls=0
*/
void sub_13b5730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5730ULL || rel >= 0x13b5740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5740 size=16 callers=0 calls=0
*/
void sub_13b5740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5740ULL || rel >= 0x13b5750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5750 size=16 callers=0 calls=0
*/
void sub_13b5750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5750ULL || rel >= 0x13b5760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5760 size=768 callers=0 calls=8
   calls: sub_13a8100, sub_13b2a90, sub_13b9ad0, sub_680c80, sub_680d80, sub_680e00, sub_680f00, sub_680ff0
   ref: LookAtHeight
   ref: Distance
*/
void LookAtHeight_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5760ULL || rel >= 0x13b5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5a60 size=16 callers=0 calls=0
*/
void sub_13b5a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5a60ULL || rel >= 0x13b5a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5a70 size=16 callers=0 calls=0
*/
void sub_13b5a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5a70ULL || rel >= 0x13b5a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5a80 size=16 callers=0 calls=0
*/
void sub_13b5a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5a80ULL || rel >= 0x13b5a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5a90 size=640 callers=0 calls=7
   calls: sub_13a8100, sub_13b2a90, sub_13b9d90, sub_680c80, sub_680d80, sub_680e00, sub_680f00
   ref: LookAtHeight
   ref: Distance
*/
void LookAtHeight_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5a90ULL || rel >= 0x13b5d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5d10 size=16 callers=0 calls=0
*/
void sub_13b5d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5d10ULL || rel >= 0x13b5d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5d20 size=16 callers=0 calls=0
*/
void sub_13b5d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5d20ULL || rel >= 0x13b5d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5d30 size=16 callers=0 calls=0
*/
void sub_13b5d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5d30ULL || rel >= 0x13b5d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5d40 size=640 callers=0 calls=7
   calls: sub_13a8100, sub_13b2a90, sub_13b9ee0, sub_680c80, sub_680d80, sub_680e00, sub_680f00
   ref: LookAtHeight
   ref: DistanceRate
*/
void LookAtHeight_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5d40ULL || rel >= 0x13b5fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5fc0 size=16 callers=0 calls=0
*/
void sub_13b5fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5fc0ULL || rel >= 0x13b5fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5fd0 size=16 callers=0 calls=0
*/
void sub_13b5fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5fd0ULL || rel >= 0x13b5fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5fe0 size=16 callers=0 calls=0
*/
void sub_13b5fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5fe0ULL || rel >= 0x13b5ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b5ff0 size=880 callers=0 calls=7
   calls: sub_13a8100, sub_13b2a90, sub_13ba010, sub_680c80, sub_680d80, sub_680e00, sub_680f00
   ref: LookAtHeight
   ref: ChrId2
   ref: TargetRate
   ref: ChrId1
   ref: Distance
*/
void LookAtHeight_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b5ff0ULL || rel >= 0x13b6360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6360 size=16 callers=0 calls=0
*/
void sub_13b6360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6360ULL || rel >= 0x13b6370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6370 size=16 callers=0 calls=0
*/
void sub_13b6370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6370ULL || rel >= 0x13b6380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6380 size=16 callers=0 calls=0
*/
void sub_13b6380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6380ULL || rel >= 0x13b6390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6390 size=880 callers=0 calls=7
   calls: sub_13a8100, sub_13b2a90, sub_13ba1a0, sub_680c80, sub_680d80, sub_680e00, sub_680f00
   ref: LookAtHeight
   ref: DistanceRate
   ref: ChrId2
   ref: TargetRate
   ref: ChrId1
*/
void LookAtHeight_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6390ULL || rel >= 0x13b6700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6700 size=16 callers=0 calls=0
*/
void sub_13b6700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6700ULL || rel >= 0x13b6710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6710 size=16 callers=0 calls=0
*/
void sub_13b6710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6710ULL || rel >= 0x13b6720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6720 size=16 callers=0 calls=0
*/
void sub_13b6720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6720ULL || rel >= 0x13b6730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6730 size=1008 callers=0 calls=9
   calls: sub_13a8200, sub_13b2a90, sub_66c4e0, sub_680c80, sub_680d80, sub_680e00, sub_680e70, sub_680f00, sub_680ff0
   ref: RandRange
   ref: Period
   ref: IsLoop
   ref: Amplitude
   ref: CS_EvCameraShakeInX
   ref: RandomAttenuationFrame
*/
void CS_EvCameraShakeInX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6730ULL || rel >= 0x13b6b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6b20 size=16 callers=0 calls=0
*/
void sub_13b6b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6b20ULL || rel >= 0x13b6b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6b30 size=16 callers=0 calls=0
*/
void sub_13b6b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6b30ULL || rel >= 0x13b6b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6b40 size=16 callers=0 calls=0
*/
void sub_13b6b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6b40ULL || rel >= 0x13b6b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6b50 size=1008 callers=0 calls=9
   calls: sub_13a8200, sub_13b2a90, sub_66c4e0, sub_680c80, sub_680d80, sub_680e00, sub_680e70, sub_680f00, sub_680ff0
   ref: RandRange
   ref: Period
   ref: IsLoop
   ref: Amplitude
   ref: RandomAttenuationFrame
   ref: CS_EvCameraShakeInY
*/
void CS_EvCameraShakeInY(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6b50ULL || rel >= 0x13b6f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6f40 size=16 callers=0 calls=0
*/
void sub_13b6f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6f40ULL || rel >= 0x13b6f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6f50 size=16 callers=0 calls=0
*/
void sub_13b6f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6f50ULL || rel >= 0x13b6f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6f60 size=16 callers=0 calls=0
*/
void sub_13b6f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6f60ULL || rel >= 0x13b6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b6f70 size=1008 callers=0 calls=9
   calls: sub_13a8200, sub_13b2a90, sub_66c4e0, sub_680c80, sub_680d80, sub_680e00, sub_680e70, sub_680f00, sub_680ff0
   ref: RandRange
   ref: Period
   ref: IsLoop
   ref: Amplitude
   ref: CS_EvCameraShakeInZ
   ref: RandomAttenuationFrame
*/
void CS_EvCameraShakeInZ(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b6f70ULL || rel >= 0x13b7360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7360 size=16 callers=0 calls=0
*/
void sub_13b7360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7360ULL || rel >= 0x13b7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7370 size=16 callers=0 calls=0
*/
void sub_13b7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7370ULL || rel >= 0x13b7380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7380 size=16 callers=0 calls=0
*/
void sub_13b7380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7380ULL || rel >= 0x13b7390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7390 size=48 callers=0 calls=1
   calls: sub_13ba8c0
*/
void sub_13b7390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7390ULL || rel >= 0x13b73c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b73c0 size=16 callers=0 calls=0
*/
void sub_13b73c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b73c0ULL || rel >= 0x13b73d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b73d0 size=16 callers=0 calls=0
*/
void sub_13b73d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b73d0ULL || rel >= 0x13b73e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b73e0 size=16 callers=0 calls=0
*/
void sub_13b73e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b73e0ULL || rel >= 0x13b73f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b73f0 size=416 callers=0 calls=5
   calls: sub_13baa40, sub_680c80, sub_680d80, sub_680e00, sub_680f00
   ref: AttenuationType
   ref: AfterAmplitude
*/
void AttenuationType(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b73f0ULL || rel >= 0x13b7590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7590 size=16 callers=0 calls=0
*/
void sub_13b7590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7590ULL || rel >= 0x13b75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b75a0 size=16 callers=0 calls=0
*/
void sub_13b75a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b75a0ULL || rel >= 0x13b75b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b75b0 size=16 callers=0 calls=0
*/
void sub_13b75b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b75b0ULL || rel >= 0x13b75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b75c0 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_EvCameraShakeWait
*/
void CS_EvCameraShakeWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b75c0ULL || rel >= 0x13b7640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7640 size=16 callers=0 calls=0
*/
void sub_13b7640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7640ULL || rel >= 0x13b7650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7650 size=16 callers=0 calls=0
*/
void sub_13b7650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7650ULL || rel >= 0x13b7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7660 size=16 callers=0 calls=0
*/
void sub_13b7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7660ULL || rel >= 0x13b7670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7670 size=752 callers=0 calls=7
   calls: sub_13b2a90, sub_13bad80, sub_680c80, sub_680d80, sub_680e00, sub_680f00, sub_680ff0
   ref: RandRange
   ref: BlendRate
   ref: CameraPosWeight
   ref: MaxInterval
   ref: MinInterval
*/
void CameraPosWeight(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7670ULL || rel >= 0x13b7960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7960 size=16 callers=0 calls=0
*/
void sub_13b7960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7960ULL || rel >= 0x13b7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7970 size=16 callers=0 calls=0
*/
void sub_13b7970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7970ULL || rel >= 0x13b7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7980 size=16 callers=0 calls=0
*/
void sub_13b7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7980ULL || rel >= 0x13b7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7990 size=224 callers=0 calls=4
   calls: sub_13a8200, sub_66c4e0, sub_680c80, sub_680d80
   ref: CS_EvCameraShakeEndAll
   ref: HandShakeEndFrame
*/
void CS_EvCameraShakeEndAll(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7990ULL || rel >= 0x13b7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7a70 size=16 callers=0 calls=0
*/
void sub_13b7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7a70ULL || rel >= 0x13b7a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7a80 size=16 callers=0 calls=0
*/
void sub_13b7a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7a80ULL || rel >= 0x13b7a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7a90 size=16 callers=0 calls=0
*/
void sub_13b7a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7a90ULL || rel >= 0x13b7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7aa0 size=160 callers=0 calls=3
   calls: sub_13bb120, sub_680c80, sub_680d80
*/
void sub_13b7aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7aa0ULL || rel >= 0x13b7b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7b40 size=16 callers=0 calls=0
*/
void sub_13b7b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7b40ULL || rel >= 0x13b7b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7b50 size=16 callers=0 calls=0
*/
void sub_13b7b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7b50ULL || rel >= 0x13b7b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7b60 size=16 callers=0 calls=0
*/
void sub_13b7b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7b60ULL || rel >= 0x13b7b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7b70 size=160 callers=0 calls=3
   calls: sub_13bb120, sub_680c80, sub_680d80
*/
void sub_13b7b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7b70ULL || rel >= 0x13b7c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7c10 size=16 callers=0 calls=0
*/
void sub_13b7c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7c10ULL || rel >= 0x13b7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7c20 size=16 callers=0 calls=0
*/
void sub_13b7c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7c20ULL || rel >= 0x13b7c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7c30 size=16 callers=0 calls=0
*/
void sub_13b7c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7c30ULL || rel >= 0x13b7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b7c40 size=1040 callers=0 calls=9
   calls: sub_13a8100, sub_13a81b0, sub_13b2a90, sub_13bb9c0, sub_680c80, sub_680d80, sub_680e00, sub_680f00, sub_680ff0
   ref: OffsetRoll
   ref: OffsetCameraPos
   ref: PresetName
   ref: OffsetFov
   ref: OffsetLookAt
*/
void OffsetCameraPos(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b7c40ULL || rel >= 0x13b8050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8050 size=16 callers=0 calls=0
*/
void sub_13b8050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8050ULL || rel >= 0x13b8060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8060 size=16 callers=0 calls=0
*/
void sub_13b8060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8060ULL || rel >= 0x13b8070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8070 size=16 callers=0 calls=0
*/
void sub_13b8070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8070ULL || rel >= 0x13b8080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8080 size=1184 callers=0 calls=9
   calls: sub_13a8100, sub_13a81b0, sub_13b2a90, sub_13bb410, sub_680c80, sub_680d80, sub_680e00, sub_680f00, sub_680ff0
   ref: OffsetRoll
   ref: ChrId2
   ref: OffsetCameraPos
   ref: ChrId1
   ref: PresetName
   ref: OffsetFov
   ref: OffsetLookAt
*/
void OffsetCameraPos_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8080ULL || rel >= 0x13b8520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8520 size=16 callers=0 calls=0
*/
void sub_13b8520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8520ULL || rel >= 0x13b8530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8530 size=16 callers=0 calls=0
*/
void sub_13b8530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8530ULL || rel >= 0x13b8540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8540 size=16 callers=0 calls=0
*/
void sub_13b8540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8540ULL || rel >= 0x13b8550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8550 size=272 callers=0 calls=3
   calls: sub_66c4e0, sub_680c80, sub_680e00
   ref: FocusDistance
   ref: FNumber
*/
void FocusDistance(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8550ULL || rel >= 0x13b8660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8660 size=16 callers=0 calls=0
*/
void sub_13b8660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8660ULL || rel >= 0x13b8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8670 size=16 callers=0 calls=0
*/
void sub_13b8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8670ULL || rel >= 0x13b8680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8680 size=16 callers=0 calls=0
*/
void sub_13b8680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8680ULL || rel >= 0x13b8690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8690 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_PfxDofInit
*/
void CS_PfxDofInit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8690ULL || rel >= 0x13b8710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8710 size=16 callers=0 calls=0
*/
void sub_13b8710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8710ULL || rel >= 0x13b8720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8720 size=16 callers=0 calls=0
*/
void sub_13b8720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8720ULL || rel >= 0x13b8730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8730 size=16 callers=0 calls=0
*/
void sub_13b8730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8730ULL || rel >= 0x13b8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8740 size=624 callers=0 calls=7
   calls: sub_13a8200, sub_66c4e0, sub_66c570, sub_680c80, sub_680d80, sub_680e00, sub_680f00
   ref: FocusDistance
   ref: CS_PfxDofStart
   ref: FNumber
*/
void CS_PfxDofStart(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8740ULL || rel >= 0x13b89b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b89b0 size=16 callers=0 calls=0
*/
void sub_13b89b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b89b0ULL || rel >= 0x13b89c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b89c0 size=16 callers=0 calls=0
*/
void sub_13b89c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b89c0ULL || rel >= 0x13b89d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b89d0 size=16 callers=0 calls=0
*/
void sub_13b89d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b89d0ULL || rel >= 0x13b89e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b89e0 size=544 callers=0 calls=6
   calls: sub_66c4e0, sub_66c570, sub_680c80, sub_680d80, sub_680e00, sub_680f00
   ref: FocusDistance
   ref: FNumber
*/
void FocusDistance_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b89e0ULL || rel >= 0x13b8c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8c00 size=16 callers=0 calls=0
*/
void sub_13b8c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8c00ULL || rel >= 0x13b8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8c10 size=16 callers=0 calls=0
*/
void sub_13b8c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8c10ULL || rel >= 0x13b8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8c20 size=16 callers=0 calls=0
*/
void sub_13b8c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8c20ULL || rel >= 0x13b8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8c30 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_PfxDofEnd
*/
void CS_PfxDofEnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8c30ULL || rel >= 0x13b8cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8cb0 size=16 callers=0 calls=0
*/
void sub_13b8cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8cb0ULL || rel >= 0x13b8cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8cc0 size=16 callers=0 calls=0
*/
void sub_13b8cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8cc0ULL || rel >= 0x13b8cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8cd0 size=16 callers=0 calls=0
*/
void sub_13b8cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8cd0ULL || rel >= 0x13b8ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8ce0 size=112 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_PfxDofEndInstance
*/
void CS_PfxDofEndInstance(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8ce0ULL || rel >= 0x13b8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8d50 size=16 callers=0 calls=0
*/
void sub_13b8d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8d50ULL || rel >= 0x13b8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8d60 size=16 callers=0 calls=0
*/
void sub_13b8d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8d60ULL || rel >= 0x13b8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8d70 size=16 callers=0 calls=0
*/
void sub_13b8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8d70ULL || rel >= 0x13b8d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8d80 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_PfxDofWait
*/
void CS_PfxDofWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8d80ULL || rel >= 0x13b8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8e00 size=16 callers=0 calls=0
*/
void sub_13b8e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8e00ULL || rel >= 0x13b8e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8e10 size=16 callers=0 calls=0
*/
void sub_13b8e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8e10ULL || rel >= 0x13b8e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8e20 size=16 callers=0 calls=0
*/
void sub_13b8e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8e20ULL || rel >= 0x13b8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b8e30 size=736 callers=0 calls=7
   calls: sub_13a8200, sub_66c4e0, sub_66c570, sub_680c80, sub_680d80, sub_680e00, sub_680f00
   ref: Offset
   ref: FocusDistance
   ref: CS_PfxDofCharaStart
   ref: FNumber
*/
void CS_PfxDofCharaStart(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b8e30ULL || rel >= 0x13b9110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b9110 size=16 callers=0 calls=0
*/
void sub_13b9110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9110ULL || rel >= 0x13b9120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b9120 size=16 callers=0 calls=0
*/
void sub_13b9120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9120ULL || rel >= 0x13b9130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b9130 size=16 callers=0 calls=0
*/
void sub_13b9130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9130ULL || rel >= 0x13b9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b9140 size=128 callers=0 calls=0
*/
void sub_13b9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9140ULL || rel >= 0x13b91c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b91c0 size=16 callers=1 calls=0
*/
void sub_13b91c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b91c0ULL || rel >= 0x13b91d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b91d0 size=48 callers=0 calls=1
   calls: sub_cab130
*/
void sub_13b91d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b91d0ULL || rel >= 0x13b9200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b9200 size=64 callers=1 calls=1
   calls: sub_cabb80
*/
void sub_13b9200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9200ULL || rel >= 0x13b9240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b9240 size=32 callers=0 calls=0
*/
void sub_13b9240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9240ULL || rel >= 0x13b9260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b9260 size=48 callers=0 calls=1
   calls: sub_cac490
*/
void sub_13b9260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9260ULL || rel >= 0x13b9290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b9290 size=432 callers=1 calls=3
   calls: sub_ca90d0, sub_cab130, sub_caba10
*/
void sub_13b9290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9290ULL || rel >= 0x13b9440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b9440 size=304 callers=2 calls=3
   calls: sub_ca90d0, sub_cab130, sub_caba10
*/
void sub_13b9440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9440ULL || rel >= 0x13b9570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b9570 size=336 callers=1 calls=3
   calls: sub_ca90d0, sub_cab130, sub_caba10
*/
void sub_13b9570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9570ULL || rel >= 0x13b96c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b96c0 size=320 callers=1 calls=4
   calls: sub_ca90d0, sub_cab130, sub_caba10, sub_d1fe70
*/
void sub_13b96c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b96c0ULL || rel >= 0x13b9800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b9800 size=720 callers=1 calls=4
   calls: sub_972c70, sub_ca90d0, sub_cab130, sub_caba10
*/
void sub_13b9800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9800ULL || rel >= 0x13b9ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b9ad0 size=704 callers=1 calls=5
   calls: sub_972c70, sub_ca90d0, sub_cab130, sub_caba10, sub_d1fe70
*/
void sub_13b9ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9ad0ULL || rel >= 0x13b9d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b9d90 size=336 callers=1 calls=4
   calls: sub_ca90d0, sub_cab130, sub_caba10, sub_d1fe70
*/
void sub_13b9d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9d90ULL || rel >= 0x13b9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013b9ee0 size=304 callers=1 calls=4
   calls: sub_ca90d0, sub_cab130, sub_caba10, sub_d1fe70
*/
void sub_13b9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13b9ee0ULL || rel >= 0x13ba010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ba010 size=400 callers=1 calls=4
   calls: sub_ca90d0, sub_cab130, sub_caba10, sub_d1fe70
*/
void sub_13ba010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ba010ULL || rel >= 0x13ba1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ba1a0 size=352 callers=1 calls=4
   calls: sub_ca90d0, sub_cab130, sub_caba10, sub_d1fe70
*/
void sub_13ba1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ba1a0ULL || rel >= 0x13ba300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ba300 size=64 callers=0 calls=1
   calls: sub_ca90d0
*/
void sub_13ba300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ba300ULL || rel >= 0x13ba340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ba340 size=64 callers=0 calls=1
   calls: sub_ca90d0
*/
void sub_13ba340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ba340ULL || rel >= 0x13ba380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ba380 size=64 callers=0 calls=1
   calls: sub_ca90d0
*/
void sub_13ba380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ba380ULL || rel >= 0x13ba3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ba3c0 size=64 callers=0 calls=1
   calls: sub_ca90d0
*/
void sub_13ba3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ba3c0ULL || rel >= 0x13ba400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ba400 size=64 callers=0 calls=1
   calls: sub_ca90d0
*/
void sub_13ba400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ba400ULL || rel >= 0x13ba440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ba440 size=64 callers=0 calls=1
   calls: sub_ca90d0
*/
void sub_13ba440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ba440ULL || rel >= 0x13ba480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ba480 size=1088 callers=0 calls=5
   calls: sub_969d40, sub_cab130, sub_d0e670, sub_d0e7b0, sub_d0ea10
*/
void sub_13ba480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ba480ULL || rel >= 0x13ba8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ba8c0 size=384 callers=1 calls=2
   calls: sub_969d40, sub_d0e750
*/
void sub_13ba8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ba8c0ULL || rel >= 0x13baa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013baa40 size=448 callers=1 calls=2
   calls: sub_969d40, sub_d0e770
*/
void sub_13baa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13baa40ULL || rel >= 0x13bac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bac00 size=384 callers=0 calls=1
   calls: sub_969d40
*/
void sub_13bac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bac00ULL || rel >= 0x13bad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bad80 size=528 callers=1 calls=2
   calls: sub_969d40, sub_d0e7b0
*/
void sub_13bad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bad80ULL || rel >= 0x13baf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013baf90 size=400 callers=0 calls=2
   calls: sub_969d40, sub_d0ea10
*/
void sub_13baf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13baf90ULL || rel >= 0x13bb120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bb120 size=400 callers=2 calls=2
   calls: sub_969d40, sub_d0e090
*/
void sub_13bb120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bb120ULL || rel >= 0x13bb2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bb2b0 size=352 callers=0 calls=3
   calls: sub_13b1210, sub_13d3830, sub_5cfaf0
*/
void sub_13bb2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bb2b0ULL || rel >= 0x13bb410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bb410 size=1456 callers=1 calls=9
   calls: sub_13b1210, sub_13c9d90, sub_13d3960, sub_5cfaf0, sub_972c70, sub_ca90d0, sub_cab130, sub_caba10, sub_d1fe70
*/
void sub_13bb410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bb410ULL || rel >= 0x13bb9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bb9c0 size=1328 callers=1 calls=8
   calls: sub_13b1210, sub_13d3960, sub_5cfaf0, sub_ca90d0, sub_cab130, sub_caba10, sub_d1fe70, sub_d20070
*/
void sub_13bb9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bb9c0ULL || rel >= 0x13bbef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bbef0 size=208 callers=0 calls=0
*/
void sub_13bbef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bbef0ULL || rel >= 0x13bbfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bbfc0 size=64 callers=0 calls=1
   calls: sub_ca92b0
*/
void sub_13bbfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bbfc0ULL || rel >= 0x13bc000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bc000 size=48 callers=0 calls=1
   calls: sub_caa7a0
*/
void sub_13bc000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bc000ULL || rel >= 0x13bc030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bc030 size=304 callers=0 calls=2
   calls: sub_969be0, sub_ed32d0
*/
void sub_13bc030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bc030ULL || rel >= 0x13bc160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bc160 size=176 callers=0 calls=3
   calls: sub_969be0, sub_ed3290, sub_ed32d0
*/
void sub_13bc160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bc160ULL || rel >= 0x13bc210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bc210 size=112 callers=0 calls=1
   calls: sub_969be0
*/
void sub_13bc210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bc210ULL || rel >= 0x13bc280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bc280 size=672 callers=0 calls=4
   calls: sub_969be0, sub_969d40, sub_ca8e20, sub_ed32d0
*/
void sub_13bc280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bc280ULL || rel >= 0x13bc520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bc520 size=432 callers=0 calls=2
   calls: sub_969be0, sub_ed32d0
*/
void sub_13bc520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bc520ULL || rel >= 0x13bc6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bc6d0 size=192 callers=0 calls=3
   calls: sub_969be0, sub_ed3290, sub_ed32d0
*/
void sub_13bc6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bc6d0ULL || rel >= 0x13bc790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bc790 size=112 callers=0 calls=1
   calls: sub_969be0
*/
void sub_13bc790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bc790ULL || rel >= 0x13bc800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bc800 size=240 callers=0 calls=2
   calls: sub_13bcfd0, sub_969be0
*/
void sub_13bc800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bc800ULL || rel >= 0x13bc8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bc8f0 size=208 callers=0 calls=3
   calls: sub_969be0, sub_ed3290, sub_ed32d0
*/
void sub_13bc8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bc8f0ULL || rel >= 0x13bc9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bc9c0 size=112 callers=0 calls=1
   calls: sub_969be0
*/
void sub_13bc9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bc9c0ULL || rel >= 0x13bca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bca30 size=496 callers=0 calls=3
   calls: sub_969d40, sub_ca8570, sub_d36930
*/
void sub_13bca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bca30ULL || rel >= 0x13bcc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bcc20 size=448 callers=0 calls=1
   calls: sub_969d40
*/
void sub_13bcc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bcc20ULL || rel >= 0x13bcde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bcde0 size=448 callers=0 calls=1
   calls: sub_969d40
*/
void sub_13bcde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bcde0ULL || rel >= 0x13bcfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bcfa0 size=48 callers=1 calls=0
*/
void sub_13bcfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bcfa0ULL || rel >= 0x13bcfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bcfd0 size=352 callers=1 calls=1
   calls: sub_ed32d0
*/
void sub_13bcfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bcfd0ULL || rel >= 0x13bd130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bd130 size=128 callers=0 calls=0
*/
void sub_13bd130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bd130ULL || rel >= 0x13bd1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bd1b0 size=368 callers=0 calls=0
*/
void sub_13bd1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bd1b0ULL || rel >= 0x13bd320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bd320 size=736 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_41(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bd320ULL || rel >= 0x13bd600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bd600 size=16 callers=1 calls=0
*/
void sub_13bd600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bd600ULL || rel >= 0x13bd610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bd610 size=48 callers=0 calls=1
   calls: sub_d1ee90
*/
void sub_13bd610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bd610ULL || rel >= 0x13bd640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bd640 size=32 callers=0 calls=1
   calls: sub_d1f140
*/
void sub_13bd640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bd640ULL || rel >= 0x13bd660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bd660 size=48 callers=0 calls=1
   calls: sub_d1ef70
*/
void sub_13bd660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bd660ULL || rel >= 0x13bd690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bd690 size=192 callers=0 calls=0
*/
void sub_13bd690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bd690ULL || rel >= 0x13bd750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bd750 size=48 callers=0 calls=1
   calls: sub_d1f1b0
*/
void sub_13bd750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bd750ULL || rel >= 0x13bd780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bd780 size=48 callers=0 calls=0
*/
void sub_13bd780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bd780ULL || rel >= 0x13bd7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bd7b0 size=1024 callers=0 calls=7
   calls: sub_13b1210, sub_13b12d0, sub_1406b40, sub_5cfaf0, sub_66efd0, sub_b334c0, sub_b4c060
*/
void sub_13bd7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bd7b0ULL || rel >= 0x13bdbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bdbb0 size=64 callers=0 calls=2
   calls: sub_13b12d0, sub_13fa3c0
*/
void sub_13bdbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bdbb0ULL || rel >= 0x13bdbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bdbf0 size=48 callers=0 calls=0
*/
void sub_13bdbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bdbf0ULL || rel >= 0x13bdc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bdc20 size=128 callers=0 calls=2
   calls: sub_13b12d0, sub_d2aa70
*/
void sub_13bdc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bdc20ULL || rel >= 0x13bdca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bdca0 size=544 callers=0 calls=4
   calls: sub_13a6920, sub_13ca860, sub_d17bc0, sub_d4fbc0
*/
void sub_13bdca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bdca0ULL || rel >= 0x13bdec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bdec0 size=48 callers=0 calls=0
*/
void sub_13bdec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bdec0ULL || rel >= 0x13bdef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bdef0 size=144 callers=0 calls=2
   calls: sub_d1f280, sub_d1fe70
*/
void sub_13bdef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bdef0ULL || rel >= 0x13bdf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013bdf80 size=208 callers=0 calls=3
   calls: sub_d1f280, sub_d1f640, sub_d1fe70
*/
void sub_13bdf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13bdf80ULL || rel >= 0x13be050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be050 size=112 callers=0 calls=1
   calls: sub_d1f280
*/
void sub_13be050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be050ULL || rel >= 0x13be0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be0c0 size=96 callers=0 calls=1
   calls: sub_d1f640
*/
void sub_13be0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be0c0ULL || rel >= 0x13be120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be120 size=80 callers=0 calls=1
   calls: sub_d1f910
*/
void sub_13be120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be120ULL || rel >= 0x13be170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be170 size=80 callers=0 calls=1
   calls: sub_d1fb70
*/
void sub_13be170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be170ULL || rel >= 0x13be1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be1c0 size=144 callers=0 calls=2
   calls: sub_972c70, sub_d1fd00
*/
void sub_13be1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be1c0ULL || rel >= 0x13be250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be250 size=64 callers=0 calls=1
   calls: sub_d1fe70
*/
void sub_13be250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be250ULL || rel >= 0x13be290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be290 size=64 callers=0 calls=1
   calls: sub_d1fe70
*/
void sub_13be290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be290ULL || rel >= 0x13be2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be2d0 size=64 callers=0 calls=1
   calls: sub_d1fe70
*/
void sub_13be2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be2d0ULL || rel >= 0x13be310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be310 size=160 callers=0 calls=2
   calls: sub_9733f0, sub_d20070
*/
void sub_13be310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be310ULL || rel >= 0x13be3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be3b0 size=96 callers=0 calls=1
   calls: sub_d28e50
*/
void sub_13be3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be3b0ULL || rel >= 0x13be410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be410 size=128 callers=0 calls=2
   calls: sub_d1fb50, sub_d1fe70
*/
void sub_13be410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be410ULL || rel >= 0x13be490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be490 size=96 callers=0 calls=2
   calls: sub_962230, sub_d1fe70
*/
void sub_13be490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be490ULL || rel >= 0x13be4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be4f0 size=496 callers=0 calls=5
   calls: sub_13b12d0, sub_13fa4d0, sub_65cd70, sub_65cd90, sub_97e1a0
*/
void sub_13be4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be4f0ULL || rel >= 0x13be6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be6e0 size=336 callers=0 calls=4
   calls: sub_13b12d0, sub_13fa4d0, sub_65cd90, sub_97e1a0
*/
void sub_13be6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be6e0ULL || rel >= 0x13be830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be830 size=64 callers=0 calls=1
   calls: sub_d20270
*/
void sub_13be830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be830ULL || rel >= 0x13be870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013be870 size=48 callers=0 calls=1
   calls: sub_d20350
*/
void sub_13be870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13be870ULL || rel >= 0x13be8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

