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
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0308
fun_0308() {
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
// fun_0378
fun_0378() {
    OP_JUMP lab_0390
// lab_0390
    pri = FadeWait_()
    OP_JZER lab_03C8
    pri = 0;
    return pri;
// lab_03C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0390
    pri = 0;
    return pri;
}
// fun_0408
fun_0408() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0450
// lab_0450
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0490
    OP_JUMP lab_0500
// lab_0490
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04D0
    OP_JUMP lab_0500
// lab_04D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0450
// lab_0500
    pri = 0;
    return pri;
}
// fun_0518
fun_0518() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0548
fun_0548() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0598
fun_0598() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D08(var_8)
    OP_JZER lab_0610
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0D38(var_24)
    OP_JNZ lab_0610
    pri = 0;
    return pri;
// lab_0610
    OP_JUMP lab_0620
// lab_0620
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0680
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0680
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0620
    pri = 0;
    return pri;
}
// fun_06C0
fun_06C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_06F8
fun_06F8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0738
fun_0738() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_07B8
    pri = 0;
    return pri;
// lab_07B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_07F8
// lab_07F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D08(var_8)
    OP_JNZ lab_0880
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0870
    pri = 0;
    return pri;
// lab_0880
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08C8
    pri = 0;
    return pri;
// lab_08C8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0928
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
// lab_0928
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07F8
    pri = 0;
    return pri;
// lab_0870
    OP_JUMP lab_08C8
}
// fun_0970
fun_0970() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_09A8
fun_09A8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09F8
    pri = 0;
    return pri;
// lab_09F8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D08(var_8)
    OP_JZER lab_0B28
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A50
    OP_ZERO_P_S 64
// lab_0B28
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B60
    OP_CONST_S 64, 1
// lab_0B60
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B98
    OP_CONST_S 72, 1
// lab_0B98
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
// lab_0A50
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A78
    OP_ZERO_P_S 72
// lab_0A78
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
    OP_JUMP lab_0C38
// lab_0C38
    pri = 0;
    return pri;
}
// fun_0C48
fun_0C48() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C88
fun_0C88() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CC8
fun_0CC8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0D08
fun_0D08() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0D38
fun_0D38() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0D68
fun_0D68() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0D98
fun_0D98() {
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
// switch_13B0
        case default:
        {
// switch_13B0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_13F8
// lab_13F8
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
            OP_JNZ lab_14A0
            var_88 = 0;
            pri = fun_1770()
// lab_14A0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_13B0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0F98
                case default:
                {
// switch_0F98_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1010
// lab_1010
                    OP_JUMP lab_13F8
                }
                case 0x0:
                {
// switch_0F98_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1010
                }
                case 0x1:
                {
// switch_0F98_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1010
                }
                case 0x2:
                {
// switch_0F98_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1010
                }
                case 0x3:
                {
// switch_0F98_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1010
                }
                case 0x4:
                {
// switch_0F98_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1010
                }
                case 0x5:
                {
// switch_0F98_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1010
                }
            }
        }
        case 0x65:
        {
// switch_13B0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1150
                case default:
                {
// switch_1150_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_11C8
// lab_11C8
                    OP_JUMP lab_13F8
                }
                case 0x0:
                {
// switch_1150_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_11C8
                }
                case 0x1:
                {
// switch_1150_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_11C8
                }
                case 0x2:
                {
// switch_1150_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_11C8
                }
                case 0x3:
                {
// switch_1150_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_11C8
                }
                case 0x4:
                {
// switch_1150_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_11C8
                }
                case 0x5:
                {
// switch_1150_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_11C8
                }
            }
        }
        case 0x66:
        {
// switch_13B0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1308
                case default:
                {
// switch_1308_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1380
// lab_1380
                    OP_JUMP lab_13F8
                }
                case 0x0:
                {
// switch_1308_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1380
                }
                case 0x1:
                {
// switch_1308_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1380
                }
                case 0x2:
                {
// switch_1308_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1380
                }
                case 0x3:
                {
// switch_1308_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1380
                }
                case 0x4:
                {
// switch_1308_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1380
                }
                case 0x5:
                {
// switch_1308_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1380
                }
            }
        }
    }
}
// fun_14B8
fun_14B8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0D98(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1520
fun_1520() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0738(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_15C8
    pri = 1;
    return pri;
// lab_15C8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1610
fun_1610() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1660
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1520(var_8)
    arg_2 = pri;
// lab_1660
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0D98(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16C0
fun_16C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_14B8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1710
fun_1710() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_16C0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1770
fun_1770() {
    OP_JUMP lab_1788
// lab_1788
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_17C8
    pri = 0;
    return pri;
// lab_17C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1788
    pri = 0;
    return pri;
}
// fun_1808
fun_1808() {
    var_8 = 0;
    pri = fun_1770()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_18B8
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_18B8
    pri = 0;
    return pri;
}
// fun_18C8
fun_18C8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_18F8
fun_18F8() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1930
fun_1930() {
    OP_JUMP lab_1948
// lab_1948
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1990
    OP_JUMP lab_19C0
    OP_JUMP lab_19B0
// lab_1990
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_19C0
    pri = 0;
    return pri;
// lab_19B0
    OP_JUMP lab_1948
}
// fun_19D0
fun_19D0() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1A00
fun_1A00() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A50
fun_1A50() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AA0
fun_1AA0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1AF0
fun_1AF0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B40
fun_1B40() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B90
fun_1B90() {
    var_8 = 0;
    var_16 = 0;
    pri = PokePartyGetCount(var_16, var_8)
    OP_EQ_P_C_PRI 6
    OP_JZER lab_1C18
    pri = PokeBoxIsFull()
    OP_JZER lab_1C18
    pri = 1;
    OP_JUMP lab_1C20
// lab_1C18
    pri = 0;
// lab_1C20
    return pri;
}
// fun_1C28
fun_1C28() {
    pri = arg_6;
    OP_JNZ lab_1C60
    var_8 = 0;
    pri = fun_0C48()
// lab_1C60
    pri = arg_1;
    switch (pri) {
// switch_31C8
        case default:
        {
// switch_31C8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3518
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3518
            pri = 1;
            OP_JUMP lab_3520
// lab_3518
            pri = 0;
// lab_3520
            OP_JZER lab_3678
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0738(var_24, var_16)
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
            OP_JUMP lab_36D8
// lab_3678
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
// lab_36D8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3738
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3798
// lab_3738
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3798
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3798
            pri = arg_2;
            OP_JZER lab_37D8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_37D8
            var_8 = 0;
            pri = fun_0C88()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_31C8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x1:
        {
// switch_31C8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x2:
        {
// switch_31C8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x3:
        {
// switch_31C8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x4:
        {
// switch_31C8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x5:
        {
// switch_31C8_case_0x5
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31C8_case_default
        }
        case 0x6:
        {
// switch_31C8_case_0x6
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31C8_case_default
        }
        case 0x7:
        {
// switch_31C8_case_0x7
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31C8_case_default
        }
        case 0x8:
        {
// switch_31C8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x9:
        {
// switch_31C8_case_0x9
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31C8_case_default
        }
        case 0xa:
        {
// switch_31C8_case_0xa
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31C8_case_default
        }
        case 0xb:
        {
// switch_31C8_case_0xb
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31C8_case_default
        }
        case 0xc:
        {
// switch_31C8_case_0xc
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31C8_case_default
        }
        case 0xd:
        {
// switch_31C8_case_0xd
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31C8_case_default
        }
        case 0xe:
        {
// switch_31C8_case_0xe
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31C8_case_default
        }
        case 0xf:
        {
// switch_31C8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x10:
        {
// switch_31C8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x11:
        {
// switch_31C8_case_0x11
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31C8_case_default
        }
        case 0x12:
        {
// switch_31C8_case_0x12
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31C8_case_default
        }
        case 0x13:
        {
// switch_31C8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x14:
        {
// switch_31C8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x15:
        {
// switch_31C8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x16:
        {
// switch_31C8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x17:
        {
// switch_31C8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x18:
        {
// switch_31C8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x19:
        {
// switch_31C8_case_0x19
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_31C8_case_default
        }
        case 0x1a:
        {
// switch_31C8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06C0(var_48, var_40)
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
            pri = fun_09A8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31C8_case_default
        }
        case 0x1b:
        {
// switch_31C8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06C0(var_48, var_40)
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
            pri = fun_09A8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31C8_case_default
        }
        case 0x1c:
        {
// switch_31C8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_06C0(var_48, var_40)
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
            pri = fun_09A8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_31C8_case_default
        }
        case 0x1d:
        {
// switch_31C8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x1e:
        {
// switch_31C8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x1f:
        {
// switch_31C8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x20:
        {
// switch_31C8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x21:
        {
// switch_31C8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x22:
        {
// switch_31C8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x23:
        {
// switch_31C8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x24:
        {
// switch_31C8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x25:
        {
// switch_31C8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x26:
        {
// switch_31C8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x27:
        {
// switch_31C8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x28:
        {
// switch_31C8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
        case 0x29:
        {
// switch_31C8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_31C8_case_default
        }
    }
}
// fun_3808
fun_3808() {
    pri = arg_5;
    OP_JNZ lab_3840
    var_8 = 0;
    pri = fun_0C48()
// lab_3840
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3890
    OP_CONST_S -8, -1
// lab_3890
    pri = arg_1;
    switch (pri) {
// switch_5348
        case default:
        {
// switch_5348_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_57F0
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0738(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_57F0
            pri = 1;
            OP_JUMP lab_57F8
// lab_57F0
            pri = 0;
// lab_57F8
            OP_JZER lab_5848
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5AA0
// lab_5848
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_58B0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_58B0
            pri = 1;
            OP_JUMP lab_58B8
// lab_58B0
            pri = 0;
// lab_58B8
            OP_JZER lab_5A40
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0738(var_24, var_16)
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
            OP_JUMP lab_5AA0
// lab_5A40
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
// lab_5AA0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5B10
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5B10
            var_8 = 0;
            pri = fun_0C88()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5348_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x1:
        {
// switch_5348_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x2:
        {
// switch_5348_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x3:
        {
// switch_5348_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x4:
        {
// switch_5348_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x5:
        {
// switch_5348_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0970(var_40)
            OP_JUMP switch_5348_case_default
        }
        case 0x6:
        {
// switch_5348_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x7:
        {
// switch_5348_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x8:
        {
// switch_5348_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x9:
        {
// switch_5348_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0xa:
        {
// switch_5348_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0xb:
        {
// switch_5348_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0xc:
        {
// switch_5348_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0xd:
        {
// switch_5348_case_0xd
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0xe:
        {
// switch_5348_case_0xe
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0xf:
        {
// switch_5348_case_0xf
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x10:
        {
// switch_5348_case_0x10
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x11:
        {
// switch_5348_case_0x11
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x12:
        {
// switch_5348_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x13:
        {
// switch_5348_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x14:
        {
// switch_5348_case_0x14
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x15:
        {
// switch_5348_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x16:
        {
// switch_5348_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x17:
        {
// switch_5348_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x18:
        {
// switch_5348_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x19:
        {
// switch_5348_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x1a:
        {
// switch_5348_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x1b:
        {
// switch_5348_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x1c:
        {
// switch_5348_case_0x1c
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x1d:
        {
// switch_5348_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x1e:
        {
// switch_5348_case_0x1e
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x1f:
        {
// switch_5348_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x20:
        {
// switch_5348_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x21:
        {
// switch_5348_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x22:
        {
// switch_5348_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x23:
        {
// switch_5348_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x24:
        {
// switch_5348_case_0x24
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x25:
        {
// switch_5348_case_0x25
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x26:
        {
// switch_5348_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x27:
        {
// switch_5348_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x28:
        {
// switch_5348_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x29:
        {
// switch_5348_case_0x29
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x2a:
        {
// switch_5348_case_0x2a
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x2b:
        {
// switch_5348_case_0x2b
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x2c:
        {
// switch_5348_case_0x2c
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x2d:
        {
// switch_5348_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x2e:
        {
// switch_5348_case_0x2e
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x2f:
        {
// switch_5348_case_0x2f
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x30:
        {
// switch_5348_case_0x30
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x31:
        {
// switch_5348_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x32:
        {
// switch_5348_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x33:
        {
// switch_5348_case_0x33
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x34:
        {
// switch_5348_case_0x34
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x35:
        {
// switch_5348_case_0x35
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x36:
        {
// switch_5348_case_0x36
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x37:
        {
// switch_5348_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x38:
        {
// switch_5348_case_0x38
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
            pri = fun_09A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5348_case_default
        }
        case 0x39:
        {
// switch_5348_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x3a:
        {
// switch_5348_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x3b:
        {
// switch_5348_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x3c:
        {
// switch_5348_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x3d:
        {
// switch_5348_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
        case 0x3e:
        {
// switch_5348_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            OP_JUMP switch_5348_case_default
        }
    }
}
// fun_5B40
fun_5B40() {
    pri = arg_4;
    OP_JNZ lab_5B78
    var_8 = 0;
    pri = fun_0C48()
// lab_5B78
    pri = arg_1;
    switch (pri) {
// switch_6F50
        case default:
        {
// switch_6F50_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0D08(var_264)
            OP_JZER lab_7518
            pri = arg_3;
            switch (pri) {
// switch_74C0
                case default:
                {
// switch_74C0_case_default
                    OP_JUMP lab_77D0
// lab_77D0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7840
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7840
                    var_8 = 0;
                    pri = fun_0C88()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_74C0_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_74C0_case_default
                }
                case 0x2:
                {
// switch_74C0_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_74C0_case_default
                }
                case 0x3:
                {
// switch_74C0_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_74C0_case_default
                }
            }
// lab_7518
            pri = arg_1;
            OP_JZER lab_7568
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7568
            pri = 0;
            OP_JUMP lab_7570
// lab_7568
            pri = 1;
// lab_7570
            OP_JZER lab_75D8
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0738(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_75D8
            pri = 1;
            OP_JUMP lab_75E0
// lab_75D8
            pri = 0;
// lab_75E0
            OP_JZER lab_7630
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_77D0
// lab_7630
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7698
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_77D0
// lab_7698
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0738(var_24, var_16)
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
// switch_6F50_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x1:
        {
// switch_6F50_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x2:
        {
// switch_6F50_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x3:
        {
// switch_6F50_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x4:
        {
// switch_6F50_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x5:
        {
// switch_6F50_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0970(var_40)
            OP_JUMP switch_6F50_case_default
        }
        case 0x6:
        {
// switch_6F50_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x7:
        {
// switch_6F50_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x8:
        {
// switch_6F50_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x9:
        {
// switch_6F50_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0xa:
        {
// switch_6F50_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0xb:
        {
// switch_6F50_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0xc:
        {
// switch_6F50_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0xd:
        {
// switch_6F50_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0xe:
        {
// switch_6F50_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0xf:
        {
// switch_6F50_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x10:
        {
// switch_6F50_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x11:
        {
// switch_6F50_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x12:
        {
// switch_6F50_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x13:
        {
// switch_6F50_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x14:
        {
// switch_6F50_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x15:
        {
// switch_6F50_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x16:
        {
// switch_6F50_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x17:
        {
// switch_6F50_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x18:
        {
// switch_6F50_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x19:
        {
// switch_6F50_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x1a:
        {
// switch_6F50_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x1b:
        {
// switch_6F50_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x1c:
        {
// switch_6F50_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x1d:
        {
// switch_6F50_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x1e:
        {
// switch_6F50_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x1f:
        {
// switch_6F50_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x20:
        {
// switch_6F50_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x21:
        {
// switch_6F50_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x22:
        {
// switch_6F50_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x23:
        {
// switch_6F50_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x24:
        {
// switch_6F50_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x25:
        {
// switch_6F50_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x26:
        {
// switch_6F50_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x27:
        {
// switch_6F50_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x28:
        {
// switch_6F50_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x29:
        {
// switch_6F50_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x2a:
        {
// switch_6F50_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x2b:
        {
// switch_6F50_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x2c:
        {
// switch_6F50_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x2d:
        {
// switch_6F50_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x2e:
        {
// switch_6F50_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x2f:
        {
// switch_6F50_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x30:
        {
// switch_6F50_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x31:
        {
// switch_6F50_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x32:
        {
// switch_6F50_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x33:
        {
// switch_6F50_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x34:
        {
// switch_6F50_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x35:
        {
// switch_6F50_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x36:
        {
// switch_6F50_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x37:
        {
// switch_6F50_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x38:
        {
// switch_6F50_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x39:
        {
// switch_6F50_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x3a:
        {
// switch_6F50_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x3b:
        {
// switch_6F50_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x3c:
        {
// switch_6F50_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x3d:
        {
// switch_6F50_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
        case 0x3e:
        {
// switch_6F50_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_06F8(var_24, var_16, var_8)
            OP_JUMP switch_6F50_case_default
        }
    }
}
// fun_7870
fun_7870() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7970
        case default:
        {
// switch_7970_case_default
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
// switch_7970_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7970_case_default
        }
        case 0x1:
        {
// switch_7970_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7970_case_default
        }
        case 0x2:
        {
// switch_7970_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7970_case_default
        }
        case 0x3:
        {
// switch_7970_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7970_case_default
        }
    }
}
// fun_7A30
fun_7A30() {
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
    pri = fun_1610(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1770()
    pri = 0;
    return pri;
}
// fun_7AC8
fun_7AC8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7870(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_7A30(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_7B70
fun_7B70() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7BC0
// lab_7BC0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7C38
    OP_JUMP lab_7C68
// lab_7C38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7BC0
// lab_7C68
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7CF0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5B40(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0D68(var_56)
// lab_7CF0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7D58
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0CC8(var_24, var_16)
// lab_7D58
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0CC8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7E18
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0770(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0548(var_88, var_80, var_72, var_64, var_56)
// lab_7E18
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7E58
    pri = 0;
    return pri;
// lab_7E58
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7FA0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_06C0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_7F68
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_7FA0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0598(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0598(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0770(var_40)
    pri = 0;
    return pri;
// lab_7F68
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0CC8(var_16, var_8)
}
// fun_8028
fun_8028() {
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
    pri = fun_7AC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1808(var_112)
    var_128 = 0;
    pri = fun_18C8()
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
    pri = fun_7B70(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_81A0
fun_81A0() {
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
// fun_82C8
fun_82C8() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8360
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0770(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_1C28(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8360
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_84B8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8420
    var_24 = 30520;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8420
    pri = 1;
    OP_JUMP lab_8428
// lab_84B8
    pri = 0;
    return pri;
// lab_8420
    pri = 0;
// lab_8428
    OP_JZER lab_84B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0770(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_1C28(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_84C8
fun_84C8() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_82C8(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8550(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8550
fun_8550() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8868(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_85B8
fun_85B8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8628
    OP_CONST_S -8, 1
// lab_8628
    pri = arg_0;
    OP_JNZ lab_8648
    OP_ZERO_P_S -8
// lab_8648
    pri = var_8;
    OP_JZER lab_86D0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_86D0
    pri = 0;
    return pri;
}
// fun_86E8
fun_86E8() {
    var_8 = 30624;
    var_16 = 8;
    pri = fun_18F8(var_8)
    var_24 = 0;
    pri = fun_1930()
    var_32 = 30800;
    pri = SoundPostEvent(var_32)
    var_40 = 0;
    var_48 = 8;
    pri = fun_1A00(var_40)
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 16;
    pri = fun_1A50(var_64, var_56)
    var_80 = 3;
    var_88 = 0;
    var_96 = -1785521252434788896;
    var_104 = 24;
    pri = fun_1710(var_96, var_88, var_80)
    var_112 = 0;
    var_120 = 8;
    pri = fun_0408(var_112)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1808(var_128)
    var_144 = 0;
    pri = fun_18C8()
    var_152 = arg_0;
    pri = PokePartyAddMember(var_152)
    var_160 = 0;
    pri = fun_19D0()
    pri = 0;
    return pri;
}
// fun_8868
fun_8868() {
    var_8 = 30984;
    var_16 = 8;
    pri = fun_18F8(var_8)
    var_24 = 0;
    pri = fun_1930()
    pri = arg_3;
    OP_JNZ lab_8988
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8950
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_89F8(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8978
// lab_8988
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8B98(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8950
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8AC0(var_16, var_8)
// lab_8978
    OP_JUMP lab_89D0
// lab_89D0
    var_8 = 0;
    pri = fun_19D0()
    pri = 0;
    return pri;
}
// fun_89F8
fun_89F8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8B98(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8AA8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8AA8
    pri = 0;
    return pri;
}
// fun_8AC0
fun_8AC0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1AA0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1710(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1808(var_72)
    var_88 = 0;
    pri = fun_18C8()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1A00(var_96)
    pri = 0;
    return pri;
}
// fun_8B98
fun_8B98() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8BE0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8EA0(var_8)
// lab_8BE0
    pri = arg_4;
    OP_JNZ lab_8C48
    var_8 = 0;
    var_16 = 8;
    pri = fun_1A00(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1AA0(var_40, var_32, var_24)
// lab_8C48
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8CE8
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1AF0(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1710(var_56, var_48, var_40)
    OP_JUMP lab_8DD8
// lab_8CE8
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8DA0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8DA0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8DA0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1710(var_24, var_16, var_8)
// lab_8DD8
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8E18
    var_8 = 0;
    var_16 = 8;
    pri = fun_0408(var_8)
// lab_8E18
    var_8 = 1;
    var_16 = 8;
    pri = fun_1808(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_90A8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_85B8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8EA0
fun_8EA0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8F00
    var_16 = 31144;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8F00
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9040
        case default:
        {
// switch_9040_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9030
            var_16 = 31688;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9030
            OP_JUMP lab_9078
// lab_9078
            var_8 = 31904;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9040_case_0x1
            var_8 = 31360;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9078
        }
        case 0x2:
        {
// switch_9040_case_0x2
            var_8 = 31488;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9078
        }
    }
}
// fun_90A8
fun_90A8() {
    pri = arg_2;
    OP_JNZ lab_9190
    var_8 = 0;
    var_16 = 8;
    pri = fun_1A00(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1AA0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1B40(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9190
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1710(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1808(var_40)
    var_56 = 0;
    pri = fun_18C8()
    pri = 0;
    return pri;
}
// fun_9208
fun_9208() {
    var_8 = 0;
    pri = fun_1B90()
    OP_JZER lab_9308
    var_16 = 32088;
    var_24 = 8;
    pri = fun_18F8(var_16)
    var_32 = 0;
    pri = fun_1930()
    var_40 = 3;
    var_48 = 0;
    var_56 = -7763515063518001126;
    var_64 = 24;
    pri = fun_1710(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1808(var_72)
    var_88 = 0;
    pri = fun_18C8()
    var_96 = 0;
    pri = fun_19D0()
    pri = 1;
    return pri;
// lab_9308
    pri = 0;
    return pri;
}
// fun_9318
fun_9318() {
    pri = g_mode;
    switch (pri) {
// switch_93D8
        case default:
        {
// switch_93D8_case_default
            pri = CommandNOP()
            OP_JUMP lab_9420
// lab_9420
            pri = 0;
            return pri;
        }
        case 0x978ac05f03864b6f:
        {
// switch_93D8_case_0x978ac05f03864b6f
            var_8 = 0;
            pri = fun_9C30()
            OP_JUMP lab_9420
        }
        case 0xbef4aab8901afe60:
        {
// switch_93D8_case_0xbef4aab8901afe60
            var_8 = 0;
            pri = fun_9448()
            OP_JUMP lab_9420
        }
        case 0x0:
        {
// switch_93D8_case_0x0
            var_8 = 0;
            pri = fun_9430()
            OP_JUMP lab_9420
        }
    }
}
// fun_9430
fun_9430() {
    pri = 0;
    return pri;
}
// fun_9448
fun_9448() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 910760097718419703;
    pri = FlagGet(var_16)
    OP_JNZ lab_94E0
    var_24 = var_8;
    var_32 = 8;
    pri = fun_9518(var_24)
    OP_JUMP lab_9500
// lab_94E0
    var_8 = var_8;
    var_16 = 8;
    pri = fun_9BA8(var_8)
// lab_9500
    pri = 0;
    return pri;
}
// fun_9518
fun_9518() {
    var_8 = 0;
    pri = fun_9208()
    OP_JZER lab_9668
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = arg_0;
    var_64 = 48;
    pri = fun_7870(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = 2084370835328739466;
    var_120 = arg_0;
    var_128 = 56;
    pri = fun_1610(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1808(var_136)
    var_152 = 0;
    pri = fun_18C8()
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = arg_0;
    var_192 = 32;
    pri = fun_7B70(var_184, var_176, var_168, var_160)
    OP_JUMP lab_9B98
// lab_9668
    var_8 = 0;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7870(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    var_104 = 2084368636305483044;
    var_112 = arg_0;
    var_120 = 56;
    pri = fun_1610(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_128 = 1;
    var_136 = 8;
    pri = fun_1808(var_128)
    var_144 = 0;
    pri = fun_18C8()
    var_152 = 848;
    var_160 = 6001817806598733409;
    var_168 = 16;
    pri = fun_86E8(var_160, var_152)
    var_176 = 0;
    var_184 = 0;
    var_192 = 0;
    var_200 = 848;
    pri = SoundPlayPokeVoice(var_200, var_192, var_184, var_176)
    var_208 = 0;
    var_216 = 3;
    var_224 = 0;
    var_232 = 100;
    var_240 = -1;
    OP_PUSH2_C 1632232118372114437, 481081370348509283
    var_248 = 56;
    pri = fun_1610(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_256 = 1;
    var_264 = 8;
    pri = fun_1808(var_256)
    var_272 = 0;
    pri = fun_18C8()
    var_280 = 1;
    var_288 = 0;
    var_296 = 32272;
    var_304 = 8;
    var_312 = 32;
    pri = fun_0308(var_304, var_296, var_288, var_280)
    var_320 = 0;
    pri = fun_0378()
    var_328 = 481081370348509283;
    var_336 = 8;
    pri = fun_0518(var_328)
    var_344 = 15;
    var_352 = 8;
    pri = fun_0060(var_344)
    var_360 = 32320;
    var_368 = 8;
    var_376 = 16;
    pri = fun_02A8(var_368, var_360)
    var_384 = 0;
    pri = fun_0378()
    var_392 = 0;
    var_400 = 3;
    var_408 = 0;
    var_416 = 100;
    var_424 = -1;
    var_432 = 2084371934840367677;
    var_440 = arg_0;
    var_448 = 56;
    pri = fun_1610(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 1;
    var_464 = 8;
    pri = fun_1808(var_456)
    var_472 = 0;
    pri = fun_18C8()
    var_480 = 1;
    var_488 = 3;
    var_496 = 0;
    var_504 = 0;
    var_512 = arg_0;
    var_520 = 40;
    pri = fun_5B40(var_512, var_504, var_496, var_488, var_480)
    var_528 = arg_0;
    var_536 = 8;
    pri = fun_0770(var_528)
    var_544 = 6;
    var_552 = 4;
    var_560 = 2;
    var_568 = 0;
    var_576 = 8;
    var_584 = 5;
    var_592 = 1124;
    var_600 = arg_0;
    var_608 = 64;
    pri = fun_84C8(var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_616 = 1;
    var_624 = 1;
    var_632 = -1;
    var_640 = -1;
    var_648 = 0;
    var_656 = 0;
    var_664 = arg_0;
    var_672 = 56;
    pri = fun_3808(var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_680 = 0;
    var_688 = 3;
    var_696 = 0;
    var_704 = 100;
    var_712 = -1;
    var_720 = 2084370835328739466;
    var_728 = arg_0;
    var_736 = 56;
    pri = fun_1610(var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_744 = 1;
    var_752 = 8;
    pri = fun_1808(var_744)
    var_760 = 0;
    pri = fun_18C8()
    var_768 = 910760097718419703;
    pri = FlagSet(var_768)
    var_776 = 0;
    var_784 = 0;
    var_792 = 0;
    var_800 = arg_0;
    var_808 = 32;
    pri = fun_7B70(var_800, var_792, var_784, var_776)
// lab_9B98
    pri = 0;
    return pri;
}
// fun_9BA8
fun_9BA8() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 2084370835328739466;
    var_88 = 80;
    pri = fun_8028(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9C30
fun_9C30() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = var_8;
    var_40 = 24;
    pri = fun_81A0(var_32, var_24, var_16)
    var_48 = 0;
    var_56 = 3;
    var_64 = 0;
    var_72 = 100;
    var_80 = -1;
    var_88 = 1632232118372114437;
    var_96 = var_8;
    var_104 = 56;
    pri = fun_1610(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1808(var_112)
    var_128 = 0;
    pri = fun_18C8()
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    var_160 = var_8;
    var_168 = 32;
    pri = fun_7B70(var_160, var_152, var_144, var_136)
    pri = 0;
    return pri;
}
