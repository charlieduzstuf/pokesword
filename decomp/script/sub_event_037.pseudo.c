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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_02C8
// lab_02C8
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0308
    OP_JUMP lab_0378
// lab_0308
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0348
    OP_JUMP lab_0378
// lab_0348
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_02C8
// lab_0378
    pri = 0;
    return pri;
}
// fun_0390
fun_0390() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_03E0
fun_03E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_08B0(var_8)
    OP_JZER lab_0458
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_08E0(var_24)
    OP_JNZ lab_0458
    pri = 0;
    return pri;
// lab_0458
    OP_JUMP lab_0468
// lab_0468
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_04C8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_04C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0468
    pri = 0;
    return pri;
}
// fun_0508
fun_0508() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0540
fun_0540() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0580
fun_0580() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_05B8
fun_05B8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0600
    pri = 0;
    return pri;
// lab_0600
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0640
// lab_0640
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_08B0(var_8)
    OP_JNZ lab_06C8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_06B8
    pri = 0;
    return pri;
// lab_06C8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0710
    pri = 0;
    return pri;
// lab_0710
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0770
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_07B8(var_8)
    pri = 0;
    return pri;
// lab_0770
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0640
    pri = 0;
    return pri;
// lab_06B8
    OP_JUMP lab_0710
}
// fun_07B8
fun_07B8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_07F0
fun_07F0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0830
fun_0830() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0870
fun_0870() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_08B0
fun_08B0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_08E0
fun_08E0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0910
fun_0910() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0940
fun_0940() {
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
// switch_0F58
        case default:
        {
// switch_0F58_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_0FA0
// lab_0FA0
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
            OP_JNZ lab_1048
            var_88 = 0;
            pri = fun_1318()
// lab_1048
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_0F58_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0B40
                case default:
                {
// switch_0B40_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0BB8
// lab_0BB8
                    OP_JUMP lab_0FA0
                }
                case 0x0:
                {
// switch_0B40_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0BB8
                }
                case 0x1:
                {
// switch_0B40_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0BB8
                }
                case 0x2:
                {
// switch_0B40_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0BB8
                }
                case 0x3:
                {
// switch_0B40_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0BB8
                }
                case 0x4:
                {
// switch_0B40_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0BB8
                }
                case 0x5:
                {
// switch_0B40_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0BB8
                }
            }
        }
        case 0x65:
        {
// switch_0F58_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0CF8
                case default:
                {
// switch_0CF8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0D70
// lab_0D70
                    OP_JUMP lab_0FA0
                }
                case 0x0:
                {
// switch_0CF8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0D70
                }
                case 0x1:
                {
// switch_0CF8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0D70
                }
                case 0x2:
                {
// switch_0CF8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0D70
                }
                case 0x3:
                {
// switch_0CF8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0D70
                }
                case 0x4:
                {
// switch_0CF8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0D70
                }
                case 0x5:
                {
// switch_0CF8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0D70
                }
            }
        }
        case 0x66:
        {
// switch_0F58_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_0EB0
                case default:
                {
// switch_0EB0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0F28
// lab_0F28
                    OP_JUMP lab_0FA0
                }
                case 0x0:
                {
// switch_0EB0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0F28
                }
                case 0x1:
                {
// switch_0EB0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0F28
                }
                case 0x2:
                {
// switch_0EB0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0F28
                }
                case 0x3:
                {
// switch_0EB0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0F28
                }
                case 0x4:
                {
// switch_0EB0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0F28
                }
                case 0x5:
                {
// switch_0EB0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0F28
                }
            }
        }
    }
}
// fun_1060
fun_1060() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0940(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10C8
fun_10C8() {
    pri = 32;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 112;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0580(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1170
    pri = 1;
    return pri;
// lab_1170
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_11B8
fun_11B8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1208
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_10C8(var_8)
    arg_2 = pri;
// lab_1208
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0940(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1268
fun_1268() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1060(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12B8
fun_12B8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1268(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1318
fun_1318() {
    OP_JUMP lab_1330
// lab_1330
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1370
    pri = 0;
    return pri;
// lab_1370
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1330
    pri = 0;
    return pri;
}
// fun_13B0
fun_13B0() {
    var_8 = 0;
    pri = fun_1318()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1460
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1460
    pri = 0;
    return pri;
}
// fun_1470
fun_1470() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_14A0
fun_14A0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_14D8
fun_14D8() {
    OP_JUMP lab_14F0
// lab_14F0
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1538
    OP_JUMP lab_1568
    OP_JUMP lab_1558
// lab_1538
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1568
    pri = 0;
    return pri;
// lab_1558
    OP_JUMP lab_14F0
}
// fun_1578
fun_1578() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_15A8
fun_15A8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15F8
fun_15F8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1648
fun_1648() {
    var_8 = 0;
    var_16 = 0;
    pri = PokePartyGetCount(var_16, var_8)
    OP_EQ_P_C_PRI 6
    OP_JZER lab_16D0
    pri = PokeBoxIsFull()
    OP_JZER lab_16D0
    pri = 1;
    OP_JUMP lab_16D8
// lab_16D0
    pri = 0;
// lab_16D8
    return pri;
}
// fun_16E0
fun_16E0() {
    pri = arg_4;
    OP_JNZ lab_1718
    var_8 = 0;
    pri = fun_07F0()
// lab_1718
    pri = arg_1;
    switch (pri) {
// switch_2AF0
        case default:
        {
// switch_2AF0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_08B0(var_264)
            OP_JZER lab_30B8
            pri = arg_3;
            switch (pri) {
// switch_3060
                case default:
                {
// switch_3060_case_default
                    OP_JUMP lab_3370
// lab_3370
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_33E0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_33E0
                    var_8 = 0;
                    pri = fun_0830()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3060_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3060_case_default
                }
                case 0x2:
                {
// switch_3060_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3060_case_default
                }
                case 0x3:
                {
// switch_3060_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3060_case_default
                }
            }
// lab_30B8
            pri = arg_1;
            OP_JZER lab_3108
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3108
            pri = 0;
            OP_JUMP lab_3110
// lab_3108
            pri = 1;
// lab_3110
            OP_JZER lab_3178
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0580(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3178
            pri = 1;
            OP_JUMP lab_3180
// lab_3178
            pri = 0;
// lab_3180
            OP_JZER lab_31D0
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3370
// lab_31D0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_3238
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3370
// lab_3238
            var_16 = 1584;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0580(var_24, var_16)
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
// switch_2AF0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x1:
        {
// switch_2AF0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x2:
        {
// switch_2AF0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x3:
        {
// switch_2AF0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x4:
        {
// switch_2AF0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x5:
        {
// switch_2AF0_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0540(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07B8(var_40)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x6:
        {
// switch_2AF0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x7:
        {
// switch_2AF0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x8:
        {
// switch_2AF0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x9:
        {
// switch_2AF0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0xa:
        {
// switch_2AF0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0xb:
        {
// switch_2AF0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0xc:
        {
// switch_2AF0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0xd:
        {
// switch_2AF0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0xe:
        {
// switch_2AF0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0xf:
        {
// switch_2AF0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x10:
        {
// switch_2AF0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x11:
        {
// switch_2AF0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x12:
        {
// switch_2AF0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x13:
        {
// switch_2AF0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x14:
        {
// switch_2AF0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x15:
        {
// switch_2AF0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x16:
        {
// switch_2AF0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x17:
        {
// switch_2AF0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x18:
        {
// switch_2AF0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x19:
        {
// switch_2AF0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x1a:
        {
// switch_2AF0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x1b:
        {
// switch_2AF0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x1c:
        {
// switch_2AF0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x1d:
        {
// switch_2AF0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x1e:
        {
// switch_2AF0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x1f:
        {
// switch_2AF0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x20:
        {
// switch_2AF0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x21:
        {
// switch_2AF0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x22:
        {
// switch_2AF0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x23:
        {
// switch_2AF0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x24:
        {
// switch_2AF0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x25:
        {
// switch_2AF0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x26:
        {
// switch_2AF0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x27:
        {
// switch_2AF0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x28:
        {
// switch_2AF0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x29:
        {
// switch_2AF0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x2a:
        {
// switch_2AF0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x2b:
        {
// switch_2AF0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x2c:
        {
// switch_2AF0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x2d:
        {
// switch_2AF0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x2e:
        {
// switch_2AF0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x2f:
        {
// switch_2AF0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x30:
        {
// switch_2AF0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x31:
        {
// switch_2AF0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x32:
        {
// switch_2AF0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x33:
        {
// switch_2AF0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x34:
        {
// switch_2AF0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x35:
        {
// switch_2AF0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x36:
        {
// switch_2AF0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x37:
        {
// switch_2AF0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x38:
        {
// switch_2AF0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x39:
        {
// switch_2AF0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x3a:
        {
// switch_2AF0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x3b:
        {
// switch_2AF0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x3c:
        {
// switch_2AF0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x3d:
        {
// switch_2AF0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
        case 0x3e:
        {
// switch_2AF0_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0540(var_24, var_16, var_8)
            OP_JUMP switch_2AF0_case_default
        }
    }
}
// fun_3410
fun_3410() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_3510
        case default:
        {
// switch_3510_case_default
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
// switch_3510_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_3510_case_default
        }
        case 0x1:
        {
// switch_3510_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_3510_case_default
        }
        case 0x2:
        {
// switch_3510_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_3510_case_default
        }
        case 0x3:
        {
// switch_3510_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_3510_case_default
        }
    }
}
// fun_35D0
fun_35D0() {
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
    pri = fun_11B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1318()
    pri = 0;
    return pri;
}
// fun_3668
fun_3668() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_3410(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_35D0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_3710
fun_3710() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_3760
// lab_3760
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_37D8
    OP_JUMP lab_3808
// lab_37D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_3760
// lab_3808
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3890
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_16E0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0910(var_56)
// lab_3890
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_38F8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0870(var_24, var_16)
// lab_38F8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0870(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_39B8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_05B8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0390(var_88, var_80, var_72, var_64, var_56)
// lab_39B8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_39F8
    pri = 0;
    return pri;
// lab_39F8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3B40
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1872;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0508(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_3B08
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3B40
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_03E0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_03E0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_05B8(var_40)
    pri = 0;
    return pri;
// lab_3B08
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0870(var_16, var_8)
}
// fun_3BC8
fun_3BC8() {
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
    pri = fun_3668(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_13B0(var_112)
    var_128 = 0;
    pri = fun_1470()
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
    pri = fun_3710(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_3D40
fun_3D40() {
    var_8 = 2008;
    var_16 = 8;
    pri = fun_14A0(var_8)
    var_24 = 0;
    pri = fun_14D8()
    var_32 = 2184;
    pri = SoundPostEvent(var_32)
    var_40 = 0;
    var_48 = 8;
    pri = fun_15A8(var_40)
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 16;
    pri = fun_15F8(var_64, var_56)
    var_80 = 3;
    var_88 = 0;
    var_96 = -1785521252434788896;
    var_104 = 24;
    pri = fun_12B8(var_96, var_88, var_80)
    var_112 = 0;
    var_120 = 8;
    pri = fun_0280(var_112)
    var_128 = 1;
    var_136 = 8;
    pri = fun_13B0(var_128)
    var_144 = 0;
    pri = fun_1470()
    var_152 = arg_0;
    pri = PokePartyAddMember(var_152)
    var_160 = 0;
    pri = fun_1578()
    pri = 0;
    return pri;
}
// fun_3EC0
fun_3EC0() {
    var_8 = 0;
    pri = fun_1648()
    OP_JZER lab_3FC0
    var_16 = 2368;
    var_24 = 8;
    pri = fun_14A0(var_16)
    var_32 = 0;
    pri = fun_14D8()
    var_40 = 3;
    var_48 = 0;
    var_56 = -7763515063518001126;
    var_64 = 24;
    pri = fun_12B8(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_13B0(var_72)
    var_88 = 0;
    pri = fun_1470()
    var_96 = 0;
    pri = fun_1578()
    pri = 1;
    return pri;
// lab_3FC0
    pri = 0;
    return pri;
}
// fun_3FD0
fun_3FD0() {
    pri = g_mode;
    switch (pri) {
// switch_40B8
        case default:
        {
// switch_40B8_case_default
            pri = CommandNOP()
            OP_JUMP lab_4110
// lab_4110
            pri = 0;
            return pri;
        }
        case 0xf32858b3b931921d:
        {
// switch_40B8_case_0xf32858b3b931921d
            var_8 = 0;
            pri = fun_46B0()
            OP_JUMP lab_4110
        }
        case 0x0:
        {
// switch_40B8_case_0x0
            var_8 = 0;
            pri = fun_4120()
            OP_JUMP lab_4110
        }
        case 0x4600c614a9e95dd2:
        {
// switch_40B8_case_0x4600c614a9e95dd2
            var_8 = 0;
            pri = fun_4138()
            OP_JUMP lab_4110
        }
        case 0x6eb180bc05e72d18:
        {
// switch_40B8_case_0x6eb180bc05e72d18
            var_8 = 0;
            pri = fun_41C0()
            OP_JUMP lab_4110
        }
    }
}
// fun_4120
fun_4120() {
    pri = 0;
    return pri;
}
// fun_4138
fun_4138() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4016105239152299614;
    var_88 = 80;
    pri = fun_3BC8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_41C0
fun_41C0() {
    var_8 = -3132567711162157569;
    pri = FlagGet(var_8)
    OP_JZER lab_4280
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 222285564419174989;
    var_96 = 80;
    pri = fun_3BC8(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
// lab_4280
    var_16 = 0;
    pri = fun_3EC0()
    var_8 = pri;
    pri = var_8;
    OP_JZER lab_42D8
    pri = 0;
    return pri;
// lab_42D8
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 100;
    var_56 = -1;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 222277867837777512;
    var_96 = var_16;
    var_104 = 88;
    pri = fun_3668(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_13B0(var_112)
    var_128 = -7498817487333170001;
    pri = FlagGet(var_128)
    OP_JZER lab_45D0
    var_136 = 0;
    var_144 = 3;
    var_152 = 0;
    var_160 = 100;
    var_168 = -1;
    var_176 = 222283365395918567;
    var_184 = var_16;
    var_192 = 56;
    pri = fun_11B8(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 1;
    var_208 = 8;
    pri = fun_13B0(var_200)
    var_216 = 0;
    var_224 = 3;
    var_232 = 0;
    var_240 = 100;
    var_248 = -1;
    var_256 = 222282265884290356;
    var_264 = var_16;
    var_272 = 56;
    pri = fun_11B8(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 1;
    var_288 = 8;
    pri = fun_13B0(var_280)
    var_296 = 0;
    pri = fun_1470()
    var_304 = 133;
    var_312 = -4330741429206570192;
    var_320 = 16;
    pri = fun_3D40(var_312, var_304)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = 222285564419174989;
    var_376 = var_16;
    var_384 = 56;
    pri = fun_11B8(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 1;
    var_400 = 8;
    pri = fun_13B0(var_392)
    var_408 = 0;
    pri = fun_1470()
    var_416 = -3132567711162157569;
    pri = FlagSet(var_416)
    OP_JUMP lab_4660
// lab_45D0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 222280066861033934;
    var_56 = var_16;
    var_64 = 56;
    pri = fun_11B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_13B0(var_72)
    var_88 = 0;
    pri = fun_1470()
// lab_4660
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_16;
    var_40 = 32;
    pri = fun_3710(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_46B0
fun_46B0() {
    var_8 = 1944644869378402762;
    pri = FlagGet(var_8)
    OP_JZER lab_4770
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = -3637442583722997458;
    var_96 = 80;
    pri = fun_3BC8(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
// lab_4770
    var_16 = 0;
    pri = fun_3EC0()
    var_8 = pri;
    pri = var_8;
    OP_JZER lab_47C8
    pri = 0;
    return pri;
// lab_47C8
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 100;
    var_56 = -1;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = -3637439285188112825;
    var_96 = var_16;
    var_104 = 88;
    pri = fun_3668(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_13B0(var_112)
    var_128 = 4999776884359448078;
    pri = FlagGet(var_128)
    OP_JZER lab_4AC0
    var_136 = 0;
    var_144 = 3;
    var_152 = 0;
    var_160 = 100;
    var_168 = -1;
    var_176 = -3637444782746253880;
    var_184 = var_16;
    var_192 = 56;
    pri = fun_11B8(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = 1;
    var_208 = 8;
    pri = fun_13B0(var_200)
    var_216 = 0;
    var_224 = 3;
    var_232 = 0;
    var_240 = 100;
    var_248 = -1;
    var_256 = -3637443683234625669;
    var_264 = var_16;
    var_272 = 56;
    pri = fun_11B8(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 1;
    var_288 = 8;
    pri = fun_13B0(var_280)
    var_296 = 0;
    pri = fun_1470()
    var_304 = 25;
    var_312 = 7018364733331266896;
    var_320 = 16;
    pri = fun_3D40(var_312, var_304)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = -3637442583722997458;
    var_376 = var_16;
    var_384 = 56;
    pri = fun_11B8(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 1;
    var_400 = 8;
    pri = fun_13B0(var_392)
    var_408 = 0;
    pri = fun_1470()
    var_416 = 1944644869378402762;
    pri = FlagSet(var_416)
    OP_JUMP lab_4B50
// lab_4AC0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -3637437086164856403;
    var_56 = var_16;
    var_64 = 56;
    pri = fun_11B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_13B0(var_72)
    var_88 = 0;
    pri = fun_1470()
// lab_4B50
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_16;
    var_40 = 32;
    pri = fun_3710(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
