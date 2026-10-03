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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_14B8()
    return pri;
}
// fun_14B8
fun_14B8() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_14F8
fun_14F8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 17;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1548
fun_1548() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 18;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1598
fun_1598() {
    pri = arg_2;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_15F8
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_14F8(var_16, var_8)
    OP_JUMP lab_1628
// lab_15F8
    var_8 = arg_1;
    var_16 = arg_3;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1548(var_24, var_16, var_8)
// lab_1628
    pri = 0;
    return pri;
}
// fun_1638
fun_1638() {
    pri = arg_3;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1698
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = PokePartyGetParam(var_24, var_16, var_8)
    return pri;
// lab_1698
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = arg_4;
    pri = PokeBoxGetParam(var_32, var_24, var_16, var_8)
    return pri;
}
// fun_16D8
fun_16D8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1738
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = PokePartySetParam(var_24, var_16, var_8)
    return pri;
// lab_1738
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = arg_4;
    pri = PokeBoxSetParam(var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1778
fun_1778() {
    pri = arg_4;
    OP_JNZ lab_17B0
    var_8 = 0;
    pri = fun_07F0()
// lab_17B0
    pri = arg_1;
    switch (pri) {
// switch_2B88
        case default:
        {
// switch_2B88_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 856;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_08B0(var_264)
            OP_JZER lab_3150
            pri = arg_3;
            switch (pri) {
// switch_30F8
                case default:
                {
// switch_30F8_case_default
                    OP_JUMP lab_3408
// lab_3408
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_3478
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_3478
                    var_8 = 0;
                    pri = fun_0830()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_30F8_case_0x1
                    var_8 = 32;
                    var_16 = 1008;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_30F8_case_default
                }
                case 0x2:
                {
// switch_30F8_case_0x2
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_30F8_case_default
                }
                case 0x3:
                {
// switch_30F8_case_0x3
                    var_8 = 32;
                    var_16 = 912;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_30F8_case_default
                }
            }
// lab_3150
            pri = arg_1;
            OP_JZER lab_31A0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_31A0
            pri = 0;
            OP_JUMP lab_31A8
// lab_31A0
            pri = 1;
// lab_31A8
            OP_JZER lab_3210
            var_8 = 1208;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0580(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3210
            pri = 1;
            OP_JUMP lab_3218
// lab_3210
            pri = 0;
// lab_3218
            OP_JZER lab_3268
            var_8 = 32;
            var_16 = 1304;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3408
// lab_3268
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_32D0
            var_8 = 32;
            var_16 = 1464;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3408
// lab_32D0
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
// switch_2B88_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x1:
        {
// switch_2B88_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x2:
        {
// switch_2B88_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x3:
        {
// switch_2B88_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x4:
        {
// switch_2B88_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x5:
        {
// switch_2B88_case_0x5
            var_8 = 1;
            var_16 = 336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0540(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_07B8(var_40)
            OP_JUMP switch_2B88_case_default
        }
        case 0x6:
        {
// switch_2B88_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x7:
        {
// switch_2B88_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x8:
        {
// switch_2B88_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x9:
        {
// switch_2B88_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0xa:
        {
// switch_2B88_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0xb:
        {
// switch_2B88_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0xc:
        {
// switch_2B88_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0xd:
        {
// switch_2B88_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0xe:
        {
// switch_2B88_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0xf:
        {
// switch_2B88_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x10:
        {
// switch_2B88_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x11:
        {
// switch_2B88_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x12:
        {
// switch_2B88_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x13:
        {
// switch_2B88_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x14:
        {
// switch_2B88_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x15:
        {
// switch_2B88_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x16:
        {
// switch_2B88_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x17:
        {
// switch_2B88_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x18:
        {
// switch_2B88_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x19:
        {
// switch_2B88_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x1a:
        {
// switch_2B88_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x1b:
        {
// switch_2B88_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x1c:
        {
// switch_2B88_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x1d:
        {
// switch_2B88_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x1e:
        {
// switch_2B88_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x1f:
        {
// switch_2B88_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x20:
        {
// switch_2B88_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x21:
        {
// switch_2B88_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x22:
        {
// switch_2B88_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x23:
        {
// switch_2B88_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x24:
        {
// switch_2B88_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x25:
        {
// switch_2B88_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x26:
        {
// switch_2B88_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x27:
        {
// switch_2B88_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x28:
        {
// switch_2B88_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x29:
        {
// switch_2B88_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x2a:
        {
// switch_2B88_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x2b:
        {
// switch_2B88_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x2c:
        {
// switch_2B88_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x2d:
        {
// switch_2B88_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x2e:
        {
// switch_2B88_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x2f:
        {
// switch_2B88_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x30:
        {
// switch_2B88_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x31:
        {
// switch_2B88_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x32:
        {
// switch_2B88_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x33:
        {
// switch_2B88_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x34:
        {
// switch_2B88_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x35:
        {
// switch_2B88_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x36:
        {
// switch_2B88_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x37:
        {
// switch_2B88_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x38:
        {
// switch_2B88_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x39:
        {
// switch_2B88_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x3a:
        {
// switch_2B88_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x3b:
        {
// switch_2B88_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x3c:
        {
// switch_2B88_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 432;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x3d:
        {
// switch_2B88_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 608;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
        case 0x3e:
        {
// switch_2B88_case_0x3e
            var_8 = 3;
            var_16 = 752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0540(var_24, var_16, var_8)
            OP_JUMP switch_2B88_case_default
        }
    }
}
// fun_34A8
fun_34A8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_35A8
        case default:
        {
// switch_35A8_case_default
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
// switch_35A8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_35A8_case_default
        }
        case 0x1:
        {
// switch_35A8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_35A8_case_default
        }
        case 0x2:
        {
// switch_35A8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_35A8_case_default
        }
        case 0x3:
        {
// switch_35A8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_35A8_case_default
        }
    }
}
// fun_3668
fun_3668() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_36B8
// lab_36B8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1752;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_3730
    OP_JUMP lab_3760
// lab_3730
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_36B8
// lab_3760
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_37E8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_1778(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0910(var_56)
// lab_37E8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_3850
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0870(var_24, var_16)
// lab_3850
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0870(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_3910
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
// lab_3910
    pri = IsPlayerRideBicycle()
    OP_JZER lab_3950
    pri = 0;
    return pri;
// lab_3950
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_3A98
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
    OP_JSLESS lab_3A60
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_3A98
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
// lab_3A60
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0870(var_16, var_8)
}
// fun_3B20
fun_3B20() {
    var_8 = 2008;
    pri = SoundPostEvent(var_8)
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 1;
    var_48 = 32;
    pri = fun_1598(var_40, var_32, var_24, var_16)
    var_56 = 3;
    var_64 = 0;
    var_72 = arg_1;
    var_80 = 24;
    pri = fun_1268(var_72, var_64, var_56)
    var_88 = 1;
    var_96 = 8;
    pri = fun_1350(var_88)
    var_104 = 0;
    pri = fun_1410()
    var_112 = arg_4;
    var_120 = arg_3;
    var_128 = arg_0;
    var_136 = 1007;
    var_144 = arg_2;
    var_152 = 40;
    pri = fun_16D8(var_144, var_136, var_128, var_120, var_112)
    var_160 = 0;
    var_168 = 8;
    pri = fun_0280(var_160)
    pri = 0;
    return pri;
}
// fun_3C58
fun_3C58() {
    pri = g_mode;
    switch (pri) {
// switch_3CF0
        case default:
        {
// switch_3CF0_case_default
            pri = CommandNOP()
            OP_JUMP lab_3D28
// lab_3D28
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3CF0_case_0x0
            var_8 = 0;
            pri = fun_3D38()
            OP_JUMP lab_3D28
        }
        case 0x195af38347af55eb:
        {
// switch_3CF0_case_0x195af38347af55eb
            var_8 = 0;
            pri = fun_3D50()
            OP_JUMP lab_3D28
        }
    }
}
// fun_3D38
fun_3D38() {
    pri = 0;
    return pri;
}
// fun_3D50
fun_3D50() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_34A8(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = 5936682802595390819;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_11B8(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1350(var_136)
    var_160 = 0;
    var_168 = 0;
    var_176 = 1;
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = 48;
    pri = fun_1440(var_200, var_192, var_184, var_176, var_168, var_160)
    var_16 = pri;
    OP_ZERO_P_S -24
    pri = var_16;
    OP_JZER lab_3EE8
    var_224 = var_8;
    var_232 = 8;
    pri = fun_4028(var_224)
    var_24 = pri;
// lab_3EE8
    pri = var_16;
    OP_JZER lab_3F30
    pri = var_24;
    OP_JNZ lab_3F30
    pri = 0;
    OP_JUMP lab_3F38
// lab_3F30
    pri = 1;
// lab_3F38
    OP_JZER lab_3FD8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 5936683902107019030;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_11B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1350(var_72)
    var_88 = 0;
    pri = fun_1410()
// lab_3FD8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_3668(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4028
fun_4028() {
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 5936685001618647241;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_11B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1350(var_72)
    var_88 = 0;
    pri = fun_1410()
    var_96 = 5;
    var_104 = 0;
    var_112 = 2;
    var_120 = 0;
    var_128 = 1;
    pri = CallSelectModeBox(var_128, var_120, var_112, var_104, var_96)
    var_144 = 0;
    pri = TempWorkGet(var_144)
    var_8 = pri;
    var_160 = 1;
    pri = TempWorkGet(var_160)
    var_16 = pri;
    var_176 = 2;
    pri = TempWorkGet(var_176)
    var_24 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_41C8
    pri = 1;
    return pri;
// lab_41C8
    var_8 = var_16;
    var_16 = var_8;
    var_24 = var_24;
    var_32 = 1;
    var_40 = 32;
    pri = fun_1598(var_32, var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 3;
    var_64 = 0;
    var_72 = 100;
    var_80 = -1;
    var_88 = 5936686101130275452;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_11B8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1350(var_112)
    var_136 = var_16;
    var_144 = var_8;
    var_152 = 0;
    var_160 = 49;
    var_168 = var_24;
    var_176 = 40;
    pri = fun_1638(var_168, var_160, var_152, var_144, var_136)
    var_32 = pri;
    OP_ZERO_P_S -40
    OP_ZERO_P_S -48
    pri = var_32;
    OP_EQ_P_C_PRI 255
    OP_JZER lab_43E0
    OP_CONST_S -40, 5937677860618732549
    var_208 = var_16;
    var_216 = var_8;
    var_224 = 3;
    var_232 = 13;
    var_240 = var_24;
    var_248 = 40;
    pri = fun_1638(var_240, var_232, var_224, var_216, var_208)
    var_56 = pri;
    pri = var_56;
    OP_JZER lab_43B0
    OP_CONST_S -40, 5937674562083847916
    OP_JUMP lab_43C8
// lab_43E0
    pri = var_32;
    alt = 220;
    OP_JSLESS lab_4428
    OP_CONST_S -40, 5937670164037335072
    OP_JUMP lab_45A8
// lab_4428
    pri = var_32;
    alt = 180;
    OP_JSLESS lab_4470
    OP_CONST_S -40, 5937671263548963283
    OP_JUMP lab_45A8
// lab_4470
    pri = var_32;
    alt = 130;
    OP_JSLESS lab_44B8
    OP_CONST_S -40, 5937672363060591494
    OP_JUMP lab_45A8
// lab_44B8
    pri = var_32;
    alt = 80;
    OP_JSLESS lab_4500
    OP_CONST_S -40, 5937673462572219705
    OP_JUMP lab_45A8
// lab_4500
    pri = var_32;
    alt = 30;
    OP_JSLESS lab_4548
    OP_CONST_S -40, 5936691598688416507
    OP_JUMP lab_45A8
// lab_4548
    pri = var_32;
    alt = 1;
    OP_JSLESS lab_4590
    OP_CONST_S -40, 5936690499176788296
    OP_JUMP lab_45A8
// lab_4590
    OP_CONST_S -40, 5936689399665160085
// lab_45A8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = var_40;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_11B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1350(var_72)
    pri = var_48;
    OP_JZER lab_4718
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    var_128 = 5937676761107104338;
    var_136 = arg_0;
    var_144 = 56;
    pri = fun_11B8(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1350(var_152)
    var_168 = 0;
    pri = fun_1410()
    var_176 = var_16;
    var_184 = var_8;
    var_192 = var_24;
    var_200 = 4811569985614933328;
    var_208 = 3;
    var_216 = 40;
    pri = fun_3B20(var_208, var_200, var_192, var_184, var_176)
    OP_JUMP lab_4730
// lab_4718
    var_8 = 0;
    pri = fun_1410()
// lab_4730
    pri = 0;
    return pri;
// lab_43B0
    OP_CONST_S -48, 1
// lab_43C8
    OP_JUMP lab_45A8
}
