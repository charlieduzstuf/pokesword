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
    pri = arg_1;
    OP_JZER lab_01A8
    var_8 = arg_0;
    pri = GetPublicRand(var_8)
    return pri;
// lab_01A8
    pri = arg_0;
    OP_ADD_P_C -1
    var_8 = pri;
    pri = GetPublicRand(var_8)
    return pri;
}
// fun_01E0
fun_01E0() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0210
// lab_0210
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0310
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0290
    pri = 0;
    return pri;
// lab_0310
    pri = 0;
    return pri;
// lab_0290
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
    OP_JUMP lab_0208
// lab_0208
    OP_INC_P_S -8
}
// fun_0328
fun_0328() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0370
// lab_0370
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_03B0
    OP_JUMP lab_0420
// lab_03B0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_03F0
    OP_JUMP lab_0420
// lab_03F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0370
// lab_0420
    pri = 0;
    return pri;
}
// fun_0438
fun_0438() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0488
fun_0488() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BF8(var_8)
    OP_JZER lab_0500
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0C28(var_24)
    OP_JNZ lab_0500
    pri = 0;
    return pri;
// lab_0500
    OP_JUMP lab_0510
// lab_0510
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0570
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0570
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0510
    pri = 0;
    return pri;
}
// fun_05B0
fun_05B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_05E8
fun_05E8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0628
fun_0628() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0660
fun_0660() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_06A8
    pri = 0;
    return pri;
// lab_06A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_06E8
// lab_06E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BF8(var_8)
    OP_JNZ lab_0770
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0760
    pri = 0;
    return pri;
// lab_0770
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_07B8
    pri = 0;
    return pri;
// lab_07B8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0818
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0860(var_8)
    pri = 0;
    return pri;
// lab_0818
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06E8
    pri = 0;
    return pri;
// lab_0760
    OP_JUMP lab_07B8
}
// fun_0860
fun_0860() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0898
fun_0898() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_08E8
    pri = 0;
    return pri;
// lab_08E8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BF8(var_8)
    OP_JZER lab_0A18
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0940
    OP_ZERO_P_S 64
// lab_0A18
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A50
    OP_CONST_S 64, 1
// lab_0A50
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A88
    OP_CONST_S 72, 1
// lab_0A88
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
// lab_0940
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0968
    OP_ZERO_P_S 72
// lab_0968
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
    OP_JUMP lab_0B28
// lab_0B28
    pri = 0;
    return pri;
}
// fun_0B38
fun_0B38() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B78
fun_0B78() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0BB8
fun_0BB8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0BF8
fun_0BF8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0C28
fun_0C28() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0C58
fun_0C58() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0C88
fun_0C88() {
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
// switch_12A0
        case default:
        {
// switch_12A0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_12E8
// lab_12E8
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
            OP_JNZ lab_1390
            var_88 = 0;
            pri = fun_1720()
// lab_1390
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_12A0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0E88
                case default:
                {
// switch_0E88_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0F00
// lab_0F00
                    OP_JUMP lab_12E8
                }
                case 0x0:
                {
// switch_0E88_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0F00
                }
                case 0x1:
                {
// switch_0E88_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0F00
                }
                case 0x2:
                {
// switch_0E88_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0F00
                }
                case 0x3:
                {
// switch_0E88_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0F00
                }
                case 0x4:
                {
// switch_0E88_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0F00
                }
                case 0x5:
                {
// switch_0E88_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0F00
                }
            }
        }
        case 0x65:
        {
// switch_12A0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1040
                case default:
                {
// switch_1040_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_10B8
// lab_10B8
                    OP_JUMP lab_12E8
                }
                case 0x0:
                {
// switch_1040_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_10B8
                }
                case 0x1:
                {
// switch_1040_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_10B8
                }
                case 0x2:
                {
// switch_1040_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_10B8
                }
                case 0x3:
                {
// switch_1040_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_10B8
                }
                case 0x4:
                {
// switch_1040_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_10B8
                }
                case 0x5:
                {
// switch_1040_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_10B8
                }
            }
        }
        case 0x66:
        {
// switch_12A0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_11F8
                case default:
                {
// switch_11F8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1270
// lab_1270
                    OP_JUMP lab_12E8
                }
                case 0x0:
                {
// switch_11F8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1270
                }
                case 0x1:
                {
// switch_11F8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1270
                }
                case 0x2:
                {
// switch_11F8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1270
                }
                case 0x3:
                {
// switch_11F8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1270
                }
                case 0x4:
                {
// switch_11F8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1270
                }
                case 0x5:
                {
// switch_11F8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1270
                }
            }
        }
    }
}
// fun_13A8
fun_13A8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0C88(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1410
fun_1410() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0628(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_14B8
    pri = 1;
    return pri;
// lab_14B8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1500
fun_1500() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1550
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1410(var_8)
    arg_2 = pri;
// lab_1550
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0C88(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15B0
fun_15B0() {
    pri = arg_2;
    var_8 = pri;
    pri = PlayerGetSex()
    OP_JNZ lab_1608
    pri = arg_1;
    var_8 = pri;
// lab_1608
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = var_8;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1500(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1670
fun_1670() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_13A8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16C0
fun_16C0() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1670(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1720
fun_1720() {
    OP_JUMP lab_1738
// lab_1738
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1778
    pri = 0;
    return pri;
// lab_1778
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1738
    pri = 0;
    return pri;
}
// fun_17B8
fun_17B8() {
    var_8 = 0;
    pri = fun_1720()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1868
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1868
    pri = 0;
    return pri;
}
// fun_1878
fun_1878() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_18A8
fun_18A8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_18D8
// lab_18D8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1918
    OP_JUMP lab_1948
// lab_1918
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_18D8
// lab_1948
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1990
fun_1990() {
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
// fun_1A00
fun_1A00() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_1A78()
    return pri;
}
// fun_1A78
fun_1A78() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_1AB8
fun_1AB8() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1AF0
fun_1AF0() {
    OP_JUMP lab_1B08
// lab_1B08
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1B50
    OP_JUMP lab_1B80
    OP_JUMP lab_1B70
// lab_1B50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1B80
    pri = 0;
    return pri;
// lab_1B70
    OP_JUMP lab_1B08
}
// fun_1B90
fun_1B90() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1BC0
fun_1BC0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C10
fun_1C10() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C60
fun_1C60() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CB0
fun_1CB0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D00
fun_1D00() {
    var_16 = 0;
    var_24 = 0;
    pri = PokePartyGetCount(var_24, var_16)
    var_8 = pri;
    OP_ZERO_P_S -16
    OP_JUMP lab_1D68
// lab_1D68
    OP_LOAD_S_BOTH -16, -8
    OP_JSGEQ lab_1ED0
    var_16 = 0;
    var_24 = 0;
    var_32 = var_16;
    pri = PokePartyGetParam(var_32, var_24, var_16)
    var_24 = pri;
    OP_LOAD_S_BOTH 24, -24
    OP_JNEQ lab_1EB8
    pri = arg_1;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1E30
    pri = 1;
    return pri;
// lab_1ED0
    pri = 0;
    return pri;
// lab_1EB8
    OP_JUMP lab_1D60
// lab_1D60
    OP_INC_P_S -16
// lab_1E30
    var_16 = 0;
    var_24 = 1;
    var_32 = var_16;
    pri = PokePartyGetParam(var_32, var_24, var_16)
    var_32 = pri;
    OP_LOAD_S_BOTH -32, 32
    OP_JNEQ lab_1EB0
    pri = 1;
    return pri;
// lab_1EB0
}
// fun_1EF0
fun_1EF0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1D00(var_16, var_8)
    OP_JZER lab_1F40
    pri = 1;
    return pri;
// lab_1F40
    var_8 = arg_1;
    var_16 = arg_0;
    pri = PokeBoxMonsNoExists(var_16, var_8)
    OP_JZER lab_1F88
    pri = 1;
    return pri;
// lab_1F88
    pri = 0;
    return pri;
}
// fun_1F98
fun_1F98() {
    var_8 = arg_0;
    pri = ItemGetNum(var_8)
    OP_MOVE_ALT 
    pri = 0;
    OP_XCHG 
    OP_SGRTR 
    return pri;
}
// fun_1FE8
fun_1FE8() {
    var_8 = arg_0;
    pri = AddPocketMoney_(var_8)
    return pri;
}
// fun_2018
fun_2018() {
    var_8 = arg_0;
    pri = ConsumePocketMoney_(var_8)
    return pri;
}
// fun_2048
fun_2048() {
    pri = GetPocketMoney_()
    return pri;
}
// fun_2070
fun_2070() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2100(var_8)
    var_24 = arg_0;
    pri = OpenWalletWindow_(var_24)
    pri = 0;
    return pri;
}
// fun_20C8
fun_20C8() {
    var_8 = 0;
    pri = CloseWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_2100
fun_2100() {
    var_8 = arg_0;
    pri = UpdateWalletWindow_(var_8)
    pri = 0;
    return pri;
}
// fun_2138
fun_2138() {
    pri = arg_5;
    OP_JNZ lab_2170
    var_8 = 0;
    pri = fun_0B38()
// lab_2170
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_21C0
    OP_CONST_S -8, -1
// lab_21C0
    pri = arg_1;
    switch (pri) {
// switch_3C78
        case default:
        {
// switch_3C78_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4120
            var_520 = 20392;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0628(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4120
            pri = 1;
            OP_JUMP lab_4128
// lab_4120
            pri = 0;
// lab_4128
            OP_JZER lab_4178
            var_8 = 64;
            var_16 = 20488;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_01E0(var_16, var_8, var_0)
            OP_JUMP lab_43D0
// lab_4178
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_41E0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_41E0
            pri = 1;
            OP_JUMP lab_41E8
// lab_41E0
            pri = 0;
// lab_41E8
            OP_JZER lab_4370
            var_16 = 20664;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0628(var_24, var_16)
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
            var_176 = 20768;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20784;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_43D0
// lab_4370
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_01E0(var_16, var_8, var_0)
// lab_43D0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4440
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4440
            var_8 = 0;
            pri = fun_0B78()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3C78_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x1:
        {
// switch_3C78_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x2:
        {
// switch_3C78_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x3:
        {
// switch_3C78_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x4:
        {
// switch_3C78_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x5:
        {
// switch_3C78_case_0x5
            var_8 = 2;
            var_16 = 10648;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05E8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0860(var_40)
            OP_JUMP switch_3C78_case_default
        }
        case 0x6:
        {
// switch_3C78_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x7:
        {
// switch_3C78_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x8:
        {
// switch_3C78_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x9:
        {
// switch_3C78_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0xa:
        {
// switch_3C78_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0xb:
        {
// switch_3C78_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0xc:
        {
// switch_3C78_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0xd:
        {
// switch_3C78_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11296;
            var_72 = 11120;
            var_80 = 10936;
            var_88 = 10744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0xe:
        {
// switch_3C78_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11952;
            var_72 = 11744;
            var_80 = 11528;
            var_88 = 11304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0xf:
        {
// switch_3C78_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12344;
            var_72 = 12224;
            var_80 = 12096;
            var_88 = 11960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x10:
        {
// switch_3C78_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12688;
            var_72 = 12584;
            var_80 = 12472;
            var_88 = 12352;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x11:
        {
// switch_3C78_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13032;
            var_72 = 12928;
            var_80 = 12816;
            var_88 = 12696;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x12:
        {
// switch_3C78_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x13:
        {
// switch_3C78_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x14:
        {
// switch_3C78_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13592;
            var_72 = 13416;
            var_80 = 13232;
            var_88 = 13040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x15:
        {
// switch_3C78_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x16:
        {
// switch_3C78_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x17:
        {
// switch_3C78_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x18:
        {
// switch_3C78_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x19:
        {
// switch_3C78_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x1a:
        {
// switch_3C78_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x1b:
        {
// switch_3C78_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x1c:
        {
// switch_3C78_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13984;
            var_72 = 13864;
            var_80 = 13736;
            var_88 = 13600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x1d:
        {
// switch_3C78_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x1e:
        {
// switch_3C78_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14448;
            var_72 = 14304;
            var_80 = 14152;
            var_88 = 13992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x1f:
        {
// switch_3C78_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x20:
        {
// switch_3C78_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x21:
        {
// switch_3C78_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x22:
        {
// switch_3C78_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x23:
        {
// switch_3C78_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x24:
        {
// switch_3C78_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14816;
            var_72 = 14704;
            var_80 = 14584;
            var_88 = 14456;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x25:
        {
// switch_3C78_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15184;
            var_72 = 15072;
            var_80 = 14952;
            var_88 = 14824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x26:
        {
// switch_3C78_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x27:
        {
// switch_3C78_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x28:
        {
// switch_3C78_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x29:
        {
// switch_3C78_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15624;
            var_72 = 15488;
            var_80 = 15344;
            var_88 = 15192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x2a:
        {
// switch_3C78_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16016;
            var_72 = 15896;
            var_80 = 15768;
            var_88 = 15632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x2b:
        {
// switch_3C78_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16432;
            var_72 = 16304;
            var_80 = 16168;
            var_88 = 16024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x2c:
        {
// switch_3C78_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16872;
            var_72 = 16736;
            var_80 = 16592;
            var_88 = 16440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x2d:
        {
// switch_3C78_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x2e:
        {
// switch_3C78_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17192;
            var_72 = 17096;
            var_80 = 16992;
            var_88 = 16880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x2f:
        {
// switch_3C78_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17584;
            var_72 = 17464;
            var_80 = 17336;
            var_88 = 17200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x30:
        {
// switch_3C78_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17976;
            var_72 = 17856;
            var_80 = 17728;
            var_88 = 17592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x31:
        {
// switch_3C78_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x32:
        {
// switch_3C78_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x33:
        {
// switch_3C78_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18368;
            var_72 = 18248;
            var_80 = 18120;
            var_88 = 17984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x34:
        {
// switch_3C78_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18736;
            var_72 = 18624;
            var_80 = 18504;
            var_88 = 18376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x35:
        {
// switch_3C78_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19224;
            var_72 = 19072;
            var_80 = 18912;
            var_88 = 18744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x36:
        {
// switch_3C78_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19592;
            var_72 = 19480;
            var_80 = 19360;
            var_88 = 19232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x37:
        {
// switch_3C78_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x38:
        {
// switch_3C78_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19960;
            var_72 = 19848;
            var_80 = 19728;
            var_88 = 19600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0898(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C78_case_default
        }
        case 0x39:
        {
// switch_3C78_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x3a:
        {
// switch_3C78_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x3b:
        {
// switch_3C78_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x3c:
        {
// switch_3C78_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19968;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x3d:
        {
// switch_3C78_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20144;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
        case 0x3e:
        {
// switch_3C78_case_0x3e
            var_8 = 4;
            var_16 = 20288;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05E8(var_24, var_16, var_8)
            OP_JUMP switch_3C78_case_default
        }
    }
}
// fun_4470
fun_4470() {
    pri = arg_4;
    OP_JNZ lab_44A8
    var_8 = 0;
    pri = fun_0B38()
// lab_44A8
    pri = arg_1;
    switch (pri) {
// switch_5880
        case default:
        {
// switch_5880_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21360;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0BF8(var_264)
            OP_JZER lab_5E48
            pri = arg_3;
            switch (pri) {
// switch_5DF0
                case default:
                {
// switch_5DF0_case_default
                    OP_JUMP lab_6100
// lab_6100
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6170
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6170
                    var_8 = 0;
                    pri = fun_0B78()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5DF0_case_0x1
                    var_8 = 32;
                    var_16 = 21512;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E0(var_16, var_8, var_0)
                    OP_JUMP switch_5DF0_case_default
                }
                case 0x2:
                {
// switch_5DF0_case_0x2
                    var_8 = 32;
                    var_16 = 21616;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E0(var_16, var_8, var_0)
                    OP_JUMP switch_5DF0_case_default
                }
                case 0x3:
                {
// switch_5DF0_case_0x3
                    var_8 = 32;
                    var_16 = 21416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E0(var_16, var_8, var_0)
                    OP_JUMP switch_5DF0_case_default
                }
            }
// lab_5E48
            pri = arg_1;
            OP_JZER lab_5E98
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5E98
            pri = 0;
            OP_JUMP lab_5EA0
// lab_5E98
            pri = 1;
// lab_5EA0
            OP_JZER lab_5F08
            var_8 = 21712;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0628(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5F08
            pri = 1;
            OP_JUMP lab_5F10
// lab_5F08
            pri = 0;
// lab_5F10
            OP_JZER lab_5F60
            var_8 = 32;
            var_16 = 21808;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01E0(var_16, var_8, var_0)
            OP_JUMP lab_6100
// lab_5F60
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5FC8
            var_8 = 32;
            var_16 = 21968;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01E0(var_16, var_8, var_0)
            OP_JUMP lab_6100
// lab_5FC8
            var_16 = 22088;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0628(var_24, var_16)
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
            var_176 = 22192;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22208;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5880_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x1:
        {
// switch_5880_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x2:
        {
// switch_5880_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x3:
        {
// switch_5880_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x4:
        {
// switch_5880_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x5:
        {
// switch_5880_case_0x5
            var_8 = 1;
            var_16 = 20840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05E8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0860(var_40)
            OP_JUMP switch_5880_case_default
        }
        case 0x6:
        {
// switch_5880_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x7:
        {
// switch_5880_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x8:
        {
// switch_5880_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x9:
        {
// switch_5880_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0xa:
        {
// switch_5880_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0xb:
        {
// switch_5880_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0xc:
        {
// switch_5880_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0xd:
        {
// switch_5880_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0xe:
        {
// switch_5880_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0xf:
        {
// switch_5880_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x10:
        {
// switch_5880_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x11:
        {
// switch_5880_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x12:
        {
// switch_5880_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x13:
        {
// switch_5880_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x14:
        {
// switch_5880_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x15:
        {
// switch_5880_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x16:
        {
// switch_5880_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x17:
        {
// switch_5880_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x18:
        {
// switch_5880_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x19:
        {
// switch_5880_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x1a:
        {
// switch_5880_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x1b:
        {
// switch_5880_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x1c:
        {
// switch_5880_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x1d:
        {
// switch_5880_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x1e:
        {
// switch_5880_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x1f:
        {
// switch_5880_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x20:
        {
// switch_5880_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x21:
        {
// switch_5880_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x22:
        {
// switch_5880_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x23:
        {
// switch_5880_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x24:
        {
// switch_5880_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x25:
        {
// switch_5880_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x26:
        {
// switch_5880_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x27:
        {
// switch_5880_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x28:
        {
// switch_5880_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x29:
        {
// switch_5880_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x2a:
        {
// switch_5880_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x2b:
        {
// switch_5880_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x2c:
        {
// switch_5880_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x2d:
        {
// switch_5880_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x2e:
        {
// switch_5880_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x2f:
        {
// switch_5880_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x30:
        {
// switch_5880_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x31:
        {
// switch_5880_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x32:
        {
// switch_5880_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x33:
        {
// switch_5880_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x34:
        {
// switch_5880_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x35:
        {
// switch_5880_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x36:
        {
// switch_5880_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x37:
        {
// switch_5880_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x38:
        {
// switch_5880_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x39:
        {
// switch_5880_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x3a:
        {
// switch_5880_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x3b:
        {
// switch_5880_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x3c:
        {
// switch_5880_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20936;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x3d:
        {
// switch_5880_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21112;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
        case 0x3e:
        {
// switch_5880_case_0x3e
            var_8 = 3;
            var_16 = 21256;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_05E8(var_24, var_16, var_8)
            OP_JUMP switch_5880_case_default
        }
    }
}
// fun_61A0
fun_61A0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_62A0
        case default:
        {
// switch_62A0_case_default
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
// switch_62A0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_62A0_case_default
        }
        case 0x1:
        {
// switch_62A0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_62A0_case_default
        }
        case 0x2:
        {
// switch_62A0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_62A0_case_default
        }
        case 0x3:
        {
// switch_62A0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_62A0_case_default
        }
    }
}
// fun_6360
fun_6360() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_63B0
// lab_63B0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 22256;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_6428
    OP_JUMP lab_6458
// lab_6428
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_63B0
// lab_6458
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_64E0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_4470(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0C58(var_56)
// lab_64E0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6548
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0BB8(var_24, var_16)
// lab_6548
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0BB8(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6608
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0660(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0438(var_88, var_80, var_72, var_64, var_56)
// lab_6608
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6648
    pri = 0;
    return pri;
// lab_6648
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6790
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 22376;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_05B0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6758
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_6790
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0488(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0488(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0660(var_40)
    pri = 0;
    return pri;
// lab_6758
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0BB8(var_16, var_8)
}
// fun_6818
fun_6818() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_69B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6880
fun_6880() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_68F0
    OP_CONST_S -8, 1
// lab_68F0
    pri = arg_0;
    OP_JNZ lab_6910
    OP_ZERO_P_S -8
// lab_6910
    pri = var_8;
    OP_JZER lab_6998
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_6998
    pri = 0;
    return pri;
}
// fun_69B0
fun_69B0() {
    var_8 = 22512;
    var_16 = 8;
    pri = fun_1AB8(var_8)
    var_24 = 0;
    pri = fun_1AF0()
    pri = arg_3;
    OP_JNZ lab_6AD0
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_6A98
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_6B40(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_6AC0
// lab_6AD0
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_6CE0(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_6A98
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_6C08(var_16, var_8)
// lab_6AC0
    OP_JUMP lab_6B18
// lab_6B18
    var_8 = 0;
    pri = fun_1B90()
    pri = 0;
    return pri;
}
// fun_6B40
fun_6B40() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_6CE0(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_6BF0
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_6BF0
    pri = 0;
    return pri;
}
// fun_6C08
fun_6C08() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1C10(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_16C0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_17B8(var_72)
    var_88 = 0;
    pri = fun_1878()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1BC0(var_96)
    pri = 0;
    return pri;
}
// fun_6CE0
fun_6CE0() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_6D28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_6FE8(var_8)
// lab_6D28
    pri = arg_4;
    OP_JNZ lab_6D90
    var_8 = 0;
    var_16 = 8;
    pri = fun_1BC0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1C10(var_40, var_32, var_24)
// lab_6D90
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_6E30
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1C60(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_16C0(var_56, var_48, var_40)
    OP_JUMP lab_6F20
// lab_6E30
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_6EE8
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_6EE8
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_6EE8
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_16C0(var_24, var_16, var_8)
// lab_6F20
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_6F60
    var_8 = 0;
    var_16 = 8;
    pri = fun_0328(var_8)
// lab_6F60
    var_8 = 1;
    var_16 = 8;
    pri = fun_17B8(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_71F0(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_6880(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_6FE8
fun_6FE8() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_7048
    var_16 = 22672;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_7048
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_7188
        case default:
        {
// switch_7188_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_7178
            var_16 = 23216;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_7178
            OP_JUMP lab_71C0
// lab_71C0
            var_8 = 23432;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_7188_case_0x1
            var_8 = 22888;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_71C0
        }
        case 0x2:
        {
// switch_7188_case_0x2
            var_8 = 23016;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_71C0
        }
    }
}
// fun_71F0
fun_71F0() {
    pri = arg_2;
    OP_JNZ lab_72D8
    var_8 = 0;
    var_16 = 8;
    pri = fun_1BC0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1C10(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1CB0(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_72D8
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_16C0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_17B8(var_40)
    var_56 = 0;
    pri = fun_1878()
    pri = 0;
    return pri;
}
// fun_7350
fun_7350() {
    pri = g_mode;
    switch (pri) {
// switch_7410
        case default:
        {
// switch_7410_case_default
            pri = CommandNOP()
            OP_JUMP lab_7458
// lab_7458
            pri = 0;
            return pri;
        }
        case 0xede0477482d29491:
        {
// switch_7410_case_0xede0477482d29491
            var_8 = 0;
            pri = fun_7638()
            OP_JUMP lab_7458
        }
        case 0x0:
        {
// switch_7410_case_0x0
            var_8 = 0;
            pri = fun_7468()
            OP_JUMP lab_7458
        }
        case 0xdf3ff499d3dba95:
        {
// switch_7410_case_0xdf3ff499d3dba95
            var_8 = 0;
            pri = fun_9710()
            OP_JUMP lab_7458
        }
    }
}
// fun_7468
fun_7468() {
    pri = 0;
    return pri;
}
// fun_7480
fun_7480() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_74E0
    var_8 = 0;
    var_16 = 100;
    var_24 = 16;
    pri = fun_0160(var_16, var_8)
    OP_ADD_P_C 1
    arg_2 = pri;
// lab_74E0
    OP_ZERO_P_S -8
    OP_CONST_S -16, 1
    OP_JUMP lab_7528
// lab_7528
    OP_LOAD_S_BOTH -16, 24
    OP_JSGEQ lab_7618
    pri = var_8;
    var_8 = pri;
    pri = arg_1;
    var_16 = pri;
    pri = var_16;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    OP_LOAD_S_BOTH 40, -8
    OP_JSGRTR lab_7608
    pri = var_16;
    return pri;
// lab_7618
    pri = 0;
    return pri;
// lab_7608
    OP_JUMP lab_7520
// lab_7520
    OP_INC_P_S -16
}
// fun_7638
fun_7638() {
    var_8 = -5848485821678639270;
    pri = FlagGet(var_8)
    OP_JNZ lab_7A78
    var_16 = -8861703976595003544;
    pri = FlagGet(var_16)
    OP_JNZ lab_78E8
    var_32 = -4922461017337725029;
    pri = WorkGet(var_32)
    var_8 = pri;
    var_48 = -7370115527224682391;
    pri = WorkGet(var_48)
    var_16 = pri;
    var_64 = 9015833752062682035;
    pri = WorkGet(var_64)
    var_24 = pri;
    var_72 = 0;
    var_80 = -6879198357314225984;
    pri = WorkSet(var_80, var_72)
    var_88 = var_8;
    var_96 = 23616;
    var_104 = 29;
    var_112 = 24;
    pri = fun_7480(var_104, var_96, var_88)
    var_120 = pri;
    var_128 = -4922461017337725029;
    pri = WorkSet(var_128, var_120)
    var_136 = var_16;
    var_144 = 23616;
    var_152 = 29;
    var_160 = 24;
    pri = fun_7480(var_152, var_144, var_136)
    var_168 = pri;
    var_176 = -7370115527224682391;
    pri = WorkSet(var_176, var_168)
    var_184 = var_24;
    var_192 = 23616;
    var_200 = 29;
    var_208 = 24;
    pri = fun_7480(var_200, var_192, var_184)
    var_216 = pri;
    var_224 = 9015833752062682035;
    pri = WorkSet(var_224, var_216)
    var_232 = -8861703976595003544;
    pri = FlagSet(var_232)
    OP_JUMP lab_7A50
// lab_7A78
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    OP_CONST_S -16, 1
    var_32 = -4922461017337725029;
    pri = WorkGet(var_32)
    var_24 = pri;
    var_48 = -6879198357314225984;
    pri = WorkGet(var_48)
    var_32 = pri;
    var_64 = -7370115527224682391;
    pri = WorkGet(var_64)
    var_40 = pri;
    var_72 = 1;
    var_80 = 1;
    var_88 = 0;
    var_96 = 1;
    var_104 = 1;
    var_112 = var_8;
    var_120 = 48;
    pri = fun_61A0(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 9010327285021969031;
    pri = FlagGet(var_128)
    OP_JZER lab_7C38
    var_136 = -5293755627650084496;
    pri = FlagGet(var_136)
    OP_JNZ lab_7C38
    pri = 1;
    OP_JUMP lab_7C40
// lab_7C38
    pri = 0;
// lab_7C40
    OP_JZER lab_7EC8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 984792206066029073, 984784509484631596
    var_48 = var_8;
    var_56 = 64;
    pri = fun_15B0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_64 = 15;
    var_72 = 8;
    pri = fun_0060(var_64)
    var_80 = 1;
    var_88 = 8;
    pri = fun_17B8(var_80)
    var_96 = 0;
    var_104 = 3;
    var_112 = 0;
    var_120 = 100;
    var_128 = -1;
    var_136 = 984791106554400862;
    var_144 = var_8;
    var_152 = 56;
    pri = fun_1500(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = 1;
    var_168 = 8;
    pri = fun_17B8(var_160)
    var_176 = 0;
    pri = fun_1878()
    var_184 = 0;
    var_192 = 0;
    var_200 = 0;
    var_208 = var_8;
    var_216 = 32;
    pri = fun_6360(var_208, var_200, var_192, var_184)
    var_224 = 2;
    var_232 = 0;
    var_240 = 8;
    var_248 = 1;
    var_256 = 851;
    var_264 = 40;
    pri = fun_6818(var_256, var_248, var_240, var_232, var_224)
    var_272 = 0;
    var_280 = 3;
    var_288 = 0;
    var_296 = 100;
    var_304 = -1;
    var_312 = 983791650484546288;
    var_320 = var_8;
    var_328 = 56;
    pri = fun_1500(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 1;
    var_344 = 8;
    pri = fun_17B8(var_336)
    var_352 = 0;
    pri = fun_1878()
    var_360 = -5293755627650084496;
    pri = FlagSet(var_360)
    pri = 0;
    return pri;
// lab_7EC8
    var_8 = 9010327285021969031;
    pri = FlagGet(var_8)
    OP_JZER lab_7FC8
    var_16 = -5293755627650084496;
    pri = FlagGet(var_16)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7FC8
    var_24 = -8840728781897729102;
    pri = FlagGet(var_24)
    OP_JNZ lab_7FC8
    var_32 = 0;
    var_40 = 800;
    var_48 = 16;
    pri = fun_1EF0(var_40, var_32)
    OP_JZER lab_7FC8
    pri = 1;
    OP_JUMP lab_7FD0
// lab_7FC8
    pri = 0;
// lab_7FD0
    OP_JZER lab_8220
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 983793849507802710, 983792749996174499
    var_48 = var_8;
    var_56 = 64;
    pri = fun_15B0(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_64 = 15;
    var_72 = 8;
    pri = fun_0060(var_64)
    var_80 = 1;
    var_88 = 8;
    pri = fun_17B8(var_80)
    var_96 = 0;
    pri = fun_1878()
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = var_8;
    var_136 = 32;
    pri = fun_6360(var_128, var_120, var_112, var_104)
    var_144 = 2;
    var_152 = 0;
    var_160 = 8;
    var_168 = 1;
    var_176 = 943;
    var_184 = 40;
    pri = fun_6818(var_176, var_168, var_160, var_152, var_144)
    var_192 = 2;
    var_200 = 0;
    var_208 = 8;
    var_216 = 1;
    var_224 = 944;
    var_232 = 40;
    pri = fun_6818(var_224, var_216, var_208, var_200, var_192)
    var_240 = 0;
    var_248 = 3;
    var_256 = 0;
    var_264 = 100;
    var_272 = -1;
    var_280 = 983791650484546288;
    var_288 = var_8;
    var_296 = 56;
    pri = fun_1500(var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_304 = 1;
    var_312 = 8;
    pri = fun_17B8(var_304)
    var_320 = 0;
    pri = fun_1878()
    var_328 = -8840728781897729102;
    pri = FlagSet(var_328)
    pri = 0;
    return pri;
// lab_8220
    var_8 = 9010327285021969031;
    pri = FlagGet(var_8)
    OP_JZER lab_8320
    var_16 = -5293755627650084496;
    pri = FlagGet(var_16)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8320
    var_24 = -8840729881409357313;
    pri = FlagGet(var_24)
    OP_JNZ lab_8320
    var_32 = 0;
    var_40 = 646;
    var_48 = 16;
    pri = fun_1EF0(var_40, var_32)
    OP_JZER lab_8320
    pri = 1;
    OP_JUMP lab_8328
// lab_8320
    pri = 0;
// lab_8328
    OP_JZER lab_8570
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_6360(var_32, var_24, var_16, var_8)
    var_48 = 0;
    var_56 = 3;
    var_64 = 0;
    var_72 = 100;
    var_80 = -1;
    OP_PUSH2_C 983793849507802710, 983792749996174499
    var_88 = var_8;
    var_96 = 64;
    pri = fun_15B0(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_104 = 15;
    var_112 = 8;
    pri = fun_0060(var_104)
    var_120 = 1;
    var_128 = 8;
    pri = fun_17B8(var_120)
    var_136 = 0;
    pri = fun_1878()
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    var_168 = var_8;
    var_176 = 32;
    pri = fun_6360(var_168, var_160, var_152, var_144)
    var_184 = 2;
    var_192 = 0;
    var_200 = 8;
    var_208 = 1;
    var_216 = 628;
    var_224 = 40;
    pri = fun_6818(var_216, var_208, var_200, var_192, var_184)
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    var_272 = 983791650484546288;
    var_280 = var_8;
    var_288 = 56;
    pri = fun_1500(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_296 = 1;
    var_304 = 8;
    pri = fun_17B8(var_296)
    var_312 = 0;
    pri = fun_1878()
    var_320 = -8840729881409357313;
    pri = FlagSet(var_320)
    pri = 0;
    return pri;
// lab_8570
    OP_JUMP lab_8580
// lab_8580
    pri = var_16;
    OP_JZER lab_8608
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -9096977292841611580;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1500(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_ZERO_P_S -16
    OP_JUMP lab_8660
// lab_8608
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = -9096978392353239791;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1500(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8660
    var_8 = 7449102252804341748;
    pri = FlagGet(var_8)
    OP_JNZ lab_86C8
    pri = var_24;
    OP_JZER lab_86C8
    pri = 1;
    OP_JUMP lab_86D0
// lab_86C8
    pri = 0;
// lab_86D0
    OP_JZER lab_8718
    var_8 = 0;
    var_16 = 2095771937497870008;
    var_24 = 0;
    var_32 = 24;
    pri = fun_18A8(var_24, var_16, var_8)
// lab_8718
    var_8 = -4434625561085803951;
    pri = FlagGet(var_8)
    OP_JNZ lab_8780
    pri = var_32;
    OP_JZER lab_8780
    pri = 1;
    OP_JUMP lab_8788
// lab_8780
    pri = 0;
// lab_8788
    OP_JZER lab_87D0
    var_8 = 0;
    var_16 = 2095775236032754641;
    var_24 = 1;
    var_32 = 24;
    pri = fun_18A8(var_24, var_16, var_8)
// lab_87D0
    pri = var_40;
    OP_JZER lab_8820
    var_8 = 0;
    var_16 = 2095774136521126430;
    var_24 = 2;
    var_32 = 24;
    pri = fun_18A8(var_24, var_16, var_8)
// lab_8820
    var_8 = 0;
    var_16 = 2095777435056011063;
    var_24 = 4;
    var_32 = 24;
    pri = fun_18A8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = 40;
    pri = fun_4470(var_72, var_64, var_56, var_48, var_40)
    var_96 = 0;
    var_104 = 1;
    var_112 = 0;
    var_120 = 1;
    var_128 = 32;
    pri = fun_1990(var_120, var_112, var_104, var_96)
    var_48 = pri;
    var_136 = 0;
    pri = fun_1878()
    pri = var_48;
    switch (pri) {
// switch_9688
        case default:
        {
// switch_9688_case_default
            OP_JUMP lab_8580
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9688_case_0x0
            alt = 23616;
            pri = var_24;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            OP_LOAD_I 
            var_56 = pri;
            OP_CONST_S -64, 3000
            var_24 = 1;
            var_32 = var_56;
            var_40 = 1;
            var_48 = 24;
            pri = fun_1C10(var_40, var_32, var_24)
            var_56 = 0;
            var_64 = 4;
            var_72 = var_64;
            var_80 = 2;
            pri = WordSetNumber(var_80, var_72, var_64, var_56)
            var_88 = 1;
            var_96 = 1;
            var_104 = -1;
            var_112 = -1;
            var_120 = 0;
            var_128 = 0;
            var_136 = var_8;
            var_144 = 56;
            pri = fun_2138(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
            var_152 = 0;
            var_160 = 3;
            var_168 = 0;
            var_176 = 100;
            var_184 = -1;
            var_192 = -9096973994306726947;
            var_200 = var_8;
            var_208 = 56;
            pri = fun_1500(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
            var_216 = 0;
            var_224 = 8;
            pri = fun_2070(var_216)
            var_232 = 1;
            var_240 = 3;
            var_248 = 0;
            var_256 = 0;
            var_264 = var_8;
            var_272 = 40;
            pri = fun_4470(var_264, var_256, var_248, var_240, var_232)
            var_280 = 0;
            var_288 = 0;
            var_296 = 1;
            var_304 = 0;
            var_312 = 0;
            var_320 = 0;
            var_328 = 48;
            pri = fun_1A00(var_320, var_312, var_304, var_296, var_288, var_280)
            OP_JZER lab_8F48
            var_336 = var_8;
            var_344 = 8;
            pri = fun_0660(var_336)
            var_352 = 0;
            pri = fun_1878()
            var_360 = 0;
            pri = fun_2048()
            OP_LOAD_P_S_ALT -64
            OP_JSGEQ lab_8CF0
            var_368 = 1;
            var_376 = 1;
            var_384 = -1;
            var_392 = -1;
            var_400 = 0;
            var_408 = 0;
            var_416 = var_8;
            var_424 = 56;
            pri = fun_2138(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
            var_432 = 0;
            var_440 = 3;
            var_448 = 0;
            var_456 = 100;
            var_464 = -1;
            var_472 = -9096984989423009057;
            var_480 = var_8;
            var_488 = 56;
            pri = fun_1500(var_480, var_472, var_464, var_456, var_448, var_440, var_432)
            var_496 = 1;
            var_504 = 8;
            pri = fun_17B8(var_496)
            var_512 = 0;
            pri = fun_1878()
            var_520 = 0;
            var_528 = 0;
            var_536 = 0;
            var_544 = var_8;
            var_552 = 32;
            pri = fun_6360(var_544, var_536, var_528, var_520)
            var_560 = 0;
            pri = fun_20C8()
            pri = 0;
            return pri;
// lab_8F48
            var_8 = 0;
            pri = fun_20C8()
            OP_JUMP switch_9688_case_default
// lab_8CF0
            var_8 = 1;
            var_16 = 1;
            var_24 = -1;
            var_32 = -1;
            var_40 = 0;
            var_48 = 0;
            var_56 = var_8;
            var_64 = 56;
            pri = fun_2138(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 24312;
            pri = SoundPostEvent(var_72)
            var_80 = 1;
            var_88 = 8;
            pri = fun_0060(var_80)
            var_96 = 0;
            var_104 = 3;
            var_112 = 0;
            var_120 = 100;
            var_128 = -1;
            var_136 = -9096981690888124424;
            var_144 = var_8;
            var_152 = 56;
            pri = fun_1500(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
            var_160 = 0;
            var_168 = 8;
            pri = fun_0328(var_160)
            var_176 = 1;
            var_184 = 8;
            pri = fun_17B8(var_176)
            var_192 = 0;
            pri = fun_1878()
            var_200 = 1;
            var_208 = 3;
            var_216 = 0;
            var_224 = 0;
            var_232 = var_8;
            var_240 = 40;
            pri = fun_4470(var_232, var_224, var_216, var_208, var_200)
            var_248 = var_64;
            var_256 = 8;
            pri = fun_2018(var_248)
            var_264 = 0;
            var_272 = 8;
            pri = fun_2100(var_264)
            var_280 = 2;
            var_288 = 0;
            var_296 = 9;
            var_304 = 1;
            var_312 = var_56;
            var_320 = 40;
            pri = fun_6818(var_312, var_304, var_296, var_288, var_280)
            var_328 = 7449102252804341748;
            pri = FlagSet(var_328)
            var_336 = 0;
            var_344 = -4922461017337725029;
            pri = WorkSet(var_344, var_336)
        }
        case 0x1:
        {
// switch_9688_case_0x1
            alt = 23616;
            pri = var_32;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            OP_LOAD_I 
            var_56 = pri;
            OP_CONST_S -64, 5000
            var_24 = 1;
            var_32 = var_56;
            var_40 = 1;
            var_48 = 24;
            pri = fun_1C10(var_40, var_32, var_24)
            var_56 = 0;
            var_64 = 4;
            var_72 = var_64;
            var_80 = 2;
            pri = WordSetNumber(var_80, var_72, var_64, var_56)
            var_88 = 0;
            var_96 = 3;
            var_104 = 0;
            var_112 = 100;
            var_120 = -1;
            var_128 = -9096975093818355158;
            var_136 = var_8;
            var_144 = 56;
            pri = fun_1500(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
            var_152 = 0;
            var_160 = 8;
            pri = fun_2070(var_152)
            var_168 = 0;
            var_176 = 0;
            var_184 = 1;
            var_192 = 0;
            var_200 = 0;
            var_208 = 0;
            var_216 = 48;
            pri = fun_1A00(var_208, var_200, var_192, var_184, var_176, var_168)
            OP_JZER lab_9460
            var_224 = var_8;
            var_232 = 8;
            pri = fun_0660(var_224)
            var_240 = 0;
            pri = fun_1878()
            var_248 = 0;
            pri = fun_2048()
            OP_LOAD_P_S_ALT -64
            OP_JSGEQ lab_92C8
            var_256 = 1;
            var_264 = 1;
            var_272 = -1;
            var_280 = -1;
            var_288 = 0;
            var_296 = 0;
            var_304 = var_8;
            var_312 = 56;
            pri = fun_2138(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
            var_320 = 0;
            var_328 = 3;
            var_336 = 0;
            var_344 = 100;
            var_352 = -1;
            var_360 = -9096984989423009057;
            var_368 = var_8;
            var_376 = 56;
            pri = fun_1500(var_368, var_360, var_352, var_344, var_336, var_328, var_320)
            var_384 = 1;
            var_392 = 8;
            pri = fun_17B8(var_384)
            var_400 = 0;
            pri = fun_1878()
            var_408 = 0;
            var_416 = 0;
            var_424 = 0;
            var_432 = var_8;
            var_440 = 32;
            pri = fun_6360(var_432, var_424, var_416, var_408)
            var_448 = 0;
            pri = fun_20C8()
            pri = 0;
            return pri;
// lab_9460
            var_8 = 0;
            pri = fun_20C8()
            OP_JUMP switch_9688_case_default
// lab_92C8
            var_8 = 24504;
            pri = SoundPostEvent(var_8)
            var_16 = 1;
            var_24 = 8;
            pri = fun_0060(var_16)
            var_32 = 0;
            var_40 = 3;
            var_48 = 0;
            var_56 = 100;
            var_64 = -1;
            var_72 = -9096981690888124424;
            var_80 = var_8;
            var_88 = 56;
            pri = fun_1500(var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_96 = 0;
            var_104 = 8;
            pri = fun_0328(var_96)
            var_112 = 1;
            var_120 = 8;
            pri = fun_17B8(var_112)
            var_128 = 0;
            pri = fun_1878()
            var_136 = var_64;
            var_144 = 8;
            pri = fun_2018(var_136)
            var_152 = 0;
            var_160 = 8;
            pri = fun_2100(var_152)
            var_168 = 2;
            var_176 = 0;
            var_184 = 9;
            var_192 = 1;
            var_200 = var_56;
            var_208 = 40;
            pri = fun_6818(var_200, var_192, var_184, var_176, var_168)
            var_216 = -4434625561085803951;
            pri = FlagSet(var_216)
        }
        case 0x2:
        {
// switch_9688_case_0x2
            var_8 = 1;
            alt = 23616;
            pri = var_40;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            OP_LOAD_I 
            var_16 = pri;
            var_24 = 1;
            var_32 = 24;
            pri = fun_1C10(var_24, var_16, var_8)
            var_40 = 0;
            var_48 = 3;
            var_56 = 0;
            var_64 = 100;
            var_72 = -1;
            var_80 = -9096980591376496213;
            var_88 = var_8;
            var_96 = 56;
            pri = fun_1500(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
            var_104 = 1;
            var_112 = 8;
            pri = fun_17B8(var_104)
            var_120 = 0;
            pri = fun_1878()
            OP_JUMP switch_9688_case_default
        }
        case 0x4:
        {
// switch_9688_case_0x4
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = -9096979491864868002;
            var_56 = var_8;
            var_64 = 56;
            pri = fun_1500(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_17B8(var_72)
            var_88 = 0;
            pri = fun_1878()
            var_96 = 0;
            var_104 = 0;
            var_112 = 0;
            var_120 = var_8;
            var_128 = 32;
            pri = fun_6360(var_120, var_112, var_104, var_96)
            pri = 0;
            return pri;
            OP_JUMP switch_9688_case_default
        }
    }
// lab_78E8
    var_8 = -4922461017337725029;
    pri = WorkGet(var_8)
    var_16 = pri;
    var_24 = -6879198357314225984;
    pri = WorkSet(var_24, var_16)
    var_32 = -7370115527224682391;
    pri = WorkGet(var_32)
    var_40 = pri;
    var_48 = -4922461017337725029;
    pri = WorkSet(var_48, var_40)
    var_56 = 9015833752062682035;
    pri = WorkGet(var_56)
    var_64 = pri;
    var_72 = -7370115527224682391;
    pri = WorkSet(var_72, var_64)
    var_80 = -1;
    var_88 = 23616;
    var_96 = 29;
    var_104 = 24;
    pri = fun_7480(var_96, var_88, var_80)
    var_112 = pri;
    var_120 = 9015833752062682035;
    pri = WorkSet(var_120, var_112)
// lab_7A50
    var_8 = -5848485821678639270;
    pri = FlagSet(var_8)
}
// fun_9710
fun_9710() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 8983119476992161142;
    pri = FlagGet(var_16)
    OP_JNZ lab_9828
    var_24 = 0;
    var_32 = 10;
    var_40 = 16;
    pri = fun_0160(var_32, var_24)
    OP_ADD_P_C 1
    var_48 = pri;
    var_56 = -5423537773036741022;
    pri = WorkSet(var_56, var_48)
    var_64 = 8983119476992161142;
    pri = FlagSet(var_64)
    var_72 = 3820686624519974915;
    pri = FlagSet(var_72)
// lab_9828
    var_16 = -5423537773036741022;
    pri = WorkGet(var_16)
    var_16 = pri;
    alt = 24696;
    pri = var_16;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_24 = pri;
    alt = 24696;
    pri = var_16;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_32 = pri;
    var_40 = 1;
    var_48 = var_24;
    var_56 = 1;
    var_64 = 24;
    pri = fun_1C10(var_56, var_48, var_40)
    var_72 = 0;
    var_80 = 6;
    var_88 = var_32;
    var_96 = 2;
    pri = WordSetNumber(var_96, var_88, var_80, var_72)
    var_104 = 1;
    var_112 = 1;
    var_120 = 0;
    var_128 = 1;
    var_136 = 1;
    var_144 = var_8;
    var_152 = 48;
    pri = fun_61A0(var_144, var_136, var_128, var_120, var_112, var_104)
    var_160 = 3678824803138824142;
    pri = FlagGet(var_160)
    OP_JNZ lab_9A98
    var_168 = 0;
    var_176 = 3;
    var_184 = 0;
    var_192 = 100;
    var_200 = -1;
    var_208 = 984782310461375174;
    var_216 = var_8;
    var_224 = 56;
    pri = fun_1500(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 1;
    var_240 = 8;
    pri = fun_17B8(var_232)
    var_248 = 0;
    pri = fun_1878()
    var_256 = 3678824803138824142;
    pri = FlagSet(var_256)
// lab_9A98
    var_8 = 3820686624519974915;
    pri = FlagGet(var_8)
    OP_JZER lab_A230
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 984781210949746963;
    var_64 = var_8;
    var_72 = 56;
    pri = fun_1500(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_17B8(var_80)
    var_96 = 0;
    pri = fun_1878()
    var_104 = var_24;
    var_112 = 8;
    pri = fun_1F98(var_104)
    OP_JZER lab_A1A8
    var_120 = 0;
    var_128 = 3;
    var_136 = 0;
    var_144 = 100;
    var_152 = -1;
    var_160 = 984780111438118752;
    var_168 = var_8;
    var_176 = 56;
    pri = fun_1500(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = 1;
    var_192 = 3;
    var_200 = 0;
    var_208 = 0;
    var_216 = var_8;
    var_224 = 40;
    pri = fun_4470(var_216, var_208, var_200, var_192, var_184)
    var_232 = 0;
    var_240 = 0;
    var_248 = 1;
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    var_280 = 48;
    pri = fun_1A00(var_272, var_264, var_256, var_248, var_240, var_232)
    OP_JZER lab_A028
    var_288 = 0;
    pri = fun_1878()
    var_296 = 1;
    var_304 = 1;
    var_312 = -1;
    var_320 = -1;
    var_328 = 0;
    var_336 = 0;
    var_344 = var_8;
    var_352 = 56;
    pri = fun_2138(var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_360 = 0;
    var_368 = 3;
    var_376 = 0;
    var_384 = 100;
    var_392 = -1;
    var_400 = 984787808019516229;
    var_408 = var_8;
    var_416 = 56;
    pri = fun_1500(var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_424 = 1;
    var_432 = 8;
    pri = fun_17B8(var_424)
    var_440 = 0;
    pri = fun_1878()
    var_448 = 1;
    var_456 = 3;
    var_464 = 0;
    var_472 = 0;
    var_480 = var_8;
    var_488 = 40;
    pri = fun_4470(var_480, var_472, var_464, var_456, var_448)
    var_496 = 3;
    var_504 = 0;
    var_512 = -4746833599159716037;
    var_520 = 24;
    pri = fun_1670(var_512, var_504, var_496)
    var_528 = 1;
    var_536 = 8;
    pri = fun_0060(var_528)
    var_544 = 24960;
    pri = SoundPostEvent(var_544)
    var_552 = 0;
    var_560 = 8;
    pri = fun_0328(var_552)
    var_568 = 1;
    var_576 = 8;
    pri = fun_17B8(var_568)
    var_584 = 0;
    pri = fun_1878()
    var_592 = 1;
    var_600 = 1;
    var_608 = -1;
    var_616 = -1;
    var_624 = 0;
    var_632 = 0;
    var_640 = var_8;
    var_648 = 56;
    pri = fun_2138(var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_656 = 0;
    var_664 = 3;
    var_672 = 0;
    var_680 = 100;
    var_688 = -1;
    var_696 = 984785608996259807;
    var_704 = var_8;
    var_712 = 56;
    pri = fun_1500(var_704, var_696, var_688, var_680, var_672, var_664, var_656)
    var_720 = 1;
    var_728 = 8;
    pri = fun_17B8(var_720)
    var_736 = 0;
    pri = fun_1878()
    var_744 = 1;
    var_752 = 3;
    var_760 = 0;
    var_768 = 0;
    var_776 = var_8;
    var_784 = 40;
    pri = fun_4470(var_776, var_768, var_760, var_752, var_744)
    var_792 = 1;
    var_800 = var_24;
    pri = ItemSub(var_800, var_792)
    var_808 = var_32;
    var_816 = 8;
    pri = fun_1FE8(var_808)
    var_824 = 3820686624519974915;
    pri = FlagReset(var_824)
    OP_JUMP lab_A198
// lab_A230
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 984785608996259807;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1500(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_17B8(var_72)
    var_88 = 0;
    pri = fun_1878()
    var_96 = 1;
    var_104 = 3;
    var_112 = 0;
    var_120 = 0;
    var_128 = var_8;
    var_136 = 40;
    pri = fun_4470(var_128, var_120, var_112, var_104, var_96)
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    var_168 = var_8;
    var_176 = 32;
    pri = fun_6360(var_168, var_160, var_152, var_144)
// lab_A1A8
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 0;
    var_40 = var_8;
    var_48 = 40;
    pri = fun_4470(var_40, var_32, var_24, var_16, var_8)
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = var_8;
    var_88 = 32;
    pri = fun_6360(var_80, var_72, var_64, var_56)
// lab_A028
    var_8 = 0;
    pri = fun_1878()
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = var_8;
    var_72 = 56;
    pri = fun_2138(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    var_120 = 984786708507888018;
    var_128 = var_8;
    var_136 = 56;
    pri = fun_1500(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_17B8(var_144)
    var_160 = 0;
    pri = fun_1878()
    var_168 = 1;
    var_176 = 3;
    var_184 = 0;
    var_192 = 0;
    var_200 = var_8;
    var_208 = 40;
    pri = fun_4470(var_200, var_192, var_184, var_176, var_168)
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    var_240 = var_8;
    var_248 = 32;
    pri = fun_6360(var_240, var_232, var_224, var_216)
// lab_A198
    OP_JUMP lab_A220
// lab_A220
    OP_JUMP lab_A338
// lab_A338
    pri = 0;
    return pri;
}
