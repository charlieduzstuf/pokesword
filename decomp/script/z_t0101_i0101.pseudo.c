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
    pri = IsFieldObjectExists_(var_8)
    return pri;
}
// fun_0520
fun_0520() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DB0(var_8)
    OP_JZER lab_05E8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0DE0(var_24)
    OP_JNZ lab_05E8
    pri = 0;
    return pri;
// lab_05E8
    OP_JUMP lab_05F8
// lab_05F8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0658
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0658
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05F8
    pri = 0;
    return pri;
}
// fun_0698
fun_0698() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_06D0
fun_06D0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0710
fun_0710() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0790
    pri = 0;
    return pri;
// lab_0790
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07D0
// lab_07D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DB0(var_8)
    OP_JNZ lab_0858
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0848
    pri = 0;
    return pri;
// lab_0858
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08A0
    pri = 0;
    return pri;
// lab_08A0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0900
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0948(var_8)
    pri = 0;
    return pri;
// lab_0900
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07D0
    pri = 0;
    return pri;
// lab_0848
    OP_JUMP lab_08A0
}
// fun_0948
fun_0948() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0980
fun_0980() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09D0
    pri = 0;
    return pri;
// lab_09D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DB0(var_8)
    OP_JZER lab_0B00
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A28
    OP_ZERO_P_S 64
// lab_0B00
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B38
    OP_CONST_S 64, 1
// lab_0B38
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B70
    OP_CONST_S 72, 1
// lab_0B70
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
// lab_0A28
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A50
    OP_ZERO_P_S 72
// lab_0A50
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
    OP_JUMP lab_0C10
// lab_0C10
    pri = 0;
    return pri;
}
// fun_0C20
fun_0C20() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C60
fun_0C60() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CA0
fun_0CA0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtBGObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CF8
fun_0CF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D38
fun_0D38() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D78
fun_0D78() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0DB0
fun_0DB0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0DE0
fun_0DE0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0E10
fun_0E10() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0E40
fun_0E40() {
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
// switch_1458
        case default:
        {
// switch_1458_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_14A0
// lab_14A0
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
            OP_JNZ lab_1548
            var_88 = 0;
            pri = fun_1780()
// lab_1548
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1458_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1040
                case default:
                {
// switch_1040_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_10B8
// lab_10B8
                    OP_JUMP lab_14A0
                }
                case 0x0:
                {
// switch_1040_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_10B8
                }
                case 0x1:
                {
// switch_1040_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_10B8
                }
                case 0x2:
                {
// switch_1040_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_10B8
                }
                case 0x3:
                {
// switch_1040_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_10B8
                }
                case 0x4:
                {
// switch_1040_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_10B8
                }
                case 0x5:
                {
// switch_1040_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_10B8
                }
            }
        }
        case 0x65:
        {
// switch_1458_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_11F8
                case default:
                {
// switch_11F8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1270
// lab_1270
                    OP_JUMP lab_14A0
                }
                case 0x0:
                {
// switch_11F8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1270
                }
                case 0x1:
                {
// switch_11F8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1270
                }
                case 0x2:
                {
// switch_11F8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1270
                }
                case 0x3:
                {
// switch_11F8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1270
                }
                case 0x4:
                {
// switch_11F8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1270
                }
                case 0x5:
                {
// switch_11F8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1270
                }
            }
        }
        case 0x66:
        {
// switch_1458_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_13B0
                case default:
                {
// switch_13B0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1428
// lab_1428
                    OP_JUMP lab_14A0
                }
                case 0x0:
                {
// switch_13B0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1428
                }
                case 0x1:
                {
// switch_13B0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1428
                }
                case 0x2:
                {
// switch_13B0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1428
                }
                case 0x3:
                {
// switch_13B0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1428
                }
                case 0x4:
                {
// switch_13B0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1428
                }
                case 0x5:
                {
// switch_13B0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1428
                }
            }
        }
    }
}
// fun_1560
fun_1560() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0710(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1608
    pri = 1;
    return pri;
// lab_1608
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1650
fun_1650() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_16A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1560(var_8)
    arg_2 = pri;
// lab_16A0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0E40(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1700
fun_1700() {
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
    pri = fun_0E40(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1780
fun_1780() {
    OP_JUMP lab_1798
// lab_1798
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_17D8
    pri = 0;
    return pri;
// lab_17D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1798
    pri = 0;
    return pri;
}
// fun_1818
fun_1818() {
    var_8 = 0;
    pri = fun_1780()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_18C8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_18C8
    pri = 0;
    return pri;
}
// fun_18D8
fun_18D8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1908
fun_1908() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1940
fun_1940() {
    OP_JUMP lab_1958
// lab_1958
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_19A0
    OP_JUMP lab_19D0
    OP_JUMP lab_19C0
// lab_19A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_19D0
    pri = 0;
    return pri;
// lab_19C0
    OP_JUMP lab_1958
}
// fun_19E0
fun_19E0() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1A10
fun_1A10() {
    pri = arg_6;
    OP_JNZ lab_1A48
    var_8 = 0;
    pri = fun_0C20()
// lab_1A48
    pri = arg_1;
    switch (pri) {
// switch_2FB0
        case default:
        {
// switch_2FB0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3300
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3300
            pri = 1;
            OP_JUMP lab_3308
// lab_3300
            pri = 0;
// lab_3308
            OP_JZER lab_3460
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0710(var_24, var_16)
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
            OP_JUMP lab_34C0
// lab_3460
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
// lab_34C0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3520
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3580
// lab_3520
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3580
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3580
            pri = arg_2;
            OP_JZER lab_35C0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_35C0
            var_8 = 0;
            pri = fun_0C60()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2FB0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x1:
        {
// switch_2FB0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x2:
        {
// switch_2FB0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x3:
        {
// switch_2FB0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x4:
        {
// switch_2FB0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x5:
        {
// switch_2FB0_case_0x5
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
            pri = fun_0980(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x6:
        {
// switch_2FB0_case_0x6
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
            pri = fun_0980(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x7:
        {
// switch_2FB0_case_0x7
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
            pri = fun_0980(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x8:
        {
// switch_2FB0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x9:
        {
// switch_2FB0_case_0x9
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
            pri = fun_0980(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2FB0_case_default
        }
        case 0xa:
        {
// switch_2FB0_case_0xa
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
            pri = fun_0980(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2FB0_case_default
        }
        case 0xb:
        {
// switch_2FB0_case_0xb
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
            pri = fun_0980(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2FB0_case_default
        }
        case 0xc:
        {
// switch_2FB0_case_0xc
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
            pri = fun_0980(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2FB0_case_default
        }
        case 0xd:
        {
// switch_2FB0_case_0xd
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
            pri = fun_0980(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2FB0_case_default
        }
        case 0xe:
        {
// switch_2FB0_case_0xe
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
            pri = fun_0980(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2FB0_case_default
        }
        case 0xf:
        {
// switch_2FB0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x10:
        {
// switch_2FB0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x11:
        {
// switch_2FB0_case_0x11
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
            pri = fun_0980(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x12:
        {
// switch_2FB0_case_0x12
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
            pri = fun_0980(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x13:
        {
// switch_2FB0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x14:
        {
// switch_2FB0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x15:
        {
// switch_2FB0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x16:
        {
// switch_2FB0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x17:
        {
// switch_2FB0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x18:
        {
// switch_2FB0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x19:
        {
// switch_2FB0_case_0x19
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
            pri = fun_0980(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x1a:
        {
// switch_2FB0_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06D0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0698(var_48, var_40)
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
            pri = fun_0980(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x1b:
        {
// switch_2FB0_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06D0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0698(var_48, var_40)
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
            pri = fun_0980(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x1c:
        {
// switch_2FB0_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06D0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0698(var_48, var_40)
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
            pri = fun_0980(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x1d:
        {
// switch_2FB0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x1e:
        {
// switch_2FB0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x1f:
        {
// switch_2FB0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x20:
        {
// switch_2FB0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x21:
        {
// switch_2FB0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x22:
        {
// switch_2FB0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x23:
        {
// switch_2FB0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x24:
        {
// switch_2FB0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x25:
        {
// switch_2FB0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x26:
        {
// switch_2FB0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x27:
        {
// switch_2FB0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x28:
        {
// switch_2FB0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
        case 0x29:
        {
// switch_2FB0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2FB0_case_default
        }
    }
}
// fun_35F0
fun_35F0() {
    pri = arg_4;
    OP_JNZ lab_3628
    var_8 = 0;
    pri = fun_0C20()
// lab_3628
    pri = arg_1;
    switch (pri) {
// switch_4A00
        case default:
        {
// switch_4A00_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 8960;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0DB0(var_264)
            OP_JZER lab_4FC8
            pri = arg_3;
            switch (pri) {
// switch_4F70
                case default:
                {
// switch_4F70_case_default
                    OP_JUMP lab_5280
// lab_5280
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_52F0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_52F0
                    var_8 = 0;
                    pri = fun_0C60()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_4F70_case_0x1
                    var_8 = 32;
                    var_16 = 9112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4F70_case_default
                }
                case 0x2:
                {
// switch_4F70_case_0x2
                    var_8 = 32;
                    var_16 = 9216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4F70_case_default
                }
                case 0x3:
                {
// switch_4F70_case_0x3
                    var_8 = 32;
                    var_16 = 9016;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4F70_case_default
                }
            }
// lab_4FC8
            pri = arg_1;
            OP_JZER lab_5018
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5018
            pri = 0;
            OP_JUMP lab_5020
// lab_5018
            pri = 1;
// lab_5020
            OP_JZER lab_5088
            var_8 = 9312;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0710(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5088
            pri = 1;
            OP_JUMP lab_5090
// lab_5088
            pri = 0;
// lab_5090
            OP_JZER lab_50E0
            var_8 = 32;
            var_16 = 9408;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5280
// lab_50E0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5148
            var_8 = 32;
            var_16 = 9568;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5280
// lab_5148
            var_16 = 9688;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0710(var_24, var_16)
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
            var_176 = 9792;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 9808;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_4A00_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x1:
        {
// switch_4A00_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x2:
        {
// switch_4A00_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x3:
        {
// switch_4A00_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x4:
        {
// switch_4A00_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x5:
        {
// switch_4A00_case_0x5
            var_8 = 1;
            var_16 = 8440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06D0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0948(var_40)
            OP_JUMP switch_4A00_case_default
        }
        case 0x6:
        {
// switch_4A00_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x7:
        {
// switch_4A00_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x8:
        {
// switch_4A00_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x9:
        {
// switch_4A00_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0xa:
        {
// switch_4A00_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0xb:
        {
// switch_4A00_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0xc:
        {
// switch_4A00_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0xd:
        {
// switch_4A00_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0xe:
        {
// switch_4A00_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0xf:
        {
// switch_4A00_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x10:
        {
// switch_4A00_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x11:
        {
// switch_4A00_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x12:
        {
// switch_4A00_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x13:
        {
// switch_4A00_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x14:
        {
// switch_4A00_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x15:
        {
// switch_4A00_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x16:
        {
// switch_4A00_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x17:
        {
// switch_4A00_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x18:
        {
// switch_4A00_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x19:
        {
// switch_4A00_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x1a:
        {
// switch_4A00_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x1b:
        {
// switch_4A00_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x1c:
        {
// switch_4A00_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x1d:
        {
// switch_4A00_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x1e:
        {
// switch_4A00_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x1f:
        {
// switch_4A00_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x20:
        {
// switch_4A00_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x21:
        {
// switch_4A00_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x22:
        {
// switch_4A00_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x23:
        {
// switch_4A00_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x24:
        {
// switch_4A00_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x25:
        {
// switch_4A00_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x26:
        {
// switch_4A00_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x27:
        {
// switch_4A00_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x28:
        {
// switch_4A00_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x29:
        {
// switch_4A00_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x2a:
        {
// switch_4A00_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x2b:
        {
// switch_4A00_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x2c:
        {
// switch_4A00_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x2d:
        {
// switch_4A00_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x2e:
        {
// switch_4A00_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x2f:
        {
// switch_4A00_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x30:
        {
// switch_4A00_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x31:
        {
// switch_4A00_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x32:
        {
// switch_4A00_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x33:
        {
// switch_4A00_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x34:
        {
// switch_4A00_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x35:
        {
// switch_4A00_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x36:
        {
// switch_4A00_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x37:
        {
// switch_4A00_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x38:
        {
// switch_4A00_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x39:
        {
// switch_4A00_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x3a:
        {
// switch_4A00_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x3b:
        {
// switch_4A00_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x3c:
        {
// switch_4A00_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8536;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x3d:
        {
// switch_4A00_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8712;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
        case 0x3e:
        {
// switch_4A00_case_0x3e
            var_8 = 3;
            var_16 = 8856;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06D0(var_24, var_16, var_8)
            OP_JUMP switch_4A00_case_default
        }
    }
}
// fun_5320
fun_5320() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_5420
        case default:
        {
// switch_5420_case_default
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
// switch_5420_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_5420_case_default
        }
        case 0x1:
        {
// switch_5420_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_5420_case_default
        }
        case 0x2:
        {
// switch_5420_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_5420_case_default
        }
        case 0x3:
        {
// switch_5420_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_5420_case_default
        }
    }
}
// fun_54E0
fun_54E0() {
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
    pri = fun_1650(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1780()
    pri = 0;
    return pri;
}
// fun_5578
fun_5578() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_5320(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_54E0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_5620
fun_5620() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_5670
// lab_5670
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 9856;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_56E8
    OP_JUMP lab_5718
// lab_56E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_5670
// lab_5718
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_57A0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_35F0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0E10(var_56)
// lab_57A0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_5808
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0CF8(var_24, var_16)
// lab_5808
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0CF8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_58C8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0748(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0520(var_88, var_80, var_72, var_64, var_56)
// lab_58C8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_5908
    pri = 0;
    return pri;
// lab_5908
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_5A50
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 9976;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0698(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_5A18
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_5A50
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0570(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0570(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0748(var_40)
    pri = 0;
    return pri;
// lab_5A18
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0CF8(var_16, var_8)
}
// fun_5AD8
fun_5AD8() {
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
    pri = fun_5578(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1818(var_112)
    var_128 = 0;
    pri = fun_18D8()
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
    pri = fun_5620(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_5C50
fun_5C50() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1908(var_8)
    var_24 = 0;
    pri = fun_1940()
    pri = arg_8;
    alt = 1;
    pri |= alt;
    arg_8 = pri;
    var_32 = arg_10;
    var_40 = arg_9;
    var_48 = arg_8;
    var_56 = arg_7;
    var_64 = arg_6;
    var_72 = arg_5;
    var_80 = arg_4;
    var_88 = arg_3;
    var_96 = arg_2;
    var_104 = arg_1;
    var_112 = 80;
    pri = fun_5AD8(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_120 = 0;
    pri = fun_19E0()
    pri = 0;
    return pri;
}
// fun_5D40
fun_5D40() {
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
    var_112 = 10112;
    var_120 = 8802641224559852288;
    pri = AddParallelWaitStandard(var_120, var_112, var_104)
    pri = 0;
    return pri;
}
// fun_5E68
fun_5E68() {
    pri = arg_1;
    OP_JZER lab_5F08
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
    pri = fun_1650(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1780()
// lab_5F08
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_5D40(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5F48
fun_5F48() {
    var_16 = 7;
    pri = TempWorkGet(var_16)
    var_8 = pri;
    var_24 = var_8;
    var_32 = 8;
    pri = fun_03E0(var_24)
    OP_JUMP lab_5FB0
// lab_5FB0
    var_8 = 10328;
    var_16 = 8802641224559852288;
    pri = FindParallelWait(var_16, var_8)
    OP_JNZ lab_6000
    OP_JUMP lab_6030
// lab_6000
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_5FB0
// lab_6030
    OP_JUMP lab_6040
// lab_6040
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 10544;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_60B8
    OP_JUMP lab_60E8
// lab_60B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_6040
// lab_60E8
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = arg_0;
    pri = EasyTalkTerminate(var_16)
    var_24 = 15;
    pri = TempWorkGet(var_24)
    alt = 1;
    OP_JEQ lab_6198
    var_32 = -1;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0CF8(var_40, var_32)
// lab_6198
    OP_ZERO_P_S -16
    OP_JUMP lab_61B8
// lab_61B8
    var_8 = arg_0;
    pri = IsEasyTalkRunning(var_8)
    OP_JNZ lab_61F8
    OP_JUMP lab_6240
// lab_61F8
    pri = var_16;
    OP_EQ_P_C_PRI 300
    OP_JZER lab_6228
    OP_JUMP lab_6240
// lab_6228
    OP_INC_P_S -16
    OP_JUMP lab_61B8
// lab_6240
    OP_CONST_S -24, 4
    pri = arg_1;
    OP_JZER lab_62C0
    var_16 = arg_0;
    var_24 = 8;
    pri = fun_04F0(var_16)
    OP_JZER lab_62C0
    pri = 1;
    OP_JUMP lab_62C8
// lab_62C0
    pri = 0;
// lab_62C8
    OP_JZER lab_6338
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0570(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = var_24;
    var_48 = arg_2;
    var_56 = arg_0;
    var_64 = 40;
    pri = fun_0520(var_56, var_48, var_40, var_32, var_24)
// lab_6338
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6378
    pri = 0;
    return pri;
// lab_6378
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_64A8
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 10664;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0698(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_32 = pri;
    pri = var_32;
    alt = 23;
    OP_JSLESS lab_6470
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_64A8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0570(var_8)
    var_24 = 8802641224559852288;
    var_32 = 8;
    pri = fun_0748(var_24)
    pri = 0;
    return pri;
// lab_6470
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0CF8(var_16, var_8)
}
// fun_6510
fun_6510() {
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
    pri = fun_5E68(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = arg_0;
    OP_JZER lab_65E0
    var_80 = 1;
    var_88 = 8;
    pri = fun_1818(var_80)
    var_96 = 0;
    pri = fun_18D8()
// lab_65E0
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
    pri = fun_5F48(var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_6698
fun_6698() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    var_40 = var_8;
    var_48 = 8802641224559852288;
    var_56 = 40;
    pri = fun_0CA0(var_48, var_40, var_32, var_24, var_16)
    var_64 = arg_2;
    pri = arg_1;
    alt = 4;
    pri |= alt;
    var_72 = pri;
    var_80 = var_8;
    var_88 = arg_0;
    var_96 = 32;
    pri = fun_1700(var_88, var_80, var_72, var_64)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1818(var_104)
    var_120 = 0;
    pri = fun_18D8()
    pri = 0;
    return pri;
}
// fun_67B0
fun_67B0() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_6930
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6848
    var_8 = 1;
    var_16 = 0;
    var_24 = 10800;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_6930
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_6848
    pri = arg_0;
    OP_JNZ lab_6890
    var_8 = 10848;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_68B0
// lab_6890
    var_8 = 11024;
    pri = SoundPostEvent(var_8)
// lab_68B0
    var_8 = 0;
    var_16 = 8;
    pri = fun_03E0(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6930
    var_24 = 11288;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_6970
fun_6970() {
    pri = g_mode;
    switch (pri) {
// switch_6BE8
        case default:
        {
// switch_6BE8_case_default
            pri = CommandNOP()
            OP_JUMP lab_6CE0
// lab_6CE0
            pri = 0;
            return pri;
        }
        case 0xaf9291748f17f10b:
        {
// switch_6BE8_case_0xaf9291748f17f10b
            var_8 = 0;
            pri = fun_8868()
            OP_JUMP lab_6CE0
        }
        case 0xafcc7d748f494756:
        {
// switch_6BE8_case_0xafcc7d748f494756
            var_8 = 0;
            pri = fun_87C8()
            OP_JUMP lab_6CE0
        }
        case 0xafcfc3748f4bf41f:
        {
// switch_6BE8_case_0xafcfc3748f4bf41f
            var_8 = 0;
            pri = fun_8818()
            OP_JUMP lab_6CE0
        }
        case 0xcad236b803c9e3c9:
        {
// switch_6BE8_case_0xcad236b803c9e3c9
            var_8 = 0;
            pri = fun_8638()
            OP_JUMP lab_6CE0
        }
        case 0xd2a3114049827474:
        {
// switch_6BE8_case_0xd2a3114049827474
            var_8 = 0;
            pri = fun_8778()
            OP_JUMP lab_6CE0
        }
        case 0xe5e4a00f6934aa00:
        {
// switch_6BE8_case_0xe5e4a00f6934aa00
            var_8 = 0;
            pri = fun_86D8()
            OP_JUMP lab_6CE0
        }
        case 0xf05d82956486fa49:
        {
// switch_6BE8_case_0xf05d82956486fa49
            var_8 = 0;
            pri = fun_6D30()
            OP_JUMP lab_6CE0
        }
        case 0xf654b4c13aa69ee4:
        {
// switch_6BE8_case_0xf654b4c13aa69ee4
            var_8 = 0;
            pri = fun_88B8()
            OP_JUMP lab_6CE0
        }
        case 0xfb7cdf4b314a16db:
        {
// switch_6BE8_case_0xfb7cdf4b314a16db
            var_8 = 0;
            pri = fun_8728()
            OP_JUMP lab_6CE0
        }
        case 0x0:
        {
// switch_6BE8_case_0x0
            var_8 = 0;
            pri = fun_6CF0()
            OP_JUMP lab_6CE0
        }
        case 0x37d82dc70d07392:
        {
// switch_6BE8_case_0x37d82dc70d07392
            var_8 = 0;
            pri = fun_85E8()
            OP_JUMP lab_6CE0
        }
        case 0xf7ee3049d576780:
        {
// switch_6BE8_case_0xf7ee3049d576780
            var_8 = 0;
            pri = fun_85D0()
            OP_JUMP lab_6CE0
        }
        case 0x3066ec43cd20d59a:
        {
// switch_6BE8_case_0x3066ec43cd20d59a
            var_8 = 0;
            pri = fun_8420()
            OP_JUMP lab_6CE0
        }
        case 0x7b1de38d9ad78047:
        {
// switch_6BE8_case_0x7b1de38d9ad78047
            var_8 = 0;
            pri = fun_8688()
            OP_JUMP lab_6CE0
        }
    }
}
// fun_6CF0
fun_6CF0() {
    pri = 0;
    return pri;
}
// public GetSceneChangeData
public GetSceneChangeData() {
    alt = 11336;
    pri = arg_0;
    OP_LIDX_P_B 3
    return pri;
}
// fun_6D30
fun_6D30() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 10000
    OP_JZER lab_7040
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = -965260324886180608;
    var_64 = 48;
    pri = fun_5320(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = -1;
    pri = PokePartyIsRecover(var_72)
    OP_JZER lab_6F60
    var_80 = 1;
    var_88 = -1;
    var_96 = -1;
    var_104 = 3;
    var_112 = 0;
    var_120 = 1;
    var_128 = -965260324886180608;
    var_136 = 56;
    pri = fun_1A10(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 4;
    var_152 = -965260324886180608;
    var_160 = 16;
    pri = fun_0D38(var_152, var_144)
    var_168 = 0;
    var_176 = 3;
    var_184 = 0;
    var_192 = 100;
    var_200 = -1;
    OP_PUSH2_C 7859864931151499264, -965260324886180608
    var_208 = 56;
    pri = fun_1650(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_216 = 1;
    var_224 = 8;
    pri = fun_1818(var_216)
    var_232 = 0;
    pri = fun_18D8()
    var_240 = 1;
    var_248 = 0;
    var_256 = 16;
    pri = fun_67B0(var_248, var_240)
    var_264 = -965260324886180608;
    var_272 = 8;
    pri = fun_0D78(var_264)
// lab_7040
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 3060;
    OP_JSLESS lab_70D8
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    alt = 10000;
    OP_JSGEQ lab_70D8
    pri = 1;
    OP_JUMP lab_70E0
// lab_70D8
    pri = 0;
// lab_70E0
    OP_JZER lab_73B8
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = -965260324886180608;
    var_56 = 48;
    pri = fun_5320(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = -1;
    pri = PokePartyIsRecover(var_64)
    OP_JZER lab_72D8
    var_72 = 1;
    var_80 = -1;
    var_88 = -1;
    var_96 = 3;
    var_104 = 0;
    var_112 = 1;
    var_120 = -965260324886180608;
    var_128 = 56;
    pri = fun_1A10(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 4;
    var_144 = -965260324886180608;
    var_152 = 16;
    pri = fun_0D38(var_144, var_136)
    var_160 = 0;
    var_168 = 3;
    var_176 = 0;
    var_184 = 100;
    var_192 = -1;
    OP_PUSH2_C 7859864931151499264, -965260324886180608
    var_200 = 56;
    pri = fun_1650(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1818(var_208)
    var_224 = 0;
    pri = fun_18D8()
    var_232 = 1;
    var_240 = 0;
    var_248 = 16;
    pri = fun_67B0(var_240, var_232)
    var_256 = -965260324886180608;
    var_264 = 8;
    pri = fun_0D78(var_256)
// lab_73B8
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 3000;
    OP_JSLESS lab_7450
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    alt = 3060;
    OP_JSGEQ lab_7450
    pri = 1;
    OP_JUMP lab_7458
// lab_7450
    pri = 0;
// lab_7458
    OP_JZER lab_7730
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = -965260324886180608;
    var_56 = 48;
    pri = fun_5320(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = -1;
    pri = PokePartyIsRecover(var_64)
    OP_JZER lab_7650
    var_72 = 1;
    var_80 = -1;
    var_88 = -1;
    var_96 = 3;
    var_104 = 0;
    var_112 = 1;
    var_120 = -965260324886180608;
    var_128 = 56;
    pri = fun_1A10(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 4;
    var_144 = -965260324886180608;
    var_152 = 16;
    pri = fun_0D38(var_144, var_136)
    var_160 = 0;
    var_168 = 3;
    var_176 = 0;
    var_184 = 100;
    var_192 = -1;
    OP_PUSH2_C 7859864931151499264, -965260324886180608
    var_200 = 56;
    pri = fun_1650(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1818(var_208)
    var_224 = 0;
    pri = fun_18D8()
    var_232 = 1;
    var_240 = 0;
    var_248 = 16;
    pri = fun_67B0(var_240, var_232)
    var_256 = -965260324886180608;
    var_264 = 8;
    pri = fun_0D78(var_256)
// lab_7730
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 2010;
    OP_JSLESS lab_77C8
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    alt = 3000;
    OP_JSGEQ lab_77C8
    pri = 1;
    OP_JUMP lab_77D0
// lab_77C8
    pri = 0;
// lab_77D0
    OP_JZER lab_7AA8
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = -965260324886180608;
    var_56 = 48;
    pri = fun_5320(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = -1;
    pri = PokePartyIsRecover(var_64)
    OP_JZER lab_79C8
    var_72 = 1;
    var_80 = -1;
    var_88 = -1;
    var_96 = 3;
    var_104 = 0;
    var_112 = 1;
    var_120 = -965260324886180608;
    var_128 = 56;
    pri = fun_1A10(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 4;
    var_144 = -965260324886180608;
    var_152 = 16;
    pri = fun_0D38(var_144, var_136)
    var_160 = 0;
    var_168 = 3;
    var_176 = 0;
    var_184 = 100;
    var_192 = -1;
    OP_PUSH2_C 7859864931151499264, -965260324886180608
    var_200 = 56;
    pri = fun_1650(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1818(var_208)
    var_224 = 0;
    pri = fun_18D8()
    var_232 = 1;
    var_240 = 0;
    var_248 = 16;
    pri = fun_67B0(var_240, var_232)
    var_256 = -965260324886180608;
    var_264 = 8;
    pri = fun_0D78(var_256)
// lab_7AA8
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 1810;
    OP_JSLESS lab_7B40
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    alt = 2010;
    OP_JSGEQ lab_7B40
    pri = 1;
    OP_JUMP lab_7B48
// lab_7B40
    pri = 0;
// lab_7B48
    OP_JZER lab_7E20
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = -965260324886180608;
    var_56 = 48;
    pri = fun_5320(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = -1;
    pri = PokePartyIsRecover(var_64)
    OP_JZER lab_7D40
    var_72 = 1;
    var_80 = -1;
    var_88 = -1;
    var_96 = 3;
    var_104 = 0;
    var_112 = 1;
    var_120 = -965260324886180608;
    var_128 = 56;
    pri = fun_1A10(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 4;
    var_144 = -965260324886180608;
    var_152 = 16;
    pri = fun_0D38(var_144, var_136)
    var_160 = 0;
    var_168 = 3;
    var_176 = 0;
    var_184 = 100;
    var_192 = -1;
    OP_PUSH2_C 7859864931151499264, -965260324886180608
    var_200 = 56;
    pri = fun_1650(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1818(var_208)
    var_224 = 0;
    pri = fun_18D8()
    var_232 = 1;
    var_240 = 0;
    var_248 = 16;
    pri = fun_67B0(var_240, var_232)
    var_256 = -965260324886180608;
    var_264 = 8;
    pri = fun_0D78(var_256)
// lab_7E20
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 30;
    OP_JSLESS lab_7EB8
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    alt = 130;
    OP_JSGEQ lab_7EB8
    pri = 1;
    OP_JUMP lab_7EC0
// lab_7EB8
    pri = 0;
// lab_7EC0
    OP_JZER lab_7F58
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = -4236859409650898582;
    var_88 = 11408;
    var_96 = 88;
    pri = fun_5C50(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_8410
// lab_7F58
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 25;
    OP_JSLESS lab_7FF0
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    alt = 30;
    OP_JSGEQ lab_7FF0
    pri = 1;
    OP_JUMP lab_7FF8
// lab_7FF0
    pri = 0;
// lab_7FF8
    OP_JZER lab_8090
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = -4236866006720667848;
    var_88 = 11624;
    var_96 = 88;
    pri = fun_5C50(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_8410
// lab_8090
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 25;
    OP_JSGEQ lab_8158
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = -4236858310139270371;
    var_96 = 11840;
    var_104 = 88;
    pri = fun_5C50(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_8410
// lab_8158
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = -965260324886180608;
    var_56 = 48;
    pri = fun_5320(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = -1;
    pri = PokePartyIsRecover(var_64)
    OP_JZER lab_8340
    var_72 = 1;
    var_80 = -1;
    var_88 = -1;
    var_96 = 3;
    var_104 = 0;
    var_112 = 1;
    var_120 = -965260324886180608;
    var_128 = 56;
    pri = fun_1A10(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 4;
    var_144 = -965260324886180608;
    var_152 = 16;
    pri = fun_0D38(var_144, var_136)
    var_160 = 0;
    var_168 = 3;
    var_176 = 0;
    var_184 = 100;
    var_192 = -1;
    OP_PUSH2_C 7859864931151499264, -965260324886180608
    var_200 = 56;
    pri = fun_1650(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1818(var_208)
    var_224 = 0;
    pri = fun_18D8()
    var_232 = 1;
    var_240 = 0;
    var_248 = 16;
    pri = fun_67B0(var_240, var_232)
    var_256 = -965260324886180608;
    var_264 = 8;
    pri = fun_0D78(var_256)
// lab_8340
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 7859868229686383897, -965260324886180608
    var_48 = 56;
    pri = fun_1650(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1818(var_56)
    var_72 = 0;
    pri = fun_18D8()
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = -965260324886180608;
    var_112 = 32;
    pri = fun_5620(var_104, var_96, var_88, var_80)
// lab_8410
    pri = 0;
    return pri;
// lab_7D40
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 7859867130174755686, -965260324886180608
    var_48 = 56;
    pri = fun_1650(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1818(var_56)
    var_72 = 0;
    pri = fun_18D8()
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = -965260324886180608;
    var_112 = 32;
    pri = fun_5620(var_104, var_96, var_88, var_80)
    OP_JUMP lab_8410
// lab_79C8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 7859870428709640319, -965260324886180608
    var_48 = 56;
    pri = fun_1650(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1818(var_56)
    var_72 = 0;
    pri = fun_18D8()
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = -965260324886180608;
    var_112 = 32;
    pri = fun_5620(var_104, var_96, var_88, var_80)
    OP_JUMP lab_8410
// lab_7650
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 7859869329198012108, -965260324886180608
    var_48 = 56;
    pri = fun_1650(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1818(var_56)
    var_72 = 0;
    pri = fun_18D8()
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = -965260324886180608;
    var_112 = 32;
    pri = fun_5620(var_104, var_96, var_88, var_80)
    OP_JUMP lab_8410
// lab_72D8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 7859872627732896741, -965260324886180608
    var_48 = 56;
    pri = fun_1650(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1818(var_56)
    var_72 = 0;
    pri = fun_18D8()
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = -965260324886180608;
    var_112 = 32;
    pri = fun_5620(var_104, var_96, var_88, var_80)
    OP_JUMP lab_8410
// lab_6F60
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 7859871528221268530, -965260324886180608
    var_48 = 56;
    pri = fun_1650(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1818(var_56)
    var_72 = 0;
    pri = fun_18D8()
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = -965260324886180608;
    var_112 = 32;
    pri = fun_5620(var_104, var_96, var_88, var_80)
    OP_JUMP lab_8410
}
// fun_8420
fun_8420() {
    var_8 = 12056;
    var_16 = 3545634300468685848;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_JZER lab_8568
    var_24 = 0;
    var_32 = 1;
    var_40 = 3545634300468685848;
    var_48 = 24;
    pri = fun_5D40(var_40, var_32, var_24)
    var_56 = 40;
    var_64 = 8;
    pri = fun_0060(var_56)
    var_72 = 0;
    var_80 = 12176;
    var_88 = 3545634300468685848;
    pri = SetAnimationStateBoolParameter_(var_88, var_80, var_72)
    var_96 = 50;
    var_104 = 8;
    pri = fun_0060(var_96)
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 3545634300468685848;
    var_144 = 32;
    pri = fun_5620(var_136, var_128, var_120, var_112)
    OP_JUMP lab_85C0
// lab_8568
    var_8 = 3;
    var_16 = 0;
    var_24 = 100;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = 4130726174246232581;
    var_64 = 56;
    pri = fun_6510(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_85C0
    pri = 0;
    return pri;
}
// fun_85D0
fun_85D0() {
    pri = 0;
    return pri;
}
// fun_85E8
fun_85E8() {
    var_8 = 3;
    var_16 = 8;
    var_24 = 5949580492247996046;
    var_32 = 24;
    pri = fun_6698(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8638
fun_8638() {
    var_8 = 3;
    var_16 = 8;
    var_24 = -4907029782951405563;
    var_32 = 24;
    pri = fun_6698(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8688
fun_8688() {
    var_8 = 3;
    var_16 = 8;
    var_24 = 2410168342494208974;
    var_32 = 24;
    pri = fun_6698(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_86D8
fun_86D8() {
    var_8 = 3;
    var_16 = 8;
    var_24 = 5796514691557758597;
    var_32 = 24;
    pri = fun_6698(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8728
fun_8728() {
    var_8 = 3;
    var_16 = 8;
    var_24 = -1609736742823456742;
    var_32 = 24;
    pri = fun_6698(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8778
fun_8778() {
    var_8 = 3;
    var_16 = 8;
    var_24 = -436465466272174489;
    var_32 = 24;
    pri = fun_6698(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_87C8
fun_87C8() {
    var_8 = 3;
    var_16 = 8;
    var_24 = 4296662263785672984;
    var_32 = 24;
    pri = fun_6698(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8818
fun_8818() {
    var_8 = 3;
    var_16 = 8;
    var_24 = 2096343284586456349;
    var_32 = 24;
    pri = fun_6698(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8868
fun_8868() {
    var_8 = 3;
    var_16 = 8;
    var_24 = -2720714590070232378;
    var_32 = 24;
    pri = fun_6698(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_88B8
fun_88B8() {
    pri = PlayerGetSex()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8938
    var_8 = 3;
    var_16 = 8;
    var_24 = -4875097831223251926;
    var_32 = 24;
    pri = fun_6698(var_24, var_16, var_8)
    OP_JUMP lab_8970
// lab_8938
    var_8 = 3;
    var_16 = 8;
    var_24 = 6904013261273074109;
    var_32 = 24;
    pri = fun_6698(var_24, var_16, var_8)
// lab_8970
    pri = 0;
    return pri;
}
