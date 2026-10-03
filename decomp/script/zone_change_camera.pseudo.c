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
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0178
fun_0178() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_01B8
fun_01B8() {
    var_8 = 0;
    var_16 = arg_8;
    var_24 = arg_6;
    var_32 = arg_7;
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = arg_0;
    pri = StartForceMove_(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0230
fun_0230() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0280
fun_0280() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_03E0(var_8)
    OP_JZER lab_02F8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0410(var_24)
    OP_JNZ lab_02F8
    pri = 0;
    return pri;
// lab_02F8
    OP_JUMP lab_0308
// lab_0308
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0368
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0368
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0308
    pri = 0;
    return pri;
}
// fun_03A8
fun_03A8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_03E0
fun_03E0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0410
fun_0410() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0440
fun_0440() {
    pri = g_mode;
    switch (pri) {
// switch_0578
        case default:
        {
// switch_0578_case_default
            pri = CommandNOP()
            OP_JUMP lab_05F0
// lab_05F0
            pri = 0;
            return pri;
        }
        case 0x9bc8289b41653e55:
        {
// switch_0578_case_0x9bc8289b41653e55
            var_8 = 0;
            pri = fun_0618()
            OP_JUMP lab_05F0
        }
        case 0xd13ad3244a90c297:
        {
// switch_0578_case_0xd13ad3244a90c297
            var_8 = 0;
            pri = fun_08C8()
            OP_JUMP lab_05F0
        }
        case 0x0:
        {
// switch_0578_case_0x0
            var_8 = 0;
            pri = fun_0600()
            OP_JUMP lab_05F0
        }
        case 0x60522ec881015e10:
        {
// switch_0578_case_0x60522ec881015e10
            var_8 = 0;
            pri = fun_08B0()
            OP_JUMP lab_05F0
        }
        case 0x7f8b31a01475cb90:
        {
// switch_0578_case_0x7f8b31a01475cb90
            var_8 = 0;
            pri = fun_0F08()
            OP_JUMP lab_05F0
        }
        case 0x7f8b34a01475d0a9:
        {
// switch_0578_case_0x7f8b34a01475d0a9
            var_8 = 0;
            pri = fun_0B40()
            OP_JUMP lab_05F0
        }
    }
}
// fun_0600
fun_0600() {
    pri = 0;
    return pri;
}
// fun_0618
fun_0618() {
    pri = EvCameraStart()
    var_8 = 3;
    var_16 = 2950;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 0;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 0;
    pri = float(var_48)
    var_56 = pri;
    var_64 = -18;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH2_C 4664704359167583846, 4659278819040323174
    var_80 = 31300;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 40;
    pri = EvCameraMoveDist(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_07E0
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 180;
    pri = float(var_128)
    var_136 = pri;
    var_144 = 8802641224559852288;
    var_152 = 40;
    pri = fun_0230(var_144, var_136, var_128, var_120, var_112)
    OP_JUMP lab_0838
// lab_07E0
    var_8 = 1;
    var_16 = 180;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0138(var_32, var_24, var_16)
// lab_0838
    var_8 = 25;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 8802641224559852288;
    var_32 = 8;
    pri = fun_0280(var_24)
    var_40 = 1;
    pri = SetIsSkipCameraEnd_(var_40)
    pri = 0;
    return pri;
}
// fun_08B0
fun_08B0() {
    pri = 0;
    return pri;
}
// fun_08C8
fun_08C8() {
    pri = EvCameraStart()
    var_8 = 3;
    var_16 = 2800;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 0;
    pri = float(var_32)
    var_40 = pri;
    var_48 = -30;
    pri = float(var_48)
    var_56 = pri;
    var_64 = -12;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C 4658374140872989082, 4653551462971237990, 4673383958932828979
    var_80 = 40;
    pri = EvCameraMoveDist(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0A70
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 150;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 8802641224559852288;
    var_136 = 40;
    pri = fun_0230(var_128, var_120, var_112, var_104, var_96)
    OP_JUMP lab_0AC8
// lab_0A70
    var_8 = 1;
    var_16 = 150;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0138(var_32, var_24, var_16)
// lab_0AC8
    var_8 = 25;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 8802641224559852288;
    var_32 = 8;
    pri = fun_0280(var_24)
    var_40 = 1;
    pri = SetIsSkipCameraEnd_(var_40)
    pri = 0;
    return pri;
}
// fun_0B40
fun_0B40() {
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0178(var_16, var_8)
    var_32 = 1;
    var_40 = -7020791411487741825;
    var_48 = 16;
    pri = fun_0178(var_40, var_32)
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0BF8
    var_56 = 8802641224559852288;
    var_64 = 8;
    pri = fun_03A8(var_56)
// lab_0BF8
    var_8 = 1;
    var_16 = 180;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0138(var_32, var_24, var_16)
    pri = EvCameraStart()
    var_48 = 3;
    var_56 = 2680;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 0;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 0;
    pri = float(var_88)
    var_96 = pri;
    var_104 = -11;
    pri = float(var_104)
    var_112 = pri;
    var_120 = 85740;
    pri = float(var_120)
    var_128 = pri;
    var_136 = 3033;
    pri = float(var_136)
    var_144 = pri;
    var_152 = 37842;
    pri = float(var_152)
    var_160 = pri;
    var_168 = 1;
    pri = EvCameraMoveDist(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_176 = 1;
    var_184 = 0;
    pri = float(var_184)
    var_192 = pri;
    var_200 = 0;
    pri = float(var_200)
    var_208 = pri;
    var_216 = 0;
    pri = float(var_216)
    var_224 = pri;
    var_232 = 0;
    var_240 = 84000;
    pri = float(var_240)
    var_248 = pri;
    var_256 = 8802641224559852288;
    pri = GetFieldObjectPositionX_(var_256)
    var_264 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_272 = 72;
    pri = fun_01B8(var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_280 = 30;
    var_288 = 8;
    pri = fun_0060(var_280)
    var_296 = 1;
    pri = SetIsSkipCameraEnd_(var_296)
    pri = 0;
    return pri;
}
// fun_0F08
fun_0F08() {
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0178(var_16, var_8)
    var_32 = 1;
    var_40 = -7020791411487741825;
    var_48 = 16;
    pri = fun_0178(var_40, var_32)
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0FC0
    var_56 = 8802641224559852288;
    var_64 = 8;
    pri = fun_03A8(var_56)
// lab_0FC0
    var_8 = 1;
    var_16 = 180;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0138(var_32, var_24, var_16)
    pri = EvCameraStart()
    var_48 = 3;
    var_56 = 4260;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 0;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 0;
    pri = float(var_88)
    var_96 = pri;
    var_104 = -4596598959675696742;
    var_112 = 20529;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 4961;
    pri = float(var_128)
    var_136 = pri;
    var_144 = 55680;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 1;
    pri = EvCameraMoveDist(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_168 = 1;
    var_176 = 0;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 0;
    pri = float(var_192)
    var_200 = pri;
    var_208 = 0;
    pri = float(var_208)
    var_216 = pri;
    var_224 = 0;
    var_232 = 18600;
    pri = float(var_232)
    var_240 = pri;
    var_248 = 8802641224559852288;
    pri = GetFieldObjectPositionX_(var_248)
    var_256 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_264 = 72;
    pri = fun_01B8(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 30;
    var_280 = 8;
    pri = fun_0060(var_272)
    var_288 = 1;
    pri = SetIsSkipCameraEnd_(var_288)
    pri = 0;
    return pri;
}
