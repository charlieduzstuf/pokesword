/* subsdk0 functions 002c6130..00355580 (19 of 20). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 002c6130 size=416 callers=1 calls=0
*/
void sub_2c6130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6130ULL || rel >= 0x2c62d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c62d0 size=1088 callers=1 calls=0
*/
void sub_2c62d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c62d0ULL || rel >= 0x2c6710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6710 size=288 callers=1 calls=0
*/
void sub_2c6710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6710ULL || rel >= 0x2c6830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6830 size=416 callers=1 calls=0
*/
void sub_2c6830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6830ULL || rel >= 0x2c69d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c69d0 size=1136 callers=2 calls=0
*/
void sub_2c69d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c69d0ULL || rel >= 0x2c6e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6e40 size=400 callers=0 calls=2
   calls: NVMMLITE_TVMRDEC_4, sub_2c5b30
   ref: NVMMLITE_TVMRDEC
   ref: cbSliceDecode
   ref: %lld: %s, <%s:%d> NVMMLITE: %s: first_flag = %d  last_flag=%d  ctb_count=%d bs_len =%d
*/
void NVMMLITE_TVMRDEC_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6e40ULL || rel >= 0x2c6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6fd0 size=4192 callers=0 calls=16
   calls: Error_detected_0x_x, FrameNo_2, GetFeedbackInfoForMetadata, GetMotionVectorForMetadata, NVMMLITE_TVMRDEC_4, sub_2c5480, sub_2c5b30, sub_2c5dc0, sub_2c5ef0, sub_2c6000, sub_2c6130, sub_2c62d0
   ... +4 more
   ref: %lld: %s, <%s:%d> TVMRVideoDecoderRender failed!
   ref: %lld: %s, <%s:%d> GetSliceHdr failed!
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  ++
   ref: %lld: %s, <%s:%d> unsupported codec (%d)!
   ref: %lld: %s, <%s:%d>  TVMRVideoDecoderRender ++
   ref: cbDecodePicture
   ref: %lld: %s, <%s:%d>  --
*/
void NVMMLITE_TVMRDEC_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6fd0ULL || rel >= 0x2c8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8030 size=304 callers=3 calls=0
   ref: Error detected = 0x%x
*/
void Error_detected_0x_x(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8030ULL || rel >= 0x2c8160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8160 size=304 callers=1 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> %s:: No codec specific information to be reported for this codec.
   ref: %lld: %s, <%s:%d> %s::VP8-metadata updated GoldenRef = %d AltRef= %d PrevRef = %d 
   ref: GetFeedbackInfoForMetadata
   ref: %lld: %s, <%s:%d> %s:: H264: No codec specific information.
*/
void GetFeedbackInfoForMetadata(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8160ULL || rel >= 0x2c8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8290 size=720 callers=1 calls=0
   ref: GetMotionVectorForMetadata
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> No motion vector to be reported for this codec.
*/
void GetMotionVectorForMetadata(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8290ULL || rel >= 0x2c8560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8560 size=2016 callers=8 calls=3
   calls: NVMMLITE_TVMRDEC_4, sub_2c8d40, sub_2c90b0
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  ++
   ref: %lld: %s, <%s:%d>  SemaRelease: NumEntriesOutput = %d 
   ref: %lld: %s, <%s:%d>  --
   ref: GetNewFrameBuffer
   ref: %lld: %s, <%s:%d>  EnQ back LastReleased BufferID = %d 
   ref: %lld: %s, <%s:%d> NumEntriesOutput = %d, cctx->backupOutBufferAvailable = %d 
   ref: %lld: %s, <%s:%d>  SemaWait: NumEntriesOutput = %d 
*/
void GetNewFrameBuffer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8560ULL || rel >= 0x2c8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8d40 size=880 callers=2 calls=0
*/
void sub_2c8d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8d40ULL || rel >= 0x2c90b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c90b0 size=1344 callers=2 calls=0
*/
void sub_2c90b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c90b0ULL || rel >= 0x2c95f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c95f0 size=576 callers=2 calls=0
*/
void sub_2c95f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c95f0ULL || rel >= 0x2c9830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c9830 size=5584 callers=0 calls=4
   calls: GetNewFrameBuffer, NVMMLITE_TVMRDEC_4, NVMMLITE_TVMRDEC_7, sub_2c95f0
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  ++
   ref: %lld: %s, <%s:%d> TVMR: OUT_TS: llPTS = %lld, TSDiff = %lld 
   ref: %lld: %s, <%s:%d>  Display Pic Num = %d 
   ref: %lld: %s, <%s:%d> 24P content. Extra Frame Addition or TS adjustment Not Required
   ref: %lld: %s, <%s:%d>  --
   ref: %lld: %s, <%s:%d> PULLDOWN: cctx->PullDownFrameNumber = %d, Cadence = %d,  OUT TS : %lld 
   ref: cbDisplayPicture
*/
void cbDisplayPicture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c9830ULL || rel >= 0x2cae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cae00 size=1168 callers=8 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: %lld: %s, <%s:%d> Unsuccessful in pSrcDdk2dSurface with Err = %d 
   ref: CopyFrame
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> Unsuccessful in pDstDdk2dSurface with Err = %d 
*/
void NVMMLITE_TVMRDEC_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cae00ULL || rel >= 0x2cb290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cb290 size=16 callers=0 calls=0
*/
void sub_2cb290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cb290ULL || rel >= 0x2cb2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cb2a0 size=3488 callers=0 calls=9
   calls: InterlaceBufferAlloc, NVMMLITE_TVMRDEC_4, VideoDFS_Mjolnir, VideoDFS_videoconf, sub_2c8d40, sub_2c90b0, sub_2cc2c0, sub_318a30, sub_318d10
   ref: %lld: %s, <%s:%d>  i = %d, AllocPicNum = %d 
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: --
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  NVDEC clock = %d KHz 
   ref: %lld: %s, <%s:%d>  ++
   ref: %lld: %s, <%s:%d>  SemaRelease: NumEntriesOutput = %d 
   ref: %lld: %s, <%s:%d> DRCSema Wait Done
   ref: %lld: %s, <%s:%d> --
*/
void cbAllocPictureBuffer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cb2a0ULL || rel >= 0x2cc040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cc040 size=640 callers=1 calls=1
   calls: sub_318d10
   ref: VideoDFS_Mjolnir
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  NvRmChannelSetModuleClockRate failed [0x%x]
   ref: %lld: %s, <%s:%d>  NvAvpSetClockRate failed [0x%x]
*/
void VideoDFS_Mjolnir(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cc040ULL || rel >= 0x2cc2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cc2c0 size=720 callers=2 calls=0
*/
void sub_2cc2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cc2c0ULL || rel >= 0x2cc590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cc590 size=384 callers=1 calls=3
   calls: NVMMLITE_TVMRDEC_4, sub_318a30, sub_318d10
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> (ChipID = %d) bStepupClock = %d: Clocks set : [NVDEC]%d [EMC]%d
   ref: VideoDFS_videoconf
*/
void VideoDFS_videoconf(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cc590ULL || rel >= 0x2cc710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cc710 size=720 callers=0 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  ++
   ref: %lld: %s, <%s:%d>  Refs = %d, status = %d
   ref: %lld: %s, <%s:%d>  Inserting nvmm buffer back to TVMR Output queue : Count = %d 
   ref: cbRelease
   ref: %lld: %s, <%s:%d>  --
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: Wait for Decode status Read done 
*/
void NVMMLITE_TVMRDEC_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cc710ULL || rel >= 0x2cc9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cc9e0 size=32 callers=0 calls=0
*/
void sub_2cc9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cc9e0ULL || rel >= 0x2cca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cca00 size=368 callers=0 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  ++
   ref: %lld: %s, <%s:%d> unsupported codec (%d)!
   ref: %lld: %s, <%s:%d>  --
   ref: %lld: %s, <%s:%d> TVMRVideoDecrypterCreate failed ! 
   ref: cbCreateDecrypter
*/
void cbCreateDecrypter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cca00ULL || rel >= 0x2ccb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ccb70 size=624 callers=0 calls=2
   calls: NVMMLITE_TVMRDEC_4, sub_2c6710
   ref: %lld: %s, <%s:%d> DecryptHdr failed 
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  ++
   ref: %lld: %s, <%s:%d> unsupported codec (%d)!
   ref: %lld: %s, <%s:%d>  --
   ref: cbDecryptHdr
*/
void NVMMLITE_TVMRDEC_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ccb70ULL || rel >= 0x2ccde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ccde0 size=112 callers=0 calls=0
*/
void sub_2ccde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ccde0ULL || rel >= 0x2cce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cce50 size=736 callers=0 calls=3
   calls: NVMMLITE_TVMRDEC_4, sub_2c6830, sub_2c69d0
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  ++
   ref: %lld: %s, <%s:%d> cbGetHdr: unsupported codec (%d)!
   ref: %lld: %s, <%s:%d>  --
   ref: cbGetHdr
   ref: %lld: %s, <%s:%d> GetSliceHdr failed! 
*/
void NVMMLITE_TVMRDEC_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cce50ULL || rel >= 0x2cd130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cd130 size=448 callers=0 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> cbcbGetClearData: unsupported codec (%d)!
   ref: %lld: %s, <%s:%d> GetClearData failed!
   ref: cbGetClearHdr
*/
void NVMMLITE_TVMRDEC_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cd130ULL || rel >= 0x2cd2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cd2f0 size=608 callers=0 calls=2
   calls: NVMMLITE_TVMRDEC_4, sub_2c69d0
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> unsupported codec (%d)!
   ref: %lld: %s, <%s:%d> TVMRVideoUpdateHeader failed - Error = 0x%X
   ref: cbUpdateHdr
*/
void NVMMLITE_TVMRDEC_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cd2f0ULL || rel >= 0x2cd550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cd550 size=848 callers=0 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  %d
   ref: %lld: %s, <%s:%d>  ~~~~~~~~~~~~~~~~~~~~~~~~~~
   ref: cbGetDpbInfoForMetadata
   ref: %lld: %s, <%s:%d>  =%d=> %d %d %d %d %d %d %d
   ref: %lld: %s, <%s:%d>  => %d %d %d %d %d %d
*/
void cbGetDpbInfoForMetadata(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cd550ULL || rel >= 0x2cd8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cd8a0 size=400 callers=1 calls=0
*/
void sub_2cd8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cd8a0ULL || rel >= 0x2cda30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cda30 size=8096 callers=0 calls=2
   calls: NVMMLITE_TVMRDEC_4, sub_2cd8a0
   ref: %lld: %s, <%s:%d> VC1 Simple/Main profile clip 
   ref: %lld: %s, <%s:%d> Consume the extra signalling for EOS 
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  Waiting on InputBufferSema
   ref: TVMRBufferProcessing
   ref: %lld: %s, <%s:%d>  video_parser_parse 
   ref: %lld: %s, <%s:%d> Processing of EOS 
   ref: %lld: %s, <%s:%d>  Return input buffer : BufferID = %d 
*/
void TVMRBufferProcessing(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cda30ULL || rel >= 0x2cf9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cf9d0 size=928 callers=2 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: %lld: %s, <%s:%d> Unsuccessful in pSrcDdk2dSurface with Err = %d 
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> Unsuccessful in pDstDdk2dSurface with Err = %d 
   ref: TVMRStitchMvcViews
   ref: %lld: %s, <%s:%d> Could not get access to handle for 2d engine 
*/
void TVMRStitchMvcViews(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cf9d0ULL || rel >= 0x2cfd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cfd70 size=576 callers=1 calls=2
   calls: NVMMLITE_TVMRDEC_4, TVMRStitchMvcViews
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> Filled output buffer : FrameSent = %d, BufferID = %d 
   ref: %lld: %s, <%s:%d> OUT TS : %lld 
   ref: TVMRCombine_MVCViews
*/
void TVMRCombine_MVCViews(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cfd70ULL || rel >= 0x2cffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cffb0 size=2112 callers=1 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: %lld: %s, <%s:%d> Unsuccessful in pSrcDdk2dSurface with Err = %d 
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  TVMRConvertToPitchLinear End
   ref: %lld: %s, <%s:%d> Unsuccessful in pDstDdk2dSurface with Err = %d 
   ref: %lld: %s, <%s:%d>  TVMRConvertToPitchLinear Start
   ref: TVMRConvertToPitchLinear
   ref: %lld: %s, <%s:%d> Could not get access to handle for 2d engine 
*/
void TVMRConvertToPitchLinear(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cffb0ULL || rel >= 0x2d07f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d07f0 size=592 callers=0 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: %lld: %s, <%s:%d>  TVMRVPRFloorSizeSettingThread Started
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> Closing TVMRVPRFloorSizeSettingThread -------------
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: Re-Setting VPR Floor Size Done
   ref: TVMRVPRFloorSizeSettingThread
   ref: %lld: %s, <%s:%d> Setting VPR Floor Size Done
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: Re-Setting VPR Floor Size to %d
   ref: %lld: %s, <%s:%d> Setting VPR Floor Size to %d
*/
void TVMRVPRFloorSizeSettingThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d07f0ULL || rel >= 0x2d0a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d0a40 size=1488 callers=0 calls=2
   calls: NVMMLITE_TVMRDEC_4, TVMRCombine_MVCViews
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  BufferSent For Stitching : BufferID = %d 
   ref: %lld: %s, <%s:%d> Closing TVMR Frame Delivery Thread -------------
   ref: %lld: %s, <%s:%d> DECODE OUT FENCE. ID = %d, Value = %d 
   ref: %lld: %s, <%s:%d> VIC (23pulldown) OUT FENCE. ID = %d, Value = %d 
   ref: %lld: %s, <%s:%d> AbortDisplayQueueSema Signalled
   ref: %lld: %s, <%s:%d> Filled output buffer : FrameSent = %d, BufferID = %d 
   ref: %lld: %s, <%s:%d> OUT TS : %lld 
*/
void TVMRFrameDelivery(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d0a40ULL || rel >= 0x2d1010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d1010 size=656 callers=0 calls=2
   calls: Error_detected_0x_x, NVMMLITE_TVMRDEC_4
   ref: TVMRFrameStatusReporting
   ref: %lld: %s, <%s:%d> GetFrameDecodeStatus failed!
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> DecodeStatus = 0x%x, DecodedMbs = %d, ConcealedMbs = %d
   ref: %lld: %s, <%s:%d>  TVMRFrameStatusReporting Started
   ref: %lld: %s, <%s:%d> Closing TVMR Frame Status Thread -------------
   ref: %lld: %s, <%s:%d>  DecodeStatus:: decoded_mbs=%d decode_error=%d
*/
void TVMRFrameStatusReporting(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d1010ULL || rel >= 0x2d12a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d12a0 size=96 callers=2 calls=0
*/
void sub_2d12a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d12a0ULL || rel >= 0x2d1300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d1300 size=64 callers=2 calls=0
*/
void sub_2d1300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d1300ULL || rel >= 0x2d1340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d1340 size=1344 callers=2 calls=0
*/
void sub_2d1340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d1340ULL || rel >= 0x2d1880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d1880 size=4736 callers=0 calls=5
   calls: FrameNo, NVMMLITE_TVMRDEC_4, NvMMLiteTVMRDecHwInit, sub_2d3600, sub_318640
   ref: %lld: %s, <%s:%d> ########### enable-ULLD ###########
   ref: %lld: %s, <%s:%d> TVMRFrameDelivery Thread Creation failed !
   ref: %lld: %s, <%s:%d> Setting high clocks for video..
   ref: /data/misc/media/dump_info.txt
   ref: NvMMTVMRProcessingThread
   ref: NVMMLITE_TVMRDEC
   ref: /data/misc/media/input_temp.264
   ref: %lld: %s, <%s:%d> NvMMLiteTVMRDecHwInit failed!
*/
void NvMMTVMRVPRFloorSizeThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d1880ULL || rel >= 0x2d2b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d2b00 size=2816 callers=0 calls=2
   calls: NVMMLITE_TVMRDEC_4, NvMMLiteTVMRDecHwInit
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  -- 
   ref: %lld: %s, <%s:%d>  EnQ : TVMRFrameBufferInputQueue, BufferID = %d 
   ref: %lld: %s, <%s:%d>  NumEntriesOutput = %d 
   ref: %lld: %s, <%s:%d> NVMMLITE_TVMR: EOS detected
   ref: %lld: %s, <%s:%d>  EnQ : TVMRFrameBufferDeintQueue, BufferID = %d 
   ref: %lld: %s, <%s:%d> NVMMLITE_TVMR: This condition is not possible !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   ref: %lld: %s, <%s:%d>  EnQ : TVMRFrameBufferOutputQueue, BufferID = %d 
*/
void NvMMLiteTVMRDecDoWork(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d2b00ULL || rel >= 0x2d3600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d3600 size=1200 callers=1 calls=3
   calls: Frame_stats, NVMMLITE_TVMRDEC, sub_318850
*/
void sub_2d3600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d3600ULL || rel >= 0x2d3ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d3ab0 size=1024 callers=0 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: NvMMLiteTVMRDecGetBufferRequirements
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  ++
*/
void NvMMLiteTVMRDecGetBufferRequirements(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d3ab0ULL || rel >= 0x2d3eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d3eb0 size=4464 callers=0 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: %lld: %s, <%s:%d> NumEntriesOutput BufQ = %d
   ref: %lld: %s, <%s:%d> Wait for MVCAbortSema
   ref: %lld: %s, <%s:%d>  StreamIndex = %d, AbortStatus = %d, Done 
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> Wait For AbortDisplayQueue Done
   ref: %lld: %s, <%s:%d> Wait For AbortDisplayQueue
   ref: NvMMLiteTVMRDecAbortBuffers
   ref: %lld: %s, <%s:%d> Wait for MVCAbortSema Done
*/
void NvMMLiteTVMRDecAbortBuffers(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d3eb0ULL || rel >= 0x2d5020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5020 size=1968 callers=0 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: %lld: %s, <%s:%d> Error status reporting set to 1
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d>  NvMMLiteVideoDecAttribute_SetMaxRes: %u
   ref: %lld: %s, <%s:%d>  Deinterlacing Method = %d
   ref: %lld: %s, <%s:%d>  NvMMLiteVideoDecAttribute_CompleteFrameInputBuffer = %u
   ref: NvMMLiteTVMRDecSetAttribute
   ref: %lld: %s, <%s:%d>  NvMMLiteVideoDecAttribute_H264_DisableDPB: %u
   ref: %lld: %s, <%s:%d>  NvMMLiteVideoDecAttribute_CompleteSliceInputBuffer = %u
*/
void NvMMLiteTVMRDecSetAttribute(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5020ULL || rel >= 0x2d57d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d57d0 size=1120 callers=0 calls=1
   calls: NVMMLITE_TVMRDEC_4
   ref: NVMMLITE_TVMRDEC
   ref: NvMMLiteTVMRDecGetAttribute
   ref: %lld: %s, <%s:%d>  Get profile@level from the decoder context
   ref: %lld: %s, <%s:%d>  Transferred StereoFlags = 0x%x from decoder context to app structure
*/
void NvMMLiteTVMRDecGetAttribute(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d57d0ULL || rel >= 0x2d5c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5c30 size=16 callers=0 calls=0
*/
void sub_2d5c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5c30ULL || rel >= 0x2d5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5c40 size=352 callers=2 calls=3
   calls: NVMMLITE_TVMRDEC_4, sub_318a30, sub_318d10
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: --
   ref: NVMMLITE_TVMRDEC
   ref: %lld: %s, <%s:%d> TVMR: %s: %d: ++
   ref: NvMMLiteTVMRDecHwInit
*/
void NvMMLiteTVMRDecHwInit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5c40ULL || rel >= 0x2d5da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5da0 size=416 callers=1 calls=0
   ref: FrameNo
   ref: /data/video_log/Frame_stats.txt
*/
void FrameNo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5da0ULL || rel >= 0x2d5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5f40 size=320 callers=1 calls=0
   ref: FrameNo
*/
void FrameNo_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5f40ULL || rel >= 0x2d6080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d6080 size=96 callers=1 calls=0
   ref: /data/video_log/Frame_stats.txt
*/
void Frame_stats(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d6080ULL || rel >= 0x2d60e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d60e0 size=96 callers=1 calls=0
*/
void sub_2d60e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d60e0ULL || rel >= 0x2d6140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d6140 size=96 callers=1 calls=0
*/
void sub_2d6140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d6140ULL || rel >= 0x2d61a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d61a0 size=96 callers=1 calls=0
*/
void sub_2d61a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d61a0ULL || rel >= 0x2d6200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d6200 size=96 callers=1 calls=0
*/
void sub_2d6200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d6200ULL || rel >= 0x2d6260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d6260 size=32 callers=1 calls=0
*/
void sub_2d6260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d6260ULL || rel >= 0x2d6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d6280 size=3808 callers=0 calls=6
   calls: NvMMLiteVideoEncBlockClose, sub_2d7160, sub_2df1d0, sub_2f1d30, sub_3058f0, sub_318640
   ref: %lld: %s, <%s:%d> NvMSEncH264Open failed
   ref: %lld: %s, <%s:%d> NvMMLiteBlockCreateStream Input failed
   ref: venc.enc_settings
   ref: %lld: %s, <%s:%d> NvMMLiteQueueCreate OutbufAbortSema failed
   ref: %lld: %s, <%s:%d> NvNVEncH265Open failed
   ref: %lld: %s, <%s:%d> NvMMLiteQueueCreate OutputDeliveryDestroySema failed
   ref: venc.rcstats.logs
   ref: %lld: %s, <%s:%d> NvMMLiteVideoEncVersionSupportCheck failed!
*/
void NvMMLiteVideoEncBlockOpen(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d6280ULL || rel >= 0x2d7160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d7160 size=240 callers=116 calls=0
*/
void sub_2d7160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d7160ULL || rel >= 0x2d7250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d7250 size=2144 callers=0 calls=1
   calls: sub_2d7160
   ref: NvMMLiteVideoEncSetup
   ref: %lld: %s, <%s:%d> NvOsThreadCreate NvBLBFrameThread failed
   ref: %lld: %s, <%s:%d> NvOsSemaphoreCreate NextStageOpsSema failed
   ref: %lld: %s, <%s:%d> NvOsThreadCreate VideoEncInputProcessing failed
   ref: NvMMLiteVideoEncDoWork
   ref: %lld: %s, <%s:%d> NvMMQueueDeQ pInStream->BufQ failed
   ref: NvMMVideoEncOutputThread
   ref: %lld: %s, <%s:%d> NvMMQueueDeQ pOutStream->BufQ failed
*/
void NvMMVideoEncOutputThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d7250ULL || rel >= 0x2d7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d7ab0 size=1488 callers=0 calls=5
   calls: sub_2d7160, sub_2df590, sub_2dfea0, sub_2f23d0, sub_318850
   ref: %lld: %s, <%s:%d> NvMMModuleFinalize failed!
   ref: NvMMLiteVideoEncBlockPrivateClose
*/
void NvMMLiteVideoEncBlockPrivateClose(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d7ab0ULL || rel >= 0x2d8080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d8080 size=656 callers=0 calls=1
   calls: sub_2d7160
   ref: NvMMLiteVideoEncGetBufferRequirements
   ref: %lld: %s, <%s:%d> --
   ref: %lld: %s, <%s:%d> ++
   ref: %lld: %s, <%s:%d> GetSliceLevelEncodeParams failed 
*/
void NvMMLiteVideoEncGetBufferRequirements(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d8080ULL || rel >= 0x2d8310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d8310 size=16 callers=0 calls=0
*/
void sub_2d8310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d8310ULL || rel >= 0x2d8320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d8320 size=16 callers=0 calls=0
*/
void sub_2d8320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d8320ULL || rel >= 0x2d8330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d8330 size=1936 callers=2 calls=1
   calls: sub_2d7160
   ref: NvVideoEncAbortBuffer
   ref: %lld: %s, <%s:%d> NvMMQueueDeQ BufferInputQueue failed
   ref: %lld: %s, <%s:%d> NvMMQueueDeQ hReorderInpBufQ failed
   ref: %lld: %s, <%s:%d> VideoEncFlushInternalBuffers failed
   ref: %lld: %s, <%s:%d> NvMMQueueDeQ EncodeQueue failed
   ref: %lld: %s, <%s:%d> NvMMQueueDeQ BufferOutputQueue failed
   ref: %lld: %s, <%s:%d> Output BufferOutputQueue buffer %d sent
   ref: %lld: %s, <%s:%d> --
*/
void NvVideoEncAbortBuffer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d8330ULL || rel >= 0x2d8ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d8ac0 size=832 callers=0 calls=1
   calls: sub_2d7160
   ref: NvMMLiteVideoEncSetState
   ref: %lld: %s, <%s:%d> Invalid state change request %d
   ref: %lld: %s, <%s:%d> %s -> %s
   ref: %lld: %s, <%s:%d> --
   ref: INVALID
   ref: %lld: %s, <%s:%d> Bad Parameter
   ref: %lld: %s, <%s:%d> ++
*/
void NvMMLiteVideoEncSetState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d8ac0ULL || rel >= 0x2d8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d8e00 size=6288 callers=0 calls=10
   calls: sub_2d7160, sub_2df2d0, sub_2df590, sub_2dfb10, sub_2dfe90, sub_2f1d10, sub_2f1d30, sub_2f23d0, sub_318640, sub_318850
   ref: %lld: %s, <%s:%d>  NvMMAttributeVideoEnc_CfgFile failed
   ref: %lld: %s, <%s:%d>  NvMMAttributeVideoEnc_PreProc_Scheme: Bad Parameter
   ref: InitializeTNR
   ref: %lld: %s, <%s:%d>  NvMMAttributeVideoEnc_CfgFile: Bad Parameter
   ref: %lld: %s, <%s:%d> NvMMModuleInitialize failed with RetValue = 0x%x!
   ref: %lld: %s, <%s:%d> Unsuccessful in Initialize2D with Err = 0x%x 
   ref: /data/Framestats_PreProc.csv
   ref: %lld: %s, <%s:%d> ===== MSENC Noise Reduction enabled =====
*/
void NvMMLiteVideoEncSetAttribute(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d8e00ULL || rel >= 0x2da690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002da690 size=640 callers=1 calls=2
   calls: sub_2d7160, sub_2f0900
   ref: %lld: %s, <%s:%d>  Bad Parameter
   ref: %lld: %s, <%s:%d> --
   ref: %lld: %s, <%s:%d> ++
   ref: NvMMLiteVideoEncGetAttribute
*/
void NvMMLiteVideoEncGetAttribute(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2da690ULL || rel >= 0x2da910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002da910 size=624 callers=1 calls=4
   calls: sub_2d7160, sub_2f23d0, sub_305f70, sub_318850
   ref: NvMMLiteVideoEncBlockClose
   ref: %lld: %s, <%s:%d> --
   ref: %lld: %s, <%s:%d> VENC: %s: %d: Avg Enc Time(usec) = %d Frames = %d 
   ref: %lld: %s, <%s:%d> NvMMModuleFinalize failed!
*/
void NvMMLiteVideoEncBlockClose(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2da910ULL || rel >= 0x2dab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dab80 size=864 callers=2 calls=0
*/
void sub_2dab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dab80ULL || rel >= 0x2daee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002daee0 size=1760 callers=0 calls=3
   calls: SendAbortSignalToNextStage, SendInputAndSignalToNextStage, sub_2d7160
   ref: ProcessTNRParams
   ref: %lld: %s, <%s:%d> ProcessTNRParams : pBlockCtx->NvTnrLux = %lf pBlockCtx->Indoor = %d
   ref: %lld: %s, <%s:%d> --
   ref: NrWorkerThread
   ref: %lld: %s, <%s:%d> NvMMQueuePeek pInBuf failed
   ref: %lld: %s, <%s:%d> Noise Reduction of input buffer %d (reference buffer %d)
   ref: %lld: %s, <%s:%d> Triggered. pEntriesNrInput %d
   ref: %lld: %s, <%s:%d> New reference buffer %d
*/
void ProcessTNRParams(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2daee0ULL || rel >= 0x2db5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002db5c0 size=1408 callers=0 calls=4
   calls: SendAbortSignalToNextStage, SendInputAndSignalToNextStage, sub_2d7160, sub_2dfeb0
   ref: %lld: %s, <%s:%d> --
   ref: %lld: %s, <%s:%d> Triggered. pEntriesInput %d
   ref: %lld: %s, <%s:%d> NvMMQueuePeek pInBuf failed
   ref: NvBLSurfaceDownscaleThread
   ref: %lld: %s, <%s:%d> ++
   ref: %lld: %s, <%s:%d> Surface Downscale done
   ref: %lld: %s, <%s:%d> Scheme is not defined properly
*/
void NvBLSurfaceDownscaleThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2db5c0ULL || rel >= 0x2dbb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dbb40 size=2352 callers=0 calls=2
   calls: SendAbortSignalToNextStage, sub_2d7160
   ref: %lld: %s, <%s:%d> NvMMQueueEnQ pInBuf failed
   ref: %lld: %s, <%s:%d> Failure in VideoEncFetchEncodedStream with Err = 0x%x 
   ref: %lld: %s, <%s:%d> Stats Generation for b frame lookahead done
   ref: SendInputAndSignalToNextStage_LookAhead
   ref: %lld: %s, <%s:%d> --
   ref: %lld: %s, <%s:%d> Triggered. pEntriesInput %d
   ref: %lld: %s, <%s:%d> NvMMQueuePeek pInBuf failed
   ref: %lld: %s, <%s:%d> VideoEncFeedImage failed. Input buffer %d sent
*/
void SendInputAndSignalToNextStage_LookAhead(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dbb40ULL || rel >= 0x2dc470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dc470 size=3424 callers=0 calls=1
   calls: sub_2d7160
   ref: CalculateDynamicFrameRate
   ref: %lld: %s, <%s:%d> NvMMQueueDeQ BufferInputQueue failed
   ref: %lld: %s, <%s:%d>  ProcessFrameRate failed
   ref: %lld: %s, <%s:%d> VideoEncFlushInternalBuffers failed
   ref: %lld: %s, <%s:%d>  Swapping HwQ buffer %d with NR reference buffer %d
   ref: %lld: %s, <%s:%d> Dynamic frame rate update failed
   ref: %lld: %s, <%s:%d> Frame rate %lf modified based on time stamps 
   ref: %lld: %s, <%s:%d> NvMMQueueDeQ pBlockCtx->BufferOutputQueue failed
*/
void VideoEncInputProcessing(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dc470ULL || rel >= 0x2dd1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dd1d0 size=2224 callers=0 calls=3
   calls: NvMMLiteVideoEncGetAttribute, NvVideoEncAbortBuffer, sub_2d7160
   ref: %lld: %s, <%s:%d>  Output config buffer %d sent with %d bytes 
   ref: %lld: %s, <%s:%d>  Output config buffer %d sent back 
   ref: %lld: %s, <%s:%d>  Output buffer %d sent with %d bytes 
   ref: %d,%d,%d,%d,%d,%d,
   ref: VideoEndOutputDelivery
   ref: %lld: %s, <%s:%d> EOS. NR reference buffer %d sent
   ref: %lld: %s, <%s:%d> NvMMQueueDeQ pOutStream->BufQ failed 
   ref: %lld: %s, <%s:%d> Consumed Input buffer %d sent
*/
void VideoEndOutputDelivery(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dd1d0ULL || rel >= 0x2dda80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dda80 size=944 callers=3 calls=1
   calls: sub_2d7160
   ref: %lld: %s, <%s:%d> NvMMQueueEnQ pInBuf failed
   ref: SendAbortSignalToNextStage
   ref: %lld: %s, <%s:%d> NvMMQueueDeQ pInBuf failed
*/
void SendAbortSignalToNextStage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dda80ULL || rel >= 0x2dde30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dde30 size=560 callers=2 calls=1
   calls: sub_2d7160
   ref: %lld: %s, <%s:%d> NvMMQueueEnQ pInBuf failed
   ref: SendInputAndSignalToNextStage
   ref: %lld: %s, <%s:%d> NvMMQueueDeQ pInBuf failed
*/
void SendInputAndSignalToNextStage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dde30ULL || rel >= 0x2de060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de060 size=576 callers=2 calls=3
   calls: sub_318a30, sub_318d10, sub_318fc0
*/
void sub_2de060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de060ULL || rel >= 0x2de2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de2a0 size=256 callers=2 calls=2
   calls: sub_318a30, sub_318d10
*/
void sub_2de2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de2a0ULL || rel >= 0x2de3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de3a0 size=144 callers=0 calls=2
   calls: sub_318a30, sub_318d10
*/
void sub_2de3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de3a0ULL || rel >= 0x2de430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de430 size=32 callers=0 calls=0
*/
void sub_2de430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de430ULL || rel >= 0x2de450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de450 size=16 callers=0 calls=0
*/
void sub_2de450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de450ULL || rel >= 0x2de460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de460 size=16 callers=2 calls=0
*/
void sub_2de460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de460ULL || rel >= 0x2de470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de470 size=240 callers=34 calls=0
*/
void sub_2de470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de470ULL || rel >= 0x2de560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de560 size=48 callers=34 calls=0
*/
void sub_2de560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de560ULL || rel >= 0x2de590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de590 size=80 callers=8 calls=0
*/
void sub_2de590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de590ULL || rel >= 0x2de5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de5e0 size=112 callers=66 calls=0
*/
void sub_2de5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de5e0ULL || rel >= 0x2de650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de650 size=64 callers=1 calls=0
*/
void sub_2de650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de650ULL || rel >= 0x2de690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de690 size=1296 callers=7 calls=0
*/
void sub_2de690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de690ULL || rel >= 0x2deba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002deba0 size=1072 callers=2 calls=1
   calls: sub_2de690
*/
void sub_2deba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2deba0ULL || rel >= 0x2defd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002defd0 size=256 callers=4 calls=0
*/
void sub_2defd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2defd0ULL || rel >= 0x2df0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df0d0 size=256 callers=3 calls=0
*/
void sub_2df0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df0d0ULL || rel >= 0x2df1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df1d0 size=256 callers=1 calls=0
*/
void sub_2df1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df1d0ULL || rel >= 0x2df2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df2d0 size=704 callers=20 calls=0
*/
void sub_2df2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df2d0ULL || rel >= 0x2df590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df590 size=48 callers=16 calls=0
*/
void sub_2df590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df590ULL || rel >= 0x2df5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df5c0 size=352 callers=7 calls=0
*/
void sub_2df5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df5c0ULL || rel >= 0x2df720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df720 size=16 callers=6 calls=0
*/
void sub_2df720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df720ULL || rel >= 0x2df730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df730 size=480 callers=2 calls=0
*/
void sub_2df730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df730ULL || rel >= 0x2df910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df910 size=256 callers=2 calls=0
*/
void sub_2df910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df910ULL || rel >= 0x2dfa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dfa10 size=256 callers=2 calls=0
*/
void sub_2dfa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dfa10ULL || rel >= 0x2dfb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dfb10 size=112 callers=5 calls=0
*/
void sub_2dfb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dfb10ULL || rel >= 0x2dfb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dfb80 size=624 callers=2 calls=0
*/
void sub_2dfb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dfb80ULL || rel >= 0x2dfdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dfdf0 size=160 callers=2 calls=0
*/
void sub_2dfdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dfdf0ULL || rel >= 0x2dfe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dfe90 size=16 callers=5 calls=0
*/
void sub_2dfe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dfe90ULL || rel >= 0x2dfea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dfea0 size=16 callers=4 calls=0
*/
void sub_2dfea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dfea0ULL || rel >= 0x2dfeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dfeb0 size=1440 callers=6 calls=0
*/
void sub_2dfeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dfeb0ULL || rel >= 0x2e0450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e0450 size=192 callers=1 calls=0
*/
void sub_2e0450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0450ULL || rel >= 0x2e0510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e0510 size=176 callers=546 calls=1
   calls: sub_2e0450
*/
void sub_2e0510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0510ULL || rel >= 0x2e05c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e05c0 size=2768 callers=1 calls=1
   calls: sub_2e0510
   ref: -ab_beta
   ref: num_max_ref_l1
   ref: dump_aq_stats
   ref: rc_mode
   ref: -ab_alpha
   ref: -qpmap-filename
   ref: qpmapFilename
   ref: -maxqpb
*/
void gaps_framenum_allowed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e05c0ULL || rel >= 0x2e1090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1090 size=4048 callers=1 calls=1
   calls: sub_2e0510
   ref: -input_bl_mode
   ref: -dump_cycle_cnt
   ref: disable_recPic_dump
   ref: -ofs_forward_ref
   ref: -dump_mpec
   ref: -chroma_stride
   ref: -trace-basename
   ref: -quant_intra_sat_flag
*/
void subframeStatFileName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1090ULL || rel >= 0x2e2060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e2060 size=544 callers=1 calls=1
   calls: sub_2e0510
   ref: QppRunVector4x4
   ref: QppLuma8x8Cost
   ref: -qpp_run_vect4x4
   ref: -qpp_mode
   ref: QppRunVector8x8_1
   ref: QppMode
   ref: Common
   ref: -qpp_run_vect8x8
*/
void QppRunVector8x8_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e2060ULL || rel >= 0x2e2280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e2280 size=8832 callers=1 calls=1
   calls: sub_2e0510
   ref: -cu16x16_l0_part_2NxnU_enable
   ref: -cu16x16_l0_part_nRx2N_enable
   ref: bias_cusize_8x8
   ref: -bias_intra_16x16
   ref: mv_cost_bias
   ref: -mv_cost_predictor_control
   ref: mv_cost_enable
   ref: -explicit_eval_nearestmv
*/
void tu_search_basedon_pusize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e2280ULL || rel >= 0x2e4500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e4500 size=7488 callers=1 calls=1
   calls: sub_2e0510
   ref: -stamp_refidx1_stamp
   ref: self_spatial_refine
   ref: -external_stamp_l0_refidx7_stamp
   ref: external_stamp_l1_refidx5_stamp
   ref: external_stamp_l1_refidx6_stamp
   ref: -l0_hint_mvx
   ref: -stamp_shape1_ver_adjust
   ref: stamp_shape2_bitmask_hi
*/
void temporal_hint_pattern(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e4500ULL || rel >= 0x2e6240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6240 size=4944 callers=1 calls=1
   calls: sub_2e0510
   ref: -chroma_format_idc
   ref: -max_tu_depth_intra
   ref: -num_long_term_ref_pics_sps
   ref: -layer8_inter_layer_pred_layer_idc
   ref: -separate_colour_plane_flag
   ref: -transquant_bypass_enable
   ref: lists_modification_present_flag
   ref: -intra_refresh_mode
*/
void second_chroma_qp_index(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6240ULL || rel >= 0x2e7590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7590 size=128 callers=1 calls=1
   calls: sub_2e0510
   ref: Common
   ref: -constrained_intra_pred
   ref: constrained_intra_pred_flag
*/
void constrained_intra_pred_flag(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7590ULL || rel >= 0x2e7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7610 size=720 callers=1 calls=1
   calls: sub_2e0510
   ref: -loop_filter_across_slices
   ref: -deblocking_filter_override_enabled_flag
   ref: beta_offset_div2
   ref: tc_offset_div2
   ref: pcm_loop_filter_disable_flag
   ref: disable_deblocking_filter_idc
   ref: -sao_luma_mode
   ref: -loop_filter_across_tiles
*/
void pcm_loop_filter_disable_flag(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7610ULL || rel >= 0x2e78e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e78e0 size=208 callers=1 calls=1
   calls: sub_2e0510
   ref: slice_mode
   ref: -slice_mode
   ref: slice_size
   ref: Common
   ref: -slice_size
*/
void slice_size(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e78e0ULL || rel >= 0x2e79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e79b0 size=352 callers=1 calls=1
   calls: sub_2e0510
   ref: limit_slice_right_boundary
   ref: dependent_slice_enabled_flag
   ref: limit_slice_bot_boundary
   ref: -limit_slice_left_boundary
   ref: limit_slice_left_boundary
   ref: Common
   ref: limit_slice_top_boundary
   ref: -limit_slice_top_boundary
*/
void limit_slice_top_boundary(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e79b0ULL || rel >= 0x2e7b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7b10 size=304 callers=1 calls=1
   calls: sub_2e0510
   ref: num_tile_columns_minus1
   ref: uniform_spacing_flag
   ref: -num_tile_rows_minus1
   ref: Common
   ref: -num_tile_columns_minus1
   ref: -tiles_enable
   ref: num_tile_rows_minus1
   ref: -uniform_spacing_flag
*/
void uniform_spacing_flag(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7b10ULL || rel >= 0x2e7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7c40 size=1344 callers=11 calls=3
   calls: sub_2e9840, sub_2e9900, sub_2e99c0
   ref: long long
   ref: -no_%s
   ref: double
*/
void double_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7c40ULL || rel >= 0x2e8180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e8180 size=5824 callers=2 calls=12
   calls: QppRunVector8x8_2, constrained_intra_pred_flag, double_fn, gaps_framenum_allowed, limit_slice_top_boundary, pcm_loop_filter_disable_flag, second_chroma_qp_index, slice_size, subframeStatFileName, temporal_hint_pattern, tu_search_basedon_pusize, uniform_spacing_flag
*/
void sub_2e8180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e8180ULL || rel >= 0x2e9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e9840 size=192 callers=7 calls=0
*/
void sub_2e9840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e9840ULL || rel >= 0x2e9900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e9900 size=192 callers=2 calls=0
*/
void sub_2e9900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e9900ULL || rel >= 0x2e99c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e99c0 size=112 callers=1 calls=0
*/
void sub_2e99c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e99c0ULL || rel >= 0x2e9a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e9a30 size=16 callers=0 calls=0
*/
void sub_2e9a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e9a30ULL || rel >= 0x2e9a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e9a40 size=16 callers=0 calls=0
*/
void sub_2e9a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e9a40ULL || rel >= 0x2e9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e9a50 size=1248 callers=1 calls=6
   calls: sub_2de460, sub_2de560, sub_2df590, sub_2df720, sub_2dfea0, sub_2fd820
*/
void sub_2e9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e9a50ULL || rel >= 0x2e9f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e9f30 size=20240 callers=0 calls=25
   calls: sub_2de060, sub_2de2a0, sub_2de460, sub_2de470, sub_2de650, sub_2de690, sub_2deba0, sub_2defd0, sub_2df2d0, sub_2df5c0, sub_2dfb10, sub_2dfe90
   ... +13 more
   ref: %s_%05u.bin
   ref: %s_%05u.qp
   ref: venc.hqmode
*/
void s__05u(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e9f30ULL || rel >= 0x2eee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eee40 size=2400 callers=3 calls=0
*/
void sub_2eee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eee40ULL || rel >= 0x2ef7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ef7a0 size=352 callers=1 calls=2
   calls: sub_303630, sub_3036f0
*/
void sub_2ef7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ef7a0ULL || rel >= 0x2ef900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ef900 size=3040 callers=0 calls=6
   calls: sub_2dab80, sub_2df730, sub_2f2850, sub_2f6060, sub_2f8380, sub_2f94e0
*/
void sub_2ef900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ef900ULL || rel >= 0x2f04e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f04e0 size=112 callers=0 calls=0
*/
void sub_2f04e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f04e0ULL || rel >= 0x2f0550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f0550 size=944 callers=0 calls=0
*/
void sub_2f0550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f0550ULL || rel >= 0x2f0900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f0900 size=352 callers=1 calls=0
*/
void sub_2f0900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f0900ULL || rel >= 0x2f0a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f0a60 size=96 callers=0 calls=0
*/
void sub_2f0a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f0a60ULL || rel >= 0x2f0ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f0ac0 size=256 callers=0 calls=0
*/
void sub_2f0ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f0ac0ULL || rel >= 0x2f0bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f0bc0 size=80 callers=0 calls=0
*/
void sub_2f0bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f0bc0ULL || rel >= 0x2f0c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f0c10 size=64 callers=0 calls=0
*/
void sub_2f0c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f0c10ULL || rel >= 0x2f0c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f0c50 size=176 callers=0 calls=0
*/
void sub_2f0c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f0c50ULL || rel >= 0x2f0d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f0d00 size=256 callers=0 calls=0
*/
void sub_2f0d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f0d00ULL || rel >= 0x2f0e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f0e00 size=1600 callers=0 calls=1
   calls: sub_2dfb10
*/
void sub_2f0e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f0e00ULL || rel >= 0x2f1440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1440 size=224 callers=0 calls=0
*/
void sub_2f1440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1440ULL || rel >= 0x2f1520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1520 size=80 callers=0 calls=0
*/
void sub_2f1520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1520ULL || rel >= 0x2f1570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1570 size=80 callers=0 calls=0
*/
void sub_2f1570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1570ULL || rel >= 0x2f15c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f15c0 size=32 callers=0 calls=0
*/
void sub_2f15c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f15c0ULL || rel >= 0x2f15e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f15e0 size=96 callers=0 calls=0
*/
void sub_2f15e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f15e0ULL || rel >= 0x2f1640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1640 size=64 callers=0 calls=0
*/
void sub_2f1640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1640ULL || rel >= 0x2f1680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1680 size=96 callers=0 calls=0
*/
void sub_2f1680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1680ULL || rel >= 0x2f16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f16e0 size=16 callers=0 calls=0
*/
void sub_2f16e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f16e0ULL || rel >= 0x2f16f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f16f0 size=48 callers=0 calls=0
*/
void sub_2f16f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f16f0ULL || rel >= 0x2f1720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1720 size=112 callers=0 calls=0
*/
void sub_2f1720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1720ULL || rel >= 0x2f1790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1790 size=128 callers=0 calls=0
*/
void sub_2f1790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1790ULL || rel >= 0x2f1810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1810 size=80 callers=0 calls=0
*/
void sub_2f1810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1810ULL || rel >= 0x2f1860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1860 size=64 callers=0 calls=0
*/
void sub_2f1860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1860ULL || rel >= 0x2f18a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f18a0 size=48 callers=0 calls=0
*/
void sub_2f18a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f18a0ULL || rel >= 0x2f18d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f18d0 size=32 callers=0 calls=0
*/
void sub_2f18d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f18d0ULL || rel >= 0x2f18f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f18f0 size=64 callers=0 calls=0
*/
void sub_2f18f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f18f0ULL || rel >= 0x2f1930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1930 size=48 callers=0 calls=0
*/
void sub_2f1930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1930ULL || rel >= 0x2f1960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1960 size=48 callers=0 calls=0
*/
void sub_2f1960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1960ULL || rel >= 0x2f1990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1990 size=128 callers=0 calls=0
*/
void sub_2f1990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1990ULL || rel >= 0x2f1a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1a10 size=16 callers=0 calls=0
*/
void sub_2f1a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1a10ULL || rel >= 0x2f1a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1a20 size=176 callers=0 calls=0
*/
void sub_2f1a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1a20ULL || rel >= 0x2f1ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1ad0 size=368 callers=0 calls=0
*/
void sub_2f1ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1ad0ULL || rel >= 0x2f1c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1c40 size=112 callers=0 calls=0
*/
void sub_2f1c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1c40ULL || rel >= 0x2f1cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1cb0 size=96 callers=0 calls=0
*/
void sub_2f1cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1cb0ULL || rel >= 0x2f1d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1d10 size=32 callers=1 calls=0
*/
void sub_2f1d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1d10ULL || rel >= 0x2f1d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f1d30 size=1696 callers=2 calls=1
   calls: sub_2dfb80
*/
void sub_2f1d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f1d30ULL || rel >= 0x2f23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f23d0 size=80 callers=3 calls=2
   calls: sub_2dfdf0, sub_2e9a50
*/
void sub_2f23d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f23d0ULL || rel >= 0x2f2420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f2420 size=480 callers=112 calls=1
   calls: sub_2f2600
*/
void sub_2f2420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f2420ULL || rel >= 0x2f2600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f2600 size=288 callers=190 calls=0
*/
void sub_2f2600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f2600ULL || rel >= 0x2f2720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f2720 size=32 callers=5 calls=0
*/
void sub_2f2720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f2720ULL || rel >= 0x2f2740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f2740 size=272 callers=9 calls=0
*/
void sub_2f2740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f2740ULL || rel >= 0x2f2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f2850 size=32 callers=9 calls=0
*/
void sub_2f2850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f2850ULL || rel >= 0x2f2870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f2870 size=4016 callers=2 calls=1
   calls: sub_2f2420
*/
void sub_2f2870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f2870ULL || rel >= 0x2f3820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f3820 size=7824 callers=1 calls=2
   calls: sub_2f2420, sub_2f2870
*/
void sub_2f3820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f3820ULL || rel >= 0x2f56b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f56b0 size=2480 callers=1 calls=1
   calls: sub_2f2420
*/
void sub_2f56b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f56b0ULL || rel >= 0x2f6060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f6060 size=8992 callers=2 calls=4
   calls: sub_2f2420, sub_2f2740, sub_2f3820, sub_2f56b0
*/
void sub_2f6060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f6060ULL || rel >= 0x2f8380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f8380 size=4448 callers=1 calls=1
   calls: sub_2f2740
*/
void sub_2f8380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f8380ULL || rel >= 0x2f94e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f94e0 size=1280 callers=1 calls=1
   calls: sub_2f2740
*/
void sub_2f94e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f94e0ULL || rel >= 0x2f99e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f99e0 size=4192 callers=2 calls=5
   calls: sub_2de590, sub_2de5e0, sub_2de690, sub_2df910, sub_2dfa10
*/
void sub_2f99e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f99e0ULL || rel >= 0x2faa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002faa40 size=11744 callers=2 calls=5
   calls: sub_2defd0, sub_2df0d0, sub_300d60, sub_300dc0, sub_303720
*/
void sub_2faa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2faa40ULL || rel >= 0x2fd820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fd820 size=48 callers=1 calls=0
*/
void sub_2fd820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fd820ULL || rel >= 0x2fd850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fd850 size=832 callers=1 calls=1
   calls: sub_2fdb90
*/
void sub_2fd850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fd850ULL || rel >= 0x2fdb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fdb90 size=544 callers=1 calls=1
   calls: sub_3000e0
*/
void sub_2fdb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fdb90ULL || rel >= 0x2fddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fddb0 size=1072 callers=1 calls=4
   calls: sub_2fe1e0, sub_2fe640, sub_2fe8e0, sub_2fedd0
*/
void sub_2fddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fddb0ULL || rel >= 0x2fe1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fe1e0 size=1120 callers=1 calls=4
   calls: sub_2fe640, sub_2fe8e0, sub_3000e0, sub_300410
*/
void sub_2fe1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fe1e0ULL || rel >= 0x2fe640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fe640 size=672 callers=2 calls=1
   calls: sub_300c20
*/
void sub_2fe640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fe640ULL || rel >= 0x2fe8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fe8e0 size=1264 callers=2 calls=0
*/
void sub_2fe8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fe8e0ULL || rel >= 0x2fedd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fedd0 size=1440 callers=1 calls=0
*/
void sub_2fedd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fedd0ULL || rel >= 0x2ff370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ff370 size=3008 callers=1 calls=2
   calls: sub_2fff30, sub_3000e0
*/
void sub_2ff370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ff370ULL || rel >= 0x2fff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fff30 size=432 callers=1 calls=2
   calls: sub_300410, sub_300520
*/
void sub_2fff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fff30ULL || rel >= 0x3000e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003000e0 size=816 callers=5 calls=0
*/
void sub_3000e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3000e0ULL || rel >= 0x300410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00300410 size=272 callers=2 calls=0
*/
void sub_300410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x300410ULL || rel >= 0x300520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00300520 size=1792 callers=1 calls=0
*/
void sub_300520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x300520ULL || rel >= 0x300c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00300c20 size=320 callers=1 calls=0
*/
void sub_300c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x300c20ULL || rel >= 0x300d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00300d60 size=96 callers=19 calls=0
*/
void sub_300d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x300d60ULL || rel >= 0x300dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00300dc0 size=80 callers=23 calls=0
*/
void sub_300dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x300dc0ULL || rel >= 0x300e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00300e10 size=720 callers=1 calls=2
   calls: sub_3010e0, sub_3030b0
*/
void sub_300e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x300e10ULL || rel >= 0x3010e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003010e0 size=208 callers=1 calls=0
*/
void sub_3010e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3010e0ULL || rel >= 0x3011b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003011b0 size=784 callers=0 calls=0
*/
void sub_3011b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3011b0ULL || rel >= 0x3014c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003014c0 size=848 callers=0 calls=1
   calls: sub_3024c0
*/
void sub_3014c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3014c0ULL || rel >= 0x301810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00301810 size=400 callers=0 calls=1
   calls: sub_3026d0
*/
void sub_301810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x301810ULL || rel >= 0x3019a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003019a0 size=2848 callers=0 calls=1
   calls: sub_3024c0
*/
void sub_3019a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3019a0ULL || rel >= 0x3024c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003024c0 size=528 callers=3 calls=0
*/
void sub_3024c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3024c0ULL || rel >= 0x3026d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003026d0 size=2528 callers=2 calls=0
*/
void sub_3026d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3026d0ULL || rel >= 0x3030b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003030b0 size=704 callers=2 calls=2
   calls: sub_303370, sub_303480
*/
void sub_3030b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3030b0ULL || rel >= 0x303370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00303370 size=272 callers=1 calls=0
*/
void sub_303370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x303370ULL || rel >= 0x303480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00303480 size=272 callers=1 calls=0
*/
void sub_303480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x303480ULL || rel >= 0x303590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00303590 size=160 callers=1 calls=0
*/
void sub_303590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x303590ULL || rel >= 0x303630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00303630 size=192 callers=3 calls=0
*/
void sub_303630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x303630ULL || rel >= 0x3036f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003036f0 size=48 callers=2 calls=0
*/
void sub_3036f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3036f0ULL || rel >= 0x303720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00303720 size=1040 callers=1 calls=0
*/
void sub_303720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x303720ULL || rel >= 0x303b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00303b30 size=64 callers=1 calls=0
*/
void sub_303b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x303b30ULL || rel >= 0x303b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00303b70 size=112 callers=0 calls=0
*/
void sub_303b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x303b70ULL || rel >= 0x303be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00303be0 size=656 callers=0 calls=0
*/
void sub_303be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x303be0ULL || rel >= 0x303e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00303e70 size=864 callers=0 calls=1
   calls: sub_2dfb10
*/
void sub_303e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x303e70ULL || rel >= 0x3041d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003041d0 size=240 callers=0 calls=0
*/
void sub_3041d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3041d0ULL || rel >= 0x3042c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003042c0 size=32 callers=0 calls=0
*/
void sub_3042c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3042c0ULL || rel >= 0x3042e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003042e0 size=240 callers=0 calls=0
*/
void sub_3042e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3042e0ULL || rel >= 0x3043d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003043d0 size=3136 callers=0 calls=8
   calls: sub_2dab80, sub_2df730, sub_2f2850, sub_30e990, sub_30ef50, sub_30f5f0, sub_30fbe0, sub_30fe50
   ref: firstpass
   ref: /data/me_pred_out_%d.bin
*/
void firstpass(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3043d0ULL || rel >= 0x305010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00305010 size=32 callers=0 calls=0
*/
void sub_305010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x305010ULL || rel >= 0x305030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00305030 size=128 callers=0 calls=0
*/
void sub_305030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x305030ULL || rel >= 0x3050b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003050b0 size=96 callers=0 calls=0
*/
void sub_3050b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3050b0ULL || rel >= 0x305110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00305110 size=64 callers=0 calls=0
*/
void sub_305110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x305110ULL || rel >= 0x305150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00305150 size=64 callers=0 calls=0
*/
void sub_305150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x305150ULL || rel >= 0x305190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00305190 size=224 callers=0 calls=0
*/
void sub_305190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x305190ULL || rel >= 0x305270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00305270 size=128 callers=0 calls=0
*/
void sub_305270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x305270ULL || rel >= 0x3052f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003052f0 size=16 callers=0 calls=0
*/
void sub_3052f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3052f0ULL || rel >= 0x305300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00305300 size=64 callers=0 calls=0
*/
void sub_305300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x305300ULL || rel >= 0x305340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00305340 size=176 callers=0 calls=0
*/
void sub_305340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x305340ULL || rel >= 0x3053f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003053f0 size=32 callers=0 calls=0
*/
void sub_3053f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3053f0ULL || rel >= 0x305410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00305410 size=1248 callers=1 calls=4
   calls: sub_2de560, sub_2df590, sub_2df720, sub_2dfea0
*/
void sub_305410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x305410ULL || rel >= 0x3058f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003058f0 size=1664 callers=1 calls=1
   calls: sub_2dfb80
*/
void sub_3058f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3058f0ULL || rel >= 0x305f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00305f70 size=80 callers=1 calls=2
   calls: sub_2dfdf0, sub_305410
*/
void sub_305f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x305f70ULL || rel >= 0x305fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00305fc0 size=80 callers=0 calls=0
*/
void sub_305fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x305fc0ULL || rel >= 0x306010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00306010 size=64 callers=0 calls=0
*/
void sub_306010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x306010ULL || rel >= 0x306050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00306050 size=64 callers=0 calls=0
*/
void sub_306050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x306050ULL || rel >= 0x306090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00306090 size=9632 callers=0 calls=17
   calls: s__05u_2, sub_2de2a0, sub_2de690, sub_2deba0, sub_2defd0, sub_2df2d0, sub_2dfb10, sub_2dfeb0, sub_30ca50, sub_30ff60, sub_310ad0, sub_3133e0
   ... +5 more
   ref: %s_%05u.qp
   ref: %s%04u.bin
   ref: /data/me_pred_out_%d.bin
   ref: secondpass
*/
void secondpass(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x306090ULL || rel >= 0x308630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00308630 size=17440 callers=1 calls=8
   calls: sub_2de060, sub_2de470, sub_2df2d0, sub_2df5c0, sub_2dfe90, sub_2e8180, sub_30ca50, sub_317540
   ref: venc.hqmode
*/
void venc_hqmode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x308630ULL || rel >= 0x30ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ca50 size=2576 callers=2 calls=0
*/
void sub_30ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ca50ULL || rel >= 0x30d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d460 size=432 callers=2 calls=0
   ref: %s_%05u.bin
*/
void s__05u_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d460ULL || rel >= 0x30d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d610 size=224 callers=0 calls=0
*/
void sub_30d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d610ULL || rel >= 0x30d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d6f0 size=112 callers=0 calls=0
*/
void sub_30d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d6f0ULL || rel >= 0x30d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d760 size=288 callers=0 calls=0
*/
void sub_30d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d760ULL || rel >= 0x30d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d880 size=48 callers=0 calls=0
*/
void sub_30d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d880ULL || rel >= 0x30d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d8b0 size=96 callers=0 calls=0
*/
void sub_30d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d8b0ULL || rel >= 0x30d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d910 size=48 callers=0 calls=0
*/
void sub_30d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d910ULL || rel >= 0x30d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d940 size=48 callers=0 calls=0
*/
void sub_30d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d940ULL || rel >= 0x30d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030d970 size=944 callers=0 calls=0
*/
void sub_30d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30d970ULL || rel >= 0x30dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030dd20 size=1104 callers=2 calls=1
   calls: sub_2f2600
*/
void sub_30dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30dd20ULL || rel >= 0x30e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030e170 size=304 callers=2 calls=2
   calls: sub_2f2420, sub_2f2600
*/
void sub_30e170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30e170ULL || rel >= 0x30e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030e2a0 size=720 callers=1 calls=3
   calls: sub_2f2420, sub_2f2600, sub_30e170
*/
void sub_30e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30e2a0ULL || rel >= 0x30e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030e570 size=1056 callers=1 calls=3
   calls: sub_2f2420, sub_2f2600, sub_30e2a0
*/
void sub_30e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30e570ULL || rel >= 0x30e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030e990 size=960 callers=2 calls=5
   calls: sub_2f2420, sub_2f2600, sub_2f2740, sub_2f2850, sub_30dd20
*/
void sub_30e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30e990ULL || rel >= 0x30ed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ed50 size=512 callers=1 calls=2
   calls: sub_2f2420, sub_2f2600
*/
void sub_30ed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ed50ULL || rel >= 0x30ef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ef50 size=1696 callers=2 calls=7
   calls: sub_2f2420, sub_2f2600, sub_2f2740, sub_2f2850, sub_30dd20, sub_30e570, sub_30ed50
*/
void sub_30ef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ef50ULL || rel >= 0x30f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030f5f0 size=1520 callers=2 calls=5
   calls: sub_2f2420, sub_2f2600, sub_2f2720, sub_2f2740, sub_2f2850
*/
void sub_30f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30f5f0ULL || rel >= 0x30fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030fbe0 size=624 callers=1 calls=3
   calls: sub_2f2600, sub_2f2740, sub_2f2850
*/
void sub_30fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30fbe0ULL || rel >= 0x30fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030fe50 size=272 callers=1 calls=3
   calls: sub_2f2600, sub_2f2740, sub_2f2850
*/
void sub_30fe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30fe50ULL || rel >= 0x30ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030ff60 size=2928 callers=2 calls=5
   calls: sub_2de590, sub_2de5e0, sub_2de690, sub_2df910, sub_2dfa10
*/
void sub_30ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30ff60ULL || rel >= 0x310ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00310ad0 size=10512 callers=3 calls=2
   calls: sub_2defd0, sub_2df0d0
*/
void sub_310ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x310ad0ULL || rel >= 0x3133e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003133e0 size=592 callers=2 calls=1
   calls: s__05d
*/
void sub_3133e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3133e0ULL || rel >= 0x313630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313630 size=3472 callers=1 calls=1
   calls: slice_tc_offset_div2
   ref: %s_%05d.cfg
*/
void s__05d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313630ULL || rel >= 0x3143c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003143c0 size=1888 callers=1 calls=0
   ref: limit_slice_right_boundary
   ref: slice_cr_qp_offset
   ref: qp_avr
   ref: slice_beta_offset_div2
   ref: limit_slice_bot_boundary
   ref: me_control_idx
   ref: q_control_idx
   ref: slice_sao_luma_flag
*/
void slice_tc_offset_div2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3143c0ULL || rel >= 0x314b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314b20 size=688 callers=2 calls=0
*/
void sub_314b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314b20ULL || rel >= 0x314dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314dd0 size=2048 callers=2 calls=5
   calls: sub_3155d0, sub_315820, sub_316080, sub_316960, sub_316e50
*/
void sub_314dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314dd0ULL || rel >= 0x3155d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003155d0 size=592 callers=2 calls=0
*/
void sub_3155d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3155d0ULL || rel >= 0x315820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315820 size=2144 callers=1 calls=0
*/
void sub_315820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315820ULL || rel >= 0x316080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316080 size=2272 callers=1 calls=0
*/
void sub_316080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316080ULL || rel >= 0x316960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316960 size=1264 callers=1 calls=1
   calls: sub_3175a0
*/
void sub_316960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316960ULL || rel >= 0x316e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316e50 size=1776 callers=1 calls=0
*/
void sub_316e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316e50ULL || rel >= 0x317540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00317540 size=96 callers=1 calls=0
*/
void sub_317540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x317540ULL || rel >= 0x3175a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003175a0 size=3072 callers=1 calls=0
*/
void sub_3175a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3175a0ULL || rel >= 0x3181a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003181a0 size=816 callers=1 calls=0
*/
void sub_3181a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3181a0ULL || rel >= 0x3184d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003184d0 size=160 callers=0 calls=0
*/
void sub_3184d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3184d0ULL || rel >= 0x318570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318570 size=208 callers=0 calls=0
*/
void sub_318570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318570ULL || rel >= 0x318640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318640 size=528 callers=4 calls=0
*/
void sub_318640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318640ULL || rel >= 0x318850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318850 size=480 callers=5 calls=0
*/
void sub_318850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318850ULL || rel >= 0x318a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318a30 size=736 callers=9 calls=0
*/
void sub_318a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318a30ULL || rel >= 0x318d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318d10 size=688 callers=17 calls=0
*/
void sub_318d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318d10ULL || rel >= 0x318fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318fc0 size=16 callers=1 calls=0
*/
void sub_318fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318fc0ULL || rel >= 0x318fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318fd0 size=384 callers=0 calls=0
*/
void sub_318fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318fd0ULL || rel >= 0x319150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319150 size=160 callers=0 calls=1
   calls: sub_3191f0
*/
void sub_319150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319150ULL || rel >= 0x3191f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003191f0 size=640 callers=2 calls=0
*/
void sub_3191f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3191f0ULL || rel >= 0x319470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319470 size=448 callers=0 calls=1
   calls: sub_319630
*/
void sub_319470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319470ULL || rel >= 0x319630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319630 size=1088 callers=3 calls=1
   calls: sub_325560
*/
void sub_319630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319630ULL || rel >= 0x319a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00319a70 size=3984 callers=0 calls=4
   calls: sub_31aa00, sub_31abc0, sub_3313c0, sub_33c360
*/
void sub_319a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x319a70ULL || rel >= 0x31aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031aa00 size=448 callers=1 calls=2
   calls: sub_3354f0, sub_335f10
*/
void sub_31aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31aa00ULL || rel >= 0x31abc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031abc0 size=8368 callers=1 calls=3
   calls: sub_325560, sub_325cf0, sub_33ba80
*/
void sub_31abc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31abc0ULL || rel >= 0x31cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031cc70 size=16 callers=0 calls=0
*/
void sub_31cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31cc70ULL || rel >= 0x31cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031cc80 size=1136 callers=0 calls=4
   calls: sub_338580, sub_338590, sub_3387f0, sub_338860
*/
void sub_31cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31cc80ULL || rel >= 0x31d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031d0f0 size=96 callers=0 calls=0
*/
void sub_31d0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31d0f0ULL || rel >= 0x31d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031d150 size=12608 callers=0 calls=13
   calls: sub_3191f0, sub_320290, sub_320a40, sub_321100, sub_3238d0, sub_338460, sub_338520, sub_338540, sub_338560, sub_338580, sub_338590, sub_3387f0
   ... +1 more
*/
void sub_31d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31d150ULL || rel >= 0x320290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00320290 size=1968 callers=2 calls=6
   calls: sub_324760, sub_3248a0, sub_324c70, sub_338590, sub_3387f0, sub_338860
*/
void sub_320290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x320290ULL || rel >= 0x320a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00320a40 size=1728 callers=2 calls=2
   calls: sub_319630, sub_33b5d0
*/
void sub_320a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x320a40ULL || rel >= 0x321100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321100 size=10192 callers=2 calls=5
   calls: sub_325090, sub_325560, sub_325cf0, sub_330e60, sub_33ba80
*/
void sub_321100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321100ULL || rel >= 0x3238d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003238d0 size=2912 callers=2 calls=4
   calls: sub_324d60, sub_338590, sub_3387f0, sub_338860
*/
void sub_3238d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3238d0ULL || rel >= 0x324430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00324430 size=816 callers=0 calls=3
   calls: sub_338a80, sub_338a90, sub_33c360
*/
void sub_324430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x324430ULL || rel >= 0x324760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00324760 size=320 callers=2 calls=2
   calls: sub_338590, sub_3387f0
*/
void sub_324760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x324760ULL || rel >= 0x3248a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003248a0 size=976 callers=2 calls=3
   calls: sub_338590, sub_3387f0, sub_338860
*/
void sub_3248a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3248a0ULL || rel >= 0x324c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00324c70 size=240 callers=2 calls=2
   calls: sub_338590, sub_3387f0
*/
void sub_324c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x324c70ULL || rel >= 0x324d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00324d60 size=256 callers=2 calls=2
   calls: sub_338590, sub_3387f0
*/
void sub_324d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x324d60ULL || rel >= 0x324e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00324e60 size=560 callers=2 calls=3
   calls: sub_330670, sub_338590, sub_3387f0
*/
void sub_324e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x324e60ULL || rel >= 0x325090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325090 size=1232 callers=2 calls=0
*/
void sub_325090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325090ULL || rel >= 0x325560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325560 size=1376 callers=5 calls=1
   calls: sub_33ba80
*/
void sub_325560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325560ULL || rel >= 0x325ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325ac0 size=560 callers=5 calls=1
   calls: sub_33ba80
*/
void sub_325ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325ac0ULL || rel >= 0x325cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325cf0 size=560 callers=2 calls=0
*/
void sub_325cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325cf0ULL || rel >= 0x325f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325f20 size=1040 callers=0 calls=0
*/
void sub_325f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325f20ULL || rel >= 0x326330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00326330 size=400 callers=0 calls=0
*/
void sub_326330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x326330ULL || rel >= 0x3264c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003264c0 size=192 callers=0 calls=2
   calls: sub_325ac0, sub_32fb50
*/
void sub_3264c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3264c0ULL || rel >= 0x326580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00326580 size=6224 callers=0 calls=1
   calls: sub_33c360
*/
void sub_326580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x326580ULL || rel >= 0x327dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327dd0 size=1008 callers=1 calls=1
   calls: sub_325ac0
*/
void sub_327dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327dd0ULL || rel >= 0x3281c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003281c0 size=544 callers=1 calls=2
   calls: sub_338590, sub_3387f0
*/
void sub_3281c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3281c0ULL || rel >= 0x3283e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003283e0 size=30576 callers=0 calls=17
   calls: sub_324e60, sub_325ac0, sub_32fb50, sub_32fe80, sub_330520, sub_330700, sub_330970, sub_338460, sub_338520, sub_338540, sub_338560, sub_338580
   ... +5 more
   ref: tvmr.enablehdr10
*/
void tvmr_enablehdr10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3283e0ULL || rel >= 0x32fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032fb50 size=592 callers=6 calls=0
*/
void sub_32fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32fb50ULL || rel >= 0x32fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032fda0 size=48 callers=0 calls=0
*/
void sub_32fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32fda0ULL || rel >= 0x32fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032fdd0 size=176 callers=0 calls=1
   calls: sub_33c360
*/
void sub_32fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32fdd0ULL || rel >= 0x32fe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032fe80 size=640 callers=1 calls=1
   calls: sub_338590
*/
void sub_32fe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32fe80ULL || rel >= 0x330100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330100 size=1056 callers=0 calls=9
   calls: sub_327dd0, sub_3281c0, sub_3382b0, sub_338520, sub_338cf0, sub_339030, sub_33ad60, sub_33af30, sub_33b3c0
*/
void sub_330100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330100ULL || rel >= 0x330520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330520 size=336 callers=4 calls=1
   calls: sub_338590
*/
void sub_330520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330520ULL || rel >= 0x330670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330670 size=144 callers=3 calls=2
   calls: sub_338590, sub_3387f0
*/
void sub_330670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330670ULL || rel >= 0x330700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330700 size=624 callers=2 calls=3
   calls: sub_338590, sub_3387f0, sub_338860
*/
void sub_330700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330700ULL || rel >= 0x330970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330970 size=1264 callers=2 calls=2
   calls: sub_338590, sub_3387f0
*/
void sub_330970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330970ULL || rel >= 0x330e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330e60 size=1376 callers=1 calls=0
*/
void sub_330e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330e60ULL || rel >= 0x3313c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003313c0 size=320 callers=1 calls=2
   calls: sub_331500, sub_3382b0
*/
void sub_3313c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3313c0ULL || rel >= 0x331500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331500 size=16368 callers=1 calls=10
   calls: sub_324760, sub_3248a0, sub_324c70, sub_3354f0, sub_335c60, sub_336220, sub_338580, sub_338590, sub_3387f0, sub_338860
*/
void sub_331500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331500ULL || rel >= 0x3354f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003354f0 size=1904 callers=2 calls=0
*/
void sub_3354f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3354f0ULL || rel >= 0x335c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335c60 size=688 callers=2 calls=0
*/
void sub_335c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335c60ULL || rel >= 0x335f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335f10 size=784 callers=1 calls=0
*/
void sub_335f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335f10ULL || rel >= 0x336220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336220 size=480 callers=3 calls=0
*/
void sub_336220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336220ULL || rel >= 0x336400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336400 size=128 callers=0 calls=1
   calls: sub_337a80
*/
void sub_336400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336400ULL || rel >= 0x336480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336480 size=48 callers=0 calls=0
*/
void sub_336480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336480ULL || rel >= 0x3364b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003364b0 size=816 callers=1 calls=1
   calls: sub_338590
*/
void sub_3364b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3364b0ULL || rel >= 0x3367e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003367e0 size=432 callers=1 calls=3
   calls: sub_3364b0, sub_3382b0, sub_338590
*/
void sub_3367e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3367e0ULL || rel >= 0x336990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336990 size=352 callers=1 calls=0
*/
void sub_336990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336990ULL || rel >= 0x336af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336af0 size=1152 callers=1 calls=2
   calls: sub_336990, sub_338590
*/
void sub_336af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336af0ULL || rel >= 0x336f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336f70 size=560 callers=1 calls=3
   calls: sub_336af0, sub_3382b0, sub_338590
*/
void sub_336f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336f70ULL || rel >= 0x3371a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003371a0 size=2272 callers=0 calls=5
   calls: sub_3367e0, sub_336f70, sub_3382b0, sub_338590, sub_33b5d0
*/
void sub_3371a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3371a0ULL || rel >= 0x337a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00337a80 size=128 callers=1 calls=1
   calls: sub_33ba80
*/
void sub_337a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x337a80ULL || rel >= 0x337b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00337b00 size=16 callers=0 calls=0
*/
void sub_337b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x337b00ULL || rel >= 0x337b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00337b10 size=192 callers=0 calls=1
   calls: sub_33ba80
*/
void sub_337b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x337b10ULL || rel >= 0x337bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00337bd0 size=80 callers=0 calls=1
   calls: sub_33ba80
*/
void sub_337bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x337bd0ULL || rel >= 0x337c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00337c20 size=80 callers=0 calls=0
*/
void sub_337c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x337c20ULL || rel >= 0x337c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00337c70 size=816 callers=0 calls=0
*/
void sub_337c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x337c70ULL || rel >= 0x337fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00337fa0 size=112 callers=0 calls=0
*/
void sub_337fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x337fa0ULL || rel >= 0x338010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338010 size=80 callers=0 calls=0
*/
void sub_338010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338010ULL || rel >= 0x338060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338060 size=592 callers=0 calls=0
*/
void sub_338060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338060ULL || rel >= 0x3382b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003382b0 size=432 callers=14 calls=0
*/
void sub_3382b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3382b0ULL || rel >= 0x338460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338460 size=192 callers=2 calls=0
*/
void sub_338460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338460ULL || rel >= 0x338520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338520 size=32 callers=13 calls=0
*/
void sub_338520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338520ULL || rel >= 0x338540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338540 size=32 callers=8 calls=0
*/
void sub_338540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338540ULL || rel >= 0x338560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338560 size=32 callers=9 calls=0
*/
void sub_338560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338560ULL || rel >= 0x338580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338580 size=16 callers=9 calls=0
*/
void sub_338580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338580ULL || rel >= 0x338590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338590 size=592 callers=670 calls=0
*/
void sub_338590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338590ULL || rel >= 0x3387e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003387e0 size=16 callers=2 calls=0
*/
void sub_3387e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3387e0ULL || rel >= 0x3387f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003387f0 size=112 callers=189 calls=1
   calls: sub_338590
*/
void sub_3387f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3387f0ULL || rel >= 0x338860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338860 size=128 callers=84 calls=1
   calls: sub_338590
*/
void sub_338860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338860ULL || rel >= 0x3388e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003388e0 size=416 callers=3 calls=0
*/
void sub_3388e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3388e0ULL || rel >= 0x338a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338a80 size=16 callers=1 calls=0
*/
void sub_338a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338a80ULL || rel >= 0x338a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338a90 size=592 callers=3 calls=0
*/
void sub_338a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338a90ULL || rel >= 0x338ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338ce0 size=16 callers=0 calls=0
*/
void sub_338ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338ce0ULL || rel >= 0x338cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338cf0 size=240 callers=1 calls=1
   calls: sub_338de0
*/
void sub_338cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338cf0ULL || rel >= 0x338de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338de0 size=560 callers=4 calls=0
*/
void sub_338de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338de0ULL || rel >= 0x339010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339010 size=16 callers=0 calls=0
*/
void sub_339010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339010ULL || rel >= 0x339020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339020 size=16 callers=0 calls=0
*/
void sub_339020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339020ULL || rel >= 0x339030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339030 size=448 callers=5 calls=0
*/
void sub_339030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339030ULL || rel >= 0x3391f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003391f0 size=496 callers=0 calls=0
*/
void sub_3391f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3391f0ULL || rel >= 0x3393e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003393e0 size=1136 callers=0 calls=1
   calls: sub_3388e0
*/
void sub_3393e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3393e0ULL || rel >= 0x339850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339850 size=16 callers=0 calls=0
*/
void sub_339850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339850ULL || rel >= 0x339860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339860 size=5376 callers=3 calls=4
   calls: sub_3382b0, sub_339030, sub_33ad60, sub_33af30
   ref: ERROR : not supported 
*/
void ERROR_not_supported(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339860ULL || rel >= 0x33ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ad60 size=464 callers=9 calls=2
   calls: sub_3382b0, sub_33af30
*/
void sub_33ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ad60ULL || rel >= 0x33af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033af30 size=1168 callers=8 calls=1
   calls: sub_33b860
*/
void sub_33af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33af30ULL || rel >= 0x33b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b3c0 size=176 callers=1 calls=0
*/
void sub_33b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b3c0ULL || rel >= 0x33b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b470 size=16 callers=0 calls=0
*/
void sub_33b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b470ULL || rel >= 0x33b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b480 size=336 callers=2 calls=0
*/
void sub_33b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b480ULL || rel >= 0x33b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b5d0 size=656 callers=5 calls=1
   calls: sub_33b480
*/
void sub_33b5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b5d0ULL || rel >= 0x33b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b860 size=512 callers=1 calls=1
   calls: sub_338de0
*/
void sub_33b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b860ULL || rel >= 0x33ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ba60 size=32 callers=1 calls=0
*/
void sub_33ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ba60ULL || rel >= 0x33ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ba80 size=2272 callers=12 calls=0
*/
void sub_33ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ba80ULL || rel >= 0x33c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c360 size=240 callers=7 calls=0
*/
void sub_33c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c360ULL || rel >= 0x33c450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c450 size=208 callers=2 calls=0
*/
void sub_33c450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c450ULL || rel >= 0x33c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c520 size=304 callers=94 calls=1
   calls: sub_338590
*/
void sub_33c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c520ULL || rel >= 0x33c650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c650 size=112 callers=0 calls=1
   calls: sub_33c6c0
*/
void sub_33c650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c650ULL || rel >= 0x33c6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c6c0 size=240 callers=1 calls=0
*/
void sub_33c6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c6c0ULL || rel >= 0x33c7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c7b0 size=16 callers=0 calls=0
*/
void sub_33c7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c7b0ULL || rel >= 0x33c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c7c0 size=16 callers=0 calls=0
*/
void sub_33c7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c7c0ULL || rel >= 0x33c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c7d0 size=832 callers=0 calls=1
   calls: sub_33c450
*/
void sub_33c7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c7d0ULL || rel >= 0x33cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033cb10 size=1264 callers=0 calls=1
   calls: sub_33ba80
*/
void sub_33cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33cb10ULL || rel >= 0x33d000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d000 size=336 callers=1 calls=1
   calls: sub_338590
*/
void sub_33d000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d000ULL || rel >= 0x33d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d150 size=2256 callers=1 calls=1
   calls: sub_33c520
*/
void sub_33d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d150ULL || rel >= 0x33da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033da20 size=544 callers=0 calls=3
   calls: sub_33b5d0, sub_33d000, sub_33d150
*/
void sub_33da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33da20ULL || rel >= 0x33dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033dc40 size=176 callers=0 calls=1
   calls: sub_33c450
*/
void sub_33dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33dc40ULL || rel >= 0x33dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033dcf0 size=160 callers=0 calls=1
   calls: sub_33dd90
*/
void sub_33dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33dcf0ULL || rel >= 0x33dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033dd90 size=384 callers=1 calls=0
*/
void sub_33dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33dd90ULL || rel >= 0x33df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033df10 size=48 callers=0 calls=0
*/
void sub_33df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33df10ULL || rel >= 0x33df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033df40 size=16 callers=0 calls=0
*/
void sub_33df40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33df40ULL || rel >= 0x33df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033df50 size=896 callers=0 calls=3
   calls: sub_33b5d0, sub_33e2d0, sub_33eae0
*/
void sub_33df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33df50ULL || rel >= 0x33e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e2d0 size=2064 callers=1 calls=8
   calls: sub_338540, sub_338590, sub_347750, sub_347fe0, sub_3480b0, sub_3482e0, sub_348430, sub_348810
*/
void sub_33e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e2d0ULL || rel >= 0x33eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033eae0 size=13792 callers=1 calls=6
   calls: sub_338540, sub_338590, sub_345e30, sub_3460c0, sub_3465b0, sub_3470b0
*/
void sub_33eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33eae0ULL || rel >= 0x3420c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003420c0 size=1184 callers=0 calls=1
   calls: sub_33c360
*/
void sub_3420c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3420c0ULL || rel >= 0x342560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342560 size=272 callers=11 calls=1
   calls: sub_342560
*/
void sub_342560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342560ULL || rel >= 0x342670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342670 size=1056 callers=4 calls=1
   calls: sub_342560
*/
void sub_342670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342670ULL || rel >= 0x342a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342a90 size=7328 callers=1 calls=1
   calls: sub_342560
*/
void sub_342a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342a90ULL || rel >= 0x344730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00344730 size=400 callers=1 calls=0
*/
void sub_344730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x344730ULL || rel >= 0x3448c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003448c0 size=304 callers=8 calls=1
   calls: sub_3448c0
*/
void sub_3448c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3448c0ULL || rel >= 0x3449f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003449f0 size=2320 callers=1 calls=1
   calls: sub_3448c0
*/
void sub_3449f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3449f0ULL || rel >= 0x345300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00345300 size=352 callers=1 calls=4
   calls: sub_342670, sub_342a90, sub_344730, sub_3449f0
*/
void sub_345300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x345300ULL || rel >= 0x345460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00345460 size=944 callers=0 calls=3
   calls: sub_33ba60, sub_33ba80, sub_345300
*/
void sub_345460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x345460ULL || rel >= 0x345810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00345810 size=1568 callers=0 calls=2
   calls: ERROR_not_supported, sub_33b480
*/
void sub_345810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x345810ULL || rel >= 0x345e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00345e30 size=656 callers=1 calls=1
   calls: sub_338590
*/
void sub_345e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x345e30ULL || rel >= 0x3460c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003460c0 size=1264 callers=4 calls=2
   calls: sub_338590, sub_3470b0
*/
void sub_3460c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3460c0ULL || rel >= 0x3465b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003465b0 size=1152 callers=1 calls=1
   calls: sub_346a30
*/
void sub_3465b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3465b0ULL || rel >= 0x346a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346a30 size=784 callers=69 calls=1
   calls: sub_338590
*/
void sub_346a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346a30ULL || rel >= 0x346d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346d40 size=880 callers=1 calls=1
   calls: sub_338590
*/
void sub_346d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346d40ULL || rel >= 0x3470b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003470b0 size=944 callers=19 calls=2
   calls: sub_338590, sub_346d40
*/
void sub_3470b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3470b0ULL || rel >= 0x347460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00347460 size=752 callers=1 calls=0
*/
void sub_347460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x347460ULL || rel >= 0x347750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00347750 size=2192 callers=1 calls=1
   calls: sub_347460
*/
void sub_347750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x347750ULL || rel >= 0x347fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00347fe0 size=208 callers=2 calls=1
   calls: sub_338590
*/
void sub_347fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x347fe0ULL || rel >= 0x3480b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003480b0 size=560 callers=1 calls=1
   calls: sub_338590
*/
void sub_3480b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3480b0ULL || rel >= 0x3482e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003482e0 size=336 callers=1 calls=1
   calls: sub_338590
*/
void sub_3482e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3482e0ULL || rel >= 0x348430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348430 size=992 callers=1 calls=1
   calls: sub_338590
*/
void sub_348430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348430ULL || rel >= 0x348810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348810 size=208 callers=1 calls=1
   calls: sub_338590
*/
void sub_348810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348810ULL || rel >= 0x3488e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003488e0 size=192 callers=0 calls=1
   calls: sub_33c360
*/
void sub_3488e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3488e0ULL || rel >= 0x3489a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003489a0 size=16 callers=0 calls=0
*/
void sub_3489a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3489a0ULL || rel >= 0x3489b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003489b0 size=16 callers=0 calls=0
*/
void sub_3489b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3489b0ULL || rel >= 0x3489c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003489c0 size=16 callers=0 calls=0
*/
void sub_3489c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3489c0ULL || rel >= 0x3489d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003489d0 size=160 callers=2 calls=0
*/
void sub_3489d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3489d0ULL || rel >= 0x348a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348a70 size=16 callers=0 calls=0
*/
void sub_348a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348a70ULL || rel >= 0x348a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348a80 size=16 callers=0 calls=0
*/
void sub_348a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348a80ULL || rel >= 0x348a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348a90 size=16 callers=0 calls=0
*/
void sub_348a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348a90ULL || rel >= 0x348aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348aa0 size=16 callers=0 calls=0
*/
void sub_348aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348aa0ULL || rel >= 0x348ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348ab0 size=32 callers=0 calls=0
*/
void sub_348ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348ab0ULL || rel >= 0x348ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348ad0 size=16 callers=0 calls=0
*/
void sub_348ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348ad0ULL || rel >= 0x348ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348ae0 size=16 callers=0 calls=0
*/
void sub_348ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348ae0ULL || rel >= 0x348af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348af0 size=16 callers=0 calls=0
*/
void sub_348af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348af0ULL || rel >= 0x348b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348b00 size=288 callers=0 calls=2
   calls: sub_34ade0, sub_35e1c0
*/
void sub_348b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348b00ULL || rel >= 0x348c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348c20 size=16 callers=0 calls=0
*/
void sub_348c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348c20ULL || rel >= 0x348c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348c30 size=32 callers=0 calls=0
*/
void sub_348c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348c30ULL || rel >= 0x348c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348c50 size=512 callers=0 calls=4
   calls: sub_3489d0, sub_34ae10, sub_34b050, sub_35e260
*/
void sub_348c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348c50ULL || rel >= 0x348e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348e50 size=16 callers=0 calls=0
*/
void sub_348e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348e50ULL || rel >= 0x348e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348e60 size=96 callers=0 calls=0
*/
void sub_348e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348e60ULL || rel >= 0x348ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00348ec0 size=336 callers=0 calls=1
   calls: sub_34ade0
*/
void sub_348ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x348ec0ULL || rel >= 0x349010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349010 size=4480 callers=0 calls=2
   calls: sub_34ae10, sub_34b050
*/
void sub_349010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349010ULL || rel >= 0x34a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a190 size=272 callers=0 calls=3
   calls: sub_34ade0, sub_34ae10, sub_34b050
*/
void sub_34a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a190ULL || rel >= 0x34a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a2a0 size=80 callers=0 calls=1
   calls: sub_34ade0
*/
void sub_34a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a2a0ULL || rel >= 0x34a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a2f0 size=96 callers=0 calls=1
   calls: sub_34ade0
*/
void sub_34a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a2f0ULL || rel >= 0x34a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a350 size=32 callers=0 calls=0
*/
void sub_34a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a350ULL || rel >= 0x34a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a370 size=672 callers=0 calls=3
   calls: sub_34ade0, sub_34ae10, sub_34b050
*/
void sub_34a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a370ULL || rel >= 0x34a610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a610 size=96 callers=0 calls=1
   calls: sub_34ade0
*/
void sub_34a610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a610ULL || rel >= 0x34a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a670 size=544 callers=0 calls=3
   calls: sub_34ade0, sub_34ae10, sub_34b050
*/
void sub_34a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a670ULL || rel >= 0x34a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a890 size=16 callers=0 calls=0
*/
void sub_34a890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a890ULL || rel >= 0x34a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a8a0 size=48 callers=0 calls=1
   calls: sub_34b050
*/
void sub_34a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a8a0ULL || rel >= 0x34a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a8d0 size=32 callers=0 calls=0
*/
void sub_34a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a8d0ULL || rel >= 0x34a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a8f0 size=64 callers=0 calls=0
*/
void sub_34a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a8f0ULL || rel >= 0x34a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a930 size=16 callers=0 calls=0
*/
void sub_34a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a930ULL || rel >= 0x34a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a940 size=272 callers=0 calls=0
*/
void sub_34a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a940ULL || rel >= 0x34aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034aa50 size=32 callers=8 calls=0
*/
void sub_34aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34aa50ULL || rel >= 0x34aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034aa70 size=304 callers=0 calls=1
   calls: sub_34aa50
*/
void sub_34aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34aa70ULL || rel >= 0x34aba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034aba0 size=272 callers=0 calls=0
*/
void sub_34aba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34aba0ULL || rel >= 0x34acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034acb0 size=304 callers=0 calls=1
   calls: sub_34aa50
*/
void sub_34acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34acb0ULL || rel >= 0x34ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034ade0 size=48 callers=85 calls=0
*/
void sub_34ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34ade0ULL || rel >= 0x34ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034ae10 size=240 callers=81 calls=0
*/
void sub_34ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34ae10ULL || rel >= 0x34af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034af00 size=48 callers=2 calls=0
*/
void sub_34af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34af00ULL || rel >= 0x34af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034af30 size=192 callers=18 calls=0
*/
void sub_34af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34af30ULL || rel >= 0x34aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034aff0 size=32 callers=1 calls=0
*/
void sub_34aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34aff0ULL || rel >= 0x34b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b010 size=64 callers=0 calls=0
*/
void sub_34b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b010ULL || rel >= 0x34b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b050 size=64 callers=41 calls=0
*/
void sub_34b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b050ULL || rel >= 0x34b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b090 size=64 callers=0 calls=0
*/
void sub_34b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b090ULL || rel >= 0x34b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b0d0 size=16 callers=0 calls=0
*/
void sub_34b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b0d0ULL || rel >= 0x34b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b0e0 size=16 callers=0 calls=0
*/
void sub_34b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b0e0ULL || rel >= 0x34b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b0f0 size=384 callers=0 calls=1
   calls: sub_3489d0
*/
void sub_34b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b0f0ULL || rel >= 0x34b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b270 size=64 callers=0 calls=0
*/
void sub_34b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b270ULL || rel >= 0x34b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b2b0 size=128 callers=0 calls=0
*/
void sub_34b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b2b0ULL || rel >= 0x34b330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b330 size=16 callers=0 calls=0
*/
void sub_34b330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b330ULL || rel >= 0x34b340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b340 size=32 callers=0 calls=0
*/
void sub_34b340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b340ULL || rel >= 0x34b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b360 size=16 callers=0 calls=0
*/
void sub_34b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b360ULL || rel >= 0x34b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b370 size=16 callers=0 calls=0
*/
void sub_34b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b370ULL || rel >= 0x34b380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b380 size=16 callers=0 calls=0
*/
void sub_34b380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b380ULL || rel >= 0x34b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b390 size=16 callers=0 calls=0
*/
void sub_34b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b390ULL || rel >= 0x34b3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b3a0 size=16 callers=0 calls=0
*/
void sub_34b3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b3a0ULL || rel >= 0x34b3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b3b0 size=64 callers=0 calls=0
*/
void sub_34b3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b3b0ULL || rel >= 0x34b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b3f0 size=160 callers=4 calls=0
*/
void sub_34b3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b3f0ULL || rel >= 0x34b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b490 size=832 callers=4 calls=1
   calls: sub_34b050
*/
void sub_34b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b490ULL || rel >= 0x34b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b7d0 size=80 callers=4 calls=0
   ref: /data/Profilestats.csv
*/
void Profilestats(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b7d0ULL || rel >= 0x34b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b820 size=64 callers=4 calls=0
   ref: %d,%d,%d,%d,%lld,%f,%f,%f,
   ref: %d,%d,%d,%lld,%f,%f,
*/
void d_d_d_lld_f_f(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b820ULL || rel >= 0x34b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b860 size=128 callers=4 calls=0
   ref: %d,%d,%d, 
   ref: Frame_Number,PASS2_cycle_count,Bits_Per_Frame,Frame_Decode_Time(Us),Cycles_Per_Mb,Total_Time_Taken_P
   ref: Width,Height,Chroma_Format, 
   ref: Frame_Number,PASS1_cycle_count,PASS2_cycle_count,Bits_Per_Frame,Frame_Decode_Time(Us),Cycles_Per_Mb,
*/
void d_d_d_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b860ULL || rel >= 0x34b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b8e0 size=272 callers=2 calls=3
   calls: sub_34ade0, sub_34b3f0, sub_34b9f0
*/
void sub_34b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b8e0ULL || rel >= 0x34b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b9f0 size=208 callers=2 calls=1
   calls: sub_34ade0
*/
void sub_34b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b9f0ULL || rel >= 0x34bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034bac0 size=1184 callers=0 calls=6
   calls: Profilestats, sub_34ae10, sub_34b050, sub_34b490, sub_34b8e0, sub_34b9f0
*/
void sub_34bac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34bac0ULL || rel >= 0x34bf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034bf60 size=16 callers=0 calls=0
*/
void sub_34bf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34bf60ULL || rel >= 0x34bf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034bf70 size=8960 callers=0 calls=2
   calls: d_d_d_6, sub_34af30
*/
void sub_34bf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34bf70ULL || rel >= 0x34e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e270 size=224 callers=0 calls=1
   calls: d_d_d_lld_f_f
*/
void sub_34e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e270ULL || rel >= 0x34e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e350 size=400 callers=2 calls=3
   calls: sub_34ade0, sub_34b3f0, sub_34e4e0
*/
void sub_34e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e350ULL || rel >= 0x34e4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e4e0 size=272 callers=2 calls=1
   calls: sub_34ade0
*/
void sub_34e4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e4e0ULL || rel >= 0x34e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e5f0 size=1760 callers=0 calls=6
   calls: Profilestats, sub_34ae10, sub_34b050, sub_34b490, sub_34e350, sub_34e4e0
*/
void sub_34e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e5f0ULL || rel >= 0x34ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034ecd0 size=1584 callers=2 calls=1
   calls: sub_34af30
*/
void sub_34ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34ecd0ULL || rel >= 0x34f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f300 size=14032 callers=0 calls=2
   calls: d_d_d_6, sub_34ecd0
*/
void sub_34f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f300ULL || rel >= 0x3529d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003529d0 size=288 callers=0 calls=1
   calls: d_d_d_lld_f_f
*/
void sub_3529d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3529d0ULL || rel >= 0x352af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352af0 size=544 callers=0 calls=1
   calls: sub_34ecd0
*/
void sub_352af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352af0ULL || rel >= 0x352d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352d10 size=192 callers=1 calls=3
   calls: sub_34ade0, sub_34b3f0, sub_352dd0
*/
void sub_352d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352d10ULL || rel >= 0x352dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352dd0 size=128 callers=2 calls=1
   calls: sub_34ade0
*/
void sub_352dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352dd0ULL || rel >= 0x352e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352e50 size=800 callers=0 calls=6
   calls: Profilestats, sub_34ae10, sub_34b050, sub_34b490, sub_352d10, sub_352dd0
*/
void sub_352e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352e50ULL || rel >= 0x353170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353170 size=2128 callers=0 calls=2
   calls: d_d_d_6, sub_34af30
*/
void sub_353170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353170ULL || rel >= 0x3539c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003539c0 size=224 callers=0 calls=1
   calls: d_d_d_lld_f_f
*/
void sub_3539c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3539c0ULL || rel >= 0x353aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353aa0 size=240 callers=2 calls=0
*/
void sub_353aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353aa0ULL || rel >= 0x353b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353b90 size=224 callers=2 calls=0
*/
void sub_353b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353b90ULL || rel >= 0x353c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353c70 size=320 callers=2 calls=0
*/
void sub_353c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353c70ULL || rel >= 0x353db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353db0 size=320 callers=0 calls=1
   calls: sub_353ef0
*/
void sub_353db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353db0ULL || rel >= 0x353ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353ef0 size=5568 callers=3 calls=2
   calls: sub_353c70, sub_3568d0
*/
void sub_353ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353ef0ULL || rel >= 0x3554b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003554b0 size=208 callers=1 calls=1
   calls: sub_34ade0
*/
void sub_3554b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3554b0ULL || rel >= 0x355580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355580 size=160 callers=0 calls=2
   calls: sub_34ade0, sub_34ae10
*/
void sub_355580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355580ULL || rel >= 0x355620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

