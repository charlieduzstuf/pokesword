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
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0548
fun_0548() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0580
// lab_0580
    var_8 = 0;
    pri = fun_0698()
    OP_JNZ lab_05B8
    OP_JUMP lab_05E8
// lab_05B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0580
// lab_05E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0618
// lab_0618
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0658
    pri = 0;
    return pri;
// lab_0658
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0618
    pri = 0;
    return pri;
}
// fun_0698
fun_0698() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_06C0
fun_06C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0768
fun_0768() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0ED8(var_8)
    OP_JZER lab_07E0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0F08(var_24)
    OP_JNZ lab_07E0
    pri = 0;
    return pri;
// lab_07E0
    OP_JUMP lab_07F0
// lab_07F0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0850
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0850
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07F0
    pri = 0;
    return pri;
}
// fun_0890
fun_0890() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_08C8
fun_08C8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0908
fun_0908() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0940
fun_0940() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0988
    pri = 0;
    return pri;
// lab_0988
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_09C8
// lab_09C8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0ED8(var_8)
    OP_JNZ lab_0A50
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A40
    pri = 0;
    return pri;
// lab_0A50
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0A98
    pri = 0;
    return pri;
// lab_0A98
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0AF8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B40(var_8)
    pri = 0;
    return pri;
// lab_0AF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09C8
    pri = 0;
    return pri;
// lab_0A40
    OP_JUMP lab_0A98
}
// fun_0B40
fun_0B40() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0B78
fun_0B78() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BC8
    pri = 0;
    return pri;
// lab_0BC8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0ED8(var_8)
    OP_JZER lab_0CF8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C20
    OP_ZERO_P_S 64
// lab_0CF8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D30
    OP_CONST_S 64, 1
// lab_0D30
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D68
    OP_CONST_S 72, 1
// lab_0D68
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
// lab_0C20
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C48
    OP_ZERO_P_S 72
// lab_0C48
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
    OP_JUMP lab_0E08
// lab_0E08
    pri = 0;
    return pri;
}
// fun_0E18
fun_0E18() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E58
fun_0E58() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E98
fun_0E98() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0ED8
fun_0ED8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0F08
fun_0F08() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0F38
fun_0F38() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_0F68
fun_0F68() {
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
// switch_1580
        case default:
        {
// switch_1580_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_15C8
// lab_15C8
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
            OP_JNZ lab_1670
            var_88 = 0;
            pri = fun_1940()
// lab_1670
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1580_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1168
                case default:
                {
// switch_1168_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_11E0
// lab_11E0
                    OP_JUMP lab_15C8
                }
                case 0x0:
                {
// switch_1168_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_11E0
                }
                case 0x1:
                {
// switch_1168_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_11E0
                }
                case 0x2:
                {
// switch_1168_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_11E0
                }
                case 0x3:
                {
// switch_1168_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_11E0
                }
                case 0x4:
                {
// switch_1168_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_11E0
                }
                case 0x5:
                {
// switch_1168_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_11E0
                }
            }
        }
        case 0x65:
        {
// switch_1580_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1320
                case default:
                {
// switch_1320_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1398
// lab_1398
                    OP_JUMP lab_15C8
                }
                case 0x0:
                {
// switch_1320_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1398
                }
                case 0x1:
                {
// switch_1320_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1398
                }
                case 0x2:
                {
// switch_1320_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1398
                }
                case 0x3:
                {
// switch_1320_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1398
                }
                case 0x4:
                {
// switch_1320_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1398
                }
                case 0x5:
                {
// switch_1320_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1398
                }
            }
        }
        case 0x66:
        {
// switch_1580_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_14D8
                case default:
                {
// switch_14D8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1550
// lab_1550
                    OP_JUMP lab_15C8
                }
                case 0x0:
                {
// switch_14D8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1550
                }
                case 0x1:
                {
// switch_14D8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1550
                }
                case 0x2:
                {
// switch_14D8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1550
                }
                case 0x3:
                {
// switch_14D8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1550
                }
                case 0x4:
                {
// switch_14D8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1550
                }
                case 0x5:
                {
// switch_14D8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1550
                }
            }
        }
    }
}
// fun_1688
fun_1688() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0F68(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16F0
fun_16F0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0908(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1798
    pri = 1;
    return pri;
// lab_1798
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_17E0
fun_17E0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1830
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16F0(var_8)
    arg_2 = pri;
// lab_1830
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_0F68(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1890
fun_1890() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1688(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18E0
fun_18E0() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1890(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1940
fun_1940() {
    OP_JUMP lab_1958
// lab_1958
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1998
    pri = 0;
    return pri;
// lab_1998
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1958
    pri = 0;
    return pri;
}
// fun_19D8
fun_19D8() {
    var_8 = 0;
    pri = fun_1940()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1A88
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1A88
    pri = 0;
    return pri;
}
// fun_1A98
fun_1A98() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1AC8
fun_1AC8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1AF8
// lab_1AF8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B38
    OP_JUMP lab_1B68
// lab_1B38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1AF8
// lab_1B68
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BB0
fun_1BB0() {
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
// fun_1C20
fun_1C20() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_1C58
fun_1C58() {
    OP_JUMP lab_1C70
// lab_1C70
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_1CB8
    OP_JUMP lab_1CE8
    OP_JUMP lab_1CD8
// lab_1CB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_1CE8
    pri = 0;
    return pri;
// lab_1CD8
    OP_JUMP lab_1C70
}
// fun_1CF8
fun_1CF8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_1D28
fun_1D28() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D78
fun_1D78() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DC8
fun_1DC8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E18
fun_1E18() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E68
fun_1E68() {
    pri = arg_6;
    OP_JNZ lab_1EA0
    var_8 = 0;
    pri = fun_0E18()
// lab_1EA0
    pri = arg_1;
    switch (pri) {
// switch_3408
        case default:
        {
// switch_3408_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3758
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3758
            pri = 1;
            OP_JUMP lab_3760
// lab_3758
            pri = 0;
// lab_3760
            OP_JZER lab_38B8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0908(var_24, var_16)
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
            OP_JUMP lab_3918
// lab_38B8
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
// lab_3918
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3978
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_39D8
// lab_3978
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_39D8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_39D8
            pri = arg_2;
            OP_JZER lab_3A18
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3A18
            var_8 = 0;
            pri = fun_0E58()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3408_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x1:
        {
// switch_3408_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x2:
        {
// switch_3408_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x3:
        {
// switch_3408_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x4:
        {
// switch_3408_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x5:
        {
// switch_3408_case_0x5
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3408_case_default
        }
        case 0x6:
        {
// switch_3408_case_0x6
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3408_case_default
        }
        case 0x7:
        {
// switch_3408_case_0x7
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3408_case_default
        }
        case 0x8:
        {
// switch_3408_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x9:
        {
// switch_3408_case_0x9
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3408_case_default
        }
        case 0xa:
        {
// switch_3408_case_0xa
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3408_case_default
        }
        case 0xb:
        {
// switch_3408_case_0xb
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3408_case_default
        }
        case 0xc:
        {
// switch_3408_case_0xc
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3408_case_default
        }
        case 0xd:
        {
// switch_3408_case_0xd
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3408_case_default
        }
        case 0xe:
        {
// switch_3408_case_0xe
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3408_case_default
        }
        case 0xf:
        {
// switch_3408_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x10:
        {
// switch_3408_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x11:
        {
// switch_3408_case_0x11
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3408_case_default
        }
        case 0x12:
        {
// switch_3408_case_0x12
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3408_case_default
        }
        case 0x13:
        {
// switch_3408_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x14:
        {
// switch_3408_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x15:
        {
// switch_3408_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x16:
        {
// switch_3408_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x17:
        {
// switch_3408_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x18:
        {
// switch_3408_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x19:
        {
// switch_3408_case_0x19
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3408_case_default
        }
        case 0x1a:
        {
// switch_3408_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C8(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0890(var_48, var_40)
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
            pri = fun_0B78(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3408_case_default
        }
        case 0x1b:
        {
// switch_3408_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C8(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0890(var_48, var_40)
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
            pri = fun_0B78(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3408_case_default
        }
        case 0x1c:
        {
// switch_3408_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C8(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0890(var_48, var_40)
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
            pri = fun_0B78(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3408_case_default
        }
        case 0x1d:
        {
// switch_3408_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x1e:
        {
// switch_3408_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x1f:
        {
// switch_3408_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x20:
        {
// switch_3408_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x21:
        {
// switch_3408_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x22:
        {
// switch_3408_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x23:
        {
// switch_3408_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x24:
        {
// switch_3408_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x25:
        {
// switch_3408_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x26:
        {
// switch_3408_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x27:
        {
// switch_3408_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x28:
        {
// switch_3408_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
        case 0x29:
        {
// switch_3408_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3408_case_default
        }
    }
}
// fun_3A48
fun_3A48() {
    pri = arg_5;
    OP_JNZ lab_3A80
    var_8 = 0;
    pri = fun_0E18()
// lab_3A80
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_3AD0
    OP_CONST_S -8, -1
// lab_3AD0
    pri = arg_1;
    switch (pri) {
// switch_5588
        case default:
        {
// switch_5588_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_5A30
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0908(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5A30
            pri = 1;
            OP_JUMP lab_5A38
// lab_5A30
            pri = 0;
// lab_5A38
            OP_JZER lab_5A88
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_5CE0
// lab_5A88
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_5AF0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_5AF0
            pri = 1;
            OP_JUMP lab_5AF8
// lab_5AF0
            pri = 0;
// lab_5AF8
            OP_JZER lab_5C80
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0908(var_24, var_16)
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
            OP_JUMP lab_5CE0
// lab_5C80
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
// lab_5CE0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_5D50
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_5D50
            var_8 = 0;
            pri = fun_0E58()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5588_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x1:
        {
// switch_5588_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x2:
        {
// switch_5588_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x3:
        {
// switch_5588_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x4:
        {
// switch_5588_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x5:
        {
// switch_5588_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B40(var_40)
            OP_JUMP switch_5588_case_default
        }
        case 0x6:
        {
// switch_5588_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x7:
        {
// switch_5588_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x8:
        {
// switch_5588_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x9:
        {
// switch_5588_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0xa:
        {
// switch_5588_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0xb:
        {
// switch_5588_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0xc:
        {
// switch_5588_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0xd:
        {
// switch_5588_case_0xd
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0xe:
        {
// switch_5588_case_0xe
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0xf:
        {
// switch_5588_case_0xf
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x10:
        {
// switch_5588_case_0x10
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x11:
        {
// switch_5588_case_0x11
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x12:
        {
// switch_5588_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x13:
        {
// switch_5588_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x14:
        {
// switch_5588_case_0x14
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x15:
        {
// switch_5588_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x16:
        {
// switch_5588_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x17:
        {
// switch_5588_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x18:
        {
// switch_5588_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x19:
        {
// switch_5588_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x1a:
        {
// switch_5588_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x1b:
        {
// switch_5588_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x1c:
        {
// switch_5588_case_0x1c
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x1d:
        {
// switch_5588_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x1e:
        {
// switch_5588_case_0x1e
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x1f:
        {
// switch_5588_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x20:
        {
// switch_5588_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x21:
        {
// switch_5588_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x22:
        {
// switch_5588_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x23:
        {
// switch_5588_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x24:
        {
// switch_5588_case_0x24
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x25:
        {
// switch_5588_case_0x25
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x26:
        {
// switch_5588_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x27:
        {
// switch_5588_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x28:
        {
// switch_5588_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x29:
        {
// switch_5588_case_0x29
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x2a:
        {
// switch_5588_case_0x2a
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x2b:
        {
// switch_5588_case_0x2b
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x2c:
        {
// switch_5588_case_0x2c
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x2d:
        {
// switch_5588_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x2e:
        {
// switch_5588_case_0x2e
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x2f:
        {
// switch_5588_case_0x2f
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x30:
        {
// switch_5588_case_0x30
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x31:
        {
// switch_5588_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x32:
        {
// switch_5588_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x33:
        {
// switch_5588_case_0x33
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x34:
        {
// switch_5588_case_0x34
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x35:
        {
// switch_5588_case_0x35
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x36:
        {
// switch_5588_case_0x36
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x37:
        {
// switch_5588_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x38:
        {
// switch_5588_case_0x38
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
            pri = fun_0B78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5588_case_default
        }
        case 0x39:
        {
// switch_5588_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x3a:
        {
// switch_5588_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x3b:
        {
// switch_5588_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x3c:
        {
// switch_5588_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x3d:
        {
// switch_5588_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
        case 0x3e:
        {
// switch_5588_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C8(var_24, var_16, var_8)
            OP_JUMP switch_5588_case_default
        }
    }
}
// fun_5D80
fun_5D80() {
    pri = arg_4;
    OP_JNZ lab_5DB8
    var_8 = 0;
    pri = fun_0E18()
// lab_5DB8
    pri = arg_1;
    switch (pri) {
// switch_7190
        case default:
        {
// switch_7190_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0ED8(var_264)
            OP_JZER lab_7758
            pri = arg_3;
            switch (pri) {
// switch_7700
                case default:
                {
// switch_7700_case_default
                    OP_JUMP lab_7A10
// lab_7A10
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_7A80
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_7A80
                    var_8 = 0;
                    pri = fun_0E58()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7700_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7700_case_default
                }
                case 0x2:
                {
// switch_7700_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7700_case_default
                }
                case 0x3:
                {
// switch_7700_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7700_case_default
                }
            }
// lab_7758
            pri = arg_1;
            OP_JZER lab_77A8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_77A8
            pri = 0;
            OP_JUMP lab_77B0
// lab_77A8
            pri = 1;
// lab_77B0
            OP_JZER lab_7818
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0908(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7818
            pri = 1;
            OP_JUMP lab_7820
// lab_7818
            pri = 0;
// lab_7820
            OP_JZER lab_7870
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7A10
// lab_7870
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_78D8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7A10
// lab_78D8
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0908(var_24, var_16)
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
// switch_7190_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x1:
        {
// switch_7190_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x2:
        {
// switch_7190_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x3:
        {
// switch_7190_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x4:
        {
// switch_7190_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x5:
        {
// switch_7190_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B40(var_40)
            OP_JUMP switch_7190_case_default
        }
        case 0x6:
        {
// switch_7190_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x7:
        {
// switch_7190_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x8:
        {
// switch_7190_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x9:
        {
// switch_7190_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0xa:
        {
// switch_7190_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0xb:
        {
// switch_7190_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0xc:
        {
// switch_7190_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0xd:
        {
// switch_7190_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0xe:
        {
// switch_7190_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0xf:
        {
// switch_7190_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x10:
        {
// switch_7190_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x11:
        {
// switch_7190_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x12:
        {
// switch_7190_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x13:
        {
// switch_7190_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x14:
        {
// switch_7190_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x15:
        {
// switch_7190_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x16:
        {
// switch_7190_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x17:
        {
// switch_7190_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x18:
        {
// switch_7190_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x19:
        {
// switch_7190_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x1a:
        {
// switch_7190_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x1b:
        {
// switch_7190_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x1c:
        {
// switch_7190_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x1d:
        {
// switch_7190_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x1e:
        {
// switch_7190_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x1f:
        {
// switch_7190_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x20:
        {
// switch_7190_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x21:
        {
// switch_7190_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x22:
        {
// switch_7190_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x23:
        {
// switch_7190_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x24:
        {
// switch_7190_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x25:
        {
// switch_7190_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x26:
        {
// switch_7190_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x27:
        {
// switch_7190_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x28:
        {
// switch_7190_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x29:
        {
// switch_7190_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x2a:
        {
// switch_7190_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x2b:
        {
// switch_7190_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x2c:
        {
// switch_7190_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x2d:
        {
// switch_7190_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x2e:
        {
// switch_7190_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x2f:
        {
// switch_7190_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x30:
        {
// switch_7190_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x31:
        {
// switch_7190_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x32:
        {
// switch_7190_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x33:
        {
// switch_7190_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x34:
        {
// switch_7190_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x35:
        {
// switch_7190_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x36:
        {
// switch_7190_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x37:
        {
// switch_7190_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x38:
        {
// switch_7190_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x39:
        {
// switch_7190_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x3a:
        {
// switch_7190_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x3b:
        {
// switch_7190_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x3c:
        {
// switch_7190_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x3d:
        {
// switch_7190_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
        case 0x3e:
        {
// switch_7190_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C8(var_24, var_16, var_8)
            OP_JUMP switch_7190_case_default
        }
    }
}
// fun_7AB0
fun_7AB0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_7BB0
        case default:
        {
// switch_7BB0_case_default
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
// switch_7BB0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_7BB0_case_default
        }
        case 0x1:
        {
// switch_7BB0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_7BB0_case_default
        }
        case 0x2:
        {
// switch_7BB0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_7BB0_case_default
        }
        case 0x3:
        {
// switch_7BB0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_7BB0_case_default
        }
    }
}
// fun_7C70
fun_7C70() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_7CC0
// lab_7CC0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_7D38
    OP_JUMP lab_7D68
// lab_7D38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_7CC0
// lab_7D68
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_7DF0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_5D80(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_0F38(var_56)
// lab_7DF0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_7E58
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E98(var_24, var_16)
// lab_7E58
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0E98(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_7F18
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0940(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0718(var_88, var_80, var_72, var_64, var_56)
// lab_7F18
    pri = IsPlayerRideBicycle()
    OP_JZER lab_7F58
    pri = 0;
    return pri;
// lab_7F58
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_80A0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0890(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8068
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_80A0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0768(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0768(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0940(var_40)
    pri = 0;
    return pri;
// lab_8068
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E98(var_16, var_8)
}
// fun_8128
fun_8128() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_81C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0940(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_1E68(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_81C0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8318
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8280
    var_24 = 30304;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8280
    pri = 1;
    OP_JUMP lab_8288
// lab_8318
    pri = 0;
    return pri;
// lab_8280
    pri = 0;
// lab_8288
    OP_JZER lab_8318
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0940(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_1E68(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8328
fun_8328() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8128(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_83B0(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_83B0
fun_83B0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8548(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8418
fun_8418() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8488
    OP_CONST_S -8, 1
// lab_8488
    pri = arg_0;
    OP_JNZ lab_84A8
    OP_ZERO_P_S -8
// lab_84A8
    pri = var_8;
    OP_JZER lab_8530
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8530
    pri = 0;
    return pri;
}
// fun_8548
fun_8548() {
    var_8 = 30408;
    var_16 = 8;
    pri = fun_1C20(var_8)
    var_24 = 0;
    pri = fun_1C58()
    pri = arg_3;
    OP_JNZ lab_8668
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8630
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_86D8(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8658
// lab_8668
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8878(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8630
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_87A0(var_16, var_8)
// lab_8658
    OP_JUMP lab_86B0
// lab_86B0
    var_8 = 0;
    pri = fun_1CF8()
    pri = 0;
    return pri;
}
// fun_86D8
fun_86D8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8878(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8788
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8788
    pri = 0;
    return pri;
}
// fun_87A0
fun_87A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_1D78(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_18E0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_19D8(var_72)
    var_88 = 0;
    pri = fun_1A98()
    var_96 = 0;
    var_104 = 8;
    pri = fun_1D28(var_96)
    pri = 0;
    return pri;
}
// fun_8878
fun_8878() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_88C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8B80(var_8)
// lab_88C0
    pri = arg_4;
    OP_JNZ lab_8928
    var_8 = 0;
    var_16 = 8;
    pri = fun_1D28(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1D78(var_40, var_32, var_24)
// lab_8928
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_89C8
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_1DC8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_18E0(var_56, var_48, var_40)
    OP_JUMP lab_8AB8
// lab_89C8
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8A80
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8A80
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8A80
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_18E0(var_24, var_16, var_8)
// lab_8AB8
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8AF8
    var_8 = 0;
    var_16 = 8;
    pri = fun_0408(var_8)
// lab_8AF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_19D8(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8D88(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8418(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8B80
fun_8B80() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8BE0
    var_16 = 30568;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8BE0
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8D20
        case default:
        {
// switch_8D20_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8D10
            var_16 = 31112;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8D10
            OP_JUMP lab_8D58
// lab_8D58
            var_8 = 31328;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8D20_case_0x1
            var_8 = 30784;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8D58
        }
        case 0x2:
        {
// switch_8D20_case_0x2
            var_8 = 30912;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8D58
        }
    }
}
// fun_8D88
fun_8D88() {
    pri = arg_2;
    OP_JNZ lab_8E70
    var_8 = 0;
    var_16 = 8;
    pri = fun_1D28(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_1D78(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_1E18(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_8E70
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_18E0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_19D8(var_40)
    var_56 = 0;
    pri = fun_1A98()
    pri = 0;
    return pri;
}
// fun_8EE8
fun_8EE8() {
    pri = g_mode;
    switch (pri) {
// switch_9048
        case default:
        {
// switch_9048_case_default
            pri = CommandNOP()
            OP_JUMP lab_90D0
// lab_90D0
            pri = 0;
            return pri;
        }
        case 0x87a7bf1e38ce22d6:
        {
// switch_9048_case_0x87a7bf1e38ce22d6
            var_8 = 0;
            pri = fun_A050()
            OP_JUMP lab_90D0
        }
        case 0x98d512026add677e:
        {
// switch_9048_case_0x98d512026add677e
            var_8 = 0;
            pri = fun_9B08()
            OP_JUMP lab_90D0
        }
        case 0xbee739b8900fb401:
        {
// switch_9048_case_0xbee739b8900fb401
            var_8 = 0;
            pri = fun_90F8()
            OP_JUMP lab_90D0
        }
        case 0xc8b354edead672e7:
        {
// switch_9048_case_0xc8b354edead672e7
            var_8 = 0;
            pri = fun_9C30()
            OP_JUMP lab_90D0
        }
        case 0x0:
        {
// switch_9048_case_0x0
            var_8 = 0;
            pri = fun_90E0()
            OP_JUMP lab_90D0
        }
        case 0xec428a3f0d152c:
        {
// switch_9048_case_0xec428a3f0d152c
            var_8 = 0;
            pri = fun_A860()
            OP_JUMP lab_90D0
        }
        case 0x150e063c47f524f3:
        {
// switch_9048_case_0x150e063c47f524f3
            var_8 = 0;
            pri = fun_9A18()
            OP_JUMP lab_90D0
        }
    }
}
// fun_90E0
fun_90E0() {
    pri = 0;
    return pri;
}
// fun_90F8
fun_90F8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_7AB0(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = -4883040369995537269;
    pri = WorkGet(var_72)
    alt = 2;
    OP_JSLESS lab_91E0
    var_80 = var_8;
    var_88 = 8;
    pri = fun_9730(var_80)
    OP_JUMP lab_9200
// lab_91E0
    var_8 = var_8;
    var_16 = 8;
    pri = fun_9250(var_8)
// lab_9200
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 32;
    pri = fun_7C70(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9250
fun_9250() {
    var_8 = -4883040369995537269;
    pri = WorkGet(var_8)
    OP_JNZ lab_9690
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 1759755606760963441;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_17E0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_19D8(var_80)
    var_96 = 0;
    var_104 = -4229054875426047786;
    var_112 = 0;
    var_120 = 24;
    pri = fun_1AC8(var_112, var_104, var_96)
    var_128 = 0;
    var_136 = -4229055974937675997;
    var_144 = 1;
    var_152 = 24;
    pri = fun_1AC8(var_144, var_136, var_128)
    var_168 = 0;
    var_176 = 1;
    var_184 = 0;
    var_192 = 1;
    var_200 = 32;
    pri = fun_1BB0(var_192, var_184, var_176, var_168)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9640
        case default:
        {
// switch_9640_case_default
            OP_JUMP lab_9720
// lab_9720
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9640_case_0x0
            var_8 = 0;
            pri = fun_1A98()
            var_16 = 0;
            var_24 = 3;
            var_32 = 0;
            var_40 = 100;
            var_48 = -1;
            var_56 = 1759753407737707019;
            var_64 = arg_0;
            var_72 = 56;
            pri = fun_17E0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 1;
            var_88 = 8;
            pri = fun_19D8(var_80)
            var_96 = 0;
            var_104 = 3;
            var_112 = 0;
            var_120 = 100;
            var_128 = -1;
            var_136 = 1759758905295848074;
            var_144 = arg_0;
            var_152 = 56;
            pri = fun_17E0(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
            var_160 = 1;
            var_168 = 8;
            pri = fun_19D8(var_160)
            var_176 = 0;
            pri = fun_1A98()
            var_184 = -5370629581466211416;
            pri = FlagSet(var_184)
            var_192 = -4791439079487273603;
            pri = FlagSet(var_192)
            var_200 = 1;
            var_208 = -4883040369995537269;
            pri = WorkSet(var_208, var_200)
            OP_JUMP switch_9640_case_default
        }
        case 0x1:
        {
// switch_9640_case_0x1
            var_8 = 0;
            pri = fun_1A98()
            var_16 = 0;
            var_24 = 3;
            var_32 = 0;
            var_40 = 100;
            var_48 = -1;
            var_56 = 1759752308226078808;
            var_64 = arg_0;
            var_72 = 56;
            pri = fun_17E0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 1;
            var_88 = 8;
            pri = fun_19D8(var_80)
            var_96 = 0;
            pri = fun_1A98()
            OP_JUMP switch_9640_case_default
        }
    }
// lab_9690
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 1759758905295848074;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_17E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_19D8(var_72)
    var_88 = 0;
    pri = fun_1A98()
}
// fun_9730
fun_9730() {
    var_8 = -4883040369995537269;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 3
    OP_JZER lab_9818
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 1759757805784219863;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_17E0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_80 = 1;
    var_88 = 8;
    pri = fun_19D8(var_80)
    var_96 = 0;
    pri = fun_1A98()
    OP_JUMP lab_9A08
// lab_9818
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 1759760004807476285;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_17E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_19D8(var_72)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    var_128 = 1759756706272591652;
    var_136 = arg_0;
    var_144 = 56;
    pri = fun_17E0(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_19D8(var_152)
    var_168 = 0;
    pri = fun_1A98()
    var_176 = 3;
    var_184 = -4883040369995537269;
    pri = WorkSet(var_184, var_176)
    var_192 = 1;
    var_200 = 3;
    var_208 = 0;
    var_216 = 0;
    var_224 = arg_0;
    var_232 = 40;
    pri = fun_5D80(var_224, var_216, var_208, var_200, var_192)
    var_240 = arg_0;
    var_248 = 8;
    pri = fun_0940(var_240)
    var_256 = 6;
    var_264 = 4;
    var_272 = 2;
    var_280 = 0;
    var_288 = 8;
    var_296 = 1;
    var_304 = 1118;
    var_312 = arg_0;
    var_320 = 64;
    pri = fun_8328(var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
// lab_9A08
    pri = 0;
    return pri;
}
// fun_9A18
fun_9A18() {
    var_8 = -4883040369995537269;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9AB8
    var_16 = 31512;
    var_24 = 8802641224559852288;
    pri = IsAnimationStateName_(var_24, var_16)
    OP_JZER lab_9AB8
    pri = 1;
    OP_JUMP lab_9AC0
// lab_9AB8
    pri = 0;
// lab_9AC0
    OP_JZER lab_9AF8
    var_8 = -3984747864468851993;
    pri = ReserveScript(var_8)
// lab_9AF8
    pri = 0;
    return pri;
}
// fun_9B08
fun_9B08() {
    var_8 = -4883040369995537269;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9BE0
    var_16 = 4420545685523217190;
    pri = FlagGet(var_16)
    OP_JNZ lab_9BE0
    var_24 = 31648;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JZER lab_9BE0
    pri = 1;
    OP_JUMP lab_9BE8
// lab_9BE0
    pri = 0;
// lab_9BE8
    OP_JZER lab_9C20
    var_8 = -8671752420955643178;
    pri = ReserveScript(var_8)
// lab_9C20
    pri = 0;
    return pri;
}
// fun_9C30
fun_9C30() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0940(var_8)
    var_24 = 1;
    var_32 = 0;
    var_40 = 31784;
    var_48 = 8;
    var_56 = 32;
    pri = fun_0308(var_48, var_40, var_32, var_24)
    var_64 = 0;
    pri = fun_0378()
    var_72 = -2427908484187054076;
    var_80 = 8;
    pri = fun_0518(var_72)
    var_88 = 10;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 0;
    pri = fun_0548()
    var_112 = 5;
    var_120 = 8;
    pri = fun_0060(var_112)
    var_128 = 31832;
    var_136 = 8;
    var_144 = 16;
    pri = fun_02A8(var_136, var_128)
    var_152 = -5370629581466211416;
    pri = FlagReset(var_152)
    var_160 = 0;
    pri = fun_0378()
    var_168 = 0;
    var_176 = 3;
    var_184 = 0;
    var_192 = 100;
    var_200 = -1;
    OP_PUSH2_C -8311721934767833868, -2427908484187054076
    var_208 = 56;
    pri = fun_17E0(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_216 = 1;
    var_224 = 8;
    pri = fun_19D8(var_216)
    var_232 = 0;
    pri = fun_1A98()
    var_240 = 3;
    var_248 = 0;
    var_256 = 6421899465124986241;
    var_264 = 24;
    pri = fun_1890(var_256, var_248, var_240)
    var_272 = 1;
    var_280 = 8;
    pri = fun_19D8(var_272)
    var_288 = 0;
    pri = fun_1A98()
    var_296 = 1;
    var_304 = 0;
    var_312 = 31784;
    var_320 = 8;
    var_328 = 32;
    pri = fun_0308(var_320, var_312, var_304, var_296)
    var_336 = 0;
    pri = fun_0378()
    OP_PUSH2_C -2427908484187054076, 7010550124661770190
    pri = SetBamiriInfoToChara(var_336, var_328)
    var_344 = 15;
    var_352 = 8;
    pri = fun_0060(var_344)
    var_360 = 31832;
    var_368 = 8;
    var_376 = 16;
    pri = fun_02A8(var_368, var_360)
    var_384 = 0;
    pri = fun_0378()
    var_392 = 3;
    var_400 = 0;
    var_408 = 6421896166590101608;
    var_416 = 24;
    pri = fun_1890(var_408, var_400, var_392)
    var_424 = 1;
    var_432 = 8;
    pri = fun_19D8(var_424)
    var_440 = 0;
    pri = fun_1A98()
    var_448 = -4791439079487273603;
    pri = FlagReset(var_448)
    var_456 = 2;
    var_464 = -4883040369995537269;
    pri = WorkSet(var_464, var_456)
    pri = 0;
    return pri;
}
// fun_A050
fun_A050() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0940(var_8)
    var_24 = 1;
    var_32 = 0;
    var_40 = 31784;
    var_48 = 8;
    var_56 = 32;
    pri = fun_0308(var_48, var_40, var_32, var_24)
    var_64 = 0;
    pri = fun_0378()
    var_72 = 8301581247583769137;
    var_80 = 8;
    pri = fun_0518(var_72)
    var_88 = 10;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 0;
    pri = fun_0548()
    var_112 = 1;
    var_120 = 1;
    var_128 = 0;
    pri = float(var_128)
    var_136 = pri;
    var_144 = 7235;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 33696;
    pri = float(var_160)
    var_168 = pri;
    var_176 = 8301581247583769137;
    var_184 = 48;
    pri = fun_06C0(var_176, var_168, var_160, var_152, var_144, var_136)
    var_192 = 1;
    var_200 = 1;
    var_208 = 180;
    pri = float(var_208)
    var_216 = pri;
    OP_PUSH3_C 4664846932840357560, 4674865652556082708, 8802641224559852288
    var_224 = 48;
    pri = fun_06C0(var_216, var_208, var_200, var_192, var_184, var_176)
    var_232 = 15;
    var_240 = 8;
    pri = fun_0060(var_232)
    var_248 = 1;
    var_256 = 1;
    var_264 = 0;
    var_272 = 1;
    var_280 = 1;
    var_288 = 8301581247583769137;
    var_296 = 48;
    pri = fun_7AB0(var_288, var_280, var_272, var_264, var_256, var_248)
    var_304 = 31832;
    var_312 = 8;
    var_320 = 16;
    pri = fun_02A8(var_312, var_304)
    var_328 = -4791439079487273603;
    pri = FlagReset(var_328)
    var_336 = 0;
    pri = fun_0378()
    var_344 = 0;
    var_352 = 3;
    var_360 = 0;
    var_368 = 100;
    var_376 = -1;
    OP_PUSH2_C -8677117243123428213, 8301581247583769137
    var_384 = 56;
    pri = fun_17E0(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 1;
    var_400 = 8;
    pri = fun_19D8(var_392)
    var_408 = 0;
    var_416 = 3;
    var_424 = 0;
    var_432 = 100;
    var_440 = -1;
    OP_PUSH2_C -8677118342635056424, 8301581247583769137
    var_448 = 56;
    pri = fun_17E0(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_456 = 1;
    var_464 = 8;
    pri = fun_19D8(var_456)
    var_472 = 0;
    pri = fun_1A98()
    var_480 = 0;
    var_488 = 3;
    var_496 = 0;
    var_504 = 100;
    var_512 = -1;
    OP_PUSH2_C -8677110646053658947, 8301581247583769137
    var_520 = 56;
    pri = fun_17E0(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_528 = 1;
    var_536 = 8;
    pri = fun_19D8(var_528)
    var_544 = 0;
    pri = fun_1A98()
    var_552 = 1;
    var_560 = 3;
    var_568 = 0;
    var_576 = 0;
    var_584 = 8301581247583769137;
    var_592 = 40;
    pri = fun_5D80(var_584, var_576, var_568, var_560, var_552)
    var_600 = 8301581247583769137;
    var_608 = 8;
    pri = fun_0940(var_600)
    var_616 = 6;
    var_624 = 4;
    var_632 = 2;
    var_640 = 0;
    var_648 = 8;
    var_656 = 1;
    var_664 = 30;
    var_672 = 8301581247583769137;
    var_680 = 64;
    pri = fun_8328(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_688 = 1;
    var_696 = 1;
    var_704 = -1;
    var_712 = -1;
    var_720 = 0;
    var_728 = 0;
    var_736 = 8301581247583769137;
    var_744 = 56;
    pri = fun_3A48(var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_752 = 0;
    var_760 = 3;
    var_768 = 0;
    var_776 = 100;
    var_784 = -1;
    OP_PUSH2_C -8677111745565287158, 8301581247583769137
    var_792 = 56;
    pri = fun_17E0(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_800 = 1;
    var_808 = 8;
    pri = fun_19D8(var_800)
    var_816 = 0;
    pri = fun_1A98()
    var_824 = 1;
    var_832 = 0;
    var_840 = 31784;
    var_848 = 8;
    var_856 = 32;
    pri = fun_0308(var_848, var_840, var_832, var_824)
    var_864 = 0;
    pri = fun_0378()
    var_872 = 0;
    var_880 = 0;
    var_888 = 0;
    var_896 = 8301581247583769137;
    var_904 = 32;
    pri = fun_7C70(var_896, var_888, var_880, var_872)
    var_912 = 1;
    var_920 = 1;
    OP_PUSH4_C -4584061008681841459, 4665722407978857923, 4674552118569085174, 8301581247583769137
    var_928 = 48;
    pri = fun_06C0(var_920, var_912, var_904, var_896, var_888, var_880)
    var_936 = 15;
    var_944 = 8;
    pri = fun_0060(var_936)
    var_952 = 31832;
    var_960 = 8;
    var_968 = 16;
    pri = fun_02A8(var_960, var_952)
    var_976 = 0;
    pri = fun_0378()
    var_984 = 3;
    var_992 = 0;
    var_1000 = 6421897266101729819;
    var_1008 = 24;
    pri = fun_1890(var_1000, var_992, var_984)
    var_1016 = 1;
    var_1024 = 8;
    pri = fun_19D8(var_1016)
    var_1032 = 0;
    pri = fun_1A98()
    var_1040 = 4420545685523217190;
    pri = FlagSet(var_1040)
    pri = 0;
    return pri;
}
// fun_A860
fun_A860() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = 8934093125911233738;
    var_56 = 48;
    pri = fun_7AB0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    OP_PUSH2_C 5306463637812681878, 8934093125911233738
    var_104 = 56;
    pri = fun_17E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_19D8(var_112)
    var_128 = 0;
    pri = fun_1A98()
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    var_160 = 8934093125911233738;
    var_168 = 32;
    pri = fun_7C70(var_160, var_152, var_144, var_136)
    pri = 0;
    return pri;
}
