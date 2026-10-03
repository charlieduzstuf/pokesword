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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = float(var_16)
    var_24 = pri;
    pri = floatsub(var_24, var_16)
    return pri;
}
// fun_00B8
fun_00B8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00F8
    pri = 0;
    return pri;
// lab_00F8
    OP_ZERO_P_S -8
    OP_JUMP lab_0120
// lab_0120
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0178
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0118
// lab_0178
    pri = 0;
    return pri;
// lab_0118
    OP_INC_P_S -8
}
// fun_0190
fun_0190() {
    pri = AnyInputWait_()
    return pri;
}
// fun_01B8
fun_01B8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_01F8
fun_01F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0238
fun_0238() {
    var_8 = arg_5;
    var_16 = arg_9;
    var_24 = arg_8;
    var_32 = arg_7;
    var_40 = arg_6;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = arg_0;
    pri = StartAdsorbMove_(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_02B0
fun_02B0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0650(var_8)
    OP_JZER lab_0328
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0680(var_24)
    OP_JNZ lab_0328
    pri = 0;
    return pri;
// lab_0328
    OP_JUMP lab_0338
// lab_0338
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0398
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0398
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0338
    pri = 0;
    return pri;
}
// fun_03D8
fun_03D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateBoolParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0418
fun_0418() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0460
    pri = 0;
    return pri;
// lab_0460
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_04A0
// lab_04A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0650(var_8)
    OP_JNZ lab_0528
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0518
    pri = 0;
    return pri;
// lab_0528
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0570
    pri = 0;
    return pri;
// lab_0570
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_05D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0618(var_8)
    pri = 0;
    return pri;
// lab_05D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04A0
    pri = 0;
    return pri;
// lab_0518
    OP_JUMP lab_0570
}
// fun_0618
fun_0618() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0650
fun_0650() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0680
fun_0680() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_06B0
fun_06B0() {
    OP_JUMP lab_06C8
// lab_06C8
    pri = EvCameraMoveWait_()
    OP_JZER lab_0700
    pri = 0;
    return pri;
// lab_0700
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06C8
    pri = 0;
    return pri;
}
// fun_0740
fun_0740() {
    pri = g_mode;
    switch (pri) {
// switch_0850
        case default:
        {
// switch_0850_case_default
            pri = CommandNOP()
            OP_JUMP lab_08B8
// lab_08B8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0850_case_0x0
            var_8 = 0;
            pri = fun_08C8()
            OP_JUMP lab_08B8
        }
        case 0x3eaf4c5cc7b6c268:
        {
// switch_0850_case_0x3eaf4c5cc7b6c268
            var_8 = 0;
            pri = fun_08E0()
            OP_JUMP lab_08B8
        }
        case 0x51458679579cf4cc:
        {
// switch_0850_case_0x51458679579cf4cc
            var_8 = 0;
            pri = fun_0A68()
            OP_JUMP lab_08B8
        }
        case 0x51458779579cf67f:
        {
// switch_0850_case_0x51458779579cf67f
            var_8 = 0;
            pri = fun_0CE0()
            OP_JUMP lab_08B8
        }
        case 0x5149067957a00423:
        {
// switch_0850_case_0x5149067957a00423
            var_8 = 0;
            pri = fun_0F58()
            OP_JUMP lab_08B8
        }
    }
}
// fun_08C8
fun_08C8() {
    pri = 0;
    return pri;
}
// fun_08E0
fun_08E0() {
    pri = IsPlayerRideBicycle()
    OP_JZER lab_09B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0418(var_8)
    var_24 = 0;
    var_32 = 2;
    pri = RequestPlayerRideBicycle(var_32, var_24)
// lab_09B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0418(var_8)
    var_24 = 0;
    pri = fun_1470()
    var_32 = 0;
    pri = fun_0190()
    var_40 = 0;
    pri = fun_1778()
    var_48 = 0;
    var_56 = 1;
    var_64 = 32;
    pri = PokeMemoryCheckParty(var_64, var_56, var_48)
    pri = 0;
    return pri;
}
// lab_0960
pri = IsPlayerRideBicycle()
OP_JZER lab_09B8
var_8 = 1;
var_16 = 8;
pri = fun_00B8(var_8)
OP_JUMP lab_0960
// fun_0A68
fun_0A68() {
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0B40
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0418(var_8)
    var_24 = 0;
    var_32 = 2;
    pri = RequestPlayerRideBicycle(var_32, var_24)
// lab_0B40
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0418(var_8)
    pri = EvCameraStart()
    var_24 = 0;
    var_32 = 4631952216750555136;
    var_40 = 3;
    OP_PUSH5_C 4670854774325688402, 4645134921362938266, 4668248425992510505, 4671127865526237266, 4647022387003643658
    var_48 = 4668235490238209720;
    var_56 = 30;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 0;
    pri = fun_1470()
    var_72 = 0;
    pri = fun_06B0()
    var_80 = 0;
    pri = fun_0190()
    var_88 = 3;
    var_96 = 20;
    pri = EvCameraEnd(var_96, var_88)
    var_104 = 0;
    pri = fun_06B0()
    var_112 = 0;
    pri = fun_1778()
    var_120 = 0;
    var_128 = 1;
    var_136 = 112;
    pri = PokeMemoryCheckParty(var_136, var_128, var_120)
    pri = 0;
    return pri;
}
// lab_0AE8
pri = IsPlayerRideBicycle()
OP_JZER lab_0B40
var_8 = 1;
var_16 = 8;
pri = fun_00B8(var_8)
OP_JUMP lab_0AE8
// fun_0CE0
fun_0CE0() {
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0DB8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0418(var_8)
    var_24 = 0;
    var_32 = 2;
    pri = RequestPlayerRideBicycle(var_32, var_24)
// lab_0DB8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0418(var_8)
    pri = EvCameraStart()
    var_24 = 0;
    var_32 = 4631952216750555136;
    var_40 = 3;
    OP_PUSH5_C 4670855117923072082, 4646120963390727782, 4668073818048461537, 4671121427885656637, 4647188281318042501
    var_48 = 4667943047633011999;
    var_56 = 30;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 0;
    pri = fun_1470()
    var_72 = 0;
    pri = fun_06B0()
    var_80 = 0;
    pri = fun_0190()
    var_88 = 3;
    var_96 = 20;
    pri = EvCameraEnd(var_96, var_88)
    var_104 = 0;
    pri = fun_06B0()
    var_112 = 0;
    pri = fun_1778()
    var_120 = 0;
    var_128 = 1;
    var_136 = 192;
    pri = PokeMemoryCheckParty(var_136, var_128, var_120)
    pri = 0;
    return pri;
}
// lab_0D60
pri = IsPlayerRideBicycle()
OP_JZER lab_0DB8
var_8 = 1;
var_16 = 8;
pri = fun_00B8(var_8)
OP_JUMP lab_0D60
// fun_0F58
fun_0F58() {
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1030
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0418(var_8)
    var_24 = 0;
    var_32 = 2;
    pri = RequestPlayerRideBicycle(var_32, var_24)
// lab_1030
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0418(var_8)
    pri = EvCameraStart()
    OP_PUSH2_C -9223372036854775808, 4631952216750555136
    var_24 = 3;
    OP_PUSH5_C 4663069693240336712, 4646447474363712143, 4666258881692282388, 4663774766066764349, 4641010433344824934
    var_32 = 4666617828258286141;
    var_40 = 30;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 1;
    var_56 = 766126218067963874;
    var_64 = 16;
    pri = fun_01F8(var_56, var_48)
    var_72 = 1;
    var_80 = 5125792077355514497;
    var_88 = 16;
    pri = fun_01F8(var_80, var_72)
    var_96 = 1;
    var_104 = 1137344390351607869;
    var_112 = 16;
    pri = fun_01F8(var_104, var_96)
    var_120 = 1;
    var_128 = -3158556829595394837;
    var_136 = 16;
    pri = fun_01F8(var_128, var_120)
    var_144 = 1;
    var_152 = -282768498497462690;
    var_160 = 16;
    pri = fun_01F8(var_152, var_144)
    var_168 = 1;
    var_176 = -7735113214219939612;
    var_184 = 16;
    pri = fun_01F8(var_176, var_168)
    var_192 = 1;
    var_200 = -8030690411766558408;
    var_208 = 16;
    pri = fun_01F8(var_200, var_192)
    var_216 = 0;
    pri = fun_1470()
    var_224 = 0;
    pri = fun_06B0()
    var_232 = 0;
    pri = fun_0190()
    var_240 = 3;
    var_248 = 20;
    pri = EvCameraEnd(var_248, var_240)
    var_256 = 0;
    pri = fun_06B0()
    var_264 = 0;
    pri = fun_1778()
    var_272 = 0;
    var_280 = 766126218067963874;
    var_288 = 16;
    pri = fun_01F8(var_280, var_272)
    var_296 = 0;
    var_304 = 5125792077355514497;
    var_312 = 16;
    pri = fun_01F8(var_304, var_296)
    var_320 = 0;
    var_328 = 1137344390351607869;
    var_336 = 16;
    pri = fun_01F8(var_328, var_320)
    var_344 = 0;
    var_352 = -3158556829595394837;
    var_360 = 16;
    pri = fun_01F8(var_352, var_344)
    var_368 = 0;
    var_376 = -282768498497462690;
    var_384 = 16;
    pri = fun_01F8(var_376, var_368)
    var_392 = 0;
    var_400 = -7735113214219939612;
    var_408 = 16;
    pri = fun_01F8(var_400, var_392)
    var_416 = 0;
    var_424 = -8030690411766558408;
    var_432 = 16;
    pri = fun_01F8(var_424, var_416)
    var_440 = 0;
    var_448 = 1;
    var_456 = 272;
    pri = PokeMemoryCheckParty(var_456, var_448, var_440)
    pri = 0;
    return pri;
}
// lab_0FD8
pri = IsPlayerRideBicycle()
OP_JZER lab_1030
var_8 = 1;
var_16 = 8;
pri = fun_00B8(var_8)
OP_JUMP lab_0FD8
// fun_1470
fun_1470() {
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    pri = GetChairAdsorpTargetPosX_(var_16)
    var_8 = pri;
    pri = GetTargetFieldObjectID()
    var_32 = pri;
    pri = GetChairAdsorpTargetPosZ_(var_32)
    var_16 = pri;
    pri = GetTargetFieldObjectID()
    var_48 = pri;
    pri = GetChairAdsorpTargetDir_(var_48)
    var_24 = pri;
    var_56 = 0;
    var_64 = 8802641224559852288;
    pri = SetFieldObjectActiveDynamicCollision_(var_64, var_56)
    var_72 = 352;
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = 4618441417868443648;
    var_112 = 0;
    pri = 4640537203540230144;
    OP_LOAD_P_S_ALT -24
    var_120 = pri;
    var_128 = alt;
    var_136 = 16;
    pri = fun_0060(var_128, var_120)
    var_144 = pri;
    var_152 = var_16;
    pri = float(var_152)
    var_160 = pri;
    var_168 = var_8;
    pri = float(var_168)
    var_176 = pri;
    var_184 = 8802641224559852288;
    var_192 = 80;
    pri = fun_0238(var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_200 = 1;
    var_208 = 360;
    var_216 = 8802641224559852288;
    var_224 = 24;
    pri = fun_03D8(var_216, var_208, var_200)
    var_232 = 8802641224559852288;
    var_240 = 8;
    pri = fun_02B0(var_232)
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_248 = 16;
    pri = fun_1818(var_240, var_232)
    var_256 = 1;
    var_264 = var_24;
    pri = float(var_264)
    var_272 = pri;
    var_280 = 8802641224559852288;
    var_288 = 24;
    pri = fun_01B8(var_280, var_272, var_264)
    pri = 0;
    return pri;
}
// fun_1778
fun_1778() {
    var_8 = 0;
    var_16 = 432;
    var_24 = 8802641224559852288;
    var_32 = 24;
    pri = fun_03D8(var_24, var_16, var_8)
    var_40 = 6;
    var_48 = 8;
    pri = fun_00B8(var_40)
    var_56 = 1;
    var_64 = 8802641224559852288;
    pri = SetFieldObjectActiveDynamicCollision_(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_1818
fun_1818() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_1860
// lab_1860
    var_8 = arg_0;
    pri = GetAnimationMotionTime_(var_8)
    OP_LOAD_P_S_ALT 32
    OP_JSLESS lab_18B0
    pri = 0;
    return pri;
// lab_18B0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_18F0
    pri = 0;
    return pri;
// lab_18F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1860
    pri = 0;
    return pri;
}
