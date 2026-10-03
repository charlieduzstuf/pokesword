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
    pri = ABKeyWait_()
    return pri;
}
// fun_0160
fun_0160() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0190
// lab_0190
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0290
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0210
    pri = 0;
    return pri;
// lab_0290
    pri = 0;
    return pri;
// lab_0210
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
    OP_JUMP lab_0188
// lab_0188
    OP_INC_P_S -8
}
// fun_02A8
fun_02A8() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_02F0
// lab_02F0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0330
    OP_JUMP lab_03A0
// lab_0330
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0370
    OP_JUMP lab_03A0
// lab_0370
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_02F0
// lab_03A0
    pri = 0;
    return pri;
}
// fun_03B8
fun_03B8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
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
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0460
fun_0460() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CF8(var_8)
    OP_JZER lab_04D8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D28(var_24)
    OP_JNZ lab_04D8
    pri = 0;
    return pri;
// lab_04D8
    OP_JUMP lab_04E8
// lab_04E8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0548
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04E8
    pri = 0;
    return pri;
}
// fun_0588
fun_0588() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_05C0
fun_05C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0600
fun_0600() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0638
fun_0638() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0680
    pri = 0;
    return pri;
// lab_0680
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_06C0
// lab_06C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CF8(var_8)
    OP_JNZ lab_0748
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0738
    pri = 0;
    return pri;
// lab_0748
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0790
    pri = 0;
    return pri;
// lab_0790
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_07F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0960(var_8)
    pri = 0;
    return pri;
// lab_07F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06C0
    pri = 0;
    return pri;
// lab_0738
    OP_JUMP lab_0790
}
// fun_0838
fun_0838() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0880
// lab_0880
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_08D8
    pri = 0;
    return pri;
// lab_08D8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0918
    pri = 0;
    return pri;
// lab_0918
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0880
    pri = 0;
    return pri;
}
// fun_0960
fun_0960() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0998
fun_0998() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09E8
    pri = 0;
    return pri;
// lab_09E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0CF8(var_8)
    OP_JZER lab_0B18
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A40
    OP_ZERO_P_S 64
// lab_0B18
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B50
    OP_CONST_S 64, 1
// lab_0B50
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B88
    OP_CONST_S 72, 1
// lab_0B88
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
// lab_0A40
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A68
    OP_ZERO_P_S 72
// lab_0A68
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
    OP_JUMP lab_0C28
// lab_0C28
    pri = 0;
    return pri;
}
// fun_0C38
fun_0C38() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C78
fun_0C78() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CB8
fun_0CB8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CF8
fun_0CF8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0D28
fun_0D28() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0D58
fun_0D58() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0D88
fun_0D88() {
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
// switch_13A0
        case default:
        {
// switch_13A0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_13E8
// lab_13E8
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
            OP_JNZ lab_1490
            var_88 = 0;
            pri = fun_1760()
// lab_1490
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_13A0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0F88
                case default:
                {
// switch_0F88_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1000
// lab_1000
                    OP_JUMP lab_13E8
                }
                case 0x0:
                {
// switch_0F88_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1000
                }
                case 0x1:
                {
// switch_0F88_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1000
                }
                case 0x2:
                {
// switch_0F88_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1000
                }
                case 0x3:
                {
// switch_0F88_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1000
                }
                case 0x4:
                {
// switch_0F88_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1000
                }
                case 0x5:
                {
// switch_0F88_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1000
                }
            }
        }
        case 0x65:
        {
// switch_13A0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1140
                case default:
                {
// switch_1140_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_11B8
// lab_11B8
                    OP_JUMP lab_13E8
                }
                case 0x0:
                {
// switch_1140_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_11B8
                }
                case 0x1:
                {
// switch_1140_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_11B8
                }
                case 0x2:
                {
// switch_1140_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_11B8
                }
                case 0x3:
                {
// switch_1140_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_11B8
                }
                case 0x4:
                {
// switch_1140_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_11B8
                }
                case 0x5:
                {
// switch_1140_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_11B8
                }
            }
        }
        case 0x66:
        {
// switch_13A0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_12F8
                case default:
                {
// switch_12F8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1370
// lab_1370
                    OP_JUMP lab_13E8
                }
                case 0x0:
                {
// switch_12F8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1370
                }
                case 0x1:
                {
// switch_12F8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1370
                }
                case 0x2:
                {
// switch_12F8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1370
                }
                case 0x3:
                {
// switch_12F8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1370
                }
                case 0x4:
                {
// switch_12F8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1370
                }
                case 0x5:
                {
// switch_12F8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1370
                }
            }
        }
    }
}
// fun_14A8
fun_14A8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0D88(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1510
fun_1510() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0600(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_15B8
    pri = 1;
    return pri;
// lab_15B8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1600
fun_1600() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1650
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1510(var_8)
    arg_2 = pri;
// lab_1650
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0D88(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16B0
fun_16B0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_14A8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1700
fun_1700() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_16B0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1760
fun_1760() {
    OP_JUMP lab_1778
// lab_1778
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_17B8
    pri = 0;
    return pri;
// lab_17B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1778
    pri = 0;
    return pri;
}
// fun_17F8
fun_17F8() {
    var_8 = 0;
    pri = fun_1760()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_18A8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_18A8
    pri = 0;
    return pri;
}
// fun_18B8
fun_18B8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_18E8
fun_18E8() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1920
fun_1920() {
    OP_JUMP lab_1938
// lab_1938
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1980
    OP_JUMP lab_19B0
    OP_JUMP lab_19A0
// lab_1980
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_19B0
    pri = 0;
    return pri;
// lab_19A0
    OP_JUMP lab_1938
}
// fun_19C0
fun_19C0() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_19F0
fun_19F0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A40
fun_1A40() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A90
fun_1A90() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AE0
fun_1AE0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B30
fun_1B30() {
    pri = arg_6;
    OP_JNZ lab_1B68
    var_8 = 0;
    pri = fun_0C38()
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
            pri = fun_0600(var_24, var_16)
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
            pri = fun_0160(var_16, var_8, var_0)
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
            pri = fun_0C78()
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_30D0_case_default
        }
        case 0x1a:
        {
// switch_30D0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05C0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0588(var_48, var_40)
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
            pri = fun_0998(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_30D0_case_default
        }
        case 0x1b:
        {
// switch_30D0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05C0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0588(var_48, var_40)
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
            pri = fun_0998(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_30D0_case_default
        }
        case 0x1c:
        {
// switch_30D0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05C0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0588(var_48, var_40)
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
            pri = fun_0998(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
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
    pri = fun_0C38()
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
            pri = fun_0600(var_528, var_520)
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
            pri = fun_0160(var_16, var_8, var_0)
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
            pri = fun_0600(var_24, var_16)
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
            pri = fun_0160(var_16, var_8, var_0)
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
            pri = fun_0C78()
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
            pri = fun_05C0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0960(var_40)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_0998(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
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
            pri = fun_05C0(var_24, var_16, var_8)
            OP_JUMP switch_5250_case_default
        }
    }
}
// fun_5A48
fun_5A48() {
    pri = arg_4;
    OP_JNZ lab_5A80
    var_8 = 0;
    pri = fun_0C38()
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
            pri = fun_0CF8(var_264)
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
                    pri = fun_0C78()
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
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_73C8_case_default
                }
                case 0x2:
                {
// switch_73C8_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_73C8_case_default
                }
                case 0x3:
                {
// switch_73C8_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
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
            pri = fun_0600(var_16, var_8)
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
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_76D8
// lab_7538
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_75A0
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_76D8
// lab_75A0
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0600(var_24, var_16)
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
            pri = fun_05C0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0960(var_40)
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
            pri = fun_05C0(var_24, var_16, var_8)
            OP_JUMP switch_6E58_case_default
        }
    }
}
// fun_7778
fun_7778() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7878
        case default:
        {
// switch_7878_case_default
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
// switch_7878_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7878_case_default
        }
        case 0x1:
        {
// switch_7878_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7878_case_default
        }
        case 0x2:
        {
// switch_7878_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7878_case_default
        }
        case 0x3:
        {
// switch_7878_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7878_case_default
        }
    }
}
// fun_7938
fun_7938() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7988
// lab_7988
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7A00
    OP_JUMP lab_7A30
// lab_7A00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7988
// lab_7A30
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7AB8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5A48(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0D58(var_56)
// lab_7AB8
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7B20
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0CB8(var_24, var_16)
// lab_7B20
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0CB8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7BE0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0638(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_03B8(var_88, var_80, var_72, var_64, var_56)
// lab_7BE0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7C20
    pri = 0;
    return pri;
// lab_7C20
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7D68
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0588(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_7D30
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_7D68
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0460(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0460(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0638(var_40)
    pri = 0;
    return pri;
// lab_7D30
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0CB8(var_16, var_8)
}
// fun_7DF0
fun_7DF0() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_7E88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0638(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_1B30(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_7E88
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_7FE0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_7F48
    var_24 = 30304;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_7F48
    pri = 1;
    OP_JUMP lab_7F50
// lab_7FE0
    pri = 0;
    return pri;
// lab_7F48
    pri = 0;
// lab_7F50
    OP_JZER lab_7FE0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0638(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_1B30(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_7FF0
fun_7FF0() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_7DF0(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8078(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8078
fun_8078() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8210(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_80E0
fun_80E0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8150
    OP_CONST_S -8, 1
// lab_8150
    pri = arg_0;
    OP_JNZ lab_8170
    OP_ZERO_P_S -8
// lab_8170
    pri = var_8;
    OP_JZER lab_81F8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_81F8
    pri = 0;
    return pri;
}
// fun_8210
fun_8210() {
    var_8 = 30408;
    var_16 = 8;
    pri = fun_18E8(var_8)
    var_24 = 0;
    pri = fun_1920()
    pri = arg_3;
    OP_JNZ lab_8330
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_82F8
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_83A0(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8320
// lab_8330
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8540(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_82F8
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8468(var_16, var_8)
// lab_8320
    OP_JUMP lab_8378
// lab_8378
    var_8 = 0;
    pri = fun_19C0()
    pri = 0;
    return pri;
}
// fun_83A0
fun_83A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8540(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8450
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8450
    pri = 0;
    return pri;
}
// fun_8468
fun_8468() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1A40(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1700(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_17F8(var_72)
    var_88 = 0;
    pri = fun_18B8()
    var_96 = 0;
    var_104 = 8;
    pri = fun_19F0(var_96)
    pri = 0;
    return pri;
}
// fun_8540
fun_8540() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8588
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8848(var_8)
// lab_8588
    pri = arg_4;
    OP_JNZ lab_85F0
    var_8 = 0;
    var_16 = 8;
    pri = fun_19F0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1A40(var_40, var_32, var_24)
// lab_85F0
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8690
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1A90(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1700(var_56, var_48, var_40)
    OP_JUMP lab_8780
// lab_8690
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8748
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8748
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8748
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1700(var_24, var_16, var_8)
// lab_8780
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_87C0
    var_8 = 0;
    var_16 = 8;
    pri = fun_02A8(var_8)
// lab_87C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_17F8(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8A50(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_80E0(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8848
fun_8848() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_88A8
    var_16 = 30568;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_88A8
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_89E8
        case default:
        {
// switch_89E8_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_89D8
            var_16 = 31112;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_89D8
            OP_JUMP lab_8A20
// lab_8A20
            var_8 = 31328;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_89E8_case_0x1
            var_8 = 30784;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8A20
        }
        case 0x2:
        {
// switch_89E8_case_0x2
            var_8 = 30912;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8A20
        }
    }
}
// fun_8A50
fun_8A50() {
    pri = arg_2;
    OP_JNZ lab_8B38
    var_8 = 0;
    var_16 = 8;
    pri = fun_19F0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1A40(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1AE0(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8B38
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1700(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_17F8(var_40)
    var_56 = 0;
    pri = fun_18B8()
    pri = 0;
    return pri;
}
// fun_8BB0
fun_8BB0() {
    pri = g_mode;
    switch (pri) {
// switch_8D88
        case default:
        {
// switch_8D88_case_default
            pri = CommandNOP()
            OP_JUMP lab_8E40
// lab_8E40
            pri = 0;
            return pri;
        }
        case 0xc5db831d1957ee54:
        {
// switch_8D88_case_0xc5db831d1957ee54
            var_8 = 0;
            pri = fun_A140()
            OP_JUMP lab_8E40
        }
        case 0xc5db861d1957f36d:
        {
// switch_8D88_case_0xc5db861d1957f36d
            var_8 = 0;
            pri = fun_A788()
            OP_JUMP lab_8E40
        }
        case 0xca9ac1af94d457db:
        {
// switch_8D88_case_0xca9ac1af94d457db
            var_8 = 0;
            pri = fun_C0A8()
            OP_JUMP lab_8E40
        }
        case 0xeeb1ae0ca8859a83:
        {
// switch_8D88_case_0xeeb1ae0ca8859a83
            var_8 = 0;
            pri = fun_BA60()
            OP_JUMP lab_8E40
        }
        case 0xeeb1af0ca8859c36:
        {
// switch_8D88_case_0xeeb1af0ca8859c36
            var_8 = 0;
            pri = fun_B418()
            OP_JUMP lab_8E40
        }
        case 0xf73e6159d1b002d8:
        {
// switch_8D88_case_0xf73e6159d1b002d8
            var_8 = 0;
            pri = fun_8E68()
            OP_JUMP lab_8E40
        }
        case 0xf73e6659d1b00b57:
        {
// switch_8D88_case_0xf73e6659d1b00b57
            var_8 = 0;
            pri = fun_ADD0()
            OP_JUMP lab_8E40
        }
        case 0xf73e6859d1b00ebd:
        {
// switch_8D88_case_0xf73e6859d1b00ebd
            var_8 = 0;
            pri = fun_94B0()
            OP_JUMP lab_8E40
        }
        case 0x0:
        {
// switch_8D88_case_0x0
            var_8 = 0;
            pri = fun_8E50()
            OP_JUMP lab_8E40
        }
        case 0x7550715988188c12:
        {
// switch_8D88_case_0x7550715988188c12
            var_8 = 0;
            pri = fun_9AF8()
            OP_JUMP lab_8E40
        }
    }
}
// fun_8E50
fun_8E50() {
    pri = 0;
    return pri;
}
// fun_8E68
fun_8E68() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 3268486953951029219;
    pri = FlagGet(var_16)
    OP_JNZ lab_8F00
    var_24 = var_8;
    var_32 = 8;
    pri = fun_8F38(var_24)
    OP_JUMP lab_8F20
// lab_8F00
    var_8 = var_8;
    var_16 = 8;
    pri = fun_9248(var_8)
// lab_8F20
    pri = 0;
    return pri;
}
// fun_8F38
fun_8F38() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7778(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1449579229867974191;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1600(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_17F8(var_128)
    var_144 = 0;
    pri = fun_18B8()
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = arg_0;
    var_184 = 32;
    pri = fun_7938(var_176, var_168, var_160, var_152)
    var_192 = 6;
    var_200 = 4;
    var_208 = 2;
    var_216 = 0;
    var_224 = 8;
    var_232 = 1;
    var_240 = 497;
    var_248 = arg_0;
    var_256 = 64;
    pri = fun_7FF0(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_264 = 1;
    var_272 = 1;
    var_280 = -1;
    var_288 = -1;
    var_296 = 0;
    var_304 = 9;
    var_312 = arg_0;
    var_320 = 56;
    pri = fun_3710(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = -1449580329379602402;
    var_376 = arg_0;
    var_384 = 56;
    pri = fun_1600(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 31512;
    var_400 = arg_0;
    var_408 = 16;
    pri = fun_0838(var_400, var_392)
    var_416 = 1;
    var_424 = 8;
    pri = fun_17F8(var_416)
    var_432 = 0;
    pri = fun_18B8()
    var_440 = 1;
    var_448 = 3;
    var_456 = 0;
    var_464 = 9;
    var_472 = arg_0;
    var_480 = 40;
    pri = fun_5A48(var_472, var_464, var_456, var_448, var_440)
    var_488 = arg_0;
    var_496 = 8;
    pri = fun_0638(var_488)
    var_504 = 3268486953951029219;
    pri = FlagSet(var_504)
    pri = 0;
    return pri;
}
// fun_9248
fun_9248() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8802641224559852288;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0408(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = arg_0;
    var_104 = 8802641224559852288;
    var_112 = 48;
    pri = fun_0408(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    var_160 = -1449580329379602402;
    var_168 = arg_0;
    var_176 = 56;
    pri = fun_1600(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = arg_0;
    var_192 = 8;
    pri = fun_0460(var_184)
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_0460(var_200)
    var_216 = 1;
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 0;
    var_256 = 9;
    var_264 = arg_0;
    var_272 = 56;
    pri = fun_3710(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 31664;
    var_288 = arg_0;
    var_296 = 16;
    pri = fun_0838(var_288, var_280)
    var_304 = 1;
    var_312 = 8;
    pri = fun_17F8(var_304)
    var_320 = 0;
    pri = fun_18B8()
    var_328 = 1;
    var_336 = 3;
    var_344 = 0;
    var_352 = 9;
    var_360 = arg_0;
    var_368 = 40;
    pri = fun_5A48(var_360, var_352, var_344, var_336, var_328)
    var_376 = arg_0;
    var_384 = 8;
    pri = fun_0638(var_376)
    pri = 0;
    return pri;
}
// fun_94B0
fun_94B0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = -5310617648806159866;
    pri = FlagGet(var_16)
    OP_JNZ lab_9548
    var_24 = var_8;
    var_32 = 8;
    pri = fun_9580(var_24)
    OP_JUMP lab_9568
// lab_9548
    var_8 = var_8;
    var_16 = 8;
    pri = fun_9890(var_8)
// lab_9568
    pri = 0;
    return pri;
}
// fun_9580
fun_9580() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7778(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1449581428891230613;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1600(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_17F8(var_128)
    var_144 = 0;
    pri = fun_18B8()
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = arg_0;
    var_184 = 32;
    pri = fun_7938(var_176, var_168, var_160, var_152)
    var_192 = 6;
    var_200 = 4;
    var_208 = 2;
    var_216 = 0;
    var_224 = 8;
    var_232 = 1;
    var_240 = 494;
    var_248 = arg_0;
    var_256 = 64;
    pri = fun_7FF0(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_264 = 1;
    var_272 = 1;
    var_280 = -1;
    var_288 = -1;
    var_296 = 0;
    var_304 = 8;
    var_312 = arg_0;
    var_320 = 56;
    pri = fun_3710(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = -1449582528402858824;
    var_376 = arg_0;
    var_384 = 56;
    pri = fun_1600(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 31816;
    var_400 = arg_0;
    var_408 = 16;
    pri = fun_0838(var_400, var_392)
    var_416 = 1;
    var_424 = 8;
    pri = fun_17F8(var_416)
    var_432 = 0;
    pri = fun_18B8()
    var_440 = 1;
    var_448 = 3;
    var_456 = 0;
    var_464 = 8;
    var_472 = arg_0;
    var_480 = 40;
    pri = fun_5A48(var_472, var_464, var_456, var_448, var_440)
    var_488 = arg_0;
    var_496 = 8;
    pri = fun_0638(var_488)
    var_504 = -5310617648806159866;
    pri = FlagSet(var_504)
    pri = 0;
    return pri;
}
// fun_9890
fun_9890() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8802641224559852288;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0408(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = arg_0;
    var_104 = 8802641224559852288;
    var_112 = 48;
    pri = fun_0408(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    var_160 = -1449582528402858824;
    var_168 = arg_0;
    var_176 = 56;
    pri = fun_1600(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = arg_0;
    var_192 = 8;
    pri = fun_0460(var_184)
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_0460(var_200)
    var_216 = 1;
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 0;
    var_256 = 8;
    var_264 = arg_0;
    var_272 = 56;
    pri = fun_3710(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 31992;
    var_288 = arg_0;
    var_296 = 16;
    pri = fun_0838(var_288, var_280)
    var_304 = 1;
    var_312 = 8;
    pri = fun_17F8(var_304)
    var_320 = 0;
    pri = fun_18B8()
    var_328 = 1;
    var_336 = 3;
    var_344 = 0;
    var_352 = 8;
    var_360 = arg_0;
    var_368 = 40;
    pri = fun_5A48(var_360, var_352, var_344, var_336, var_328)
    var_376 = arg_0;
    var_384 = 8;
    pri = fun_0638(var_376)
    pri = 0;
    return pri;
}
// fun_9AF8
fun_9AF8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = -3520149773016389011;
    pri = FlagGet(var_16)
    OP_JNZ lab_9B90
    var_24 = var_8;
    var_32 = 8;
    pri = fun_9BC8(var_24)
    OP_JUMP lab_9BB0
// lab_9B90
    var_8 = var_8;
    var_16 = 8;
    pri = fun_9ED8(var_8)
// lab_9BB0
    pri = 0;
    return pri;
}
// fun_9BC8
fun_9BC8() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7778(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1449583627914487035;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1600(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_17F8(var_128)
    var_144 = 0;
    pri = fun_18B8()
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = arg_0;
    var_184 = 32;
    pri = fun_7938(var_176, var_168, var_160, var_152)
    var_192 = 6;
    var_200 = 4;
    var_208 = 2;
    var_216 = 0;
    var_224 = 8;
    var_232 = 1;
    var_240 = 493;
    var_248 = arg_0;
    var_256 = 64;
    pri = fun_7FF0(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_264 = 1;
    var_272 = 1;
    var_280 = -1;
    var_288 = -1;
    var_296 = 0;
    var_304 = 3;
    var_312 = arg_0;
    var_320 = 56;
    pri = fun_3710(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = -1449584727426115246;
    var_376 = arg_0;
    var_384 = 56;
    pri = fun_1600(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 32168;
    var_400 = arg_0;
    var_408 = 16;
    pri = fun_0838(var_400, var_392)
    var_416 = 1;
    var_424 = 8;
    pri = fun_17F8(var_416)
    var_432 = 0;
    pri = fun_18B8()
    var_440 = 1;
    var_448 = 3;
    var_456 = 0;
    var_464 = 3;
    var_472 = arg_0;
    var_480 = 40;
    pri = fun_5A48(var_472, var_464, var_456, var_448, var_440)
    var_488 = arg_0;
    var_496 = 8;
    pri = fun_0638(var_488)
    var_504 = -3520149773016389011;
    pri = FlagSet(var_504)
    pri = 0;
    return pri;
}
// fun_9ED8
fun_9ED8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8802641224559852288;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0408(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = arg_0;
    var_104 = 8802641224559852288;
    var_112 = 48;
    pri = fun_0408(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    var_160 = -1449584727426115246;
    var_168 = arg_0;
    var_176 = 56;
    pri = fun_1600(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = arg_0;
    var_192 = 8;
    pri = fun_0460(var_184)
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_0460(var_200)
    var_216 = 1;
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 0;
    var_256 = 3;
    var_264 = arg_0;
    var_272 = 56;
    pri = fun_3710(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 32344;
    var_288 = arg_0;
    var_296 = 16;
    pri = fun_0838(var_288, var_280)
    var_304 = 1;
    var_312 = 3;
    var_320 = 0;
    var_328 = 3;
    var_336 = arg_0;
    var_344 = 40;
    pri = fun_5A48(var_336, var_328, var_320, var_312, var_304)
    var_352 = 1;
    var_360 = 8;
    pri = fun_17F8(var_352)
    var_368 = 0;
    pri = fun_18B8()
    var_376 = arg_0;
    var_384 = 8;
    pri = fun_0638(var_376)
    pri = 0;
    return pri;
}
// fun_A140
fun_A140() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 7869097909839905857;
    pri = FlagGet(var_16)
    OP_JNZ lab_A1D8
    var_24 = var_8;
    var_32 = 8;
    pri = fun_A210(var_24)
    OP_JUMP lab_A1F8
// lab_A1D8
    var_8 = var_8;
    var_16 = 8;
    pri = fun_A520(var_8)
// lab_A1F8
    pri = 0;
    return pri;
}
// fun_A210
fun_A210() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7778(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1450566591309918444;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1600(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_17F8(var_128)
    var_144 = 0;
    pri = fun_18B8()
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = arg_0;
    var_184 = 32;
    pri = fun_7938(var_176, var_168, var_160, var_152)
    var_192 = 6;
    var_200 = 4;
    var_208 = 2;
    var_216 = 0;
    var_224 = 8;
    var_232 = 1;
    var_240 = 495;
    var_248 = arg_0;
    var_256 = 64;
    pri = fun_7FF0(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_264 = 1;
    var_272 = 1;
    var_280 = -1;
    var_288 = -1;
    var_296 = 0;
    var_304 = 12;
    var_312 = arg_0;
    var_320 = 56;
    pri = fun_3710(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = -1450565491798290233;
    var_376 = arg_0;
    var_384 = 56;
    pri = fun_1600(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 32520;
    var_400 = arg_0;
    var_408 = 16;
    pri = fun_0838(var_400, var_392)
    var_416 = 1;
    var_424 = 8;
    pri = fun_17F8(var_416)
    var_432 = 0;
    pri = fun_18B8()
    var_440 = 1;
    var_448 = 3;
    var_456 = 0;
    var_464 = 12;
    var_472 = arg_0;
    var_480 = 40;
    pri = fun_5A48(var_472, var_464, var_456, var_448, var_440)
    var_488 = arg_0;
    var_496 = 8;
    pri = fun_0638(var_488)
    var_504 = 7869097909839905857;
    pri = FlagSet(var_504)
    pri = 0;
    return pri;
}
// fun_A520
fun_A520() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8802641224559852288;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0408(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = arg_0;
    var_104 = 8802641224559852288;
    var_112 = 48;
    pri = fun_0408(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    var_160 = -1450565491798290233;
    var_168 = arg_0;
    var_176 = 56;
    pri = fun_1600(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = arg_0;
    var_192 = 8;
    pri = fun_0460(var_184)
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_0460(var_200)
    var_216 = 1;
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 0;
    var_256 = 12;
    var_264 = arg_0;
    var_272 = 56;
    pri = fun_3710(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 32696;
    var_288 = arg_0;
    var_296 = 16;
    pri = fun_0838(var_288, var_280)
    var_304 = 1;
    var_312 = 8;
    pri = fun_17F8(var_304)
    var_320 = 0;
    pri = fun_18B8()
    var_328 = 1;
    var_336 = 3;
    var_344 = 0;
    var_352 = 12;
    var_360 = arg_0;
    var_368 = 40;
    pri = fun_5A48(var_360, var_352, var_344, var_336, var_328)
    var_376 = arg_0;
    var_384 = 8;
    pri = fun_0638(var_376)
    pri = 0;
    return pri;
}
// fun_A788
fun_A788() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 880592531986072620;
    pri = FlagGet(var_16)
    OP_JNZ lab_A820
    var_24 = var_8;
    var_32 = 8;
    pri = fun_A858(var_24)
    OP_JUMP lab_A840
// lab_A820
    var_8 = var_8;
    var_16 = 8;
    pri = fun_AB68(var_8)
// lab_A840
    pri = 0;
    return pri;
}
// fun_A858
fun_A858() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7778(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1450564392286662022;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1600(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_17F8(var_128)
    var_144 = 0;
    pri = fun_18B8()
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = arg_0;
    var_184 = 32;
    pri = fun_7938(var_176, var_168, var_160, var_152)
    var_192 = 6;
    var_200 = 4;
    var_208 = 2;
    var_216 = 0;
    var_224 = 8;
    var_232 = 1;
    var_240 = 495;
    var_248 = arg_0;
    var_256 = 64;
    pri = fun_7FF0(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_264 = 1;
    var_272 = 1;
    var_280 = -1;
    var_288 = -1;
    var_296 = 0;
    var_304 = 12;
    var_312 = arg_0;
    var_320 = 56;
    pri = fun_3710(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = -1450563292775033811;
    var_376 = arg_0;
    var_384 = 56;
    pri = fun_1600(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 32872;
    var_400 = arg_0;
    var_408 = 16;
    pri = fun_0838(var_400, var_392)
    var_416 = 1;
    var_424 = 8;
    pri = fun_17F8(var_416)
    var_432 = 0;
    pri = fun_18B8()
    var_440 = 1;
    var_448 = 3;
    var_456 = 0;
    var_464 = 12;
    var_472 = arg_0;
    var_480 = 40;
    pri = fun_5A48(var_472, var_464, var_456, var_448, var_440)
    var_488 = arg_0;
    var_496 = 8;
    pri = fun_0638(var_488)
    var_504 = 880592531986072620;
    pri = FlagSet(var_504)
    pri = 0;
    return pri;
}
// fun_AB68
fun_AB68() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8802641224559852288;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0408(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = arg_0;
    var_104 = 8802641224559852288;
    var_112 = 48;
    pri = fun_0408(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    var_160 = -1450563292775033811;
    var_168 = arg_0;
    var_176 = 56;
    pri = fun_1600(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = arg_0;
    var_192 = 8;
    pri = fun_0460(var_184)
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_0460(var_200)
    var_216 = 1;
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 0;
    var_256 = 12;
    var_264 = arg_0;
    var_272 = 56;
    pri = fun_3710(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 33048;
    var_288 = arg_0;
    var_296 = 16;
    pri = fun_0838(var_288, var_280)
    var_304 = 1;
    var_312 = 8;
    pri = fun_17F8(var_304)
    var_320 = 0;
    pri = fun_18B8()
    var_328 = 1;
    var_336 = 3;
    var_344 = 0;
    var_352 = 12;
    var_360 = arg_0;
    var_368 = 40;
    pri = fun_5A48(var_360, var_352, var_344, var_336, var_328)
    var_376 = arg_0;
    var_384 = 8;
    pri = fun_0638(var_376)
    pri = 0;
    return pri;
}
// fun_ADD0
fun_ADD0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = -6433677753202093200;
    pri = FlagGet(var_16)
    OP_JNZ lab_AE68
    var_24 = var_8;
    var_32 = 8;
    pri = fun_AEA0(var_24)
    OP_JUMP lab_AE88
// lab_AE68
    var_8 = var_8;
    var_16 = 8;
    pri = fun_B1B0(var_8)
// lab_AE88
    pri = 0;
    return pri;
}
// fun_AEA0
fun_AEA0() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7778(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1450570989356431288;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1600(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_17F8(var_128)
    var_144 = 0;
    pri = fun_18B8()
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = arg_0;
    var_184 = 32;
    pri = fun_7938(var_176, var_168, var_160, var_152)
    var_192 = 6;
    var_200 = 4;
    var_208 = 2;
    var_216 = 0;
    var_224 = 8;
    var_232 = 1;
    var_240 = 496;
    var_248 = arg_0;
    var_256 = 64;
    pri = fun_7FF0(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_264 = 1;
    var_272 = 1;
    var_280 = -1;
    var_288 = -1;
    var_296 = 0;
    var_304 = 4;
    var_312 = arg_0;
    var_320 = 56;
    pri = fun_3710(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = -1450569889844803077;
    var_376 = arg_0;
    var_384 = 56;
    pri = fun_1600(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 33224;
    var_400 = arg_0;
    var_408 = 16;
    pri = fun_0838(var_400, var_392)
    var_416 = 1;
    var_424 = 8;
    pri = fun_17F8(var_416)
    var_432 = 0;
    pri = fun_18B8()
    var_440 = 1;
    var_448 = 3;
    var_456 = 0;
    var_464 = 4;
    var_472 = arg_0;
    var_480 = 40;
    pri = fun_5A48(var_472, var_464, var_456, var_448, var_440)
    var_488 = arg_0;
    var_496 = 8;
    pri = fun_0638(var_488)
    var_504 = -6433677753202093200;
    pri = FlagSet(var_504)
    pri = 0;
    return pri;
}
// fun_B1B0
fun_B1B0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8802641224559852288;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0408(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = arg_0;
    var_104 = 8802641224559852288;
    var_112 = 48;
    pri = fun_0408(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    var_160 = -1450569889844803077;
    var_168 = arg_0;
    var_176 = 56;
    pri = fun_1600(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = arg_0;
    var_192 = 8;
    pri = fun_0460(var_184)
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_0460(var_200)
    var_216 = 1;
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 0;
    var_256 = 4;
    var_264 = arg_0;
    var_272 = 56;
    pri = fun_3710(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 33376;
    var_288 = arg_0;
    var_296 = 16;
    pri = fun_0838(var_288, var_280)
    var_304 = 1;
    var_312 = 8;
    pri = fun_17F8(var_304)
    var_320 = 0;
    pri = fun_18B8()
    var_328 = 1;
    var_336 = 3;
    var_344 = 0;
    var_352 = 4;
    var_360 = arg_0;
    var_368 = 40;
    pri = fun_5A48(var_360, var_352, var_344, var_336, var_328)
    var_376 = arg_0;
    var_384 = 8;
    pri = fun_0638(var_376)
    pri = 0;
    return pri;
}
// fun_B418
fun_B418() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 3305002997462274427;
    pri = FlagGet(var_16)
    OP_JNZ lab_B4B0
    var_24 = var_8;
    var_32 = 8;
    pri = fun_B4E8(var_24)
    OP_JUMP lab_B4D0
// lab_B4B0
    var_8 = var_8;
    var_16 = 8;
    pri = fun_B7F8(var_8)
// lab_B4D0
    pri = 0;
    return pri;
}
// fun_B4E8
fun_B4E8() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7778(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1450568790333174866;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1600(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_17F8(var_128)
    var_144 = 0;
    pri = fun_18B8()
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = arg_0;
    var_184 = 32;
    pri = fun_7938(var_176, var_168, var_160, var_152)
    var_192 = 6;
    var_200 = 4;
    var_208 = 2;
    var_216 = 0;
    var_224 = 8;
    var_232 = 1;
    var_240 = 498;
    var_248 = arg_0;
    var_256 = 64;
    pri = fun_7FF0(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_264 = 1;
    var_272 = 1;
    var_280 = -1;
    var_288 = -1;
    var_296 = 0;
    var_304 = 10;
    var_312 = arg_0;
    var_320 = 56;
    pri = fun_3710(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = -1450567690821546655;
    var_376 = arg_0;
    var_384 = 56;
    pri = fun_1600(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 33528;
    var_400 = arg_0;
    var_408 = 16;
    pri = fun_0838(var_400, var_392)
    var_416 = 1;
    var_424 = 8;
    pri = fun_17F8(var_416)
    var_432 = 0;
    pri = fun_18B8()
    var_440 = 1;
    var_448 = 3;
    var_456 = 0;
    var_464 = 10;
    var_472 = arg_0;
    var_480 = 40;
    pri = fun_5A48(var_472, var_464, var_456, var_448, var_440)
    var_488 = arg_0;
    var_496 = 8;
    pri = fun_0638(var_488)
    var_504 = 3305002997462274427;
    pri = FlagSet(var_504)
    pri = 0;
    return pri;
}
// fun_B7F8
fun_B7F8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8802641224559852288;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0408(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = arg_0;
    var_104 = 8802641224559852288;
    var_112 = 48;
    pri = fun_0408(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    var_160 = -1450567690821546655;
    var_168 = arg_0;
    var_176 = 56;
    pri = fun_1600(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = arg_0;
    var_192 = 8;
    pri = fun_0460(var_184)
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_0460(var_200)
    var_216 = 1;
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 0;
    var_256 = 10;
    var_264 = arg_0;
    var_272 = 56;
    pri = fun_3710(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 33664;
    var_288 = arg_0;
    var_296 = 16;
    pri = fun_0838(var_288, var_280)
    var_304 = 1;
    var_312 = 8;
    pri = fun_17F8(var_304)
    var_320 = 0;
    pri = fun_18B8()
    var_328 = 1;
    var_336 = 3;
    var_344 = 0;
    var_352 = 10;
    var_360 = arg_0;
    var_368 = 40;
    pri = fun_5A48(var_360, var_352, var_344, var_336, var_328)
    var_376 = arg_0;
    var_384 = 8;
    pri = fun_0638(var_376)
    pri = 0;
    return pri;
}
// fun_BA60
fun_BA60() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = -5043532554987955190;
    pri = FlagGet(var_16)
    OP_JNZ lab_BAF8
    var_24 = var_8;
    var_32 = 8;
    pri = fun_BB30(var_24)
    OP_JUMP lab_BB18
// lab_BAF8
    var_8 = var_8;
    var_16 = 8;
    pri = fun_BE40(var_8)
// lab_BB18
    pri = 0;
    return pri;
}
// fun_BB30
fun_BB30() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7778(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1450575387402944132;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1600(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_17F8(var_128)
    var_144 = 0;
    pri = fun_18B8()
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = arg_0;
    var_184 = 32;
    pri = fun_7938(var_176, var_168, var_160, var_152)
    var_192 = 6;
    var_200 = 4;
    var_208 = 2;
    var_216 = 0;
    var_224 = 8;
    var_232 = 1;
    var_240 = 498;
    var_248 = arg_0;
    var_256 = 64;
    pri = fun_7FF0(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_264 = 1;
    var_272 = 1;
    var_280 = -1;
    var_288 = -1;
    var_296 = 0;
    var_304 = 10;
    var_312 = arg_0;
    var_320 = 56;
    pri = fun_3710(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = -1450574287891315921;
    var_376 = arg_0;
    var_384 = 56;
    pri = fun_1600(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 33800;
    var_400 = arg_0;
    var_408 = 16;
    pri = fun_0838(var_400, var_392)
    var_416 = 1;
    var_424 = 8;
    pri = fun_17F8(var_416)
    var_432 = 0;
    pri = fun_18B8()
    var_440 = 1;
    var_448 = 3;
    var_456 = 0;
    var_464 = 10;
    var_472 = arg_0;
    var_480 = 40;
    pri = fun_5A48(var_472, var_464, var_456, var_448, var_440)
    var_488 = arg_0;
    var_496 = 8;
    pri = fun_0638(var_488)
    var_504 = -5043532554987955190;
    pri = FlagSet(var_504)
    pri = 0;
    return pri;
}
// fun_BE40
fun_BE40() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8802641224559852288;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0408(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = arg_0;
    var_104 = 8802641224559852288;
    var_112 = 48;
    pri = fun_0408(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    var_160 = -1450574287891315921;
    var_168 = arg_0;
    var_176 = 56;
    pri = fun_1600(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = arg_0;
    var_192 = 8;
    pri = fun_0460(var_184)
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_0460(var_200)
    var_216 = 1;
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 0;
    var_256 = 10;
    var_264 = arg_0;
    var_272 = 56;
    pri = fun_3710(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 33936;
    var_288 = arg_0;
    var_296 = 16;
    pri = fun_0838(var_288, var_280)
    var_304 = 1;
    var_312 = 8;
    pri = fun_17F8(var_304)
    var_320 = 0;
    pri = fun_18B8()
    var_328 = 1;
    var_336 = 3;
    var_344 = 0;
    var_352 = 10;
    var_360 = arg_0;
    var_368 = 40;
    pri = fun_5A48(var_360, var_352, var_344, var_336, var_328)
    var_376 = arg_0;
    var_384 = 8;
    pri = fun_0638(var_376)
    pri = 0;
    return pri;
}
// fun_C0A8
fun_C0A8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 2706739599942194447;
    pri = FlagGet(var_16)
    OP_JNZ lab_C140
    var_24 = var_8;
    var_32 = 8;
    pri = fun_C178(var_24)
    OP_JUMP lab_C160
// lab_C140
    var_8 = var_8;
    var_16 = 8;
    pri = fun_C488(var_8)
// lab_C160
    pri = 0;
    return pri;
}
// fun_C178
fun_C178() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7778(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = -1447626497216649905;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1600(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_17F8(var_128)
    var_144 = 0;
    pri = fun_18B8()
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = arg_0;
    var_184 = 32;
    pri = fun_7938(var_176, var_168, var_160, var_152)
    var_192 = 6;
    var_200 = 4;
    var_208 = 2;
    var_216 = 0;
    var_224 = 8;
    var_232 = 1;
    var_240 = 576;
    var_248 = arg_0;
    var_256 = 64;
    pri = fun_7FF0(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_264 = 1;
    var_272 = 1;
    var_280 = -1;
    var_288 = -1;
    var_296 = 0;
    var_304 = 49;
    var_312 = arg_0;
    var_320 = 56;
    pri = fun_3710(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 0;
    var_336 = 3;
    var_344 = 0;
    var_352 = 100;
    var_360 = -1;
    var_368 = -1447627596728278116;
    var_376 = arg_0;
    var_384 = 56;
    pri = fun_1600(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 34072;
    var_400 = arg_0;
    var_408 = 16;
    pri = fun_0838(var_400, var_392)
    var_416 = 1;
    var_424 = 8;
    pri = fun_17F8(var_416)
    var_432 = 0;
    pri = fun_18B8()
    var_440 = 1;
    var_448 = 3;
    var_456 = 0;
    var_464 = 49;
    var_472 = arg_0;
    var_480 = 40;
    pri = fun_5A48(var_472, var_464, var_456, var_448, var_440)
    var_488 = arg_0;
    var_496 = 8;
    pri = fun_0638(var_488)
    var_504 = 2706739599942194447;
    pri = FlagSet(var_504)
    pri = 0;
    return pri;
}
// fun_C488
fun_C488() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8802641224559852288;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0408(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = arg_0;
    var_104 = 8802641224559852288;
    var_112 = 48;
    pri = fun_0408(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    var_160 = -1447627596728278116;
    var_168 = arg_0;
    var_176 = 56;
    pri = fun_1600(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = arg_0;
    var_192 = 8;
    pri = fun_0460(var_184)
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_0460(var_200)
    var_216 = 1;
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 0;
    var_256 = 49;
    var_264 = arg_0;
    var_272 = 56;
    pri = fun_3710(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 34224;
    var_288 = arg_0;
    var_296 = 16;
    pri = fun_0838(var_288, var_280)
    var_304 = 1;
    var_312 = 8;
    pri = fun_17F8(var_304)
    var_320 = 0;
    pri = fun_18B8()
    var_328 = 1;
    var_336 = 3;
    var_344 = 0;
    var_352 = 49;
    var_360 = arg_0;
    var_368 = 40;
    pri = fun_5A48(var_360, var_352, var_344, var_336, var_328)
    var_376 = arg_0;
    var_384 = 8;
    pri = fun_0638(var_376)
    pri = 0;
    return pri;
}
