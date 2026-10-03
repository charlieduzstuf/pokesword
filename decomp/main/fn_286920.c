/* main functions 00286920..002a9e60 (14 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00286920 size=288 callers=2 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxRigidActor
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h
   ref: bad__repx__name
   ref: PxSerialization::serializeCollectionToXml: Reference "%s" could not be resolved.
*/
void bad__repx__name_386(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x286920ULL || rel >= 0x286a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00286a40 size=672 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_387
*/
void sub_286a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x286a40ULL || rel >= 0x286ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00286ce0 size=272 callers=1 calls=2
   calls: sub_21b300, sub_22c710
   ref: bad__repx__name
*/
void bad__repx__name_387(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x286ce0ULL || rel >= 0x286df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00286df0 size=896 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_388
*/
void sub_286df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x286df0ULL || rel >= 0x287170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00287170 size=288 callers=2 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_388(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x287170ULL || rel >= 0x287290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00287290 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_389(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x287290ULL || rel >= 0x287390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00287390 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x287390ULL || rel >= 0x287490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00287490 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_391(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x287490ULL || rel >= 0x287590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00287590 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_392(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x287590ULL || rel >= 0x287690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00287690 size=272 callers=1 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_393(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x287690ULL || rel >= 0x2877a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002877a0 size=560 callers=1 calls=9
   calls: ContactDistance_2, PsArray_174, sub_287f60, sub_2880e0, sub_288270, sub_288400, sub_288590, sub_288c20, sub_288db0
*/
void sub_2877a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2877a0ULL || rel >= 0x2879d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002879d0 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_394(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2879d0ULL || rel >= 0x287c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00287c40 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_402
*/
void sub_287c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x287c40ULL || rel >= 0x287dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00287dd0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_403
*/
void sub_287dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x287dd0ULL || rel >= 0x287f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00287f60 size=384 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_395
*/
void sub_287f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x287f60ULL || rel >= 0x2880e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002880e0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_396
*/
void sub_2880e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2880e0ULL || rel >= 0x288270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00288270 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_397
*/
void sub_288270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x288270ULL || rel >= 0x288400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00288400 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_398
*/
void sub_288400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x288400ULL || rel >= 0x288590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00288590 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_399
*/
void sub_288590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x288590ULL || rel >= 0x288720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00288720 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_395(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x288720ULL || rel >= 0x288820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00288820 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_396(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x288820ULL || rel >= 0x288920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00288920 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_397(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x288920ULL || rel >= 0x288a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00288a20 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_398(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x288a20ULL || rel >= 0x288b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00288b20 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_399(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x288b20ULL || rel >= 0x288c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00288c20 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_400
*/
void sub_288c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x288c20ULL || rel >= 0x288db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00288db0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_401
*/
void sub_288db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x288db0ULL || rel >= 0x288f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00288f40 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x288f40ULL || rel >= 0x289040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00289040 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_401(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x289040ULL || rel >= 0x289140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00289140 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_402(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x289140ULL || rel >= 0x289240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00289240 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_403(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x289240ULL || rel >= 0x289340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00289340 size=688 callers=1 calls=9
   calls: RelativeLinearVelocity_5, sub_2895f0, sub_28b2b0, sub_28b4c0, sub_28b670, sub_28b820, sub_28b9d0, sub_28bb90, sub_28bd40
*/
void sub_289340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x289340ULL || rel >= 0x2895f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002895f0 size=208 callers=1 calls=9
   calls: bad__repx__name_404, sub_2896c0, sub_289880, sub_289a30, sub_289be0, sub_289d90, sub_28a170, sub_28a740, sub_28ab90
*/
void sub_2895f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2895f0ULL || rel >= 0x2896c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002896c0 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_408
*/
void sub_2896c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2896c0ULL || rel >= 0x289880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00289880 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_407
*/
void sub_289880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x289880ULL || rel >= 0x289a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00289a30 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_407
*/
void sub_289a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x289a30ULL || rel >= 0x289be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00289be0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_407
*/
void sub_289be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x289be0ULL || rel >= 0x289d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00289d90 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_407
*/
void sub_289d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x289d90ULL || rel >= 0x289f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00289f40 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_404(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x289f40ULL || rel >= 0x28a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028a170 size=1168 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_405
*/
void sub_28a170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28a170ULL || rel >= 0x28a600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028a600 size=320 callers=2 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: bad__repx__name
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void bad__repx__name_405(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28a600ULL || rel >= 0x28a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028a740 size=848 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_406
*/
void sub_28a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28a740ULL || rel >= 0x28aa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028aa90 size=256 callers=1 calls=1
   calls: sub_225e30
   ref: bad__repx__name
*/
void bad__repx__name_406(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28aa90ULL || rel >= 0x28ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ab90 size=1264 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_407
*/
void sub_28ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ab90ULL || rel >= 0x28b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028b080 size=288 callers=13 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_407(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28b080ULL || rel >= 0x28b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028b1a0 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_408(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28b1a0ULL || rel >= 0x28b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028b2b0 size=528 callers=1 calls=3
   calls: ContactDistance_3, PsArray_172, sub_28bef0
*/
void sub_28b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28b2b0ULL || rel >= 0x28b4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028b4c0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_407
*/
void sub_28b4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28b4c0ULL || rel >= 0x28b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028b670 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_407
*/
void sub_28b670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28b670ULL || rel >= 0x28b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028b820 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_407
*/
void sub_28b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28b820ULL || rel >= 0x28b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028b9d0 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_409
*/
void sub_28b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28b9d0ULL || rel >= 0x28bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028bb90 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_407
*/
void sub_28bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28bb90ULL || rel >= 0x28bd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028bd40 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_407
*/
void sub_28bd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28bd40ULL || rel >= 0x28bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028bef0 size=624 callers=1 calls=7
   calls: sub_277f10, sub_2780c0, sub_278270, sub_278420, sub_2785d0, sub_2788a0, sub_278a50
*/
void sub_28bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28bef0ULL || rel >= 0x28c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028c160 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_409(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28c160ULL || rel >= 0x28c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028c270 size=496 callers=1 calls=10
   calls: PsArray_174, bad__repx__name_410, bad__repx__name_418, sub_28c6d0, sub_28c860, sub_28c9f0, sub_28cb80, sub_28cd10, sub_28d1a0, sub_28d550
*/
void sub_28c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28c270ULL || rel >= 0x28c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028c460 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28c460ULL || rel >= 0x28c6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028c6d0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_414
*/
void sub_28c6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28c6d0ULL || rel >= 0x28c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028c860 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_415
*/
void sub_28c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28c860ULL || rel >= 0x28c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028c9f0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_416
*/
void sub_28c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28c9f0ULL || rel >= 0x28cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028cb80 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_417
*/
void sub_28cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28cb80ULL || rel >= 0x28cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028cd10 size=880 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_411
*/
void sub_28cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28cd10ULL || rel >= 0x28d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d080 size=288 callers=2 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxRigidActor
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h
   ref: bad__repx__name
   ref: PxSerialization::serializeCollectionToXml: Reference "%s" could not be resolved.
*/
void bad__repx__name_411(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d080ULL || rel >= 0x28d1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d1a0 size=672 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_412
*/
void sub_28d1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d1a0ULL || rel >= 0x28d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d440 size=272 callers=1 calls=2
   calls: sub_21b300, sub_22c710
   ref: bad__repx__name
*/
void bad__repx__name_412(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d440ULL || rel >= 0x28d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d550 size=896 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_413
*/
void sub_28d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d550ULL || rel >= 0x28d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d8d0 size=288 callers=2 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_413(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d8d0ULL || rel >= 0x28d9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028d9f0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_414(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28d9f0ULL || rel >= 0x28daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028daf0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_415(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28daf0ULL || rel >= 0x28dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028dbf0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_416(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28dbf0ULL || rel >= 0x28dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028dcf0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_417(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28dcf0ULL || rel >= 0x28ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ddf0 size=272 callers=1 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_418(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ddf0ULL || rel >= 0x28df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028df00 size=560 callers=1 calls=9
   calls: ContactDistance_3, PsArray_174, sub_27ec30, sub_27edb0, sub_27ef40, sub_27f0d0, sub_27f260, sub_27f8f0, sub_27fa80
*/
void sub_28df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28df00ULL || rel >= 0x28e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e130 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_420
*/
void sub_28e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e130ULL || rel >= 0x28e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e2c0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_421
*/
void sub_28e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e2c0ULL || rel >= 0x28e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e450 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_422
*/
void sub_28e450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e450ULL || rel >= 0x28e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e5e0 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_419(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e5e0ULL || rel >= 0x28e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e850 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_423
*/
void sub_28e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e850ULL || rel >= 0x28e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028e9e0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_424
*/
void sub_28e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28e9e0ULL || rel >= 0x28eb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028eb70 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28eb70ULL || rel >= 0x28ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ec70 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_421(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ec70ULL || rel >= 0x28ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ed70 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_422(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ed70ULL || rel >= 0x28ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ee70 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_423(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ee70ULL || rel >= 0x28ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028ef70 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_424(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28ef70ULL || rel >= 0x28f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f070 size=624 callers=1 calls=5
   calls: RelativeLinearVelocity_6, sub_28f2e0, sub_290fa0, sub_2911b0, sub_291370
*/
void sub_28f070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f070ULL || rel >= 0x28f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f2e0 size=208 callers=1 calls=9
   calls: bad__repx__name_425, sub_28f3b0, sub_28f570, sub_28f720, sub_28f8d0, sub_28fa80, sub_28fe60, sub_290430, sub_290880
*/
void sub_28f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f2e0ULL || rel >= 0x28f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f3b0 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_429
*/
void sub_28f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f3b0ULL || rel >= 0x28f570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f570 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_428
*/
void sub_28f570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f570ULL || rel >= 0x28f720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f720 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_428
*/
void sub_28f720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f720ULL || rel >= 0x28f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028f8d0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_428
*/
void sub_28f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28f8d0ULL || rel >= 0x28fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028fa80 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_428
*/
void sub_28fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28fa80ULL || rel >= 0x28fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028fc30 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_425(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28fc30ULL || rel >= 0x28fe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0028fe60 size=1168 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_426
*/
void sub_28fe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x28fe60ULL || rel >= 0x2902f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002902f0 size=320 callers=2 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: bad__repx__name
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void bad__repx__name_426(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2902f0ULL || rel >= 0x290430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290430 size=848 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_427
*/
void sub_290430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290430ULL || rel >= 0x290780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290780 size=256 callers=1 calls=1
   calls: sub_225e30
   ref: bad__repx__name
*/
void bad__repx__name_427(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290780ULL || rel >= 0x290880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290880 size=1264 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_428
*/
void sub_290880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290880ULL || rel >= 0x290d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290d70 size=288 callers=9 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_428(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290d70ULL || rel >= 0x290e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290e90 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_429(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290e90ULL || rel >= 0x290fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00290fa0 size=528 callers=1 calls=3
   calls: ContactDistance_4, PsArray_172, sub_291520
*/
void sub_290fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x290fa0ULL || rel >= 0x2911b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002911b0 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_430
*/
void sub_2911b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2911b0ULL || rel >= 0x291370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00291370 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_428
*/
void sub_291370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x291370ULL || rel >= 0x291520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00291520 size=624 callers=1 calls=7
   calls: sub_278e70, sub_279020, sub_2791d0, sub_279380, sub_279530, sub_279800, sub_2799b0
*/
void sub_291520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x291520ULL || rel >= 0x291790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00291790 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x291790ULL || rel >= 0x2918a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002918a0 size=496 callers=1 calls=10
   calls: PsArray_174, bad__repx__name_431, bad__repx__name_439, sub_291d00, sub_291e90, sub_292020, sub_2921b0, sub_292340, sub_2927d0, sub_292b80
*/
void sub_2918a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2918a0ULL || rel >= 0x291a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00291a90 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_431(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x291a90ULL || rel >= 0x291d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00291d00 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_435
*/
void sub_291d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x291d00ULL || rel >= 0x291e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00291e90 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_436
*/
void sub_291e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x291e90ULL || rel >= 0x292020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292020 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_437
*/
void sub_292020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292020ULL || rel >= 0x2921b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002921b0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_438
*/
void sub_2921b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2921b0ULL || rel >= 0x292340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292340 size=880 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_432
*/
void sub_292340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292340ULL || rel >= 0x2926b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002926b0 size=288 callers=2 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxRigidActor
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h
   ref: bad__repx__name
   ref: PxSerialization::serializeCollectionToXml: Reference "%s" could not be resolved.
*/
void bad__repx__name_432(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2926b0ULL || rel >= 0x2927d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002927d0 size=672 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_433
*/
void sub_2927d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2927d0ULL || rel >= 0x292a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292a70 size=272 callers=1 calls=2
   calls: sub_21b300, sub_22c710
   ref: bad__repx__name
*/
void bad__repx__name_433(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292a70ULL || rel >= 0x292b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292b80 size=896 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_434
*/
void sub_292b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292b80ULL || rel >= 0x292f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00292f00 size=288 callers=2 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_434(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x292f00ULL || rel >= 0x293020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293020 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_435(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293020ULL || rel >= 0x293120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293120 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_436(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293120ULL || rel >= 0x293220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293220 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_437(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293220ULL || rel >= 0x293320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293320 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_438(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293320ULL || rel >= 0x293420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293420 size=272 callers=1 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_439(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293420ULL || rel >= 0x293530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293530 size=560 callers=1 calls=9
   calls: ContactDistance_4, PsArray_174, sub_27fe10, sub_27ff90, sub_280120, sub_2802b0, sub_280440, sub_280ad0, sub_280c60
*/
void sub_293530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293530ULL || rel >= 0x293760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293760 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293760ULL || rel >= 0x2939d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002939d0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_441
*/
void sub_2939d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2939d0ULL || rel >= 0x293b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293b60 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_441(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293b60ULL || rel >= 0x293c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293c60 size=16 callers=0 calls=0
*/
void sub_293c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293c60ULL || rel >= 0x293c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293c70 size=16 callers=0 calls=0
*/
void sub_293c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293c70ULL || rel >= 0x293c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293c80 size=16 callers=0 calls=0
*/
void sub_293c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293c80ULL || rel >= 0x293c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293c90 size=16 callers=0 calls=0
*/
void sub_293c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293c90ULL || rel >= 0x293ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293ca0 size=16 callers=0 calls=0
*/
void sub_293ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293ca0ULL || rel >= 0x293cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293cb0 size=16 callers=0 calls=0
*/
void sub_293cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293cb0ULL || rel >= 0x293cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293cc0 size=16 callers=0 calls=0
*/
void sub_293cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293cc0ULL || rel >= 0x293cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293cd0 size=16 callers=0 calls=0
*/
void sub_293cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293cd0ULL || rel >= 0x293ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293ce0 size=16 callers=0 calls=0
*/
void sub_293ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293ce0ULL || rel >= 0x293cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293cf0 size=48 callers=0 calls=0
*/
void sub_293cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293cf0ULL || rel >= 0x293d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293d20 size=16 callers=0 calls=0
*/
void sub_293d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293d20ULL || rel >= 0x293d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293d30 size=16 callers=0 calls=0
*/
void sub_293d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293d30ULL || rel >= 0x293d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293d40 size=16 callers=0 calls=0
*/
void sub_293d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293d40ULL || rel >= 0x293d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293d50 size=16 callers=0 calls=0
*/
void sub_293d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293d50ULL || rel >= 0x293d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293d60 size=16 callers=0 calls=0
*/
void sub_293d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293d60ULL || rel >= 0x293d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293d70 size=16 callers=0 calls=0
*/
void sub_293d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293d70ULL || rel >= 0x293d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293d80 size=16 callers=0 calls=0
*/
void sub_293d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293d80ULL || rel >= 0x293d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293d90 size=16 callers=0 calls=0
*/
void sub_293d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293d90ULL || rel >= 0x293da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293da0 size=16 callers=0 calls=0
*/
void sub_293da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293da0ULL || rel >= 0x293db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293db0 size=16 callers=0 calls=0
*/
void sub_293db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293db0ULL || rel >= 0x293dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293dc0 size=16 callers=0 calls=0
*/
void sub_293dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293dc0ULL || rel >= 0x293dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293dd0 size=16 callers=0 calls=0
*/
void sub_293dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293dd0ULL || rel >= 0x293de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293de0 size=16 callers=0 calls=0
*/
void sub_293de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293de0ULL || rel >= 0x293df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293df0 size=16 callers=0 calls=0
*/
void sub_293df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293df0ULL || rel >= 0x293e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293e00 size=16 callers=0 calls=0
*/
void sub_293e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293e00ULL || rel >= 0x293e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293e10 size=16 callers=0 calls=0
*/
void sub_293e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293e10ULL || rel >= 0x293e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293e20 size=16 callers=0 calls=0
*/
void sub_293e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293e20ULL || rel >= 0x293e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293e30 size=16 callers=0 calls=0
*/
void sub_293e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293e30ULL || rel >= 0x293e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293e40 size=16 callers=0 calls=0
*/
void sub_293e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293e40ULL || rel >= 0x293e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293e50 size=16 callers=0 calls=0
*/
void sub_293e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293e50ULL || rel >= 0x293e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293e60 size=16 callers=0 calls=0
*/
void sub_293e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293e60ULL || rel >= 0x293e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293e70 size=16 callers=0 calls=0
*/
void sub_293e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293e70ULL || rel >= 0x293e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293e80 size=16 callers=0 calls=0
*/
void sub_293e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293e80ULL || rel >= 0x293e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293e90 size=16 callers=0 calls=0
*/
void sub_293e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293e90ULL || rel >= 0x293ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293ea0 size=16 callers=0 calls=0
*/
void sub_293ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293ea0ULL || rel >= 0x293eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293eb0 size=16 callers=0 calls=0
*/
void sub_293eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293eb0ULL || rel >= 0x293ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293ec0 size=16 callers=0 calls=0
*/
void sub_293ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293ec0ULL || rel >= 0x293ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293ed0 size=16 callers=0 calls=0
*/
void sub_293ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293ed0ULL || rel >= 0x293ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293ee0 size=16 callers=0 calls=0
*/
void sub_293ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293ee0ULL || rel >= 0x293ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293ef0 size=16 callers=0 calls=0
*/
void sub_293ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293ef0ULL || rel >= 0x293f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293f00 size=16 callers=0 calls=0
*/
void sub_293f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293f00ULL || rel >= 0x293f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293f10 size=16 callers=0 calls=0
*/
void sub_293f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293f10ULL || rel >= 0x293f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293f20 size=16 callers=0 calls=0
*/
void sub_293f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293f20ULL || rel >= 0x293f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293f30 size=16 callers=0 calls=0
*/
void sub_293f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293f30ULL || rel >= 0x293f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293f40 size=16 callers=0 calls=0
*/
void sub_293f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293f40ULL || rel >= 0x293f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00293f50 size=16 callers=0 calls=0
*/
void sub_293f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293f50ULL || rel >= 0x293f60ULL) break;
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

/* 00293f70 size=1136 callers=2 calls=0
   ref: InvInertiaScale1
   ref: DriveVelocity
   ref: ConstraintFlags
   ref: ProjectionLinearTolerance
   ref: torque
   ref: Motion
   ref: DrivePosition
   ref: angular
*/
void RelativeLinearVelocity(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x293f70ULL || rel >= 0x2943e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002943e0 size=16 callers=0 calls=0
*/
void sub_2943e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2943e0ULL || rel >= 0x2943f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002943f0 size=16 callers=0 calls=0
*/
void sub_2943f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2943f0ULL || rel >= 0x294400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294400 size=16 callers=0 calls=0
*/
void sub_294400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294400ULL || rel >= 0x294410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294410 size=16 callers=0 calls=0
*/
void sub_294410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294410ULL || rel >= 0x294420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294420 size=16 callers=0 calls=0
*/
void sub_294420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294420ULL || rel >= 0x294430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294430 size=16 callers=0 calls=0
*/
void sub_294430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294430ULL || rel >= 0x294440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294440 size=16 callers=0 calls=0
*/
void sub_294440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294440ULL || rel >= 0x294450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294450 size=16 callers=0 calls=0
*/
void sub_294450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294450ULL || rel >= 0x294460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294460 size=16 callers=0 calls=0
*/
void sub_294460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294460ULL || rel >= 0x294470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294470 size=16 callers=0 calls=0
*/
void sub_294470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294470ULL || rel >= 0x294480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294480 size=16 callers=0 calls=0
*/
void sub_294480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294480ULL || rel >= 0x294490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294490 size=48 callers=0 calls=0
*/
void sub_294490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294490ULL || rel >= 0x2944c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002944c0 size=16 callers=0 calls=0
*/
void sub_2944c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2944c0ULL || rel >= 0x2944d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002944d0 size=16 callers=0 calls=0
*/
void sub_2944d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2944d0ULL || rel >= 0x2944e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002944e0 size=912 callers=2 calls=0
   ref: InvInertiaScale1
   ref: ConstraintFlags
   ref: MaxDistance
   ref: torque
   ref: BreakForce
   ref: Tolerance
   ref: RelativeAngularVelocity
   ref: actor1
*/
void RelativeLinearVelocity_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2944e0ULL || rel >= 0x294870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294870 size=16 callers=0 calls=0
*/
void sub_294870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294870ULL || rel >= 0x294880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294880 size=16 callers=0 calls=0
*/
void sub_294880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294880ULL || rel >= 0x294890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294890 size=16 callers=0 calls=0
*/
void sub_294890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294890ULL || rel >= 0x2948a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002948a0 size=16 callers=0 calls=0
*/
void sub_2948a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2948a0ULL || rel >= 0x2948b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002948b0 size=16 callers=0 calls=0
*/
void sub_2948b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2948b0ULL || rel >= 0x2948c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002948c0 size=704 callers=2 calls=0
   ref: InvInertiaScale1
   ref: ConstraintFlags
   ref: ProjectionLinearTolerance
   ref: torque
   ref: BreakForce
   ref: RelativeAngularVelocity
   ref: actor1
   ref: ProjectionAngularTolerance
*/
void RelativeLinearVelocity_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2948c0ULL || rel >= 0x294b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294b80 size=16 callers=0 calls=0
*/
void sub_294b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294b80ULL || rel >= 0x294b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294b90 size=16 callers=0 calls=0
*/
void sub_294b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294b90ULL || rel >= 0x294ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294ba0 size=16 callers=0 calls=0
*/
void sub_294ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294ba0ULL || rel >= 0x294bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294bb0 size=16 callers=0 calls=0
*/
void sub_294bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294bb0ULL || rel >= 0x294bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294bc0 size=48 callers=0 calls=0
*/
void sub_294bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294bc0ULL || rel >= 0x294bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294bf0 size=16 callers=0 calls=0
*/
void sub_294bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294bf0ULL || rel >= 0x294c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294c00 size=16 callers=0 calls=0
*/
void sub_294c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294c00ULL || rel >= 0x294c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294c10 size=16 callers=0 calls=0
*/
void sub_294c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294c10ULL || rel >= 0x294c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294c20 size=16 callers=0 calls=0
*/
void sub_294c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294c20ULL || rel >= 0x294c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294c30 size=16 callers=0 calls=0
*/
void sub_294c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294c30ULL || rel >= 0x294c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294c40 size=16 callers=0 calls=0
*/
void sub_294c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294c40ULL || rel >= 0x294c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294c50 size=864 callers=2 calls=0
   ref: InvInertiaScale1
   ref: ConstraintFlags
   ref: ProjectionLinearTolerance
   ref: Velocity
   ref: torque
   ref: BreakForce
   ref: RelativeAngularVelocity
   ref: actor1
*/
void RelativeLinearVelocity_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294c50ULL || rel >= 0x294fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294fb0 size=16 callers=0 calls=0
*/
void sub_294fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294fb0ULL || rel >= 0x294fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294fc0 size=16 callers=0 calls=0
*/
void sub_294fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294fc0ULL || rel >= 0x294fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294fd0 size=16 callers=0 calls=0
*/
void sub_294fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294fd0ULL || rel >= 0x294fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294fe0 size=16 callers=0 calls=0
*/
void sub_294fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294fe0ULL || rel >= 0x294ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00294ff0 size=16 callers=0 calls=0
*/
void sub_294ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x294ff0ULL || rel >= 0x295000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295000 size=16 callers=0 calls=0
*/
void sub_295000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295000ULL || rel >= 0x295010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295010 size=16 callers=0 calls=0
*/
void sub_295010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295010ULL || rel >= 0x295020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295020 size=16 callers=0 calls=0
*/
void sub_295020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295020ULL || rel >= 0x295030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295030 size=16 callers=0 calls=0
*/
void sub_295030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295030ULL || rel >= 0x295040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295040 size=16 callers=0 calls=0
*/
void sub_295040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295040ULL || rel >= 0x295050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295050 size=48 callers=0 calls=0
*/
void sub_295050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295050ULL || rel >= 0x295080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295080 size=16 callers=0 calls=0
*/
void sub_295080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295080ULL || rel >= 0x295090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295090 size=16 callers=0 calls=0
*/
void sub_295090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295090ULL || rel >= 0x2950a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002950a0 size=16 callers=0 calls=0
*/
void sub_2950a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2950a0ULL || rel >= 0x2950b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002950b0 size=16 callers=0 calls=0
*/
void sub_2950b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2950b0ULL || rel >= 0x2950c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002950c0 size=16 callers=0 calls=0
*/
void sub_2950c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2950c0ULL || rel >= 0x2950d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002950d0 size=16 callers=0 calls=0
*/
void sub_2950d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2950d0ULL || rel >= 0x2950e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002950e0 size=992 callers=2 calls=0
   ref: InvInertiaScale1
   ref: DriveVelocity
   ref: ConstraintFlags
   ref: ProjectionLinearTolerance
   ref: Velocity
   ref: torque
   ref: BreakForce
   ref: RelativeAngularVelocity
*/
void RelativeLinearVelocity_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2950e0ULL || rel >= 0x2954c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002954c0 size=16 callers=0 calls=0
*/
void sub_2954c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2954c0ULL || rel >= 0x2954d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002954d0 size=16 callers=0 calls=0
*/
void sub_2954d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2954d0ULL || rel >= 0x2954e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002954e0 size=48 callers=0 calls=0
*/
void sub_2954e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2954e0ULL || rel >= 0x295510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295510 size=16 callers=0 calls=0
*/
void sub_295510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295510ULL || rel >= 0x295520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295520 size=16 callers=0 calls=0
*/
void sub_295520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295520ULL || rel >= 0x295530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295530 size=16 callers=0 calls=0
*/
void sub_295530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295530ULL || rel >= 0x295540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295540 size=16 callers=0 calls=0
*/
void sub_295540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295540ULL || rel >= 0x295550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295550 size=752 callers=2 calls=0
   ref: InvInertiaScale1
   ref: ConstraintFlags
   ref: ProjectionLinearTolerance
   ref: torque
   ref: BreakForce
   ref: LimitCone
   ref: RelativeAngularVelocity
   ref: actor1
*/
void RelativeLinearVelocity_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295550ULL || rel >= 0x295840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295840 size=16 callers=0 calls=0
*/
void sub_295840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295840ULL || rel >= 0x295850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295850 size=16 callers=0 calls=0
*/
void sub_295850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295850ULL || rel >= 0x295860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295860 size=16 callers=0 calls=0
*/
void sub_295860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295860ULL || rel >= 0x295870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295870 size=16 callers=0 calls=0
*/
void sub_295870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295870ULL || rel >= 0x295880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295880 size=16 callers=0 calls=0
*/
void sub_295880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295880ULL || rel >= 0x295890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295890 size=16 callers=0 calls=0
*/
void sub_295890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295890ULL || rel >= 0x2958a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002958a0 size=16 callers=0 calls=0
*/
void sub_2958a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2958a0ULL || rel >= 0x2958b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002958b0 size=16 callers=0 calls=0
*/
void sub_2958b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2958b0ULL || rel >= 0x2958c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002958c0 size=16 callers=0 calls=0
*/
void sub_2958c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2958c0ULL || rel >= 0x2958d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002958d0 size=16 callers=0 calls=0
*/
void sub_2958d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2958d0ULL || rel >= 0x2958e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002958e0 size=256 callers=3 calls=0
   ref: Restitution
   ref: ContactDistance
   ref: Stiffness
   ref: Damping
   ref: BounceThreshold
*/
void ContactDistance(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2958e0ULL || rel >= 0x2959e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002959e0 size=16 callers=0 calls=0
*/
void sub_2959e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2959e0ULL || rel >= 0x2959f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002959f0 size=16 callers=0 calls=0
*/
void sub_2959f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2959f0ULL || rel >= 0x295a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295a00 size=288 callers=3 calls=0
   ref: Restitution
   ref: ContactDistance
   ref: Stiffness
   ref: Damping
   ref: BounceThreshold
*/
void ContactDistance_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295a00ULL || rel >= 0x295b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295b20 size=16 callers=0 calls=0
*/
void sub_295b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295b20ULL || rel >= 0x295b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295b30 size=16 callers=0 calls=0
*/
void sub_295b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295b30ULL || rel >= 0x295b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295b40 size=16 callers=0 calls=0
*/
void sub_295b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295b40ULL || rel >= 0x295b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295b50 size=16 callers=0 calls=0
*/
void sub_295b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295b50ULL || rel >= 0x295b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295b60 size=288 callers=6 calls=0
   ref: Restitution
   ref: ContactDistance
   ref: Stiffness
   ref: Damping
   ref: BounceThreshold
*/
void ContactDistance_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295b60ULL || rel >= 0x295c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295c80 size=16 callers=0 calls=0
*/
void sub_295c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295c80ULL || rel >= 0x295c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295c90 size=16 callers=0 calls=0
*/
void sub_295c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295c90ULL || rel >= 0x295ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295ca0 size=16 callers=0 calls=0
*/
void sub_295ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295ca0ULL || rel >= 0x295cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295cb0 size=16 callers=0 calls=0
*/
void sub_295cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295cb0ULL || rel >= 0x295cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295cc0 size=288 callers=6 calls=0
   ref: YAngle
   ref: Restitution
   ref: ContactDistance
   ref: ZAngle
   ref: Stiffness
   ref: Damping
   ref: BounceThreshold
*/
void ContactDistance_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295cc0ULL || rel >= 0x295de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295de0 size=16 callers=0 calls=0
*/
void sub_295de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295de0ULL || rel >= 0x295df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295df0 size=16 callers=0 calls=0
*/
void sub_295df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295df0ULL || rel >= 0x295e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295e00 size=16 callers=0 calls=0
*/
void sub_295e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295e00ULL || rel >= 0x295e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295e10 size=16 callers=0 calls=0
*/
void sub_295e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295e10ULL || rel >= 0x295e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295e20 size=16 callers=0 calls=0
*/
void sub_295e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295e20ULL || rel >= 0x295e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295e30 size=16 callers=0 calls=0
*/
void sub_295e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295e30ULL || rel >= 0x295e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295e40 size=16 callers=0 calls=0
*/
void sub_295e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295e40ULL || rel >= 0x295e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295e50 size=16 callers=0 calls=0
*/
void sub_295e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295e50ULL || rel >= 0x295e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295e60 size=176 callers=3 calls=0
   ref: ForceLimit
   ref: Stiffness
   ref: Damping
*/
void ForceLimit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295e60ULL || rel >= 0x295f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295f10 size=16 callers=0 calls=0
*/
void sub_295f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295f10ULL || rel >= 0x295f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295f20 size=16 callers=0 calls=0
*/
void sub_295f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295f20ULL || rel >= 0x295f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295f30 size=16 callers=0 calls=0
*/
void sub_295f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295f30ULL || rel >= 0x295f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295f40 size=16 callers=0 calls=0
*/
void sub_295f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295f40ULL || rel >= 0x295f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295f50 size=64 callers=1 calls=0
*/
void sub_295f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295f50ULL || rel >= 0x295f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00295f90 size=208 callers=1 calls=1
   calls: sub_300c80
*/
void sub_295f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x295f90ULL || rel >= 0x296060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296060 size=64 callers=0 calls=2
   calls: sub_295f90, sub_300c80
*/
void sub_296060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296060ULL || rel >= 0x2960a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002960a0 size=80 callers=0 calls=0
*/
void sub_2960a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2960a0ULL || rel >= 0x2960f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002960f0 size=2128 callers=1 calls=6
   calls: NonTrackedAlloc_126, sub_2975a0, sub_2975e0, sub_3007d0, sub_3007e0, sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: PrunerStructure::build: Provided actor has no scene query shape!
   ref: PrunerStructure::build: Provided actor is not a rigid actor!
   ref: NonTrackedAlloc
   ref: PrunerStructure::build: Actor already assigned to a scene!
   ref: PrunerStructure::build: Provided actor has already a pruning structure!
*/
void NonTrackedAlloc_124(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2960f0ULL || rel >= 0x296940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296940 size=96 callers=0 calls=1
   calls: SqPruningStructure
*/
void sub_296940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296940ULL || rel >= 0x2969a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002969a0 size=256 callers=1 calls=1
   calls: sub_3007d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: PrunerStructure::importExtraData: Pruning structure is invalid!
*/
void SqPruningStructure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2969a0ULL || rel >= 0x296aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296aa0 size=112 callers=0 calls=0
*/
void sub_296aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296aa0ULL || rel >= 0x296b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296b10 size=112 callers=0 calls=0
*/
void sub_296b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296b10ULL || rel >= 0x296b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296b80 size=384 callers=0 calls=1
   calls: sub_3007d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: PrunerStructure::exportExtraData: Pruning structure is invalid!
*/
void SqPruningStructure_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296b80ULL || rel >= 0x296d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296d00 size=240 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: PrunerStructure::getRigidActors: Pruning structure is invalid!
*/
void SqPruningStructure_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296d00ULL || rel >= 0x296df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296df0 size=96 callers=14 calls=0
*/
void sub_296df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296df0ULL || rel >= 0x296e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296e50 size=16 callers=0 calls=0
   ref: PxPruningStructure
*/
void PxPruningStructure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296e50ULL || rel >= 0x296e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296e60 size=96 callers=0 calls=0
   ref: PxBase
   ref: PxPruningStructure
*/
void PxPruningStructure_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296e60ULL || rel >= 0x296ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296ec0 size=16 callers=0 calls=0
*/
void sub_296ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296ec0ULL || rel >= 0x296ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00296ed0 size=480 callers=0 calls=1
   calls: GuBounds
*/
void sub_296ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x296ed0ULL || rel >= 0x2970b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002970b0 size=976 callers=0 calls=2
   calls: GuBounds, sub_2bec20
*/
void sub_2970b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2970b0ULL || rel >= 0x297480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297480 size=288 callers=1 calls=0
*/
void sub_297480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297480ULL || rel >= 0x2975a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002975a0 size=64 callers=7 calls=1
   calls: sub_299330
*/
void sub_2975a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2975a0ULL || rel >= 0x2975e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002975e0 size=112 callers=12 calls=4
   calls: sub_297650, sub_297760, sub_299340, sub_300c80
*/
void sub_2975e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2975e0ULL || rel >= 0x297650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297650 size=272 callers=9 calls=2
   calls: sub_299430, sub_300c80
*/
void sub_297650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297650ULL || rel >= 0x297760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297760 size=64 callers=1 calls=1
   calls: sub_300c80
*/
void sub_297760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297760ULL || rel >= 0x2977a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002977a0 size=272 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTreeRuntimeNode>::getName() [T 
*/
void NonTrackedAlloc_125(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2977a0ULL || rel >= 0x2978b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002978b0 size=64 callers=1 calls=0
*/
void sub_2978b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2978b0ULL || rel >= 0x2978f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002978f0 size=224 callers=2 calls=3
   calls: sub_297480, sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTreeRuntimeNode>::getName() [T 
*/
void SqAABBTree(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2978f0ULL || rel >= 0x2979d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002979d0 size=432 callers=4 calls=5
   calls: SqAABBTree, SqAABBTreeBuild, sub_297650, sub_299a30, sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_126(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2979d0ULL || rel >= 0x297b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297b80 size=144 callers=3 calls=0
*/
void sub_297b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297b80ULL || rel >= 0x297c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297c10 size=896 callers=2 calls=7
   calls: PsArray_182, SqAABBTree, SqAABBTreeBuild, sub_297650, sub_2997a0, sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::FIFOStack>::getName() [T = physx::S
*/
void NonTrackedAlloc_127(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297c10ULL || rel >= 0x297f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00297f90 size=192 callers=1 calls=1
   calls: sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x297f90ULL || rel >= 0x298050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00298050 size=496 callers=1 calls=0
*/
void sub_298050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x298050ULL || rel >= 0x298240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00298240 size=368 callers=9 calls=2
   calls: sub_2983b0, sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_129(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x298240ULL || rel >= 0x2983b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002983b0 size=192 callers=3 calls=1
   calls: sub_2983b0
*/
void sub_2983b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2983b0ULL || rel >= 0x298470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00298470 size=608 callers=4 calls=0
*/
void sub_298470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x298470ULL || rel >= 0x2986d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002986d0 size=768 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTreeRuntimeNode>::getName() [T 
*/
void NonTrackedAlloc_130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2986d0ULL || rel >= 0x2989d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002989d0 size=1040 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTreeRuntimeNode>::getName() [T 
*/
void NonTrackedAlloc_131(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2989d0ULL || rel >= 0x298de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00298de0 size=288 callers=1 calls=0
*/
void sub_298de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x298de0ULL || rel >= 0x298f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00298f00 size=672 callers=1 calls=6
   calls: NonTrackedAlloc_128, NonTrackedAlloc_130, NonTrackedAlloc_131, sub_2983b0, sub_298de0, sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_132(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x298f00ULL || rel >= 0x2991a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002991a0 size=400 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTreeBuildNode *>::getName() [T 
*/
void PsArray_182(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2991a0ULL || rel >= 0x299330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299330 size=16 callers=1 calls=0
*/
void sub_299330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299330ULL || rel >= 0x299340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299340 size=240 callers=1 calls=4
   calls: PsArray_183, sub_2994e0, sub_299ac0, sub_300c80
*/
void sub_299340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299340ULL || rel >= 0x299430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299430 size=176 callers=1 calls=3
   calls: PsArray_183, sub_299ac0, sub_300c80
*/
void sub_299430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299430ULL || rel >= 0x2994e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002994e0 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_2994e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2994e0ULL || rel >= 0x299530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299530 size=304 callers=2 calls=3
   calls: PsArray_184, sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTreeBuildNode>::getName() [T = 
*/
void SqAABBTreeBuild(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299530ULL || rel >= 0x299660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299660 size=320 callers=1 calls=3
   calls: PsArray_184, sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTreeBuildNode>::getName() [T = 
*/
void SqAABBTreeBuild_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299660ULL || rel >= 0x2997a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002997a0 size=656 callers=2 calls=1
   calls: SqAABBTreeBuild_2
*/
void sub_2997a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2997a0ULL || rel >= 0x299a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299a30 size=144 callers=3 calls=2
   calls: sub_2997a0, sub_299a30
*/
void sub_299a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299a30ULL || rel >= 0x299ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299ac0 size=320 callers=2 calls=1
   calls: PsArray_183
*/
void sub_299ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299ac0ULL || rel >= 0x299c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299c00 size=464 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::NodeAllocator::Slab>::getName() [T 
   ref: <allocation names disabled>
*/
void PsArray_183(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299c00ULL || rel >= 0x299dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299dd0 size=512 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::NodeAllocator::Slab>::getName() [T 
   ref: <allocation names disabled>
*/
void PsArray_184(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299dd0ULL || rel >= 0x299fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00299fd0 size=144 callers=3 calls=1
   calls: sub_300c80
*/
void sub_299fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x299fd0ULL || rel >= 0x29a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a060 size=480 callers=2 calls=4
   calls: sub_29afe0, sub_2a58d0, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBPruner>::getName() [T = physx::
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::BucketPruner>::getName() [T = physx
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
*/
void SqSceneQueryManager(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a060ULL || rel >= 0x29a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a240 size=560 callers=1 calls=8
   calls: NonTrackedAlloc_69, SqSceneQueryManager, sub_299fd0, sub_2ff4a0, sub_2ff4b0, sub_2ff550, sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsMutex.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = phys
*/
void PsMutex_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a240ULL || rel >= 0x29a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a470 size=128 callers=0 calls=0
*/
void sub_29a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a470ULL || rel >= 0x29a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a4f0 size=160 callers=0 calls=1
   calls: NonTrackedAlloc_69
*/
void sub_29a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a4f0ULL || rel >= 0x29a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a590 size=80 callers=4 calls=3
   calls: sub_299fd0, sub_2ff4b0, sub_300c80
*/
void sub_29a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a590ULL || rel >= 0x29a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a5e0 size=160 callers=1 calls=2
   calls: PsArray_138, sub_ed340
*/
void sub_29a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a5e0ULL || rel >= 0x29a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a680 size=208 callers=2 calls=1
   calls: PsArray_75
*/
void sub_29a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a680ULL || rel >= 0x29a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a750 size=352 callers=6 calls=1
   calls: NonTrackedAlloc_69
*/
void sub_29a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a750ULL || rel >= 0x29a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a8b0 size=48 callers=3 calls=0
*/
void sub_29a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a8b0ULL || rel >= 0x29a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a8e0 size=224 callers=4 calls=0
*/
void sub_29a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a8e0ULL || rel >= 0x29a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029a9c0 size=256 callers=1 calls=1
   calls: sub_29aac0
*/
void sub_29a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29a9c0ULL || rel >= 0x29aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029aac0 size=368 callers=2 calls=0
*/
void sub_29aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29aac0ULL || rel >= 0x29ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ac30 size=128 callers=5 calls=2
   calls: sub_29aac0, sub_2ff4c0
*/
void sub_29ac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ac30ULL || rel >= 0x29acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029acb0 size=192 callers=0 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_29acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29acb0ULL || rel >= 0x29ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ad70 size=96 callers=0 calls=0
*/
void sub_29ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ad70ULL || rel >= 0x29add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029add0 size=64 callers=2 calls=0
*/
void sub_29add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29add0ULL || rel >= 0x29ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ae10 size=64 callers=1 calls=0
*/
void sub_29ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ae10ULL || rel >= 0x29ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ae50 size=368 callers=0 calls=0
*/
void sub_29ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ae50ULL || rel >= 0x29afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029afc0 size=16 callers=0 calls=0
*/
void sub_29afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29afc0ULL || rel >= 0x29afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029afd0 size=16 callers=0 calls=0
*/
void sub_29afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29afd0ULL || rel >= 0x29afe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029afe0 size=272 callers=2 calls=4
   calls: NonTrackedAlloc_139, sub_29eb20, sub_2a68f0, sub_300c80
*/
void sub_29afe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29afe0ULL || rel >= 0x29b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b0f0 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_29b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b0f0ULL || rel >= 0x29b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b140 size=80 callers=4 calls=1
   calls: sub_300c80
*/
void sub_29b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b140ULL || rel >= 0x29b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b190 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_29b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b190ULL || rel >= 0x29b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b1e0 size=400 callers=1 calls=8
   calls: sub_29b0f0, sub_29b140, sub_29b190, sub_29b370, sub_29eb40, sub_2a68f0, sub_300c80, sub_f5e00
*/
void sub_29b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b1e0ULL || rel >= 0x29b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b370 size=304 callers=3 calls=5
   calls: PsArray_138, sub_2975e0, sub_2a6b00, sub_300c80, sub_ed340
*/
void sub_29b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b370ULL || rel >= 0x29b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b4a0 size=64 callers=0 calls=2
   calls: sub_29b1e0, sub_300c80
*/
void sub_29b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b4a0ULL || rel >= 0x29b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b4e0 size=224 callers=0 calls=2
   calls: sub_29eea0, sub_29fc10
*/
void sub_29b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b4e0ULL || rel >= 0x29b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b5c0 size=352 callers=0 calls=3
   calls: NonTrackedAlloc_129, PsArray_75, sub_2a7130
*/
void sub_29b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b5c0ULL || rel >= 0x29b720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b720 size=464 callers=0 calls=3
   calls: NonTrackedAlloc_129, PsArray_75, sub_2a7130
*/
void sub_29b720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b720ULL || rel >= 0x29b8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029b8f0 size=496 callers=0 calls=7
   calls: NonTrackedAlloc_129, PsArray_185, sub_29b370, sub_29eff0, sub_2a6390, sub_2a7780, sub_2a7900
*/
void sub_29b8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29b8f0ULL || rel >= 0x29bae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029bae0 size=1360 callers=0 calls=5
   calls: sub_29c030, sub_29c240, sub_29c4d0, sub_29c7f0, sub_2a81d0
*/
void sub_29bae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29bae0ULL || rel >= 0x29c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029c030 size=528 callers=4 calls=1
   calls: sub_29e8b0
*/
void sub_29c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29c030ULL || rel >= 0x29c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029c240 size=656 callers=3 calls=0
*/
void sub_29c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29c240ULL || rel >= 0x29c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029c4d0 size=800 callers=3 calls=0
*/
void sub_29c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29c4d0ULL || rel >= 0x29c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029c7f0 size=656 callers=3 calls=0
*/
void sub_29c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29c7f0ULL || rel >= 0x29ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ca80 size=288 callers=0 calls=2
   calls: sub_29cba0, sub_2a88d0
*/
void sub_29ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ca80ULL || rel >= 0x29cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029cba0 size=1600 callers=3 calls=0
*/
void sub_29cba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29cba0ULL || rel >= 0x29d1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d1e0 size=208 callers=0 calls=2
   calls: sub_29d2b0, sub_2a80f0
*/
void sub_29d1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d1e0ULL || rel >= 0x29d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d2b0 size=1536 callers=3 calls=0
*/
void sub_29d2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d2b0ULL || rel >= 0x29d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d8b0 size=48 callers=0 calls=1
   calls: sub_29b370
*/
void sub_29d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d8b0ULL || rel >= 0x29d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d8e0 size=16 callers=0 calls=0
*/
void sub_29d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d8e0ULL || rel >= 0x29d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029d8f0 size=608 callers=0 calls=8
   calls: NonTrackedAlloc_129, NonTrackedAlloc_141, sub_2975e0, sub_298470, sub_2a6150, sub_2a6390, sub_2a7a10, sub_300c80
*/
void sub_29d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29d8f0ULL || rel >= 0x29db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029db50 size=400 callers=0 calls=6
   calls: NonTrackedAlloc_126, sub_2975a0, sub_2975e0, sub_2a6150, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTree>::getName() [T = physx::Sq
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
*/
void SqAABBPruner(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29db50ULL || rel >= 0x29dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029dce0 size=112 callers=0 calls=3
   calls: sub_297b80, sub_29f0a0, sub_2a8080
*/
void sub_29dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29dce0ULL || rel >= 0x29dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029dd50 size=224 callers=0 calls=4
   calls: sub_1184d0, sub_118570, sub_29de30, sub_2a8a00
*/
void sub_29dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29dd50ULL || rel >= 0x29de30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029de30 size=192 callers=3 calls=2
   calls: sub_118a20, sub_29de30
*/
void sub_29de30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29de30ULL || rel >= 0x29def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029def0 size=1392 callers=0 calls=4
   calls: NonTrackedAlloc_127, sub_298050, sub_2a6150, sub_2a6390
*/
void sub_29def0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29def0ULL || rel >= 0x29e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e460 size=464 callers=0 calls=4
   calls: sub_2975a0, sub_2975e0, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTree>::getName() [T = physx::Sq
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_133(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e460ULL || rel >= 0x29e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e630 size=128 callers=0 calls=2
   calls: NonTrackedAlloc_132, sub_2a6cd0
*/
void sub_29e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e630ULL || rel >= 0x29e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e6b0 size=32 callers=0 calls=0
*/
void sub_29e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e6b0ULL || rel >= 0x29e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e6d0 size=48 callers=0 calls=0
*/
void sub_29e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e6d0ULL || rel >= 0x29e700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e700 size=16 callers=0 calls=0
*/
void sub_29e700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e700ULL || rel >= 0x29e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e710 size=416 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBPruner::NewTreeFixup>::getName(
*/
void PsArray_185(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e710ULL || rel >= 0x29e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029e8b0 size=624 callers=3 calls=0
*/
void sub_29e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29e8b0ULL || rel >= 0x29eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029eb20 size=32 callers=2 calls=0
*/
void sub_29eb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29eb20ULL || rel >= 0x29eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029eb40 size=176 callers=4 calls=1
   calls: sub_300c80
*/
void sub_29eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29eb40ULL || rel >= 0x29ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ebf0 size=656 callers=1 calls=1
   calls: sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_134(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ebf0ULL || rel >= 0x29ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029ee80 size=32 callers=0 calls=0
*/
void sub_29ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29ee80ULL || rel >= 0x29eea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029eea0 size=336 callers=2 calls=1
   calls: NonTrackedAlloc_134
*/
void sub_29eea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29eea0ULL || rel >= 0x29eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029eff0 size=176 callers=2 calls=0
*/
void sub_29eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29eff0ULL || rel >= 0x29f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f0a0 size=128 callers=1 calls=0
*/
void sub_29f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f0a0ULL || rel >= 0x29f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f120 size=672 callers=6 calls=0
*/
void sub_29f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f120ULL || rel >= 0x29f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f3c0 size=992 callers=2 calls=0
*/
void sub_29f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f3c0ULL || rel >= 0x29f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f7a0 size=64 callers=3 calls=2
   calls: sub_29f7e0, sub_2a5c70
*/
void sub_29f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f7a0ULL || rel >= 0x29f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f7e0 size=336 callers=5 calls=1
   calls: sub_300c80
*/
void sub_29f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f7e0ULL || rel >= 0x29f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029f930 size=288 callers=1 calls=1
   calls: sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_135(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29f930ULL || rel >= 0x29fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029fa50 size=448 callers=2 calls=1
   calls: sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_136(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29fa50ULL || rel >= 0x29fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029fc10 size=592 callers=2 calls=2
   calls: NonTrackedAlloc_136, sub_2a5d00
*/
void sub_29fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29fc10ULL || rel >= 0x29fe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0029fe60 size=656 callers=2 calls=1
   calls: sub_2a00f0
*/
void sub_29fe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x29fe60ULL || rel >= 0x2a00f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a00f0 size=368 callers=1 calls=2
   calls: NonTrackedAlloc_138, sub_2a0600
*/
void sub_2a00f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a00f0ULL || rel >= 0x2a0260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0260 size=112 callers=0 calls=2
   calls: sub_29fc10, sub_29fe60
*/
void sub_2a0260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0260ULL || rel >= 0x2a02d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a02d0 size=816 callers=1 calls=2
   calls: NonTrackedAlloc_138, sub_2a0600
*/
void sub_2a02d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a02d0ULL || rel >= 0x2a0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0600 size=336 callers=2 calls=0
*/
void sub_2a0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0600ULL || rel >= 0x2a0750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a0750 size=2640 callers=0 calls=8
   calls: NonTrackedAlloc_135, sub_1d44c0, sub_1d44f0, sub_1d4740, sub_29f120, sub_2a11a0, sub_2a14a0, sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_137(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a0750ULL || rel >= 0x2a11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a11a0 size=768 callers=6 calls=1
   calls: sub_29f120
*/
void sub_2a11a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a11a0ULL || rel >= 0x2a14a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a14a0 size=3888 callers=31 calls=0
*/
void sub_2a14a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a14a0ULL || rel >= 0x2a23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a23d0 size=2928 callers=1 calls=0
*/
void sub_2a23d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a23d0ULL || rel >= 0x2a2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a2f40 size=3072 callers=1 calls=0
*/
void sub_2a2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a2f40ULL || rel >= 0x2a3b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a3b40 size=544 callers=1 calls=3
   calls: sub_2a3d60, sub_2a4600, sub_2a4aa0
*/
void sub_2a3b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a3b40ULL || rel >= 0x2a3d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a3d60 size=2208 callers=1 calls=0
*/
void sub_2a3d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a3d60ULL || rel >= 0x2a4600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4600 size=1184 callers=1 calls=0
*/
void sub_2a4600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4600ULL || rel >= 0x2a4aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4aa0 size=1504 callers=1 calls=0
*/
void sub_2a4aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4aa0ULL || rel >= 0x2a5080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5080 size=1248 callers=0 calls=0
*/
void sub_2a5080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5080ULL || rel >= 0x2a5560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5560 size=880 callers=1 calls=3
   calls: sub_1184d0, sub_118570, sub_118a20
*/
void sub_2a5560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5560ULL || rel >= 0x2a58d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a58d0 size=144 callers=1 calls=4
   calls: sub_29eb20, sub_29f3c0, sub_29f7e0, sub_2a5c70
*/
void sub_2a58d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a58d0ULL || rel >= 0x2a5960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5960 size=96 callers=0 calls=3
   calls: sub_29eb40, sub_29f7e0, sub_2a5c70
*/
void sub_2a5960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5960ULL || rel >= 0x2a59c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a59c0 size=128 callers=0 calls=4
   calls: sub_29eb40, sub_29f7e0, sub_2a5c70, sub_300c80
*/
void sub_2a59c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a59c0ULL || rel >= 0x2a5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5a40 size=112 callers=0 calls=1
   calls: sub_29eea0
*/
void sub_2a5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5a40ULL || rel >= 0x2a5ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5ab0 size=112 callers=0 calls=1
   calls: sub_29eff0
*/
void sub_2a5ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5ab0ULL || rel >= 0x2a5b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5b20 size=48 callers=0 calls=0
*/
void sub_2a5b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5b20ULL || rel >= 0x2a5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5b50 size=144 callers=0 calls=0
*/
void sub_2a5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5b50ULL || rel >= 0x2a5be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5be0 size=16 callers=0 calls=0
*/
void sub_2a5be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5be0ULL || rel >= 0x2a5bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5bf0 size=16 callers=0 calls=0
*/
void sub_2a5bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5bf0ULL || rel >= 0x2a5c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5c00 size=32 callers=0 calls=0
*/
void sub_2a5c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5c00ULL || rel >= 0x2a5c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5c20 size=32 callers=0 calls=0
*/
void sub_2a5c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5c20ULL || rel >= 0x2a5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5c40 size=32 callers=0 calls=0
*/
void sub_2a5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5c40ULL || rel >= 0x2a5c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5c60 size=16 callers=0 calls=0
*/
void sub_2a5c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5c60ULL || rel >= 0x2a5c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5c70 size=144 callers=6 calls=1
   calls: sub_300c80
*/
void sub_2a5c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5c70ULL || rel >= 0x2a5d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5d00 size=400 callers=2 calls=1
   calls: NonTrackedAlloc_138
*/
void sub_2a5d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5d00ULL || rel >= 0x2a5e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5e90 size=592 callers=3 calls=1
   calls: sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_138(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5e90ULL || rel >= 0x2a60e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a60e0 size=16 callers=0 calls=0
*/
void sub_2a60e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a60e0ULL || rel >= 0x2a60f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a60f0 size=32 callers=0 calls=0
*/
void sub_2a60f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a60f0ULL || rel >= 0x2a6110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6110 size=48 callers=0 calls=0
*/
void sub_2a6110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6110ULL || rel >= 0x2a6140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6140 size=16 callers=0 calls=0
*/
void sub_2a6140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6140ULL || rel >= 0x2a6150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6150 size=576 callers=5 calls=2
   calls: PsArray_138, sub_ed340
*/
void sub_2a6150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6150ULL || rel >= 0x2a6390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6390 size=304 callers=3 calls=0
*/
void sub_2a6390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6390ULL || rel >= 0x2a64c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a64c0 size=960 callers=1 calls=6
   calls: NonTrackedAlloc_142, sub_2975a0, sub_29f3c0, sub_29f7a0, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTree>::getName() [T = physx::Sq
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_139(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a64c0ULL || rel >= 0x2a6880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6880 size=112 callers=1 calls=1
   calls: sub_300c80
*/
void sub_2a6880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6880ULL || rel >= 0x2a68f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a68f0 size=480 callers=4 calls=5
   calls: sub_2975e0, sub_29b140, sub_29f7a0, sub_2a6880, sub_300c80
*/
void sub_2a68f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a68f0ULL || rel >= 0x2a6ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6ad0 size=48 callers=0 calls=1
   calls: sub_2a68f0
*/
void sub_2a6ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6ad0ULL || rel >= 0x2a6b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6b00 size=464 callers=1 calls=4
   calls: PsArray_138, sub_297650, sub_29f7e0, sub_ed340
*/
void sub_2a6b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6b00ULL || rel >= 0x2a6cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6cd0 size=416 callers=1 calls=6
   calls: NonTrackedAlloc_125, NonTrackedAlloc_140, sub_2978b0, sub_2a6150, sub_2a7080, sub_2a8da0
*/
void sub_2a6cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6cd0ULL || rel >= 0x2a6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6e70 size=528 callers=1 calls=3
   calls: sub_2975a0, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTree>::getName() [T = physx::Sq
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6e70ULL || rel >= 0x2a7080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7080 size=176 callers=3 calls=3
   calls: NonTrackedAlloc_126, sub_2a6150, sub_300c80
*/
void sub_2a7080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7080ULL || rel >= 0x2a7130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7130 size=288 callers=2 calls=1
   calls: NonTrackedAlloc_129
*/
void sub_2a7130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7130ULL || rel >= 0x2a7250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7250 size=1328 callers=2 calls=4
   calls: sub_297650, sub_298470, sub_2a7080, sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_141(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7250ULL || rel >= 0x2a7780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7780 size=384 callers=1 calls=4
   calls: NonTrackedAlloc_129, sub_29fe60, sub_2a7900, sub_2a8f30
*/
void sub_2a7780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7780ULL || rel >= 0x2a7900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7900 size=272 callers=3 calls=0
*/
void sub_2a7900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7900ULL || rel >= 0x2a7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7a10 size=624 callers=1 calls=5
   calls: sub_297650, sub_2a02d0, sub_2a7080, sub_2a7c80, sub_2a7e00
*/
void sub_2a7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7a10ULL || rel >= 0x2a7c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7c80 size=384 callers=1 calls=1
   calls: sub_297650
*/
void sub_2a7c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7c80ULL || rel >= 0x2a7e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7e00 size=640 callers=2 calls=0
*/
void sub_2a7e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7e00ULL || rel >= 0x2a8080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a8080 size=112 callers=1 calls=1
   calls: sub_297b80
*/
void sub_2a8080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a8080ULL || rel >= 0x2a80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a80f0 size=224 callers=1 calls=2
   calls: sub_29d2b0, sub_2a23d0
*/
void sub_2a80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a80f0ULL || rel >= 0x2a81d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a81d0 size=1792 callers=1 calls=5
   calls: sub_29c030, sub_29c240, sub_29c4d0, sub_29c7f0, sub_2a3b40
*/
void sub_2a81d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a81d0ULL || rel >= 0x2a88d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a88d0 size=304 callers=1 calls=2
   calls: sub_29cba0, sub_2a2f40
*/
void sub_2a88d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a88d0ULL || rel >= 0x2a8a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a8a00 size=272 callers=1 calls=4
   calls: sub_1184d0, sub_118570, sub_2a5560, sub_2a8b10
*/
void sub_2a8a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a8a00ULL || rel >= 0x2a8b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a8b10 size=192 callers=4 calls=2
   calls: sub_118a20, sub_2a8b10
*/
void sub_2a8b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a8b10ULL || rel >= 0x2a8bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a8bd0 size=464 callers=3 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_142(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a8bd0ULL || rel >= 0x2a8da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a8da0 size=400 callers=1 calls=1
   calls: NonTrackedAlloc_142
*/
void sub_2a8da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a8da0ULL || rel >= 0x2a8f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a8f30 size=480 callers=1 calls=0
*/
void sub_2a8f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a8f30ULL || rel >= 0x2a9110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9110 size=80 callers=0 calls=1
   calls: sub_29d2b0
*/
void sub_2a9110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9110ULL || rel >= 0x2a9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9160 size=16 callers=0 calls=0
*/
void sub_2a9160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9160ULL || rel >= 0x2a9170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9170 size=64 callers=0 calls=1
   calls: sub_29c030
*/
void sub_2a9170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9170ULL || rel >= 0x2a91b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a91b0 size=16 callers=0 calls=0
*/
void sub_2a91b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a91b0ULL || rel >= 0x2a91c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a91c0 size=64 callers=0 calls=1
   calls: sub_29c240
*/
void sub_2a91c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a91c0ULL || rel >= 0x2a9200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9200 size=16 callers=0 calls=0
*/
void sub_2a9200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9200ULL || rel >= 0x2a9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9210 size=64 callers=0 calls=1
   calls: sub_29c4d0
*/
void sub_2a9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9210ULL || rel >= 0x2a9250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9250 size=16 callers=0 calls=0
*/
void sub_2a9250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9250ULL || rel >= 0x2a9260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9260 size=64 callers=0 calls=1
   calls: sub_29c7f0
*/
void sub_2a9260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9260ULL || rel >= 0x2a92a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a92a0 size=16 callers=0 calls=0
*/
void sub_2a92a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a92a0ULL || rel >= 0x2a92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a92b0 size=80 callers=0 calls=1
   calls: sub_29cba0
*/
void sub_2a92b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a92b0ULL || rel >= 0x2a9300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9300 size=16 callers=0 calls=0
*/
void sub_2a9300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9300ULL || rel >= 0x2a9310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9310 size=624 callers=4 calls=2
   calls: sub_2ff460, sub_2ff480
*/
void sub_2a9310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9310ULL || rel >= 0x2a9580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9580 size=480 callers=1 calls=4
   calls: PtParticleData_2, sub_2a9310, sub_2ba1e0, sub_2ba210
*/
void sub_2a9580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9580ULL || rel >= 0x2a9760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9760 size=32 callers=1 calls=0
*/
void sub_2a9760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9760ULL || rel >= 0x2a9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9780 size=64 callers=0 calls=2
   calls: sub_2ba210, sub_96a80
*/
void sub_2a9780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9780ULL || rel >= 0x2a97c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a97c0 size=224 callers=0 calls=4
   calls: PtParticleData, sub_2aa7b0, sub_960e0, sub_96a80
*/
void sub_2a97c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a97c0ULL || rel >= 0x2a98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a98a0 size=48 callers=2 calls=1
   calls: sub_969f0
*/
void sub_2a98a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a98a0ULL || rel >= 0x2a98d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a98d0 size=16 callers=5 calls=0
*/
void sub_2a98d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a98d0ULL || rel >= 0x2a98e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a98e0 size=16 callers=1 calls=0
*/
void sub_2a98e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a98e0ULL || rel >= 0x2a98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a98f0 size=16 callers=2 calls=0
*/
void sub_2a98f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a98f0ULL || rel >= 0x2a9900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9900 size=64 callers=1 calls=0
*/
void sub_2a9900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9900ULL || rel >= 0x2a9940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9940 size=48 callers=2 calls=0
*/
void sub_2a9940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9940ULL || rel >= 0x2a9970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9970 size=16 callers=0 calls=0
*/
void sub_2a9970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9970ULL || rel >= 0x2a9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9980 size=16 callers=1 calls=0
*/
void sub_2a9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9980ULL || rel >= 0x2a9990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9990 size=16 callers=0 calls=0
*/
void sub_2a9990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9990ULL || rel >= 0x2a99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a99a0 size=16 callers=1 calls=0
*/
void sub_2a99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a99a0ULL || rel >= 0x2a99b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a99b0 size=16 callers=0 calls=0
*/
void sub_2a99b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a99b0ULL || rel >= 0x2a99c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a99c0 size=16 callers=1 calls=0
*/
void sub_2a99c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a99c0ULL || rel >= 0x2a99d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a99d0 size=16 callers=2 calls=0
*/
void sub_2a99d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a99d0ULL || rel >= 0x2a99e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a99e0 size=16 callers=1 calls=0
*/
void sub_2a99e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a99e0ULL || rel >= 0x2a99f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a99f0 size=16 callers=0 calls=0
*/
void sub_2a99f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a99f0ULL || rel >= 0x2a9a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9a00 size=16 callers=1 calls=0
*/
void sub_2a9a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9a00ULL || rel >= 0x2a9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9a10 size=16 callers=0 calls=0
*/
void sub_2a9a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9a10ULL || rel >= 0x2a9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9a20 size=16 callers=1 calls=0
*/
void sub_2a9a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9a20ULL || rel >= 0x2a9a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9a30 size=16 callers=0 calls=0
*/
void sub_2a9a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9a30ULL || rel >= 0x2a9a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9a40 size=16 callers=1 calls=0
*/
void sub_2a9a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9a40ULL || rel >= 0x2a9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9a50 size=16 callers=3 calls=0
*/
void sub_2a9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9a50ULL || rel >= 0x2a9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9a60 size=32 callers=1 calls=0
*/
void sub_2a9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9a60ULL || rel >= 0x2a9a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9a80 size=16 callers=1 calls=0
*/
void sub_2a9a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9a80ULL || rel >= 0x2a9a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9a90 size=16 callers=12 calls=0
*/
void sub_2a9a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9a90ULL || rel >= 0x2a9aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9aa0 size=160 callers=3 calls=2
   calls: ScScene_7, sub_2e9f80
*/
void sub_2a9aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9aa0ULL || rel >= 0x2a9b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9b40 size=16 callers=0 calls=0
*/
void sub_2a9b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9b40ULL || rel >= 0x2a9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9b50 size=16 callers=1 calls=0
*/
void sub_2a9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9b50ULL || rel >= 0x2a9b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9b60 size=16 callers=7 calls=0
*/
void sub_2a9b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9b60ULL || rel >= 0x2a9b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9b70 size=16 callers=3 calls=0
*/
void sub_2a9b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9b70ULL || rel >= 0x2a9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9b80 size=64 callers=1 calls=1
   calls: sub_2aa7b0
*/
void sub_2a9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9b80ULL || rel >= 0x2a9bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9bc0 size=16 callers=1 calls=0
*/
void sub_2a9bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9bc0ULL || rel >= 0x2a9bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9bd0 size=16 callers=0 calls=0
*/
void sub_2a9bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9bd0ULL || rel >= 0x2a9be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9be0 size=16 callers=0 calls=0
*/
void sub_2a9be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9be0ULL || rel >= 0x2a9bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9bf0 size=16 callers=0 calls=0
*/
void sub_2a9bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9bf0ULL || rel >= 0x2a9c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9c00 size=16 callers=0 calls=0
*/
void sub_2a9c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9c00ULL || rel >= 0x2a9c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9c10 size=16 callers=0 calls=0
*/
void sub_2a9c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9c10ULL || rel >= 0x2a9c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9c20 size=16 callers=0 calls=0
*/
void sub_2a9c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9c20ULL || rel >= 0x2a9c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9c30 size=80 callers=0 calls=1
   calls: sub_2a9310
*/
void sub_2a9c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9c30ULL || rel >= 0x2a9c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9c80 size=32 callers=1 calls=0
*/
void sub_2a9c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9c80ULL || rel >= 0x2a9ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9ca0 size=48 callers=0 calls=1
   calls: sub_2a9310
*/
void sub_2a9ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9ca0ULL || rel >= 0x2a9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9cd0 size=64 callers=1 calls=1
   calls: sub_2aa7b0
*/
void sub_2a9cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9cd0ULL || rel >= 0x2a9d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9d10 size=80 callers=1 calls=1
   calls: sub_2aa7b0
*/
void sub_2a9d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9d10ULL || rel >= 0x2a9d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9d60 size=64 callers=1 calls=1
   calls: sub_2aa7b0
*/
void sub_2a9d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9d60ULL || rel >= 0x2a9da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9da0 size=96 callers=1 calls=1
   calls: sub_2aa7b0
*/
void sub_2a9da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9da0ULL || rel >= 0x2a9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9e00 size=96 callers=1 calls=1
   calls: sub_2aa7b0
*/
void sub_2a9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9e00ULL || rel >= 0x2a9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9e60 size=96 callers=1 calls=1
   calls: sub_2aa7b0
*/
void sub_2a9e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9e60ULL || rel >= 0x2a9ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

