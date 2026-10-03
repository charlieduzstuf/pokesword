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
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_03E8
fun_03E8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0420
// lab_0420
    var_8 = 0;
    pri = fun_0568()
    OP_JNZ lab_0458
    OP_JUMP lab_0488
// lab_0458
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0420
// lab_0488
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_04B8
// lab_04B8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_04F8
    pri = 0;
    return pri;
// lab_04F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04B8
    pri = 0;
    return pri;
}
// fun_0538
fun_0538() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0568
fun_0568() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0590
fun_0590() {
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
// fun_0608
fun_0608() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0658
fun_0658() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06B0
fun_06B0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E20(var_8)
    OP_JZER lab_0728
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0E50(var_24)
    OP_JNZ lab_0728
    pri = 0;
    return pri;
// lab_0728
    OP_JUMP lab_0738
// lab_0738
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0798
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0798
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0738
    pri = 0;
    return pri;
}
// fun_07D8
fun_07D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0810
fun_0810() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0850
fun_0850() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0888
fun_0888() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_08D0
    pri = 0;
    return pri;
// lab_08D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0910
// lab_0910
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E20(var_8)
    OP_JNZ lab_0998
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0988
    pri = 0;
    return pri;
// lab_0998
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_09E0
    pri = 0;
    return pri;
// lab_09E0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0A40
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A88(var_8)
    pri = 0;
    return pri;
// lab_0A40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0910
    pri = 0;
    return pri;
// lab_0988
    OP_JUMP lab_09E0
}
// fun_0A88
fun_0A88() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0AC0
fun_0AC0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0B10
    pri = 0;
    return pri;
// lab_0B10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E20(var_8)
    OP_JZER lab_0C40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B68
    OP_ZERO_P_S 64
// lab_0C40
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C78
    OP_CONST_S 64, 1
// lab_0C78
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0CB0
    OP_CONST_S 72, 1
// lab_0CB0
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
// lab_0B68
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B90
    OP_ZERO_P_S 72
// lab_0B90
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
    OP_JUMP lab_0D50
// lab_0D50
    pri = 0;
    return pri;
}
// fun_0D60
fun_0D60() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DA0
fun_0DA0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0DE0
fun_0DE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E20
fun_0E20() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0E50
fun_0E50() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0E80
fun_0E80() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0EB0
fun_0EB0() {
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
// switch_14C8
        case default:
        {
// switch_14C8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1510
// lab_1510
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
            OP_JNZ lab_15B8
            var_88 = 0;
            pri = fun_1888()
// lab_15B8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_14C8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_10B0
                case default:
                {
// switch_10B0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1128
// lab_1128
                    OP_JUMP lab_1510
                }
                case 0x0:
                {
// switch_10B0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1128
                }
                case 0x1:
                {
// switch_10B0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1128
                }
                case 0x2:
                {
// switch_10B0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1128
                }
                case 0x3:
                {
// switch_10B0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1128
                }
                case 0x4:
                {
// switch_10B0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1128
                }
                case 0x5:
                {
// switch_10B0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1128
                }
            }
        }
        case 0x65:
        {
// switch_14C8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1268
                case default:
                {
// switch_1268_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_12E0
// lab_12E0
                    OP_JUMP lab_1510
                }
                case 0x0:
                {
// switch_1268_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_12E0
                }
                case 0x1:
                {
// switch_1268_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_12E0
                }
                case 0x2:
                {
// switch_1268_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_12E0
                }
                case 0x3:
                {
// switch_1268_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_12E0
                }
                case 0x4:
                {
// switch_1268_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_12E0
                }
                case 0x5:
                {
// switch_1268_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_12E0
                }
            }
        }
        case 0x66:
        {
// switch_14C8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1420
                case default:
                {
// switch_1420_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1498
// lab_1498
                    OP_JUMP lab_1510
                }
                case 0x0:
                {
// switch_1420_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1498
                }
                case 0x1:
                {
// switch_1420_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1498
                }
                case 0x2:
                {
// switch_1420_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1498
                }
                case 0x3:
                {
// switch_1420_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1498
                }
                case 0x4:
                {
// switch_1420_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1498
                }
                case 0x5:
                {
// switch_1420_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1498
                }
            }
        }
    }
}
// fun_15D0
fun_15D0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0EB0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1638
fun_1638() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0850(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_16E0
    pri = 1;
    return pri;
// lab_16E0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1728
fun_1728() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1778
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1638(var_8)
    arg_2 = pri;
// lab_1778
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0EB0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17D8
fun_17D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_15D0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1828
fun_1828() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_17D8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1888
fun_1888() {
    OP_JUMP lab_18A0
// lab_18A0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_18E0
    pri = 0;
    return pri;
// lab_18E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_18A0
    pri = 0;
    return pri;
}
// fun_1920
fun_1920() {
    var_8 = 0;
    pri = fun_1888()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_19D0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_19D0
    pri = 0;
    return pri;
}
// fun_19E0
fun_19E0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1A10
fun_1A10() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1A48
fun_1A48() {
    OP_JUMP lab_1A60
// lab_1A60
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1AA8
    OP_JUMP lab_1AD8
    OP_JUMP lab_1AC8
// lab_1AA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1AD8
    pri = 0;
    return pri;
// lab_1AC8
    OP_JUMP lab_1A60
}
// fun_1AE8
fun_1AE8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1B18
fun_1B18() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B68
fun_1B68() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BB8
fun_1BB8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C08
fun_1C08() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C58
fun_1C58() {
    pri = arg_6;
    OP_JNZ lab_1C90
    var_8 = 0;
    pri = fun_0D60()
// lab_1C90
    pri = arg_1;
    switch (pri) {
// switch_31F8
        case default:
        {
// switch_31F8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3548
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3548
            pri = 1;
            OP_JUMP lab_3550
// lab_3548
            pri = 0;
// lab_3550
            OP_JZER lab_36A8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0850(var_24, var_16)
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
            OP_JUMP lab_3708
// lab_36A8
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
// lab_3708
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3768
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_37C8
// lab_3768
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_37C8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_37C8
            pri = arg_2;
            OP_JZER lab_3808
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3808
            var_8 = 0;
            pri = fun_0DA0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_31F8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x1:
        {
// switch_31F8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x2:
        {
// switch_31F8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x3:
        {
// switch_31F8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x4:
        {
// switch_31F8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x5:
        {
// switch_31F8_case_0x5
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F8_case_default
        }
        case 0x6:
        {
// switch_31F8_case_0x6
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F8_case_default
        }
        case 0x7:
        {
// switch_31F8_case_0x7
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F8_case_default
        }
        case 0x8:
        {
// switch_31F8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x9:
        {
// switch_31F8_case_0x9
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F8_case_default
        }
        case 0xa:
        {
// switch_31F8_case_0xa
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F8_case_default
        }
        case 0xb:
        {
// switch_31F8_case_0xb
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F8_case_default
        }
        case 0xc:
        {
// switch_31F8_case_0xc
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F8_case_default
        }
        case 0xd:
        {
// switch_31F8_case_0xd
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F8_case_default
        }
        case 0xe:
        {
// switch_31F8_case_0xe
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F8_case_default
        }
        case 0xf:
        {
// switch_31F8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x10:
        {
// switch_31F8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x11:
        {
// switch_31F8_case_0x11
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F8_case_default
        }
        case 0x12:
        {
// switch_31F8_case_0x12
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F8_case_default
        }
        case 0x13:
        {
// switch_31F8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x14:
        {
// switch_31F8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x15:
        {
// switch_31F8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x16:
        {
// switch_31F8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x17:
        {
// switch_31F8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x18:
        {
// switch_31F8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x19:
        {
// switch_31F8_case_0x19
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31F8_case_default
        }
        case 0x1a:
        {
// switch_31F8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0810(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_07D8(var_48, var_40)
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
            pri = fun_0AC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31F8_case_default
        }
        case 0x1b:
        {
// switch_31F8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0810(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_07D8(var_48, var_40)
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
            pri = fun_0AC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31F8_case_default
        }
        case 0x1c:
        {
// switch_31F8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0810(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_07D8(var_48, var_40)
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
            pri = fun_0AC0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31F8_case_default
        }
        case 0x1d:
        {
// switch_31F8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x1e:
        {
// switch_31F8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x1f:
        {
// switch_31F8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x20:
        {
// switch_31F8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x21:
        {
// switch_31F8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x22:
        {
// switch_31F8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x23:
        {
// switch_31F8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x24:
        {
// switch_31F8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x25:
        {
// switch_31F8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x26:
        {
// switch_31F8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x27:
        {
// switch_31F8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x28:
        {
// switch_31F8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
        case 0x29:
        {
// switch_31F8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31F8_case_default
        }
    }
}
// fun_3838
fun_3838() {
    pri = arg_5;
    OP_JNZ lab_3870
    var_8 = 0;
    pri = fun_0D60()
// lab_3870
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_38C0
    OP_CONST_S -8, -1
// lab_38C0
    pri = arg_1;
    switch (pri) {
// switch_5378
        case default:
        {
// switch_5378_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5820
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0850(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5820
            pri = 1;
            OP_JUMP lab_5828
// lab_5820
            pri = 0;
// lab_5828
            OP_JZER lab_5878
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5AD0
// lab_5878
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_58E0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_58E0
            pri = 1;
            OP_JUMP lab_58E8
// lab_58E0
            pri = 0;
// lab_58E8
            OP_JZER lab_5A70
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0850(var_24, var_16)
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
            OP_JUMP lab_5AD0
// lab_5A70
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
// lab_5AD0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5B40
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5B40
            var_8 = 0;
            pri = fun_0DA0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5378_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x1:
        {
// switch_5378_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x2:
        {
// switch_5378_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x3:
        {
// switch_5378_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x4:
        {
// switch_5378_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x5:
        {
// switch_5378_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0810(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0A88(var_40)
            OP_JUMP switch_5378_case_default
        }
        case 0x6:
        {
// switch_5378_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x7:
        {
// switch_5378_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x8:
        {
// switch_5378_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x9:
        {
// switch_5378_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0xa:
        {
// switch_5378_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0xb:
        {
// switch_5378_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0xc:
        {
// switch_5378_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0xd:
        {
// switch_5378_case_0xd
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0xe:
        {
// switch_5378_case_0xe
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0xf:
        {
// switch_5378_case_0xf
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x10:
        {
// switch_5378_case_0x10
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x11:
        {
// switch_5378_case_0x11
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x12:
        {
// switch_5378_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x13:
        {
// switch_5378_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x14:
        {
// switch_5378_case_0x14
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x15:
        {
// switch_5378_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x16:
        {
// switch_5378_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x17:
        {
// switch_5378_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x18:
        {
// switch_5378_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x19:
        {
// switch_5378_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x1a:
        {
// switch_5378_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x1b:
        {
// switch_5378_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x1c:
        {
// switch_5378_case_0x1c
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x1d:
        {
// switch_5378_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x1e:
        {
// switch_5378_case_0x1e
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x1f:
        {
// switch_5378_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x20:
        {
// switch_5378_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x21:
        {
// switch_5378_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x22:
        {
// switch_5378_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x23:
        {
// switch_5378_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x24:
        {
// switch_5378_case_0x24
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x25:
        {
// switch_5378_case_0x25
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x26:
        {
// switch_5378_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x27:
        {
// switch_5378_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x28:
        {
// switch_5378_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x29:
        {
// switch_5378_case_0x29
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x2a:
        {
// switch_5378_case_0x2a
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x2b:
        {
// switch_5378_case_0x2b
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x2c:
        {
// switch_5378_case_0x2c
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x2d:
        {
// switch_5378_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x2e:
        {
// switch_5378_case_0x2e
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x2f:
        {
// switch_5378_case_0x2f
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x30:
        {
// switch_5378_case_0x30
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x31:
        {
// switch_5378_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x32:
        {
// switch_5378_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x33:
        {
// switch_5378_case_0x33
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x34:
        {
// switch_5378_case_0x34
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x35:
        {
// switch_5378_case_0x35
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x36:
        {
// switch_5378_case_0x36
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x37:
        {
// switch_5378_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x38:
        {
// switch_5378_case_0x38
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
            pri = fun_0AC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5378_case_default
        }
        case 0x39:
        {
// switch_5378_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x3a:
        {
// switch_5378_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x3b:
        {
// switch_5378_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x3c:
        {
// switch_5378_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x3d:
        {
// switch_5378_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
        case 0x3e:
        {
// switch_5378_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0810(var_24, var_16, var_8)
            OP_JUMP switch_5378_case_default
        }
    }
}
// fun_5B70
fun_5B70() {
    pri = arg_4;
    OP_JNZ lab_5BA8
    var_8 = 0;
    pri = fun_0D60()
// lab_5BA8
    pri = arg_1;
    switch (pri) {
// switch_6F80
        case default:
        {
// switch_6F80_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0E20(var_264)
            OP_JZER lab_7548
            pri = arg_3;
            switch (pri) {
// switch_74F0
                case default:
                {
// switch_74F0_case_default
                    OP_JUMP lab_7800
// lab_7800
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7870
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7870
                    var_8 = 0;
                    pri = fun_0DA0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_74F0_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_74F0_case_default
                }
                case 0x2:
                {
// switch_74F0_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_74F0_case_default
                }
                case 0x3:
                {
// switch_74F0_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_74F0_case_default
                }
            }
// lab_7548
            pri = arg_1;
            OP_JZER lab_7598
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7598
            pri = 0;
            OP_JUMP lab_75A0
// lab_7598
            pri = 1;
// lab_75A0
            OP_JZER lab_7608
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0850(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7608
            pri = 1;
            OP_JUMP lab_7610
// lab_7608
            pri = 0;
// lab_7610
            OP_JZER lab_7660
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7800
// lab_7660
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_76C8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7800
// lab_76C8
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0850(var_24, var_16)
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
// switch_6F80_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x1:
        {
// switch_6F80_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x2:
        {
// switch_6F80_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x3:
        {
// switch_6F80_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x4:
        {
// switch_6F80_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x5:
        {
// switch_6F80_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0810(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0A88(var_40)
            OP_JUMP switch_6F80_case_default
        }
        case 0x6:
        {
// switch_6F80_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x7:
        {
// switch_6F80_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x8:
        {
// switch_6F80_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x9:
        {
// switch_6F80_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0xa:
        {
// switch_6F80_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0xb:
        {
// switch_6F80_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0xc:
        {
// switch_6F80_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0xd:
        {
// switch_6F80_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0xe:
        {
// switch_6F80_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0xf:
        {
// switch_6F80_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x10:
        {
// switch_6F80_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x11:
        {
// switch_6F80_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x12:
        {
// switch_6F80_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x13:
        {
// switch_6F80_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x14:
        {
// switch_6F80_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x15:
        {
// switch_6F80_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x16:
        {
// switch_6F80_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x17:
        {
// switch_6F80_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x18:
        {
// switch_6F80_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x19:
        {
// switch_6F80_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x1a:
        {
// switch_6F80_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x1b:
        {
// switch_6F80_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x1c:
        {
// switch_6F80_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x1d:
        {
// switch_6F80_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x1e:
        {
// switch_6F80_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x1f:
        {
// switch_6F80_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x20:
        {
// switch_6F80_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x21:
        {
// switch_6F80_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x22:
        {
// switch_6F80_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x23:
        {
// switch_6F80_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x24:
        {
// switch_6F80_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x25:
        {
// switch_6F80_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x26:
        {
// switch_6F80_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x27:
        {
// switch_6F80_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x28:
        {
// switch_6F80_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x29:
        {
// switch_6F80_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x2a:
        {
// switch_6F80_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x2b:
        {
// switch_6F80_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x2c:
        {
// switch_6F80_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x2d:
        {
// switch_6F80_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x2e:
        {
// switch_6F80_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x2f:
        {
// switch_6F80_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x30:
        {
// switch_6F80_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x31:
        {
// switch_6F80_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x32:
        {
// switch_6F80_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x33:
        {
// switch_6F80_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x34:
        {
// switch_6F80_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x35:
        {
// switch_6F80_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x36:
        {
// switch_6F80_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x37:
        {
// switch_6F80_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x38:
        {
// switch_6F80_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x39:
        {
// switch_6F80_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x3a:
        {
// switch_6F80_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x3b:
        {
// switch_6F80_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x3c:
        {
// switch_6F80_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x3d:
        {
// switch_6F80_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
        case 0x3e:
        {
// switch_6F80_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0810(var_24, var_16, var_8)
            OP_JUMP switch_6F80_case_default
        }
    }
}
// fun_78A0
fun_78A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_7AB0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30048;
    OP_ADDR_ALT -256
    OP_MOVS 56
    pri = 0;
    OP_ADDR_ALT -384
    OP_FILL 128
    OP_PUSH_P_ADR -384
    pri = arg_1;
    OP_ADD_P_C 1
    var_416 = pri;
    pri = NumericToString(var_416, var_408)
    OP_PUSH_P_ADR -384
    OP_PUSH_P_ADR -384
    var_424 = 30104;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30120;
    OP_PUSH_P_ADR -384
    pri = ConcatString(var_432, var_424, var_416)
    OP_PUSH_P_ADR -256
    OP_PUSH_P_ADR -384
    OP_PUSH_P_ADR -256
    pri = ConcatString(var_432, var_424, var_416)
    var_440 = 0;
    OP_PUSH_P_ADR -256
    var_448 = arg_0;
    pri = AddParallelCommandMonitorState_(var_448, var_440, var_432)
    pri = arg_2;
    OP_JZER lab_7A98
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_7A98
    pri = 0;
    return pri;
}
// fun_7AB0
fun_7AB0() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0810(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7AF8
fun_7AF8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7BF8
        case default:
        {
// switch_7BF8_case_default
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
// switch_7BF8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7BF8_case_default
        }
        case 0x1:
        {
// switch_7BF8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7BF8_case_default
        }
        case 0x2:
        {
// switch_7BF8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7BF8_case_default
        }
        case 0x3:
        {
// switch_7BF8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7BF8_case_default
        }
    }
}
// fun_7CB8
fun_7CB8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7D08
// lab_7D08
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30272;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7D80
    OP_JUMP lab_7DB0
// lab_7D80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7D08
// lab_7DB0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7E38
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5B70(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0E80(var_56)
// lab_7E38
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7EA0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0DE0(var_24, var_16)
// lab_7EA0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0DE0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7F60
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0888(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0608(var_88, var_80, var_72, var_64, var_56)
// lab_7F60
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7FA0
    pri = 0;
    return pri;
// lab_7FA0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_80E8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30392;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_07D8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_80B0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_80E8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06B0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_06B0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0888(var_40)
    pri = 0;
    return pri;
// lab_80B0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0DE0(var_16, var_8)
}
// fun_8170
fun_8170() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8208
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0888(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_1C58(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8208
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8360
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_82C8
    var_24 = 30528;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_82C8
    pri = 1;
    OP_JUMP lab_82D0
// lab_8360
    pri = 0;
    return pri;
// lab_82C8
    pri = 0;
// lab_82D0
    OP_JZER lab_8360
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0888(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_1C58(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8370
fun_8370() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8170(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_83F8(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_83F8
fun_83F8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8590(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8460
fun_8460() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_84D0
    OP_CONST_S -8, 1
// lab_84D0
    pri = arg_0;
    OP_JNZ lab_84F0
    OP_ZERO_P_S -8
// lab_84F0
    pri = var_8;
    OP_JZER lab_8578
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8578
    pri = 0;
    return pri;
}
// fun_8590
fun_8590() {
    var_8 = 30632;
    var_16 = 8;
    pri = fun_1A10(var_8)
    var_24 = 0;
    pri = fun_1A48()
    pri = arg_3;
    OP_JNZ lab_86B0
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8678
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8720(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_86A0
// lab_86B0
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_88C0(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8678
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_87E8(var_16, var_8)
// lab_86A0
    OP_JUMP lab_86F8
// lab_86F8
    var_8 = 0;
    pri = fun_1AE8()
    pri = 0;
    return pri;
}
// fun_8720
fun_8720() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_88C0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_87D0
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_87D0
    pri = 0;
    return pri;
}
// fun_87E8
fun_87E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1B68(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1828(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1920(var_72)
    var_88 = 0;
    pri = fun_19E0()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1B18(var_96)
    pri = 0;
    return pri;
}
// fun_88C0
fun_88C0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8908
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8BC8(var_8)
// lab_8908
    pri = arg_4;
    OP_JNZ lab_8970
    var_8 = 0;
    var_16 = 8;
    pri = fun_1B18(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1B68(var_40, var_32, var_24)
// lab_8970
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8A10
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1BB8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1828(var_56, var_48, var_40)
    OP_JUMP lab_8B00
// lab_8A10
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8AC8
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8AC8
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8AC8
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1828(var_24, var_16, var_8)
// lab_8B00
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8B40
    var_8 = 0;
    var_16 = 8;
    pri = fun_02A8(var_8)
// lab_8B40
    var_8 = 1;
    var_16 = 8;
    pri = fun_1920(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8DD0(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8460(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8BC8
fun_8BC8() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8C28
    var_16 = 30792;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8C28
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8D68
        case default:
        {
// switch_8D68_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8D58
            var_16 = 31336;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8D58
            OP_JUMP lab_8DA0
// lab_8DA0
            var_8 = 31552;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8D68_case_0x1
            var_8 = 31008;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8DA0
        }
        case 0x2:
        {
// switch_8D68_case_0x2
            var_8 = 31136;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8DA0
        }
    }
}
// fun_8DD0
fun_8DD0() {
    pri = arg_2;
    OP_JNZ lab_8EB8
    var_8 = 0;
    var_16 = 8;
    pri = fun_1B18(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1B68(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1C08(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8EB8
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1828(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1920(var_40)
    var_56 = 0;
    pri = fun_19E0()
    pri = 0;
    return pri;
}
// fun_8F30
fun_8F30() {
    pri = g_mode;
    switch (pri) {
// switch_8FC8
        case default:
        {
// switch_8FC8_case_default
            pri = CommandNOP()
            OP_JUMP lab_9000
// lab_9000
            pri = 0;
            return pri;
        }
        case 0xbef4b6b8901b12c4:
        {
// switch_8FC8_case_0xbef4b6b8901b12c4
            var_8 = 0;
            pri = fun_9028()
            OP_JUMP lab_9000
        }
        case 0x0:
        {
// switch_8FC8_case_0x0
            var_8 = 0;
            pri = fun_9010()
            OP_JUMP lab_9000
        }
    }
}
// fun_9010
fun_9010() {
    pri = 0;
    return pri;
}
// fun_9028
fun_9028() {
    var_8 = 6390156580044702728;
    var_16 = 8;
    pri = fun_03B8(var_8)
    var_24 = 0;
    pri = fun_03E8()
    var_32 = 31736;
    pri = SoundPostEvent(var_32)
    var_40 = 0;
    var_48 = 0;
    var_56 = -965260324886180608;
    var_64 = 24;
    pri = fun_78A0(var_56, var_48, var_40)
    var_72 = 15;
    var_80 = 8;
    pri = fun_0060(var_72)
    var_88 = 1;
    var_96 = 0;
    var_104 = 4641240890982006784;
    var_112 = 0;
    var_120 = 0;
    OP_PUSH4_C 4651883195968646021, 4655123280813841449, 4607182418800017408, 6390156580044702728
    var_128 = 72;
    pri = fun_0590(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    OP_PUSH2_C 6390156580044702728, -965260324886180608
    var_168 = 48;
    pri = fun_0658(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = -965260324886180608;
    var_184 = 8;
    pri = fun_06B0(var_176)
    var_192 = 15;
    var_200 = 8;
    pri = fun_0060(var_192)
    var_208 = 1;
    var_216 = 0;
    OP_PUSH2_C 4641240890982006784, -4587338432941916160
    var_224 = 1;
    OP_PUSH4_C 4651874751719344701, 4655707605273306726, 4607182418800017408, 8802641224559852288
    var_232 = 72;
    pri = fun_0590(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_240 = 8802641224559852288;
    var_248 = 8;
    pri = fun_06B0(var_240)
    var_256 = 6390156580044702728;
    var_264 = 8;
    pri = fun_06B0(var_256)
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    var_296 = 0;
    OP_PUSH2_C 6390156580044702728, -965260324886180608
    var_304 = 48;
    pri = fun_0658(var_296, var_288, var_280, var_272, var_264, var_256)
    var_312 = 1;
    var_320 = 1;
    var_328 = 0;
    var_336 = 1;
    var_344 = 1;
    var_352 = 6390156580044702728;
    var_360 = 48;
    pri = fun_7AF8(var_352, var_344, var_336, var_328, var_320, var_312)
    var_368 = 0;
    var_376 = 3;
    var_384 = 0;
    var_392 = 100;
    var_400 = -1;
    OP_PUSH2_C -1693762609734533074, 6390156580044702728
    var_408 = 56;
    pri = fun_1728(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 1;
    var_424 = 8;
    pri = fun_1920(var_416)
    var_432 = 0;
    pri = fun_19E0()
    var_440 = 1;
    var_448 = 3;
    var_456 = 0;
    var_464 = 0;
    var_472 = 6390156580044702728;
    var_480 = 40;
    pri = fun_5B70(var_472, var_464, var_456, var_448, var_440)
    var_488 = 6390156580044702728;
    var_496 = 8;
    pri = fun_0888(var_488)
    var_504 = 6;
    var_512 = 4;
    var_520 = 2;
    var_528 = 0;
    var_536 = 8;
    var_544 = 1;
    var_552 = 1;
    var_560 = 6390156580044702728;
    var_568 = 64;
    pri = fun_8370(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_576 = 1;
    var_584 = 1;
    var_592 = -1;
    var_600 = -1;
    var_608 = 0;
    var_616 = 0;
    var_624 = 6390156580044702728;
    var_632 = 56;
    pri = fun_3838(var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_640 = -965260324886180608;
    var_648 = 8;
    pri = fun_06B0(var_640)
    var_656 = 0;
    var_664 = 3;
    var_672 = 0;
    var_680 = 100;
    var_688 = -1;
    OP_PUSH2_C 6140246062827737775, -965260324886180608
    var_696 = 56;
    pri = fun_1728(var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_704 = 1;
    var_712 = 8;
    pri = fun_1920(var_704)
    var_720 = 0;
    pri = fun_19E0()
    var_728 = 0;
    var_736 = 3;
    var_744 = 0;
    var_752 = 100;
    var_760 = -1;
    OP_PUSH2_C -1693763709246161285, 6390156580044702728
    var_768 = 56;
    pri = fun_1728(var_760, var_752, var_744, var_736, var_728, var_720, var_712)
    var_776 = 1;
    var_784 = 8;
    pri = fun_1920(var_776)
    var_792 = 0;
    pri = fun_19E0()
    var_800 = 0;
    var_808 = 3;
    var_816 = 0;
    var_824 = 100;
    var_832 = -1;
    OP_PUSH2_C -1693764808757789496, 6390156580044702728
    var_840 = 56;
    pri = fun_1728(var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_848 = 1;
    var_856 = 8;
    pri = fun_1920(var_848)
    var_864 = 0;
    var_872 = 3;
    var_880 = 0;
    var_888 = 100;
    var_896 = -1;
    OP_PUSH2_C -1693757112176392019, 6390156580044702728
    var_904 = 56;
    pri = fun_1728(var_896, var_888, var_880, var_872, var_864, var_856, var_848)
    var_912 = 1;
    var_920 = 8;
    pri = fun_1920(var_912)
    var_928 = 0;
    var_936 = 3;
    var_944 = 0;
    var_952 = 100;
    var_960 = -1;
    OP_PUSH2_C -1693758211688020230, 6390156580044702728
    var_968 = 56;
    pri = fun_1728(var_960, var_952, var_944, var_936, var_928, var_920, var_912)
    var_976 = 1;
    var_984 = 8;
    pri = fun_1920(var_976)
    var_992 = 0;
    pri = fun_19E0()
    var_1000 = 0;
    var_1008 = 3;
    var_1016 = 0;
    var_1024 = 100;
    var_1032 = -1;
    OP_PUSH2_C -1693759311199648441, 6390156580044702728
    var_1040 = 56;
    pri = fun_1728(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1048 = 1;
    var_1056 = 8;
    pri = fun_1920(var_1048)
    var_1064 = 0;
    pri = fun_19E0()
    var_1072 = 0;
    var_1080 = 0;
    var_1088 = 0;
    var_1096 = 6390156580044702728;
    var_1104 = 32;
    pri = fun_7CB8(var_1096, var_1088, var_1080, var_1072)
    var_1112 = 1;
    var_1120 = 0;
    var_1128 = 4641240890982006784;
    var_1136 = 0;
    var_1144 = 0;
    OP_PUSH4_C 4651853553135161180, 4653606438552626790, 4607182418800017408, 6390156580044702728
    var_1152 = 72;
    pri = fun_0590(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1160 = 6390156580044702728;
    var_1168 = 8;
    pri = fun_06B0(var_1160)
    var_1176 = 6390156580044702728;
    var_1184 = 8;
    pri = fun_0538(var_1176)
    var_1192 = 0;
    var_1200 = 0;
    var_1208 = 0;
    var_1216 = 0;
    OP_PUSH2_C 8802641224559852288, -965260324886180608
    var_1224 = 48;
    pri = fun_0658(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1232 = 0;
    var_1240 = 0;
    var_1248 = 0;
    var_1256 = 0;
    OP_PUSH2_C -965260324886180608, 8802641224559852288
    var_1264 = 48;
    pri = fun_0658(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
    var_1272 = 8802641224559852288;
    var_1280 = 8;
    pri = fun_06B0(var_1272)
    var_1288 = -965260324886180608;
    var_1296 = 8;
    pri = fun_06B0(var_1288)
    var_1304 = 1;
    var_1312 = 1;
    var_1320 = 0;
    var_1328 = 1;
    var_1336 = 1;
    var_1344 = -965260324886180608;
    var_1352 = 48;
    pri = fun_7AF8(var_1344, var_1336, var_1328, var_1320, var_1312, var_1304)
    var_1360 = 0;
    var_1368 = 3;
    var_1376 = 0;
    var_1384 = 100;
    var_1392 = -1;
    OP_PUSH2_C 6140247162339365986, -965260324886180608
    var_1400 = 56;
    pri = fun_1728(var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344)
    var_1408 = 1;
    var_1416 = 8;
    pri = fun_1920(var_1408)
    var_1424 = 0;
    pri = fun_19E0()
    var_1432 = 0;
    var_1440 = 0;
    var_1448 = 0;
    var_1456 = -965260324886180608;
    var_1464 = 32;
    pri = fun_7CB8(var_1456, var_1448, var_1440, var_1432)
    var_1472 = 0;
    var_1480 = 0;
    var_1488 = 0;
    var_1496 = 0;
    pri = float(var_1496)
    var_1504 = pri;
    var_1512 = -965260324886180608;
    var_1520 = 40;
    pri = fun_0608(var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1528 = -965260324886180608;
    var_1536 = 8;
    pri = fun_06B0(var_1528)
    var_1544 = 20;
    var_1552 = 1499409312851771820;
    pri = WorkSet(var_1552, var_1544)
    var_1560 = 8446872644906815899;
    pri = FlagSet(var_1560)
    pri = 0;
    return pri;
}
