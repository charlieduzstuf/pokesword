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
    OP_ZERO_P_S -8
    OP_JUMP lab_0168
// lab_0168
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0268
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_01E8
    pri = 0;
    return pri;
// lab_0268
    pri = 0;
    return pri;
// lab_01E8
    pri = arg_0;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    var_16 = pri;
    pri = arg_1;
    var_24 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_POP_ALT 
    OP_STOR_I 
    OP_JUMP lab_0160
// lab_0160
    OP_INC_P_S -8
}
// fun_0280
fun_0280() {
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
// fun_02F8
fun_02F8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0348
fun_0348() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0980(var_8)
    OP_JZER lab_03C0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_09B0(var_24)
    OP_JNZ lab_03C0
    pri = 0;
    return pri;
// lab_03C0
    OP_JUMP lab_03D0
// lab_03D0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0430
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0430
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03D0
    pri = 0;
    return pri;
}
// fun_0470
fun_0470() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_04A8
fun_04A8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateBoolParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_04E8
fun_04E8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0528
fun_0528() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0560
fun_0560() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_05A8
    pri = 0;
    return pri;
// lab_05A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_05E8
// lab_05E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0980(var_8)
    OP_JNZ lab_0670
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0660
    pri = 0;
    return pri;
// lab_0670
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_06B8
    pri = 0;
    return pri;
// lab_06B8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0718
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0888(var_8)
    pri = 0;
    return pri;
// lab_0718
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05E8
    pri = 0;
    return pri;
// lab_0660
    OP_JUMP lab_06B8
}
// fun_0760
fun_0760() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07A8
// lab_07A8
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0800
    pri = 0;
    return pri;
// lab_0800
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0840
    pri = 0;
    return pri;
// lab_0840
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07A8
    pri = 0;
    return pri;
}
// fun_0888
fun_0888() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_08C0
fun_08C0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0900
fun_0900() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0940
fun_0940() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0980
fun_0980() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_09B0
fun_09B0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_09E0
fun_09E0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0A10
fun_0A10() {
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
// switch_1028
        case default:
        {
// switch_1028_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1070
// lab_1070
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
            OP_JNZ lab_1118
            var_88 = 0;
            pri = fun_12D0()
// lab_1118
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1028_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0C10
                case default:
                {
// switch_0C10_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0C88
// lab_0C88
                    OP_JUMP lab_1070
                }
                case 0x0:
                {
// switch_0C10_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0C88
                }
                case 0x1:
                {
// switch_0C10_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0C88
                }
                case 0x2:
                {
// switch_0C10_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0C88
                }
                case 0x3:
                {
// switch_0C10_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0C88
                }
                case 0x4:
                {
// switch_0C10_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0C88
                }
                case 0x5:
                {
// switch_0C10_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0C88
                }
            }
        }
        case 0x65:
        {
// switch_1028_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0DC8
                case default:
                {
// switch_0DC8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0E40
// lab_0E40
                    OP_JUMP lab_1070
                }
                case 0x0:
                {
// switch_0DC8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0E40
                }
                case 0x1:
                {
// switch_0DC8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0E40
                }
                case 0x2:
                {
// switch_0DC8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0E40
                }
                case 0x3:
                {
// switch_0DC8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0E40
                }
                case 0x4:
                {
// switch_0DC8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0E40
                }
                case 0x5:
                {
// switch_0DC8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0E40
                }
            }
        }
        case 0x66:
        {
// switch_1028_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0F80
                case default:
                {
// switch_0F80_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0FF8
// lab_0FF8
                    OP_JUMP lab_1070
                }
                case 0x0:
                {
// switch_0F80_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0FF8
                }
                case 0x1:
                {
// switch_0F80_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0FF8
                }
                case 0x2:
                {
// switch_0F80_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0FF8
                }
                case 0x3:
                {
// switch_0F80_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0FF8
                }
                case 0x4:
                {
// switch_0F80_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0FF8
                }
                case 0x5:
                {
// switch_0F80_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0FF8
                }
            }
        }
    }
}
// fun_1130
fun_1130() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0528(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_11D8
    pri = 1;
    return pri;
// lab_11D8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1220
fun_1220() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1270
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1130(var_8)
    arg_2 = pri;
// lab_1270
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0A10(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12D0
fun_12D0() {
    OP_JUMP lab_12E8
// lab_12E8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1328
    pri = 0;
    return pri;
// lab_1328
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_12E8
    pri = 0;
    return pri;
}
// fun_1368
fun_1368() {
    var_8 = 0;
    pri = fun_12D0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1418
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1418
    pri = 0;
    return pri;
}
// fun_1428
fun_1428() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1458
fun_1458() {
    pri = arg_4;
    OP_JNZ lab_1490
    var_8 = 0;
    pri = fun_08C0()
// lab_1490
    pri = arg_1;
    switch (pri) {
// switch_2868
        case default:
        {
// switch_2868_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0980(var_264)
            OP_JZER lab_2E30
            pri = arg_3;
            switch (pri) {
// switch_2DD8
                case default:
                {
// switch_2DD8_case_default
                    OP_JUMP lab_30E8
// lab_30E8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3158
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3158
                    var_8 = 0;
                    pri = fun_0900()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_2DD8_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2DD8_case_default
                }
                case 0x2:
                {
// switch_2DD8_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2DD8_case_default
                }
                case 0x3:
                {
// switch_2DD8_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2DD8_case_default
                }
            }
// lab_2E30
            pri = arg_1;
            OP_JZER lab_2E80
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_2E80
            pri = 0;
            OP_JUMP lab_2E88
// lab_2E80
            pri = 1;
// lab_2E88
            OP_JZER lab_2EF0
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0528(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_2EF0
            pri = 1;
            OP_JUMP lab_2EF8
// lab_2EF0
            pri = 0;
// lab_2EF8
            OP_JZER lab_2F48
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_30E8
// lab_2F48
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_2FB0
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_30E8
// lab_2FB0
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0528(var_24, var_16)
            var_264 = pri;
            pri = 0;
            OP_ADDR_ALT -392
            OP_FILL 128
            OP_PUSH_P_ADR -392
            pri = var_264;
            OP_ADD_P_C 1
            var_168 = pri;
            pri = NumericToString(var_168, var_160)
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -392
            var_176 = 1688;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 1704;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_2868_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x1:
        {
// switch_2868_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x2:
        {
// switch_2868_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x3:
        {
// switch_2868_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x4:
        {
// switch_2868_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x5:
        {
// switch_2868_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_04E8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0888(var_40)
            OP_JUMP switch_2868_case_default
        }
        case 0x6:
        {
// switch_2868_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x7:
        {
// switch_2868_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x8:
        {
// switch_2868_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x9:
        {
// switch_2868_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0xa:
        {
// switch_2868_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0xb:
        {
// switch_2868_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0xc:
        {
// switch_2868_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0xd:
        {
// switch_2868_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0xe:
        {
// switch_2868_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0xf:
        {
// switch_2868_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x10:
        {
// switch_2868_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x11:
        {
// switch_2868_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x12:
        {
// switch_2868_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x13:
        {
// switch_2868_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x14:
        {
// switch_2868_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x15:
        {
// switch_2868_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x16:
        {
// switch_2868_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x17:
        {
// switch_2868_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x18:
        {
// switch_2868_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x19:
        {
// switch_2868_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x1a:
        {
// switch_2868_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x1b:
        {
// switch_2868_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x1c:
        {
// switch_2868_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x1d:
        {
// switch_2868_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x1e:
        {
// switch_2868_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x1f:
        {
// switch_2868_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x20:
        {
// switch_2868_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x21:
        {
// switch_2868_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x22:
        {
// switch_2868_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x23:
        {
// switch_2868_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x24:
        {
// switch_2868_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x25:
        {
// switch_2868_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x26:
        {
// switch_2868_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x27:
        {
// switch_2868_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x28:
        {
// switch_2868_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x29:
        {
// switch_2868_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x2a:
        {
// switch_2868_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x2b:
        {
// switch_2868_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x2c:
        {
// switch_2868_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x2d:
        {
// switch_2868_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x2e:
        {
// switch_2868_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x2f:
        {
// switch_2868_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x30:
        {
// switch_2868_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x31:
        {
// switch_2868_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x32:
        {
// switch_2868_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x33:
        {
// switch_2868_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x34:
        {
// switch_2868_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x35:
        {
// switch_2868_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x36:
        {
// switch_2868_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x37:
        {
// switch_2868_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x38:
        {
// switch_2868_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x39:
        {
// switch_2868_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x3a:
        {
// switch_2868_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x3b:
        {
// switch_2868_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x3c:
        {
// switch_2868_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x3d:
        {
// switch_2868_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
        case 0x3e:
        {
// switch_2868_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_04E8(var_24, var_16, var_8)
            OP_JUMP switch_2868_case_default
        }
    }
}
// fun_3188
fun_3188() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3288
        case default:
        {
// switch_3288_case_default
            var_8 = arg_5;
            var_16 = var_8;
            var_24 = arg_4;
            var_32 = arg_2;
            var_40 = 8802641224559852288;
            var_48 = arg_0;
            pri = EasyTalkCharacter(var_48, var_40, var_32, var_24, var_16, var_8)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3288_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3288_case_default
        }
        case 0x1:
        {
// switch_3288_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3288_case_default
        }
        case 0x2:
        {
// switch_3288_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3288_case_default
        }
        case 0x3:
        {
// switch_3288_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3288_case_default
        }
    }
}
// fun_3348
fun_3348() {
    var_8 = 0;
    var_16 = arg_5;
    pri = arg_4;
    alt = 2;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1220(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_12D0()
    pri = 0;
    return pri;
}
// fun_33E0
fun_33E0() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_3188(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_3348(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_3488
fun_3488() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_34D8
// lab_34D8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3550
    OP_JUMP lab_3580
// lab_3550
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_34D8
// lab_3580
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3608
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1458(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_09E0(var_56)
// lab_3608
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3670
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0940(var_24, var_16)
// lab_3670
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0940(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3730
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0560(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_02F8(var_88, var_80, var_72, var_64, var_56)
// lab_3730
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3770
    pri = 0;
    return pri;
// lab_3770
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_38B8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1872;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0470(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3880
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_38B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0348(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0348(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0560(var_40)
    pri = 0;
    return pri;
// lab_3880
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0940(var_16, var_8)
}
// fun_3940
fun_3940() {
    var_8 = arg_8;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = 8802641224559852288;
    pri = GetFieldObjectPositionZ_(var_48)
    OP_MOVE_ALT 
    pri = arg_3;
    var_56 = pri;
    var_64 = alt;
    pri = floatadd(var_64, var_56)
    var_72 = pri;
    var_80 = 8802641224559852288;
    pri = GetFieldObjectPositionX_(var_80)
    OP_MOVE_ALT 
    pri = arg_2;
    var_88 = pri;
    var_96 = alt;
    pri = floatadd(var_96, var_88)
    var_104 = pri;
    var_112 = arg_1;
    var_120 = arg_0;
    var_128 = 72;
    pri = fun_0280(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
}
// fun_3A78
fun_3A78() {
    pri = g_mode;
    switch (pri) {
// switch_3B38
        case default:
        {
// switch_3B38_case_default
            pri = CommandNOP()
            OP_JUMP lab_3B80
// lab_3B80
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3B38_case_0x0
            var_8 = 0;
            pri = fun_3B90()
            OP_JUMP lab_3B80
        }
        case 0x143c6a3f49745896:
        {
// switch_3B38_case_0x143c6a3f49745896
            var_8 = 0;
            pri = fun_4138()
            OP_JUMP lab_3B80
        }
        case 0x78c5c804a8fefaa7:
        {
// switch_3B38_case_0x78c5c804a8fefaa7
            var_8 = 0;
            pri = fun_3BA8()
            OP_JUMP lab_3B80
        }
    }
}
// fun_3B90
fun_3B90() {
    pri = 0;
    return pri;
}
// fun_3BA8
fun_3BA8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    pri = PlayerGetZoneID()
    var_16 = pri;
    pri = var_16;
    switch (pri) {
// switch_3E50
        case default:
        {
// switch_3E50_case_default
            pri = 0;
            return pri;
            OP_JUMP lab_3F48
// lab_3F48
            pri = 0;
            return pri;
        }
        case 0x93a8b6f339fe13bf:
        {
// switch_3E50_case_0x5da93b6aa5fce7ed
            var_8 = 1;
            OP_PUSH2_C 8622303575888975234, 8622298078330834179
            var_16 = 0;
            var_24 = var_8;
            var_32 = 40;
            pri = fun_3F60(var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_3F48
        }
        case 0x9458c085a640aa9a:
        {
// switch_3E50_case_0x9458c085a640aa9a
            var_8 = 0;
            OP_PUSH2_C 8622296978819205968, 8622300277354090601
            var_16 = 1;
            var_24 = var_8;
            var_32 = 40;
            pri = fun_3F60(var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_3F48
        }
        case 0xaccbc5f347fd787a:
        {
// switch_3E50_case_0x5da93b6aa5fce7ed
            var_8 = 1;
            OP_PUSH2_C 8622303575888975234, 8622298078330834179
            var_16 = 0;
            var_24 = var_8;
            var_32 = 40;
            pri = fun_3F60(var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_3F48
        }
        case 0xb0001bbe455a1210:
        {
// switch_3E50_case_0x5da93b6aa5fce7ed
            var_8 = 1;
            OP_PUSH2_C 8622303575888975234, 8622298078330834179
            var_16 = 0;
            var_24 = var_8;
            var_32 = 40;
            pri = fun_3F60(var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_3F48
        }
        case 0xb76358be492ce4c1:
        {
// switch_3E50_case_0x5da93b6aa5fce7ed
            var_8 = 1;
            OP_PUSH2_C 8622303575888975234, 8622298078330834179
            var_16 = 0;
            var_24 = var_8;
            var_32 = 40;
            pri = fun_3F60(var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_3F48
        }
        case 0xc5c383af7c163ae4:
        {
// switch_3E50_case_0xc5c383af7c163ae4
            var_8 = 0;
            OP_PUSH2_C 8622296978819205968, 8622300277354090601
            var_16 = 5;
            var_24 = var_8;
            var_32 = 40;
            pri = fun_3F60(var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_3F48
        }
        case 0xd3d652ac0b932a57:
        {
// switch_3E50_case_0xd3d652ac0b932a57
            var_8 = 0;
            OP_PUSH2_C 8622296978819205968, 8622300277354090601
            var_16 = 3;
            var_24 = var_8;
            var_32 = 40;
            pri = fun_3F60(var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_3F48
        }
        case 0xd7a176f9369de0e9:
        {
// switch_3E50_case_0x5da93b6aa5fce7ed
            var_8 = 1;
            OP_PUSH2_C 8622303575888975234, 8622298078330834179
            var_16 = 0;
            var_24 = var_8;
            var_32 = 40;
            pri = fun_3F60(var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_3F48
        }
        case 0x2b7c86c0d370d3c3:
        {
// switch_3E50_case_0x5da93b6aa5fce7ed
            var_8 = 1;
            OP_PUSH2_C 8622303575888975234, 8622298078330834179
            var_16 = 0;
            var_24 = var_8;
            var_32 = 40;
            pri = fun_3F60(var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_3F48
        }
        case 0x3527a3bf292595f6:
        {
// switch_3E50_case_0x3527a3bf292595f6
            var_8 = 0;
            OP_PUSH2_C 8622296978819205968, 8622300277354090601
            var_16 = 2;
            var_24 = var_8;
            var_32 = 40;
            pri = fun_3F60(var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_3F48
        }
        case 0x49529a72e22fc56e:
        {
// switch_3E50_case_0x5da93b6aa5fce7ed
            var_8 = 1;
            OP_PUSH2_C 8622303575888975234, 8622298078330834179
            var_16 = 0;
            var_24 = var_8;
            var_32 = 40;
            pri = fun_3F60(var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_3F48
        }
        case 0x4da2ff92f4867575:
        {
// switch_3E50_case_0x5da93b6aa5fce7ed
            var_8 = 1;
            OP_PUSH2_C 8622303575888975234, 8622298078330834179
            var_16 = 0;
            var_24 = var_8;
            var_32 = 40;
            pri = fun_3F60(var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_3F48
        }
        case 0x5da93b6aa5fce7ed:
        {
// switch_3E50_case_0x5da93b6aa5fce7ed
            var_8 = 1;
            OP_PUSH2_C 8622303575888975234, 8622298078330834179
            var_16 = 0;
            var_24 = var_8;
            var_32 = 40;
            pri = fun_3F60(var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_3F48
        }
        case 0x7654a65e387422c1:
        {
// switch_3E50_case_0x7654a65e387422c1
            var_8 = 0;
            OP_PUSH2_C 8622296978819205968, 8622300277354090601
            var_16 = 4;
            var_24 = var_8;
            var_32 = 40;
            pri = fun_3F60(var_24, var_16, var_8, var_0, var_-8)
            OP_JUMP lab_3F48
        }
    }
}
// fun_3F60
fun_3F60() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 88;
    pri = fun_33E0(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1368(var_104)
    var_120 = 0;
    pri = fun_1428()
    var_128 = 8802641224559852288;
    var_136 = 8;
    pri = fun_0348(var_128)
    var_144 = arg_4;
    var_152 = arg_1;
    var_160 = 2;
    pri = CallDressupEvent(var_160, var_152, var_144)
    var_168 = 0;
    var_176 = 3;
    var_184 = 0;
    var_192 = 100;
    var_200 = -1;
    var_208 = arg_3;
    var_216 = arg_0;
    var_224 = 56;
    pri = fun_1220(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 1;
    var_240 = 8;
    pri = fun_1368(var_232)
    var_248 = 0;
    pri = fun_1428()
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    var_280 = arg_0;
    var_288 = 32;
    pri = fun_3488(var_280, var_272, var_264, var_256)
    pri = 0;
    return pri;
}
// fun_4138
fun_4138() {
    var_8 = 0;
    pri = fun_4440()
    var_16 = 0;
    pri = fun_44D8()
    var_24 = 0;
    var_32 = 0;
    var_40 = 1;
    pri = CallDressupEvent(var_40, var_32, var_24)
    var_48 = 0;
    pri = fun_4338()
    var_56 = 0;
    pri = fun_43D0()
    var_72 = 1;
    pri = TempWorkGet(var_72)
    var_8 = pri;
    pri = var_8;
    OP_JZER lab_4218
// lab_4218
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 0;
    var_40 = 0;
    var_48 = 100;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 0;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_80 = 72;
    pri = fun_3940(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 8802641224559852288;
    var_96 = 8;
    pri = fun_0348(var_88)
    pri = 0;
    return pri;
}
// fun_4308
fun_4308() {
    var_8 = 2008;
    pri = GetZonePlacementHash(var_8)
    return pri;
}
// fun_4338
fun_4338() {
    var_8 = 2144;
    pri = SoundPostEvent(var_8)
    var_24 = 0;
    pri = fun_4308()
    var_8 = pri;
    var_32 = 0;
    var_40 = 2328;
    var_48 = var_8;
    var_56 = 24;
    pri = fun_04A8(var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_43D0
fun_43D0() {
    var_16 = 0;
    pri = fun_4308()
    var_8 = pri;
    var_24 = 2432;
    var_32 = var_8;
    var_40 = 16;
    pri = fun_0760(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_4440
fun_4440() {
    var_8 = 2472;
    pri = SoundPostEvent(var_8)
    var_24 = 0;
    pri = fun_4308()
    var_8 = pri;
    var_32 = 1;
    var_40 = 2656;
    var_48 = var_8;
    var_56 = 24;
    pri = fun_04A8(var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_44D8
fun_44D8() {
    var_16 = 0;
    pri = fun_4308()
    var_8 = pri;
    var_24 = 2760;
    var_32 = var_8;
    var_40 = 16;
    pri = fun_0760(var_32, var_24)
    pri = 0;
    return pri;
}
