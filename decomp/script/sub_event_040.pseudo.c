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
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_02E0
fun_02E0() {
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
// fun_0350
fun_0350() {
    OP_JUMP lab_0368
// lab_0368
    pri = FadeWait_()
    OP_JZER lab_03A0
    pri = 0;
    return pri;
// lab_03A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0368
    pri = 0;
    return pri;
}
// fun_03E0
fun_03E0() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0428
// lab_0428
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0468
    OP_JUMP lab_04D8
// lab_0468
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04A8
    OP_JUMP lab_04D8
// lab_04A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0428
// lab_04D8
    pri = 0;
    return pri;
}
// fun_04F0
fun_04F0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0520
fun_0520() {
    var_8 = arg_0;
    pri = IsFieldObjectExists_(var_8)
    return pri;
}
// fun_0550
fun_0550() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05A0
fun_05A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05F8
fun_05F8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D68(var_8)
    OP_JZER lab_0670
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D98(var_24)
    OP_JNZ lab_0670
    pri = 0;
    return pri;
// lab_0670
    OP_JUMP lab_0680
// lab_0680
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_06E0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_06E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0680
    pri = 0;
    return pri;
}
// fun_0720
fun_0720() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0758
fun_0758() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0798
fun_0798() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_07D0
fun_07D0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0818
    pri = 0;
    return pri;
// lab_0818
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0858
// lab_0858
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D68(var_8)
    OP_JNZ lab_08E0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_08D0
    pri = 0;
    return pri;
// lab_08E0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0928
    pri = 0;
    return pri;
// lab_0928
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0988
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_09D0(var_8)
    pri = 0;
    return pri;
// lab_0988
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0858
    pri = 0;
    return pri;
// lab_08D0
    OP_JUMP lab_0928
}
// fun_09D0
fun_09D0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0A08
fun_0A08() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A58
    pri = 0;
    return pri;
// lab_0A58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D68(var_8)
    OP_JZER lab_0B88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AB0
    OP_ZERO_P_S 64
// lab_0B88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BC0
    OP_CONST_S 64, 1
// lab_0BC0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BF8
    OP_CONST_S 72, 1
// lab_0BF8
    var_8 = 1;
    var_16 = 0;
    var_24 = 256;
    var_32 = -1;
    var_40 = -1;
    var_48 = 248;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 200;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 160;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_0AB0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AD8
    OP_ZERO_P_S 72
// lab_0AD8
    var_8 = 0;
    var_16 = 0;
    var_24 = 152;
    var_32 = -1;
    var_40 = -1;
    var_48 = 144;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 80;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 32;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_0C98
// lab_0C98
    pri = 0;
    return pri;
}
// fun_0CA8
fun_0CA8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CE8
fun_0CE8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D28
fun_0D28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D68
fun_0D68() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0D98
fun_0D98() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0DC8
fun_0DC8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0DF8
fun_0DF8() {
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
// switch_1410
        case default:
        {
// switch_1410_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1458
// lab_1458
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
            OP_JNZ lab_1500
            var_88 = 0;
            pri = fun_17D0()
// lab_1500
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1410_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0FF8
                case default:
                {
// switch_0FF8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1070
// lab_1070
                    OP_JUMP lab_1458
                }
                case 0x0:
                {
// switch_0FF8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1070
                }
                case 0x1:
                {
// switch_0FF8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1070
                }
                case 0x2:
                {
// switch_0FF8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1070
                }
                case 0x3:
                {
// switch_0FF8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1070
                }
                case 0x4:
                {
// switch_0FF8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1070
                }
                case 0x5:
                {
// switch_0FF8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1070
                }
            }
        }
        case 0x65:
        {
// switch_1410_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_11B0
                case default:
                {
// switch_11B0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1228
// lab_1228
                    OP_JUMP lab_1458
                }
                case 0x0:
                {
// switch_11B0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1228
                }
                case 0x1:
                {
// switch_11B0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1228
                }
                case 0x2:
                {
// switch_11B0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1228
                }
                case 0x3:
                {
// switch_11B0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1228
                }
                case 0x4:
                {
// switch_11B0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1228
                }
                case 0x5:
                {
// switch_11B0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1228
                }
            }
        }
        case 0x66:
        {
// switch_1410_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1368
                case default:
                {
// switch_1368_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_13E0
// lab_13E0
                    OP_JUMP lab_1458
                }
                case 0x0:
                {
// switch_1368_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_13E0
                }
                case 0x1:
                {
// switch_1368_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_13E0
                }
                case 0x2:
                {
// switch_1368_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_13E0
                }
                case 0x3:
                {
// switch_1368_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_13E0
                }
                case 0x4:
                {
// switch_1368_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_13E0
                }
                case 0x5:
                {
// switch_1368_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_13E0
                }
            }
        }
    }
}
// fun_1518
fun_1518() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0DF8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1580
fun_1580() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0798(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1628
    pri = 1;
    return pri;
// lab_1628
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1670
fun_1670() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_16C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1580(var_8)
    arg_2 = pri;
// lab_16C0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0DF8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1720
fun_1720() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1518(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1770
fun_1770() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1720(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17D0
fun_17D0() {
    OP_JUMP lab_17E8
// lab_17E8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1828
    pri = 0;
    return pri;
// lab_1828
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_17E8
    pri = 0;
    return pri;
}
// fun_1868
fun_1868() {
    var_8 = 0;
    pri = fun_17D0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1918
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1918
    pri = 0;
    return pri;
}
// fun_1928
fun_1928() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1958
fun_1958() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1990
fun_1990() {
    OP_JUMP lab_19A8
// lab_19A8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_19F0
    OP_JUMP lab_1A20
    OP_JUMP lab_1A10
// lab_19F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1A20
    pri = 0;
    return pri;
// lab_1A10
    OP_JUMP lab_19A8
}
// fun_1A30
fun_1A30() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1A60
fun_1A60() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AB0
fun_1AB0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B00
fun_1B00() {
    var_8 = 0;
    var_16 = 0;
    pri = PokePartyGetCount(var_16, var_8)
    OP_EQ_P_C_PRI 6
    OP_JZER lab_1B88
    pri = PokeBoxIsFull()
    OP_JZER lab_1B88
    pri = 1;
    OP_JUMP lab_1B90
// lab_1B88
    pri = 0;
// lab_1B90
    return pri;
}
// fun_1B98
fun_1B98() {
    pri = arg_6;
    OP_JNZ lab_1BD0
    var_8 = 0;
    pri = fun_0CA8()
// lab_1BD0
    pri = arg_1;
    switch (pri) {
// switch_3138
        case default:
        {
// switch_3138_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3488
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3488
            pri = 1;
            OP_JUMP lab_3490
// lab_3488
            pri = 0;
// lab_3490
            OP_JZER lab_35E8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0798(var_24, var_16)
            var_520 = pri;
            pri = 0;
            OP_ADDR_ALT -536
            OP_FILL 16
            OP_PUSH_P_ADR -536
            pri = var_520;
            OP_ADD_P_C 1
            var_56 = pri;
            pri = NumericToString(var_56, var_48)
            OP_PUSH_P_ADR -536
            OP_PUSH_P_ADR -536
            var_64 = 8424;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3648
// lab_35E8
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3648
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_36A8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3708
// lab_36A8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3708
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3708
            pri = arg_2;
            OP_JZER lab_3748
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3748
            var_8 = 0;
            pri = fun_0CE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3138_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x1:
        {
// switch_3138_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x2:
        {
// switch_3138_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x3:
        {
// switch_3138_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x4:
        {
// switch_3138_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x5:
        {
// switch_3138_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5608;
            var_72 = 5600;
            var_80 = 5592;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3138_case_default
        }
        case 0x6:
        {
// switch_3138_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5632;
            var_72 = 5624;
            var_80 = 5616;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3138_case_default
        }
        case 0x7:
        {
// switch_3138_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5656;
            var_72 = 5648;
            var_80 = 5640;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3138_case_default
        }
        case 0x8:
        {
// switch_3138_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x9:
        {
// switch_3138_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5680;
            var_72 = 5672;
            var_80 = 5664;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3138_case_default
        }
        case 0xa:
        {
// switch_3138_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3138_case_default
        }
        case 0xb:
        {
// switch_3138_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3138_case_default
        }
        case 0xc:
        {
// switch_3138_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3138_case_default
        }
        case 0xd:
        {
// switch_3138_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3138_case_default
        }
        case 0xe:
        {
// switch_3138_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3138_case_default
        }
        case 0xf:
        {
// switch_3138_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x10:
        {
// switch_3138_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x11:
        {
// switch_3138_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3138_case_default
        }
        case 0x12:
        {
// switch_3138_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3138_case_default
        }
        case 0x13:
        {
// switch_3138_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x14:
        {
// switch_3138_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x15:
        {
// switch_3138_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x16:
        {
// switch_3138_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x17:
        {
// switch_3138_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x18:
        {
// switch_3138_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x19:
        {
// switch_3138_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3138_case_default
        }
        case 0x1a:
        {
// switch_3138_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0758(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0720(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6096;
            var_88 = 6088;
            var_96 = 6080;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0A08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3138_case_default
        }
        case 0x1b:
        {
// switch_3138_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0758(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0720(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6320;
            var_88 = 6312;
            var_96 = 6304;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0A08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3138_case_default
        }
        case 0x1c:
        {
// switch_3138_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0758(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0720(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6544;
            var_88 = 6536;
            var_96 = 6528;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0A08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3138_case_default
        }
        case 0x1d:
        {
// switch_3138_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x1e:
        {
// switch_3138_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x1f:
        {
// switch_3138_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x20:
        {
// switch_3138_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x21:
        {
// switch_3138_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x22:
        {
// switch_3138_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x23:
        {
// switch_3138_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x24:
        {
// switch_3138_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x25:
        {
// switch_3138_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x26:
        {
// switch_3138_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x27:
        {
// switch_3138_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x28:
        {
// switch_3138_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
        case 0x29:
        {
// switch_3138_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3138_case_default
        }
    }
}
// fun_3778
fun_3778() {
    pri = arg_5;
    OP_JNZ lab_37B0
    var_8 = 0;
    pri = fun_0CA8()
// lab_37B0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3800
    OP_CONST_S -8, -1
// lab_3800
    pri = arg_1;
    switch (pri) {
// switch_52B8
        case default:
        {
// switch_52B8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5760
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0798(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5760
            pri = 1;
            OP_JUMP lab_5768
// lab_5760
            pri = 0;
// lab_5768
            OP_JZER lab_57B8
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5A10
// lab_57B8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5820
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5820
            pri = 1;
            OP_JUMP lab_5828
// lab_5820
            pri = 0;
// lab_5828
            OP_JZER lab_59B0
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0798(var_24, var_16)
            var_528 = pri;
            pri = 0;
            OP_ADDR_ALT -656
            OP_FILL 128
            OP_PUSH_P_ADR -656
            pri = var_528;
            OP_ADD_P_C 1
            var_168 = pri;
            pri = NumericToString(var_168, var_160)
            OP_PUSH_P_ADR -656
            OP_PUSH_P_ADR -656
            var_176 = 28560;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28576;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8440;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_5A10
// lab_59B0
            var_8 = 64;
            alt = 8440;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_5A10
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5A80
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5A80
            var_8 = 0;
            pri = fun_0CE8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_52B8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x1:
        {
// switch_52B8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x2:
        {
// switch_52B8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x3:
        {
// switch_52B8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x4:
        {
// switch_52B8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x5:
        {
// switch_52B8_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0758(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_09D0(var_40)
            OP_JUMP switch_52B8_case_default
        }
        case 0x6:
        {
// switch_52B8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x7:
        {
// switch_52B8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x8:
        {
// switch_52B8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x9:
        {
// switch_52B8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0xa:
        {
// switch_52B8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0xb:
        {
// switch_52B8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0xc:
        {
// switch_52B8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0xd:
        {
// switch_52B8_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19088;
            var_72 = 18912;
            var_80 = 18728;
            var_88 = 18536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0xe:
        {
// switch_52B8_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19744;
            var_72 = 19536;
            var_80 = 19320;
            var_88 = 19096;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0xf:
        {
// switch_52B8_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20136;
            var_72 = 20016;
            var_80 = 19888;
            var_88 = 19752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x10:
        {
// switch_52B8_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20480;
            var_72 = 20376;
            var_80 = 20264;
            var_88 = 20144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x11:
        {
// switch_52B8_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20824;
            var_72 = 20720;
            var_80 = 20608;
            var_88 = 20488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x12:
        {
// switch_52B8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x13:
        {
// switch_52B8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x14:
        {
// switch_52B8_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21384;
            var_72 = 21208;
            var_80 = 21024;
            var_88 = 20832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x15:
        {
// switch_52B8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x16:
        {
// switch_52B8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x17:
        {
// switch_52B8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x18:
        {
// switch_52B8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x19:
        {
// switch_52B8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x1a:
        {
// switch_52B8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x1b:
        {
// switch_52B8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x1c:
        {
// switch_52B8_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21776;
            var_72 = 21656;
            var_80 = 21528;
            var_88 = 21392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x1d:
        {
// switch_52B8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x1e:
        {
// switch_52B8_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22240;
            var_72 = 22096;
            var_80 = 21944;
            var_88 = 21784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x1f:
        {
// switch_52B8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x20:
        {
// switch_52B8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x21:
        {
// switch_52B8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x22:
        {
// switch_52B8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x23:
        {
// switch_52B8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x24:
        {
// switch_52B8_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22608;
            var_72 = 22496;
            var_80 = 22376;
            var_88 = 22248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x25:
        {
// switch_52B8_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22976;
            var_72 = 22864;
            var_80 = 22744;
            var_88 = 22616;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x26:
        {
// switch_52B8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x27:
        {
// switch_52B8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x28:
        {
// switch_52B8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x29:
        {
// switch_52B8_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23416;
            var_72 = 23280;
            var_80 = 23136;
            var_88 = 22984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x2a:
        {
// switch_52B8_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23808;
            var_72 = 23688;
            var_80 = 23560;
            var_88 = 23424;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x2b:
        {
// switch_52B8_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24224;
            var_72 = 24096;
            var_80 = 23960;
            var_88 = 23816;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x2c:
        {
// switch_52B8_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24664;
            var_72 = 24528;
            var_80 = 24384;
            var_88 = 24232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x2d:
        {
// switch_52B8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x2e:
        {
// switch_52B8_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24984;
            var_72 = 24888;
            var_80 = 24784;
            var_88 = 24672;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x2f:
        {
// switch_52B8_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25376;
            var_72 = 25256;
            var_80 = 25128;
            var_88 = 24992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x30:
        {
// switch_52B8_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25768;
            var_72 = 25648;
            var_80 = 25520;
            var_88 = 25384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x31:
        {
// switch_52B8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x32:
        {
// switch_52B8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x33:
        {
// switch_52B8_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26160;
            var_72 = 26040;
            var_80 = 25912;
            var_88 = 25776;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x34:
        {
// switch_52B8_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26528;
            var_72 = 26416;
            var_80 = 26296;
            var_88 = 26168;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x35:
        {
// switch_52B8_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27016;
            var_72 = 26864;
            var_80 = 26704;
            var_88 = 26536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x36:
        {
// switch_52B8_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27384;
            var_72 = 27272;
            var_80 = 27152;
            var_88 = 27024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x37:
        {
// switch_52B8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x38:
        {
// switch_52B8_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27752;
            var_72 = 27640;
            var_80 = 27520;
            var_88 = 27392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0A08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_52B8_case_default
        }
        case 0x39:
        {
// switch_52B8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x3a:
        {
// switch_52B8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x3b:
        {
// switch_52B8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x3c:
        {
// switch_52B8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x3d:
        {
// switch_52B8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
        case 0x3e:
        {
// switch_52B8_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0758(var_24, var_16, var_8)
            OP_JUMP switch_52B8_case_default
        }
    }
}
// fun_5AB0
fun_5AB0() {
    pri = arg_4;
    OP_JNZ lab_5AE8
    var_8 = 0;
    pri = fun_0CA8()
// lab_5AE8
    pri = arg_1;
    switch (pri) {
// switch_6EC0
        case default:
        {
// switch_6EC0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0D68(var_264)
            OP_JZER lab_7488
            pri = arg_3;
            switch (pri) {
// switch_7430
                case default:
                {
// switch_7430_case_default
                    OP_JUMP lab_7740
// lab_7740
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_77B0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_77B0
                    var_8 = 0;
                    pri = fun_0CE8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7430_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7430_case_default
                }
                case 0x2:
                {
// switch_7430_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7430_case_default
                }
                case 0x3:
                {
// switch_7430_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7430_case_default
                }
            }
// lab_7488
            pri = arg_1;
            OP_JZER lab_74D8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_74D8
            pri = 0;
            OP_JUMP lab_74E0
// lab_74D8
            pri = 1;
// lab_74E0
            OP_JZER lab_7548
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0798(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7548
            pri = 1;
            OP_JUMP lab_7550
// lab_7548
            pri = 0;
// lab_7550
            OP_JZER lab_75A0
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7740
// lab_75A0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7608
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_7740
// lab_7608
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0798(var_24, var_16)
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
            var_176 = 29984;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30000;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_6EC0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x1:
        {
// switch_6EC0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x2:
        {
// switch_6EC0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x3:
        {
// switch_6EC0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x4:
        {
// switch_6EC0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x5:
        {
// switch_6EC0_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0758(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_09D0(var_40)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x6:
        {
// switch_6EC0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x7:
        {
// switch_6EC0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x8:
        {
// switch_6EC0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x9:
        {
// switch_6EC0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0xa:
        {
// switch_6EC0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0xb:
        {
// switch_6EC0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0xc:
        {
// switch_6EC0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0xd:
        {
// switch_6EC0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0xe:
        {
// switch_6EC0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0xf:
        {
// switch_6EC0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x10:
        {
// switch_6EC0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x11:
        {
// switch_6EC0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x12:
        {
// switch_6EC0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x13:
        {
// switch_6EC0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x14:
        {
// switch_6EC0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x15:
        {
// switch_6EC0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x16:
        {
// switch_6EC0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x17:
        {
// switch_6EC0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x18:
        {
// switch_6EC0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x19:
        {
// switch_6EC0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x1a:
        {
// switch_6EC0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x1b:
        {
// switch_6EC0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x1c:
        {
// switch_6EC0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x1d:
        {
// switch_6EC0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x1e:
        {
// switch_6EC0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x1f:
        {
// switch_6EC0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x20:
        {
// switch_6EC0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x21:
        {
// switch_6EC0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x22:
        {
// switch_6EC0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x23:
        {
// switch_6EC0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x24:
        {
// switch_6EC0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x25:
        {
// switch_6EC0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x26:
        {
// switch_6EC0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x27:
        {
// switch_6EC0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x28:
        {
// switch_6EC0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x29:
        {
// switch_6EC0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x2a:
        {
// switch_6EC0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x2b:
        {
// switch_6EC0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x2c:
        {
// switch_6EC0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x2d:
        {
// switch_6EC0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x2e:
        {
// switch_6EC0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x2f:
        {
// switch_6EC0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x30:
        {
// switch_6EC0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x31:
        {
// switch_6EC0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x32:
        {
// switch_6EC0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x33:
        {
// switch_6EC0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x34:
        {
// switch_6EC0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x35:
        {
// switch_6EC0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x36:
        {
// switch_6EC0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x37:
        {
// switch_6EC0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x38:
        {
// switch_6EC0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x39:
        {
// switch_6EC0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x3a:
        {
// switch_6EC0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x3b:
        {
// switch_6EC0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x3c:
        {
// switch_6EC0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x3d:
        {
// switch_6EC0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
        case 0x3e:
        {
// switch_6EC0_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0758(var_24, var_16, var_8)
            OP_JUMP switch_6EC0_case_default
        }
    }
}
// fun_77E0
fun_77E0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_78E0
        case default:
        {
// switch_78E0_case_default
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
// switch_78E0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_78E0_case_default
        }
        case 0x1:
        {
// switch_78E0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_78E0_case_default
        }
        case 0x2:
        {
// switch_78E0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_78E0_case_default
        }
        case 0x3:
        {
// switch_78E0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_78E0_case_default
        }
    }
}
// fun_79A0
fun_79A0() {
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
    pri = fun_1670(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_17D0()
    pri = 0;
    return pri;
}
// fun_7A38
fun_7A38() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_77E0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_79A0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_7AE0
fun_7AE0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7B30
// lab_7B30
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7BA8
    OP_JUMP lab_7BD8
// lab_7BA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7B30
// lab_7BD8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7C60
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5AB0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0DC8(var_56)
// lab_7C60
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7CC8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0D28(var_24, var_16)
// lab_7CC8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0D28(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7D88
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_07D0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0550(var_88, var_80, var_72, var_64, var_56)
// lab_7D88
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7DC8
    pri = 0;
    return pri;
// lab_7DC8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7F10
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0720(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_7ED8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_7F10
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05F8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_05F8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07D0(var_40)
    pri = 0;
    return pri;
// lab_7ED8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0D28(var_16, var_8)
}
// fun_7F98
fun_7F98() {
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
    pri = fun_7A38(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1868(var_112)
    var_128 = 0;
    pri = fun_1928()
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
    pri = fun_7AE0(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_8110
fun_8110() {
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
    var_112 = 30304;
    var_120 = 8802641224559852288;
    pri = AddParallelWaitStandard(var_120, var_112, var_104)
    pri = 0;
    return pri;
}
// fun_8238
fun_8238() {
    pri = arg_1;
    OP_JZER lab_82D8
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
    pri = fun_1670(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_17D0()
// lab_82D8
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8110(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8318
fun_8318() {
    var_16 = 7;
    pri = TempWorkGet(var_16)
    var_8 = pri;
    var_24 = var_8;
    var_32 = 8;
    pri = fun_03E0(var_24)
    OP_JUMP lab_8380
// lab_8380
    var_8 = 30520;
    var_16 = 8802641224559852288;
    pri = FindParallelWait(var_16, var_8)
    OP_JNZ lab_83D0
    OP_JUMP lab_8400
// lab_83D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8380
// lab_8400
    OP_JUMP lab_8410
// lab_8410
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30736;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8488
    OP_JUMP lab_84B8
// lab_8488
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8410
// lab_84B8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = arg_0;
    pri = EasyTalkTerminate(var_16)
    var_24 = 15;
    pri = TempWorkGet(var_24)
    alt = 1;
    OP_JEQ lab_8568
    var_32 = -1;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0D28(var_40, var_32)
// lab_8568
    OP_ZERO_P_S -16
    OP_JUMP lab_8588
// lab_8588
    var_8 = arg_0;
    pri = IsEasyTalkRunning(var_8)
    OP_JNZ lab_85C8
    OP_JUMP lab_8610
// lab_85C8
    pri = var_16;
    OP_EQ_P_C_PRI 300
    OP_JZER lab_85F8
    OP_JUMP lab_8610
// lab_85F8
    OP_INC_P_S -16
    OP_JUMP lab_8588
// lab_8610
    OP_CONST_S -24, 4
    pri = arg_1;
    OP_JZER lab_8690
    var_16 = arg_0;
    var_24 = 8;
    pri = fun_0520(var_16)
    OP_JZER lab_8690
    pri = 1;
    OP_JUMP lab_8698
// lab_8690
    pri = 0;
// lab_8698
    OP_JZER lab_8708
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_05F8(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = var_24;
    var_48 = arg_2;
    var_56 = arg_0;
    var_64 = 40;
    pri = fun_0550(var_56, var_48, var_40, var_32, var_24)
// lab_8708
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8748
    pri = 0;
    return pri;
// lab_8748
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8878
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30856;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0720(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_32 = pri;
    pri = var_32;
    alt = 23;
    OP_JSLESS lab_8840
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8878
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_05F8(var_8)
    var_24 = 8802641224559852288;
    var_32 = 8;
    pri = fun_07D0(var_24)
    pri = 0;
    return pri;
// lab_8840
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0D28(var_16, var_8)
}
// fun_88E0
fun_88E0() {
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
    pri = fun_8238(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = arg_0;
    OP_JZER lab_89B0
    var_80 = 1;
    var_88 = 8;
    pri = fun_1868(var_80)
    var_96 = 0;
    pri = fun_1928()
// lab_89B0
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
    pri = fun_8318(var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8A68
fun_8A68() {
    var_8 = 30992;
    var_16 = 8;
    pri = fun_1958(var_8)
    var_24 = 0;
    pri = fun_1990()
    var_32 = 31168;
    pri = SoundPostEvent(var_32)
    var_40 = 0;
    var_48 = 8;
    pri = fun_1A60(var_40)
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 16;
    pri = fun_1AB0(var_64, var_56)
    var_80 = 3;
    var_88 = 0;
    var_96 = -1785521252434788896;
    var_104 = 24;
    pri = fun_1770(var_96, var_88, var_80)
    var_112 = 0;
    var_120 = 8;
    pri = fun_03E0(var_112)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1868(var_128)
    var_144 = 0;
    pri = fun_1928()
    var_152 = arg_0;
    pri = PokePartyAddMember(var_152)
    var_160 = 0;
    pri = fun_1A30()
    pri = 0;
    return pri;
}
// fun_8BE8
fun_8BE8() {
    var_8 = 0;
    pri = fun_1B00()
    OP_JZER lab_8CE8
    var_16 = 31352;
    var_24 = 8;
    pri = fun_1958(var_16)
    var_32 = 0;
    pri = fun_1990()
    var_40 = 3;
    var_48 = 0;
    var_56 = -7763515063518001126;
    var_64 = 24;
    pri = fun_1770(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1868(var_72)
    var_88 = 0;
    pri = fun_1928()
    var_96 = 0;
    pri = fun_1A30()
    pri = 1;
    return pri;
// lab_8CE8
    pri = 0;
    return pri;
}
// fun_8CF8
fun_8CF8() {
    pri = g_mode;
    switch (pri) {
// switch_8DB8
        case default:
        {
// switch_8DB8_case_default
            pri = CommandNOP()
            OP_JUMP lab_8E00
// lab_8E00
            pri = 0;
            return pri;
        }
        case 0xb2ebc4179914a6df:
        {
// switch_8DB8_case_0xb2ebc4179914a6df
            var_8 = 0;
            pri = fun_9D08()
            OP_JUMP lab_8E00
        }
        case 0xbee737b8900fb09b:
        {
// switch_8DB8_case_0xbee737b8900fb09b
            var_8 = 0;
            pri = fun_8E28()
            OP_JUMP lab_8E00
        }
        case 0x0:
        {
// switch_8DB8_case_0x0
            var_8 = 0;
            pri = fun_8E10()
            OP_JUMP lab_8E00
        }
    }
}
// fun_8E10
fun_8E10() {
    pri = 0;
    return pri;
}
// fun_8E28
fun_8E28() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = -6428975327720169943;
    pri = WorkGet(var_16)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8EC0
    var_24 = 0;
    pri = fun_9C80()
    OP_JUMP lab_8F18
// lab_8EC0
    var_8 = -6428975327720169943;
    pri = WorkGet(var_8)
    OP_JNZ lab_8F18
    var_16 = var_8;
    var_24 = 8;
    pri = fun_8F30(var_16)
// lab_8F18
    pri = 0;
    return pri;
}
// fun_8F30
fun_8F30() {
    var_8 = 0;
    pri = fun_8BE8()
    OP_JZER lab_8F70
    OP_JUMP lab_9C70
// lab_8F70
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 6548505322321268428;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_05A0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -2424660210301625164;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1670(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1868(var_128)
    var_144 = 0;
    pri = fun_1928()
    var_152 = arg_0;
    var_160 = 8;
    pri = fun_05F8(var_152)
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = 0;
    var_200 = arg_0;
    var_208 = 6548505322321268428;
    var_216 = 48;
    pri = fun_05A0(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 0;
    var_232 = 0;
    var_240 = 0;
    var_248 = 772;
    pri = SoundPlayPokeVoice(var_248, var_240, var_232, var_224)
    var_256 = 0;
    var_264 = 3;
    var_272 = 0;
    var_280 = 100;
    var_288 = -1;
    OP_PUSH2_C -3218018734338903886, 6548505322321268428
    var_296 = 56;
    pri = fun_1670(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 1;
    var_312 = 8;
    pri = fun_1868(var_304)
    var_320 = 0;
    pri = fun_1928()
    var_328 = 6548505322321268428;
    var_336 = 8;
    pri = fun_05F8(var_328)
    var_344 = 0;
    var_352 = 3;
    var_360 = 0;
    var_368 = 100;
    var_376 = -1;
    var_384 = -2424662409324881586;
    var_392 = arg_0;
    var_400 = 56;
    pri = fun_1670(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_1868(var_408)
    var_424 = 0;
    pri = fun_1928()
    var_432 = 1;
    var_440 = 1;
    var_448 = 0;
    var_456 = 1;
    var_464 = 1;
    var_472 = arg_0;
    var_480 = 48;
    pri = fun_77E0(var_472, var_464, var_456, var_448, var_440, var_432)
    var_488 = 0;
    var_496 = 0;
    var_504 = 0;
    var_512 = 0;
    OP_PUSH2_C 8802641224559852288, 6548505322321268428
    var_520 = 48;
    pri = fun_05A0(var_512, var_504, var_496, var_488, var_480, var_472)
    var_528 = 0;
    var_536 = 3;
    var_544 = 0;
    var_552 = 100;
    var_560 = -1;
    var_568 = -2424656911766740531;
    var_576 = arg_0;
    var_584 = 56;
    pri = fun_1670(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_592 = 1;
    var_600 = 8;
    pri = fun_1868(var_592)
    var_608 = 0;
    pri = fun_1928()
    var_616 = 6548505322321268428;
    var_624 = 8;
    pri = fun_05F8(var_616)
    var_632 = 0;
    var_640 = 3;
    var_648 = 0;
    var_656 = 100;
    var_664 = -1;
    var_672 = -2424658011278368742;
    var_680 = arg_0;
    var_688 = 56;
    pri = fun_1670(var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_696 = 1;
    var_704 = 8;
    pri = fun_1868(var_696)
    var_712 = 0;
    pri = fun_1928()
    var_720 = 772;
    var_728 = -777827344859655328;
    var_736 = 16;
    pri = fun_8A68(var_728, var_720)
    var_744 = 0;
    var_752 = 3;
    var_760 = 0;
    var_768 = 100;
    var_776 = -1;
    var_784 = -2424663508836509797;
    var_792 = arg_0;
    var_800 = 56;
    pri = fun_1670(var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_808 = 1;
    var_816 = 8;
    pri = fun_1868(var_808)
    var_824 = 0;
    pri = fun_1928()
    var_832 = 1;
    var_840 = 3;
    var_848 = 0;
    var_856 = 0;
    var_864 = arg_0;
    var_872 = 40;
    pri = fun_5AB0(var_864, var_856, var_848, var_840, var_832)
    var_880 = arg_0;
    var_888 = 8;
    pri = fun_07D0(var_880)
    var_896 = 1;
    var_904 = -1;
    var_912 = -1;
    var_920 = 3;
    var_928 = 0;
    var_936 = 2;
    var_944 = arg_0;
    var_952 = 56;
    pri = fun_1B98(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_960 = 5;
    var_968 = 8;
    pri = fun_0060(var_960)
    var_976 = 1;
    var_984 = -1;
    var_992 = -1;
    var_1000 = 3;
    var_1008 = 0;
    var_1016 = 21;
    var_1024 = 8802641224559852288;
    var_1032 = 56;
    pri = fun_1B98(var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1040 = 3;
    var_1048 = 0;
    var_1056 = 6960623958093271607;
    var_1064 = 24;
    pri = fun_1720(var_1056, var_1048, var_1040)
    var_1072 = 31536;
    pri = SoundPostEvent(var_1072)
    var_1080 = 1;
    var_1088 = 8;
    pri = fun_1868(var_1080)
    var_1096 = arg_0;
    var_1104 = 8;
    pri = fun_07D0(var_1096)
    var_1112 = 8802641224559852288;
    var_1120 = 8;
    pri = fun_07D0(var_1112)
    var_1128 = 0;
    pri = fun_1928()
    var_1136 = 1;
    var_1144 = 1;
    var_1152 = -1;
    var_1160 = -1;
    var_1168 = 0;
    var_1176 = 0;
    var_1184 = arg_0;
    var_1192 = 56;
    pri = fun_3778(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1200 = 0;
    var_1208 = 3;
    var_1216 = 0;
    var_1224 = 100;
    var_1232 = -1;
    var_1240 = -2424664608348138008;
    var_1248 = arg_0;
    var_1256 = 56;
    pri = fun_1670(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1264 = 1;
    var_1272 = 8;
    pri = fun_1868(var_1264)
    var_1280 = 0;
    pri = fun_1928()
    var_1288 = 0;
    var_1296 = 0;
    var_1304 = 0;
    var_1312 = 772;
    pri = SoundPlayPokeVoice(var_1312, var_1304, var_1296, var_1288)
    var_1320 = 0;
    var_1328 = 3;
    var_1336 = 0;
    var_1344 = 100;
    var_1352 = -1;
    var_1360 = -3218019833850532097;
    var_1368 = arg_0;
    var_1376 = 56;
    pri = fun_1670(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1384 = 1;
    var_1392 = 8;
    pri = fun_1868(var_1384)
    var_1400 = 0;
    pri = fun_1928()
    var_1408 = 1;
    var_1416 = 904;
    pri = ItemAdd(var_1416, var_1408)
    var_1424 = 1;
    var_1432 = 905;
    pri = ItemAdd(var_1432, var_1424)
    var_1440 = 1;
    var_1448 = 906;
    pri = ItemAdd(var_1448, var_1440)
    var_1456 = 1;
    var_1464 = 907;
    pri = ItemAdd(var_1464, var_1456)
    var_1472 = 1;
    var_1480 = 908;
    pri = ItemAdd(var_1480, var_1472)
    var_1488 = 1;
    var_1496 = 909;
    pri = ItemAdd(var_1496, var_1488)
    var_1504 = 1;
    var_1512 = 910;
    pri = ItemAdd(var_1512, var_1504)
    var_1520 = 1;
    var_1528 = 911;
    pri = ItemAdd(var_1528, var_1520)
    var_1536 = 1;
    var_1544 = 912;
    pri = ItemAdd(var_1544, var_1536)
    var_1552 = 1;
    var_1560 = 913;
    pri = ItemAdd(var_1560, var_1552)
    var_1568 = 1;
    var_1576 = 914;
    pri = ItemAdd(var_1576, var_1568)
    var_1584 = 1;
    var_1592 = 915;
    pri = ItemAdd(var_1592, var_1584)
    var_1600 = 1;
    var_1608 = 916;
    pri = ItemAdd(var_1608, var_1600)
    var_1616 = 1;
    var_1624 = 917;
    pri = ItemAdd(var_1624, var_1616)
    var_1632 = 1;
    var_1640 = 918;
    pri = ItemAdd(var_1640, var_1632)
    var_1648 = 1;
    var_1656 = 919;
    pri = ItemAdd(var_1656, var_1648)
    var_1664 = 1;
    var_1672 = 920;
    pri = ItemAdd(var_1672, var_1664)
    var_1680 = 1;
    var_1688 = -6428975327720169943;
    pri = WorkSet(var_1688, var_1680)
    var_1696 = 1;
    var_1704 = 0;
    var_1712 = 31720;
    var_1720 = 8;
    var_1728 = 32;
    pri = fun_02E0(var_1720, var_1712, var_1704, var_1696)
    var_1736 = 0;
    pri = fun_0350()
    var_1744 = 6548505322321268428;
    var_1752 = 8;
    pri = fun_04F0(var_1744)
    var_1760 = 15;
    var_1768 = 8;
    pri = fun_0060(var_1760)
    var_1776 = 31768;
    var_1784 = 8;
    var_1792 = 16;
    pri = fun_0280(var_1784, var_1776)
    var_1800 = 0;
    pri = fun_0350()
    var_1808 = 0;
    var_1816 = 0;
    var_1824 = 0;
    var_1832 = arg_0;
    var_1840 = 32;
    pri = fun_7AE0(var_1832, var_1824, var_1816, var_1808)
// lab_9C70
    pri = 0;
    return pri;
}
// fun_9C80
fun_9C80() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -2424661309813253375;
    var_88 = 80;
    pri = fun_7F98(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9D08
fun_9D08() {
    var_8 = 3;
    var_16 = 0;
    var_24 = 100;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = -3218019833850532097;
    var_64 = 56;
    pri = fun_88E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
