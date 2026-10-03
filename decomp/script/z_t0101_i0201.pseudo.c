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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_02D0
fun_02D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07F8(var_8)
    OP_JZER lab_0348
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0828(var_24)
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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0430
fun_0430() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0470
fun_0470() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_04A8
fun_04A8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_04F0
    pri = 0;
    return pri;
// lab_04F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0530
// lab_0530
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07F8(var_8)
    OP_JNZ lab_05B8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_05A8
    pri = 0;
    return pri;
// lab_05B8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0600
    pri = 0;
    return pri;
// lab_0600
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0660
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_06A8(var_8)
    pri = 0;
    return pri;
// lab_0660
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0530
    pri = 0;
    return pri;
// lab_05A8
    OP_JUMP lab_0600
}
// fun_06A8
fun_06A8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_06E0
fun_06E0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0720
fun_0720() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0760
fun_0760() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtBGObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07B8
fun_07B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07F8
fun_07F8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0828
fun_0828() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0858
fun_0858() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0888
fun_0888() {
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
// switch_0EA0
        case default:
        {
// switch_0EA0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_0EE8
// lab_0EE8
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
            OP_JNZ lab_0F90
            var_88 = 0;
            pri = fun_11C8()
// lab_0F90
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_0EA0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0A88
                case default:
                {
// switch_0A88_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0B00
// lab_0B00
                    OP_JUMP lab_0EE8
                }
                case 0x0:
                {
// switch_0A88_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0B00
                }
                case 0x1:
                {
// switch_0A88_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0B00
                }
                case 0x2:
                {
// switch_0A88_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0B00
                }
                case 0x3:
                {
// switch_0A88_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0B00
                }
                case 0x4:
                {
// switch_0A88_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0B00
                }
                case 0x5:
                {
// switch_0A88_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0B00
                }
            }
        }
        case 0x65:
        {
// switch_0EA0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0C40
                case default:
                {
// switch_0C40_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0CB8
// lab_0CB8
                    OP_JUMP lab_0EE8
                }
                case 0x0:
                {
// switch_0C40_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0CB8
                }
                case 0x1:
                {
// switch_0C40_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0CB8
                }
                case 0x2:
                {
// switch_0C40_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0CB8
                }
                case 0x3:
                {
// switch_0C40_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0CB8
                }
                case 0x4:
                {
// switch_0C40_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0CB8
                }
                case 0x5:
                {
// switch_0C40_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0CB8
                }
            }
        }
        case 0x66:
        {
// switch_0EA0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0DF8
                case default:
                {
// switch_0DF8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0E70
// lab_0E70
                    OP_JUMP lab_0EE8
                }
                case 0x0:
                {
// switch_0DF8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0E70
                }
                case 0x1:
                {
// switch_0DF8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0E70
                }
                case 0x2:
                {
// switch_0DF8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0E70
                }
                case 0x3:
                {
// switch_0DF8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0E70
                }
                case 0x4:
                {
// switch_0DF8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0E70
                }
                case 0x5:
                {
// switch_0DF8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0E70
                }
            }
        }
    }
}
// fun_0FA8
fun_0FA8() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0470(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1050
    pri = 1;
    return pri;
// lab_1050
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1098
fun_1098() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FA8(var_8)
    arg_2 = pri;
// lab_10E8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0888(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1148
fun_1148() {
    var_8 = 0;
    var_16 = 0;
    pri = arg_2;
    alt = 8;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = 102;
    var_48 = arg_0;
    var_56 = arg_1;
    var_64 = 56;
    pri = fun_0888(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11C8
fun_11C8() {
    OP_JUMP lab_11E0
// lab_11E0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1220
    pri = 0;
    return pri;
// lab_1220
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_11E0
    pri = 0;
    return pri;
}
// fun_1260
fun_1260() {
    var_8 = 0;
    pri = fun_11C8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1310
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1310
    pri = 0;
    return pri;
}
// fun_1320
fun_1320() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1350
fun_1350() {
    pri = arg_4;
    OP_JNZ lab_1388
    var_8 = 0;
    pri = fun_06E0()
// lab_1388
    pri = arg_1;
    switch (pri) {
// switch_2760
        case default:
        {
// switch_2760_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_07F8(var_264)
            OP_JZER lab_2D28
            pri = arg_3;
            switch (pri) {
// switch_2CD0
                case default:
                {
// switch_2CD0_case_default
                    OP_JUMP lab_2FE0
// lab_2FE0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3050
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3050
                    var_8 = 0;
                    pri = fun_0720()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_2CD0_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2CD0_case_default
                }
                case 0x2:
                {
// switch_2CD0_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2CD0_case_default
                }
                case 0x3:
                {
// switch_2CD0_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_2CD0_case_default
                }
            }
// lab_2D28
            pri = arg_1;
            OP_JZER lab_2D78
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_2D78
            pri = 0;
            OP_JUMP lab_2D80
// lab_2D78
            pri = 1;
// lab_2D80
            OP_JZER lab_2DE8
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0470(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_2DE8
            pri = 1;
            OP_JUMP lab_2DF0
// lab_2DE8
            pri = 0;
// lab_2DF0
            OP_JZER lab_2E40
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_2FE0
// lab_2E40
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_2EA8
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_2FE0
// lab_2EA8
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0470(var_24, var_16)
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
// switch_2760_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x1:
        {
// switch_2760_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x2:
        {
// switch_2760_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x3:
        {
// switch_2760_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x4:
        {
// switch_2760_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x5:
        {
// switch_2760_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0430(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_06A8(var_40)
            OP_JUMP switch_2760_case_default
        }
        case 0x6:
        {
// switch_2760_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x7:
        {
// switch_2760_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x8:
        {
// switch_2760_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x9:
        {
// switch_2760_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0xa:
        {
// switch_2760_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0xb:
        {
// switch_2760_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0xc:
        {
// switch_2760_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0xd:
        {
// switch_2760_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0xe:
        {
// switch_2760_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0xf:
        {
// switch_2760_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x10:
        {
// switch_2760_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x11:
        {
// switch_2760_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x12:
        {
// switch_2760_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x13:
        {
// switch_2760_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x14:
        {
// switch_2760_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x15:
        {
// switch_2760_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x16:
        {
// switch_2760_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x17:
        {
// switch_2760_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x18:
        {
// switch_2760_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x19:
        {
// switch_2760_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x1a:
        {
// switch_2760_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x1b:
        {
// switch_2760_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x1c:
        {
// switch_2760_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x1d:
        {
// switch_2760_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x1e:
        {
// switch_2760_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x1f:
        {
// switch_2760_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x20:
        {
// switch_2760_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x21:
        {
// switch_2760_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x22:
        {
// switch_2760_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x23:
        {
// switch_2760_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x24:
        {
// switch_2760_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x25:
        {
// switch_2760_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x26:
        {
// switch_2760_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x27:
        {
// switch_2760_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x28:
        {
// switch_2760_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x29:
        {
// switch_2760_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x2a:
        {
// switch_2760_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x2b:
        {
// switch_2760_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x2c:
        {
// switch_2760_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x2d:
        {
// switch_2760_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x2e:
        {
// switch_2760_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x2f:
        {
// switch_2760_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x30:
        {
// switch_2760_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x31:
        {
// switch_2760_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x32:
        {
// switch_2760_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x33:
        {
// switch_2760_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x34:
        {
// switch_2760_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x35:
        {
// switch_2760_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x36:
        {
// switch_2760_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x37:
        {
// switch_2760_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x38:
        {
// switch_2760_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x39:
        {
// switch_2760_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x3a:
        {
// switch_2760_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x3b:
        {
// switch_2760_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x3c:
        {
// switch_2760_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x3d:
        {
// switch_2760_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
        case 0x3e:
        {
// switch_2760_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0430(var_24, var_16, var_8)
            OP_JUMP switch_2760_case_default
        }
    }
}
// fun_3080
fun_3080() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3180
        case default:
        {
// switch_3180_case_default
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
// switch_3180_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3180_case_default
        }
        case 0x1:
        {
// switch_3180_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3180_case_default
        }
        case 0x2:
        {
// switch_3180_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3180_case_default
        }
        case 0x3:
        {
// switch_3180_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3180_case_default
        }
    }
}
// fun_3240
fun_3240() {
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
    pri = fun_1098(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_11C8()
    pri = 0;
    return pri;
}
// fun_32D8
fun_32D8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_3080(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_3240(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_3380
fun_3380() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_33D0
// lab_33D0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3448
    OP_JUMP lab_3478
// lab_3448
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_33D0
// lab_3478
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3500
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1350(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0858(var_56)
// lab_3500
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3568
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_07B8(var_24, var_16)
// lab_3568
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_07B8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3628
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_04A8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0280(var_88, var_80, var_72, var_64, var_56)
// lab_3628
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3668
    pri = 0;
    return pri;
// lab_3668
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_37B0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1872;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_03F8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3778
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_37B0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_02D0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_02D0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_04A8(var_40)
    pri = 0;
    return pri;
// lab_3778
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_07B8(var_16, var_8)
}
// fun_3838
fun_3838() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = arg_9;
    var_32 = arg_8;
    var_40 = arg_7;
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = var_8;
    var_104 = 88;
    pri = fun_32D8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1260(var_112)
    var_128 = 0;
    pri = fun_1320()
    var_144 = 13;
    pri = TempWorkGet(var_144)
    var_152 = pri;
    pri = float(var_152)
    var_16 = pri;
    var_160 = arg_4;
    var_168 = var_16;
    var_176 = arg_3;
    var_184 = var_8;
    var_192 = 32;
    pri = fun_3380(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_39B0
fun_39B0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    var_40 = var_8;
    var_48 = 8802641224559852288;
    var_56 = 40;
    pri = fun_0760(var_48, var_40, var_32, var_24, var_16)
    var_64 = arg_2;
    pri = arg_1;
    alt = 4;
    pri |= alt;
    var_72 = pri;
    var_80 = var_8;
    var_88 = arg_0;
    var_96 = 32;
    pri = fun_1148(var_88, var_80, var_72, var_64)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1260(var_104)
    var_120 = 0;
    pri = fun_1320()
    pri = 0;
    return pri;
}
// fun_3AC8
fun_3AC8() {
    pri = g_mode;
    switch (pri) {
// switch_3C28
        case default:
        {
// switch_3C28_case_default
            pri = CommandNOP()
            OP_JUMP lab_3CB0
// lab_3CB0
            pri = 0;
            return pri;
        }
        case 0x90be8101e081239f:
        {
// switch_3C28_case_0x90be8101e081239f
            var_8 = 0;
            pri = fun_3E18()
            OP_JUMP lab_3CB0
        }
        case 0xb74ae7d847cfeae3:
        {
// switch_3C28_case_0xb74ae7d847cfeae3
            var_8 = 0;
            pri = fun_3FA8()
            OP_JUMP lab_3CB0
        }
        case 0xb807211ab60a527d:
        {
// switch_3C28_case_0xb807211ab60a527d
            var_8 = 0;
            pri = fun_3D00()
            OP_JUMP lab_3CB0
        }
        case 0xceb0ab2b54868930:
        {
// switch_3C28_case_0xceb0ab2b54868930
            var_8 = 0;
            pri = fun_4048()
            OP_JUMP lab_3CB0
        }
        case 0xcfa168c383a14348:
        {
// switch_3C28_case_0xcfa168c383a14348
            var_8 = 0;
            pri = fun_3F58()
            OP_JUMP lab_3CB0
        }
        case 0x0:
        {
// switch_3C28_case_0x0
            var_8 = 0;
            pri = fun_3CC0()
            OP_JUMP lab_3CB0
        }
        case 0xb1aa08445bffe5b:
        {
// switch_3C28_case_0xb1aa08445bffe5b
            var_8 = 0;
            pri = fun_3FF8()
            OP_JUMP lab_3CB0
        }
    }
}
// fun_3CC0
fun_3CC0() {
    pri = 0;
    return pri;
}
// public fun_63F02D54
public fun_63F02D54() {
    alt = 2008;
    pri = arg_0;
    OP_LIDX_P_B 3
    return pri;
}
// fun_3D00
fun_3D00() {
    var_8 = 9010327285021969031;
    pri = FlagGet(var_8)
    OP_JZER lab_3DC0
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 6202690687235796787;
    var_96 = 80;
    pri = fun_3838(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_3E08
// lab_3DC0
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = -3649732840684685161;
    pri = GlobalCall(var_40, var_32, var_24, var_16, var_8)
// lab_3E08
    pri = 0;
    return pri;
}
// fun_3E18
fun_3E18() {
    var_8 = 9010327285021969031;
    pri = FlagGet(var_8)
    OP_JZER lab_3ED8
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 6182155961293802706;
    var_96 = 80;
    pri = fun_3838(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_3F48
// lab_3ED8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 6182154861782174495;
    var_88 = 80;
    pri = fun_3838(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_3F48
    pri = 0;
    return pri;
}
// fun_3F58
fun_3F58() {
    var_8 = 3;
    var_16 = 8;
    var_24 = -7213034846011582949;
    var_32 = 24;
    pri = fun_39B0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3FA8
fun_3FA8() {
    var_8 = 3;
    var_16 = 8;
    var_24 = -2602729717147907594;
    var_32 = 24;
    pri = fun_39B0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3FF8
fun_3FF8() {
    var_8 = 3;
    var_16 = 8;
    var_24 = 634341204355502247;
    var_32 = 24;
    pri = fun_39B0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4048
fun_4048() {
    var_8 = 3;
    var_16 = 8;
    var_24 = 5113044726544194916;
    var_32 = 24;
    pri = fun_39B0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
