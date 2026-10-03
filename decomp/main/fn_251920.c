/* main functions 00251920..002865b0 (13 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00251920 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_217
*/
void sub_251920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x251920ULL || rel >= 0x251ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00251ab0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_218
*/
void sub_251ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x251ab0ULL || rel >= 0x251c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00251c40 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_215(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x251c40ULL || rel >= 0x251eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00251eb0 size=272 callers=1 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_216(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x251eb0ULL || rel >= 0x251fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00251fc0 size=240 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_217(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x251fc0ULL || rel >= 0x2520b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002520b0 size=240 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_218(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2520b0ULL || rel >= 0x2521a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002521a0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_219
*/
void sub_2521a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2521a0ULL || rel >= 0x252330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252330 size=304 callers=1 calls=2
   calls: PsArray_174, PxShapeRef_2
   ref: Shapes
*/
void Shapes_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252330ULL || rel >= 0x252460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252460 size=272 callers=1 calls=2
   calls: sub_21b300, sub_22c710
   ref: bad__repx__name
*/
void bad__repx__name_219(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252460ULL || rel >= 0x252570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252570 size=832 callers=1 calls=7
   calls: PsArray_174, SimulationFilterData, bad__repx__name_44, sub_22cc70, sub_3007d0, sub_3007e0, sub_300c80
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h
   ref: PxShapeRef
   ref: PxShape
   ref: PxSerialization::serializeCollectionToXml: Reference "%s" could not be resolved.
*/
void PxShapeRef_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252570ULL || rel >= 0x2528b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002528b0 size=704 callers=1 calls=8
   calls: ClientBehaviorFlags, Shapes_3, bad__repx__name_220, bad__repx__name_221, bad__repx__name_222, sub_252da0, sub_2533c0, sub_2537a0
*/
void sub_2528b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2528b0ULL || rel >= 0x252b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252b70 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252b70ULL || rel >= 0x252da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252da0 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_223
*/
void sub_252da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252da0ULL || rel >= 0x252f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252f60 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_221(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252f60ULL || rel >= 0x253190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00253190 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_222(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x253190ULL || rel >= 0x2533c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002533c0 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_224
*/
void sub_2533c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2533c0ULL || rel >= 0x253580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00253580 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_223(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x253580ULL || rel >= 0x253690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00253690 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_224(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x253690ULL || rel >= 0x2537a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002537a0 size=512 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_225
*/
void sub_2537a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2537a0ULL || rel >= 0x2539a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002539a0 size=416 callers=1 calls=2
   calls: PsArray_172, PxShapeRef_3
   ref: Shapes
*/
void Shapes_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2539a0ULL || rel >= 0x253b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00253b40 size=240 callers=1 calls=1
   calls: sub_225e30
   ref: bad__repx__name
*/
void bad__repx__name_225(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x253b40ULL || rel >= 0x253c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00253c30 size=1392 callers=1 calls=16
   calls: Materials, PsArray_171, PxHeightFieldGeometry_3, SimulationFilterData, bad__repx__name_14, child, sub_224ee0, sub_2250e0, sub_2252a0, sub_2255f0, sub_2257a0, sub_225950
   ... +4 more
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: PxShapeRef
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void PxShapeRef_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x253c30ULL || rel >= 0x2541a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002541a0 size=320 callers=3 calls=1
   calls: PsArray_172
   ref: __child
*/
void child(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2541a0ULL || rel >= 0x2542e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002542e0 size=2128 callers=1 calls=15
   calls: PsArray_171, PsArray_173, Radius, child, parseGeometry_10, parseGeometry_6, parseGeometry_7, parseGeometry_8, parseGeometry_9, sub_1174f0, sub_2217b0, sub_254b30
   ... +3 more
   ref: Geometry
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: PxPlaneGeometry
   ref: PxConvexMeshGeometry
   ref: parseGeometry
   ref: PxHeightFieldGeometry
   ref: PxTriangleMeshGeometry
   ref: PxSphereGeometry
*/
void PxHeightFieldGeometry_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2542e0ULL || rel >= 0x254b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00254b30 size=368 callers=2 calls=1
   calls: PsArray_172
*/
void sub_254b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x254b30ULL || rel >= 0x254ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00254ca0 size=320 callers=1 calls=3
   calls: HalfHeight, sub_221ad0, sub_221c80
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x254ca0ULL || rel >= 0x254de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00254de0 size=288 callers=1 calls=2
   calls: HalfExtents, sub_221f50
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x254de0ULL || rel >= 0x254f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00254f00 size=368 callers=1 calls=5
   calls: ConvexMesh, bad__repx__name_4, sub_222440, sub_2228c0, sub_222a80
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x254f00ULL || rel >= 0x255070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00255070 size=352 callers=1 calls=4
   calls: TriangleMesh, bad__repx__name_9, sub_223a80, sub_223ca0
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x255070ULL || rel >= 0x2551d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002551d0 size=384 callers=1 calls=6
   calls: HeightFieldFlags, bad__repx__name_11, sub_2245e0, sub_224790, sub_224940, sub_224af0
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2551d0ULL || rel >= 0x255350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00255350 size=368 callers=1 calls=14
   calls: Shapes_4, StabilizationThreshold, bad__repx__name_241, sub_2554c0, sub_2558b0, sub_256540, sub_257ea0, sub_258030, sub_2581c0, sub_258350, sub_2584e0, sub_2588e0
   ... +2 more
*/
void sub_255350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x255350ULL || rel >= 0x2554c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002554c0 size=1008 callers=1 calls=10
   calls: PsArray_174, bad__repx__name_232, bad__repx__name_235, bad__repx__name_236, bad__repx__name_237, sub_256c50, sub_256de0, sub_2571e0, sub_257370, sub_257500
*/
void sub_2554c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2554c0ULL || rel >= 0x2558b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002558b0 size=416 callers=1 calls=6
   calls: PsArray_174, bad__repx__name_226, bad__repx__name_227, bad__repx__name_228, sub_255cc0, sub_255e50
*/
void sub_2558b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2558b0ULL || rel >= 0x255a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00255a50 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_226(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x255a50ULL || rel >= 0x255cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00255cc0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_229
*/
void sub_255cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x255cc0ULL || rel >= 0x255e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00255e50 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_230
*/
void sub_255e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x255e50ULL || rel >= 0x255fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00255fe0 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_227(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x255fe0ULL || rel >= 0x256250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256250 size=272 callers=1 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_228(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256250ULL || rel >= 0x256360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256360 size=240 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_229(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256360ULL || rel >= 0x256450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256450 size=240 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256450ULL || rel >= 0x256540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256540 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_231
*/
void sub_256540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256540ULL || rel >= 0x2566d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002566d0 size=304 callers=1 calls=2
   calls: PsArray_174, PxShapeRef_4
   ref: Shapes
*/
void Shapes_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2566d0ULL || rel >= 0x256800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256800 size=272 callers=1 calls=2
   calls: sub_21b300, sub_22c710
   ref: bad__repx__name
*/
void bad__repx__name_231(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256800ULL || rel >= 0x256910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256910 size=832 callers=1 calls=7
   calls: PsArray_174, SimulationFilterData, bad__repx__name_44, sub_22cc70, sub_3007d0, sub_3007e0, sub_300c80
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h
   ref: PxShapeRef
   ref: PxShape
   ref: PxSerialization::serializeCollectionToXml: Reference "%s" could not be resolved.
*/
void PxShapeRef_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256910ULL || rel >= 0x256c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256c50 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_233
*/
void sub_256c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256c50ULL || rel >= 0x256de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256de0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_234
*/
void sub_256de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256de0ULL || rel >= 0x256f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00256f70 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_232(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x256f70ULL || rel >= 0x2571e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002571e0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_238
*/
void sub_2571e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2571e0ULL || rel >= 0x257370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257370 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_239
*/
void sub_257370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257370ULL || rel >= 0x257500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257500 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_240
*/
void sub_257500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257500ULL || rel >= 0x257690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257690 size=272 callers=1 calls=2
   calls: sub_21b300, sub_22c710
   ref: bad__repx__name
*/
void bad__repx__name_233(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257690ULL || rel >= 0x2577a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002577a0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_234(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2577a0ULL || rel >= 0x2578a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002578a0 size=256 callers=1 calls=1
   calls: sub_21b300
   ref: bad__repx__name
*/
void bad__repx__name_235(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2578a0ULL || rel >= 0x2579a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002579a0 size=256 callers=1 calls=1
   calls: sub_21b300
   ref: bad__repx__name
*/
void bad__repx__name_236(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2579a0ULL || rel >= 0x257aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257aa0 size=256 callers=1 calls=1
   calls: sub_21b300
   ref: bad__repx__name
*/
void bad__repx__name_237(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257aa0ULL || rel >= 0x257ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257ba0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_238(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257ba0ULL || rel >= 0x257ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257ca0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_239(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257ca0ULL || rel >= 0x257da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257da0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257da0ULL || rel >= 0x257ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00257ea0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_242
*/
void sub_257ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x257ea0ULL || rel >= 0x258030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258030 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_243
*/
void sub_258030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258030ULL || rel >= 0x2581c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002581c0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_244
*/
void sub_2581c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2581c0ULL || rel >= 0x258350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258350 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_245
*/
void sub_258350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258350ULL || rel >= 0x2584e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002584e0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_246
*/
void sub_2584e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2584e0ULL || rel >= 0x258670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258670 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_241(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258670ULL || rel >= 0x2588e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002588e0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_247
*/
void sub_2588e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2588e0ULL || rel >= 0x258a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258a70 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_249
*/
void sub_258a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258a70ULL || rel >= 0x258c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258c00 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_242(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258c00ULL || rel >= 0x258d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258d00 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_243(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258d00ULL || rel >= 0x258e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258e00 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_244(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258e00ULL || rel >= 0x258f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00258f00 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_245(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x258f00ULL || rel >= 0x259000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259000 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_246(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259000ULL || rel >= 0x259100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259100 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_247(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259100ULL || rel >= 0x259200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259200 size=896 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_248
*/
void sub_259200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259200ULL || rel >= 0x259580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259580 size=288 callers=2 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_248(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259580ULL || rel >= 0x2596a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002596a0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_249(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2596a0ULL || rel >= 0x2597a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002597a0 size=384 callers=1 calls=2
   calls: StabilizationThreshold, sub_259920
*/
void sub_2597a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2597a0ULL || rel >= 0x259920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259920 size=416 callers=1 calls=10
   calls: sub_259ac0, sub_25e030, sub_25e220, sub_25e410, sub_25e600, sub_25e7f0, sub_25e9e0, sub_25eba0, sub_25edb0, sub_25f0b0
*/
void sub_259920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259920ULL || rel >= 0x259ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259ac0 size=496 callers=1 calls=8
   calls: RigidBodyFlags, sub_259cb0, sub_259d70, sub_259f30, sub_25a0f0, sub_25a2f0, sub_25a4f0, sub_25abe0
*/
void sub_259ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259ac0ULL || rel >= 0x259cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259cb0 size=192 callers=1 calls=9
   calls: sub_25c830, sub_25ca30, sub_25cc20, sub_25ce20, sub_25d020, sub_25d220, sub_25d3e0, sub_25d5d0, sub_25d7c0
*/
void sub_259cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259cb0ULL || rel >= 0x259d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259d70 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_250
*/
void sub_259d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259d70ULL || rel >= 0x259f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00259f30 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_251
*/
void sub_259f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x259f30ULL || rel >= 0x25a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a0f0 size=512 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_252
*/
void sub_25a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a0f0ULL || rel >= 0x25a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a2f0 size=512 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_253
*/
void sub_25a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a2f0ULL || rel >= 0x25a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a4f0 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_254
*/
void sub_25a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a4f0ULL || rel >= 0x25a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a6b0 size=304 callers=1 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a6b0ULL || rel >= 0x25a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a7e0 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_251(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a7e0ULL || rel >= 0x25a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a8f0 size=240 callers=1 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_252(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a8f0ULL || rel >= 0x25a9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025a9e0 size=240 callers=1 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_253(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25a9e0ULL || rel >= 0x25aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025aad0 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_254(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25aad0ULL || rel >= 0x25abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025abe0 size=512 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_255
*/
void sub_25abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25abe0ULL || rel >= 0x25ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025ade0 size=528 callers=1 calls=2
   calls: PsArray_172, PxShapeRef_5
   ref: Shapes
   ref: eKINEMATIC
   ref: RigidBodyFlags
*/
void RigidBodyFlags(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25ade0ULL || rel >= 0x25aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025aff0 size=288 callers=1 calls=1
   calls: sub_225e30
   ref: bad__repx__name
*/
void bad__repx__name_255(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25aff0ULL || rel >= 0x25b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025b110 size=1392 callers=1 calls=16
   calls: Materials, PsArray_171, PxHeightFieldGeometry_4, SimulationFilterData, bad__repx__name_14, child_2, sub_224ee0, sub_2250e0, sub_2252a0, sub_2255f0, sub_2257a0, sub_225950
   ... +4 more
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: PxShapeRef
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void PxShapeRef_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25b110ULL || rel >= 0x25b680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025b680 size=320 callers=3 calls=1
   calls: PsArray_172
   ref: __child
*/
void child_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25b680ULL || rel >= 0x25b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025b7c0 size=2128 callers=1 calls=15
   calls: PsArray_171, PsArray_173, Radius, child_2, parseGeometry_11, parseGeometry_12, parseGeometry_13, parseGeometry_14, parseGeometry_15, sub_1174f0, sub_2217b0, sub_25c010
   ... +3 more
   ref: Geometry
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: PxPlaneGeometry
   ref: PxConvexMeshGeometry
   ref: parseGeometry
   ref: PxHeightFieldGeometry
   ref: PxTriangleMeshGeometry
   ref: PxSphereGeometry
*/
void PxHeightFieldGeometry_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25b7c0ULL || rel >= 0x25c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025c010 size=368 callers=2 calls=1
   calls: PsArray_172
*/
void sub_25c010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25c010ULL || rel >= 0x25c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025c180 size=320 callers=1 calls=3
   calls: HalfHeight, sub_221ad0, sub_221c80
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25c180ULL || rel >= 0x25c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025c2c0 size=288 callers=1 calls=2
   calls: HalfExtents, sub_221f50
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25c2c0ULL || rel >= 0x25c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025c3e0 size=368 callers=1 calls=5
   calls: ConvexMesh, bad__repx__name_4, sub_222440, sub_2228c0, sub_222a80
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25c3e0ULL || rel >= 0x25c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025c550 size=352 callers=1 calls=4
   calls: TriangleMesh, bad__repx__name_9, sub_223a80, sub_223ca0
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25c550ULL || rel >= 0x25c6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025c6b0 size=384 callers=1 calls=6
   calls: HeightFieldFlags, bad__repx__name_11, sub_2245e0, sub_224790, sub_224940, sub_224af0
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25c6b0ULL || rel >= 0x25c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025c830 size=512 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_256
*/
void sub_25c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25c830ULL || rel >= 0x25ca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025ca30 size=496 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_257
*/
void sub_25ca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25ca30ULL || rel >= 0x25cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025cc20 size=512 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_258
*/
void sub_25cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25cc20ULL || rel >= 0x25ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025ce20 size=512 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_259
*/
void sub_25ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25ce20ULL || rel >= 0x25d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d020 size=512 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_260
*/
void sub_25d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d020ULL || rel >= 0x25d220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d220 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_261
*/
void sub_25d220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d220ULL || rel >= 0x25d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d3e0 size=496 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_257
*/
void sub_25d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d3e0ULL || rel >= 0x25d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d5d0 size=496 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_257
*/
void sub_25d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d5d0ULL || rel >= 0x25d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d7c0 size=496 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_257
*/
void sub_25d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d7c0ULL || rel >= 0x25d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025d9b0 size=288 callers=1 calls=1
   calls: sub_225e30
   ref: bad__repx__name
*/
void bad__repx__name_256(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25d9b0ULL || rel >= 0x25dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025dad0 size=288 callers=11 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_257(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25dad0ULL || rel >= 0x25dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025dbf0 size=272 callers=1 calls=1
   calls: sub_222220
   ref: bad__repx__name
*/
void bad__repx__name_258(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25dbf0ULL || rel >= 0x25dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025dd00 size=272 callers=1 calls=1
   calls: sub_222220
   ref: bad__repx__name
*/
void bad__repx__name_259(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25dd00ULL || rel >= 0x25de10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025de10 size=272 callers=1 calls=1
   calls: sub_222220
   ref: bad__repx__name
*/
void bad__repx__name_260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25de10ULL || rel >= 0x25df20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025df20 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_261(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25df20ULL || rel >= 0x25e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e030 size=496 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_257
*/
void sub_25e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e030ULL || rel >= 0x25e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e220 size=496 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_257
*/
void sub_25e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e220ULL || rel >= 0x25e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e410 size=496 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_257
*/
void sub_25e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e410ULL || rel >= 0x25e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e600 size=496 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_257
*/
void sub_25e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e600ULL || rel >= 0x25e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e7f0 size=496 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_257
*/
void sub_25e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e7f0ULL || rel >= 0x25e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025e9e0 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_262
*/
void sub_25e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25e9e0ULL || rel >= 0x25eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025eba0 size=528 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_257
*/
void sub_25eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25eba0ULL || rel >= 0x25edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025edb0 size=496 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_257
*/
void sub_25edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25edb0ULL || rel >= 0x25efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025efa0 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_262(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25efa0ULL || rel >= 0x25f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f0b0 size=1200 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_263
*/
void sub_25f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f0b0ULL || rel >= 0x25f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f560 size=320 callers=2 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_263(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f560ULL || rel >= 0x25f6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f6a0 size=480 callers=1 calls=2
   calls: StabilizationThreshold_2, sub_25f880
*/
void sub_25f6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f6a0ULL || rel >= 0x25f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f880 size=208 callers=1 calls=10
   calls: bad__repx__name_264, bad__repx__name_265, bad__repx__name_266, bad__repx__name_267, sub_25fb80, sub_260190, sub_260340, sub_2604f0, sub_2606a0, sub_260b90
*/
void sub_25f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f880ULL || rel >= 0x25f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025f950 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_264(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25f950ULL || rel >= 0x25fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025fb80 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_268
*/
void sub_25fb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25fb80ULL || rel >= 0x25fd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025fd30 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_265(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25fd30ULL || rel >= 0x25ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0025ff60 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_266(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x25ff60ULL || rel >= 0x260190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260190 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_268
*/
void sub_260190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260190ULL || rel >= 0x260340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260340 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_268
*/
void sub_260340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260340ULL || rel >= 0x2604f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002604f0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_268
*/
void sub_2604f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2604f0ULL || rel >= 0x2606a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002606a0 size=416 callers=1 calls=2
   calls: Parent, PsArray_172
*/
void sub_2606a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2606a0ULL || rel >= 0x260840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260840 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_267(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260840ULL || rel >= 0x260a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260a70 size=288 callers=4 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_268(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260a70ULL || rel >= 0x260b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00260b90 size=1200 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_269
*/
void sub_260b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x260b90ULL || rel >= 0x261040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261040 size=272 callers=2 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_269(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261040ULL || rel >= 0x261150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261150 size=1728 callers=1 calls=7
   calls: ConcreteTypeName, PsArray_171, PsArray_172, PsHashInternals_2, sub_2207b0, sub_261810, sub_2658e0
   ref: Parent
   ref: __child
*/
void Parent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261150ULL || rel >= 0x261810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261810 size=496 callers=1 calls=8
   calls: Shapes_5, bad__repx__name_270, bad__repx__name_271, bad__repx__name_272, sub_261a00, sub_261cf0, sub_262310, sub_2626f0
*/
void sub_261810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261810ULL || rel >= 0x261a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261a00 size=192 callers=1 calls=9
   calls: sub_2642a0, sub_2644a0, sub_264650, sub_264810, sub_2649d0, sub_264b90, sub_264d50, sub_264f00, sub_2650b0
*/
void sub_261a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261a00ULL || rel >= 0x261ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261ac0 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261ac0ULL || rel >= 0x261cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261cf0 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_273
*/
void sub_261cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261cf0ULL || rel >= 0x261eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00261eb0 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_271(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x261eb0ULL || rel >= 0x2620e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002620e0 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_272(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2620e0ULL || rel >= 0x262310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00262310 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_274
*/
void sub_262310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x262310ULL || rel >= 0x2624d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002624d0 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_273(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2624d0ULL || rel >= 0x2625e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002625e0 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_274(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2625e0ULL || rel >= 0x2626f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002626f0 size=512 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_275
*/
void sub_2626f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2626f0ULL || rel >= 0x2628f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002628f0 size=416 callers=1 calls=2
   calls: PsArray_172, PxShapeRef_6
   ref: Shapes
*/
void Shapes_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2628f0ULL || rel >= 0x262a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00262a90 size=240 callers=1 calls=1
   calls: sub_225e30
   ref: bad__repx__name
*/
void bad__repx__name_275(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x262a90ULL || rel >= 0x262b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00262b80 size=1392 callers=1 calls=16
   calls: Materials, PsArray_171, PxHeightFieldGeometry_5, SimulationFilterData, bad__repx__name_14, child_3, sub_224ee0, sub_2250e0, sub_2252a0, sub_2255f0, sub_2257a0, sub_225950
   ... +4 more
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: PxShapeRef
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void PxShapeRef_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x262b80ULL || rel >= 0x2630f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002630f0 size=320 callers=3 calls=1
   calls: PsArray_172
   ref: __child
*/
void child_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2630f0ULL || rel >= 0x263230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263230 size=2128 callers=1 calls=15
   calls: PsArray_171, PsArray_173, Radius, child_3, parseGeometry_16, parseGeometry_17, parseGeometry_18, parseGeometry_19, parseGeometry_20, sub_1174f0, sub_2217b0, sub_263a80
   ... +3 more
   ref: Geometry
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: PxPlaneGeometry
   ref: PxConvexMeshGeometry
   ref: parseGeometry
   ref: PxHeightFieldGeometry
   ref: PxTriangleMeshGeometry
   ref: PxSphereGeometry
*/
void PxHeightFieldGeometry_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263230ULL || rel >= 0x263a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263a80 size=368 callers=2 calls=1
   calls: PsArray_172
*/
void sub_263a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263a80ULL || rel >= 0x263bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263bf0 size=320 callers=1 calls=3
   calls: HalfHeight, sub_221ad0, sub_221c80
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263bf0ULL || rel >= 0x263d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263d30 size=288 callers=1 calls=2
   calls: HalfExtents, sub_221f50
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263d30ULL || rel >= 0x263e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263e50 size=368 callers=1 calls=5
   calls: ConvexMesh, bad__repx__name_4, sub_222440, sub_2228c0, sub_222a80
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263e50ULL || rel >= 0x263fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00263fc0 size=352 callers=1 calls=4
   calls: TriangleMesh, bad__repx__name_9, sub_223a80, sub_223ca0
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x263fc0ULL || rel >= 0x264120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264120 size=384 callers=1 calls=6
   calls: HeightFieldFlags, bad__repx__name_11, sub_2245e0, sub_224790, sub_224940, sub_224af0
   ref: parseGeometry
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void parseGeometry_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264120ULL || rel >= 0x2642a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002642a0 size=512 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_276
*/
void sub_2642a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2642a0ULL || rel >= 0x2644a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002644a0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_277
*/
void sub_2644a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2644a0ULL || rel >= 0x264650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264650 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_278
*/
void sub_264650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264650ULL || rel >= 0x264810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264810 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_279
*/
void sub_264810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264810ULL || rel >= 0x2649d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002649d0 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_280
*/
void sub_2649d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2649d0ULL || rel >= 0x264b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264b90 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_281
*/
void sub_264b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264b90ULL || rel >= 0x264d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264d50 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_277
*/
void sub_264d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264d50ULL || rel >= 0x264f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00264f00 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_277
*/
void sub_264f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x264f00ULL || rel >= 0x2650b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002650b0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_277
*/
void sub_2650b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2650b0ULL || rel >= 0x265260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00265260 size=240 callers=1 calls=1
   calls: sub_225e30
   ref: bad__repx__name
*/
void bad__repx__name_276(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x265260ULL || rel >= 0x265350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00265350 size=288 callers=4 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_277(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x265350ULL || rel >= 0x265470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00265470 size=288 callers=1 calls=1
   calls: sub_222220
   ref: bad__repx__name
*/
void bad__repx__name_278(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x265470ULL || rel >= 0x265590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00265590 size=288 callers=1 calls=1
   calls: sub_222220
   ref: bad__repx__name
*/
void bad__repx__name_279(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x265590ULL || rel >= 0x2656b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002656b0 size=288 callers=1 calls=1
   calls: sub_222220
   ref: bad__repx__name
*/
void bad__repx__name_280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2656b0ULL || rel >= 0x2657d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002657d0 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_281(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2657d0ULL || rel >= 0x2658e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002658e0 size=720 callers=1 calls=3
   calls: PsArray_172, TwistLimitContactDistance, sub_265bb0
*/
void sub_2658e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2658e0ULL || rel >= 0x265bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00265bb0 size=320 callers=1 calls=17
   calls: bad__repx__name_282, bad__repx__name_283, sub_265cf0, sub_265ee0, sub_2660e0, sub_2662a0, sub_266460, sub_266620, sub_2667d0, sub_266980, sub_266b30, sub_266ce0
   ... +5 more
*/
void sub_265bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x265bb0ULL || rel >= 0x265cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00265cf0 size=496 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_284
*/
void sub_265cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x265cf0ULL || rel >= 0x265ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00265ee0 size=512 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_285
*/
void sub_265ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x265ee0ULL || rel >= 0x2660e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002660e0 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_286
*/
void sub_2660e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2660e0ULL || rel >= 0x2662a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002662a0 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_287
*/
void sub_2662a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2662a0ULL || rel >= 0x266460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00266460 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_288
*/
void sub_266460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x266460ULL || rel >= 0x266620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00266620 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_289
*/
void sub_266620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x266620ULL || rel >= 0x2667d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002667d0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_289
*/
void sub_2667d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2667d0ULL || rel >= 0x266980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00266980 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_289
*/
void sub_266980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x266980ULL || rel >= 0x266b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00266b30 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_289
*/
void sub_266b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x266b30ULL || rel >= 0x266ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00266ce0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_289
*/
void sub_266ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x266ce0ULL || rel >= 0x266e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00266e90 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_289
*/
void sub_266e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x266e90ULL || rel >= 0x267040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267040 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_289
*/
void sub_267040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267040ULL || rel >= 0x2671f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002671f0 size=544 callers=1 calls=2
   calls: PsArray_172, sub_301a70
   ref: bad__repx__name
*/
void bad__repx__name_282(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2671f0ULL || rel >= 0x267410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267410 size=544 callers=1 calls=2
   calls: PsArray_172, sub_301a70
   ref: bad__repx__name
*/
void bad__repx__name_283(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267410ULL || rel >= 0x267630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267630 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_289
*/
void sub_267630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267630ULL || rel >= 0x2677e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002677e0 size=240 callers=1 calls=1
   calls: sub_225e30
   ref: bad__repx__name
*/
void bad__repx__name_284(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2677e0ULL || rel >= 0x2678d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002678d0 size=240 callers=1 calls=1
   calls: sub_225e30
   ref: bad__repx__name
*/
void bad__repx__name_285(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2678d0ULL || rel >= 0x2679c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002679c0 size=288 callers=1 calls=1
   calls: sub_2233a0
   ref: bad__repx__name
*/
void bad__repx__name_286(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2679c0ULL || rel >= 0x267ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267ae0 size=288 callers=1 calls=1
   calls: sub_222220
   ref: bad__repx__name
*/
void bad__repx__name_287(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267ae0ULL || rel >= 0x267c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267c00 size=304 callers=1 calls=1
   calls: sub_301a70
   ref: bad__repx__name
   ref: eERROR
   ref: eTARGET
*/
void bad__repx__name_288(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267c00ULL || rel >= 0x267d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267d30 size=288 callers=16 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_289(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267d30ULL || rel >= 0x267e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00267e50 size=1264 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_289
*/
void sub_267e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x267e50ULL || rel >= 0x268340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00268340 size=1264 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_289
*/
void sub_268340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x268340ULL || rel >= 0x268830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00268830 size=656 callers=0 calls=3
   calls: NonTrackedAlloc_118, sub_3007d0, sub_3007e0
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: PxFixedJoint
   ref: actor1
   ref: Actors
   ref: actor0
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void PxFixedJoint_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x268830ULL || rel >= 0x268ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00268ac0 size=32 callers=0 calls=0
*/
void sub_268ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x268ac0ULL || rel >= 0x268ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00268ae0 size=304 callers=0 calls=4
   calls: RelativeLinearVelocity_3, sub_26c710, sub_26e3a0, sub_26e530
*/
void sub_268ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x268ae0ULL || rel >= 0x268c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00268c10 size=16 callers=0 calls=0
*/
void sub_268c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x268c10ULL || rel >= 0x268c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00268c20 size=656 callers=0 calls=3
   calls: NonTrackedAlloc_119, sub_3007d0, sub_3007e0
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: actor1
   ref: Actors
   ref: PxDistanceJoint
   ref: actor0
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void PxDistanceJoint_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x268c20ULL || rel >= 0x268eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00268eb0 size=32 callers=0 calls=0
*/
void sub_268eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x268eb0ULL || rel >= 0x268ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00268ed0 size=368 callers=0 calls=8
   calls: RelativeLinearVelocity_2, bad__repx__name_321, sub_271360, sub_272ff0, sub_273180, sub_273310, sub_2734a0, sub_273630
*/
void sub_268ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x268ed0ULL || rel >= 0x269040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269040 size=16 callers=0 calls=0
*/
void sub_269040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269040ULL || rel >= 0x269050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269050 size=656 callers=0 calls=3
   calls: ExtD6Joint, sub_3007d0, sub_3007e0
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: actor1
   ref: Actors
   ref: PxD6Joint
   ref: actor0
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void PxD6Joint_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269050ULL || rel >= 0x2692e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002692e0 size=32 callers=0 calls=0
*/
void sub_2692e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2692e0ULL || rel >= 0x269300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269300 size=272 callers=0 calls=3
   calls: RelativeLinearVelocity, sub_27b0e0, sub_27b1f0
*/
void sub_269300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269300ULL || rel >= 0x269410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269410 size=16 callers=0 calls=0
*/
void sub_269410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269410ULL || rel >= 0x269420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269420 size=656 callers=0 calls=3
   calls: NonTrackedAlloc_121, sub_3007d0, sub_3007e0
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: actor1
   ref: Actors
   ref: PxPrismaticJoint
   ref: actor0
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void PxPrismaticJoint_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269420ULL || rel >= 0x2696b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002696b0 size=32 callers=0 calls=0
*/
void sub_2696b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2696b0ULL || rel >= 0x2696d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002696d0 size=336 callers=0 calls=6
   calls: RelativeLinearVelocity_4, bad__repx__name_394, sub_285b10, sub_2877a0, sub_287c40, sub_287dd0
*/
void sub_2696d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2696d0ULL || rel >= 0x269820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269820 size=16 callers=0 calls=0
*/
void sub_269820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269820ULL || rel >= 0x269830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269830 size=656 callers=0 calls=3
   calls: NonTrackedAlloc_120, sub_3007d0, sub_3007e0
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: PxRevoluteJoint
   ref: actor1
   ref: Actors
   ref: actor0
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void PxRevoluteJoint_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269830ULL || rel >= 0x269ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269ac0 size=32 callers=0 calls=0
*/
void sub_269ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269ac0ULL || rel >= 0x269ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269ae0 size=384 callers=0 calls=9
   calls: RelativeLinearVelocity_5, bad__repx__name_419, sub_28c270, sub_28df00, sub_28e130, sub_28e2c0, sub_28e450, sub_28e850, sub_28e9e0
*/
void sub_269ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269ae0ULL || rel >= 0x269c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269c60 size=16 callers=0 calls=0
*/
void sub_269c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269c60ULL || rel >= 0x269c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269c70 size=656 callers=0 calls=3
   calls: NonTrackedAlloc_122, sub_3007d0, sub_3007e0
   ref: PxSphericalJoint
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: actor1
   ref: Actors
   ref: actor0
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void PxSphericalJoint_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269c70ULL || rel >= 0x269f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269f00 size=32 callers=0 calls=0
*/
void sub_269f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269f00ULL || rel >= 0x269f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00269f20 size=320 callers=0 calls=5
   calls: RelativeLinearVelocity_6, bad__repx__name_440, sub_2918a0, sub_293530, sub_2939d0
*/
void sub_269f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x269f20ULL || rel >= 0x26a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a060 size=16 callers=0 calls=0
*/
void sub_26a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a060ULL || rel >= 0x26a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a070 size=64 callers=0 calls=1
   calls: sub_300c80
*/
void sub_26a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a070ULL || rel >= 0x26a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a0b0 size=16 callers=0 calls=0
   ref: PxFixedJoint
*/
void PxFixedJoint_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a0b0ULL || rel >= 0x26a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a0c0 size=16 callers=0 calls=0
*/
void sub_26a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a0c0ULL || rel >= 0x26a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a0d0 size=80 callers=0 calls=1
   calls: sub_26a490
*/
void sub_26a0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a0d0ULL || rel >= 0x26a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a120 size=64 callers=0 calls=1
   calls: sub_300c80
*/
void sub_26a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a120ULL || rel >= 0x26a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a160 size=16 callers=0 calls=0
   ref: PxDistanceJoint
*/
void PxDistanceJoint_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a160ULL || rel >= 0x26a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a170 size=16 callers=0 calls=0
*/
void sub_26a170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a170ULL || rel >= 0x26a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a180 size=80 callers=0 calls=1
   calls: sub_26e8c0
*/
void sub_26a180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a180ULL || rel >= 0x26a1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a1d0 size=64 callers=0 calls=1
   calls: sub_300c80
*/
void sub_26a1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a1d0ULL || rel >= 0x26a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a210 size=16 callers=0 calls=0
   ref: PxD6Joint
*/
void PxD6Joint_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a210ULL || rel >= 0x26a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a220 size=16 callers=0 calls=0
*/
void sub_26a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a220ULL || rel >= 0x26a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a230 size=80 callers=0 calls=1
   calls: sub_273f30
*/
void sub_26a230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a230ULL || rel >= 0x26a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a280 size=64 callers=0 calls=1
   calls: sub_300c80
*/
void sub_26a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a280ULL || rel >= 0x26a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a2c0 size=16 callers=0 calls=0
   ref: PxPrismaticJoint
*/
void PxPrismaticJoint_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a2c0ULL || rel >= 0x26a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a2d0 size=16 callers=0 calls=0
*/
void sub_26a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a2d0ULL || rel >= 0x26a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a2e0 size=80 callers=0 calls=1
   calls: sub_282430
*/
void sub_26a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a2e0ULL || rel >= 0x26a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a330 size=64 callers=0 calls=1
   calls: sub_300c80
*/
void sub_26a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a330ULL || rel >= 0x26a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a370 size=16 callers=0 calls=0
   ref: PxRevoluteJoint
*/
void PxRevoluteJoint_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a370ULL || rel >= 0x26a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a380 size=16 callers=0 calls=0
*/
void sub_26a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a380ULL || rel >= 0x26a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a390 size=80 callers=0 calls=1
   calls: sub_289340
*/
void sub_26a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a390ULL || rel >= 0x26a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a3e0 size=64 callers=0 calls=1
   calls: sub_300c80
*/
void sub_26a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a3e0ULL || rel >= 0x26a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a420 size=16 callers=0 calls=0
   ref: PxSphericalJoint
*/
void PxSphericalJoint_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a420ULL || rel >= 0x26a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a430 size=16 callers=0 calls=0
*/
void sub_26a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a430ULL || rel >= 0x26a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a440 size=80 callers=0 calls=1
   calls: sub_28f070
*/
void sub_26a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a440ULL || rel >= 0x26a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a490 size=608 callers=1 calls=4
   calls: RelativeLinearVelocity_3, sub_26a6f0, sub_26c3b0, sub_26c560
*/
void sub_26a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a490ULL || rel >= 0x26a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a6f0 size=208 callers=1 calls=9
   calls: bad__repx__name_290, sub_26a7c0, sub_26a980, sub_26ab30, sub_26ace0, sub_26ae90, sub_26b270, sub_26b840, sub_26bc90
*/
void sub_26a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a6f0ULL || rel >= 0x26a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a7c0 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_294
*/
void sub_26a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a7c0ULL || rel >= 0x26a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026a980 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_293
*/
void sub_26a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26a980ULL || rel >= 0x26ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ab30 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_293
*/
void sub_26ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ab30ULL || rel >= 0x26ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ace0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_293
*/
void sub_26ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ace0ULL || rel >= 0x26ae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ae90 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_293
*/
void sub_26ae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ae90ULL || rel >= 0x26b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026b040 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26b040ULL || rel >= 0x26b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026b270 size=1168 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_291
*/
void sub_26b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26b270ULL || rel >= 0x26b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026b700 size=320 callers=2 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: bad__repx__name
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void bad__repx__name_291(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26b700ULL || rel >= 0x26b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026b840 size=848 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_292
*/
void sub_26b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26b840ULL || rel >= 0x26bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026bb90 size=256 callers=1 calls=1
   calls: sub_225e30
   ref: bad__repx__name
*/
void bad__repx__name_292(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26bb90ULL || rel >= 0x26bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026bc90 size=1264 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_293
*/
void sub_26bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26bc90ULL || rel >= 0x26c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c180 size=288 callers=10 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_293(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c180ULL || rel >= 0x26c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c2a0 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_294(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c2a0ULL || rel >= 0x26c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c3b0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_293
*/
void sub_26c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c3b0ULL || rel >= 0x26c560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c560 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_293
*/
void sub_26c560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c560ULL || rel >= 0x26c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c710 size=496 callers=1 calls=10
   calls: PsArray_174, bad__repx__name_295, bad__repx__name_303, sub_26cb70, sub_26cd00, sub_26ce90, sub_26d020, sub_26d1b0, sub_26d640, sub_26d9f0
*/
void sub_26c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c710ULL || rel >= 0x26c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026c900 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_295(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26c900ULL || rel >= 0x26cb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026cb70 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_299
*/
void sub_26cb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26cb70ULL || rel >= 0x26cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026cd00 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_300
*/
void sub_26cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26cd00ULL || rel >= 0x26ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ce90 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_301
*/
void sub_26ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ce90ULL || rel >= 0x26d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d020 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_302
*/
void sub_26d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d020ULL || rel >= 0x26d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d1b0 size=880 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_296
*/
void sub_26d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d1b0ULL || rel >= 0x26d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d520 size=288 callers=2 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxRigidActor
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h
   ref: bad__repx__name
   ref: PxSerialization::serializeCollectionToXml: Reference "%s" could not be resolved.
*/
void bad__repx__name_296(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d520ULL || rel >= 0x26d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d640 size=672 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_297
*/
void sub_26d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d640ULL || rel >= 0x26d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d8e0 size=272 callers=1 calls=2
   calls: sub_21b300, sub_22c710
   ref: bad__repx__name
*/
void bad__repx__name_297(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d8e0ULL || rel >= 0x26d9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026d9f0 size=896 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_298
*/
void sub_26d9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26d9f0ULL || rel >= 0x26dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026dd70 size=288 callers=2 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_298(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26dd70ULL || rel >= 0x26de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026de90 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_299(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26de90ULL || rel >= 0x26df90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026df90 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26df90ULL || rel >= 0x26e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e090 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_301(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e090ULL || rel >= 0x26e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e190 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_302(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e190ULL || rel >= 0x26e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e290 size=272 callers=1 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_303(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e290ULL || rel >= 0x26e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e3a0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_304
*/
void sub_26e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e3a0ULL || rel >= 0x26e530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e530 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_305
*/
void sub_26e530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e530ULL || rel >= 0x26e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e6c0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_304(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e6c0ULL || rel >= 0x26e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e7c0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_305(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e7c0ULL || rel >= 0x26e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026e8c0 size=672 callers=1 calls=8
   calls: RelativeLinearVelocity_2, sub_26eb60, sub_270820, sub_2709d0, sub_270b80, sub_270d30, sub_270ee0, sub_271090
*/
void sub_26e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26e8c0ULL || rel >= 0x26eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026eb60 size=208 callers=1 calls=9
   calls: bad__repx__name_306, sub_26ec30, sub_26edf0, sub_26efa0, sub_26f150, sub_26f300, sub_26f6e0, sub_26fcb0, sub_270100
*/
void sub_26eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26eb60ULL || rel >= 0x26ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026ec30 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_310
*/
void sub_26ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26ec30ULL || rel >= 0x26edf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026edf0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_309
*/
void sub_26edf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26edf0ULL || rel >= 0x26efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026efa0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_309
*/
void sub_26efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26efa0ULL || rel >= 0x26f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026f150 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_309
*/
void sub_26f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26f150ULL || rel >= 0x26f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026f300 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_309
*/
void sub_26f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26f300ULL || rel >= 0x26f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026f4b0 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_306(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26f4b0ULL || rel >= 0x26f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026f6e0 size=1168 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_307
*/
void sub_26f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26f6e0ULL || rel >= 0x26fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026fb70 size=320 callers=2 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: bad__repx__name
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void bad__repx__name_307(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26fb70ULL || rel >= 0x26fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0026fcb0 size=848 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_308
*/
void sub_26fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x26fcb0ULL || rel >= 0x270000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270000 size=256 callers=1 calls=1
   calls: sub_225e30
   ref: bad__repx__name
*/
void bad__repx__name_308(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270000ULL || rel >= 0x270100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270100 size=1264 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_309
*/
void sub_270100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270100ULL || rel >= 0x2705f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002705f0 size=288 callers=13 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_309(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2705f0ULL || rel >= 0x270710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270710 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270710ULL || rel >= 0x270820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270820 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_309
*/
void sub_270820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270820ULL || rel >= 0x2709d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002709d0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_309
*/
void sub_2709d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2709d0ULL || rel >= 0x270b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270b80 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_309
*/
void sub_270b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270b80ULL || rel >= 0x270d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270d30 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_309
*/
void sub_270d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270d30ULL || rel >= 0x270ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00270ee0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_309
*/
void sub_270ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x270ee0ULL || rel >= 0x271090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271090 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_311
*/
void sub_271090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271090ULL || rel >= 0x271250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271250 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_311(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271250ULL || rel >= 0x271360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271360 size=496 callers=1 calls=10
   calls: PsArray_174, bad__repx__name_312, bad__repx__name_320, sub_2717c0, sub_271950, sub_271ae0, sub_271c70, sub_271e00, sub_272290, sub_272640
*/
void sub_271360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271360ULL || rel >= 0x271550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271550 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_312(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271550ULL || rel >= 0x2717c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002717c0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_316
*/
void sub_2717c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2717c0ULL || rel >= 0x271950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271950 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_317
*/
void sub_271950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271950ULL || rel >= 0x271ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271ae0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_318
*/
void sub_271ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271ae0ULL || rel >= 0x271c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271c70 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_319
*/
void sub_271c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271c70ULL || rel >= 0x271e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00271e00 size=880 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_313
*/
void sub_271e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x271e00ULL || rel >= 0x272170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272170 size=288 callers=2 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxRigidActor
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h
   ref: bad__repx__name
   ref: PxSerialization::serializeCollectionToXml: Reference "%s" could not be resolved.
*/
void bad__repx__name_313(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272170ULL || rel >= 0x272290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272290 size=672 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_314
*/
void sub_272290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272290ULL || rel >= 0x272530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272530 size=272 callers=1 calls=2
   calls: sub_21b300, sub_22c710
   ref: bad__repx__name
*/
void bad__repx__name_314(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272530ULL || rel >= 0x272640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272640 size=896 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_315
*/
void sub_272640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272640ULL || rel >= 0x2729c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002729c0 size=288 callers=2 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_315(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2729c0ULL || rel >= 0x272ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272ae0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_316(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272ae0ULL || rel >= 0x272be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272be0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_317(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272be0ULL || rel >= 0x272ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272ce0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_318(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272ce0ULL || rel >= 0x272de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272de0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_319(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272de0ULL || rel >= 0x272ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272ee0 size=272 callers=1 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272ee0ULL || rel >= 0x272ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00272ff0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_322
*/
void sub_272ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x272ff0ULL || rel >= 0x273180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273180 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_323
*/
void sub_273180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273180ULL || rel >= 0x273310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273310 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_324
*/
void sub_273310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273310ULL || rel >= 0x2734a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002734a0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_325
*/
void sub_2734a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2734a0ULL || rel >= 0x273630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273630 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_326
*/
void sub_273630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273630ULL || rel >= 0x2737c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002737c0 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_321(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2737c0ULL || rel >= 0x273a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273a30 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_322(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273a30ULL || rel >= 0x273b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273b30 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_323(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273b30ULL || rel >= 0x273c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273c30 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_324(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273c30ULL || rel >= 0x273d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273d30 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_325(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273d30ULL || rel >= 0x273e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273e30 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_326(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273e30ULL || rel >= 0x273f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00273f30 size=576 callers=1 calls=3
   calls: RelativeLinearVelocity, sub_274170, sub_274280
*/
void sub_273f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x273f30ULL || rel >= 0x274170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274170 size=272 callers=1 calls=10
   calls: ForceLimit, bad__repx__name_332, sub_275f40, sub_276150, sub_276360, sub_276570, sub_276770, sub_276920, sub_279b60, sub_27aae0
*/
void sub_274170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274170ULL || rel >= 0x274280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274280 size=208 callers=1 calls=9
   calls: bad__repx__name_327, sub_274350, sub_274510, sub_2746c0, sub_274870, sub_274a20, sub_274e00, sub_2753d0, sub_275820
*/
void sub_274280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274280ULL || rel >= 0x274350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274350 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_331
*/
void sub_274350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274350ULL || rel >= 0x274510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274510 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_330
*/
void sub_274510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274510ULL || rel >= 0x2746c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002746c0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_330
*/
void sub_2746c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2746c0ULL || rel >= 0x274870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274870 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_330
*/
void sub_274870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274870ULL || rel >= 0x274a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274a20 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_330
*/
void sub_274a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274a20ULL || rel >= 0x274bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274bd0 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_327(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274bd0ULL || rel >= 0x274e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00274e00 size=1168 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_328
*/
void sub_274e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x274e00ULL || rel >= 0x275290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275290 size=320 callers=2 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: bad__repx__name
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void bad__repx__name_328(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275290ULL || rel >= 0x2753d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002753d0 size=848 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_329
*/
void sub_2753d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2753d0ULL || rel >= 0x275720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275720 size=256 callers=1 calls=1
   calls: sub_225e30
   ref: bad__repx__name
*/
void bad__repx__name_329(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275720ULL || rel >= 0x275820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275820 size=1264 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_330
*/
void sub_275820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275820ULL || rel >= 0x275d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275d10 size=288 callers=10 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275d10ULL || rel >= 0x275e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275e30 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_331(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275e30ULL || rel >= 0x275f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00275f40 size=528 callers=1 calls=3
   calls: ContactDistance, PsArray_172, sub_276f00
*/
void sub_275f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x275f40ULL || rel >= 0x276150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276150 size=528 callers=1 calls=3
   calls: ContactDistance_3, PsArray_172, sub_277ca0
*/
void sub_276150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276150ULL || rel >= 0x276360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276360 size=528 callers=1 calls=3
   calls: ContactDistance_4, PsArray_172, sub_278c00
*/
void sub_276360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276360ULL || rel >= 0x276570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276570 size=512 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_338
*/
void sub_276570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276570ULL || rel >= 0x276770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276770 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_330
*/
void sub_276770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276770ULL || rel >= 0x276920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276920 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_330
*/
void sub_276920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276920ULL || rel >= 0x276ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276ad0 size=1072 callers=1 calls=2
   calls: PsArray_172, sub_301a70
   ref: bad__repx__name
   ref: eLOCKED
   ref: eLIMITED
*/
void bad__repx__name_332(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276ad0ULL || rel >= 0x276f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00276f00 size=608 callers=1 calls=6
   calls: sub_277160, sub_277310, sub_2774c0, sub_277670, sub_277820, sub_277af0
*/
void sub_276f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x276f00ULL || rel >= 0x277160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277160 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_333
*/
void sub_277160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277160ULL || rel >= 0x277310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277310 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_333
*/
void sub_277310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277310ULL || rel >= 0x2774c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002774c0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_333
*/
void sub_2774c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2774c0ULL || rel >= 0x277670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277670 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_333
*/
void sub_277670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277670ULL || rel >= 0x277820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277820 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_333
*/
void sub_277820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277820ULL || rel >= 0x2779d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002779d0 size=288 callers=6 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_333(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2779d0ULL || rel >= 0x277af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277af0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_333
*/
void sub_277af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277af0ULL || rel >= 0x277ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277ca0 size=624 callers=1 calls=7
   calls: sub_277f10, sub_2780c0, sub_278270, sub_278420, sub_2785d0, sub_2788a0, sub_278a50
*/
void sub_277ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277ca0ULL || rel >= 0x277f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00277f10 size=432 callers=2 calls=2
   calls: PsArray_172, bad__repx__name_334
*/
void sub_277f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x277f10ULL || rel >= 0x2780c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002780c0 size=432 callers=2 calls=2
   calls: PsArray_172, bad__repx__name_334
*/
void sub_2780c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2780c0ULL || rel >= 0x278270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278270 size=432 callers=2 calls=2
   calls: PsArray_172, bad__repx__name_334
*/
void sub_278270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278270ULL || rel >= 0x278420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278420 size=432 callers=2 calls=2
   calls: PsArray_172, bad__repx__name_334
*/
void sub_278420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278420ULL || rel >= 0x2785d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002785d0 size=432 callers=2 calls=2
   calls: PsArray_172, bad__repx__name_334
*/
void sub_2785d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2785d0ULL || rel >= 0x278780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278780 size=288 callers=7 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_334(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278780ULL || rel >= 0x2788a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002788a0 size=432 callers=2 calls=2
   calls: PsArray_172, bad__repx__name_334
*/
void sub_2788a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2788a0ULL || rel >= 0x278a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278a50 size=432 callers=2 calls=2
   calls: PsArray_172, bad__repx__name_334
*/
void sub_278a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278a50ULL || rel >= 0x278c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278c00 size=624 callers=1 calls=7
   calls: sub_278e70, sub_279020, sub_2791d0, sub_279380, sub_279530, sub_279800, sub_2799b0
*/
void sub_278c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278c00ULL || rel >= 0x278e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00278e70 size=432 callers=2 calls=2
   calls: PsArray_172, bad__repx__name_335
*/
void sub_278e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x278e70ULL || rel >= 0x279020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279020 size=432 callers=2 calls=2
   calls: PsArray_172, bad__repx__name_335
*/
void sub_279020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279020ULL || rel >= 0x2791d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002791d0 size=432 callers=2 calls=2
   calls: PsArray_172, bad__repx__name_335
*/
void sub_2791d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2791d0ULL || rel >= 0x279380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279380 size=432 callers=2 calls=2
   calls: PsArray_172, bad__repx__name_335
*/
void sub_279380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279380ULL || rel >= 0x279530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279530 size=432 callers=2 calls=2
   calls: PsArray_172, bad__repx__name_335
*/
void sub_279530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279530ULL || rel >= 0x2796e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002796e0 size=288 callers=7 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_335(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2796e0ULL || rel >= 0x279800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279800 size=432 callers=2 calls=2
   calls: PsArray_172, bad__repx__name_335
*/
void sub_279800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279800ULL || rel >= 0x2799b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002799b0 size=432 callers=2 calls=2
   calls: PsArray_172, bad__repx__name_335
*/
void sub_2799b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2799b0ULL || rel >= 0x279b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279b60 size=848 callers=1 calls=2
   calls: PsArray_172, sub_279eb0
*/
void sub_279b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279b60ULL || rel >= 0x279eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00279eb0 size=576 callers=1 calls=4
   calls: sub_27a0f0, sub_27a2a0, sub_27a570, sub_27a720
*/
void sub_279eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x279eb0ULL || rel >= 0x27a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a0f0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_336
*/
void sub_27a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a0f0ULL || rel >= 0x27a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a2a0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_336
*/
void sub_27a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a2a0ULL || rel >= 0x27a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a450 size=288 callers=3 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_336(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a450ULL || rel >= 0x27a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a570 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_336
*/
void sub_27a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a570ULL || rel >= 0x27a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a720 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_337
*/
void sub_27a720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a720ULL || rel >= 0x27a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a8e0 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_337(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a8e0ULL || rel >= 0x27a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027a9f0 size=240 callers=1 calls=1
   calls: sub_225e30
   ref: bad__repx__name
*/
void bad__repx__name_338(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27a9f0ULL || rel >= 0x27aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027aae0 size=1216 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_339
*/
void sub_27aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27aae0ULL || rel >= 0x27afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027afa0 size=320 callers=2 calls=1
   calls: sub_222220
   ref: bad__repx__name
*/
void bad__repx__name_339(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27afa0ULL || rel >= 0x27b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027b0e0 size=272 callers=1 calls=10
   calls: ForceLimit, bad__repx__name_349, bad__repx__name_375, sub_27ce80, sub_27d0a0, sub_27d2d0, sub_27d500, sub_27d690, sub_27d820, sub_280ff0
*/
void sub_27b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27b0e0ULL || rel >= 0x27b1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027b1f0 size=496 callers=1 calls=10
   calls: PsArray_174, bad__repx__name_340, bad__repx__name_348, sub_27b650, sub_27b7e0, sub_27b970, sub_27bb00, sub_27bc90, sub_27c120, sub_27c4d0
*/
void sub_27b1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27b1f0ULL || rel >= 0x27b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027b3e0 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27b3e0ULL || rel >= 0x27b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027b650 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_344
*/
void sub_27b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27b650ULL || rel >= 0x27b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027b7e0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_345
*/
void sub_27b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27b7e0ULL || rel >= 0x27b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027b970 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_346
*/
void sub_27b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27b970ULL || rel >= 0x27bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027bb00 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_347
*/
void sub_27bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27bb00ULL || rel >= 0x27bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027bc90 size=880 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_341
*/
void sub_27bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27bc90ULL || rel >= 0x27c000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c000 size=288 callers=2 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxRigidActor
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorWriter.h
   ref: bad__repx__name
   ref: PxSerialization::serializeCollectionToXml: Reference "%s" could not be resolved.
*/
void bad__repx__name_341(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c000ULL || rel >= 0x27c120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c120 size=672 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_342
*/
void sub_27c120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c120ULL || rel >= 0x27c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c3c0 size=272 callers=1 calls=2
   calls: sub_21b300, sub_22c710
   ref: bad__repx__name
*/
void bad__repx__name_342(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c3c0ULL || rel >= 0x27c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c4d0 size=896 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_343
*/
void sub_27c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c4d0ULL || rel >= 0x27c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c850 size=288 callers=2 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_343(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c850ULL || rel >= 0x27c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027c970 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_344(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27c970ULL || rel >= 0x27ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ca70 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_345(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ca70ULL || rel >= 0x27cb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027cb70 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_346(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27cb70ULL || rel >= 0x27cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027cc70 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_347(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27cc70ULL || rel >= 0x27cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027cd70 size=272 callers=1 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_348(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27cd70ULL || rel >= 0x27ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ce80 size=544 callers=1 calls=8
   calls: ContactDistance, PsArray_174, sub_27dce0, sub_27de60, sub_27dff0, sub_27e180, sub_27e310, sub_27e9a0
*/
void sub_27ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ce80ULL || rel >= 0x27d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d0a0 size=560 callers=1 calls=9
   calls: ContactDistance_3, PsArray_174, sub_27ec30, sub_27edb0, sub_27ef40, sub_27f0d0, sub_27f260, sub_27f8f0, sub_27fa80
*/
void sub_27d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d0a0ULL || rel >= 0x27d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d2d0 size=560 callers=1 calls=9
   calls: ContactDistance_4, PsArray_174, sub_27fe10, sub_27ff90, sub_280120, sub_2802b0, sub_280440, sub_280ad0, sub_280c60
*/
void sub_27d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d2d0ULL || rel >= 0x27d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d500 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_374
*/
void sub_27d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d500ULL || rel >= 0x27d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d690 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_376
*/
void sub_27d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d690ULL || rel >= 0x27d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d820 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_377
*/
void sub_27d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d820ULL || rel >= 0x27d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027d9b0 size=816 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
   ref: eLOCKED
   ref: eLIMITED
*/
void bad__repx__name_349(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27d9b0ULL || rel >= 0x27dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027dce0 size=384 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_350
*/
void sub_27dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27dce0ULL || rel >= 0x27de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027de60 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_351
*/
void sub_27de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27de60ULL || rel >= 0x27dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027dff0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_352
*/
void sub_27dff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27dff0ULL || rel >= 0x27e180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e180 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_353
*/
void sub_27e180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e180ULL || rel >= 0x27e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e310 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_354
*/
void sub_27e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e310ULL || rel >= 0x27e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e4a0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e4a0ULL || rel >= 0x27e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e5a0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_351(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e5a0ULL || rel >= 0x27e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e6a0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_352(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e6a0ULL || rel >= 0x27e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e7a0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_353(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e7a0ULL || rel >= 0x27e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e8a0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_354(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e8a0ULL || rel >= 0x27e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027e9a0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_355
*/
void sub_27e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27e9a0ULL || rel >= 0x27eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027eb30 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_355(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27eb30ULL || rel >= 0x27ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ec30 size=384 callers=2 calls=2
   calls: PsArray_174, bad__repx__name_356
*/
void sub_27ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ec30ULL || rel >= 0x27edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027edb0 size=400 callers=2 calls=2
   calls: PsArray_174, bad__repx__name_357
*/
void sub_27edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27edb0ULL || rel >= 0x27ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ef40 size=400 callers=2 calls=2
   calls: PsArray_174, bad__repx__name_358
*/
void sub_27ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ef40ULL || rel >= 0x27f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027f0d0 size=400 callers=2 calls=2
   calls: PsArray_174, bad__repx__name_359
*/
void sub_27f0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27f0d0ULL || rel >= 0x27f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027f260 size=400 callers=2 calls=2
   calls: PsArray_174, bad__repx__name_360
*/
void sub_27f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27f260ULL || rel >= 0x27f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027f3f0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_356(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27f3f0ULL || rel >= 0x27f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027f4f0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_357(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27f4f0ULL || rel >= 0x27f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027f5f0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_358(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27f5f0ULL || rel >= 0x27f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027f6f0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_359(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27f6f0ULL || rel >= 0x27f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027f7f0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27f7f0ULL || rel >= 0x27f8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027f8f0 size=400 callers=2 calls=2
   calls: PsArray_174, bad__repx__name_361
*/
void sub_27f8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27f8f0ULL || rel >= 0x27fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027fa80 size=400 callers=2 calls=2
   calls: PsArray_174, bad__repx__name_362
*/
void sub_27fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27fa80ULL || rel >= 0x27fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027fc10 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_361(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27fc10ULL || rel >= 0x27fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027fd10 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_362(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27fd10ULL || rel >= 0x27fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027fe10 size=384 callers=2 calls=2
   calls: PsArray_174, bad__repx__name_363
*/
void sub_27fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27fe10ULL || rel >= 0x27ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0027ff90 size=400 callers=2 calls=2
   calls: PsArray_174, bad__repx__name_364
*/
void sub_27ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x27ff90ULL || rel >= 0x280120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280120 size=400 callers=2 calls=2
   calls: PsArray_174, bad__repx__name_365
*/
void sub_280120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280120ULL || rel >= 0x2802b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002802b0 size=400 callers=2 calls=2
   calls: PsArray_174, bad__repx__name_366
*/
void sub_2802b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2802b0ULL || rel >= 0x280440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280440 size=400 callers=2 calls=2
   calls: PsArray_174, bad__repx__name_367
*/
void sub_280440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280440ULL || rel >= 0x2805d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002805d0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_363(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2805d0ULL || rel >= 0x2806d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002806d0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_364(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2806d0ULL || rel >= 0x2807d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002807d0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_365(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2807d0ULL || rel >= 0x2808d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002808d0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_366(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2808d0ULL || rel >= 0x2809d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002809d0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_367(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2809d0ULL || rel >= 0x280ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280ad0 size=400 callers=2 calls=2
   calls: PsArray_174, bad__repx__name_368
*/
void sub_280ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280ad0ULL || rel >= 0x280c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280c60 size=400 callers=2 calls=2
   calls: PsArray_174, bad__repx__name_369
*/
void sub_280c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280c60ULL || rel >= 0x280df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280df0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_368(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280df0ULL || rel >= 0x280ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280ef0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_369(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280ef0ULL || rel >= 0x280ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00280ff0 size=736 callers=1 calls=6
   calls: ForceLimit, PsArray_174, bad__repx__name_372, sub_2812d0, sub_281450, sub_2817e0
*/
void sub_280ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x280ff0ULL || rel >= 0x2812d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002812d0 size=384 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_370
*/
void sub_2812d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2812d0ULL || rel >= 0x281450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00281450 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_371
*/
void sub_281450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x281450ULL || rel >= 0x2815e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002815e0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2815e0ULL || rel >= 0x2816e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002816e0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_371(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2816e0ULL || rel >= 0x2817e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002817e0 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_373
*/
void sub_2817e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2817e0ULL || rel >= 0x281970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00281970 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_372(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x281970ULL || rel >= 0x281be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00281be0 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_373(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x281be0ULL || rel >= 0x281ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00281ce0 size=272 callers=1 calls=2
   calls: sub_21b300, sub_22c710
   ref: bad__repx__name
*/
void bad__repx__name_374(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x281ce0ULL || rel >= 0x281df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00281df0 size=1088 callers=1 calls=2
   calls: PsArray_174, sub_21b300
   ref: bad__repx__name
*/
void bad__repx__name_375(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x281df0ULL || rel >= 0x282230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00282230 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_376(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x282230ULL || rel >= 0x282330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00282330 size=256 callers=1 calls=1
   calls: sub_301990
   ref: bad__repx__name
*/
void bad__repx__name_377(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x282330ULL || rel >= 0x282430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00282430 size=640 callers=1 calls=6
   calls: RelativeLinearVelocity_4, sub_2826b0, sub_284370, sub_284580, sub_284740, sub_2848f0
*/
void sub_282430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x282430ULL || rel >= 0x2826b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002826b0 size=208 callers=1 calls=9
   calls: bad__repx__name_378, sub_282780, sub_282940, sub_282af0, sub_282ca0, sub_282e50, sub_283230, sub_283800, sub_283c50
*/
void sub_2826b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2826b0ULL || rel >= 0x282780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00282780 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_382
*/
void sub_282780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x282780ULL || rel >= 0x282940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00282940 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_381
*/
void sub_282940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x282940ULL || rel >= 0x282af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00282af0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_381
*/
void sub_282af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x282af0ULL || rel >= 0x282ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00282ca0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_381
*/
void sub_282ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x282ca0ULL || rel >= 0x282e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00282e50 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_381
*/
void sub_282e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x282e50ULL || rel >= 0x283000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00283000 size=560 callers=1 calls=1
   calls: PsArray_172
   ref: bad__repx__name
*/
void bad__repx__name_378(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x283000ULL || rel >= 0x283230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00283230 size=1168 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_379
*/
void sub_283230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x283230ULL || rel >= 0x2836c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002836c0 size=320 callers=2 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalR
   ref: bad__repx__name
   ref: ./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h
*/
void bad__repx__name_379(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2836c0ULL || rel >= 0x283800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00283800 size=848 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_380
*/
void sub_283800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x283800ULL || rel >= 0x283b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00283b50 size=256 callers=1 calls=1
   calls: sub_225e30
   ref: bad__repx__name
*/
void bad__repx__name_380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x283b50ULL || rel >= 0x283c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00283c50 size=1264 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_381
*/
void sub_283c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x283c50ULL || rel >= 0x284140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00284140 size=288 callers=10 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_381(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x284140ULL || rel >= 0x284260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00284260 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_382(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x284260ULL || rel >= 0x284370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00284370 size=528 callers=1 calls=3
   calls: ContactDistance_2, PsArray_172, sub_284aa0
*/
void sub_284370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x284370ULL || rel >= 0x284580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00284580 size=448 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_384
*/
void sub_284580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x284580ULL || rel >= 0x284740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00284740 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_381
*/
void sub_284740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x284740ULL || rel >= 0x2848f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002848f0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_381
*/
void sub_2848f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2848f0ULL || rel >= 0x284aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00284aa0 size=624 callers=1 calls=7
   calls: sub_284d10, sub_284ec0, sub_285070, sub_285220, sub_2853d0, sub_2856a0, sub_285850
*/
void sub_284aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x284aa0ULL || rel >= 0x284d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00284d10 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_383
*/
void sub_284d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x284d10ULL || rel >= 0x284ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00284ec0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_383
*/
void sub_284ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x284ec0ULL || rel >= 0x285070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00285070 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_383
*/
void sub_285070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x285070ULL || rel >= 0x285220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00285220 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_383
*/
void sub_285220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x285220ULL || rel >= 0x2853d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002853d0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_383
*/
void sub_2853d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2853d0ULL || rel >= 0x285580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00285580 size=288 callers=7 calls=0
   ref: bad__repx__name
*/
void bad__repx__name_383(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x285580ULL || rel >= 0x2856a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002856a0 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_383
*/
void sub_2856a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2856a0ULL || rel >= 0x285850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00285850 size=432 callers=1 calls=2
   calls: PsArray_172, bad__repx__name_383
*/
void sub_285850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x285850ULL || rel >= 0x285a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00285a00 size=272 callers=1 calls=1
   calls: sub_2238d0
   ref: bad__repx__name
*/
void bad__repx__name_384(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x285a00ULL || rel >= 0x285b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00285b10 size=496 callers=1 calls=10
   calls: PsArray_174, bad__repx__name_385, bad__repx__name_393, sub_285f70, sub_286100, sub_286290, sub_286420, sub_2865b0, sub_286a40, sub_286df0
*/
void sub_285b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x285b10ULL || rel >= 0x285d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00285d00 size=624 callers=1 calls=1
   calls: PsArray_174
   ref: bad__repx__name
*/
void bad__repx__name_385(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x285d00ULL || rel >= 0x285f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00285f70 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_389
*/
void sub_285f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x285f70ULL || rel >= 0x286100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00286100 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_390
*/
void sub_286100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x286100ULL || rel >= 0x286290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00286290 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_391
*/
void sub_286290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x286290ULL || rel >= 0x286420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00286420 size=400 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_392
*/
void sub_286420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x286420ULL || rel >= 0x2865b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002865b0 size=880 callers=1 calls=2
   calls: PsArray_174, bad__repx__name_386
*/
void sub_2865b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2865b0ULL || rel >= 0x286920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

