// fun_0008
fun_0008() {
    var_8 = arg_0;
    pri = _Suspend(var_8)
    pri = 0;
    OP_ZERO_ALT 
    OP_HALT 12
    pri = 0;
    return pri;
}
// fun_0060
fun_0060() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00A0
    pri = 0;
    return pri;
// lab_00A0
    OP_ZERO_P_S -8
    OP_JUMP lab_00C8
// lab_00C8
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0120
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_00C0
// lab_0120
    pri = 0;
    return pri;
// lab_00C0
    OP_INC_P_S -8
}
// fun_0138
fun_0138() {
    OP_JUMP lab_0150
// lab_0150
    pri = EvCameraMoveWait_()
    OP_JZER lab_0188
    pri = 0;
    return pri;
// lab_0188
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0150
    pri = 0;
    return pri;
}
// fun_01C8
fun_01C8() {
    var_8 = arg_8;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = arg_7;
    var_64 = arg_6;
    var_72 = arg_5;
    var_80 = 0;
    var_88 = 0;
    var_96 = 4607182418800017408;
    pri = EvCameraShake_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0260
fun_0260() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 1;
    var_48 = 0;
    var_56 = 3;
    var_64 = arg_1;
    var_72 = arg_0;
    var_80 = 72;
    pri = fun_01C8(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_02D8
fun_02D8() {
    pri = g_mode;
    switch (pri) {
// switch_0578
        case default:
        {
// switch_0578_case_default
            pri = CommandNOP()
            OP_JUMP lab_0680
// lab_0680
            pri = 0;
            return pri;
        }
        case 0x866b13b4c2516320:
        {
// switch_0578_case_0x866b13b4c2516320
            var_8 = 0;
            pri = fun_21B8()
            OP_JUMP lab_0680
        }
        case 0x8ae0d36d71d2c419:
        {
// switch_0578_case_0x8ae0d36d71d2c419
            var_8 = 0;
            pri = fun_0A88()
            OP_JUMP lab_0680
        }
        case 0x8ae0d86d71d2cc98:
        {
// switch_0578_case_0x8ae0d86d71d2cc98
            var_8 = 0;
            pri = fun_0920()
            OP_JUMP lab_0680
        }
        case 0x8ae0d96d71d2ce4b:
        {
// switch_0578_case_0x8ae0d96d71d2ce4b
            var_8 = 0;
            pri = fun_08E0()
            OP_JUMP lab_0680
        }
        case 0x8ae0da6d71d2cffe:
        {
// switch_0578_case_0x8ae0da6d71d2cffe
            var_8 = 0;
            pri = fun_08A0()
            OP_JUMP lab_0680
        }
        case 0x8ae0dc6d71d2d364:
        {
// switch_0578_case_0x8ae0dc6d71d2d364
            var_8 = 0;
            pri = fun_0A48()
            OP_JUMP lab_0680
        }
        case 0x8ae0dd6d71d2d517:
        {
// switch_0578_case_0x8ae0dd6d71d2d517
            var_8 = 0;
            pri = fun_09E0()
            OP_JUMP lab_0680
        }
        case 0x8ae0de6d71d2d6ca:
        {
// switch_0578_case_0x8ae0de6d71d2d6ca
            var_8 = 0;
            pri = fun_09A0()
            OP_JUMP lab_0680
        }
        case 0x8ae0df6d71d2d87d:
        {
// switch_0578_case_0x8ae0df6d71d2d87d
            var_8 = 0;
            pri = fun_0960()
            OP_JUMP lab_0680
        }
        case 0x0:
        {
// switch_0578_case_0x0
            var_8 = 0;
            pri = fun_0690()
            OP_JUMP lab_0680
        }
        case 0xc490c8f0967d69c:
        {
// switch_0578_case_0xc490c8f0967d69c
            var_8 = 0;
            pri = fun_1938()
            OP_JUMP lab_0680
        }
        case 0xc490e8f0967da02:
        {
// switch_0578_case_0xc490e8f0967da02
            var_8 = 0;
            pri = fun_0AC8()
            OP_JUMP lab_0680
        }
        case 0xc490f8f0967dbb5:
        {
// switch_0578_case_0xc490f8f0967dbb5
            var_8 = 0;
            pri = fun_10A0()
            OP_JUMP lab_0680
        }
        case 0x40e0e7e2a891cd2c:
        {
// switch_0578_case_0x40e0e7e2a891cd2c
            var_8 = 0;
            pri = fun_06C0()
            OP_JUMP lab_0680
        }
        case 0x7e12c0fdfcc326aa:
        {
// switch_0578_case_0x7e12c0fdfcc326aa
            var_8 = 0;
            pri = fun_06A8()
            OP_JUMP lab_0680
        }
    }
}
// fun_0690
fun_0690() {
    pri = 0;
    return pri;
}
// fun_06A8
fun_06A8() {
    pri = 0;
    return pri;
}
// fun_06C0
fun_06C0() {
    pri = 0;
    return pri;
}
// fun_06D8
fun_06D8() {
    var_8 = 32;
    pri = SoundPostEvent(var_8)
    var_16 = 10;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 3;
    var_40 = 16;
    pri = fun_0260(var_32, var_24)
    var_48 = 3;
    var_56 = 8;
    pri = fun_0060(var_48)
    var_64 = 0;
    var_72 = 40;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 12;
    pri = EvCameraShakeStartAttenuation(var_88, var_80, var_72)
    var_96 = 12;
    var_104 = 8;
    pri = fun_0060(var_96)
    var_112 = 40;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 3;
    var_136 = 16;
    pri = fun_0260(var_128, var_120)
    var_144 = 10;
    var_152 = 8;
    pri = fun_0060(var_144)
    var_160 = 0;
    var_168 = 0;
    pri = float(var_168)
    var_176 = pri;
    var_184 = 30;
    pri = EvCameraShakeStartAttenuation(var_184, var_176, var_168)
    pri = 0;
    return pri;
}
// fun_08A0
fun_08A0() {
    var_8 = 1082113614280679655;
    pri = FlagReset(var_8)
    pri = 0;
    return pri;
}
// fun_08E0
fun_08E0() {
    var_8 = 1082114713792307866;
    pri = FlagReset(var_8)
    pri = 0;
    return pri;
}
// fun_0920
fun_0920() {
    var_8 = 1082115813303936077;
    pri = FlagReset(var_8)
    pri = 0;
    return pri;
}
// fun_0960
fun_0960() {
    var_8 = 1082108116722538600;
    pri = FlagReset(var_8)
    pri = 0;
    return pri;
}
// fun_09A0
fun_09A0() {
    var_8 = 1082109216234166811;
    pri = FlagReset(var_8)
    pri = 0;
    return pri;
}
// fun_09E0
fun_09E0() {
    var_8 = 1082109216234166811;
    pri = FlagReset(var_8)
    var_16 = 1082110315745795022;
    pri = FlagReset(var_16)
    pri = 0;
    return pri;
}
// fun_0A48
fun_0A48() {
    var_8 = 1082111415257423233;
    pri = FlagReset(var_8)
    pri = 0;
    return pri;
}
// fun_0A88
fun_0A88() {
    var_8 = 1082103718676025756;
    pri = FlagReset(var_8)
    pri = 0;
    return pri;
}
// fun_0AC8
fun_0AC8() {
    pri = EvCameraStart()
    var_8 = 3;
    var_16 = 1120;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 0;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 0;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 43;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 13100;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 39;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 2605;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 70;
    pri = EvCameraMoveDist(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_136 = 0;
    pri = fun_0138()
    var_144 = 0;
    pri = fun_06D8()
    var_152 = 0;
    pri = GimmickIwaKoriOpenHole_(var_152)
    var_160 = 15;
    var_168 = 8;
    pri = fun_0060(var_160)
    var_176 = 1;
    pri = GimmickIwaKoriOpenHole_(var_176)
    var_184 = 9;
    var_192 = 8;
    pri = fun_0060(var_184)
    var_200 = 2;
    pri = GimmickIwaKoriOpenHole_(var_200)
    var_208 = 6;
    var_216 = 8;
    pri = fun_0060(var_208)
    var_224 = 4;
    pri = GimmickIwaKoriOpenHole_(var_224)
    var_232 = 48;
    pri = GimmickIwaKoriOpenHole_(var_232)
    var_240 = 5;
    var_248 = 8;
    pri = fun_0060(var_240)
    pri = EvCameraShakeEnd()
    var_256 = 3;
    var_264 = 1120;
    pri = float(var_264)
    var_272 = pri;
    var_280 = 0;
    pri = float(var_280)
    var_288 = pri;
    var_296 = 0;
    pri = float(var_296)
    var_304 = pri;
    var_312 = 43;
    pri = float(var_312)
    var_320 = pri;
    var_328 = 11936;
    pri = float(var_328)
    var_336 = pri;
    var_344 = 39;
    pri = float(var_344)
    var_352 = pri;
    var_360 = 2605;
    pri = float(var_360)
    var_368 = pri;
    var_376 = 100;
    pri = EvCameraMoveDist(var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_384 = 10;
    var_392 = 8;
    pri = fun_0060(var_384)
    var_400 = 5;
    pri = GimmickIwaKoriOpenHole_(var_400)
    var_408 = 20;
    var_416 = 8;
    pri = fun_0060(var_408)
    var_424 = 6;
    pri = GimmickIwaKoriOpenHole_(var_424)
    var_432 = 12;
    var_440 = 8;
    pri = fun_0060(var_432)
    var_448 = 7;
    pri = GimmickIwaKoriOpenHole_(var_448)
    var_456 = 8;
    pri = GimmickIwaKoriOpenHole_(var_456)
    var_464 = 20;
    var_472 = 8;
    pri = fun_0060(var_464)
    var_480 = 9;
    pri = GimmickIwaKoriOpenHole_(var_480)
    var_488 = 7;
    var_496 = 8;
    pri = fun_0060(var_488)
    var_504 = 10;
    pri = GimmickIwaKoriOpenHole_(var_504)
    var_512 = 0;
    pri = fun_0138()
    var_520 = 10;
    var_528 = 8;
    pri = fun_0060(var_520)
    var_536 = 3;
    var_544 = 1;
    pri = EvCameraEnd(var_544, var_536)
    pri = 0;
    return pri;
}
// fun_10A0
fun_10A0() {
    pri = EvCameraStart()
    var_8 = 3;
    var_16 = 1770;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 0;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 0;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 47;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 9500;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 86;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 2605;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 70;
    pri = EvCameraMoveDist(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_136 = 0;
    pri = fun_0138()
    var_144 = 0;
    pri = fun_06D8()
    var_152 = 11;
    pri = GimmickIwaKoriOpenHole_(var_152)
    var_160 = 8;
    var_168 = 8;
    pri = fun_0060(var_160)
    var_176 = 12;
    pri = GimmickIwaKoriOpenHole_(var_176)
    var_184 = 4;
    var_192 = 8;
    pri = fun_0060(var_184)
    var_200 = 50;
    pri = GimmickIwaKoriOpenHole_(var_200)
    var_208 = 2;
    var_216 = 8;
    pri = fun_0060(var_208)
    var_224 = 51;
    pri = GimmickIwaKoriOpenHole_(var_224)
    var_232 = 5;
    var_240 = 8;
    pri = fun_0060(var_232)
    var_248 = 14;
    pri = GimmickIwaKoriOpenHole_(var_248)
    var_256 = 12;
    var_264 = 8;
    pri = fun_0060(var_256)
    pri = EvCameraShakeEnd()
    var_272 = 3;
    var_280 = 1770;
    pri = float(var_280)
    var_288 = pri;
    var_296 = 0;
    pri = float(var_296)
    var_304 = pri;
    var_312 = 0;
    pri = float(var_312)
    var_320 = pri;
    var_328 = 47;
    pri = float(var_328)
    var_336 = pri;
    var_344 = 8089;
    pri = float(var_344)
    var_352 = pri;
    var_360 = 86;
    pri = float(var_360)
    var_368 = pri;
    var_376 = 2605;
    pri = float(var_376)
    var_384 = pri;
    var_392 = 130;
    pri = EvCameraMoveDist(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_400 = 16;
    pri = GimmickIwaKoriOpenHole_(var_400)
    var_408 = 13;
    pri = GimmickIwaKoriOpenHole_(var_408)
    var_416 = 18;
    var_424 = 8;
    pri = fun_0060(var_416)
    var_432 = 15;
    pri = GimmickIwaKoriOpenHole_(var_432)
    var_440 = 2;
    var_448 = 8;
    pri = fun_0060(var_440)
    var_456 = 52;
    pri = GimmickIwaKoriOpenHole_(var_456)
    var_464 = 15;
    var_472 = 8;
    pri = fun_0060(var_464)
    var_480 = 17;
    pri = GimmickIwaKoriOpenHole_(var_480)
    var_488 = 6;
    var_496 = 8;
    pri = fun_0060(var_488)
    var_504 = 19;
    pri = GimmickIwaKoriOpenHole_(var_504)
    var_512 = 10;
    var_520 = 8;
    pri = fun_0060(var_512)
    var_528 = 20;
    pri = GimmickIwaKoriOpenHole_(var_528)
    var_536 = 18;
    pri = GimmickIwaKoriOpenHole_(var_536)
    var_544 = 4;
    var_552 = 8;
    pri = fun_0060(var_544)
    var_560 = 21;
    pri = GimmickIwaKoriOpenHole_(var_560)
    var_568 = 3;
    var_576 = 8;
    pri = fun_0060(var_568)
    var_584 = 23;
    pri = GimmickIwaKoriOpenHole_(var_584)
    var_592 = 8;
    var_600 = 8;
    pri = fun_0060(var_592)
    var_608 = 22;
    pri = GimmickIwaKoriOpenHole_(var_608)
    var_616 = 3;
    var_624 = 8;
    pri = fun_0060(var_616)
    var_632 = 24;
    pri = GimmickIwaKoriOpenHole_(var_632)
    var_640 = 54;
    pri = GimmickIwaKoriOpenHole_(var_640)
    var_648 = 2;
    var_656 = 8;
    pri = fun_0060(var_648)
    var_664 = 25;
    pri = GimmickIwaKoriOpenHole_(var_664)
    var_672 = 6;
    var_680 = 8;
    pri = fun_0060(var_672)
    var_688 = 27;
    pri = GimmickIwaKoriOpenHole_(var_688)
    var_696 = 3;
    var_704 = 8;
    pri = fun_0060(var_696)
    var_712 = 56;
    pri = GimmickIwaKoriOpenHole_(var_712)
    var_720 = 2;
    var_728 = 8;
    pri = fun_0060(var_720)
    var_736 = 26;
    pri = GimmickIwaKoriOpenHole_(var_736)
    var_744 = 15;
    var_752 = 8;
    pri = fun_0060(var_744)
    var_760 = 28;
    pri = GimmickIwaKoriOpenHole_(var_760)
    var_768 = 0;
    pri = fun_0138()
    var_776 = 10;
    var_784 = 8;
    pri = fun_0060(var_776)
    var_792 = 3;
    var_800 = 1;
    pri = EvCameraEnd(var_800, var_792)
    pri = 0;
    return pri;
}
// fun_1938
fun_1938() {
    var_8 = 3;
    var_16 = 1500;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 0;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 0;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 47;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 5800;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 500;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 2605;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 100;
    pri = EvCameraMoveDist(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_136 = 0;
    pri = fun_0138()
    var_144 = 0;
    pri = fun_06D8()
    var_152 = 30;
    pri = GimmickIwaKoriOpenHole_(var_152)
    var_160 = 12;
    var_168 = 8;
    pri = fun_0060(var_160)
    var_176 = 29;
    pri = GimmickIwaKoriOpenHole_(var_176)
    var_184 = 5;
    var_192 = 8;
    pri = fun_0060(var_184)
    var_200 = 55;
    pri = GimmickIwaKoriOpenHole_(var_200)
    var_208 = 7;
    var_216 = 8;
    pri = fun_0060(var_208)
    var_224 = 31;
    pri = GimmickIwaKoriOpenHole_(var_224)
    var_232 = 8;
    var_240 = 8;
    pri = fun_0060(var_232)
    var_248 = 32;
    pri = GimmickIwaKoriOpenHole_(var_248)
    pri = EvCameraShakeEnd()
    var_256 = 3;
    var_264 = 1500;
    pri = float(var_264)
    var_272 = pri;
    var_280 = 0;
    pri = float(var_280)
    var_288 = pri;
    var_296 = 0;
    pri = float(var_296)
    var_304 = pri;
    var_312 = 47;
    pri = float(var_312)
    var_320 = pri;
    var_328 = 2565;
    pri = float(var_328)
    var_336 = pri;
    var_344 = 500;
    pri = float(var_344)
    var_352 = pri;
    var_360 = 2605;
    pri = float(var_360)
    var_368 = pri;
    var_376 = 200;
    pri = EvCameraMoveDist(var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_384 = 12;
    var_392 = 8;
    pri = fun_0060(var_384)
    var_400 = 33;
    pri = GimmickIwaKoriOpenHole_(var_400)
    var_408 = 14;
    var_416 = 8;
    pri = fun_0060(var_408)
    var_424 = 34;
    pri = GimmickIwaKoriOpenHole_(var_424)
    var_432 = 6;
    var_440 = 8;
    pri = fun_0060(var_432)
    var_448 = 35;
    pri = GimmickIwaKoriOpenHole_(var_448)
    var_456 = 18;
    var_464 = 8;
    pri = fun_0060(var_456)
    var_472 = 36;
    pri = GimmickIwaKoriOpenHole_(var_472)
    var_480 = 8;
    var_488 = 8;
    pri = fun_0060(var_480)
    var_496 = 37;
    pri = GimmickIwaKoriOpenHole_(var_496)
    var_504 = 12;
    var_512 = 8;
    pri = fun_0060(var_504)
    var_520 = 38;
    pri = GimmickIwaKoriOpenHole_(var_520)
    var_528 = 10;
    var_536 = 8;
    pri = fun_0060(var_528)
    var_544 = 39;
    pri = GimmickIwaKoriOpenHole_(var_544)
    var_552 = 19;
    var_560 = 8;
    pri = fun_0060(var_552)
    var_568 = 40;
    pri = GimmickIwaKoriOpenHole_(var_568)
    var_576 = 3;
    pri = GimmickIwaKoriOpenHole_(var_576)
    var_584 = 8;
    var_592 = 8;
    pri = fun_0060(var_584)
    var_600 = 41;
    pri = GimmickIwaKoriOpenHole_(var_600)
    var_608 = 10;
    var_616 = 8;
    pri = fun_0060(var_608)
    var_624 = 49;
    pri = GimmickIwaKoriOpenHole_(var_624)
    var_632 = 4;
    var_640 = 8;
    pri = fun_0060(var_632)
    var_648 = 42;
    pri = GimmickIwaKoriOpenHole_(var_648)
    var_656 = 6;
    var_664 = 8;
    pri = fun_0060(var_656)
    var_672 = 53;
    pri = GimmickIwaKoriOpenHole_(var_672)
    var_680 = 24;
    var_688 = 8;
    pri = fun_0060(var_680)
    var_696 = 43;
    pri = GimmickIwaKoriOpenHole_(var_696)
    var_704 = 44;
    pri = GimmickIwaKoriOpenHole_(var_704)
    var_712 = 22;
    var_720 = 8;
    pri = fun_0060(var_712)
    var_728 = 45;
    pri = GimmickIwaKoriOpenHole_(var_728)
    var_736 = 46;
    pri = GimmickIwaKoriOpenHole_(var_736)
    var_744 = 27;
    var_752 = 8;
    pri = fun_0060(var_744)
    var_760 = 47;
    pri = GimmickIwaKoriOpenHole_(var_760)
    var_768 = 0;
    pri = fun_0138()
    var_776 = 20;
    var_784 = 8;
    pri = fun_0060(var_776)
    var_792 = 3;
    var_800 = 1;
    pri = EvCameraEnd(var_800, var_792)
    pri = 0;
    return pri;
}
// fun_21B8
fun_21B8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 7058190020068288276;
    pri = GlobalCall(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
