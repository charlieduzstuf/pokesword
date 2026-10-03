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
            pri = fun_12B8()
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
    OP_JUMP lab_12D0
// lab_12D0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1310
    pri = 0;
    return pri;
// lab_1310
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_12D0
    pri = 0;
    return pri;
}
// fun_1350
fun_1350() {
    var_8 = 0;
    pri = fun_12B8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1400
    var_32 = 160;
    pri = SoundPostEvent(var_32)
// lab_1400
    pri = 0;
    return pri;
}
// fun_1410
fun_1410() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1440
fun_1440() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1470
// lab_1470
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_14B0
    OP_JUMP lab_14E0
// lab_14B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1470
// lab_14E0
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1528
fun_1528() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = 0;
    var_40 = arg_0;
    pri = ListMenuStart_Seq(var_40, var_32, var_24, var_16, var_8)
    var_48 = 12;
    pri = TempWorkGet(var_48)
    return pri;
}
// fun_1598
fun_1598() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1610()
    return pri;
}
// fun_1610
fun_1610() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1650
fun_1650() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16A0
fun_16A0() {
    pri = arg_4;
    OP_JNZ lab_16D8
    var_8 = 0;
    pri = fun_07F0()
// lab_16D8
    pri = arg_1;
    switch (pri) {
// switch_2AB0
        case default:
        {
// switch_2AB0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_08B0(var_264)
            OP_JZER lab_3078
            pri = arg_3;
            switch (pri) {
// switch_3020
                case default:
                {
// switch_3020_case_default
                    OP_JUMP lab_3330
// lab_3330
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_33A0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_33A0
                    var_8 = 0;
                    pri = fun_0830()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3020_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3020_case_default
                }
                case 0x2:
                {
// switch_3020_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3020_case_default
                }
                case 0x3:
                {
// switch_3020_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3020_case_default
                }
            }
// lab_3078
            pri = arg_1;
            OP_JZER lab_30C8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_30C8
            pri = 0;
            OP_JUMP lab_30D0
// lab_30C8
            pri = 1;
// lab_30D0
            OP_JZER lab_3138
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0580(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3138
            pri = 1;
            OP_JUMP lab_3140
// lab_3138
            pri = 0;
// lab_3140
            OP_JZER lab_3190
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3330
// lab_3190
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_31F8
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3330
// lab_31F8
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
// switch_2AB0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x1:
        {
// switch_2AB0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x2:
        {
// switch_2AB0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x3:
        {
// switch_2AB0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x4:
        {
// switch_2AB0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x5:
        {
// switch_2AB0_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0540(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07B8(var_40)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x6:
        {
// switch_2AB0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x7:
        {
// switch_2AB0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x8:
        {
// switch_2AB0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x9:
        {
// switch_2AB0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0xa:
        {
// switch_2AB0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0xb:
        {
// switch_2AB0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0xc:
        {
// switch_2AB0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0xd:
        {
// switch_2AB0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0xe:
        {
// switch_2AB0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0xf:
        {
// switch_2AB0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x10:
        {
// switch_2AB0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x11:
        {
// switch_2AB0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x12:
        {
// switch_2AB0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x13:
        {
// switch_2AB0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x14:
        {
// switch_2AB0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x15:
        {
// switch_2AB0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x16:
        {
// switch_2AB0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x17:
        {
// switch_2AB0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x18:
        {
// switch_2AB0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x19:
        {
// switch_2AB0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x1a:
        {
// switch_2AB0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x1b:
        {
// switch_2AB0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x1c:
        {
// switch_2AB0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x1d:
        {
// switch_2AB0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x1e:
        {
// switch_2AB0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x1f:
        {
// switch_2AB0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x20:
        {
// switch_2AB0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x21:
        {
// switch_2AB0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x22:
        {
// switch_2AB0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x23:
        {
// switch_2AB0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x24:
        {
// switch_2AB0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x25:
        {
// switch_2AB0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x26:
        {
// switch_2AB0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x27:
        {
// switch_2AB0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x28:
        {
// switch_2AB0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x29:
        {
// switch_2AB0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x2a:
        {
// switch_2AB0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x2b:
        {
// switch_2AB0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x2c:
        {
// switch_2AB0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x2d:
        {
// switch_2AB0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x2e:
        {
// switch_2AB0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x2f:
        {
// switch_2AB0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x30:
        {
// switch_2AB0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x31:
        {
// switch_2AB0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x32:
        {
// switch_2AB0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x33:
        {
// switch_2AB0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x34:
        {
// switch_2AB0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x35:
        {
// switch_2AB0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x36:
        {
// switch_2AB0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x37:
        {
// switch_2AB0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x38:
        {
// switch_2AB0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x39:
        {
// switch_2AB0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x3a:
        {
// switch_2AB0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x3b:
        {
// switch_2AB0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x3c:
        {
// switch_2AB0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x3d:
        {
// switch_2AB0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
        case 0x3e:
        {
// switch_2AB0_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0540(var_24, var_16, var_8)
            OP_JUMP switch_2AB0_case_default
        }
    }
}
// fun_33D0
fun_33D0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_34D0
        case default:
        {
// switch_34D0_case_default
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
// switch_34D0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_34D0_case_default
        }
        case 0x1:
        {
// switch_34D0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_34D0_case_default
        }
        case 0x2:
        {
// switch_34D0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_34D0_case_default
        }
        case 0x3:
        {
// switch_34D0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_34D0_case_default
        }
    }
}
// fun_3590
fun_3590() {
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
    pri = fun_12B8()
    pri = 0;
    return pri;
}
// fun_3628
fun_3628() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_33D0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_3590(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_36D0
fun_36D0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_3720
// lab_3720
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3798
    OP_JUMP lab_37C8
// lab_3798
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_3720
// lab_37C8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_3850
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_16A0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0910(var_56)
// lab_3850
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_38B8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0870(var_24, var_16)
// lab_38B8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0870(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3978
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
// lab_3978
    pri = IsPlayerRideBicycle()
    OP_JZER lab_39B8
    pri = 0;
    return pri;
// lab_39B8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3B00
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
    OP_JSLESS lab_3AC8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3B00
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
// lab_3AC8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0870(var_16, var_8)
}
// fun_3B88
fun_3B88() {
    pri = g_mode;
    switch (pri) {
// switch_3C20
        case default:
        {
// switch_3C20_case_default
            pri = CommandNOP()
            OP_JUMP lab_3C58
// lab_3C58
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3C20_case_0x0
            var_8 = 0;
            pri = fun_3C68()
            OP_JUMP lab_3C58
        }
        case 0x34ef6555ec9e3bcf:
        {
// switch_3C20_case_0x34ef6555ec9e3bcf
            var_8 = 0;
            pri = fun_3C80()
            OP_JUMP lab_3C58
        }
    }
}
// fun_3C68
fun_3C68() {
    pri = 0;
    return pri;
}
// fun_3C80
fun_3C80() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    OP_ZERO_P_S -16
}
// lab_3CC0
pri = var_16;
alt = 6;
OP_JEQ lab_3F18
pri = var_16;
switch (pri) {
// switch_3E90
    case default:
    {
// switch_3E90_case_default
        var_8 = 0;
        pri = DebugAssert(var_8)
        OP_CONST_S -16, 6
        OP_JUMP lab_3F08
// lab_3F08
        OP_JUMP lab_3CC0
    }
    case 0x0:
    {
// switch_3E90_case_0x0
        var_8 = var_8;
        var_16 = 8;
        pri = fun_4100(var_8)
        var_16 = pri;
        OP_JUMP lab_3F08
    }
    case 0x1:
    {
// switch_3E90_case_0x1
        var_8 = var_8;
        var_16 = 8;
        pri = fun_4228(var_8)
        var_16 = pri;
        OP_JUMP lab_3F08
    }
    case 0x2:
    {
// switch_3E90_case_0x2
        var_8 = var_8;
        var_16 = 8;
        pri = fun_47E0(var_8)
        var_16 = pri;
        OP_JUMP lab_3F08
    }
    case 0x3:
    {
// switch_3E90_case_0x3
        var_8 = var_8;
        var_16 = 8;
        pri = fun_4530(var_8)
        var_16 = pri;
        OP_JUMP lab_3F08
    }
    case 0x4:
    {
// switch_3E90_case_0x4
        var_8 = var_8;
        var_16 = 8;
        pri = fun_48B8(var_8)
        var_16 = pri;
        OP_JUMP lab_3F08
    }
    case 0x5:
    {
// switch_3E90_case_0x5
        var_8 = var_8;
        var_16 = 8;
        pri = fun_4E18(var_8)
        var_16 = pri;
        OP_JUMP lab_3F08
    }
}
// lab_3F18
var_8 = 0;
pri = fun_1410()
var_16 = 0;
var_24 = 0;
var_32 = 0;
var_40 = var_8;
var_48 = 32;
pri = fun_36D0(var_40, var_32, var_24, var_16)
pri = 0;
return pri;
// fun_3F80
fun_3F80() {
    pri = arg_0;
    switch (pri) {
// switch_4068
        case default:
        {
// switch_4068_case_default
            var_8 = 0;
            pri = DebugAssert(var_8)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4068_case_0x0
            pri = 3804720367279122318;
            return pri;
            OP_JUMP switch_4068_case_default
        }
        case 0x1:
        {
// switch_4068_case_0x1
            pri = 3804721466790750529;
            return pri;
            OP_JUMP switch_4068_case_default
        }
        case 0x2:
        {
// switch_4068_case_0x2
            pri = 3804718168255865896;
            return pri;
            OP_JUMP switch_4068_case_default
        }
        case 0x3:
        {
// switch_4068_case_0x3
            pri = 3804719267767494107;
            return pri;
            OP_JUMP switch_4068_case_default
        }
        case 0x4:
        {
// switch_4068_case_0x4
            pri = 3804724765325635162;
            return pri;
            OP_JUMP switch_4068_case_default
        }
    }
}
// fun_4100
fun_4100() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4327561215279473361;
    var_88 = arg_0;
    var_96 = 88;
    pri = fun_3628(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_112 = 0;
    var_120 = 0;
    var_128 = 1;
    OP_PUSH2_C 4101587385431433363, 4101586285919805152
    var_136 = 1;
    var_144 = 48;
    pri = fun_1598(var_136, var_128, var_120, var_112, var_104, var_96)
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_4210
    pri = 5;
    return pri;
// lab_4210
    pri = 1;
    return pri;
}
// fun_4228
fun_4228() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -4327559016256216939;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_11B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1350(var_72)
    var_88 = 0;
    var_96 = 0;
    var_104 = 8;
    pri = fun_3F80(var_96)
    var_112 = pri;
    var_120 = 0;
    var_128 = 24;
    pri = fun_1440(var_120, var_112, var_104)
    var_136 = 0;
    var_144 = 1;
    var_152 = 8;
    pri = fun_3F80(var_144)
    var_160 = pri;
    var_168 = 1;
    var_176 = 24;
    pri = fun_1440(var_168, var_160, var_152)
    var_184 = 0;
    var_192 = 2;
    var_200 = 8;
    pri = fun_3F80(var_192)
    var_208 = pri;
    var_216 = 2;
    var_224 = 24;
    pri = fun_1440(var_216, var_208, var_200)
    var_232 = 0;
    var_240 = 3;
    var_248 = 8;
    pri = fun_3F80(var_240)
    var_256 = pri;
    var_264 = 3;
    var_272 = 24;
    pri = fun_1440(var_264, var_256, var_248)
    var_280 = 0;
    var_288 = 4;
    var_296 = 8;
    pri = fun_3F80(var_288)
    var_304 = pri;
    var_312 = 4;
    var_320 = 24;
    pri = fun_1440(var_312, var_304, var_296)
    var_328 = 0;
    var_336 = 3804725864837263373;
    var_344 = 5;
    var_352 = 24;
    pri = fun_1440(var_344, var_336, var_328)
    var_368 = 0;
    var_376 = 1;
    var_384 = 0;
    var_392 = 1;
    var_400 = 32;
    pri = fun_1528(var_392, var_384, var_376, var_368)
    var_8 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_44F0
    pri = 5;
    return pri;
// lab_44F0
    var_8 = var_8;
    OP_PUSH_P 2008
    pri = TempWorkSet(var_8, var_0)
    pri = 3;
    return pri;
}
// fun_4530
fun_4530() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -4327565613325986205;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_11B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1350(var_72)
    var_88 = 0;
    var_96 = 4101588484943061574;
    var_104 = 0;
    var_112 = 24;
    pri = fun_1440(var_104, var_96, var_88)
    var_120 = 0;
    var_128 = 4101589584454689785;
    var_136 = 1;
    var_144 = 24;
    pri = fun_1440(var_136, var_128, var_120)
    var_152 = 0;
    var_160 = 4101590683966317996;
    var_168 = 2;
    var_176 = 24;
    pri = fun_1440(var_168, var_160, var_152)
    var_192 = 0;
    var_200 = 1;
    var_208 = 0;
    var_216 = 1;
    var_224 = 32;
    pri = fun_1528(var_216, var_208, var_200, var_192)
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_46D0
    pri = 4;
    return pri;
// lab_46D0
    pri = var_8;
    switch (pri) {
// switch_4760
        case default:
        {
// switch_4760_case_default
            var_8 = 0;
            pri = DebugAssert(var_8)
            pri = 5;
            return pri;
        }
        case 0x0:
        {
// switch_4760_case_0x0
            pri = 4;
            return pri;
            OP_JUMP switch_4760_case_default
        }
        case 0x1:
        {
// switch_4760_case_0x1
            pri = 2;
            return pri;
            OP_JUMP switch_4760_case_default
        }
        case 0x2:
        {
// switch_4760_case_0x2
            pri = 1;
            return pri;
            OP_JUMP switch_4760_case_default
        }
    }
}
// fun_47E0
fun_47E0() {
    OP_PUSH_P 2008
    pri = TempWorkGet(var_8)
    var_8 = pri;
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    alt = 2016;
    pri = var_8;
    OP_LIDX_P_B 3
    var_56 = pri;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_11B8(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_1350(var_80)
    pri = 3;
    return pri;
}
// fun_48B8
fun_48B8() {
    pri = IsExsitEmptyRentalTeam()
    OP_JNZ lab_4970
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -4327560115767845150;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_11B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1350(var_72)
    pri = 6;
    return pri;
// lab_4970
    OP_PUSH_P 2008
    pri = TempWorkGet(var_8)
    var_8 = pri;
    alt = 2056;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 48
    OP_LOAD_I 
    var_16 = pri;
    alt = 2056;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 40
    OP_LOAD_I 
    var_24 = pri;
    alt = 2056;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 32
    OP_LOAD_I 
    var_32 = pri;
    alt = 2056;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 24
    OP_LOAD_I 
    var_40 = pri;
    alt = 2056;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_48 = pri;
    alt = 2056;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_56 = pri;
    OP_PUSH_P 2376
    alt = 2056;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_64 = pri;
    pri = RegisterRentalTeam(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_PUSH_P 2376
    pri = TempWorkGet(var_64)
    OP_JNZ lab_4C70
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = -4327563414302729783;
    var_120 = arg_0;
    var_128 = 56;
    pri = fun_11B8(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1350(var_136)
    pri = 1;
    return pri;
// lab_4C70
    var_8 = 0;
    pri = fun_1410()
    var_16 = 0;
    var_24 = var_8;
    var_32 = 8;
    pri = fun_3F80(var_24)
    var_40 = pri;
    var_48 = 0;
    var_56 = 24;
    pri = fun_1650(var_48, var_40, var_32)
    var_64 = 3;
    var_72 = 0;
    var_80 = -2563029596703173081;
    var_88 = 24;
    pri = fun_1268(var_80, var_72, var_64)
    var_96 = 2384;
    pri = SoundPostEvent(var_96)
    var_104 = 0;
    var_112 = 8;
    pri = fun_0280(var_104)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1350(var_120)
    var_136 = 0;
    pri = fun_1410()
    var_144 = 0;
    var_152 = 3;
    var_160 = 0;
    var_168 = 100;
    var_176 = -1;
    var_184 = -4327566712837614416;
    var_192 = arg_0;
    var_200 = 56;
    pri = fun_11B8(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1350(var_208)
    pri = 6;
    return pri;
}
// fun_4E18
fun_4E18() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -4327562314791101572;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_11B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1350(var_72)
    pri = 6;
    return pri;
}
