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
    pri = arg_1;
    OP_JZER lab_0180
    var_8 = arg_0;
    pri = GetPublicRand(var_8)
    return pri;
// lab_0180
    pri = arg_0;
    OP_ADD_P_C -1
    var_8 = pri;
    pri = GetPublicRand(var_8)
    return pri;
}
// fun_01B8
fun_01B8() {
    OP_ZERO_P_S -8
    OP_JUMP lab_01E8
// lab_01E8
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_02E8
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0268
    pri = 0;
    return pri;
// lab_02E8
    pri = 0;
    return pri;
// lab_0268
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
    OP_JUMP lab_01E0
// lab_01E0
    OP_INC_P_S -8
}
// fun_0300
fun_0300() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0348
// lab_0348
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0388
    OP_JUMP lab_03F8
// lab_0388
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_03C8
    OP_JUMP lab_03F8
// lab_03C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0348
// lab_03F8
    pri = 0;
    return pri;
}
// fun_0410
fun_0410() {
    var_8 = arg_0;
    pri = IsFieldObjectExists_(var_8)
    return pri;
}
// fun_0440
fun_0440() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0490
fun_0490() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09B8(var_8)
    OP_JZER lab_0508
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_09E8(var_24)
    OP_JNZ lab_0508
    pri = 0;
    return pri;
// lab_0508
    OP_JUMP lab_0518
// lab_0518
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0578
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0578
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0518
    pri = 0;
    return pri;
}
// fun_05B8
fun_05B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_05F0
fun_05F0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0630
fun_0630() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0668
fun_0668() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_06B0
    pri = 0;
    return pri;
// lab_06B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_06F0
// lab_06F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09B8(var_8)
    OP_JNZ lab_0778
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0768
    pri = 0;
    return pri;
// lab_0778
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_07C0
    pri = 0;
    return pri;
// lab_07C0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0820
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0868(var_8)
    pri = 0;
    return pri;
// lab_0820
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06F0
    pri = 0;
    return pri;
// lab_0768
    OP_JUMP lab_07C0
}
// fun_0868
fun_0868() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_08A0
fun_08A0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_08E0
fun_08E0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0920
fun_0920() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtBGObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0978
fun_0978() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_09B8
fun_09B8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_09E8
fun_09E8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0A18
fun_0A18() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0A48
fun_0A48() {
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
// switch_1060
        case default:
        {
// switch_1060_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_10A8
// lab_10A8
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
            OP_JNZ lab_1150
            var_88 = 0;
            pri = fun_13F0()
// lab_1150
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1060_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0C48
                case default:
                {
// switch_0C48_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0CC0
// lab_0CC0
                    OP_JUMP lab_10A8
                }
                case 0x0:
                {
// switch_0C48_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0CC0
                }
                case 0x1:
                {
// switch_0C48_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0CC0
                }
                case 0x2:
                {
// switch_0C48_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0CC0
                }
                case 0x3:
                {
// switch_0C48_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0CC0
                }
                case 0x4:
                {
// switch_0C48_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0CC0
                }
                case 0x5:
                {
// switch_0C48_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0CC0
                }
            }
        }
        case 0x65:
        {
// switch_1060_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0E00
                case default:
                {
// switch_0E00_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0E78
// lab_0E78
                    OP_JUMP lab_10A8
                }
                case 0x0:
                {
// switch_0E00_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0E78
                }
                case 0x1:
                {
// switch_0E00_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0E78
                }
                case 0x2:
                {
// switch_0E00_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0E78
                }
                case 0x3:
                {
// switch_0E00_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0E78
                }
                case 0x4:
                {
// switch_0E00_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0E78
                }
                case 0x5:
                {
// switch_0E00_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0E78
                }
            }
        }
        case 0x66:
        {
// switch_1060_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0FB8
                case default:
                {
// switch_0FB8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1030
// lab_1030
                    OP_JUMP lab_10A8
                }
                case 0x0:
                {
// switch_0FB8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1030
                }
                case 0x1:
                {
// switch_0FB8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1030
                }
                case 0x2:
                {
// switch_0FB8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1030
                }
                case 0x3:
                {
// switch_0FB8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1030
                }
                case 0x4:
                {
// switch_0FB8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1030
                }
                case 0x5:
                {
// switch_0FB8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1030
                }
            }
        }
    }
}
// fun_1168
fun_1168() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0A48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11D0
fun_11D0() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0630(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1278
    pri = 1;
    return pri;
// lab_1278
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_12C0
fun_12C0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1310
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11D0(var_8)
    arg_2 = pri;
// lab_1310
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0A48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1370
fun_1370() {
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
    pri = fun_0A48(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13F0
fun_13F0() {
    OP_JUMP lab_1408
// lab_1408
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1448
    pri = 0;
    return pri;
// lab_1448
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1408
    pri = 0;
    return pri;
}
// fun_1488
fun_1488() {
    var_8 = 0;
    pri = fun_13F0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1538
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1538
    pri = 0;
    return pri;
}
// fun_1548
fun_1548() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1578
fun_1578() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_15B0
fun_15B0() {
    OP_JUMP lab_15C8
// lab_15C8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1610
    OP_JUMP lab_1640
    OP_JUMP lab_1630
// lab_1610
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1640
    pri = 0;
    return pri;
// lab_1630
    OP_JUMP lab_15C8
}
// fun_1650
fun_1650() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1680
fun_1680() {
    pri = arg_4;
    OP_JNZ lab_16B8
    var_8 = 0;
    pri = fun_08A0()
// lab_16B8
    pri = arg_1;
    switch (pri) {
// switch_2A90
        case default:
        {
// switch_2A90_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_09B8(var_264)
            OP_JZER lab_3058
            pri = arg_3;
            switch (pri) {
// switch_3000
                case default:
                {
// switch_3000_case_default
                    OP_JUMP lab_3310
// lab_3310
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3380
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3380
                    var_8 = 0;
                    pri = fun_08E0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3000_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_3000_case_default
                }
                case 0x2:
                {
// switch_3000_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_3000_case_default
                }
                case 0x3:
                {
// switch_3000_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01B8(var_16, var_8, var_0)
                    OP_JUMP switch_3000_case_default
                }
            }
// lab_3058
            pri = arg_1;
            OP_JZER lab_30A8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_30A8
            pri = 0;
            OP_JUMP lab_30B0
// lab_30A8
            pri = 1;
// lab_30B0
            OP_JZER lab_3118
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0630(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3118
            pri = 1;
            OP_JUMP lab_3120
// lab_3118
            pri = 0;
// lab_3120
            OP_JZER lab_3170
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01B8(var_16, var_8, var_0)
            OP_JUMP lab_3310
// lab_3170
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_31D8
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01B8(var_16, var_8, var_0)
            OP_JUMP lab_3310
// lab_31D8
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0630(var_24, var_16)
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
// switch_2A90_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x1:
        {
// switch_2A90_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x2:
        {
// switch_2A90_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x3:
        {
// switch_2A90_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x4:
        {
// switch_2A90_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x5:
        {
// switch_2A90_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05F0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0868(var_40)
            OP_JUMP switch_2A90_case_default
        }
        case 0x6:
        {
// switch_2A90_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x7:
        {
// switch_2A90_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x8:
        {
// switch_2A90_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x9:
        {
// switch_2A90_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0xa:
        {
// switch_2A90_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0xb:
        {
// switch_2A90_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0xc:
        {
// switch_2A90_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0xd:
        {
// switch_2A90_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0xe:
        {
// switch_2A90_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0xf:
        {
// switch_2A90_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x10:
        {
// switch_2A90_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x11:
        {
// switch_2A90_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x12:
        {
// switch_2A90_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x13:
        {
// switch_2A90_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x14:
        {
// switch_2A90_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x15:
        {
// switch_2A90_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x16:
        {
// switch_2A90_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x17:
        {
// switch_2A90_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x18:
        {
// switch_2A90_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x19:
        {
// switch_2A90_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x1a:
        {
// switch_2A90_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x1b:
        {
// switch_2A90_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x1c:
        {
// switch_2A90_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x1d:
        {
// switch_2A90_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x1e:
        {
// switch_2A90_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x1f:
        {
// switch_2A90_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x20:
        {
// switch_2A90_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x21:
        {
// switch_2A90_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x22:
        {
// switch_2A90_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x23:
        {
// switch_2A90_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x24:
        {
// switch_2A90_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x25:
        {
// switch_2A90_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x26:
        {
// switch_2A90_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x27:
        {
// switch_2A90_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x28:
        {
// switch_2A90_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x29:
        {
// switch_2A90_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x2a:
        {
// switch_2A90_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x2b:
        {
// switch_2A90_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x2c:
        {
// switch_2A90_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x2d:
        {
// switch_2A90_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x2e:
        {
// switch_2A90_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x2f:
        {
// switch_2A90_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x30:
        {
// switch_2A90_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x31:
        {
// switch_2A90_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x32:
        {
// switch_2A90_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x33:
        {
// switch_2A90_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x34:
        {
// switch_2A90_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x35:
        {
// switch_2A90_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x36:
        {
// switch_2A90_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x37:
        {
// switch_2A90_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x38:
        {
// switch_2A90_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x39:
        {
// switch_2A90_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x3a:
        {
// switch_2A90_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x3b:
        {
// switch_2A90_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x3c:
        {
// switch_2A90_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x3d:
        {
// switch_2A90_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
        case 0x3e:
        {
// switch_2A90_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05F0(var_24, var_16, var_8)
            OP_JUMP switch_2A90_case_default
        }
    }
}
// fun_33B0
fun_33B0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_34B0
        case default:
        {
// switch_34B0_case_default
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
// switch_34B0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_34B0_case_default
        }
        case 0x1:
        {
// switch_34B0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_34B0_case_default
        }
        case 0x2:
        {
// switch_34B0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_34B0_case_default
        }
        case 0x3:
        {
// switch_34B0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_34B0_case_default
        }
    }
}
// fun_3570
fun_3570() {
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
    pri = fun_12C0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_13F0()
    pri = 0;
    return pri;
}
// fun_3608
fun_3608() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_33B0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_3570(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_36B0
fun_36B0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_3700
// lab_3700
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3778
    OP_JUMP lab_37A8
// lab_3778
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_3700
// lab_37A8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3830
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1680(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0A18(var_56)
// lab_3830
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3898
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0978(var_24, var_16)
// lab_3898
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0978(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3958
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0668(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0440(var_88, var_80, var_72, var_64, var_56)
// lab_3958
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3998
    pri = 0;
    return pri;
// lab_3998
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3AE0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1872;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_05B8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3AA8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3AE0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0490(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0490(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0668(var_40)
    pri = 0;
    return pri;
// lab_3AA8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0978(var_16, var_8)
}
// fun_3B68
fun_3B68() {
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
    pri = fun_3608(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1488(var_112)
    var_128 = 0;
    pri = fun_1548()
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
    pri = fun_36B0(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_3CE0
fun_3CE0() {
    var_8 = 1;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    var_32 = arg_2;
    var_40 = 8802641224559852288;
    var_48 = arg_0;
    pri = EasyTalkPokemon(var_48, var_40, var_32)
    var_64 = 1;
    var_72 = 0;
    var_80 = arg_0;
    pri = SoundPlayPokeVoiceFromObject(var_80, var_72, var_64)
    var_8 = pri;
    var_88 = var_8;
    var_96 = 7;
    pri = TempWorkSet(var_96, var_88)
    var_104 = 30;
    var_112 = 2008;
    var_120 = 8802641224559852288;
    pri = AddParallelWaitStandard(var_120, var_112, var_104)
    pri = 0;
    return pri;
}
// fun_3E08
fun_3E08() {
    pri = arg_1;
    OP_JZER lab_3EA8
    var_8 = 0;
    var_16 = arg_6;
    pri = arg_5;
    alt = 2;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_4;
    var_40 = 0;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_12C0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_13F0()
// lab_3EA8
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_3CE0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3EE8
fun_3EE8() {
    var_16 = 7;
    pri = TempWorkGet(var_16)
    var_8 = pri;
    var_24 = var_8;
    var_32 = 8;
    pri = fun_0300(var_24)
    OP_JUMP lab_3F50
// lab_3F50
    var_8 = 2224;
    var_16 = 8802641224559852288;
    pri = FindParallelWait(var_16, var_8)
    OP_JNZ lab_3FA0
    OP_JUMP lab_3FD0
// lab_3FA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_3F50
// lab_3FD0
    OP_JUMP lab_3FE0
// lab_3FE0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 2440;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_4058
    OP_JUMP lab_4088
// lab_4058
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_3FE0
// lab_4088
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = arg_0;
    pri = EasyTalkTerminate(var_16)
    var_24 = 15;
    pri = TempWorkGet(var_24)
    alt = 1;
    OP_JEQ lab_4138
    var_32 = -1;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0978(var_40, var_32)
// lab_4138
    OP_ZERO_P_S -16
    OP_JUMP lab_4158
// lab_4158
    var_8 = arg_0;
    pri = IsEasyTalkRunning(var_8)
    OP_JNZ lab_4198
    OP_JUMP lab_41E0
// lab_4198
    pri = var_16;
    OP_EQ_P_C_PRI 300
    OP_JZER lab_41C8
    OP_JUMP lab_41E0
// lab_41C8
    OP_INC_P_S -16
    OP_JUMP lab_4158
// lab_41E0
    OP_CONST_S -24, 4
    pri = arg_1;
    OP_JZER lab_4260
    var_16 = arg_0;
    var_24 = 8;
    pri = fun_0410(var_16)
    OP_JZER lab_4260
    pri = 1;
    OP_JUMP lab_4268
// lab_4260
    pri = 0;
// lab_4268
    OP_JZER lab_42D8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0490(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = var_24;
    var_48 = arg_2;
    var_56 = arg_0;
    var_64 = 40;
    pri = fun_0440(var_56, var_48, var_40, var_32, var_24)
// lab_42D8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_4318
    pri = 0;
    return pri;
// lab_4318
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4448
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 2560;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_05B8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_32 = pri;
    pri = var_32;
    alt = 23;
    OP_JSLESS lab_4410
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_4448
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0490(var_8)
    var_24 = 8802641224559852288;
    var_32 = 8;
    pri = fun_0668(var_24)
    pri = 0;
    return pri;
// lab_4410
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0978(var_16, var_8)
}
// fun_44B0
fun_44B0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = arg_6;
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = var_8;
    var_72 = 56;
    pri = fun_3E08(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = arg_0;
    OP_JZER lab_4580
    var_80 = 1;
    var_88 = 8;
    pri = fun_1488(var_80)
    var_96 = 0;
    pri = fun_1548()
// lab_4580
    var_16 = 13;
    pri = TempWorkGet(var_16)
    var_24 = pri;
    pri = float(var_24)
    var_16 = pri;
    var_32 = var_16;
    pri = float(var_32)
    var_40 = pri;
    var_48 = arg_3;
    var_56 = var_8;
    var_64 = 24;
    pri = fun_3EE8(var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_4638
fun_4638() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    var_40 = var_8;
    var_48 = 8802641224559852288;
    var_56 = 40;
    pri = fun_0920(var_48, var_40, var_32, var_24, var_16)
    var_64 = arg_2;
    pri = arg_1;
    alt = 4;
    pri |= alt;
    var_72 = pri;
    var_80 = var_8;
    var_88 = arg_0;
    var_96 = 32;
    pri = fun_1370(var_88, var_80, var_72, var_64)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1488(var_104)
    var_120 = 0;
    pri = fun_1548()
    pri = 0;
    return pri;
}
// fun_4750
fun_4750() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    var_40 = var_8;
    var_48 = 8802641224559852288;
    var_56 = 40;
    pri = fun_0920(var_48, var_40, var_32, var_24, var_16)
    OP_CONST_S -16, 45
    pri = arg_1;
    OP_JZER lab_4818
    OP_CONST_S -16, 46
// lab_4818
    var_8 = arg_3;
    pri = arg_2;
    alt = 4;
    pri |= alt;
    var_16 = pri;
    var_24 = var_16;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1168(var_32, var_24, var_16, var_8)
    var_48 = 1;
    var_56 = 8;
    pri = fun_1488(var_48)
    var_64 = 0;
    pri = fun_1548()
    pri = 0;
    return pri;
}
// fun_48B8
fun_48B8() {
    pri = g_mode;
    switch (pri) {
// switch_49F0
        case default:
        {
// switch_49F0_case_default
            pri = CommandNOP()
            OP_JUMP lab_4A68
// lab_4A68
            pri = 0;
            return pri;
        }
        case 0x99d3eca1ab8b7da6:
        {
// switch_49F0_case_0x99d3eca1ab8b7da6
            var_8 = 0;
            pri = fun_4D50()
            OP_JUMP lab_4A68
        }
        case 0xd844f1261fbc883d:
        {
// switch_49F0_case_0xd844f1261fbc883d
            var_8 = 0;
            pri = fun_4E70()
            OP_JUMP lab_4A68
        }
        case 0x0:
        {
// switch_49F0_case_0x0
            var_8 = 0;
            pri = fun_4A78()
            OP_JUMP lab_4A68
        }
        case 0x62d47b0f95f930d6:
        {
// switch_49F0_case_0x62d47b0f95f930d6
            var_8 = 0;
            pri = fun_4A90()
            OP_JUMP lab_4A68
        }
        case 0x775586199c100fdb:
        {
// switch_49F0_case_0x775586199c100fdb
            var_8 = 0;
            pri = fun_4F78()
            OP_JUMP lab_4A68
        }
        case 0x7f4042a054503aae:
        {
// switch_49F0_case_0x7f4042a054503aae
            var_8 = 0;
            pri = fun_4CD0()
            OP_JUMP lab_4A68
        }
    }
}
// fun_4A78
fun_4A78() {
    pri = 0;
    return pri;
}
// fun_4A90
fun_4A90() {
    var_16 = 0;
    pri = TempWorkGet(var_16)
    var_8 = pri;
    OP_CONST_S -16, 2
    var_32 = 2696;
    pri = GetTargetFieldObjectID()
    var_40 = pri;
    var_48 = 16;
    pri = fun_0630(var_40, var_32)
    OP_EQ_P_C_PRI 2
    OP_JZER lab_4B70
    pri = CommandNOP()
    OP_ZERO_P_S -16
    OP_JUMP lab_4C50
// lab_4B70
    var_16 = 1;
    var_24 = 99;
    var_32 = 16;
    pri = fun_0138(var_24, var_16)
    OP_ADD_P_C 1
    var_24 = pri;
    pri = var_24;
    alt = 50;
    OP_JSGRTR lab_4BF8
    OP_CONST_S -16, 2
    OP_JUMP lab_4C48
// lab_4BF8
    pri = var_24;
    alt = 75;
    OP_JSGRTR lab_4C30
    OP_ZERO_P_S -16
    OP_JUMP lab_4C48
// lab_4C30
    OP_CONST_S -16, 1
// lab_4C48
// lab_4C50
    var_8 = 1;
    var_16 = 3;
    var_24 = 8;
    var_32 = 100;
    var_40 = -1;
    var_48 = var_16;
    var_56 = 0;
    var_64 = 1;
    var_72 = 0;
    var_80 = var_8;
    var_88 = 80;
    pri = fun_3B68(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4CD0
fun_4CD0() {
    var_16 = 0;
    pri = TempWorkGet(var_16)
    var_8 = pri;
    var_24 = 3;
    var_32 = 8;
    var_40 = var_8;
    var_48 = 24;
    pri = fun_4638(var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_4D50
fun_4D50() {
    pri = CommandNOP()
    var_8 = 2792;
    var_16 = 8;
    pri = fun_1578(var_8)
    var_24 = 0;
    pri = fun_15B0()
    var_40 = 0;
    pri = TempWorkGet(var_40)
    var_8 = pri;
    var_48 = 3;
    var_56 = 1;
    var_64 = 0;
    var_72 = var_8;
    var_80 = 32;
    pri = fun_4750(var_72, var_64, var_56, var_48)
    var_88 = 0;
    pri = fun_1650()
    var_96 = 0;
    var_104 = 1;
    var_112 = 2936;
    pri = PokeMemoryCheckParty(var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_4E70
fun_4E70() {
    var_8 = 3024;
    var_16 = 8;
    pri = fun_1578(var_8)
    var_24 = 0;
    pri = fun_15B0()
    var_40 = 0;
    pri = TempWorkGet(var_40)
    var_8 = pri;
    var_48 = 1;
    var_56 = 3;
    var_64 = 1;
    var_72 = var_8;
    var_80 = 32;
    pri = fun_4750(var_72, var_64, var_56, var_48)
    var_88 = 0;
    pri = fun_1650()
    var_96 = 0;
    var_104 = 1;
    var_112 = 3168;
    pri = PokeMemoryCheckParty(var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_4F78
fun_4F78() {
    var_8 = 3;
    var_16 = 0;
    var_24 = 100;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = 0;
    var_64 = 56;
    pri = fun_44B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
