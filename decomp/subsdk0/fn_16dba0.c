/* subsdk0 functions 0016dba0..00189220 (10 of 20). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0016dba0 size=960 callers=0 calls=0
   ref: cipher-method
   ref: AES-128
   ref: !(mPlaylist->itemAt(i, 0L, &itemMeta))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: cipher-uri
   ref: PlaylistFetcher
*/
void PlaylistFetcher_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dba0ULL || rel >= 0x16df60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016df60 size=336 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: cipher-method
   ref: !(buffer->meta()->findString("cipher-method", &method))
   ref: PlaylistFetcher
*/
void PlaylistFetcher_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16df60ULL || rel >= 0x16e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e0b0 size=176 callers=0 calls=0
   ref: generation
*/
void generation_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e0b0ULL || rel >= 0x16e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e160 size=16 callers=0 calls=0
*/
void sub_16e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e160ULL || rel >= 0x16e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e170 size=128 callers=0 calls=0
*/
void sub_16e170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e170ULL || rel >= 0x16e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e1f0 size=400 callers=0 calls=0
   ref: segmentStartTimeUs
   ref: startTimeUs
   ref: audioSource
   ref: videoSource
   ref: startDiscontinuitySeq
   ref: adaptive
   ref: prevTimeUs
   ref: subtitleSource
*/
void subtitleSource(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e1f0ULL || rel >= 0x16e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e380 size=128 callers=0 calls=0
*/
void sub_16e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e380ULL || rel >= 0x16e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e400 size=144 callers=0 calls=0
*/
void sub_16e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e400ULL || rel >= 0x16e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e490 size=144 callers=0 calls=0
   ref: params
*/
void params(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e490ULL || rel >= 0x16e520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e520 size=656 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: generation
   ref: PlaylistFetcher
   ref: !(msg->findInt32("generation", &generation))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void PlaylistFetcher_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e520ULL || rel >= 0x16e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016e7b0 size=1264 callers=0 calls=0
   ref: segmentStartTimeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(msg->findPointer("audioSource", &ptr))
   ref: !(msg->findPointer("videoSource", &ptr))
   ref: !(msg->findPointer("subtitleSource", &ptr))
   ref: !(msg->findInt64("prevTimeUs", &prevTimeUs))
   ref: startTimeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void subtitleSource_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e7b0ULL || rel >= 0x16eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016eca0 size=16 callers=0 calls=0
*/
void sub_16eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eca0ULL || rel >= 0x16ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016ecb0 size=288 callers=0 calls=0
   ref: !(msg->findInt32("clear", &clear))
   ref: PlaylistFetcher
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void PlaylistFetcher_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ecb0ULL || rel >= 0x16edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016edd0 size=928 callers=0 calls=0
   ref: target-duration
   ref: %s: key not found
   ref: generation
   ref: PlaylistFetcher
   ref: const VALUE &android::KeyedVector<android::LiveSession::StreamType, android::sp<android::AnotherPack
*/
void PlaylistFetcher_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16edd0ULL || rel >= 0x16f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0016f170 size=4272 callers=0 calls=0
   ref: range-offset
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mPlaylist->itemAt( mSeqNumber - firstSeqNumberInPlaylist, &uri, &itemMeta))
   ref: cipher-method
   ref: media-sequence
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(buffer != 0L)
   ref: target-duration
*/
void PlaylistFetcher_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f170ULL || rel >= 0x170220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00170220 size=704 callers=0 calls=0
   ref: timeUs
   ref: timeUsVideo
   ref: timeUsSubtitle
   ref: discontinuitySeq
   ref: timeUsAudio
   ref: params
   ref: PlaylistFetcher
   ref: !(msg->findMessage("params", &params))
*/
void timeUsSubtitle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170220ULL || rel >= 0x1704e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001704e0 size=112 callers=0 calls=0
*/
void sub_1704e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1704e0ULL || rel >= 0x170550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00170550 size=112 callers=0 calls=0
*/
void sub_170550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170550ULL || rel >= 0x1705c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001705c0 size=336 callers=0 calls=0
*/
void sub_1705c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1705c0ULL || rel >= 0x170710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00170710 size=384 callers=0 calls=0
   ref: !(itemMeta->findInt64("durationUs", &itemDurationUs))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mPlaylist->itemAt( index, 0L , &itemMeta))
   ref: PlaylistFetcher
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: durationUs
*/
void PlaylistFetcher_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170710ULL || rel >= 0x170890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00170890 size=48 callers=0 calls=0
*/
void sub_170890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170890ULL || rel >= 0x1708c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001708c0 size=448 callers=0 calls=0
   ref: media-sequence
   ref: !(itemMeta->findInt64("durationUs", &itemDurationUs))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mPlaylist->itemAt( index, 0L , &itemMeta))
   ref: PlaylistFetcher
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: durationUs
*/
void PlaylistFetcher_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1708c0ULL || rel >= 0x170a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00170a80 size=416 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: media-sequence
   ref: !(mPlaylist->itemAt( index, 0L , &itemMeta))
   ref: PlaylistFetcher
   ref: discontinuity
*/
void PlaylistFetcher_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170a80ULL || rel >= 0x170c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00170c20 size=2304 callers=0 calls=0
   ref: timeUs
   ref: timeUsVideo
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: discontinuitySeq
   ref: media-sequence
   ref: timeUsAudio
   ref: target-duration
   ref: !(accessUnit->meta()->findInt64("timeUs", &timeUs))
*/
void discontinuitySeq(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x170c20ULL || rel >= 0x171520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00171520 size=3536 callers=0 calls=0
   ref: segmentStartTimeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: timeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: discontinuitySeq
   ref: WEBVTT
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void subtitleGeneration_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x171520ULL || rel >= 0x1722f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001722f0 size=448 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: media-sequence
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(itemMeta->findInt64("durationUs", &itemDurationUs))
   ref: PlaylistFetcher
   ref: durationUs
   ref: !(mPlaylist->itemAt(index, 0L , &itemMeta))
*/
void PlaylistFetcher_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1722f0ULL || rel >= 0x1724b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001724b0 size=464 callers=0 calls=0
   ref: segmentStartTimeUs
   ref: discontinuitySeq
   ref: target-duration
   ref: format
   ref: targetDuration
   ref: discard
*/
void segmentStartTimeUs_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1724b0ULL || rel >= 0x172680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172680 size=272 callers=0 calls=0
   ref: WEBVTT
*/
void WEBVTT(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172680ULL || rel >= 0x172790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172790 size=64 callers=0 calls=0
*/
void sub_172790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172790ULL || rel >= 0x1727d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001727d0 size=64 callers=0 calls=0
*/
void sub_1727d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1727d0ULL || rel >= 0x172810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172810 size=64 callers=0 calls=0
*/
void sub_172810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172810ULL || rel >= 0x172850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172850 size=80 callers=0 calls=0
*/
void sub_172850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172850ULL || rel >= 0x1728a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001728a0 size=96 callers=0 calls=0
*/
void sub_1728a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1728a0ULL || rel >= 0x172900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172900 size=96 callers=0 calls=0
*/
void sub_172900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172900ULL || rel >= 0x172960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172960 size=160 callers=0 calls=0
*/
void sub_172960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172960ULL || rel >= 0x172a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172a00 size=128 callers=0 calls=0
*/
void sub_172a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172a00ULL || rel >= 0x172a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172a80 size=80 callers=0 calls=0
*/
void sub_172a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172a80ULL || rel >= 0x172ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172ad0 size=112 callers=0 calls=0
*/
void sub_172ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172ad0ULL || rel >= 0x172b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172b40 size=1056 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void ID3_cpp_323_CHECK_EQ_header_version_major_4_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172b40ULL || rel >= 0x172f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00172f60 size=240 callers=0 calls=0
*/
void sub_172f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x172f60ULL || rel >= 0x173050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00173050 size=288 callers=0 calls=0
*/
void sub_173050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173050ULL || rel >= 0x173170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00173170 size=48 callers=0 calls=0
*/
void sub_173170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173170ULL || rel >= 0x1731a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001731a0 size=16 callers=0 calls=0
*/
void sub_1731a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1731a0ULL || rel >= 0x1731b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001731b0 size=16 callers=0 calls=0
*/
void sub_1731b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1731b0ULL || rel >= 0x1731c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001731c0 size=96 callers=0 calls=0
*/
void sub_1731c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1731c0ULL || rel >= 0x173220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00173220 size=656 callers=0 calls=0
*/
void sub_173220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173220ULL || rel >= 0x1734b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001734b0 size=112 callers=0 calls=0
*/
void sub_1734b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1734b0ULL || rel >= 0x173520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00173520 size=64 callers=0 calls=0
*/
void sub_173520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173520ULL || rel >= 0x173560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00173560 size=960 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mParent.mVersion == ID3_V1 || mParent.mVersion == ID3_V1_1)
   ref: !(!"Should not be here, invalid offset.")
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void ID3_cpp_835_CHECK_Should_not_be_here_invalid_offset_fail(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173560ULL || rel >= 0x173920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00173920 size=48 callers=0 calls=0
*/
void sub_173920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173920ULL || rel >= 0x173950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00173950 size=16 callers=0 calls=0
*/
void sub_173950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173950ULL || rel >= 0x173960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00173960 size=32 callers=0 calls=0
*/
void sub_173960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173960ULL || rel >= 0x173980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00173980 size=480 callers=0 calls=0
   ref: !(mParent.mVersion == ID3_V1 || mParent.mVersion == ID3_V1_1)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(!"should not be here.")
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void ID3_cpp_508_CHECK_should_not_be_here_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173980ULL || rel >= 0x173b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00173b60 size=80 callers=0 calls=0
*/
void sub_173b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b60ULL || rel >= 0x173bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00173bb0 size=1280 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mParent.mVersion == ID3_V1 || mParent.mVersion == ID3_V1_1)
*/
void ID3_cpp_683_CHECK_mParent_mVersion_ID3_V1_mParent_mVersi(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173bb0ULL || rel >= 0x1740b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001740b0 size=96 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mParent.mVersion == ID3_V1 || mParent.mVersion == ID3_V1_1)
*/
void ID3_cpp_683_CHECK_mParent_mVersion_ID3_V1_mParent_mVersi_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1740b0ULL || rel >= 0x174110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00174110 size=160 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mParent.mVersion == ID3_V1 || mParent.mVersion == ID3_V1_1)
*/
void ID3_cpp_683_CHECK_mParent_mVersion_ID3_V1_mParent_mVersi_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x174110ULL || rel >= 0x1741b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001741b0 size=784 callers=0 calls=0
   ref: image/png
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mParent.mVersion == ID3_V1 || mParent.mVersion == ID3_V1_1)
   ref: image/jpeg
   ref: text/plain
*/
void plain(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1741b0ULL || rel >= 0x1744c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001744c0 size=48 callers=0 calls=0
*/
void sub_1744c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1744c0ULL || rel >= 0x1744f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001744f0 size=16 callers=0 calls=0
*/
void sub_1744f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1744f0ULL || rel >= 0x174500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00174500 size=64 callers=0 calls=0
*/
void sub_174500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x174500ULL || rel >= 0x174540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00174540 size=160 callers=0 calls=0
*/
void sub_174540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x174540ULL || rel >= 0x1745e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001745e0 size=368 callers=0 calls=0
   ref: audio/
   ref: video/
   ref: !(!strncasecmp("text/", mime, 5))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(meta->findCString(kKeyMIMEType, &mime))
   ref: AnotherPacketSource
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mFormat == 0L)
*/
void AnotherPacketSource(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1745e0ULL || rel >= 0x174750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00174750 size=176 callers=0 calls=0
*/
void sub_174750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x174750ULL || rel >= 0x174800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00174800 size=256 callers=0 calls=0
*/
void sub_174800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x174800ULL || rel >= 0x174900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00174900 size=48 callers=0 calls=0
*/
void sub_174900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x174900ULL || rel >= 0x174930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00174930 size=64 callers=0 calls=0
*/
void sub_174930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x174930ULL || rel >= 0x174970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00174970 size=64 callers=0 calls=0
*/
void sub_174970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x174970ULL || rel >= 0x1749b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001749b0 size=64 callers=0 calls=0
*/
void sub_1749b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749b0ULL || rel >= 0x1749f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001749f0 size=16 callers=0 calls=0
*/
void sub_1749f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749f0ULL || rel >= 0x174a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00174a00 size=16 callers=0 calls=0
*/
void sub_174a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x174a00ULL || rel >= 0x174a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00174a10 size=464 callers=0 calls=0
   ref: format
   ref: discontinuity
*/
void discontinuity_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x174a10ULL || rel >= 0x174be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00174be0 size=640 callers=0 calls=0
   ref: format
   ref: discontinuity
*/
void discontinuity_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x174be0ULL || rel >= 0x174e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00174e60 size=48 callers=0 calls=0
*/
void sub_174e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x174e60ULL || rel >= 0x174e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00174e90 size=800 callers=0 calls=0
   ref: timeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: AnotherPacketSource
   ref: format
   ref: !(buffer->meta()->findInt64("timeUs", &timeUs))
   ref: discontinuity
*/
void AnotherPacketSource_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x174e90ULL || rel >= 0x1751b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001751b0 size=736 callers=0 calls=0
   ref: damaged
   ref: timeUs
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: AnotherPacketSource
   ref: !(buffer->meta()->findInt64("timeUs", &lastQueuedTimeUs))
   ref: !(mLatestEnqueuedMeta->findInt64("timeUs", &latestTimeUs))
   ref: discontinuity
   ref: durationUs
*/
void AnotherPacketSource_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1751b0ULL || rel >= 0x175490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00175490 size=192 callers=0 calls=0
*/
void sub_175490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x175490ULL || rel >= 0x175550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00175550 size=560 callers=0 calls=0
   ref: discontinuity
*/
void discontinuity_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x175550ULL || rel >= 0x175780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00175780 size=112 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: AnotherPacketSource
   ref: !(result != OK)
*/
void AnotherPacketSource_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x175780ULL || rel >= 0x1757f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001757f0 size=112 callers=0 calls=0
*/
void sub_1757f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1757f0ULL || rel >= 0x175860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00175860 size=80 callers=0 calls=0
*/
void sub_175860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x175860ULL || rel >= 0x1758b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001758b0 size=336 callers=0 calls=0
   ref: timeUs
   ref: discontinuity
*/
void discontinuity_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1758b0ULL || rel >= 0x175a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00175a00 size=352 callers=0 calls=0
   ref: timeUs
*/
void timeUs_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x175a00ULL || rel >= 0x175b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00175b60 size=256 callers=0 calls=0
   ref: timeUs
   ref: !(buffer->meta()->findInt64("timeUs", timeUs))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: AnotherPacketSource
*/
void AnotherPacketSource_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x175b60ULL || rel >= 0x175c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00175c60 size=80 callers=0 calls=0
*/
void sub_175c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x175c60ULL || rel >= 0x175cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00175cb0 size=80 callers=0 calls=0
*/
void sub_175cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x175cb0ULL || rel >= 0x175d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00175d00 size=80 callers=0 calls=0
*/
void sub_175d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x175d00ULL || rel >= 0x175d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00175d50 size=128 callers=0 calls=0
*/
void sub_175d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x175d50ULL || rel >= 0x175dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00175dd0 size=80 callers=0 calls=0
*/
void sub_175dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x175dd0ULL || rel >= 0x175e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00175e20 size=2688 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: ATSParser
*/
void ATSParser(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x175e20ULL || rel >= 0x1768a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001768a0 size=176 callers=0 calls=0
*/
void sub_1768a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1768a0ULL || rel >= 0x176950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00176950 size=512 callers=0 calls=0
*/
void sub_176950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x176950ULL || rel >= 0x176b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00176b50 size=160 callers=0 calls=0
*/
void sub_176b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x176b50ULL || rel >= 0x176bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00176bf0 size=384 callers=0 calls=0
   ref: resume-at-mediaTimeUs
*/
void resume_at_mediaTimeUs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x176bf0ULL || rel >= 0x176d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00176d70 size=112 callers=0 calls=0
*/
void sub_176d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x176d70ULL || rel >= 0x176de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00176de0 size=16 callers=0 calls=0
*/
void sub_176de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x176de0ULL || rel >= 0x176df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00176df0 size=64 callers=0 calls=0
*/
void sub_176df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x176df0ULL || rel >= 0x176e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00176e30 size=48 callers=0 calls=0
*/
void sub_176e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x176e30ULL || rel >= 0x176e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00176e60 size=384 callers=0 calls=0
*/
void sub_176e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x176e60ULL || rel >= 0x176fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00176fe0 size=144 callers=0 calls=0
*/
void sub_176fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x176fe0ULL || rel >= 0x177070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177070 size=208 callers=0 calls=0
*/
void sub_177070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177070ULL || rel >= 0x177140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177140 size=64 callers=0 calls=0
*/
void sub_177140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177140ULL || rel >= 0x177180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177180 size=48 callers=0 calls=0
*/
void sub_177180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177180ULL || rel >= 0x1771b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001771b0 size=160 callers=0 calls=0
*/
void sub_1771b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1771b0ULL || rel >= 0x177250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177250 size=400 callers=0 calls=0
*/
void sub_177250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177250ULL || rel >= 0x1773e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001773e0 size=256 callers=0 calls=0
*/
void sub_1773e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1773e0ULL || rel >= 0x1774e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001774e0 size=48 callers=0 calls=0
*/
void sub_1774e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1774e0ULL || rel >= 0x177510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177510 size=240 callers=0 calls=0
*/
void sub_177510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177510ULL || rel >= 0x177600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177600 size=1216 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: ATSParser
*/
void ATSParser_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177600ULL || rel >= 0x177ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177ac0 size=672 callers=0 calls=0
*/
void sub_177ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177ac0ULL || rel >= 0x177d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177d60 size=320 callers=0 calls=0
*/
void sub_177d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d60ULL || rel >= 0x177ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177ea0 size=128 callers=0 calls=0
*/
void sub_177ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177ea0ULL || rel >= 0x177f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177f20 size=64 callers=0 calls=0
*/
void sub_177f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177f20ULL || rel >= 0x177f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177f60 size=128 callers=0 calls=0
*/
void sub_177f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177f60ULL || rel >= 0x177fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00177fe0 size=96 callers=0 calls=0
*/
void sub_177fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177fe0ULL || rel >= 0x178040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178040 size=288 callers=0 calls=0
*/
void sub_178040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178040ULL || rel >= 0x178160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178160 size=480 callers=0 calls=0
   ref: timeUs
   ref: offset
*/
void timeUs_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178160ULL || rel >= 0x178340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178340 size=176 callers=0 calls=0
*/
void sub_178340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178340ULL || rel >= 0x1783f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001783f0 size=1312 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: ATSParser
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void ATSParser_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1783f0ULL || rel >= 0x178910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178910 size=912 callers=0 calls=0
*/
void sub_178910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178910ULL || rel >= 0x178ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178ca0 size=32 callers=0 calls=0
*/
void sub_178ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178ca0ULL || rel >= 0x178cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178cc0 size=352 callers=0 calls=0
*/
void sub_178cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178cc0ULL || rel >= 0x178e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178e20 size=112 callers=0 calls=0
*/
void sub_178e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178e20ULL || rel >= 0x178e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178e90 size=32 callers=0 calls=0
*/
void sub_178e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178e90ULL || rel >= 0x178eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178eb0 size=32 callers=0 calls=0
*/
void sub_178eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178eb0ULL || rel >= 0x178ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178ed0 size=32 callers=0 calls=0
*/
void sub_178ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178ed0ULL || rel >= 0x178ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00178ef0 size=608 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: ATSParser
*/
void ATSParser_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178ef0ULL || rel >= 0x179150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179150 size=144 callers=0 calls=0
*/
void sub_179150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179150ULL || rel >= 0x1791e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001791e0 size=128 callers=0 calls=0
*/
void sub_1791e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1791e0ULL || rel >= 0x179260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179260 size=272 callers=0 calls=0
*/
void sub_179260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179260ULL || rel >= 0x179370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179370 size=64 callers=0 calls=0
*/
void sub_179370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179370ULL || rel >= 0x1793b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001793b0 size=64 callers=0 calls=0
*/
void sub_1793b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1793b0ULL || rel >= 0x1793f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001793f0 size=64 callers=0 calls=0
*/
void sub_1793f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1793f0ULL || rel >= 0x179430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179430 size=80 callers=0 calls=0
*/
void sub_179430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179430ULL || rel >= 0x179480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179480 size=96 callers=0 calls=0
*/
void sub_179480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179480ULL || rel >= 0x1794e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001794e0 size=96 callers=0 calls=0
*/
void sub_1794e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1794e0ULL || rel >= 0x179540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179540 size=128 callers=0 calls=0
*/
void sub_179540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179540ULL || rel >= 0x1795c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001795c0 size=128 callers=0 calls=0
*/
void sub_1795c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1795c0ULL || rel >= 0x179640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179640 size=64 callers=0 calls=0
*/
void sub_179640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179640ULL || rel >= 0x179680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179680 size=64 callers=0 calls=0
*/
void sub_179680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179680ULL || rel >= 0x1796c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001796c0 size=96 callers=0 calls=0
*/
void sub_1796c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1796c0ULL || rel >= 0x179720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179720 size=64 callers=0 calls=0
*/
void sub_179720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179720ULL || rel >= 0x179760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179760 size=96 callers=0 calls=0
*/
void sub_179760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179760ULL || rel >= 0x1797c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001797c0 size=96 callers=0 calls=0
*/
void sub_1797c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1797c0ULL || rel >= 0x179820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179820 size=128 callers=0 calls=0
*/
void sub_179820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179820ULL || rel >= 0x1798a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001798a0 size=112 callers=0 calls=0
*/
void sub_1798a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1798a0ULL || rel >= 0x179910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179910 size=32 callers=0 calls=0
*/
void sub_179910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179910ULL || rel >= 0x179930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179930 size=64 callers=0 calls=0
*/
void sub_179930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179930ULL || rel >= 0x179970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179970 size=64 callers=0 calls=0
*/
void sub_179970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179970ULL || rel >= 0x1799b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001799b0 size=96 callers=0 calls=0
*/
void sub_1799b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1799b0ULL || rel >= 0x179a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179a10 size=64 callers=0 calls=0
*/
void sub_179a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a10ULL || rel >= 0x179a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179a50 size=96 callers=0 calls=0
*/
void sub_179a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179a50ULL || rel >= 0x179ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179ab0 size=96 callers=0 calls=0
*/
void sub_179ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ab0ULL || rel >= 0x179b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179b10 size=128 callers=0 calls=0
*/
void sub_179b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179b10ULL || rel >= 0x179b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179b90 size=112 callers=0 calls=0
*/
void sub_179b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179b90ULL || rel >= 0x179c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179c00 size=32 callers=0 calls=0
*/
void sub_179c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179c00ULL || rel >= 0x179c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179c20 size=64 callers=0 calls=0
*/
void sub_179c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179c20ULL || rel >= 0x179c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179c60 size=16 callers=0 calls=0
*/
void sub_179c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179c60ULL || rel >= 0x179c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179c70 size=16 callers=0 calls=0
*/
void sub_179c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179c70ULL || rel >= 0x179c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179c80 size=112 callers=0 calls=0
*/
void sub_179c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179c80ULL || rel >= 0x179cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179cf0 size=96 callers=0 calls=0
*/
void sub_179cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179cf0ULL || rel >= 0x179d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179d50 size=160 callers=0 calls=0
*/
void sub_179d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179d50ULL || rel >= 0x179df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179df0 size=112 callers=0 calls=0
*/
void sub_179df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179df0ULL || rel >= 0x179e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179e60 size=64 callers=0 calls=0
*/
void sub_179e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179e60ULL || rel >= 0x179ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179ea0 size=32 callers=0 calls=0
*/
void sub_179ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ea0ULL || rel >= 0x179ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179ec0 size=64 callers=0 calls=0
*/
void sub_179ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179ec0ULL || rel >= 0x179f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179f00 size=96 callers=0 calls=0
*/
void sub_179f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f00ULL || rel >= 0x179f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179f60 size=80 callers=0 calls=0
*/
void sub_179f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179f60ULL || rel >= 0x179fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00179fb0 size=112 callers=0 calls=0
*/
void sub_179fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x179fb0ULL || rel >= 0x17a020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017a020 size=112 callers=0 calls=0
*/
void sub_17a020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a020ULL || rel >= 0x17a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017a090 size=32 callers=0 calls=0
*/
void sub_17a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a090ULL || rel >= 0x17a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017a0b0 size=80 callers=0 calls=0
*/
void sub_17a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a0b0ULL || rel >= 0x17a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017a100 size=32 callers=0 calls=0
*/
void sub_17a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a100ULL || rel >= 0x17a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017a120 size=16 callers=0 calls=0
*/
void sub_17a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a120ULL || rel >= 0x17a130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017a130 size=176 callers=0 calls=0
*/
void sub_17a130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a130ULL || rel >= 0x17a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017a1e0 size=1008 callers=0 calls=1
   calls: sub_17c1a0
*/
void sub_17a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a1e0ULL || rel >= 0x17a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017a5d0 size=672 callers=0 calls=0
   ref: timeUs
*/
void timeUs_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a5d0ULL || rel >= 0x17a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017a870 size=1136 callers=0 calls=0
   ref: timeUs
*/
void timeUs_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17a870ULL || rel >= 0x17ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ace0 size=800 callers=0 calls=0
   ref: timeUs
*/
void timeUs_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ace0ULL || rel >= 0x17b000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017b000 size=640 callers=0 calls=1
   calls: sub_17c1a0
   ref: timeUs
*/
void timeUs_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b000ULL || rel >= 0x17b280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017b280 size=1248 callers=0 calls=1
   calls: sub_17c5e0
   ref: timeUs
*/
void timeUs_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b280ULL || rel >= 0x17b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017b760 size=1168 callers=0 calls=1
   calls: sub_17c5e0
   ref: timeUs
*/
void timeUs_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b760ULL || rel >= 0x17bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017bbf0 size=800 callers=0 calls=0
   ref: timeUs
*/
void timeUs_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bbf0ULL || rel >= 0x17bf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017bf10 size=656 callers=0 calls=0
   ref: timeUs
*/
void timeUs_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bf10ULL || rel >= 0x17c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c1a0 size=528 callers=2 calls=0
*/
void sub_17c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1a0ULL || rel >= 0x17c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c3b0 size=144 callers=0 calls=0
*/
void sub_17c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c3b0ULL || rel >= 0x17c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c440 size=352 callers=0 calls=0
   ref: !(mFormat->findInt32(kKeySampleRate, &sampleRate))
   ref: !(!mRangeInfos.empty())
   ref: ESQueue
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void ESQueue(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c440ULL || rel >= 0x17c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c5a0 size=64 callers=0 calls=0
*/
void sub_17c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c5a0ULL || rel >= 0x17c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c5e0 size=304 callers=2 calls=0
*/
void sub_17c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c5e0ULL || rel >= 0x17c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c710 size=64 callers=0 calls=0
*/
void sub_17c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c710ULL || rel >= 0x17c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c750 size=16 callers=0 calls=0
*/
void sub_17c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c750ULL || rel >= 0x17c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c760 size=16 callers=0 calls=0
*/
void sub_17c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c760ULL || rel >= 0x17c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c770 size=112 callers=0 calls=0
*/
void sub_17c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c770ULL || rel >= 0x17c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c7e0 size=96 callers=0 calls=0
*/
void sub_17c7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c7e0ULL || rel >= 0x17c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c840 size=128 callers=0 calls=0
*/
void sub_17c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c840ULL || rel >= 0x17c8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c8c0 size=112 callers=0 calls=0
*/
void sub_17c8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c8c0ULL || rel >= 0x17c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017c930 size=384 callers=0 calls=0
*/
void sub_17c930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c930ULL || rel >= 0x17cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017cab0 size=448 callers=0 calls=0
*/
void sub_17cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cab0ULL || rel >= 0x17cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017cc70 size=160 callers=0 calls=0
*/
void sub_17cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cc70ULL || rel >= 0x17cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017cd10 size=48 callers=0 calls=0
*/
void sub_17cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cd10ULL || rel >= 0x17cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017cd40 size=16 callers=0 calls=0
*/
void sub_17cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cd40ULL || rel >= 0x17cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017cd50 size=256 callers=0 calls=0
*/
void sub_17cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cd50ULL || rel >= 0x17ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ce50 size=160 callers=0 calls=0
*/
void sub_17ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ce50ULL || rel >= 0x17cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017cef0 size=48 callers=0 calls=0
*/
void sub_17cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cef0ULL || rel >= 0x17cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017cf20 size=96 callers=0 calls=0
*/
void sub_17cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cf20ULL || rel >= 0x17cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017cf80 size=16 callers=0 calls=0
*/
void sub_17cf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cf80ULL || rel >= 0x17cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017cf90 size=352 callers=0 calls=0
*/
void sub_17cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cf90ULL || rel >= 0x17d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017d0f0 size=64 callers=0 calls=0
*/
void sub_17d0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d0f0ULL || rel >= 0x17d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017d130 size=80 callers=0 calls=0
*/
void sub_17d130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d130ULL || rel >= 0x17d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017d180 size=2016 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: MPEG2PSExtractor
*/
void MPEG2PSExtractor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d180ULL || rel >= 0x17d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017d960 size=224 callers=0 calls=0
*/
void sub_17d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d960ULL || rel >= 0x17da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017da40 size=432 callers=0 calls=0
*/
void sub_17da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17da40ULL || rel >= 0x17dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017dbf0 size=208 callers=0 calls=0
*/
void sub_17dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dbf0ULL || rel >= 0x17dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017dcc0 size=240 callers=0 calls=0
*/
void sub_17dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dcc0ULL || rel >= 0x17ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ddb0 size=48 callers=0 calls=0
*/
void sub_17ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ddb0ULL || rel >= 0x17dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017dde0 size=64 callers=0 calls=0
*/
void sub_17dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dde0ULL || rel >= 0x17de20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017de20 size=64 callers=0 calls=0
*/
void sub_17de20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17de20ULL || rel >= 0x17de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017de60 size=64 callers=0 calls=0
*/
void sub_17de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17de60ULL || rel >= 0x17dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017dea0 size=32 callers=0 calls=0
*/
void sub_17dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dea0ULL || rel >= 0x17dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017dec0 size=32 callers=0 calls=0
*/
void sub_17dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dec0ULL || rel >= 0x17dee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017dee0 size=32 callers=0 calls=0
*/
void sub_17dee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dee0ULL || rel >= 0x17df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017df00 size=176 callers=0 calls=0
*/
void sub_17df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17df00ULL || rel >= 0x17dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017dfb0 size=144 callers=0 calls=0
*/
void sub_17dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dfb0ULL || rel >= 0x17e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e040 size=112 callers=0 calls=0
*/
void sub_17e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e040ULL || rel >= 0x17e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e0b0 size=128 callers=0 calls=0
*/
void sub_17e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e0b0ULL || rel >= 0x17e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e130 size=144 callers=0 calls=0
*/
void sub_17e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e130ULL || rel >= 0x17e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e1c0 size=144 callers=0 calls=0
*/
void sub_17e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e1c0ULL || rel >= 0x17e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e250 size=144 callers=0 calls=0
*/
void sub_17e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e250ULL || rel >= 0x17e2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e2e0 size=16 callers=0 calls=0
*/
void sub_17e2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e2e0ULL || rel >= 0x17e2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e2f0 size=16 callers=0 calls=0
*/
void sub_17e2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e2f0ULL || rel >= 0x17e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e300 size=16 callers=0 calls=0
*/
void sub_17e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e300ULL || rel >= 0x17e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e310 size=16 callers=0 calls=0
*/
void sub_17e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e310ULL || rel >= 0x17e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e320 size=208 callers=0 calls=0
*/
void sub_17e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e320ULL || rel >= 0x17e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e3f0 size=16 callers=0 calls=0
*/
void sub_17e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e3f0ULL || rel >= 0x17e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e400 size=16 callers=0 calls=0
*/
void sub_17e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e400ULL || rel >= 0x17e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e410 size=64 callers=0 calls=0
*/
void sub_17e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e410ULL || rel >= 0x17e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e450 size=64 callers=0 calls=0
*/
void sub_17e450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e450ULL || rel >= 0x17e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e490 size=16 callers=0 calls=0
*/
void sub_17e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e490ULL || rel >= 0x17e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e4a0 size=16 callers=0 calls=0
*/
void sub_17e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e4a0ULL || rel >= 0x17e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e4b0 size=32 callers=0 calls=0
*/
void sub_17e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e4b0ULL || rel >= 0x17e4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e4d0 size=96 callers=0 calls=0
*/
void sub_17e4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e4d0ULL || rel >= 0x17e530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e530 size=32 callers=0 calls=0
*/
void sub_17e530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e530ULL || rel >= 0x17e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e550 size=32 callers=0 calls=0
*/
void sub_17e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e550ULL || rel >= 0x17e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e570 size=32 callers=0 calls=0
*/
void sub_17e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e570ULL || rel >= 0x17e590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e590 size=64 callers=0 calls=0
*/
void sub_17e590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e590ULL || rel >= 0x17e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e5d0 size=64 callers=0 calls=0
*/
void sub_17e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e5d0ULL || rel >= 0x17e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e610 size=96 callers=0 calls=0
*/
void sub_17e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e610ULL || rel >= 0x17e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e670 size=80 callers=0 calls=0
*/
void sub_17e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e670ULL || rel >= 0x17e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e6c0 size=112 callers=0 calls=0
*/
void sub_17e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e6c0ULL || rel >= 0x17e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e730 size=112 callers=0 calls=0
*/
void sub_17e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e730ULL || rel >= 0x17e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e7a0 size=160 callers=0 calls=0
*/
void sub_17e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e7a0ULL || rel >= 0x17e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e840 size=144 callers=0 calls=0
*/
void sub_17e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e840ULL || rel >= 0x17e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e8d0 size=32 callers=0 calls=0
*/
void sub_17e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8d0ULL || rel >= 0x17e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e8f0 size=144 callers=0 calls=0
*/
void sub_17e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e8f0ULL || rel >= 0x17e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017e980 size=160 callers=0 calls=0
*/
void sub_17e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17e980ULL || rel >= 0x17ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ea20 size=16 callers=0 calls=0
*/
void sub_17ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ea20ULL || rel >= 0x17ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ea30 size=16 callers=0 calls=0
*/
void sub_17ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ea30ULL || rel >= 0x17ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ea40 size=16 callers=0 calls=0
*/
void sub_17ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ea40ULL || rel >= 0x17ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ea50 size=336 callers=0 calls=0
*/
void sub_17ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ea50ULL || rel >= 0x17eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017eba0 size=144 callers=0 calls=0
*/
void sub_17eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17eba0ULL || rel >= 0x17ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ec30 size=176 callers=0 calls=0
*/
void sub_17ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ec30ULL || rel >= 0x17ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ece0 size=544 callers=0 calls=0
*/
void sub_17ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ece0ULL || rel >= 0x17ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ef00 size=16 callers=0 calls=0
*/
void sub_17ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ef00ULL || rel >= 0x17ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017ef10 size=448 callers=0 calls=0
   ref: audio/
   ref: !(meta->findCString(kKeyMIMEType, &mime))
   ref: MPEG2TSExtractor
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void MPEG2TSExtractor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ef10ULL || rel >= 0x17f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f0d0 size=80 callers=0 calls=0
*/
void sub_17f0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f0d0ULL || rel >= 0x17f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f120 size=96 callers=0 calls=0
*/
void sub_17f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f120ULL || rel >= 0x17f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f180 size=16 callers=0 calls=0
*/
void sub_17f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f180ULL || rel >= 0x17f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f190 size=368 callers=0 calls=0
*/
void sub_17f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f190ULL || rel >= 0x17f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f300 size=128 callers=0 calls=0
*/
void sub_17f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f300ULL || rel >= 0x17f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f380 size=144 callers=0 calls=0
*/
void sub_17f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f380ULL || rel >= 0x17f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f410 size=144 callers=0 calls=0
*/
void sub_17f410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f410ULL || rel >= 0x17f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f4a0 size=144 callers=0 calls=0
*/
void sub_17f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f4a0ULL || rel >= 0x17f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f530 size=128 callers=0 calls=0
*/
void sub_17f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f530ULL || rel >= 0x17f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f5b0 size=144 callers=0 calls=0
*/
void sub_17f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f5b0ULL || rel >= 0x17f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f640 size=64 callers=0 calls=0
*/
void sub_17f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f640ULL || rel >= 0x17f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f680 size=64 callers=0 calls=0
*/
void sub_17f680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f680ULL || rel >= 0x17f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f6c0 size=32 callers=0 calls=0
*/
void sub_17f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f6c0ULL || rel >= 0x17f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f6e0 size=80 callers=0 calls=0
*/
void sub_17f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f6e0ULL || rel >= 0x17f730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f730 size=96 callers=0 calls=0
*/
void sub_17f730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f730ULL || rel >= 0x17f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f790 size=96 callers=0 calls=0
*/
void sub_17f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f790ULL || rel >= 0x17f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f7f0 size=112 callers=0 calls=0
*/
void sub_17f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f7f0ULL || rel >= 0x17f860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f860 size=112 callers=0 calls=0
*/
void sub_17f860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f860ULL || rel >= 0x17f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f8d0 size=48 callers=0 calls=0
*/
void sub_17f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f8d0ULL || rel >= 0x17f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017f900 size=896 callers=0 calls=0
   ref: GraphicBufferSource
*/
void GraphicBufferSource(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17f900ULL || rel >= 0x17fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0017fc80 size=896 callers=0 calls=0
   ref: GraphicBufferSource
*/
void GraphicBufferSource_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17fc80ULL || rel >= 0x180000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180000 size=320 callers=0 calls=0
*/
void sub_180000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180000ULL || rel >= 0x180140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180140 size=64 callers=0 calls=0
*/
void sub_180140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180140ULL || rel >= 0x180180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180180 size=48 callers=0 calls=0
*/
void sub_180180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180180ULL || rel >= 0x1801b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001801b0 size=64 callers=0 calls=0
*/
void sub_1801b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1801b0ULL || rel >= 0x1801f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001801f0 size=64 callers=0 calls=0
*/
void sub_1801f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1801f0ULL || rel >= 0x180230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180230 size=64 callers=0 calls=0
*/
void sub_180230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180230ULL || rel >= 0x180270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180270 size=512 callers=0 calls=0
   ref: GraphicBufferSource
   ref: !(!mExecuting)
   ref: generation
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void GraphicBufferSource_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180270ULL || rel >= 0x180470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180470 size=544 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: GraphicBufferSource::fillCodecBuffer_l
   ref: GraphicBufferSource
   ref: !(mExecuting)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mCodecBuffers.size() > 0)
*/
void GraphicBufferSource_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180470ULL || rel >= 0x180690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180690 size=352 callers=0 calls=0
   ref: !(header->nAllocLen >= fillLen)
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mEndOfStream)
   ref: GraphicBufferSource
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mCodecBuffers.size() > 0)
*/
void GraphicBufferSource_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180690ULL || rel >= 0x1807f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001807f0 size=64 callers=0 calls=0
*/
void sub_1807f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1807f0ULL || rel >= 0x180830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180830 size=144 callers=0 calls=0
*/
void sub_180830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180830ULL || rel >= 0x1808c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001808c0 size=128 callers=0 calls=0
*/
void sub_1808c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1808c0ULL || rel >= 0x180940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180940 size=496 callers=0 calls=0
   ref: !(!mEndOfStreamSent)
   ref: GraphicBufferSource
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(!"codecBufferEmptied: mismatched buffer")
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void GraphicBufferSource_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180940ULL || rel >= 0x180b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180b30 size=64 callers=0 calls=0
*/
void sub_180b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180b30ULL || rel >= 0x180b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180b70 size=592 callers=0 calls=0
   ref: !(mExecuting && mNumFramesAvailable == 0)
   ref: GraphicBufferSource
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: generation
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mCodecBuffers.size() > 0)
*/
void GraphicBufferSource_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180b70ULL || rel >= 0x180dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180dc0 size=192 callers=0 calls=0
*/
void sub_180dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180dc0ULL || rel >= 0x180e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180e80 size=352 callers=0 calls=0
*/
void sub_180e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180e80ULL || rel >= 0x180fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00180fe0 size=128 callers=0 calls=0
   ref: GraphicBufferSource
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mCodecBuffers.size() > 0)
*/
void GraphicBufferSource_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x180fe0ULL || rel >= 0x181060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181060 size=528 callers=0 calls=0
   ref: !(header->nAllocLen >= 4 + sizeof(buffer_handle_t))
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: GraphicBufferSource
*/
void GraphicBufferSource_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181060ULL || rel >= 0x181270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181270 size=288 callers=0 calls=0
   ref: generation
*/
void generation_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181270ULL || rel >= 0x181390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181390 size=112 callers=0 calls=0
*/
void sub_181390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181390ULL || rel >= 0x181400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181400 size=304 callers=0 calls=0
*/
void sub_181400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181400ULL || rel >= 0x181530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181530 size=320 callers=0 calls=0
*/
void sub_181530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181530ULL || rel >= 0x181670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181670 size=96 callers=0 calls=0
*/
void sub_181670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181670ULL || rel >= 0x1816d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001816d0 size=160 callers=0 calls=0
*/
void sub_1816d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1816d0ULL || rel >= 0x181770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181770 size=16 callers=0 calls=0
*/
void sub_181770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181770ULL || rel >= 0x181780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181780 size=96 callers=0 calls=0
*/
void sub_181780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181780ULL || rel >= 0x1817e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001817e0 size=96 callers=0 calls=0
*/
void sub_1817e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1817e0ULL || rel >= 0x181840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181840 size=80 callers=0 calls=0
*/
void sub_181840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181840ULL || rel >= 0x181890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181890 size=128 callers=0 calls=0
*/
void sub_181890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181890ULL || rel >= 0x181910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181910 size=160 callers=0 calls=0
   ref: generation
*/
void generation_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181910ULL || rel >= 0x1819b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001819b0 size=304 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: GraphicBufferSource
   ref: generation
   ref: !(msg->findInt32("generation", &generation))
*/
void GraphicBufferSource_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1819b0ULL || rel >= 0x181ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181ae0 size=64 callers=0 calls=0
*/
void sub_181ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181ae0ULL || rel >= 0x181b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181b20 size=64 callers=0 calls=0
*/
void sub_181b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181b20ULL || rel >= 0x181b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181b60 size=16 callers=0 calls=0
*/
void sub_181b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181b60ULL || rel >= 0x181b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181b70 size=16 callers=0 calls=0
*/
void sub_181b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181b70ULL || rel >= 0x181b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181b80 size=32 callers=0 calls=0
*/
void sub_181b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181b80ULL || rel >= 0x181ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181ba0 size=112 callers=0 calls=0
*/
void sub_181ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181ba0ULL || rel >= 0x181c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181c10 size=32 callers=0 calls=0
*/
void sub_181c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181c10ULL || rel >= 0x181c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181c30 size=32 callers=0 calls=0
*/
void sub_181c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181c30ULL || rel >= 0x181c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181c50 size=32 callers=0 calls=0
*/
void sub_181c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181c50ULL || rel >= 0x181c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181c70 size=64 callers=0 calls=0
*/
void sub_181c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181c70ULL || rel >= 0x181cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181cb0 size=96 callers=0 calls=0
*/
void sub_181cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181cb0ULL || rel >= 0x181d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181d10 size=64 callers=0 calls=0
*/
void sub_181d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181d10ULL || rel >= 0x181d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181d50 size=112 callers=0 calls=0
*/
void sub_181d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181d50ULL || rel >= 0x181dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181dc0 size=96 callers=0 calls=0
*/
void sub_181dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181dc0ULL || rel >= 0x181e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181e20 size=144 callers=0 calls=0
*/
void sub_181e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181e20ULL || rel >= 0x181eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181eb0 size=128 callers=0 calls=0
*/
void sub_181eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181eb0ULL || rel >= 0x181f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181f30 size=80 callers=0 calls=0
*/
void sub_181f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181f30ULL || rel >= 0x181f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181f80 size=80 callers=0 calls=0
*/
void sub_181f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181f80ULL || rel >= 0x181fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00181fd0 size=128 callers=0 calls=0
*/
void sub_181fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x181fd0ULL || rel >= 0x182050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182050 size=288 callers=0 calls=0
   ref: OMXCallbackDisp
*/
void OMXCallbackDisp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182050ULL || rel >= 0x182170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182170 size=432 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void OMX_cpp_111_CHECK_EQ_status_status_t_NO_ERROR_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182170ULL || rel >= 0x182320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182320 size=128 callers=0 calls=0
*/
void sub_182320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182320ULL || rel >= 0x1823a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001823a0 size=48 callers=0 calls=0
*/
void sub_1823a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1823a0ULL || rel >= 0x1823d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001823d0 size=128 callers=0 calls=0
*/
void sub_1823d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1823d0ULL || rel >= 0x182450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182450 size=16 callers=0 calls=0
*/
void sub_182450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182450ULL || rel >= 0x182460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182460 size=208 callers=0 calls=0
*/
void sub_182460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182460ULL || rel >= 0x182530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182530 size=16 callers=0 calls=0
*/
void sub_182530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182530ULL || rel >= 0x182540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182540 size=32 callers=0 calls=0
*/
void sub_182540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182540ULL || rel >= 0x182560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182560 size=304 callers=0 calls=0
*/
void sub_182560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182560ULL || rel >= 0x182690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182690 size=240 callers=0 calls=0
*/
void sub_182690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182690ULL || rel >= 0x182780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182780 size=240 callers=0 calls=0
*/
void sub_182780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182780ULL || rel >= 0x182870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182870 size=48 callers=0 calls=0
*/
void sub_182870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182870ULL || rel >= 0x1828a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001828a0 size=48 callers=0 calls=0
*/
void sub_1828a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1828a0ULL || rel >= 0x1828d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001828d0 size=48 callers=0 calls=0
*/
void sub_1828d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1828d0ULL || rel >= 0x182900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182900 size=64 callers=0 calls=0
*/
void sub_182900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182900ULL || rel >= 0x182940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182940 size=64 callers=0 calls=0
*/
void sub_182940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182940ULL || rel >= 0x182980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182980 size=64 callers=0 calls=0
*/
void sub_182980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182980ULL || rel >= 0x1829c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001829c0 size=64 callers=0 calls=0
*/
void sub_1829c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1829c0ULL || rel >= 0x182a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182a00 size=64 callers=0 calls=0
*/
void sub_182a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182a00ULL || rel >= 0x182a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182a40 size=336 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(index >= 0)
*/
void OMX_cpp_196_CHECK_index_0_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182a40ULL || rel >= 0x182b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182b90 size=48 callers=0 calls=0
*/
void sub_182b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182b90ULL || rel >= 0x182bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182bc0 size=16 callers=0 calls=0
*/
void sub_182bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182bc0ULL || rel >= 0x182bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182bd0 size=144 callers=0 calls=0
*/
void sub_182bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182bd0ULL || rel >= 0x182c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182c60 size=112 callers=0 calls=0
*/
void sub_182c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182c60ULL || rel >= 0x182cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182cd0 size=48 callers=0 calls=0
*/
void sub_182cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182cd0ULL || rel >= 0x182d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182d00 size=704 callers=0 calls=0
*/
void sub_182d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182d00ULL || rel >= 0x182fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00182fc0 size=192 callers=0 calls=0
*/
void sub_182fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x182fc0ULL || rel >= 0x183080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183080 size=64 callers=0 calls=0
*/
void sub_183080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183080ULL || rel >= 0x1830c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001830c0 size=672 callers=0 calls=0
*/
void sub_1830c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1830c0ULL || rel >= 0x183360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183360 size=64 callers=0 calls=0
*/
void sub_183360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183360ULL || rel >= 0x1833a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001833a0 size=704 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(index >= 0)
*/
void OMX_cpp_295_CHECK_index_0_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1833a0ULL || rel >= 0x183660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183660 size=144 callers=0 calls=0
*/
void sub_183660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183660ULL || rel >= 0x1836f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001836f0 size=160 callers=0 calls=0
*/
void sub_1836f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1836f0ULL || rel >= 0x183790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183790 size=160 callers=0 calls=0
*/
void sub_183790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183790ULL || rel >= 0x183830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183830 size=160 callers=0 calls=0
*/
void sub_183830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183830ULL || rel >= 0x1838d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001838d0 size=160 callers=0 calls=0
*/
void sub_1838d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1838d0ULL || rel >= 0x183970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183970 size=128 callers=0 calls=0
*/
void sub_183970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183970ULL || rel >= 0x1839f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001839f0 size=144 callers=0 calls=0
*/
void sub_1839f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1839f0ULL || rel >= 0x183a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183a80 size=144 callers=0 calls=0
*/
void sub_183a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183a80ULL || rel >= 0x183b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183b10 size=144 callers=0 calls=0
*/
void sub_183b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183b10ULL || rel >= 0x183ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183ba0 size=176 callers=0 calls=0
*/
void sub_183ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183ba0ULL || rel >= 0x183c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183c50 size=176 callers=0 calls=0
*/
void sub_183c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183c50ULL || rel >= 0x183d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183d00 size=160 callers=0 calls=0
*/
void sub_183d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183d00ULL || rel >= 0x183da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183da0 size=160 callers=0 calls=0
*/
void sub_183da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183da0ULL || rel >= 0x183e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183e40 size=160 callers=0 calls=0
*/
void sub_183e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183e40ULL || rel >= 0x183ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183ee0 size=144 callers=0 calls=0
*/
void sub_183ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183ee0ULL || rel >= 0x183f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183f70 size=128 callers=0 calls=0
*/
void sub_183f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183f70ULL || rel >= 0x183ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00183ff0 size=176 callers=0 calls=0
*/
void sub_183ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x183ff0ULL || rel >= 0x1840a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001840a0 size=160 callers=0 calls=0
*/
void sub_1840a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1840a0ULL || rel >= 0x184140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184140 size=144 callers=0 calls=0
*/
void sub_184140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184140ULL || rel >= 0x1841d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001841d0 size=128 callers=0 calls=0
*/
void sub_1841d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1841d0ULL || rel >= 0x184250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184250 size=176 callers=0 calls=0
*/
void sub_184250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184250ULL || rel >= 0x184300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184300 size=144 callers=0 calls=0
*/
void sub_184300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184300ULL || rel >= 0x184390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184390 size=336 callers=0 calls=0
*/
void sub_184390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184390ULL || rel >= 0x1844e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001844e0 size=176 callers=0 calls=0
*/
void sub_1844e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1844e0ULL || rel >= 0x184590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184590 size=384 callers=0 calls=0
*/
void sub_184590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184590ULL || rel >= 0x184710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184710 size=288 callers=0 calls=0
*/
void sub_184710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184710ULL || rel >= 0x184830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184830 size=304 callers=0 calls=0
*/
void sub_184830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184830ULL || rel >= 0x184960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184960 size=96 callers=0 calls=0
*/
void sub_184960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184960ULL || rel >= 0x1849c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001849c0 size=48 callers=0 calls=0
*/
void sub_1849c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1849c0ULL || rel >= 0x1849f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001849f0 size=64 callers=0 calls=0
*/
void sub_1849f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1849f0ULL || rel >= 0x184a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184a30 size=64 callers=0 calls=0
*/
void sub_184a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184a30ULL || rel >= 0x184a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184a70 size=80 callers=0 calls=0
*/
void sub_184a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184a70ULL || rel >= 0x184ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184ac0 size=64 callers=0 calls=0
*/
void sub_184ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184ac0ULL || rel >= 0x184b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184b00 size=64 callers=0 calls=0
*/
void sub_184b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184b00ULL || rel >= 0x184b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184b40 size=96 callers=0 calls=0
*/
void sub_184b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184b40ULL || rel >= 0x184ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184ba0 size=64 callers=0 calls=0
*/
void sub_184ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184ba0ULL || rel >= 0x184be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184be0 size=96 callers=0 calls=0
*/
void sub_184be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184be0ULL || rel >= 0x184c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184c40 size=96 callers=0 calls=0
*/
void sub_184c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184c40ULL || rel >= 0x184ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184ca0 size=128 callers=0 calls=0
*/
void sub_184ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184ca0ULL || rel >= 0x184d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184d20 size=112 callers=0 calls=0
*/
void sub_184d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184d20ULL || rel >= 0x184d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184d90 size=32 callers=0 calls=0
*/
void sub_184d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184d90ULL || rel >= 0x184db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184db0 size=64 callers=0 calls=0
*/
void sub_184db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184db0ULL || rel >= 0x184df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184df0 size=64 callers=0 calls=0
*/
void sub_184df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184df0ULL || rel >= 0x184e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184e30 size=16 callers=0 calls=0
*/
void sub_184e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184e30ULL || rel >= 0x184e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184e40 size=16 callers=0 calls=0
*/
void sub_184e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184e40ULL || rel >= 0x184e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184e50 size=32 callers=0 calls=0
*/
void sub_184e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184e50ULL || rel >= 0x184e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184e70 size=112 callers=0 calls=0
*/
void sub_184e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184e70ULL || rel >= 0x184ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184ee0 size=32 callers=0 calls=0
*/
void sub_184ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184ee0ULL || rel >= 0x184f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184f00 size=32 callers=0 calls=0
*/
void sub_184f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184f00ULL || rel >= 0x184f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184f20 size=32 callers=0 calls=0
*/
void sub_184f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184f20ULL || rel >= 0x184f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184f40 size=64 callers=0 calls=0
*/
void sub_184f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184f40ULL || rel >= 0x184f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184f80 size=64 callers=0 calls=0
*/
void sub_184f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184f80ULL || rel >= 0x184fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00184fc0 size=80 callers=0 calls=0
*/
void sub_184fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x184fc0ULL || rel >= 0x185010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185010 size=80 callers=0 calls=0
*/
void sub_185010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185010ULL || rel >= 0x185060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185060 size=112 callers=0 calls=0
*/
void sub_185060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185060ULL || rel >= 0x1850d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001850d0 size=96 callers=0 calls=0
*/
void sub_1850d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1850d0ULL || rel >= 0x185130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185130 size=144 callers=0 calls=0
*/
void sub_185130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185130ULL || rel >= 0x1851c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001851c0 size=128 callers=0 calls=0
*/
void sub_1851c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1851c0ULL || rel >= 0x185240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185240 size=48 callers=0 calls=0
*/
void sub_185240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185240ULL || rel >= 0x185270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185270 size=128 callers=0 calls=0
*/
void sub_185270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185270ULL || rel >= 0x1852f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001852f0 size=64 callers=0 calls=0
*/
void sub_1852f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1852f0ULL || rel >= 0x185330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185330 size=64 callers=0 calls=0
*/
void sub_185330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185330ULL || rel >= 0x185370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185370 size=64 callers=0 calls=0
*/
void sub_185370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185370ULL || rel >= 0x1853b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001853b0 size=80 callers=0 calls=0
*/
void sub_1853b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1853b0ULL || rel >= 0x185400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185400 size=80 callers=0 calls=0
*/
void sub_185400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185400ULL || rel >= 0x185450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185450 size=32 callers=0 calls=0
*/
void sub_185450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185450ULL || rel >= 0x185470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185470 size=32 callers=0 calls=0
*/
void sub_185470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185470ULL || rel >= 0x185490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185490 size=224 callers=0 calls=0
*/
void sub_185490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185490ULL || rel >= 0x185570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185570 size=16 callers=0 calls=0
*/
void sub_185570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185570ULL || rel >= 0x185580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185580 size=304 callers=0 calls=0
*/
void sub_185580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185580ULL || rel >= 0x1856b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001856b0 size=384 callers=0 calls=0
*/
void sub_1856b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1856b0ULL || rel >= 0x185830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185830 size=176 callers=0 calls=0
*/
void sub_185830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185830ULL || rel >= 0x1858e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001858e0 size=128 callers=0 calls=0
*/
void sub_1858e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1858e0ULL || rel >= 0x185960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185960 size=48 callers=0 calls=0
*/
void sub_185960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185960ULL || rel >= 0x185990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185990 size=16 callers=0 calls=0
*/
void sub_185990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185990ULL || rel >= 0x1859a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001859a0 size=256 callers=0 calls=0
*/
void sub_1859a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1859a0ULL || rel >= 0x185aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185aa0 size=160 callers=0 calls=0
*/
void sub_185aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185aa0ULL || rel >= 0x185b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185b40 size=192 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(size >= 1 + name8.size())
   ref: OMXMaster
*/
void OMXMaster(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185b40ULL || rel >= 0x185c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185c00 size=208 callers=0 calls=0
*/
void sub_185c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185c00ULL || rel >= 0x185cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185cd0 size=64 callers=0 calls=0
*/
void sub_185cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185cd0ULL || rel >= 0x185d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185d10 size=64 callers=0 calls=0
*/
void sub_185d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185d10ULL || rel >= 0x185d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185d50 size=16 callers=0 calls=0
*/
void sub_185d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185d50ULL || rel >= 0x185d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185d60 size=16 callers=0 calls=0
*/
void sub_185d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185d60ULL || rel >= 0x185d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185d70 size=32 callers=0 calls=0
*/
void sub_185d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185d70ULL || rel >= 0x185d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185d90 size=112 callers=0 calls=0
*/
void sub_185d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185d90ULL || rel >= 0x185e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185e00 size=32 callers=0 calls=0
*/
void sub_185e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185e00ULL || rel >= 0x185e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185e20 size=32 callers=0 calls=0
*/
void sub_185e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185e20ULL || rel >= 0x185e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185e40 size=32 callers=0 calls=0
*/
void sub_185e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185e40ULL || rel >= 0x185e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185e60 size=64 callers=0 calls=0
*/
void sub_185e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185e60ULL || rel >= 0x185ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185ea0 size=64 callers=0 calls=0
*/
void sub_185ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185ea0ULL || rel >= 0x185ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185ee0 size=64 callers=0 calls=0
*/
void sub_185ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185ee0ULL || rel >= 0x185f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185f20 size=64 callers=0 calls=0
*/
void sub_185f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185f20ULL || rel >= 0x185f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185f60 size=96 callers=0 calls=0
*/
void sub_185f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185f60ULL || rel >= 0x185fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00185fc0 size=80 callers=0 calls=0
*/
void sub_185fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x185fc0ULL || rel >= 0x186010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186010 size=32 callers=0 calls=0
*/
void sub_186010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186010ULL || rel >= 0x186030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186030 size=32 callers=0 calls=0
*/
void sub_186030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186030ULL || rel >= 0x186050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186050 size=80 callers=0 calls=0
*/
void sub_186050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186050ULL || rel >= 0x1860a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001860a0 size=128 callers=0 calls=0
*/
void sub_1860a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1860a0ULL || rel >= 0x186120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186120 size=32 callers=0 calls=0
*/
void sub_186120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186120ULL || rel >= 0x186140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186140 size=224 callers=0 calls=0
   ref: %s: key not found
   ref: const VALUE &android::KeyedVector<OMX_BUFFERHEADERTYPE *, unsigned int>::valueFor(const KEY &) const
   ref: OMXNodeInstance
*/
void OMXNodeInstance(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186140ULL || rel >= 0x186220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186220 size=224 callers=0 calls=0
   ref: %s: key not found
   ref: const VALUE &android::KeyedVector<OMX_BUFFERHEADERTYPE *, unsigned int>::valueFor(const KEY &) const
   ref: OMXNodeInstance
*/
void OMXNodeInstance_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186220ULL || rel >= 0x186300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186300 size=416 callers=0 calls=0
   ref: debug.stagefright.omx-debug
   ref: .secure
*/
void secure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186300ULL || rel >= 0x1864a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001864a0 size=352 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mHandle == 0L)
   ref: OMXNodeInstance
*/
void OMXNodeInstance_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1864a0ULL || rel >= 0x186600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186600 size=64 callers=0 calls=0
*/
void sub_186600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186600ULL || rel >= 0x186640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186640 size=64 callers=0 calls=0
*/
void sub_186640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186640ULL || rel >= 0x186680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186680 size=112 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: !(mHandle == 0L)
   ref: OMXNodeInstance
*/
void OMXNodeInstance_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186680ULL || rel >= 0x1866f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001866f0 size=96 callers=0 calls=0
*/
void sub_1866f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1866f0ULL || rel >= 0x186750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186750 size=128 callers=0 calls=0
*/
void sub_186750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186750ULL || rel >= 0x1867d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001867d0 size=16 callers=0 calls=0
*/
void sub_1867d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1867d0ULL || rel >= 0x1867e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001867e0 size=48 callers=0 calls=0
*/
void sub_1867e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1867e0ULL || rel >= 0x186810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186810 size=16 callers=0 calls=0
*/
void sub_186810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186810ULL || rel >= 0x186820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186820 size=1120 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: OMXNodeInstance
   ref: unknown state %s(%#x).
*/
void OMXNodeInstance_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186820ULL || rel >= 0x186c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186c80 size=432 callers=0 calls=0
*/
void sub_186c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186c80ULL || rel >= 0x186e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186e30 size=80 callers=0 calls=0
*/
void sub_186e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186e30ULL || rel >= 0x186e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186e80 size=48 callers=0 calls=0
*/
void sub_186e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186e80ULL || rel >= 0x186eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186eb0 size=128 callers=0 calls=0
*/
void sub_186eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186eb0ULL || rel >= 0x186f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186f30 size=128 callers=0 calls=0
*/
void sub_186f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186f30ULL || rel >= 0x186fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00186fb0 size=128 callers=0 calls=0
*/
void sub_186fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x186fb0ULL || rel >= 0x187030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187030 size=128 callers=0 calls=0
*/
void sub_187030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187030ULL || rel >= 0x1870b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001870b0 size=112 callers=0 calls=0
*/
void sub_1870b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1870b0ULL || rel >= 0x187120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187120 size=192 callers=0 calls=0
   ref: OMX.google.android.index.enableAndroidNativeBuffers
*/
void OMX_google_android_index_enableAndroidNativeBuffers(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187120ULL || rel >= 0x1871e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001871e0 size=208 callers=0 calls=0
   ref: OMX.google.android.index.getAndroidNativeBufferUsage
*/
void OMX_google_android_index_getAndroidNativeBufferUsage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1871e0ULL || rel >= 0x1872b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001872b0 size=192 callers=0 calls=0
   ref: OMX.google.android.index.storeMetaDataInBuffers
*/
void OMX_google_android_index_storeMetaDataInBuffers(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1872b0ULL || rel >= 0x187370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187370 size=224 callers=0 calls=0
   ref: OMX.google.android.index.storeMetaDataInBuffers
   ref: OMX.google.android.index.storeGraphicBufferInMetaData
*/
void OMX_google_android_index_storeMetaDataInBuffers_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187370ULL || rel >= 0x187450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187450 size=208 callers=0 calls=0
   ref: OMX.google.android.index.prepareForAdaptivePlayback
*/
void OMX_google_android_index_prepareForAdaptivePlayback(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187450ULL || rel >= 0x187520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187520 size=272 callers=0 calls=0
   ref: OMX.google.android.index.configureVideoTunnelMode
*/
void OMX_google_android_index_configureVideoTunnelMode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187520ULL || rel >= 0x187630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187630 size=848 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: OMXNodeInstance
*/
void OMXNodeInstance_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187630ULL || rel >= 0x187980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187980 size=176 callers=0 calls=0
*/
void sub_187980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187980ULL || rel >= 0x187a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187a30 size=80 callers=0 calls=0
*/
void sub_187a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187a30ULL || rel >= 0x187a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187a80 size=816 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: OMXNodeInstance
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void OMXNodeInstance_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187a80ULL || rel >= 0x187db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00187db0 size=784 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: OMX.google.android.index.useAndroidNativeBuffer
   ref: OMX.google.android.index.useAndroidNativeBuffer2
   ref: OMXNodeInstance
*/
void OMXNodeInstance_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x187db0ULL || rel >= 0x1880c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001880c0 size=256 callers=0 calls=0
   ref: const VALUE &android::KeyedVector<unsigned int, OMX_BUFFERHEADERTYPE *>::valueFor(const KEY &) const
   ref: %s: key not found
   ref: OMXNodeInstance
*/
void OMXNodeInstance_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1880c0ULL || rel >= 0x1881c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001881c0 size=160 callers=0 calls=0
   ref: const VALUE &android::KeyedVector<unsigned int, OMX_BUFFERHEADERTYPE *>::valueFor(const KEY &) const
   ref: %s: key not found
   ref: OMXNodeInstance
*/
void OMXNodeInstance_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1881c0ULL || rel >= 0x188260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188260 size=816 callers=0 calls=0
   ref: OMX.google.android.index.storeMetaDataInBuffers
   ref: OMX.google.android.index.storeGraphicBufferInMetaData
*/
void OMX_google_android_index_storeMetaDataInBuffers_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188260ULL || rel >= 0x188590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188590 size=144 callers=0 calls=0
*/
void sub_188590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188590ULL || rel >= 0x188620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188620 size=688 callers=0 calls=0
   ref: OMXNodeInstance
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
*/
void OMXNodeInstance_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188620ULL || rel >= 0x1888d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001888d0 size=720 callers=0 calls=0
   ref: D:\Home\teamcity\work\sdk\Externals\multimedia\nnMedia\android5_1\frameworks\av\media\libstagefright
   ref: OMXNodeInstance
*/
void OMXNodeInstance_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1888d0ULL || rel >= 0x188ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188ba0 size=432 callers=0 calls=0
   ref: const VALUE &android::KeyedVector<unsigned int, OMX_BUFFERHEADERTYPE *>::valueFor(const KEY &) const
   ref: %s: key not found
   ref: OMXNodeInstance
*/
void OMXNodeInstance_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188ba0ULL || rel >= 0x188d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188d50 size=144 callers=0 calls=0
*/
void sub_188d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188d50ULL || rel >= 0x188de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188de0 size=192 callers=0 calls=0
   ref: const VALUE &android::KeyedVector<unsigned int, OMX_BUFFERHEADERTYPE *>::valueFor(const KEY &) const
   ref: %s: key not found
   ref: OMXNodeInstance
*/
void OMXNodeInstance_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188de0ULL || rel >= 0x188ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188ea0 size=320 callers=0 calls=0
   ref: const VALUE &android::KeyedVector<unsigned int, OMX_BUFFERHEADERTYPE *>::valueFor(const KEY &) const
   ref: %s: key not found
   ref: OMXNodeInstance
*/
void OMXNodeInstance_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188ea0ULL || rel >= 0x188fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00188fe0 size=304 callers=0 calls=0
   ref: const VALUE &android::KeyedVector<unsigned int, OMX_BUFFERHEADERTYPE *>::valueFor(const KEY &) const
   ref: %s: key not found
   ref: OMXNodeInstance
*/
void OMXNodeInstance_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x188fe0ULL || rel >= 0x189110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189110 size=272 callers=0 calls=0
*/
void sub_189110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189110ULL || rel >= 0x189220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00189220 size=64 callers=0 calls=0
*/
void sub_189220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x189220ULL || rel >= 0x189260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

