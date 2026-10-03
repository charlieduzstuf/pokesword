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
    pri = FadeCheckOut_()
    return pri;
}
// fun_0408
fun_0408() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0460
fun_0460() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0498
fun_0498() {
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
// fun_0510
fun_0510() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0560
fun_0560() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05B8
fun_05B8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D28(var_8)
    OP_JZER lab_0630
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D58(var_24)
    OP_JNZ lab_0630
    pri = 0;
    return pri;
// lab_0630
    OP_JUMP lab_0640
// lab_0640
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_06A0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_06A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0640
    pri = 0;
    return pri;
}
// fun_06E0
fun_06E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0758
fun_0758() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0790
fun_0790() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_07D8
    pri = 0;
    return pri;
// lab_07D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0818
// lab_0818
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D28(var_8)
    OP_JNZ lab_08A0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0890
    pri = 0;
    return pri;
// lab_08A0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08E8
    pri = 0;
    return pri;
// lab_08E8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0948
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0990(var_8)
    pri = 0;
    return pri;
// lab_0948
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0818
    pri = 0;
    return pri;
// lab_0890
    OP_JUMP lab_08E8
}
// fun_0990
fun_0990() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_09C8
fun_09C8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A18
    pri = 0;
    return pri;
// lab_0A18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D28(var_8)
    OP_JZER lab_0B48
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A70
    OP_ZERO_P_S 64
// lab_0B48
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B80
    OP_CONST_S 64, 1
// lab_0B80
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BB8
    OP_CONST_S 72, 1
// lab_0BB8
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
// lab_0A70
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A98
    OP_ZERO_P_S 72
// lab_0A98
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
    OP_JUMP lab_0C58
// lab_0C58
    pri = 0;
    return pri;
}
// fun_0C68
fun_0C68() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CA8
fun_0CA8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CE8
fun_0CE8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D28
fun_0D28() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0D58
fun_0D58() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0D88
fun_0D88() {
    OP_JUMP lab_0DA0
// lab_0DA0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0E30
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0E20
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0790(var_8)
    pri = 0;
    return pri;
// lab_0E30
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0EC0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0EB0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0790(var_8)
    pri = 0;
    return pri;
// lab_0EC0
    pri = 0;
    return pri;
// lab_0EB0
    OP_JUMP lab_0ED0
// lab_0ED0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0DA0
    pri = 0;
    return pri;
// lab_0E20
    OP_JUMP lab_0ED0
}
// fun_0F10
fun_0F10() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0790(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0D88(var_40)
    pri = 0;
    return pri;
}
// fun_0F98
fun_0F98() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0FD0
fun_0FD0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0FF8
fun_0FF8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1030
fun_1030() {
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
// switch_1648
        case default:
        {
// switch_1648_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1690
// lab_1690
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
            OP_JNZ lab_1738
            var_88 = 0;
            pri = fun_18F0()
// lab_1738
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1648_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1230
                case default:
                {
// switch_1230_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_12A8
// lab_12A8
                    OP_JUMP lab_1690
                }
                case 0x0:
                {
// switch_1230_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_12A8
                }
                case 0x1:
                {
// switch_1230_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_12A8
                }
                case 0x2:
                {
// switch_1230_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_12A8
                }
                case 0x3:
                {
// switch_1230_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_12A8
                }
                case 0x4:
                {
// switch_1230_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_12A8
                }
                case 0x5:
                {
// switch_1230_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_12A8
                }
            }
        }
        case 0x65:
        {
// switch_1648_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_13E8
                case default:
                {
// switch_13E8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1460
// lab_1460
                    OP_JUMP lab_1690
                }
                case 0x0:
                {
// switch_13E8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1460
                }
                case 0x1:
                {
// switch_13E8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1460
                }
                case 0x2:
                {
// switch_13E8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1460
                }
                case 0x3:
                {
// switch_13E8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1460
                }
                case 0x4:
                {
// switch_13E8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1460
                }
                case 0x5:
                {
// switch_13E8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1460
                }
            }
        }
        case 0x66:
        {
// switch_1648_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_15A0
                case default:
                {
// switch_15A0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1618
// lab_1618
                    OP_JUMP lab_1690
                }
                case 0x0:
                {
// switch_15A0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1618
                }
                case 0x1:
                {
// switch_15A0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1618
                }
                case 0x2:
                {
// switch_15A0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1618
                }
                case 0x3:
                {
// switch_15A0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1618
                }
                case 0x4:
                {
// switch_15A0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1618
                }
                case 0x5:
                {
// switch_15A0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1618
                }
            }
        }
    }
}
// fun_1750
fun_1750() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0758(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_17F8
    pri = 1;
    return pri;
// lab_17F8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1840
fun_1840() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1890
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1750(var_8)
    arg_2 = pri;
// lab_1890
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1030(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18F0
fun_18F0() {
    OP_JUMP lab_1908
// lab_1908
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1948
    pri = 0;
    return pri;
// lab_1948
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1908
    pri = 0;
    return pri;
}
// fun_1988
fun_1988() {
    var_8 = 0;
    pri = fun_18F0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1A38
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1A38
    pri = 0;
    return pri;
}
// fun_1A48
fun_1A48() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1A78
fun_1A78() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1AF0()
    return pri;
}
// fun_1AF0
fun_1AF0() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1B30
fun_1B30() {
    pri = arg_6;
    OP_JNZ lab_1B68
    var_8 = 0;
    pri = fun_0C68()
// lab_1B68
    pri = arg_1;
    switch (pri) {
// switch_30D0
        case default:
        {
// switch_30D0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3420
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3420
            pri = 1;
            OP_JUMP lab_3428
// lab_3420
            pri = 0;
// lab_3428
            OP_JZER lab_3580
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0758(var_24, var_16)
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
            OP_JUMP lab_35E0
// lab_3580
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
// lab_35E0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3640
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_36A0
// lab_3640
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_36A0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_36A0
            pri = arg_2;
            OP_JZER lab_36E0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_36E0
            var_8 = 0;
            pri = fun_0CA8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_30D0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x1:
        {
// switch_30D0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x2:
        {
// switch_30D0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x3:
        {
// switch_30D0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x4:
        {
// switch_30D0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x5:
        {
// switch_30D0_case_0x5
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30D0_case_default
        }
        case 0x6:
        {
// switch_30D0_case_0x6
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30D0_case_default
        }
        case 0x7:
        {
// switch_30D0_case_0x7
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30D0_case_default
        }
        case 0x8:
        {
// switch_30D0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x9:
        {
// switch_30D0_case_0x9
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30D0_case_default
        }
        case 0xa:
        {
// switch_30D0_case_0xa
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30D0_case_default
        }
        case 0xb:
        {
// switch_30D0_case_0xb
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30D0_case_default
        }
        case 0xc:
        {
// switch_30D0_case_0xc
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30D0_case_default
        }
        case 0xd:
        {
// switch_30D0_case_0xd
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30D0_case_default
        }
        case 0xe:
        {
// switch_30D0_case_0xe
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30D0_case_default
        }
        case 0xf:
        {
// switch_30D0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x10:
        {
// switch_30D0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x11:
        {
// switch_30D0_case_0x11
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30D0_case_default
        }
        case 0x12:
        {
// switch_30D0_case_0x12
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30D0_case_default
        }
        case 0x13:
        {
// switch_30D0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x14:
        {
// switch_30D0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x15:
        {
// switch_30D0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x16:
        {
// switch_30D0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x17:
        {
// switch_30D0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x18:
        {
// switch_30D0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x19:
        {
// switch_30D0_case_0x19
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30D0_case_default
        }
        case 0x1a:
        {
// switch_30D0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0718(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06E0(var_48, var_40)
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
            pri = fun_09C8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_30D0_case_default
        }
        case 0x1b:
        {
// switch_30D0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0718(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06E0(var_48, var_40)
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
            pri = fun_09C8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_30D0_case_default
        }
        case 0x1c:
        {
// switch_30D0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0718(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06E0(var_48, var_40)
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
            pri = fun_09C8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_30D0_case_default
        }
        case 0x1d:
        {
// switch_30D0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x1e:
        {
// switch_30D0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x1f:
        {
// switch_30D0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x20:
        {
// switch_30D0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x21:
        {
// switch_30D0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x22:
        {
// switch_30D0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x23:
        {
// switch_30D0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x24:
        {
// switch_30D0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x25:
        {
// switch_30D0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x26:
        {
// switch_30D0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x27:
        {
// switch_30D0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x28:
        {
// switch_30D0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
        case 0x29:
        {
// switch_30D0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_30D0_case_default
        }
    }
}
// fun_3710
fun_3710() {
    pri = arg_5;
    OP_JNZ lab_3748
    var_8 = 0;
    pri = fun_0C68()
// lab_3748
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3798
    OP_CONST_S -8, -1
// lab_3798
    pri = arg_1;
    switch (pri) {
// switch_5250
        case default:
        {
// switch_5250_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_56F8
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0758(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_56F8
            pri = 1;
            OP_JUMP lab_5700
// lab_56F8
            pri = 0;
// lab_5700
            OP_JZER lab_5750
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_59A8
// lab_5750
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_57B8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_57B8
            pri = 1;
            OP_JUMP lab_57C0
// lab_57B8
            pri = 0;
// lab_57C0
            OP_JZER lab_5948
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0758(var_24, var_16)
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
            OP_JUMP lab_59A8
// lab_5948
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
// lab_59A8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5A18
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5A18
            var_8 = 0;
            pri = fun_0CA8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5250_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x1:
        {
// switch_5250_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x2:
        {
// switch_5250_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x3:
        {
// switch_5250_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x4:
        {
// switch_5250_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x5:
        {
// switch_5250_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0718(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0990(var_40)
            OP_JUMP switch_5250_case_default
        }
        case 0x6:
        {
// switch_5250_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x7:
        {
// switch_5250_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x8:
        {
// switch_5250_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x9:
        {
// switch_5250_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0xa:
        {
// switch_5250_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0xb:
        {
// switch_5250_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0xc:
        {
// switch_5250_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0xd:
        {
// switch_5250_case_0xd
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0xe:
        {
// switch_5250_case_0xe
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0xf:
        {
// switch_5250_case_0xf
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x10:
        {
// switch_5250_case_0x10
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x11:
        {
// switch_5250_case_0x11
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x12:
        {
// switch_5250_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x13:
        {
// switch_5250_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x14:
        {
// switch_5250_case_0x14
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x15:
        {
// switch_5250_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x16:
        {
// switch_5250_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x17:
        {
// switch_5250_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x18:
        {
// switch_5250_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x19:
        {
// switch_5250_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x1a:
        {
// switch_5250_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x1b:
        {
// switch_5250_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x1c:
        {
// switch_5250_case_0x1c
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x1d:
        {
// switch_5250_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x1e:
        {
// switch_5250_case_0x1e
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x1f:
        {
// switch_5250_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x20:
        {
// switch_5250_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x21:
        {
// switch_5250_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x22:
        {
// switch_5250_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x23:
        {
// switch_5250_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x24:
        {
// switch_5250_case_0x24
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x25:
        {
// switch_5250_case_0x25
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x26:
        {
// switch_5250_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x27:
        {
// switch_5250_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x28:
        {
// switch_5250_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x29:
        {
// switch_5250_case_0x29
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x2a:
        {
// switch_5250_case_0x2a
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x2b:
        {
// switch_5250_case_0x2b
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x2c:
        {
// switch_5250_case_0x2c
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x2d:
        {
// switch_5250_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x2e:
        {
// switch_5250_case_0x2e
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x2f:
        {
// switch_5250_case_0x2f
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x30:
        {
// switch_5250_case_0x30
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x31:
        {
// switch_5250_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x32:
        {
// switch_5250_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x33:
        {
// switch_5250_case_0x33
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x34:
        {
// switch_5250_case_0x34
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x35:
        {
// switch_5250_case_0x35
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x36:
        {
// switch_5250_case_0x36
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x37:
        {
// switch_5250_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x38:
        {
// switch_5250_case_0x38
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
            pri = fun_09C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5250_case_default
        }
        case 0x39:
        {
// switch_5250_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x3a:
        {
// switch_5250_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x3b:
        {
// switch_5250_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x3c:
        {
// switch_5250_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x3d:
        {
// switch_5250_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
        case 0x3e:
        {
// switch_5250_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0718(var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
    }
}
// fun_5A48
fun_5A48() {
    pri = arg_4;
    OP_JNZ lab_5A80
    var_8 = 0;
    pri = fun_0C68()
// lab_5A80
    pri = arg_1;
    switch (pri) {
// switch_6E58
        case default:
        {
// switch_6E58_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0D28(var_264)
            OP_JZER lab_7420
            pri = arg_3;
            switch (pri) {
// switch_73C8
                case default:
                {
// switch_73C8_case_default
                    OP_JUMP lab_76D8
// lab_76D8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7748
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7748
                    var_8 = 0;
                    pri = fun_0CA8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_73C8_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_73C8_case_default
                }
                case 0x2:
                {
// switch_73C8_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_73C8_case_default
                }
                case 0x3:
                {
// switch_73C8_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_73C8_case_default
                }
            }
// lab_7420
            pri = arg_1;
            OP_JZER lab_7470
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7470
            pri = 0;
            OP_JUMP lab_7478
// lab_7470
            pri = 1;
// lab_7478
            OP_JZER lab_74E0
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0758(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_74E0
            pri = 1;
            OP_JUMP lab_74E8
// lab_74E0
            pri = 0;
// lab_74E8
            OP_JZER lab_7538
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_76D8
// lab_7538
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_75A0
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_76D8
// lab_75A0
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0758(var_24, var_16)
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
// switch_6E58_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x1:
        {
// switch_6E58_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x2:
        {
// switch_6E58_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x3:
        {
// switch_6E58_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x4:
        {
// switch_6E58_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x5:
        {
// switch_6E58_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0718(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0990(var_40)
            OP_JUMP switch_6E58_case_default
        }
        case 0x6:
        {
// switch_6E58_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x7:
        {
// switch_6E58_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x8:
        {
// switch_6E58_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x9:
        {
// switch_6E58_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0xa:
        {
// switch_6E58_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0xb:
        {
// switch_6E58_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0xc:
        {
// switch_6E58_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0xd:
        {
// switch_6E58_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0xe:
        {
// switch_6E58_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0xf:
        {
// switch_6E58_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x10:
        {
// switch_6E58_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x11:
        {
// switch_6E58_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x12:
        {
// switch_6E58_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x13:
        {
// switch_6E58_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x14:
        {
// switch_6E58_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x15:
        {
// switch_6E58_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x16:
        {
// switch_6E58_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x17:
        {
// switch_6E58_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x18:
        {
// switch_6E58_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x19:
        {
// switch_6E58_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x1a:
        {
// switch_6E58_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x1b:
        {
// switch_6E58_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x1c:
        {
// switch_6E58_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x1d:
        {
// switch_6E58_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x1e:
        {
// switch_6E58_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x1f:
        {
// switch_6E58_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x20:
        {
// switch_6E58_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x21:
        {
// switch_6E58_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x22:
        {
// switch_6E58_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x23:
        {
// switch_6E58_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x24:
        {
// switch_6E58_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x25:
        {
// switch_6E58_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x26:
        {
// switch_6E58_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x27:
        {
// switch_6E58_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x28:
        {
// switch_6E58_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x29:
        {
// switch_6E58_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x2a:
        {
// switch_6E58_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x2b:
        {
// switch_6E58_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x2c:
        {
// switch_6E58_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x2d:
        {
// switch_6E58_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x2e:
        {
// switch_6E58_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x2f:
        {
// switch_6E58_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x30:
        {
// switch_6E58_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x31:
        {
// switch_6E58_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x32:
        {
// switch_6E58_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x33:
        {
// switch_6E58_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x34:
        {
// switch_6E58_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x35:
        {
// switch_6E58_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x36:
        {
// switch_6E58_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x37:
        {
// switch_6E58_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x38:
        {
// switch_6E58_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x39:
        {
// switch_6E58_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x3a:
        {
// switch_6E58_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x3b:
        {
// switch_6E58_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x3c:
        {
// switch_6E58_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x3d:
        {
// switch_6E58_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
        case 0x3e:
        {
// switch_6E58_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0718(var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
    }
}
// fun_7778
fun_7778() {
    pri = 30048;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7800
// lab_7800
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7980
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7970
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_78C0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_78C0
    pri = 0;
    OP_JUMP lab_78C8
// lab_7980
    pri = 0;
    return pri;
// lab_7970
    OP_JUMP lab_77F8
// lab_77F8
    OP_INC_P_S -936
// lab_78C0
    pri = 1;
// lab_78C8
    OP_JZER lab_7940
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7938
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7940
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7938
}
// fun_79A0
fun_79A0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7A38
    var_8 = 1;
    var_16 = 0;
    var_24 = 30968;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_0FD0()
// lab_7A38
    pri = arg_4;
    OP_JZER lab_7A70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0FF8(var_8)
// lab_7A70
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7AC8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7AC8
    pri = 0;
    OP_JUMP lab_7AD0
// lab_7AC8
    pri = 1;
// lab_7AD0
    OP_JZER lab_7B98
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_7B98
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_7B70
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0F10(var_32, var_24)
    OP_JUMP lab_7B98
// lab_7B98
    pri = arg_2;
    OP_JZER lab_7C70
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_7C40
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0CE8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0460(var_40)
    OP_JUMP lab_7C70
// lab_7C70
    pri = arg_3;
    OP_JZER lab_7CA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0F98(var_8)
// lab_7CA8
    pri = 0;
    return pri;
// lab_7C40
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0CE8(var_16, var_8)
// lab_7B70
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0F10(var_16, var_8)
}
// fun_7CB8
fun_7CB8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7778(var_24)
    pri = 0;
    return pri;
}
// fun_7D20
fun_7D20() {
    pri = g_mode;
    switch (pri) {
// switch_7DE0
        case default:
        {
// switch_7DE0_case_default
            pri = CommandNOP()
            OP_JUMP lab_7E28
// lab_7E28
            pri = 0;
            return pri;
        }
        case 0xb86c78221ae7cba2:
        {
// switch_7DE0_case_0xb86c78221ae7cba2
            var_8 = 0;
            pri = fun_8A28()
            OP_JUMP lab_7E28
        }
        case 0x0:
        {
// switch_7DE0_case_0x0
            var_8 = 0;
            pri = fun_7E38()
            OP_JUMP lab_7E28
        }
        case 0x545fc61e6886b516:
        {
// switch_7DE0_case_0x545fc61e6886b516
            var_8 = 0;
            pri = fun_8B68()
            OP_JUMP lab_7E28
        }
    }
}
// fun_7E38
fun_7E38() {
    pri = 0;
    return pri;
}
// fun_7E50
fun_7E50() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_79A0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7EA8
fun_7EA8() {
    pri = 0;
    return pri;
}
// fun_7EC0
fun_7EC0() {
    pri = 0;
    return pri;
}
// fun_7ED8
fun_7ED8() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4584031101965565952, 4665221239583801344, 4673123154774720512, -6742208472181701070
    var_24 = 48;
    pri = fun_0408(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 0;
    var_40 = 4631952216750555136;
    var_48 = 0;
    OP_PUSH5_C 4664803249243386020, 4657111901524302234, 4673121214136697487, 4665521560189812081, 4657108097214070129
    var_56 = 4673043124072113766;
    var_64 = 1;
    pri = EvCameraMove(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_0060(var_72)
    var_88 = 31016;
    var_96 = 8;
    var_104 = 16;
    pri = fun_0280(var_96, var_88)
    var_112 = 0;
    pri = fun_0350()
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    var_144 = 0;
    OP_PUSH2_C -6742208472181701070, 8802641224559852288
    var_152 = 48;
    pri = fun_0560(var_144, var_136, var_128, var_120, var_112, var_104)
    var_160 = 8802641224559852288;
    var_168 = 8;
    pri = fun_05B8(var_160)
    var_176 = 1;
    var_184 = 1;
    var_192 = -1;
    var_200 = -1;
    var_208 = 0;
    var_216 = 1;
    var_224 = -6742208472181701070;
    var_232 = 56;
    pri = fun_3710(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_240 = 0;
    var_248 = 3;
    var_256 = 0;
    var_264 = 100;
    var_272 = -1;
    OP_PUSH2_C -4786274425170248326, -6742208472181701070
    var_280 = 56;
    pri = fun_1840(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 1;
    var_296 = 8;
    pri = fun_1988(var_288)
    var_304 = 1;
    var_312 = 3;
    var_320 = 0;
    var_328 = 1;
    var_336 = -6742208472181701070;
    var_344 = 40;
    pri = fun_5A48(var_336, var_328, var_320, var_312, var_304)
    var_352 = -6742208472181701070;
    var_360 = 8;
    pri = fun_0790(var_352)
    var_368 = 0;
    var_376 = 0;
    var_384 = 1;
    var_392 = 0;
    var_400 = 0;
    var_408 = 0;
    var_416 = 48;
    pri = fun_1A78(var_408, var_400, var_392, var_384, var_376, var_368)
    OP_JNZ lab_8448
    var_424 = 1;
    var_432 = -1;
    var_440 = -1;
    var_448 = 3;
    var_456 = 0;
    var_464 = 20;
    var_472 = 8802641224559852288;
    var_480 = 56;
    pri = fun_1B30(var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_488 = 8802641224559852288;
    var_496 = 8;
    pri = fun_0790(var_488)
    var_504 = 0;
    var_512 = 3;
    var_520 = 0;
    var_528 = 100;
    var_536 = -1;
    OP_PUSH2_C -4786275524681876537, -6742208472181701070
    var_544 = 56;
    pri = fun_1840(var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_552 = 1;
    var_560 = 8;
    pri = fun_1988(var_552)
    var_568 = 0;
    pri = fun_1A48()
    var_576 = 1;
    var_584 = 0;
    var_592 = 4641240890982006784;
    var_600 = 0;
    var_608 = 0;
    OP_PUSH4_C 4665331190746578944, 4673206167902617600, 4611686018427387904, -6742208472181701070
    var_616 = 72;
    pri = fun_0498(var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_624 = -6742208472181701070;
    var_632 = 8;
    pri = fun_05B8(var_624)
    OP_PUSH2_C -6742208472181701070, 2171845302174236571
    pri = SetBamiriInfoToChara(var_632, var_624)
    var_640 = 3;
    var_648 = 30;
    pri = EvCameraEnd(var_648, var_640)
    pri = 0;
    return pri;
// lab_8448
    var_8 = 1;
    var_16 = -1;
    var_24 = -1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 19;
    var_56 = 8802641224559852288;
    var_64 = 56;
    pri = fun_1B30(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 8802641224559852288;
    var_80 = 8;
    pri = fun_0790(var_72)
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 30;
    pri = float(var_112)
    var_120 = pri;
    var_128 = -6742208472181701070;
    var_136 = 40;
    pri = fun_0510(var_128, var_120, var_112, var_104, var_96)
    var_144 = 0;
    var_152 = 3;
    var_160 = 0;
    var_168 = 100;
    var_176 = -1;
    OP_PUSH2_C -4786276624193504748, -6742208472181701070
    var_184 = 56;
    pri = fun_1840(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_192 = 1;
    var_200 = 8;
    pri = fun_1988(var_192)
    var_208 = 0;
    pri = fun_1A48()
    var_216 = 1;
    var_224 = 0;
    var_232 = 30968;
    var_240 = 8;
    var_248 = 32;
    pri = fun_02E0(var_240, var_232, var_224, var_216)
    var_256 = 0;
    pri = fun_0350()
    var_264 = -6742208472181701070;
    var_272 = 8;
    pri = fun_05B8(var_264)
    var_280 = 3;
    var_288 = 1;
    pri = EvCameraEnd(var_288, var_280)
    var_296 = 1;
    var_304 = 1;
    OP_PUSH4_C 4640537203540230144, 4665078303072190464, 4674332892443181056, 8802641224559852288
    var_312 = 48;
    pri = fun_0408(var_304, var_296, var_288, var_280, var_272, var_264)
    OP_PUSH2_C -6742208472181701070, 2171845302174236571
    pri = SetBamiriInfoToChara(var_312, var_304)
    var_320 = 0;
    var_328 = 0;
    var_336 = 0;
    var_344 = 0;
    OP_PUSH2_C -6742208472181701070, 8802641224559852288
    var_352 = 48;
    pri = fun_0560(var_344, var_336, var_328, var_320, var_312, var_304)
    var_360 = 0;
    var_368 = 0;
    var_376 = 0;
    var_384 = 0;
    OP_PUSH2_C 8802641224559852288, -6742208472181701070
    var_392 = 48;
    pri = fun_0560(var_384, var_376, var_368, var_360, var_352, var_344)
    var_400 = 8802641224559852288;
    var_408 = 8;
    pri = fun_05B8(var_400)
    var_416 = -6742208472181701070;
    var_424 = 8;
    pri = fun_05B8(var_416)
    var_432 = 31016;
    var_440 = 8;
    var_448 = 16;
    pri = fun_0280(var_440, var_432)
    var_456 = 0;
    pri = fun_0350()
    var_464 = 1;
    var_472 = 1;
    var_480 = -1;
    var_488 = -1;
    var_496 = 0;
    var_504 = 2;
    var_512 = -6742208472181701070;
    var_520 = 56;
    pri = fun_3710(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 0;
    var_536 = 3;
    var_544 = 0;
    var_552 = 100;
    var_560 = -1;
    OP_PUSH2_C -4786277723705132959, -6742208472181701070
    var_568 = 56;
    pri = fun_1840(var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_576 = 1;
    var_584 = 8;
    pri = fun_1988(var_576)
    var_592 = 0;
    pri = fun_1A48()
    var_600 = 1;
    var_608 = 3;
    var_616 = 0;
    var_624 = 2;
    var_632 = -6742208472181701070;
    var_640 = 40;
    pri = fun_5A48(var_632, var_624, var_616, var_608, var_600)
    var_648 = -6742208472181701070;
    var_656 = 8;
    pri = fun_0790(var_648)
    pri = 1;
    return pri;
    pri = 0;
    return pri;
}
// fun_8988
fun_8988() {
    pri = 0;
    return pri;
}
// fun_89A0
fun_89A0() {
    var_8 = 480;
    var_16 = 8;
    pri = fun_7CB8(var_8)
    pri = 0;
    return pri;
}
// fun_89D8
fun_89D8() {
    var_8 = 480;
    var_16 = 8;
    pri = fun_7CB8(var_8)
    pri = 0;
    return pri;
}
// fun_8A10
fun_8A10() {
    pri = 0;
    return pri;
}
// fun_8A28
fun_8A28() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_7E50()
    var_16 = 0;
    pri = fun_7EA8()
    var_24 = 0;
    pri = fun_7EC0()
    var_32 = 0;
    pri = fun_7ED8()
    OP_JZER lab_8AF8
    var_40 = 0;
    pri = fun_8988()
    var_48 = 0;
    pri = fun_89A0()
    OP_JUMP lab_8B28
// lab_8AF8
    var_8 = 0;
    pri = fun_8988()
    var_16 = 0;
    pri = fun_89D8()
// lab_8B28
    var_8 = 0;
    pri = fun_8A10()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_8B68
fun_8B68() {
    var_8 = 0;
    pri = fun_7EA8()
    var_16 = 0;
    pri = fun_89A0()
    pri = 0;
    return pri;
}
