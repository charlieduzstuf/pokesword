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
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_00C0
fun_00C0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    pri = GetFnvHash64(var_24)
    var_32 = pri;
    var_40 = arg_0;
    pri = FadeOut_(var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0130
fun_0130() {
    OP_JUMP lab_0148
// lab_0148
    pri = FadeWait_()
    OP_JZER lab_0180
    pri = 0;
    return pri;
// lab_0180
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0148
    pri = 0;
    return pri;
}
// fun_01C0
fun_01C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXYZ_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0218
fun_0218() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0258
fun_0258() {
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
// fun_02D0
fun_02D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_03F8(var_8)
    OP_JZER lab_0348
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0428(var_24)
    OP_JNZ lab_0348
    pri = 0;
    return pri;
// lab_0348
    OP_JUMP lab_0358
// lab_0358
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_03B8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_03B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0358
    pri = 0;
    return pri;
}
// fun_03F8
fun_03F8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0428
fun_0428() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0458
fun_0458() {
    pri = arg_4;
    alt = 1;
    OP_AND 
    var_8 = pri;
    pri = arg_4;
    alt = 4;
    OP_AND 
    var_16 = pri;
    pri = arg_4;
    alt = 16;
    OP_AND 
    var_24 = pri;
    pri = arg_4;
    alt = 8;
    OP_AND 
    var_32 = pri;
    OP_ZERO_P_S -40
    pri = arg_2;
    switch (pri) {
// switch_0A70
        case default:
        {
// switch_0A70_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_0AB8
// lab_0AB8
            var_8 = arg_6;
            var_16 = arg_5;
            var_24 = var_32;
            var_32 = var_24;
            var_40 = var_16;
            var_48 = var_8;
            var_56 = var_40;
            var_64 = arg_1;
            var_72 = 0;
            var_80 = arg_0;
            pri = MsgWin_(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            pri = arg_4;
            alt = 2;
            OP_AND 
            OP_JNZ lab_0B60
            var_88 = 0;
            pri = fun_0C30()
// lab_0B60
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_0A70_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0658
                case default:
                {
// switch_0658_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_06D0
// lab_06D0
                    OP_JUMP lab_0AB8
                }
                case 0x0:
                {
// switch_0658_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_06D0
                }
                case 0x1:
                {
// switch_0658_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_06D0
                }
                case 0x2:
                {
// switch_0658_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_06D0
                }
                case 0x3:
                {
// switch_0658_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_06D0
                }
                case 0x4:
                {
// switch_0658_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_06D0
                }
                case 0x5:
                {
// switch_0658_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_06D0
                }
            }
        }
        case 0x65:
        {
// switch_0A70_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0810
                case default:
                {
// switch_0810_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0888
// lab_0888
                    OP_JUMP lab_0AB8
                }
                case 0x0:
                {
// switch_0810_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0888
                }
                case 0x1:
                {
// switch_0810_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0888
                }
                case 0x2:
                {
// switch_0810_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0888
                }
                case 0x3:
                {
// switch_0810_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0888
                }
                case 0x4:
                {
// switch_0810_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0888
                }
                case 0x5:
                {
// switch_0810_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0888
                }
            }
        }
        case 0x66:
        {
// switch_0A70_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_09C8
                case default:
                {
// switch_09C8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0A40
// lab_0A40
                    OP_JUMP lab_0AB8
                }
                case 0x0:
                {
// switch_09C8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0A40
                }
                case 0x1:
                {
// switch_09C8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0A40
                }
                case 0x2:
                {
// switch_09C8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0A40
                }
                case 0x3:
                {
// switch_09C8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0A40
                }
                case 0x4:
                {
// switch_09C8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0A40
                }
                case 0x5:
                {
// switch_09C8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0A40
                }
            }
        }
    }
}
// fun_0B78
fun_0B78() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0458(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0BE0
fun_0BE0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0B78(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C30
fun_0C30() {
    OP_JUMP lab_0C48
// lab_0C48
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0C88
    pri = 0;
    return pri;
// lab_0C88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C48
    pri = 0;
    return pri;
}
// fun_0CC8
fun_0CC8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_0CF8
fun_0CF8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_0D70()
    return pri;
}
// fun_0D70
fun_0D70() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_0DB0
fun_0DB0() {
    pri = g_mode;
    switch (pri) {
// switch_0EE8
        case default:
        {
// switch_0EE8_case_default
            pri = CommandNOP()
            OP_JUMP lab_0F60
// lab_0F60
            pri = 0;
            return pri;
        }
        case 0xb683525543556188:
        {
// switch_0EE8_case_0xb683525543556188
            var_8 = 0;
            pri = fun_0FB8()
            OP_JUMP lab_0F60
        }
        case 0xb6835455435564ee:
        {
// switch_0EE8_case_0xb6835455435564ee
            var_8 = 0;
            pri = fun_1058()
            OP_JUMP lab_0F60
        }
        case 0xb6835555435566a1:
        {
// switch_0EE8_case_0xb6835555435566a1
            var_8 = 0;
            pri = fun_1008()
            OP_JUMP lab_0F60
        }
        case 0xfb9c8c57b92c8fea:
        {
// switch_0EE8_case_0xfb9c8c57b92c8fea
            var_8 = 0;
            pri = fun_0F88()
            OP_JUMP lab_0F60
        }
        case 0x0:
        {
// switch_0EE8_case_0x0
            var_8 = 0;
            pri = fun_0F70()
            OP_JUMP lab_0F60
        }
        case 0x64f61112dd09786e:
        {
// switch_0EE8_case_0x64f61112dd09786e
            var_8 = 0;
            pri = fun_0FA0()
            OP_JUMP lab_0F60
        }
    }
}
// fun_0F70
fun_0F70() {
    pri = 0;
    return pri;
}
// fun_0F88
fun_0F88() {
    pri = 0;
    return pri;
}
// fun_0FA0
fun_0FA0() {
    pri = 0;
    return pri;
}
// fun_0FB8
fun_0FB8() {
    var_8 = 17156;
    var_16 = 3014;
    var_24 = 17150;
    var_32 = 2799;
    var_40 = 32;
    pri = fun_10A8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1008
fun_1008() {
    var_8 = 11546;
    var_16 = 3987;
    var_24 = 11542;
    var_32 = 4202;
    var_40 = 32;
    pri = fun_10A8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1058
fun_1058() {
    var_8 = 3744;
    var_16 = 3014;
    var_24 = 3735;
    var_32 = 2798;
    var_40 = 32;
    pri = fun_10A8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10A8
fun_10A8() {
    var_8 = 3;
    var_16 = 0;
    var_24 = -4390787649685805409;
    var_32 = 24;
    pri = fun_0BE0(var_24, var_16, var_8)
    var_40 = 0;
    var_48 = 0;
    var_56 = 1;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 48;
    pri = fun_0CF8(var_80, var_72, var_64, var_56, var_48, var_40)
    OP_JZER lab_13A8
    var_96 = 0;
    pri = fun_0CC8()
    var_104 = 1;
    var_112 = 0;
    var_120 = 4641240890982006784;
    var_128 = 0;
    var_136 = 0;
    var_144 = arg_1;
    pri = float(var_144)
    var_152 = pri;
    var_160 = arg_0;
    pri = float(var_160)
    var_168 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_176 = 72;
    pri = fun_0258(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 8802641224559852288;
    var_192 = 8;
    pri = fun_02D0(var_184)
    var_200 = 1;
    var_208 = 0;
    var_216 = 32;
    var_224 = 8;
    var_232 = 32;
    pri = fun_00C0(var_224, var_216, var_208, var_200)
    var_240 = 80;
    pri = SoundPostEvent(var_240)
    var_248 = 0;
    pri = fun_0130()
    var_256 = 1;
    var_264 = 1;
    OP_PUSH4_C 4672065149710893056, 4660724237026197504, 4659917195491409920, 8802641224559852288
    var_272 = 48;
    pri = fun_01C0(var_264, var_256, var_248, var_240, var_232, var_224)
    var_280 = 1;
    OP_PUSH2_C 4640537203540230144, 8802641224559852288
    var_288 = 24;
    pri = fun_0218(var_280, var_272, var_264)
    pri = FieldCameraClearDelay()
    pri = GimmickKakugoReset_()
    var_296 = 376;
    var_304 = 8;
    var_312 = 16;
    pri = fun_0060(var_304, var_296)
    var_320 = 0;
    pri = fun_0130()
    OP_JUMP lab_1498
// lab_13A8
    var_8 = 0;
    pri = fun_0CC8()
    var_16 = 1;
    var_24 = 0;
    var_32 = 4641240890982006784;
    var_40 = 0;
    var_48 = 0;
    var_56 = arg_3;
    pri = float(var_56)
    var_64 = pri;
    var_72 = arg_2;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_88 = 72;
    pri = fun_0258(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 8802641224559852288;
    var_104 = 8;
    pri = fun_02D0(var_96)
// lab_1498
    pri = 0;
    return pri;
}
